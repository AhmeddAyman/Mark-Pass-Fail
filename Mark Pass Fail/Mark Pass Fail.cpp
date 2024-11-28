#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// #Course 4 Solution 8 
// Mark Pass Fail.

enum enPassFail {Pass = 1 , Fail = 2 };

int ReadMark() 
{
	int Mark;

	cout << "Enter Your Mark " << endl;
	cin >> Mark;
	return Mark;
}

enPassFail CheckMark(int Mark)
{
	if (Mark >= 50)
		return enPassFail::Pass;
	else
		return enPassFail::Fail;
}

void PrintResults(int Mark)
{
	if (CheckMark(Mark) == enPassFail::Pass)
		cout << "\n You Pass";
	else
		cout << "\n You Failed";
		 
}



int main()
{
	PrintResults(ReadMark());
	return 0;
}

