/*
Greg Volpe
CS 355
Dr. Ganchev
November 9, 2014
Assignment 1
Problem 3 cpp
*/

#include "Problem3.h"
#include <iostream>

using namespace std;


Problem3::Problem3()
{
}


Problem3::~Problem3()
{
}
/*
Simple function used to execute bitwise operations on enumerated types and the numerical counter parts
*/
void Problem3::bitwise(){
	cout <<"(ONE | TWO) >> " << (ONE | TWO) << endl;    // Value will be 3.
	cout << "(1 | 2) >> " << (1 | 2) << endl;    // Value will be 3.
	cout <<"(TWO & FOUR) >> "<< (TWO & FOUR) << endl;   // Value will be 0.
	cout << "(2 & 4) >> " << (2 & 4) << endl;   // Value will be 0.
	cout <<"(TWO ^ EIGHT) >> "<< (TWO ^ EIGHT) << endl;  // Value will be 10.
	cout << "(2 ^ 8) >> " << (2 ^ 8) << endl;  // Value will be 10.
	cout <<"(EIGHT << 1) >> " << (EIGHT << 1) << endl;   // Value will be 16.
	cout << "(8 << 1) >> " << (8 << 1) << endl;   // Value will be 16.
	cout <<"(EIGHT >> 1) >> "<< (EIGHT >> 1) << endl;   // Value will be 4.
	cout << "(8 >> 1) >> " << (8 >> 1) << endl;   // Value will be 4.

}
/*
Simple function used to perform mathematical operations on enumerated types
*/
void Problem3::math(){
	cout << "(ONE + TWO) >> " << (ONE + TWO) << endl;    // Value will be 3.
	cout << "(FOUR - TWO) >> " << (FOUR - TWO) << endl;   // Value will be 2.
	cout << "(TWO * EIGHT) >> " << (TWO * EIGHT) << endl;  // Value will be 16.
	cout << "(EIGHT / TWO) >> " << (EIGHT / TWO) << endl;  // Value will be 4.
}

//THIS WILL GENERATE AN ERROR
/*
Simple function used to create an array with the size of an enumerated type
*/
void Problem3::createArray(){
	int intArray[INTCOUNT];
	for (int i = 0; i < sizeof(intArray); i++){
		intArray[i] = i;
	}
	try{
		for (int i = 0; i < sizeof(intArray); i++){
			cout << intArray[i];
		}
	}
	catch (const std::exception& ex){
		cout << "There was an error!" << endl;
	}
}
/*
Simple function used to perform all operations of Problem 3
*/
void Problem3::runProblem(){
	this ->math();
	this ->bitwise();
	cout << "Would you like to create an array with an enumeration?  (This will crash the program)" <<"\n1.yes\n2.no"<< endl;
	int num;
	cin >> num;
	if (num == 1){
		this->createArray();
	}
}
