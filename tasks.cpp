// tasks.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;
int main()
{

	/// life
	//string a[w]= {"-------","---x---","---x---", "---x---","-------","-------", "-------", "----x--"};
	//Life(a);
	/// liczby pierwsze
	//const int nr = 4;
	//int ar[] = {4,15,35,56};
	//Primes(nr, ar);
	/// krol & dama
	const int nr = 8;
	string str[nr] = { "b4 b8", "b4 e7", "b4 d2", "b4 g4", "f2 b1", "f2 c4", "f2 d5", "f2 g7" };
	KingQueen(nr, str);

	cin.get();
    return 0;
}

