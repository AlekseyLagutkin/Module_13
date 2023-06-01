#include <iostream>
#include "graph.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	graph par;
	par.addvertex("Вася");
	par.addvertex("Маша");
	par.addvertex("Петя");
	par.addvertex("Дима");
	par.addvertex("Настя");
	par.addvertex("Вика");
	par.addvertex("Саша");
	par.addvertex("Лена");

	par.addedge(0, 1);
	par.addedge(1, 2);
	par.addedge(2, 3);
	par.addedge(3, 4);
	par.addedge(4, 5);
	par.addedge(5, 6);
	par.addedge(6, 7);
	par.addedge(7, 8);

	par.outver();
	cout << par.searchpairs() << endl;
	
	return 0;
}