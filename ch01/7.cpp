/*************************************************************************
	> File Name: 7.cpp
	> Author: Louis1992
	> Mail: zhenchaogan@gmail.com
	> Blog: http://gzc.github.io
	> Created Time: Sun Nov  8 19:02:43 2015
 ************************************************************************/
#include<iostream>
#include<vector>
using namespace std;

void setZero(vector<vector<int> > &matrix) {
    
    bool r(false),c(false);
    
    for(int i = 0;i < matrix.size();i++) {
        for(int j = 0;j < matrix[0].size();j++) {
            if(matrix[i][j] == 0) {
                if(i == 0) r = true;
                if(j == 0) c = true;
                if(i != 0 && j != 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }
    }
    
    for(int i = 1;i < matrix.size();i++)
        if(matrix[i][0] == 0)
            for(int k = 0;k < matrix[0].size();k++)
                matrix[i][k] = 0;
    
    for(int j = 1;j < matrix[0].size();j++)
        if(matrix[0][j] == 0)
            for(int k = 0;k < matrix.size();k++)
                matrix[k][j] = 0;
    if(r == true)
        for(int k = 0;k < matrix[0].size();k++)
            matrix[0][k] = 0;
    if(c == true)
        for(int k = 0;k < matrix.size();k++)
            matrix[k][0] = 0;
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
    vector<int> v1{0,2,0,4};
    vector<int> v2{5,6,7,8};
    vector<int> v3{1,0,3,4};
    vector<int> v4{1,2,3,4};
    vector<vector<int>>v{v1,v2,v3,v4};
    format(v);
    setZero(v);
    format(v);
    
    return 0;
}