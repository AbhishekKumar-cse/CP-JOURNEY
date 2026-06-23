//Question Link
//https://www.codechef.com/problems/FLOW006?tab=ide


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
   int t;
   cin>>t;
   
   while(t--){
       
       int n;
       cin >> n;
       
       int digitSum = 0;
       while(n>0){
           int lastDigit = n % 10;
           digitSum += lastDigit;
           n/=10;
       }
       
       cout << digitSum << endl;
       
   }
}
