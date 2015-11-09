/*************************************************************************
	> File Name: 4.cpp
	> Author: Louis1992
	> Mail: zhenchaogan@gmail.com
	> Blog: http://gzc.github.io
	> Created Time: Mon Nov  9 13:28:40 2015
 ************************************************************************/
#include<iostream>
#include<stack>
using namespace std;

void Move(stack<int> & x,stack<int> & y)
{
    int v = x.top();
    x.pop();
    y.push(v);
}
void Hannoi(int n,stack<int> &a,stack<int> &b,stack<int> &c)

{
    if(n==1)
        Move(a,c);
    else
    {
        Hannoi(n-1,a,c,b);
        Move(a,c);
        Hannoi(n-1,b,a,c);
    }
}

int main()
{
    stack<int> a;
    stack<int> b;
    stack<int> c;
    a.push(3);
    a.push(2);
    a.push(1);
    Hannoi(3,a,b,c);
    
    while(!c.empty()) {
        cout << c.top() << endl;
        c.pop();
    }
    
    return 0;
}