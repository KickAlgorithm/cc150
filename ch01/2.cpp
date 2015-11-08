/*************************************************************************
	> File Name: 2.cpp
	> Author: Louis1992
	> Mail: zhenchaogan@gmail.com
	> Blog: http://gzc.github.io
	> Created Time: Sun Nov  8 11:47:52 2015
 ************************************************************************/
#include<iostream>
using namespace std;

void reverse(char *s) {
    int i(0),j(strlen(s)-1);
    while(i < j) {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
}

int main() {
    char s[] = "hello world";
    reverse(s);
    cout << s << endl;
    return 0;
}