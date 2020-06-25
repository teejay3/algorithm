#include <iostream>
#include <vector>
#include "bubble.h"

void print_vector(std::vector<int>& vec)
{
    for(const int a : vec)
    std::cout << a << ' ';
    std::cout << std::endl;
}
void get_random_vector(std::vector<int>& vec)
{
    for(size_t i = 0; i < vec.size(); i++)
    {
        vec[i] = i;
    }
}

int main(int argc, char* argv[])
{
    std::vector<int> vec(50);
    get_random_vector(vec);
    print_vector(vec);
    bubble::sort(vec);
    print_vector(vec);
    return 0;
}