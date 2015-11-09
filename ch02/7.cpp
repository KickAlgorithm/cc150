/*************************************************************************
	> File Name: 7.cpp
	> Author: Louis1992
	> Mail: zhenchaogan@gmail.com
	> Blog: http://gzc.github.io
	> Created Time: Mon Nov  9 09:16:27 2015
 ************************************************************************/
#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int _v):val(_v){}
};

ListNode* reverseList(ListNode* head) {
    ListNode *tmp(NULL),*prev(NULL);
    while(head)
    {
        tmp = head->next;
        head->next = prev;
        prev = head;
        head = tmp;
    }
    return prev;
}

bool isPalindrome(ListNode* head) {
    if(!head || !head->next)
        return true;
    ListNode *slow(head), *fast(head);
    
    while(fast->next && fast->next->next){
        slow = slow->next;
        fast = fast->next->next;
    }
    
    slow = reverseList(slow->next);
    while(slow){
        if(head->val != slow->val)
            return false;
        head = head->next;
        slow = slow->next;
    }
    return true;
}

int main() {
    ListNode *l1 = new ListNode(1);
    ListNode *l2 = new ListNode(2);
    ListNode *l3 = new ListNode(3);
    ListNode *l4 = new ListNode(2);
    ListNode *l5 = new ListNode(1);
    l1->next = l2;
    l2->next = l3;
    l3->next = l4;
    l4->next = l5;
    cout << isPalindrome(l1) << endl;
    return 0;
}