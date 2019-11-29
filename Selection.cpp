#include "Selection.hpp"
#include <iostream>
#include <cstdlib>
#include <vector>

void Selection::sort(vector<int>& vect){
	
	int minimumIndex = 0;
	
	for(int i = 0; i < vect.size() - 1; i++){
		minimumIndex = i;
		for(int j = i + 1; j < vect.size(); j++){
			if(vect.at(j) < vect.at(minimumIndex)){
				minimumIndex = j;
			}
			swap(vect[minimumIndex], vect[i]);
		}
	}
}

