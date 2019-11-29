#include "Radix.hpp"


int Radix::find_max(std::vector<int> &vec, int size)
{
    int max;
    max = vec[0];
    for(int i = 1; i<size; i++)
    {
        if(vec[i] > max)
        {
            max = vec[i];
        }
    }
    return max;
}

void Radix::counting_sort(std::vector<int> &vec, int size, int exponent)
{
    int count_arr[10] = {0,0,0,0,0,0,0,0,0,0};

    for(int i = 0; i < size; i++)
    {
        int count_index = vec[i]/exponent;
        count_arr[(count_index) %10]++;
    }
    count_arr[0]--;

    for(int i = 1; i < 10; i++)
    {
        count_arr[i] = count_arr[i] + count_arr[i-1];
    }
    std::vector<int> vec2(vec);
    for(int i = size-1; i > -1; i--)
    {
        int count_index = (vec[i]/exponent)%10;
        int vec2_index = count_arr[count_index];
        vec2[vec2_index] = vec[i];
        count_arr[count_index]--;

    }

    for(int i = 0; i < size; i++)
    {
        vec[i] = vec2[i];
    }

    return;
}

void Radix::sort(std::vector<int> &vec)
{
    int max = find_max(vec, vec.size());

    for(int i = 1; max > i; i*=10)
    {
        counting_sort(vec, vec.size(), i);
    }
    return;
}
