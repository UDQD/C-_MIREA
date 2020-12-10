#include "Graph.h"

Graph::Graph(vector<int*> nodes) {
	for (int i = 0; i < nodes.size(); i++) {
		Vertex first, second;
		int weight;
		//first = *find_vertex(*nodes[0]);
		first.id = nodes[i][0];
		weight = nodes[i][1];
		second.id = nodes[i][2];

		if (find_vertex(first.id) != NULL) {
			first = *find_vertex(first.id);
		}
		else {
			list.push_back(&first);
		}
		if (find_vertex(second.id) != NULL) {
			second = *find_vertex(second.id);
		}
		else {
			list.push_back(&second);
		}

		//list.push_back(&first);
		//list.push_back(&second);

		first.links.push_back(&second);
		first.weight.push_back(weight);
		second.links.push_back(&first);
		second.weight.push_back(weight);
		//second = *find_vertex(*nodes[2]);
	}
}

Vertex* Graph::find_vertex(int id) {
	for (int i = 0; i < list.size(); i++) {
		if (list[i]->id == id) {
			return list[i];
		}
	}
	return NULL;
}

void Graph::show_graph() {
	for (int i = 0; i < list.size(); i++) {
		for (int j = 0; j < list[i]->links.size(); j++) {
			cout << list[i]->id << "-" << list[i]->links[j]->weight[j] << "->"<<list[i]->links[j]->id << endl;
		}
	}
}