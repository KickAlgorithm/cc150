/*************************************************************************
	> File Name: 5.cpp
	> Author: Louis1992
	> Mail: zhenchaogan@gmail.com
	> Blog: http://gzc.github.io
	> Created Time: Sun Nov  8 18:41:36 2015
 ************************************************************************/
#include<iostream>
using namespace std;

string compression(string s) {
    int count(1);
    char pre(s[0]);
    string res("");
    for(int i = 1;i < s.length();i++) {
        if(s[i] == pre) count++;
        else {
            res = res + to_string(count) + pre;
            count = 1;
            pre = s[i];
        }
    }
    res = res + to_string(count) + pre;
    if(res.length() < s.length()) return res;
    return s;
}

int main() {
    cout << compression("aaaabbbbbc");
    return 0;
}