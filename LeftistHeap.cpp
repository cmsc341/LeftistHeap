//
// Created by Ben Johnson on 2019-04-09.
//

#include "LeftistHeap.h"

void LeftistHeap::merge(LeftistHeap heap) {
    m_root = mergeNode(m_root, heap.m_root);
}

Node *LeftistHeap::mergeAux(Node *leftHeap, Node *rightHeap) {
    if (leftHeap->m_left == nullptr)
        leftHeap->m_left = rightHeap;
    else
    {
        leftHeap->m_right = mergeNode(leftHeap->m_right, rightHeap);
        if (leftHeap->m_left->npl < leftHeap->m_right->npl)
            swapChildren(leftHeap);
        leftHeap->npl = leftHeap->m_right->npl + 1;
    }
    return leftHeap;
}

Node *LeftistHeap::mergeNode(Node *leftSubHeap, Node *rightSubHeap) {
    // Adapted from https://www.geeksforgeeks.org/leftist-tree-leftist-heap/
    if (leftSubHeap == nullptr) {
        return rightSubHeap;
    }
    if (rightSubHeap == nullptr) {
        return leftSubHeap;
    }
    if (leftSubHeap->m_data < rightSubHeap->m_data) {
        return mergeAux(leftSubHeap, rightSubHeap);
    } else {
        return mergeAux(rightSubHeap, leftSubHeap);
    }
}

void LeftistHeap::swapChildren(Node *node) {
    Node* temp = node->m_left;
    node->m_left = node->m_right;
    node->m_right = temp;
}

void LeftistHeap::print() {
    m_root->print("", false);
}
