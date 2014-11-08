#include "Problem1.h"
#include <string>
#include <iostream>
#include <stdio.h>
#include <time.h>
using namespace std;


Problem1::Problem1()
{
}


Problem1::~Problem1()
{
}

void Problem1::createArray(){
	//initialize the array to all 0
	int parentArray2 = { 0 };
	int parentArray1 = { 0 };
}
void Problem1::createHeap(){

}

void Problem1::createStack(){
	int *stackArray = new int[100];


}
void Problem1::startTime() {
	start = clock();
}

void Problem1::stopTime(){
	duration = (clock() - start) / (double)CLOCKS_PER_SEC;
}

double Problem1::getTime(){
	return duration;
}
void Problem1::clearTime(){
	duration = -1;
}
void Problem1::runProblem1(){
	Problem1 problem;
	problem.startTime();
	for (int i = 1; i < 100000; i++){
		problem.createArray();
	}
	problem.stopTime();
	double time = problem.getTime();
	cout << "declarations took " << time << endl;
	problem.clearTime();
}
