/*************************************************************************
	> File Name: 6.cpp
	> Author: Louis1992
	> Mail: zhenchaogan@gmail.com
	> Blog: http://gzc.github.io
	> Created Time: Mon Nov  9 09:13:58 2015
 ************************************************************************/
#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int _v):val(_v){}
};

ListNode *detectCycle(ListNode *head) {
    
    if(!head) return nullptr;
    
    ListNode *slow(head), *fast(head);
    
    while(fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast) break;
    }
    if(!fast || !fast->next) return nullptr;
    slow = head;
    while(slow != fast) {
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
}

int main() {
    ListNode *l1 = new ListNode(1);
    ListNode *l2 = new ListNode(2);
    ListNode *l3 = new ListNode(3);
    ListNode *l4 = new ListNode(4);
    ListNode *l5 = new ListNode(5);
    l1->next = l2;
    l2->next = l3;
    l3->next = l4;
    l4->next = l5;
    l5->next = l3;
    ListNode *intersection = detectCycle(l1);
    cout << intersection->val << endl;
    return 0;
}