//{ Driver Code Starts
/* Driver program to test above function */

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int findMaxProduct(vector<int>& arr) {
        // Write your code here
        if(arr.size()==1)
        return arr[0];
        
        long long int mod=1e9+7;
        long long int cnt0=0,posCnt=0,negCnt=0,pos=1,neg=1,negMaxi=INT_MIN;
        for(int x:arr){
            if(x==0){
                cnt0++;
            }
            else if(x<0){
                negMaxi=max(negMaxi,(long long int)x);
                neg=(neg*(long long int)x)%mod;
                negCnt++;
            }
            else{
                pos=(pos*(long long int)x)%mod;
                posCnt++;
           
            }
        }
        if(cnt0==0 && negCnt==0){
            return 0;
        }
        if(negCnt<=1 && posCnt==0)
        return 0;
        
        if(neg<0){
            neg=neg/negMaxi;
        }
        
        return (pos*neg)%mod;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        long long int ans = ob.findMaxProduct(arr);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends