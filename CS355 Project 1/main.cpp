#include "Problem1.h"
#include "Problem2.h"
#include "Problem3.h"
#include "Problem4.h"
#include "Problem5.h"
#include <iostream>
using namespace std;

void main(){

	//Problem1 prob1;
	//prob1.runProblem1();

	Problem2 prob2;
	int numRuns = 1000;
	prob2.createArray(numRuns);
	prob2.createStack(numRuns);
	prob2.createHeap(numRuns);
	prob2.createFubarHeap(numRuns);
	/*
	Problem3 newProblem3;
	newProblem3.math();
	newProblem3.bitwise();
	newProblem3.createArray();
	*/
	/*
	Problem4 prob4;
	prob4.runProblem4();
	*/
	/*
	double duration1, duration2=0;
	Problem4 prob4;
	prob4.startTime();
	for (int a = 0; a < 2; a++){
		for (int i = 0; i < 100; i++){
			for (int j = 0; j < 100; j++){
				prob4.subscripting(i, j);
			}
		}
	}
	duration1 = prob4.stopTime();

	prob4.clearTime();

	prob4.startTime();
	for (int a = 0; a < 2; a++){
		for (int i = 0; i < 100; i++){
			for (int j = 0; j < 100; j++){
				prob4.pointerMap(i, j);
			}
		}
	}
	duration2 = prob4.stopTime();

	cout << "The subscripting access of all elements took " << duration1 << " seconds." << endl << "the pointer mapping access of all elements took " << duration2 << " seconds" << endl;
	*/


	/*
	Problem5 prob5;
	int a = 20;
	prob5.noChange(a);
	cout << a << endl;
	prob5.changeValue(a);
	cout << a << endl;

	prob5.generalMath();
	*/

	
}