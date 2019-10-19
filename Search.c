#include"Search.h"

//------------- Implementation of the Functions ---------------//


char Binary_Search ( int *arr,int arr_size, int target)
{

int mid , last=(arr_size-1) , first=0 , key;

    while (first < last)
    {
        mid=(last+first)/2;

        if(arr[mid]==key)
        {
            return mid;
        }

        else if(target>arr[mid])
        {first=mid+1;}

        else
        {last=mid-1;}
    }

    return -1;
}

/*
Analyze of Binary_Search:-
------------------------
Time_Complexity:
f(n)=  5N^2 + 5
g(n)=N^2

Space_Complexity:
O(1)
*/

char Linear_Search ( int *arr,int arr_size, int target)
{
    int i=0;
    for(i=0;i<arr_size;i++)
    {
        if(arr[i] == target )
        {
            return i;
        }
    }

    return -1;
}

/*
Analyze of Linear_Search:-
------------------------
Time_Complexity:
f(n)= 3N^2+3
g(n)=N^2

Space_Complexity:
O(1)
*/
