# Lunch Program

Jan 30, 2022


## Objectives in Practice:


- Develop, compile, and run a C++ program that requires the use of C++ variables and if, if / else, if / else if statements, conditional operators, and/or switch statements.

- Transfer a program to the Unix server, use the G++ compiler to compile a program and execute a c++ program that you have written.


## The Instructions That Were Given for the Project:


- Write a C++ program that asks the user the questions from the Deciding What to Have for Lunch flow chart and displays the appropriate message to the user.

### Deciding What to Have for Lunch

```
+++++++++++++++++           _____          +++++++++++++         _____
| How much time |         /       \        | Do I have |       /       \
|  do I have?   |   -->  |  A lot  |  -->  |   bread?  |  --> |   Yes   |
+++++++++++++++++         \_______/        +++++++++++++       \_______/
        |                                        |                 |
     _______                                   _____         ==============
   /   Not   \                               /       \       |   Make a   |
  |   Much    |                             |   No    |      |  sandwich! |
   \_________/                               \_______/       ==============
        |                                        |
=================           _____          +++++++++++++         _____
|  Better throw |         /       \        | Do I have |       /       \
|  somthing in  |        |   Yes   |  <--  |  lettuce? |  --> |   No    |
| the microwave |         \_______/        +++++++++++++       \_______/
=================             |                                    |
                         ===========                        ================
                         |  Make a |                        | Better go to |
                         |  salad  |                        |  the store!  |
                         ===========                        ================
```

**1. The user should be prompted to ask the first questions in the diamond on the flow chart and asked to respond with**

        a Y or y for Yes and

        a N or n for No

        or

        a A or a for A lot and

        a B or b for Not much

        (depending upon the question).

   - If the user enters a valid option the corresponding path on the flow chart is followed.

   - Otherwise, the user is told that they entered invalid data and asked to run the program again.
  
     

**2. Once you reach the end of the path on the flow chart, the message at the end is displayed to the user and the program ends.**


### Other Requirements:

- Follow the course coding standards outlined in Coding Standards_ (COP3363 Introduction to Programming in C++ for Majors).docx ([Coding Standards](https://canvas.fsu.edu/courses/193490/files/15396757/download)) .

- Include the basic header in your program Header for Assignments.docx ([Required Header Template](https://canvas.fsu.edu/courses/193490/files/15396772/download)) , and print a welcome message to the user.

- Valid input validation response on each question asked

- Properly nested conditionals

- Include comments in your code as required


## How to Run the Program:

- Use ```g++ Lunch.cpp -o Lunch.exe``` and then ```Lunch.exe``` in a Linux terminal to compile and run.
