#include "main.hpp"
#include "Quicksort.hpp"
#include <vector>
#include <chrono>
#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char * argv[]){
	if( argc != 2){
		std::cerr<< "Incorrect arguments. Proper arguments: ./final <inputfile>" << std::endl;
		return -1;
	}
	std::vector<int> inp_vec;
	if(readFile(inp_vec,argv[1]) == -1){
		return -1;
	}
	std::vector<int> qs_vec(inp_vec);

	//this is where the quicksort algorithm runs
	Quicksort qs;
	auto start = std::chrono::high_resolution_clock::now();
	qs.swap(qs_vec, 0, qs_vec.size()-1);
	auto stop = std::chrono::high_resolution_clock::now();
	auto time = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
	std::cout << "Quicksort took a total of: " << time.count() << " microseconds to complete." << std::endl;
	//end of quicksort
	return 0;
}


int readFile(std::vector<int> &vec, std::string inputFile){
	std::ifstream input;
	input.open(inputFile);
	if(!input.is_open()){
		std::cerr << "Error opening file. " << std::endl;
		return -1;
	}
	std::string line;
	while(getline(input, line)){
		vec.push_back(std::stoi(line));
	}
	return 0;
}
