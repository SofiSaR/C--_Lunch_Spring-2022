/* Name: Sofia Sanchez
Date: 01/30/2022
Section: 0011
Assignment: What to Have for Lunch Program
Due Date: 01/30/2022
About this project: This program uses information provided by the user and
responds with a message telling the user what to do for lunch.
Assumptions: NA
All work below was performed by Sofia Sanchez */

#include <iostream>
using namespace std;

int main() {
    /*defines the variables where responses to the time question, the bread
     question, and the lettuce question will be stored*/
    char time, bread, lettuce;
    //displays welcome statement and instructions
    cout << "Welcome to the What to Have for Lunch Program!" << endl;
    cout << "As you go through the following questions about your" << endl;
    cout << "lunch situation, please respond with the letter" << endl;
    cout << "corresponding to your answer." << endl;
    //displays time question with possible responses
    cout << "How much time do I have?" << endl;
    cout << "   A. A lot" << endl;
    cout << "   B. Not much" << endl;
    //stores response to time question in time variable
    cin >> time;
    //nested if statement; path depends on user response
    //if the user answered "A lot" to the time question,...
    if (time == 'a' || time == 'A')
    {
        //display the bread question with possible responses
        cout << "Do I have bread?" << endl;
        cout << "   Y. Yes" << endl;
        cout << "   N. No" << endl;
        //store the response to the bread question in the bread variable
        cin >> bread;
        //if the user answered "Yes" to the bread question,...
        if (bread == 'y' || bread == 'Y')
        {
            //display the following output
            cout << "Make a sandwich!" << endl;
        }
        //if the user answered "No" to the bread question,...
        else if (bread == 'n' || bread == 'N')
        {
            //display the lettuce question with possible responses
            cout << "Do I have lettuce?" << endl;
            cout << "   Y. Yes" << endl;
            cout << "   N. No" << endl;
            //store the response to the lettuce question in the lettuce variable
            cin >> lettuce;
            //if the user answered "Yes" to the lettuce question,...
            if (lettuce == 'y' || lettuce == 'Y')
            {
                //display the following output
                cout << "Make a salad!" << endl;
            }
            //if the user answered "No" to the lettuce question,...
            else if (lettuce == 'n' || lettuce == 'N')
            {
                //display the following output
                cout << "Better go to the store!" << endl;
            }
            /* if user did not enter accepted responses to lettuce question,...
            (input validation) */
            else
            {
                //display error message
                cout << "That is an invalid response. Please restart the" << endl;
                cout << "program and respond with either Y or N." << endl;
            }
        }
        /* if user did not enter accepted responses to the bread question,...
        (input validation) */
        else
        {
            //display error message
            cout << "That is an invalid response. Please restart the" << endl;
            cout << "program and respond with either Y or N." << endl;
        }
    }
    //if the user answered "Not much" to the time question,...
    else if (time == 'b' || time == 'B')
    {
        //display the following output
        cout << "Better throw something in the microwave!" << endl;
        return 0;
    }
    /* if user did not enter accepted responses to the time question,...
    (input validation) */
    else
    {
        //display error message
        cout << "That is an invalid response. Please restart the" << endl;
        cout << "program and respond with either A or B." << endl;
    }
    //finish the program
    return 0;
}
