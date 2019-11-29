#include "Selection.hpp"
#include <iostream>
#include <cstdlib>
#include <algorithm>



void Selection::sort(std::vector<int>& vect){

	int minimumIndex = 0;

	for(int i = 0; i < vect.size() - 1; i++){
		minimumIndex = i;
		for(int j = i + 1; j < vect.size(); j++){
			if(vect[j] < vect[minimumIndex]){
				minimumIndex = j;
			}
		}
		if(minimumIndex != i){
			std::swap(vect[minimumIndex], vect[i]);
		}
	}

}

