#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int* a, int* b)
{
    int ptemp = *a;
    *a = *b;
    *b = ptemp;
}

void BubbleSort(int* arr, int arr_size)
{
    for (int i = 0; i < arr_size - 1; i++)
    {
        for(int j = 0; j < arr_size - i - 1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}


int main()
{
    srand(time(NULL));
    int size = 20;
    int arr[size];

    for(int i = 0; i < size; i++)
    {
        arr[i] = rand() % 99;
    }
    
    printf("original array: ");
    for(int i = 0; i < size; i++)
    {
        printf("%d, ", arr[i]);
    }

    BubbleSort(arr, size);
    printf("\nsorted array: ");
    for(int i = 0; i < size; i++)
    {
        printf("%d, ", arr[i]);
    }
    return 0;
}
