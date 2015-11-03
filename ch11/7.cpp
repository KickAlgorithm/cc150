/*************************************************************************
	> File Name: 7.cpp
	> Author: Louis1992
	> Mail: zhenchaogan@gmail.com
	> Blog: http://gzc.github.io
	> Created Time: Mon Nov  2 18:30:17 2015
 ************************************************************************/
#include<iostream>
#include<vector>
using namespace std;

struct people {
    int w;
    int h;
    people(int _w, int _h):w(_w), h(_h){}
};

bool compare(const people &p1, const people &p2) {
    return p1.w < p2.w && p1.h < p2.h;
}

int maximumP(vector<people> &peoples) {
    vector<int> myvec(peoples.size(), 1);
    sort(peoples.begin(), peoples.end(), compare);
    
    for(int i = 1;i < peoples.size();i++)
        for(int j = 0;j < i;j++)
            if(peoples[i].w > peoples[j].w && peoples[i].h > peoples[j].h)
                myvec[i] = max(myvec[i], myvec[j]+1);
    
    return myvec.back();
}


int main() {
    vector<people>peoples;
    peoples.push_back(people(1,1));
    peoples.push_back(people(1,2));
    peoples.push_back(people(3,1));
    peoples.push_back(people(5,5));
    peoples.push_back(people(4,5));
    cout << maximumP(peoples);
    return 0;
}