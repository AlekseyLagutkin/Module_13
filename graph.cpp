#include <iostream>
#include "graph.h"

using namespace std;

graph::graph()
{
	for (int i = 0; i < SIZE; ++i)
	{
		for (int j = 0; j < SIZE; ++j)
		{
			matrix[i][j] = 0;
		}
		vertexes[i].name = 0;
	}

	countv = 0;
}
void graph::addvertex(const char* name)   //Добавление пользователя
{
	vertexes[countv].name = name;
	vertexes[countv].ver = countv;
	++countv;
}
void graph::addedge(int v1, int v2)   //Добавление ребра
{
	matrix[v1][v2] = 1;
	matrix[v2][v1] = 1;
}
void graph::outver()   //Вывод графа пользователей на экран
{
	int i;
	for (i = 0; i < countv-1; ++i)
	{
		if (vertexist(i))
		{
			cout << vertexes[i].name << "-";
		}
	}
	if (vertexist(i))
	{
		cout << vertexes[i].name << endl;
	}
}

bool graph::vertexist(int v)   //Проверка существования пользователя
{
	if (vertexes[v].name !=0)
		{
			return true;
		}
		return false;
	
}
bool graph::edgexist(int v1, int v2)   //Проверка существования ребра 
{
	return matrix[v1][v2] != 0;
}
int graph::searchpairs()   //Поиск пар через три рукопожатий
{
	int copairs = 0;   //Количество найденных пар
	for (int i = 0; i < countv-1; ++i)
	{
		for (int j=0; j<3; ++j)
		{
			if (matrix[i + j][i + j + 1] == 0)
			{
				break;
			}
			copairs=copairs+1;
		}
		
	}
	return copairs;
}