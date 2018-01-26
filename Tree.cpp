//
// Created by David SeWell on 1/23/18.
//

#include "Tree.hpp"

Tree::Tree() {

}

void Tree::addNode(Node node) {

    this->nodes.push_back(node);

}

/*
 * Input: Node
 * Output: Equivalent Node in the tree based off certain characteristics
 * This is used if a tree already contains a node and we want to perform
 * some action on that node or based off that node
 */
<Node> Tree::findNode(Node node) {

    for(this->nodeIterator = this->nodes.begin(); this->nodeIterator != this->nodes.end(); ++this->nodeIterator)
    {
        bool nodesEqual = true;
    }

    return node;
}

/*
 * Input: index
 * Return <Node> at index of nodes
 */
<Node> Tree::getNode(int index) {

    return nodes.at(index);
}

/*
 * Input: void
 * Return: Vector of tree node
 */
std::vector<Node> Tree::getNodes() {

    return this->nodes;

}

<Node> Tree::getRoot() {

    return this->nodes.at(0);
}



