#pragma once
#ifndef ALGORITHMS_HPP
#define ALGORITHMS_HPP

#include "Graph.hpp"
#include <vector>
#include <string>
#include <queue>
#include <iostream>
#include <climits>
#include <stack>

using namespace std;
using namespace ariel;

namespace ariel {

    class Algorithms {
    public:

/*
Check if the graph is connected, AKA there is a path between every pair of vertices.
@return 1 if the graph is connected, 0 otherwise.
*/
static int isConnected( Graph &graph);

static int isConnectedUndirected( Graph &graph);

static void DFS( Graph &graph, unsigned int vertex, vector<bool>& visited);

static int isStronglyConnected( Graph &graph);

/*
Print the cycle in the graph if there is one, otherwise return 0.
*/
static int isContainsCycle( Graph &graph);

static int isContainsCycleUndirected( Graph &graph);

static int isContainsCycleDirected( Graph &graph);

static int DFSVisit( Graph &graph, unsigned int u, vector<int>& color, vector<unsigned int>& pi, stack<unsigned int>& path);

static int DFSVisitUndirected( Graph &graph, unsigned int u, vector<int>& color, vector<unsigned int>& pi, stack<unsigned int>& path);

/*
Calculate the cheapest path between two vertices, if the graph is not weighted return the shortest path.
if there is no path return -1.
*/

static int shortestPath( Graph &graph, unsigned int start, unsigned int end);

static int BFS( Graph &graph, unsigned int start, unsigned int end);

static int Dijkstra( Graph &graph, unsigned int start, unsigned int end);

static int BellmanFord( Graph &graph, unsigned int start, unsigned int end);

static int minDistance(vector<int> d, vector<bool> visited);

/*
Convert the graph to a double sided graph, if the graph can't be divided return 0.
*/          
static int isBipartite( Graph &graph);

static int DFSVisitBipartite( Graph &graph, unsigned int u, vector<int>& color, vector<unsigned int>& pi);

/*
Print the negative cycle in the graph if there is one, otherwise print "No negative cycle".
*/
static int negativeCycle(Graph graph);



    };
}

#endif // ALGORITHMS_HPP