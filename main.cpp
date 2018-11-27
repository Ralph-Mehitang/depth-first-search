#include <iostream>
#include "Graph.h"
using namespace std;

//Ralph Mehitang
//Joseph Anderson
//Lab9

int main(){
	Graph temp;
	int input;
	int vert1,vert2;
	int searchv;

	while(input!=4){
		cout<<"Input 1 to add an edge"<<endl;
		cout<<"Input 2 to print adjacenty list"<<endl;
		cout<<"Input 3 to print using bfs"<<endl;
		cout<<"Input 4 exit the program"<<endl;
		cin>>input;

		switch (input){

			case 1:
				cout<<"Input 1st vertex"<<endl;
				cin>>vert1;
				cout<<"Input 2nd Vertex"<<endl;
				cin>>vert2;
				temp.addEdge(vert1,vert2);
				break;
			case 2: 
				temp.print();
				break;

			case 3:
				cout<<"What is the starting vertex?"<<endl;
				cin>>searchv;
				temp.printBfs(searchv);
				break;
			case 4: 
			exit(-1);
		}
	}
	return 0;
}
//worked with my twin brother billy 
