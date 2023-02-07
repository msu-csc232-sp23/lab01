/**
 * CSC232 - Data Structures
 * Missouri State University
 *
 * @file    test_task1.cpp
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Test suite to validate task 1 of this assignment.
 * @version v2022.12.26
 * @date    Spring 2023
 */

#include "doctest.h"
#include "csc232.h"

TEST_SUITE( "Task 1"
            * doctest::description( "A suite of tests for Task 1" )
            * doctest::skip( SKIP_TESTING_TASK_1 ))
{
    TEST_CASE( "Check that declaration exists" )
    {
        const char *search_string = "remove_and_count";
        const char *filename = "csc232.h";
        std::ifstream input_stream{ filename, std::ios::in };
        if ( !input_stream )
        {
            FAIL_CHECK( "Header file could not be opened!" );
            exit( EXIT_FAILURE );
        }

        // Read the entire file into memory
        std::string file_contents;
        std::string current_line;
        while ( getline( input_stream, current_line ))
            file_contents += current_line + '\n';
        input_stream.close( );

        size_t pos = file_contents.find( search_string );
        REQUIRE_MESSAGE(( static_cast<int>(pos) > 0 ),
                        "It appears you have not properly declared your client function." );
    }
}
