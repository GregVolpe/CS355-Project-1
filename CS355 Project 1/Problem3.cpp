#include "Problem3.h"
#include <iostream>

using namespace std;


Problem3::Problem3()
{
}


Problem3::~Problem3()
{
}

void Problem3::bitwise(){
	cout <<"(ONE | TWO) >> " << (ONE | TWO) << endl;    // Value will be 3.
	cout <<"(TWO & FOUR) >> "<< (TWO & FOUR) << endl;   // Value will be 0.
	cout <<"(TWO ^ EIGHT) >> "<< (TWO ^ EIGHT) << endl;  // Value will be 10.
	cout <<"(EIGHT << 1) >> " << (EIGHT << 1) << endl;   // Value will be 16.
	cout <<"(EIGHT >> 1) >> "<< (EIGHT >> 1) << endl;   // Value will be 4.

}
void Problem3::math(){
	cout << "(ONE + TWO) >> " << (ONE + TWO) << endl;    // Value will be 3.
	cout << "(FOUR - TWO) >> " << (FOUR - TWO) << endl;   // Value will be 2.
	cout << "(TWO * EIGHT) >> " << (TWO * EIGHT) << endl;  // Value will be 16.
	cout << "(EIGHT / TWO) >> " << (EIGHT / TWO) << endl;  // Value will be 4.
}

//THIS WILL GENERATE AN ERROR
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
