#pragma once
class Problem4
{
public:
	Problem4();
	~Problem4();

	void subscripting(int,int);
	void pointerMap(int, int);


private:
	void initializeArray();
	int arrayOne[100][100];
	int NUMROWS, NUMCOLS;
	int((*tblpntr)[100])[100];
};

