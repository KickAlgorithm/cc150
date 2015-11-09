/*************************************************************************
	> File Name: 3.cpp
	> Author: Louis1992
	> Mail: zhenchaogan@gmail.com
	> Blog: http://gzc.github.io
	> Created Time: Mon Nov  9 12:48:21 2015
 ************************************************************************/
#include<iostream>
#include<stack>
#include<vector>
using namespace std;

class clusteredStacks {
    int N;  //maximum capacity for every stack
    vector<stack<int>> mystacks;
    int cur;
    
public:
    
    clusteredStacks(int n) : N(n) {
        cur = -1;
    }
    
    void push(int v) {
        if(mystacks.size() > 0 && mystacks[cur].size() < N) {
            mystacks[cur].push(v);
        } else {
            stack<int> temp;
            temp.push(v);
            mystacks.push_back(temp);
            cur++;
        }
    }
    
    int top() {
        return mystacks[cur].top();
    }
    
    void pop() {
        mystacks[cur].pop();
        if(mystacks[cur].empty()) {
            cur--;
            mystacks.pop_back();
        }
    }
    
    bool empty() {
        return cur == -1;
    }
};

int main() {
    clusteredStacks stack(2);
    stack.push(1);
    stack.push(2);
    stack.push(3);
    while(!stack.empty()) {
        cout << stack.top() << endl;
        stack.pop();
    }
    return 0;
}