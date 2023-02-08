# Building Targets on the Command Line

This document assumes you are working on a Debian-based Linux system and 
have installed the basic build tools specified by your instructor.

## Building the Project

The following instructions assume you have opened a terminal window and have 
navigated to the root directory of this repository.

```shell
cmake -S . -B ./build -G "Unix Makefiles"
-- The CXX compiler identification is GNU 11.3.0
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: /usr/bin/c++ - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Configuring done
-- Generating done
-- Build files have been written to: /path/to/your/lab01/build
```

* `-S <path-to-source>` this tells `cmake` where to locate the source 
  `CMakeLists.txt` file; here the `.` is short-hand for the current directory.
* `-B <path-to-build>` this switch tells `cmake` where to create the build 
  directory. In this case, we're specifying a directory named `build` 
  relative to the current directory (i.e., the project root directory).
* `-G <generator-name>` this switch tells `cmake` which build system 
  generator to use. We shall always use the `Unix Makefiles` generator to 
  facilitate the use of the `make` program used to create our executable 
  targets.

## Building Specific Targets

We assume you have built the project as specified above using `cmake`. First,
navigate to the build directory:

```shell
cd build
```

### Building the `main` target

```shell
make main
[ 33%] Building CXX object CMakeFiles/main.dir/main.cpp.o
[ 66%] Building CXX object CMakeFiles/main.dir/csc232.cpp.o
[100%] Linking CXX executable main
[100%] Built target main
```

Assuming there are no compiling or linking errors, you may now execute the 
`main` target now by simply typing:

```shell
./main 
Successfully opened "main_data.txt"... will now close this file
```

The above output assumes you haven't made any changes to the files involved 
in constructing the `main` target.

### Building the `demo` target

```shell
make demo
[ 33%] Building CXX object CMakeFiles/demo.dir/csc232.cpp.o
[ 66%] Building CXX object CMakeFiles/demo.dir/demo.cpp.o
[100%] Linking CXX executable demo
[100%] Built target demo
```

Assuming there are no compiling or linking errors, you may now execute the
`demo` target now by simply typing:

```shell
./demo 
Successfully opened "demo_data.txt"... will now close this file
```

The above output assumes you haven't made any changes to the files involved
in constructing the `demo` target.

### Building the `test` target

```shell
make test
[ 20%] Building CXX object CMakeFiles/test.dir/csc232.cpp.o
[ 40%] Building CXX object CMakeFiles/test.dir/test_task1.cpp.o
[ 60%] Building CXX object CMakeFiles/test.dir/test_task2.cpp.o
[ 80%] Building CXX object CMakeFiles/test.dir/test_task3.cpp.o
[100%] Linking CXX executable test
[100%] Built target test
```

Assuming there are no compiling or linking errors, you may now execute the
`test` target now by simply typing:

```shell
./test
[doctest] doctest version is "2.4.9"
[doctest] run with "--help" for options
===============================================================================
/path/to/your/lab01/test_task1.cpp:19:
DESCRIPTION: A suite of tests for Task 1
TEST SUITE: Task 1
TEST CASE:  Task is ready for evaluation

/path/to/your/lab01/test_task1.cpp:38: FATAL ERROR: REQUIRE( (static_cast<int>(pos) > 0) ) is NOT correct!
  values: REQUIRE( false )
  logged: It appears you have not toggled TEST_TASK_1 from FALSE to TRUE. Please do this before attempt to validate this task.

===============================================================================
/path/to/your/lab01/test_task2.cpp:17:
DESCRIPTION: A suite of tests for Task 2
TEST SUITE: Task 2
TEST CASE:  Task is ready for evaluation

/path/to/your/lab01/test_task2.cpp:35: FATAL ERROR: REQUIRE( (static_cast<int>(pos) > 0) ) is NOT correct!
  values: REQUIRE( false )
  logged: It appears you have not toggled TEST_TASK_2 from FALSE to TRUE. Please do this before attempt to validate this task.

===============================================================================
/path/to/your/lab01/test_task3.cpp:17:
DESCRIPTION: A suite of tests for Task 3
TEST SUITE: Task 3
TEST CASE:  Task is ready for evaluation

/path/to/your/lab01/test_task3.cpp:35: FATAL ERROR: REQUIRE( (static_cast<int>(pos) > 0) ) is NOT correct!
  values: REQUIRE( false )
  logged: It appears you have not toggled TEST_TASK_3 from FALSE to TRUE. Please do this before attempt to validate this task.

===============================================================================
[doctest] test cases: 3 | 0 passed | 3 failed | 0 skipped
[doctest] assertions: 3 | 0 passed | 3 failed |
[doctest] Status: FAILURE!
```

Again, the output shown above for the `test` target assumes you've made no 
changes to any files involved in this target.
