#ifndef GRAPH_H
#define GRAPH_H
#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <list>
using namespace std;

class Graph{
private:
/* will map an int to a list of its neighbors */
std::map<int, std::vector<int>> vertices;
list<int> vert;
public:
void addvertex(int); // add a vertex to the graph
void addEdge(int,int); // add an undirected edge to the graph
void print(); // prints the adjacency list of each vertex, to show the structure
void printBfs(int); // prints the vertices discovered by a BFS, starting at a given vertex
bool isdirected(); // checks if graph is directed or undirected
bool isdacyclic(); // reports whether the graph is directed and acyclic
};
#endif
