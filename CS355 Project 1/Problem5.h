/*
Greg Volpe
CS 355
Dr. Ganchev
November 9, 2014
Assignment 1
Problem 5 Header
*/

#pragma once
class Problem5
{
public:
	Problem5();
	~Problem5();
	int addThings(int, int);
	int multiplyThings(int, int);
	double divideThings(int, int);
	double divideThings(double, double);
	void generalMath();
	void changeValue(int&);
	void noChange(int);
	void referentialTransparancy(int);
	void runProblem();

private:
	int first, second;
	int transparent(int);
	int notTransparent(int);
	int classVar;
};

