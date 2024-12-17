#include <stdio.h>


int partition(int arr[],int low,int high)
{
    int i = low+1, j = high;
    int pivot = arr[low];
    int temp;

    while (i<j)
    {
        while (arr[i]<=pivot)
        {
            i++;
        }
        while (arr[j]>pivot)
        {
            j--;

        }
        if (i<j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;

        }
    }
    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;

    return j;    
        

    
    }
    


void QuickSort(int arr[],int low,int high)
{
    int j;

    if (low<high)
    {
        j = partition(arr,low,high);
        QuickSort(arr,low,j-1);
        QuickSort(arr,j+1,high);
    }
}


int main()
{
    int n;
    printf("Enter the size of the list\n");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the Elements in the array for quick sort\n");


    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }

    QuickSort(arr,0,n-1);
    for (int i=0;i<n;i++)
    {
        printf("Element %d  : %d \n",i,arr[i]);
    }

}