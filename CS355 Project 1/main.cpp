#include "Problem1.h"
#include "Problem2.h"
#include "Problem3.h"
#include "Problem4.h"
#include "Problem5.h"
#include <iostream>
using namespace std;

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
 void runSolution(){
	int num = getInput();
	Problem1 prob1;
	Problem2 prob2;
	Problem3 prob3;
	Problem4 prob4;
	Problem5 prob5;

	while (num != 0){
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
		default: cout << "Please enter valid input" << endl;
			break;
		}
	}
}
 void main(){
	 runSolution();

 }