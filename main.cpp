#include "main.hpp"
#include "Quicksort.hpp"
#include <vector>

int main(int argc, char * argv[]){
	Quicksort qs;
	std::vector<int> list = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	qs.swap(list, 0, list.size()-1);
  return 0;
}
