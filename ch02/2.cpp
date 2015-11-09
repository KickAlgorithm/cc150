/*************************************************************************
	> File Name: 2.cpp
	> Author: Louis1992
	> Mail: zhenchaogan@gmail.com
	> Blog: http://gzc.github.io
	> Created Time: Mon Nov  9 08:30:19 2015
 ************************************************************************/
#include<iostream>
using namespace std;

struct ListNode {
    int v;
    ListNode *next;
    ListNode(int _v):v(_v){}
};

ListNode* kthtoLast(ListNode *head, int k) {
    ListNode *fast(head);
    while(k--) fast = fast->next;
    while(fast) {
        head = head->next;
        fast = fast->next;
    }
    return head;
}

int main() {
    
    ListNode *l1 = new ListNode(1);
    ListNode *l2 = new ListNode(2);
    ListNode *l3 = new ListNode(3);
    l1->next = l2;
    l2->next = l3;
    cout << (kthtoLast(l1, 2))->v << endl;
    return 0;
}