//
// Created by David SeWell on 1/23/18.
//

#ifndef MCTS_TREE_HPP
#define MCTS_TREE_HPP


#include <tiff.h>
#include <iostream>
#include <vector>
#include "Node.hpp"

class Tree {
	
	private:
	
		int treeIndex;
	
	public:
	
        Tree();

		<Node> findNode(Node node);
	
		void addNode(Node node);
	
		<Node> getNode(int index);
	
		std::vector<Node>* getNodes();
	
		<Node> getRoot();

		bool nodeInTree(Node node);
	
		void setRoot(Node node);


};


#endif //MCTS_TREE_HPP
