/*************************************************************************
	> File Name: 4.cpp
	> Author: Louis1992
	> Mail: zhenchaogan@gmail.com
	> Blog: http://gzc.github.io
	> Created Time: Sun Nov  8 14:29:24 2015
 ************************************************************************/
#include<iostream>
using namespace std;

string replaceSpace(string s) {
    int count(0);
    for(auto e : s) if(e == ' ') count++;
    string res(s.length() + 2 * count, ' ');
    int j = res.length() - 1;
    for(int i = s.length() - 1;i >= 0;i--) {
        if(s[i] == ' ') {
            res[j] = '0';
            res[j-1] = '2';
            res[j-2] = '%';
            j -= 3;
        } else {
            res[j] = s[i];
            j--;
        }
    }
    return res;
}

int main() {
    cout << replaceSpace("I love you!") << endl;
    return 0;
}