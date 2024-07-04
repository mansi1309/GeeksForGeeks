//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
// 	int power(int mid,int n){
// 	    int val=1;
// 	    for(int i=1;i<=n;i++){
// 	        val=val*mid;
// 	    }
// 	    return val;
// 	}
	int NthRoot(int n, int m)
	{
	    // Code here.
	    int low=1;
	    int high=m;
	   // int mid=(low+high)/2;
	    while(low<=high){
	        int mid=(low+high)/2;
	       // int ans=pow(mid,n);
	        if(pow(mid,n)==m){
	            return mid;
	           // break;
	        }
	        if(pow(mid,n)>m){
	            high=mid-1;
	        }
	        else if(pow(mid,n)<m){
	            low=mid+1;
	        }
	    }
	    return -1;
	}  
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		Solution ob;
		int ans = ob.NthRoot(n, m);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends