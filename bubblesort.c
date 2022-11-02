#include <stdio.h>
#include <stdlib.h>

void tukar(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void FunctionBubbleSort(int arr[], int length)
{
    for (int i = 0; i < length - 1; i++)
    {
        for (int j = 0; j < length - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                tukar(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void showBubbleSort(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

int main()
{
    int arr[] = {1, 8, 3, 9, 10};
    int length = sizeof(arr) / sizeof(arr[0]);
    FunctionBubbleSort(arr, length);
    showBubbleSort(arr, length);

    return 0;
}
