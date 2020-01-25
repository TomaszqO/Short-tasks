#include "stdafx.h"

/*
#53 King and Queen
There is a chessboard with 8 x 8 squares. There are the White King and Black Queen on it.
Check whether the Queen could take the King.

Input data contain the number of test-cases in the first line.
Next lines describe placement of the King and Queen for each testcase,
by specifying their squares (King's first).
Answer should give only letter Y or N for each of test-cases, meaning that King could be taken
or not respectively. Separate letters with spaces.
*/
using std::cout;
void KingQueen(const int & nr, string str[])
{
	char kk, kw;
	char qk, qw;
	for (size_t i = 0; i < nr; i++)
	{
		kk = str[i][0];
		kw = str[i][1];
		qk = str[i][3];
		qw = str[i][4];

		if (kw == qw || kk == qk || abs((kk-'0')-(qk-'0')) == abs((kw - '0')-(qw - '0'))) 
		{
			cout << "Y ";
		}
		else
			cout << "N ";
	}
}