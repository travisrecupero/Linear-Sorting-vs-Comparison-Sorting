#ifndef RADIX
#define RADIX
#include <vector>
class Radix
{

    public:
        int find_max(std::vector<int> &vec, int size);
        void counting_sort(std::vector<int> &vec, int size, int exponent);
        void sort(std::vector<int> &vec);

};

#endif
