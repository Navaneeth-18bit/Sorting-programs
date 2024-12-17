//write a program to sort the array of numbers using bubble sort. 


#include <stdio.h>

void Bubble_sort(int arr[],int n)
{
    int temp;

    for (int i=0;i<n-1;i++)
    {
        for (int j=0;j<n-i-1;j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]=temp;

            }
        }
    }

}

void Display(int arr[],int n)
{
    for (int i=0;i<n;i++)
    {
        printf("Element %d : %d \n",i,arr[i]);


    }
}

int main()
{
    int n;
    printf("Enter the size of the List: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter Elements for Sorting \n");


    for (int i=0;i<n;i++)
    {
        printf("Enter ELement %d : ",i);
        scanf("%d",&arr[i]);
    }

    Bubble_sort(arr,n);
    Display(arr,n);



}