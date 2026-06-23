//Question Link 
//https://codeforces.com/problemset/problem/610/A

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n;
    cin >> n;
 
    if (n % 2)
        cout << 0;
    else
        cout << (n - 2) / 4;
 
    return 0;
}