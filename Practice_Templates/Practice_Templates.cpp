// Practice_Templates.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

template <class T>
T sum(T a, T b)
{
    return a + b;
}

template <int n> struct funStruct
{
    static const int val = 2 * funStruct<n - 1>::val;
};

template <> struct funStruct<0>
{
    static const int val = 1;
};

std::vector<int> arrayOfMultiples(int num, int length) 
{
    std::vector<int> output(0);

    for (int i = 1; i < length + 1; i++)
    {
        output.push_back(i * num);
    }

    return output;
}

int main()
{
    /*int y = 7, x = 14;
    std::cout << sum(x, y) << std::endl;*/

    //std::cout << arrayOfMultiples(5, 7) << std::endl;

    arrayOfMultiples(5, 7);

    std::string example = "my name jeff";

    std::count_if(example.begin(), example.end(), ' ');

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
