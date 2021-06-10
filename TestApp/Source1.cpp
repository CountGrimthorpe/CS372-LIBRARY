// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "cs372List.h"
#include "cs372Queue.h"
#include "cs372vector.h"


int main()
{
  
    int choice = 0;

    do {
    
    std::cout << "1)  Task Number\n";
    std::cout << "2)  U/D\n";
    std::cout << "3)  Task Description\n";
    std::cin >> choice;

    

    
        switch (choice)
        {
        case 1:
            std::cout << "TaskNumber\n";
            break;
        case 2:
            std::cout << "U/D\n";
            break;
        case 3:
            std::cout << "TaskDescription\n";
            break;
        default:
            std::cout << "Please enter a valid choice\n\n";
            break;
        }
    } while (choice != 1 && choice != 2 && choice !=3);


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
