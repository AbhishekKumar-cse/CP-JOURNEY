//Question Link 
//https://www.codechef.com/START244C/problems/ANDOR1

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	 int t;
	 cin >> t;
	 
	 while(t--){
	     int n;
	     cin >> n;
	     
	     string a,b;
	     cin >> a >> b;
	     string x = "";
	     
	     for(char c : a){
	         if(x.empty() || x.back() != c){
	             x += c;
	         }
	     }
	     
	     string y = "";
	     for(char c : b){
	         if(y.empty() || y.back() != c){
	             y += c;
	         }
	     }
	     
	     int i =0;
	     int j=0;
	     
	     while(i < x.size() && j < y.size()){
	         if(x[i] == y[j]){
	             j++;
	         }
	         i++;
	     }
	     
	     
	     if(j == y.size()){
	         cout << "Yes\n";
	     }else{
	         cout << "No\n";
	     }
	 }
	 
	 return 0;

}
