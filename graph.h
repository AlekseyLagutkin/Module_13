#pragma once
#define SIZE 10

class graph {
public:
	graph();
	struct user
	{
		const char* name;
		int ver;
	};
	void addvertex(const char* name);
	void addedge(int v1, int v2);
	void outver();
	bool vertexist(int v);
	bool edgexist(int v1, int v2);
	int searchpairs();

private:
	int matrix[SIZE][SIZE];
	user vertexes[SIZE];
	int countv;
};
