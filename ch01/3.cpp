/*************************************************************************
	> File Name: 3.cpp
	> Author: Louis1992
	> Mail: zhenchaogan@gmail.com
	> Blog: http://gzc.github.io
	> Created Time: Sun Nov  8 12:00:32 2015
 ************************************************************************/
#include<iostream>
using namespace std;

bool isPermutation(string s1, string s2) {
    if(s1.length() != s2.length()) return false;
    int a[256] = {0};
    for(auto e : s1) a[e]++;
    for(auto e : s2) {
        a[e]--;
        if(a[e] < 0) return false;
    }
    return true;
}

int main() {
    
    cout << isPermutation("Iloveyou","youloveI") << endl;
    
    return 0;
}