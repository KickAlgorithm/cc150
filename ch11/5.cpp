/*************************************************************************
	> File Name: 5.cpp
	> Author: Louis1992
	> Mail: zhenchaogan@gmail.com
	> Blog: http://gzc.github.io
	> Created Time: Mon Nov  2 17:39:52 2015
 ************************************************************************/
#include<iostream>
#include<vector>
using namespace std;

int findGivenStr(vector<string> &myvec, string target) {
    int i(0), j(myvec.size()-1);
    while(i < j) {
        int mid = (i+j) >> 1;
        while(mid < myvec.size() && myvec[mid] == " ") mid++;
        if(mid > j) { j = (i+j)/2 - 1; continue;}
        if(myvec[mid] == target) return mid;
        if(myvec[mid] > target) j = mid - 1;
        else i = mid + 1;
    }
    return myvec[i] == target? i : -1;
}

int main() {
    vector<string> testcase1 {" ", " ", " "};
    vector<string> testcase2 {" ", " ", "hello"};
    cout << findGivenStr(testcase1, "hello") << endl;;
    cout << findGivenStr(testcase2, "hello") << endl;;
    return 0;
}