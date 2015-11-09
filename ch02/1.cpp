/*************************************************************************
	> File Name: 1.cpp
	> Author: Louis1992
	> Mail: zhenchaogan@gmail.com
	> Blog: http://gzc.github.io
	> Created Time: Mon Nov  9 00:37:59 2015
 ************************************************************************/
#include<iostream>
using namespace std;

struct Linkedlist {
    int v;
    Linkedlist *next;
    Linkedlist(int _v):v(_v){}
};

void removeDuplicate(Linkedlist *head) {
    if(!head || !head->next) return;
    
    int pre(head->v);
    Linkedlist *newhead = head;
    head = head->next;
    
    while(head) {
        if(head->v == pre) {
            //do nothing
        } else {
            newhead->next = head;
            newhead = head;
        }
        head = head->next;
    }
    newhead->next = nullptr;
}

void format(Linkedlist *head) {
    while(head) {
        cout << head-> v << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    
    Linkedlist *l1 = new Linkedlist(1);
    Linkedlist *l2 = new Linkedlist(1);
    Linkedlist *l3 = new Linkedlist(2);
    l1->next = l2;
    l2->next = l3;
    removeDuplicate(l1);
    format(l1);
    return 0;
}