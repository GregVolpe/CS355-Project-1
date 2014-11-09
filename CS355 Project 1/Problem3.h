#pragma once
class Problem3
{
public:
	Problem3();
	~Problem3();
	enum enumBits{
		ONE = 1,
		TWO = 2,
		FOUR = 4,
		EIGHT = 8
	};
		
	enum randoms{
		BIG_COUNT = 20,
		INTCOUNT = 3
	};
	void math();
	void bitwise();
	void createArray();
	void runProblem();

};

