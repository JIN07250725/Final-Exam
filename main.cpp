// ------------- FILE HEADER -------------
// Author: Yusong Jin
// Assignment: Final Exam
// Date: September 2
// Description: Weekly Mileage Calculator
// Sources: 


// ------------- ZYBOOKS SCORES -------------
// https://learn.zybooks.com/zybook/PCCCS161ASummer25
// Chapter: -
// Participation: - 
// Challenge: -
// Labs: -


// ------------- DISCORD POSTS -------------
// https://discord.com/invite/URYKKf8YHm
// Count: -
// Links (Optional): 


// ------------- DESIGN DOCUMENT -------------
// A. INPUT [yes/no]: yes
// B. OUTPUT [yes/no]: yes
// C. CALCULATIONS [yes/no]: yes
// D. LOGIC and ALGORITHMS [yes/no]: yes
//    (Optional) flow chart link or file name: 


// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS [yes/no]: yes
// (Optional) Additional tests count:   


// ------------- CODE -------------
#include <iostream>
using namespace std;

// Function prototypes
void welcome();
void goodbye();
void getInput(int &goal);
int calcTotal();

int main() {
    welcome();
    
    int goalMiles;
    cout << "How many miles do you want to ride this week? ";
    getInput(goalMiles);
    
    if (goalMiles <= 0) {
        cout << "No miles were tracked this week." << endl;
    } else {
        int totalMiles = calcTotal();
        
        cout << "You rode " << totalMiles << " miles this week." << endl;
        
        if (totalMiles == goalMiles) {
            cout << "Good job! You met your goal!" << endl;
        } else if (totalMiles > goalMiles) {
            int over = totalMiles - goalMiles;
            cout << "Great job! You exceeded your goal by " << over << " miles!" << endl;
        } else {
            int under = goalMiles - totalMiles;
            cout << "Uh oh! You missed your goal by " << under << " miles!" << endl;
        }
    }
    
    cout << "Keep riding!" << endl;
    goodbye();
    return 0;
}

void welcome() {
    cout << "Welcome to my Miles Tracker program." << endl;
}

void goodbye() {
    // Goodbye message is combined with "Keep riding!" in main
}

void getInput(int &goal) {
    cin >> goal;
}

int calcTotal() {
    int total = 0;
    int dailyMiles;
    
    for (int day = 1; day <= 7; day++) {
        while (true) {            
            switch (day) {
                case 1: cout << "How many miles did you ride on Sunday? "; break;
                case 2: cout << "How many miles did you ride on Monday? "; break;
                case 3: cout << "How many miles did you ride on Tuesday? "; break;
                case 4: cout << "How many miles did you ride on Wednesday? "; break;
                case 5: cout << "How many miles did you ride on Thursday? "; break;
                case 6: cout << "How many miles did you ride on Friday? "; break;
                case 7: cout << "How many miles did you ride on Saturday? "; break;
            }
            
            cin >> dailyMiles;
            
            if (dailyMiles < 0) {
                cout << "Miles must be 0 or greater!" << endl;
            } else {
                break;  // Valid input, exit inner loop
            }
        }
        
        total += dailyMiles;
    }
    
    return total;
}



