//
// Created by Ben Johnson on 2019-04-09.
//
#include <iostream>

#include <string>
#include "Node.h"

using namespace std;

Node::Node(int data) : m_data(data) {
    npl = 0;
    m_left = nullptr;
    m_right = nullptr;
}


// adapted from https://stackoverflow.com/questions/36802354/print-binary-tree-in-a-pretty-way-using-c
void Node::print(const string &prefix, bool isLeft) {
    if (this != nullptr) {
        std::cout << prefix;

        std::cout << (isLeft ? "├──" : "└──");

        // print the value of the node
        std::cout << this->m_data << std::endl;

        // enter the next tree level - m_left and m_right branch
        m_left->print(prefix + (isLeft ? "│   " : "    "), true);
        m_right->print(prefix + (isLeft ? "│   " : "    "), false);
    }
}


