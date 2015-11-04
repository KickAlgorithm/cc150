/*************************************************************************
	> File Name: 4.cpp
	> Author: Louis1992
	> Mail: zhenchaogan@gmail.com
	> Blog: http://gzc.github.io
	> Created Time: Tue Nov  3 17:10:56 2015
 ************************************************************************/
#include<iostream>
using namespace std;

int countDigitTwo(int n) {
    int res(0), m(1), r(1);
    while(n > 0)
    {
        res += ((n + 7) / 10 * m + (n % 10 == 2? r : 0));
        r += ((n%10)*m);
        m *= 10;
        n /= 10;
    }
    return res;
}

int main() {
    cout << countDigitTwo(22) << endl;
    return 0;
}