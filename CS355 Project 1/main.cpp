#include "Problem1.h"
#include "Problem3.h"
#include "Problem5.h"
#include <iostream>
using namespace std;

void main(){
	/*
	Problem3 newProblem3;
	newProblem3.math();
	newProblem3.bitwise();
	newProblem3.createArray();
	*/

	Problem5 prob5;
	int a = 20;
	prob5.noChange(a);
	cout << a << endl;
	prob5.changeValue(a);
	cout << a << endl;

	prob5.generalMath();

	
}