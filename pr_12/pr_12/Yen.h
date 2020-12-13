#pragma once

using namespace std;

class Yen
{
	Graph* m_pGraph;

	vector<BasePath*> m_vResultList;
	map<BasePath*, BaseVertex*> m_mpDerivationVertexIndex;
	multiset<BasePath*, WeightLess<BasePath> > m_quPathCandidates;

	BaseVertex* m_pSourceVertex;
	BaseVertex* m_pTargetVertex;

	int m_nGeneratedPathNum;

private:

	void _init();

public:

	Yen(const Graph& graph)
	{
		Yen(graph, NULL, NULL);
	}

	Yen(const Graph& graph, BaseVertex* pSource, BaseVertex* pTarget)
		:m_pSourceVertex(pSource), m_pTargetVertex(pTarget)
	{
		m_pGraph = new Graph(graph);
		_init();
	}

	~Yen(void) { clear(); }

	void clear();
	bool has_next();
	BasePath* next();

	BasePath* get_shortest_path(BaseVertex* pSource, BaseVertex* pTarget);
	void get_shortest_paths(BaseVertex* pSource, BaseVertex* pTarget, int top_k,
		vector<BasePath*>&);
};