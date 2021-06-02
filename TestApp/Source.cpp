// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "assignment1.h"



void problem1();
void problem2();
void problem3();
std::string helper_problem3();
int main()
{
    problem1();
    std::cout << "Problem 1 output " << "\n\n";

    problem2();
    std::cout << "Problem 2 output " << "\n\n";

    problem3();
    std::cout << "\nProblem 3 output " << "\n\n";

    return 0;
}

void problem1()
{
    List* pointer_name = NULL;

    pointer_name = new List;

    pointer_name->setIndex(81, 0);

    for (int i = 0; i < 10; i++)
    {
        pointer_name->setIndex(i * i, i);
    }



    List* second_pointer = pointer_name;

   

    delete[] pointer_name;



    for (int i = 0; i < 10; i++)
    {
        std::cout << second_pointer->getIndex(i) << "\n";
    }
}

void problem2()
{
    List* pointer_name = NULL;

    pointer_name = new List;

    pointer_name->setIndex(81, 0);

    for (int i = 0; i < 10; i++)
    {
        pointer_name->setIndex(i * i, i);
    }



    List* second_pointer = pointer_name;


    delete pointer_name;


    std::cout << second_pointer << "\n";
    for (int i = 0; i < 10; i++)
    {

        std::cout << second_pointer->getIndex(i) << "\n";
    }
}

void problem3()
{
    std::string to_print = helper_problem3();
    std::cout << to_print;
}

//I think I'm not understaning somehing in the instructions for this one.  Since I don't think I'm supposed to be getting the string back with no problems
std::string helper_problem3()
{
    std::string quote = "That's no moon!";


    std::string* first_string_ptr = &quote;

    std::string* second_string_ptr = new std::string;

    second_string_ptr = first_string_ptr;

    return(*second_string_ptr);
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
