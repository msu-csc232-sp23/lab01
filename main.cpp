/**
 * CSC232 - Data Structures
 * Missouri State University
 *
 * @file    main.cpp
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Entry-point of the main target.
 * @version v2022.12.26
 * @date    Spring 2023
 */

#include "csc232.h"

// TODO: Declare a template function named remove_all as prescribed in Task 1
template <typename T>
int remove_all(T item);

int main( )
{
    std::string clubs[ ] = {
            "Joker",
            "Ace",
            "Two",
            "Three",
            "Four",
            "Five",
            "Six",
            "Seven",
            "Eight",
            "Nine",
            "Ten",
            "Jack",
            "Queen",
            "King"
    };

    // Create a VectorBag to hold our cards
    Bag<std::string> * grabBag = new VectorBag<std::string>();

    // Place six cards in the bag
    grabBag->add(clubs[1]);
    grabBag->add(clubs[2]);
    grabBag->add(clubs[4]);
    grabBag->add(clubs[8]);
    grabBag->add(clubs[10]);
    grabBag->add(clubs[10]);
    grabBag->add(clubs[12]);

    std::cout << "grabBag count: " << grabBag->getCurrentSize() << std::endl;
    std::cout << "frequency of \"Ten\": " << grabBag->getFrequencyOf("Ten") << std::endl;
    grabBag->remove("Ten");
    std::cout << "grabBag count: " << grabBag->getCurrentSize() << std::endl;
    std::cout << "frequency of \"Ten\": " << grabBag->getFrequencyOf("Ten") << std::endl;
    if (grabBag->contains("ten"))
        std::cout << "The bag contains \"ten\"" << std::endl;
    else
        std::cout << "The bag does not contain \"ten\"" << std::endl;
    return EXIT_SUCCESS;
}

// TODO: Implement the remove_all template function
template <typename T>
int remove_all(T item)
{
    return 0;
}
