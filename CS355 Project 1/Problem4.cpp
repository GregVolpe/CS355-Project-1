/*
Greg Volpe
CS 355
Dr. Ganchev
November 9, 2014
Assignment 1
Problem 4 Header
*/

#include "Problem4.h"
#include <cstdlib>
#include <iostream>

using namespace std;

Problem4::Problem4()
{
	initializeArray();
	NUMROWS = NUMCOLS = 100;
	tblpntr = &arrayOne;
}
/*
Simple function used to initialize an array with random numbers
*/
void Problem4::initializeArray(){
	for (int i = 0; i < 100; i++){
		for (int j = 0; j < 100; j++){
			arrayOne[i][j] = 20 + rand() % 100;

		}
	}

}
/*
Simple function used to access the array via subscript
*/
void Problem4::subscripting(int row, int col){
	//cout << "array[" << row << "][" << col << "] = " << arrayOne[row][col] << endl;
	int a = arrayOne[row][col];
}
/*
Simple function used to access the array via pointer arithmatic
*/
void Problem4::pointerMap(int row, int col){
	//cout << "array[" << row << "][" << col << "] = " << *(*(*tblpntr + row) + col) << endl;
	int a = *(*(*tblpntr + row) + col);
}
/*
Simple function used to start the class clock
*/
void Problem4::startTime() {
	start = clock();
}
/*
Simple function used to stop the class clock and calculate the duration
*/
double Problem4::stopTime(){
	duration = (clock() - start) / (double)CLOCKS_PER_SEC;
	return getTime();
}
/*
Simple function used to get
*/
double Problem4::getTime(){
	return duration;
}
/*
Simple function used to clear the class clock duration
*/
void Problem4::clearTime(){
	duration = -1;
}
/*
Simple function used to execute the requested problem
*/
void Problem4::runProblem(){
	double duration1, duration2 = 0;
	getInput();
	cout << "Running the subscript" << endl;
	this->startTime();
	for (int a = 0; a < numTimesToRun; a++){
		for (int i = 0; i < 100; i++){
			for (int j = 0; j < 100; j++){
				this->subscripting(i, j);
			}
		}
	}
	duration1 = this->stopTime();
	cout << "The subscripting access of all elements took " << duration1 << " seconds." << endl;
	this->clearTime();
	cout << "Running the pointer map" << endl;
	this->startTime();
		for (int a = 0; a < numTimesToRun; a++){
			for (int i = 0; i < 100; i++){
				for (int j = 0; j < 100; j++){
					this->pointerMap(i, j);
				}
			}
		}
	duration2 = this->stopTime();

	cout << "the pointer mapping access of all elements took " << duration2 << " seconds" << endl;
}
/*
Simple function used to get input from the user
*/
void Problem4::getInput(){
	cout << "Enter number of times to run each array." << endl;
	int num;
	cin >> num;
	while (cin.fail() | num < 1){
		cin.clear();
		cin.ignore();
		cout << "bad input, try again." << endl;
		cin >> num;
	}
	numTimesToRun = num;
}


Problem4::~Problem4()
{
}
