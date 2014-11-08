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


Problem4::~Problem4()
{
}
