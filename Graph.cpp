#include <iostream>
#include <limits>
#include "Graph.h"
using namespace std;

enum color_t{
	black,grey,white
};
struct node{
	color_t color;
	int parent;
	int distance;

};

void Graph:: print(){
	for (auto i = vertices.begin(); i !=vertices.end(); ++i)
	{
		cout<<"nodes "<<i->first<<endl;
	}
}
void Graph:: addvertex(int node){
	// 
	auto search=vertices.find(node);// searching for value
	if(search==vertices.end()){
		vertices[node]= std::vector<int> ();
		vert.push_back(node);
	}
}

void Graph:: addEdge(int node, int node2){
	addvertex(node);
	addvertex(node2);
	if(node!=node2){
		vertices[node].push_back(node2);

	}
}
void Graph::printBfs(int point){
	cout<<"Initial node: "<< point<<endl;
	bool find=false; // use as a check for loop
	map<int, node> cursor;
	for (auto i = vert.begin(); i !=vert.end(); ++i)
	{
		if(*i==point){
			find = true;
		}

		cursor[*i]=node{white,numeric_limits<int>::max(), -1};	
	}
	cursor[point].color=grey;
	cursor[point].distance = 0;
	queue<int> p;
	p.push(point);
	while(false==p.empty()){
		int front =p.front(); // grabbing front of queue
		p.pop();
		for (auto i = vertices[front].begin(); i !=vertices[front].end(); ++i)
		{
			if(cursor[*i].color==white){
				cursor[*i].color=grey;
				cursor[*i].distance=cursor[front].distance+1;
				cursor[*i].parent=front;
				p.push(*i);
				cout<<*i<<" ";
			}
		}
		cursor[front].color=black;
	}


}

bool Graph:: isdirected(){
	
}
