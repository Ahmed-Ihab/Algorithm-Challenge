
#include "Search.h"
#include "Sort.h"

#include <stdlib.h>
#include <stdio.h>



void Print_array(int arr[], int arr_size)
{
int i;
printf("\n");
for (i = 0; i < arr_size; i++)
printf("%d ", arr[i]);
}

int main (void)
{
    char test;
    int arr_size=0;
	int arr[] = { 1, 5, 2, 1, 3, 2, 1 };
    arr_size = sizeof(arr) / sizeof(arr[0]);

    bubble_sort( arr, arr_size);
    Print_array( arr ,  arr_size);

	int arr_1[] = { 1, 5, 3, 1, 8, 2, 4};
    arr_size = sizeof(arr_1) / sizeof(arr_1[0]);

    selection_sort( arr_1,  arr_size);
    Print_array( arr_1 ,  arr_size);

    int arr_2[] = { 1, 5, 3, 1, 8, 2, 4};
    arr_size = sizeof(arr_2) / sizeof(arr_2[0]);

    merge_partition( arr_2,0,arr_size-1,arr_size);
    Print_array( arr_2,  arr_size);

    return 0;
}
