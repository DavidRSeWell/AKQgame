//
// Created by David SeWell on 1/24/18.
//

#include "Node.hpp"
#include <string>


Node::Node(std::string player,std::string action = "", int nodeIndex, bool isLeaf = false,
           float p1CIP = 0, float p2CIP = 0)
{
    this->action = action;

    this->isLeaf = isLeaf;

    this->nodeIndex =nodeIndex;

    this->player = player;

    this->p1CIP = p1CIP;

    this->p2CIP = p2CIP;

    this->visitCount = 0;
};