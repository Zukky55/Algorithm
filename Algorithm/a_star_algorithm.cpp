#if 0
#include <iostream>
#include "a_star_algorithm.h"
using namespace std;

const int MAP_HEIGHT = 4;
const int MAP_WIDTH = 4;

enum NodeState
{
	Invalid,
	S, // start
	G, // goal
	F, // floor 
	W, // wall
	O, // open
	C, // close
};

class Node
{
public:
	Node() { }
	Node(NodeState state);
	~Node();
	NodeState _state = F;
	int _estimatedCost = 0;
	int _actualCost = 0;
	int _score = 0;
	int* parent = nullptr;
private:
};

Node::Node(NodeState state)
{
	_state = state;
}

Node::~Node()
{
}

void DisplayMap()
{
	for (int i = 0; i < MAP_HEIGHT; i++)
	{
		cout << "{";
		for (int j = 0; j < MAP_WIDTH; j++)
		{
			cout << map[MAP_HEIGHT][MAP_WIDTH] << " , ";
		}
		cout << endl;
	}
}

Node map[MAP_HEIGHT][MAP_WIDTH] = {
	{F,F,F,F},
	{F,F,W,F},
	{G,W,F,F},
	{W,F,F,F},
};

Node currentNode;
Node startNode;
Node goalNode;

int main()
{
	startNode = currentNode = DetectNode(S);
	goalNode = DetectNode(G);
	DisplayMap();
}





Node DetectNode(NodeState targetState)
{
	for (int i = 0; i < MAP_HEIGHT; i++)
	{
		for (int j = 0; j < MAP_WIDTH; j++)
		{
			if (map[i][j]._state == targetState)
			{
				return map[i][j];
			}
		}
	}
	return Invalid;
}

#endif
