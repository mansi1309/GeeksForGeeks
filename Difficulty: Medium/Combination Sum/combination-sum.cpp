//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    vector<vector<int>>ans;
        // set<vector<int>> uniqueCombinations;
    void solve(vector<int> &A,int i,vector<int>&v,int B){
        
        // if(B==0){
        //     if (uniqueCombinations.find(v) == uniqueCombinations.end()) {
        //         ans.push_back(v);
        //         uniqueCombinations.insert(v);
        //     }

        //     return;
        // }
         if (B == 0) {
            ans.push_back(v);
            return;
        }
        if(B<0){
            return;
        }
        if(i==A.size()){
            return;
        }
        // not take
        // solve(A,i+1,v,B);
        
        
        // // take
        // v.push_back(A[i]);
        // solve(A,i,v,B-A[i]);
        
        // // backtrack
        // v.pop_back();
        for (int j = i; j < A.size(); j++) {
            // Skip duplicates
            if (j > i && A[j] == A[j - 1]) continue;
            
            v.push_back(A[j]);
            solve(A, j, v, B - A[j]); // Allow the same element again
            v.pop_back(); // Backtrack
        }

    }
    vector<vector<int> > combinationSum(vector<int> &A, int B) {
        // Your code here
        sort(A.begin(),A.end());
        
        
        vector<int>v;
        solve(A,0,v,B);
        sort(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            A.push_back(x);
        }   
        int sum;
        cin>>sum;
        Solution ob;
        vector<vector<int>> result = ob.combinationSum(A, sum);
   		if(result.size()==0){
   			cout<<"Empty";
   		}
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}	
// } Driver Code Ends