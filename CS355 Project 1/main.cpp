/*
Greg Volpe
CS 355
Dr. Ganchev
November 9, 2014
Assignment 1
MAIN file
*/
#include "Problem1.h"
#include "Problem2.h"
#include "Problem3.h"
#include "Problem4.h"
#include "Problem5.h"
#include <iostream>
#include <string>
using namespace std;
int getInput();
static void runSolution();
static void instructions();
static void problem6();
/*
Simple function used to get input from the user
*/
static int getInput(){
	cout << "Enter the number of the problem you want to run." << endl;
	int num;
	cin >> num;
	while (cin.fail() | num < 0 | num > 6){
		cin.clear();
		cin.ignore();
		cout << "bad input, try again." << endl;
		cin >> num;
	}
	return num;
}
/*
Simple function used to provide basic I/O options for the user to select which problems to run.
*/
static void runSolution(){
	int num = -1;
	Problem1 prob1;
	Problem2 prob2;
	Problem3 prob3;
	Problem4 prob4;
	Problem5 prob5;

	while (num != 0){
		num = getInput();
		switch (num)
		{
		case 1:
			cout << "RUNNING PROBLEM 1" << endl;
			prob1.runProblem1();
			break;
		case 2:
			cout << "RUNNING PROBLEM 2" << endl;
			prob2.runProblem();
			break;
		case 3:
			cout << "RUNNING PROBLEM 3" << endl;
			prob3.runProblem();
			break;
		case 4:
			cout << "RUNNING PROBLEM 4" << endl;
			prob4.runProblem();
			break;
		case 5:
			cout << "RUNNING PROBLEM 5" << endl;
			prob5.runProblem();
			break;
		case 6:
			problem6();
			break;
		default: cout << "Please enter valid input" << endl;
			break;
		}
	}
}
/*
Simple function used to output instructions to the user
*/
static void instructions(){
	cout << "The following application will allow you to run 5 applications." << endl << "1. The first problem tests the timing for memory allocation." << endl
		<< "2. The second problem measures access times for array elements." << endl << "3. The third problem investigates safety of enumations." << endl
		<< "4. The fourth problem does a large number of references to a" << endl << "    2d array via subscripts and pointer mapping" << endl
		<< "5. The fifth problem illustrates the C++ rule for operand evaluation." << endl
		<< "6. The sixth problem is an explanation of the use of the" << endl <<"    Python else statement in a for loop."<<endl
		<< "0. You can input 0 to exit the application."		
		<< endl << endl;
}
/*
Simple function used to provide analysis of problem 6
*/
static void problem6(){
	cout << "The else statement in a python for-loop is useful for instances where the loop processes through to the end." << endl
		<< "It helps differentiate where the program breaks from the loop (because of a break; statement) versus where the loop finishes to the end."<<endl
		<< "An example of this would be searching for list item i in myList.  If i is found, the program will break and continue post else statement"<<endl
		<< "without processing the else statement.  If i is NOT found in the list, the else statement will be executed and could be used to raise"<<endl
		<< "an error statement for example."
		<< endl << endl;
}
/*
Main function
*/
 void main(){
	 instructions();
	 runSolution();

 }