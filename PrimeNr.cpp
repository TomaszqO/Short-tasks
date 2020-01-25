#include "stdafx.h"

using std::vector;
using std::cout;
using std::endl;
/*
#61
Prime numbers generator.
Input data will contain the amount of primes to print in the first argument.
Next argument will contain indices of array of primes for which values should be printed. 
They will be in range from 1 to 200000.
Answer should contain prime numbers corresponding the specified positions of the array.
*/

void Primes(const int & nr, const int ar[])
{
	vector <int> primes;
	bool isPrime[n+1];//domyslnie true
	size_t l=2;
	int pierw = (int)sqrt(n);
	while (l < pierw)
	{
		for (size_t i = 2*l; i < 1 + n; i += l )
		{
			isPrime[i] = false;
		}
		for (size_t i = l+1; i < n+1; i++)
		{
			if (isPrime[i])
			{
				l = i;
				break;
			}
		}
	}
	for (size_t i = 2; i <=n ; i++)
	{
		if (isPrime[i])
		{
			primes.push_back(i);
		}
	}
	for (size_t i = 0; i < nr; i++)
	{
		cout << primes[ar[i]] << endl;
	}
}