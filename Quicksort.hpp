#ifndef QUICK_H
#define QUICK_H
#include <vector>
class Quicksort{
	public:
  		int swap(std::vector<int> &data, int low, int high);
	private:
  		int partition(std::vector<int> &arr, int low, int high);

};

#endif
