//Question Link
//https://www.codechef.com/START244C/problems/CARRCOL

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	
	cin >> t;
	while(t--){
	    int n , l , r;
	    cin >> n >> l >> r;
	    
	    vector<int> a(n+1);
	    
	    for(int i=1; i<=n; i++){
	        cin >> a[i];
	    }
	    
	    int leftSum=0 , rightSum =0;
	    
	    for(int i = 1; i< l; i++){
	        leftSum += a[i];
	    }
	    
	    for(int i=r+1; i<=n ; i++){
	        rightSum+=a[i];
	    }
	    
	    cout << max(rightSum,leftSum) << "\n";
	    
	    
	}
	return 0;

}
