/**
 * CSC232 - Data Structures
 * Missouri State University
 *
 * @file    csc232.h
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Useful libraries and function declarations for CSC232 assignments.
 * @version v2022.12.26
 * @date    Spring 2023
 */

#ifndef CSC232
#define CSC232

#define FALSE 0
#define TRUE !FALSE
#define SKIP_TESTING_TASK_1 TRUE
#define SKIP_TESTING_TASK_2 TRUE
#define SKIP_TESTING_TASK_3 TRUE


#include <algorithm>
#include <cassert>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <fstream>
#include <functional>
#include <iomanip>
#include <iostream>
#include <list>
#include <memory>
#include <map>
#include <queue>
#include <random>
#include <set>
#include <stack>
#include <stdexcept>
#include <string>
#include <utility>
#include <vector>

// Include template class implementation source files
#include "bag.h"
#include "VectorBag.cpp"

// Declare template usage to inform compiler what code to actually implement for the template
template class VectorBag<std::string>;

// TODO: Task 1 - Declare a client function template named remove_and_count() as needed by exercise 5.
//                The function should return an integer and shall have two parameters:
//                1. A Pointer to a Bag<T>
//                2. An item of type T
//
//                Keep in mind, this should be declared as a template function, so here, T is
//                whatever you call your template parameter.

// TODO: Task 2 - Implement client function
//                Again, don't forget that this is a template function

// DO NOT MODIFY OR ADD ANYTHING BELOW THIS COMMENT!

/**
 * @brief A demonstration for how an input file is read.
 *
 * @param file_name the file to opened for processing
 * @return true if the given file was successfully opened, false otherwise.
 */
bool read_data(const std::string& file_name);

#endif
