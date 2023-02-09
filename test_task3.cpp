/**
 * CSC232 - Data Structures
 * Missouri State University
 *
 * @file    test_task3.cpp
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Test suite to validate task 3 of this assignment.
 * @version v2022.12.26
 * @date    Spring 2023
 */

#include "doctest.h"
#include "csc232.h"

#if !SKIP_TESTING_TASK_3
TEST_SUITE( "Task 3"
            * doctest::description( "A suite of tests for Task 3" )
            * doctest::skip( SKIP_TESTING_TASK_3 ))
{
    TEST_CASE( "An empty bag doesn't get processed" )
    {
        Bag<std::string> *bag = new VectorBag<std::string>{ };
        int expected{ 0 };
        int actual{ bag->getCurrentSize( ) };
        REQUIRE_EQ( expected, actual );
    }

    TEST_CASE( "Removing two items" )
    {
        Bag<std::string> *bag = new VectorBag<std::string>{};
        bag->add( "carrots" );
        bag->add( "carrots" );
        bag->add( "mushrooms" );
        std::string item{ "carrots" };

        int expected{ 2 };
        int actual{ remove_and_count( bag, item ) };
        REQUIRE_EQ( expected, actual );
    }
}
#endif