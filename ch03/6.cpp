/*************************************************************************
	> File Name: 6.cpp
	> Author: Louis1992
	> Mail: zhenchaogan@gmail.com
	> Blog: http://gzc.github.io
	> Created Time: Mon Nov  9 13:55:10 2015
 ************************************************************************/
#include<iostream>
#include<stack>
using namespace std;

void sortStack(stack<int> &mystack) {
    stack<int> sorted;
    
    while(!mystack.empty()) {
        int v = mystack.top();
        mystack.pop();
        while(!sorted.empty() && v < sorted.top()) {
            int temp = sorted.top();
            sorted.pop();
            mystack.push(temp);
        }
        sorted.push(v);
    }
    
    mystack = sorted;
}

int main()
{
    stack<int> mystack;
    mystack.push(3);
    mystack.push(1);
    mystack.push(2);
    
    sortStack(mystack);
    
    while(!mystack.empty()) {
        cout << mystack.top();
        mystack.pop();
    }
    
    return 0;
}