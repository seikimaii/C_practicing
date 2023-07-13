#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void printArray(int* arr, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
        if(i < size -1)
        {
            printf(",");
        }
    }

}

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


int Partition(int* arr, int low, int high)
{
    int pivot = arr[high];
    int leftwall = low - 1;

    for(int j = low; j < high; j++)
    {
        if (arr[j] < pivot)
        {
            leftwall++;
            swap(&arr[j], &arr[leftwall]);

        }
    }

    swap(&arr[leftwall+1], &arr[high]);
    // printArray(arr, 5);
    return (leftwall + 1);

}

void quickSort(int* arr, int low, int high)
{
    if (low < high)
    {
        int pivot = Partition(arr, low, high);

        quickSort(arr, low, pivot-1);
        quickSort(arr, pivot+1, high);

    }
}

void CheckAnswer(int* arr, int size)
{
    for(int i=0; i<size-2; i++)
    {
        if (arr[i] <= arr[i+1])
        {

        }
        else
        {
            printf("Wrong Answer!!");
            return;
        }

    }
    printf("Accepted!");
}

int main()
{
    srand(time(NULL));
    int arr[1000];
    for (int i=0; i< 1000; i++)
    {
        arr[i] = rand() % 1000;
    }
    int size = sizeof(arr)/sizeof(arr[0]);
    

    quickSort(arr, 0, size-1);

    CheckAnswer(arr, size);
    


    return 0;
}