/*************************************************************************
	> File Name: 10.cpp
	> Author: Louis1992
	> Mail: zhenchaogan@gmail.com
	> Blog: http://gzc.github.io
	> Created Time: Mon Nov  2 15:39:48 2015
 ************************************************************************/
#include<iostream>
#include<vector>
using namespace std;

struct box {
    int w;
    int h;
    int d;
    box(int _w, int _h, int _d):w(_w), h(_h), d(_d){}
};

bool compare(const box &box1, const box &box2) {
    return box1.w < box2.w && box1.h < box2.h && box1.d < box2.d;
}

int maximumBox(vector<box> &boxes) {
    vector<int> myvec(boxes.size(), 1);
    sort(boxes.begin(), boxes.end(), compare);
    
    for(int i = 1;i < boxes.size();i++)
        for(int j = 0;j < i;j++)
            if(boxes[i].w > boxes[j].w && boxes[i].h > boxes[j].h && boxes[i].d > boxes[j].d)
                myvec[i] = max(myvec[i], myvec[j]+1);
    
    return myvec.back();
}


int main() {
    vector<box>boxes;
    boxes.push_back(box(1,1,1));
    boxes.push_back(box(1,2,3));
    boxes.push_back(box(3,1,2));
    boxes.push_back(box(5,5,5));
    boxes.push_back(box(4,5,6));
    cout << maximumBox(boxes);
    return 0;
}