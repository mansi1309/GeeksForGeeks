//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    // code here
	    int cnt=0;
	    int low=0;
	    int high=n-1;
	    int mid=0;
	    int first=-1;
	    int last=-1;
	    while(low<=high){
	        mid=low+(high-low)/2;
	        if(arr[mid]==x){
	            cnt++;
	            first=mid;
	            last=mid;
	            while(first>0 && arr[first-1]==x){
	                cnt++;
	                first--;
	            }
	            while(last<n-1 && arr[last+1]==x){
	                cnt++;
	                last++;
	            }
	            break;
	        }
	        if(arr[mid]>x){
	            high=mid-1;
	        }
	        else{
	            low=mid+1;
	        }
	    }
	    return cnt;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends