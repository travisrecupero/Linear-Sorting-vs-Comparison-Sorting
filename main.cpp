#include "main.hpp"
#include "Quicksort.hpp"
#include <vector>
#include <chrono>
#include <iostream>

int main(int argc, char * argv[]){
	Quicksort qs;
	std::vector<int> list = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
  auto start = std::chrono::high_resolution_clock::now();
	qs.swap(list, 0, list.size()-1);
  auto stop = std::chrono::high_resolution_clock::now();
  auto time = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
  std::cout << "Quicksort took a total of: " << time.count() << " microseconds to complete." << std::endl;
  return 0;
}
