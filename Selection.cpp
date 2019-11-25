#include "Selection.hpp"
#include <iostream>
#include <cstdlib>


void Selection::sort(int[] array, int size){
	
	int minimumIndex = 0;
	
	for(int i = 0; i < size-1; i++){
		minimumIndex = i;
		for(int j = i + 1; j < size; j++){
			if(array[j] < array[minimumIndex]){
				minimumIndex = j;
			}
			swap(&array[minimumIndex], &array[i]);
		}
	}
}

void Selection::swap(int *minPointer, int *currPointer){
	int temp = *minPointer;
	*minPointer = *currPointer;
	*currPointer = temp;
}

