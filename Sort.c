
#include "Sort.h"

//------------- Implementation of the Functions ---------------//



void bubble_sort (int *pt,int arr_size)
{
	int i=0, flag=0, temp ;
	do
	{
		top--;
		flag=0;
		for(i=0;i<arr_size;i++)
		{
			if(pt[i]>pt[i+1])				// if(*pt(i)<*pt(i+1))
			{
				temp=pt[i];
				pt[i]=pt[i+1];
				pt[i+1]=temp;
				flag ++ ;
			}
		}

	}while(flag>0);

}

/*
Analyze of Bubble Sort:-
------------------------
Time_Complexity:
f(n)=  4N^2 + 5N + 3
g(n)=N^2

Space_Complexity:
O(1)
*/

void selection_sort(int array[], int size)
{

    int i , j , temp ,min ;

    for(i=0; i <size-1;i++)
    {
        min=i;

        for(j=i+1;j<size;j++)
        {
            if(array[min] > array[j])
            {
                min=j;
            }
        }

        temp = array[i];
        array[i]=array[min];
        array[min]=temp;
    }
}

/*
Analyze of Selection Sort:-
------------------------
Time_Complexity:
f(n)= 7N^2 + 5N + 4
g(n)= N^2
Space_Complexity:
O(1)
*/

void merge_partition (int arr[], int arr_size )
{
    int first=0;
    int last=arr_size-1;

	if (first<last)
	{
		int mid = (first+last)/2 ;
	// First_Left= first element in the first array (left) .... Last_Left= last element in the first array (left) " = mid"
	// First_Right= first element in the second array (Right) " = mid+1" .... Last_Right= last element in the second array (right)
	// array[b] is the input while array[a] is the output
		merge_partition (arr,first,mid,size);

		merge_partition (arr,mid+1,last,size);

		merge_sort (arr,first,mid,mid+1,last,size);
	}
}

/*
Analyze of Merge Partition:-
------------------------
Time_Complexity:
f(n)= LogN+ 4N
g(n)=logN

Space_Complexity:
O(1)
*/


void merge_sort (int arr[],int First_Left, int Last_Left, int First_Right, int Last_Right , int size)
{
	int in=First_Left ;
    int arr_2[100];
    int i=0;
    // takes a copy from original array
	for(i=0; i<size ; i++)
	{ arr_2[i]=arr[i];}

	while ( (First_Left<=Last_Left) && (First_Right<=Last_Right) )				// it's used for sorting two array successively in ascending order
	{
		if(arr_2[First_Left]<arr_2[First_Right])
		{
			arr[in]=arr_2[First_Left];
			First_Left++;
			in++ ;
		}

		else if (arr_2[First_Right]< arr_2[First_Left])
		{
			arr[in]= arr[First_Right];
			First_Right ++;
			in++;
		}
	}

        /*
        the two condition are ( (First_Left<=Last_Left) && (First_Right<=Last_Right) )
        it's used if one of the two condition is satisfied and other not .
        means if residual elements that are in one of two arrays will enter the output array without being sorting
        */

	  while(First_Left<=Last_Left)
	 {
	 	arr[in]=arr_2[First_Left];
	 	First_Left++;
	 	in++;
	 }

	 while (First_Right<=Last_Right)
	 {
	 	arr[in]=arr_2[First_Right];
	 	First_Right++;
	 	in++ ;
	 }

}

/*
Analyze of Merge Sort:-
------------------------

Time_Complexity:
f(n)=
g(n)= n
Space_Complexity:
O(n)=
*/


//Combination of Merge sort and Merge Partition:-

Time_Complexity:
f(n)=
g(n)= n
Space_Complexity:
O(n)=
*/
