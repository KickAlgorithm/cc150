/*************************************************************************
	> File Name: 3.cpp
	> Author: Louis1992
	> Mail: zhenchaogan@gmail.com
	> Blog: http://gzc.github.io
	> Created Time: Mon Nov  9 08:35:30 2015
 ************************************************************************/
#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int _v):val(_v){}
};

void deleteNode(ListNode* node) {
    ListNode* next = node->next;
    node->val = next->val;
    node->next = next->next;
    delete next;
}

void format(ListNode *head) {
    while(head) {
        cout << head-> val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    
    ListNode *l1 = new ListNode(1);
    ListNode *l2 = new ListNode(2);
    ListNode *l3 = new ListNode(3);
    l1->next = l2;
    l2->next = l3;
    deleteNode(l1);
    format(l1);
    return 0;
}