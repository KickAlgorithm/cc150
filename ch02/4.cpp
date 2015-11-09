/*************************************************************************
	> File Name: 4.cpp
	> Author: Louis1992
	> Mail: zhenchaogan@gmail.com
	> Blog: http://gzc.github.io
	> Created Time: Mon Nov  9 08:40:56 2015
 ************************************************************************/
#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int _v):val(_v){}
};

ListNode *partition(ListNode *head, int x) {
    ListNode *head1 = new ListNode(0);
    ListNode *head2 = new ListNode(0);
    ListNode *h1 = head1;
    ListNode *h2 = head2;
    while(head)
    {
        int v = head->val;
        if(v < x)
        {
            head1->next = head;
            head1 = head1->next;
        } else {
            head2->next = head;
            head2 = head2->next;
        }
        head = head->next;
    }
    head2->next = NULL;
    head1->next = h2->next;;
    return h1->next;
}

void format(ListNode *head) {
    while(head) {
        cout << head-> val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    ListNode *l1 = new ListNode(3);
    ListNode *l2 = new ListNode(2);
    ListNode *l3 = new ListNode(1);
    l1->next = l2;
    l2->next = l3;
    ListNode *newhead = partition(l1, 2);
    format(newhead);
    return 0;
}