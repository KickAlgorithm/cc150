/*************************************************************************
	> File Name: 3.cpp
	> Author: Louis1992
	> Mail: zhenchaogan@gmail.com
	> Blog: http://gzc.github.io
	> Created Time: Mon Nov  2 16:54:47 2015
 ************************************************************************/
#include<iostream>
#include<vector>
using namespace std;

int search(vector<int>& nums, int target) {
    int i(0), j(nums.size()-1);
    while(i < j) {
        int mid = (i+j) >> 1;
        if(target < nums[mid]) {
            if(nums[j] < nums[mid] && target < nums[i])
                i = mid + 1;
            else
                j = mid - 1;
        } else if(target > nums[mid]) {
            if(nums[i] > nums[mid] && target > nums[j])
                j = mid - 1;
            else
                i = mid + 1;
        } else
            return mid;
    }
    return nums[i] == target? i : -1;
}

int main() {
    vector<int> myvec {3,4,5,6,2};
    cout << search(myvec, 2) << endl;
    cout << search(myvec, 1) << endl;
    return 0;
}