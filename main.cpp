#include "main.hpp"
#include "Quicksort.hpp"
#include <vector>
#include <chrono>
#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char * argv[]){
	std::vector<int> inp_vec;
	readFile(inp_vec,argv[1]);
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
	std::string line;
	while(getline(input, line)){
		vec.push_back(std::stoi(line));
	}
	return 0;
}
