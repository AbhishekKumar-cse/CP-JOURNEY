//Questions Link
//https://www.codechef.com/START244C/problems/PASSCHAIN


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
   int t;
   cin >> t;
   
   while(t--){
      int k;
      int n;
      
      cin >> n >> k;
      
       int ans = 1 + ((n-1)/k)*k;
       cout << ans << "\n";
   }
   return 0;
}

