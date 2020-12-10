#pragma once
#include <iostream>
#include <vector>
using namespace std;
struct Vertex
{
	int id = 0;
	vector<int> weight;
	vector<Vertex*> links;
};
class Graph
{
private:
	vector<Vertex*> list;
public:
	Graph(vector<int*> nodes);
	void show_graph();
	Vertex* find_vertex(int id);

};

