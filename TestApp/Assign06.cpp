// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;


template <typename T>
int binarySearch(T arr[], int size, T value)
{

    int first = 0;
    int last = size - 1;
    int middle = (first + last) / 2;
    int count = 0;

    while (first <= last) {
        count++;
        if (arr[middle] < value)
            first = middle + 1;
        else if (arr[middle] == value) {
            return(count);
            break;
        }
        else
            last = middle - 1;

        middle = (first + last) / 2;
    }

}
int main()
{


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