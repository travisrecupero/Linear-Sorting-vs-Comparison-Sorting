#include <vector>
#include "Quicksort.hpp"
#include <algorithm>
#include <iostream>

int Quicksort::swap(std::vector<int> &data, int low, int high){
 // std::cout << "Pre-sorted list:" << std::endl;
  //for(int i =0; i < data.size(); i++){
    //std::cout << data[i] << "->";
  //}
  //std::cout << "" << std::endl;
  if(low < high){
    int q;
    q = Quicksort::partition(data, low, high);
    Quicksort::swap(data, low, q-1);
    Quicksort::swap(data, q+1, high);
  }

 // std::cout << "After sorting: " << std::endl;
  //for(int i = 0; i < data.size(); i++){
    //std::cout << data[i] << "->";
  //}
  //std::cout << "" << std::endl;
  return 0;
}

int Quicksort::partition(std::vector<int> &data, int low, int high){
  int x = data[high];
  int i = low - 1;
  for(int j = low; j < high; j++){
    if(data[j] < x){
      i++;
      std::swap(data[i], data[j]);
    }
  }
  i++;
  std::swap(data[i], data[high]);
  return i;
}
