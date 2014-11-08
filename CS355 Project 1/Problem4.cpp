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
void Problem4::initializeArray(){
	for (int i = 0; i < 100; i++){
		for (int j = 0; j < 100; j++){
			arrayOne[i][j] = 20 + rand() % 100;
		}
	}

}

void Problem4::subscripting(int row, int col){
	cout << "array[" << row << "][" << col << "] = " << arrayOne[row][col] << endl;
}

void Problem4::pointerMap(int row, int col){
	cout << "array[" << row << "][" << col << "] = " << *(*(*tblpntr + row) + col) << endl;
}

void Problem4::startTime() {
	start = clock();
}

double Problem4::stopTime(){
	duration = (clock() - start) / (double)CLOCKS_PER_SEC;
	return getTime();
}

double Problem4::getTime(){
	return duration;
}
void Problem4::clearTime(){
	duration = -1;
}



Problem4::~Problem4()
{
}
