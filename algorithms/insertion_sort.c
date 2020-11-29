#include <stdio.h>
#include <time.h>

void selection_sort(int[], int);
void print_array(int[], int);

void main()
{
    // int arr[100] = {4, 6, 1, 5, 8};
    // int sizeOfArray = 5;
    int arr[100] = {56, 19, 43, 22, 59, 48, 98, 4, 12, 69}; //{32, 1, 6565, 323, 56, 77, 76, 61, 99, 150};
    int sizeOfArray = 10;
    // int sizeOfArray, i;
    // int arr[100];
    clock_t start_time, end_time;
    // printf("Enter the size of the array to be sorted\n");
    // scanf("%d", &sizeOfArray);
    // printf("Enter array elements:");
    // for (i = 0; i < sizeOfArray; i++)
    // {
    //     scanf("%d", &arr[i]);
    // }
    start_time = clock();
    printf("Unsorted array:\t");
    print_array(arr, sizeOfArray);
    selection_sort(arr, sizeOfArray);
    end_time = clock();
    printf("%.3f s", ((end_time - start_time) / 1000.0));
}

void selection_sort(int arr[], int size)
{
    int i, j, temp;
    for (i = 0; i < size; i++)
    {
        temp = arr[i];
        for (j = i; j >= 0; j--)
        {
            if (arr[j] > arr[j - 1])
            {
                break;
            }
            else
            {
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
        arr[j] = temp;
    }
    printf("Sorted array:\t");
    print_array(arr, size);
}

void print_array(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}