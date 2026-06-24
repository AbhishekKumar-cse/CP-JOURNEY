//Question Link
//https://www.codechef.com/START244C/problems/DIV2

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--){
	int n;
	cin >> n;
	vector <int> a(n);
	
	
	for(int i =0 ; i<n; i++){
	    cin >> a[i];
	}
	
	long long minOps = -1;
	long long currTar = a[0];
	long long tarOps = 0;
	
	while(true){
	    long long totOps = tarOps;
	    bool poss = true;
	    
	    for(int i = 1; i<n; i++){
	        long long temp = a[i];
	        long long ops = 0;
	        
	        while(temp > currTar){
	            temp /= 2;
	            ops++;
	        }
	        
	        if(temp == currTar){
	            totOps += ops;
	        }else{
	            poss = false;
	            break;
	        }
	    }
	    
	    if(poss){
	        if(minOps == -1 || totOps < minOps){
	            minOps = totOps;
	        }
	    }
	    
	    if(currTar == 0){
	        break;
	    }
	    
	    
	    currTar /= 2;
	    tarOps++;
	}
	
cout << minOps << "\n";
}

return 0;
}
