/*************************************************************************
	> File Name: 1.cpp
	> Author: Louis1992
	> Mail: zhenchaogan@gmail.com
	> Blog: http://gzc.github.io
	> Created Time: Mon Nov  2 15:55:19 2015
 ************************************************************************/
#include<iostream>
using namespace std;

void merge(int *A, int sa, int *B, int sb) {
    int index = sa + sb - 1;
    sa--; sb--;
    while(sa >= 0 && sb >= 0) {
        if(A[sa] >= B[sb]) A[index--] = A[sa--];
        else A[index--] = B[sb--];
    }
    while(sa >= 0) A[index--] = A[sa--];
    while(sb >= 0) A[index--] = B[sb--];
}

int main() {
    int bigarray[100], smallarray[10];
    for(int i = 0;i < 90;i++) bigarray[i] = i;
    for(int i = 0;i < 10;i++) smallarray[i] = 10*i;
    merge(bigarray, 90, smallarray, 10);
    for(int i = 0;i < 100;i++) cout << bigarray[i] << " ";
    return 0;
}