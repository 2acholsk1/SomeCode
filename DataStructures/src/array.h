#ifndef __ARRAY_H__
#define __ARRAY_H__

#include <stdio.h>

/*   Functions   */

//Unsorted array sorting
int search(int arr[], int size, int key);                               // TC -> O(N)   AS -> O(1)
int insertEnd(int arr[], int n, int key, int capacity);                 // TC -> O(1)   AS -> O(1)
void insertAnyPosition(int arr[], int n, int number, int pos);          // TC -> O(N)   AS -> O(1)
int deleteElement(int arr[], int n, int key);
#endif /*__ARRAY_H__ */