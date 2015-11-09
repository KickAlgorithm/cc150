/*************************************************************************
	> File Name: 5.cpp
	> Author: Louis1992
	> Mail: zhenchaogan@gmail.com
	> Blog: http://gzc.github.io
	> Created Time: Mon Nov  9 08:44:38 2015
 ************************************************************************/
#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int _v):val(_v){}
};

ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
    ListNode *head = new ListNode(0);
    ListNode *cur = head;
    ListNode *pre = cur;
    int add = 0;
    
    while(l1 || l2 || add) {
        int a = (l1 == NULL? 0 : l1->val);
        int b = (l2 == NULL? 0 : l2->val);
        int c = a + b + add;
        add = c > 9? 1 : 0;
        int v = c%10;
        cur->val = v;
        ListNode *next = new ListNode(0);
        cur -> next = next;
        pre = cur;
        cur = next;
        if(l1) l1 = l1->next;
        if(l2) l2 = l2->next;
    }
    
    pre->next = NULL;
    return head;
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
    ListNode *l4 = new ListNode(9);
    ListNode *l5 = new ListNode(9);
    l4->next = l5;
    ListNode *newhead = addTwoNumbers(l1, l4);
    format(newhead);
    return 0;
}