// ------------- DESIGN -------------
/* 
Program Name: Miles Tracker

Program Description: Weekly Mileage Calculator

Design:
A. INPUT
Define the input variables including name data type. 
int goalMiles;
int dailyMiles;

B. OUTPUT
Define the output variables including data types. 
int totalMiles;
int over;
int under;
string Welcome message;
string Goal prompt;
string Daily prompts;
string Error message;
string Goodbye message;

C. CALCULATIONS
Describe calculations used by algorithms in step D.  
List all formulas. 
totalMiles = sum of dailyMiles for all 7 days;

D. LOGIC and ALGORITHMS
Design the logic of your program using pseudocode or flowcharts. 
Use conditionals, loops, functions or array constructs.
List the steps in transforming inputs into outputs.

BEGIN PROGRAM
    // Function prototypes
    FUNCTION welcome(): VOID
    FUNCTION goodbye(): VOID
    FUNCTION getInput(REF goal: INT): VOID
    FUNCTION calcTotal(): INT

FUNCTION main():
    CALL welcome()
    
    DECLARE goalMiles: INT
    PRINT "How many miles do you want to ride this week? "
    CALL getInput(goalMiles)
    
    IF goalMiles <= 0 THEN
        PRINT "No miles were tracked this week."
    ELSE
        DECLARE totalMiles: INT
        totalMiles = CALL calcTotal()
        
        PRINT "You rode " + totalMiles + " miles this week."
        
        IF totalMiles == goalMiles THEN
            PRINT "Good job! You met your goal!"
        ELSE IF totalMiles > goalMiles THEN
            DECLARE over: INT = totalMiles - goalMiles
            PRINT "Great job! You exceeded your goal by " + over + " miles!"
        ELSE
            DECLARE under: INT = goalMiles - totalMiles
            PRINT "Uh oh! You missed your goal by " + under + " miles!"
        END IF
    END IF
    
    PRINT "Keep riding!"
    CALL goodbye()
    RETURN 0
END FUNCTION

FUNCTION welcome():
    PRINT "Welcome to my Miles Tracker program."
END FUNCTION

FUNCTION goodbye():
    // Goodbye message is combined with "Keep riding!" in main
END FUNCTION

FUNCTION getInput(REF goal: INT): VOID
    READ goal
END FUNCTION

FUNCTION calcTotal(): INT
    DECLARE total: INT = 0
    DECLARE dailyMiles: INT
    
    FOR day FROM 1 TO 7
        DO
            // Use conditional statements for day names without arrays
            SWITCH (day)
                CASE 1: PRINT "How many miles did you ride on Sunday? "
                CASE 2: PRINT "How many miles did you ride on Monday? "
                CASE 3: PRINT "How many miles did you ride on Tuesday? "
                CASE 4: PRINT "How many miles did you ride on Wednesday? "
                CASE 5: PRINT "How many miles did you ride on Thursday? "
                CASE 6: PRINT "How many miles did you ride on Friday? "
                CASE 7: PRINT "How many miles did you ride on Saturday? "
            END SWITCH
            
            READ dailyMiles
            
            IF dailyMiles < 0 THEN
                PRINT "Miles must be 0 or greater!"
            ELSE
                BREAK
            END IF
        WHILE true
        
        total = total + dailyMiles
    END FOR
    
    RETURN total
END FUNCTION
END PROGRAM



SAMPLE RUNS
Copy from assignment document.
Welcome to my Miles Tracker program.
How many miles do you want to ride this week? 50
How many miles did you ride on Sunday? -9
Miles must be 0 or greater!
How many miles did you ride on Sunday? -3
Miles must be 0 or greater!
How many miles did you ride on Sunday? 0
How many miles did you ride on Monday? 10
How many miles did you ride on Tuesday? 10
How many miles did you ride on Wednesday? 10
How many miles did you ride on Thursday? 10
How many miles did you ride on Friday? 10
How many miles did you ride on Saturday? 0
You rode 50 miles this week.
Good job! You met your goal!
Keep riding!



Welcome to my Miles Tracker program.
How many miles do you want to ride this week? 100
How many miles did you ride on Sunday? 10
How many miles did you ride on Monday? 10
How many miles did you ride on Tuesday? 10
How many miles did you ride on Wednesday? 10
How many miles did you ride on Thursday? 10
How many miles did you ride on Friday? 10
How many miles did you ride on Saturday? 10
You rode 70 miles this week.
Uh oh! You missed your goal by 30 miles!
Keep riding!



Welcome to my Miles Tracker program.
How many miles do you want to ride this week? 50
How many miles did you ride on Sunday? 10
How many miles did you ride on Monday? 10
How many miles did you ride on Tuesday? 10
How many miles did you ride on Wednesday? 10
How many miles did you ride on Thursday? 10
How many miles did you ride on Friday? 10
How many miles did you ride on Saturday? 10
You rode 70 miles this week.
Great job! You exceeded your goal by 20 miles!
Keep riding!



Welcome to my Miles Tracker program.
How many miles do you want to ride this week? 0
No miles were tracked this week.
Keep riding!



Welcome to my Miles Tracker program.
How many miles do you want to ride this week? -10
No miles were tracked this week.
Keep riding!
*/