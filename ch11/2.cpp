/*************************************************************************
	> File Name: 2.cpp
	> Author: Louis1992
	> Mail: zhenchaogan@gmail.com
	> Blog: http://gzc.github.io
	> Created Time: Mon Nov  2 16:36:18 2015
 ************************************************************************/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(string s1, string s2) {
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    return s1 < s2;
}

int main() {
    vector<string> myvec {"abc","bca","abd","bda", "bac"};
    sort(myvec.begin(), myvec.end(), compare);
    for(auto e : myvec) cout << e << " ";
    return 0;
}