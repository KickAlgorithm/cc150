/*************************************************************************
	> File Name: 8.cpp
	> Author: Louis1992
	> Mail: zhenchaogan@gmail.com
	> Blog: http://gzc.github.io
	> Created Time: Sun Nov  8 19:17:30 2015
 ************************************************************************/
#include<iostream>
using namespace std;

bool isRotation(string s1, string s2) {
    s1 = s1+s1;
    return (s1.find(s2) != string::npos);
}

int main() {
    
    cout << isRotation("abcd", "bcad") << endl;
    cout << isRotation("abcd", "bcda") << endl;
    
    return 0;
}