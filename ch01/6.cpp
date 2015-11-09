/*************************************************************************
	> File Name: 6.cpp
	> Author: Louis1992
	> Mail: zhenchaogan@gmail.com
	> Blog: http://gzc.github.io
	> Created Time: Sun Nov  8 18:53:33 2015
 ************************************************************************/
#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<vector<int> > &matrix) {
    int n = matrix[0].size() -1;
    for(int i = 0;i <= n - i;i++){
        for(int j = i;j <= n - i - 1;j++)
        {
            int tmp = matrix[j][n-i];
            matrix[j][n-i] = matrix[i][j];
            matrix[i][j] = matrix[n-j][i];
            matrix[n-j][i] = matrix[n-i][n-j];
            matrix[n-i][n-j] = tmp;
        }
    }
}

void format(vector<vector<int> > &matrix) {
    for(auto e1 : matrix) {
        for(auto e2 : e1) {
            cout << e2 << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    vector<int> v1{1,2,3,4};
    vector<int> v2{5,6,7,8};
    vector<int> v3{1,2,3,4};
    vector<int> v4{1,2,3,4};
    vector<vector<int>>v{v1,v2,v3,v4};
    format(v);
    rotate(v);
    format(v);
    
    return 0;
}