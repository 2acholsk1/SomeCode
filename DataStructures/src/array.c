#include "array.h"

/*   INITIALIZATION 

int arr[5] = {};
int arr[5] = {1, 2, 3, 4, 5};
int arr[] = {1, 2, 3, 4, 5};
int arr[5] = {1, 2, 3};         rest of declaring size is 0
int arr[] {1, 2, 3, 4, 5};      in C++  

    INSERTION

    arr[2] = 10;
    Time Complexity -> O(1) to single element
                       O(n) to all the elements

    
    ACCESS

    return arr[2];

    Time Complexity -> O(1)

    SEARCHING

    search() function in unsorted array
    Time Complexity -> O(N), where N is size of the array

*/


int search(int arr[], int size, int key)
{
    int output = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            output = i;
        }
    }
    return output;
}


int main()
{
    //SEARCHING UNSORTED
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof (arr[0]);
    int key = 5;
    int position =search(arr, size, key);
    if (position != -1)
    {
        printf("Element found at position %d\n", position + 1);
    }
    else
    {
        printf("Element not found");
    }

    return 0;
}