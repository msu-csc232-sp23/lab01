# Client Functions and the Bag ADT

A client function is a _non-member_ function that _uses_ an instance of some class.

## Due Date

This exercise should be completed by the end of the class period.

## Background

This lab activity is based upon Exercise 5 in our textbook which is repeated below. Please refer to individual tasks as you may be asked to more (or less) than directed in this exercise.

> Suppose that a bag contains strings that represent various grocery items. Write a C++ function that removes and counts 
> all the occurrences of a given string from such a bag. Your function should return this number. Use comments in 
> javadoc style to fully specify your function. Accommodate the possibility that the given bag is either empty or does 
> not contain any occurrences of the given string.

### Pre-Exercise Reading

Before engaging in this activity, the student should have read, or at least skimmed 

* Chapter 1 - Data Abstraction: The Walls
* Appendix A Review of C++ Fundamentals
* Appendix B Important Themes in Programming
* Appendix C Unified Modeling Language

## Objectives

Upon successful completion of this exercise, the student should be able to

* translate a problem statement into a function
* write a client function that processes the items in bag
* describe the difference between pass-by-value and pass-by-const-reference parameter passing mechanisms

## Tasks

1. Stub out a function specification
2. Implement the function specification
3. Optimize the solution

### Task 1: Stub out a function specification

In order to get the ball rolling, often we start by stubbing out solutions. For example, if a function is declared to return a Boolean value, we can blindly return `false` just to keep the compiler happy. Similarly, if a function is declared to return an integer, we can simply return 0.

1. Look for a `TODO` in `csc232.h` that asks you to _declare_ a new client function named `remove_and_count`. Given the description of this function, ensure this declaration has the correct return type and the requisite parameters (the first being a pointer to a Bag<T> and the second be of type T that is the item to be removed.)
2. When you have completed this task, toggle the `SKIP_TESTING_TASK_1` macro from `TRUE` to `FALSE`.
3. Build and execute the `tests` target to test your solution.
4. When all the tests for this task pass, commit and push your changes to GitHub.

### Task 2: Implement the function specification

In this task, we replace our stubbed return value and actually implement the function as per specification.

1. Look for a `TODO` in `csc232.h` that asks you to _define_ the new client function named `remove_and_count`. Use the description of this function in exercise 5 (shown above) as your guide for the implementation details.
2. When you have completed this task, toggle the `SKIP_TESTING_TASK_2` macro from `TRUE` to `FALSE`.
3. Build and execute the `tests` target to test your solution.
4. When all the tests for this task pass, commit and push your changes to GitHub.

### Task 3: Optimize the solution

Here, optimizations will come in a simple form:

* Don't do any processing on the bag if it is empty

1. Add a check to the beginning of the function that checks if the bag is empty. If it is, immediately return 0 without any further processing.
2. When you have completed this task, toggle the `SKIP_TESTING_TASK_3` macro from `TRUE` to `FALSE`.
3. Build and execute the `tests` target to test your solution.
4. When all the tests for this task pass, commit and push your changes to GitHub.

## Submission Details

Before submitting your assignment, be sure you have pushed all your changes to GitHub. If this is the first time you're pushing your changes, the push command will look like:

```bash
git push -u origin develop
```

If you've already set up remote tracking (using the `-u origin develop` switch), then all you need to do is type:

```bash
git push
```

As usual, prior to submitting your assignment on Blackboard, be sure that you have committed and pushed your final changes to GitHub. Once your final changes have been pushed, create a pull request that seeks to merge the changes in your `develop` branch into your `trunk` branch. Once your pull request has been created, submit the URL of your assignment _repository_ (i.e., _not_ the URL of the pull request) on the Teams Assignment. Please note: the timestamp of the submission on Teams is used to assess any late penalties if and when warranted, _not_ the date/time you create your pull request. **No exceptions will be granted for this oversight**.

### Grading Rubric

This assignment is worth **3 points**.

| Criteria           | Exceeds Expectations         | Meets Expectations                  | Below Expectations                  | Failure                                        |
|--------------------|------------------------------|-------------------------------------|-------------------------------------|------------------------------------------------|
| Pull Request (20%) | Submitted early, correct url | Submitted on-time; correct url      | Incorrect URL                       | No pull request was created or submitted       |
| Code Style (20%)   | Exemplary code style         | Consistent, modern coding style     | Inconsistent coding style           | No style whatsoever or no code changes present |
| Correctness^ (60%) | All unit tests pass          | At least 80% of the unit tests pass | At least 60% of the unit tests pass | Less than 50% of the unit tests pass           |

^ _The Google Test unit runner will calculate the correctness points based purely on the fraction of tests passed_.

### Late Penalty

* In the first 24-hour period following the due date, this lab will be penalized 0.6 point meaning the grading starts at 2.4 (out of 3 total possible) points.
* In the second 24-hour period following the due date, this lab will be penalized 1.2 points meaning the grading starts at 1.8 (out of 3 total possible) points.
* After 48 hours, the assignment will not be graded and thus earns no points, i.e., 0 out of 3 possible points.
