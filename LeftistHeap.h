//
// Created by Ben Johnson on 2019-04-09.
//

#ifndef LEFTISTHEAP_LEFTISTHEAP_H
#define LEFTISTHEAP_LEFTISTHEAP_H


#include "Node.h"

class LeftistHeap {
    void merge(LeftistHeap heap);
private:
    Node* mergeNode(Node *leftSubHeap, Node * rightSubHeap);
    Node *mergeAux(Node *leftHeap, Node *rightHeap);
    Node *m_root;

    void swapChildren(Node *node);

public:
    void print();
};


#endif //LEFTISTHEAP_LEFTISTHEAP_H
