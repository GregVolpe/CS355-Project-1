#include "Problem5.h"
#include <iostream>
using namespace std;


Problem5::Problem5()
{
	first = second = 0;
	classVar = 0;
}

int Problem5::addThings(int a, int b){
	return a + b;

}

int Problem5::multiplyThings(int a, int b){
	int result = 0;
	result = a * b;
	return result;
}

double Problem5::divideThings(int a, int b){
	double result = 0;
	result = (double)a / (double)b;
	return result;
}

double Problem5::divideThings(double a, double b){
	double result = 0;
	return (a / b);
}

void Problem5::generalMath(){
	int result = 0;
	result = 5 + 6 * 7;
	cout << "5 + 6 * 7 = " << result << endl;
	result = (5 + 6) * 7;
	cout << "(5 + 6) * 7 = " << result << endl;
	result = 5 + (6 * 7);
	cout << "5 + (6 * 7) = " << result << endl;
	first = 5;
	second = 10;
	cout <<"before the equation"<<endl<< "First = " << first << endl << "Second = " << second << endl;
	result = addThings((first + 5), second++);
	cout <<"addThings((first + 5), second++) = " << result << endl;
	cout << "After the equation" << endl << "First = " << first << endl << "Second = " << second << endl;
	result = multiplyThings(first++, ++second);
	cout << "multiplyThings(first++, ++second) = " << result << endl;
	cout << "When the equation is executed" << endl << "First = " << first << endl << "Second = " << second << endl;
}

void Problem5::changeValue(int &a){
	a= a + 10;
}

void Problem5::noChange(int a){
	a = a + 10;
	
}

void Problem5::referentialTransparancy(int a){
	for (int i = 0; i < 100; i++){
		cout << "Transparent: " << transparent(a) << endl;
		cout << "Non-Transparent: " << notTransparent(a) << endl;
	}


}
int Problem5::transparent(int a){
	return a+1;
}
int Problem5::notTransparent(int a){
	classVar = classVar+1;
	return a + classVar;
}

Problem5::~Problem5()
{
}
