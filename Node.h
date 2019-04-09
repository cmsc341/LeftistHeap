//
// Created by Ben Johnson on 2019-04-09.
//

#ifndef LEFTISTHEAP_NODE_H
#define LEFTISTHEAP_NODE_H

#include <string>
class LeftistHeap;

class Node {
public:
    Node(int data);
    void print(const std::string &prefix, bool isLeft);
    friend LeftistHeap;
private:
    Node * m_left, * m_right;
    int m_data;
    int npl;

    Node *merge(Node *right);

    Node *mergeAux(Node *leftHeap, Node *rightHeap);
};


#endif //LEFTISTHEAP_NODE_H
