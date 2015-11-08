/*************************************************************************
	> File Name: 1.cpp
	> Author: Louis1992
	> Mail: zhenchaogan@gmail.com
	> Blog: http://gzc.github.io
	> Created Time: Sun Nov  8 11:43:56 2015
 ************************************************************************/
#include<iostream>
using namespace std;

bool isUnique(string s) {
    bool check[256] = {false};
    for(auto e : s) {
        if(check[e]) return false;
        check[e] = true;
    }
    return true;
}

int main() {
    cout << isUnique("abc") << endl;
    cout << isUnique("1a1bc") << endl;
    return 0;
}