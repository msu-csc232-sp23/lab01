/**
 * CSC232 - Data Structures
 * Missouri State University
 *
 * @file    test_task2.cpp
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Test suite to validate task 2 of this assignment.
 * @version v2022.12.26
 * @date    Spring 2023
 */

#include "doctest.h"
#include "csc232.h"

#if !SKIP_TESTING_TASK_2
TEST_SUITE( "Task 2"
            * doctest::description( "A suite of tests for Task 2" )
            * doctest::skip( SKIP_TESTING_TASK_2 ) )
{
    TEST_CASE( "Stubbed expectations" )
    {
        Bag<std::string> *bag = new VectorBag<std::string>{ };
        int expected{ 0 };
        int actual{ bag->getCurrentSize() };
        REQUIRE_EQ( expected, actual );
    }
}
#endif