#include <stdio.h>

void Insertion_sort(int arr[],int n)
{
    int j;
    for (int i=0;i<n;i++)
    {
        int key = arr[i];

        for (j=i-1;j>=0 && (arr[j] > key);j--)
        {
            arr[j+1] = arr[j];

            

        }

        arr[j+1] = key;

    }
}

void display(int arr[],int n)
{
    for (int i=0;i<n;i++)
    {
        printf("%d \n",arr[i]);

    }
}


int main()
{

    
}