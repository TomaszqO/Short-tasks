#include "stdafx.h"

using namespace std;
/*
#56  http://www.codeabbey.com/index/task_list
The game of Life by John Conway is played on a grid.At start we place several "organisms" 
into some cells(only one organism per cell), leaving other cells empty. Cells which are touching
by side or corner are neighboring, so each organism may have from 0 to 8 neighbors.

After this, at each turn the colony of organisms evolve by the following rules :
1.any organism which have less than 2 or more than 3 neighbors will die(not passing to next turn);
2. at the same in each empty cell, which is surrounded by exactly 3 neighbor organisms, a new one is born.
In this problem you will run the given configuration for 5 turns and print the number of organisms after each step.

Input data will contain 5 lines of 7 characters each. They represent a 5 by 7 fragment of the game field.
Dash characters "-" represent empty cells, while each "X" represent a cell containing a live organism.
*/

void Life(string tab[])
{
	string next[w];
	int turns = 5;
	int neighbour = 0;
	while (turns > 0)
	{
		print(tab);
		Sleep(500);
		system("CLS");
		for (int i = 0; i < w ; i++)
		{
			for (int j = 0; j < k; j++)
			{
				if (i > 0 && i < w-1 && j>0 && j < k-1)
				{
				for (int i1 = i - 1; i1 < i + 2; i1++)
				{
					for (int j1 = j - 1; j1 < j + 2; j1++)
					{
						if (tab[i1][j1] == 'x' && !(j1 == j && i1 == i))
							neighbour++;
					}
				}
				}
				if (neighbour > 3 || neighbour < 2)
					next[i].push_back('-');
				else if (tab[i][j] == '-' && neighbour == 3)
				{
					next[i].push_back('x');
				}
				else
				{
					next[i].push_back(tab[i][j]);
				}
				neighbour = 0;
			}
		}
		
		write(tab, next);
		turns--;
	}
	
}

void print(string tab[])
{
	for (size_t i = 0; i < w; i++)
	{
		for (size_t j = 0; j < k; j++)
		{
			cout << tab[i][j] << " ";
		}
		cout << "\n";
	}
	cout << endl;
}

void write(string tab1[], string tab2[])
{
	for (int i = 0; i < w; i++)
	{
		for (int j = 0; j < k; j++)
		{
			tab1[i][j] = tab2[i][j];
		}
		tab2[i].clear();
	}
}

