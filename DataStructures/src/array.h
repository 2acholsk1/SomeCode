#ifndef __ARRAY_H__
#define __ARRAY_H__

#include <stdio.h>

/*   Functions   */

//Unsorted array sorting
int search(int arr[], int size, int key);   // TC -> O(N)   AS -> O(1)
int insertEnd(int arr[], int n, int key, int capacity);

#endif /*__ARRAY_H__ */