//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int median(vector<vector<int>> &matrix, int R, int C){
        // code here 
        // vector<int>v;
        // for(int i=0;i<matrix.size();i++){
        //     for(int j=0;j<matrix[i].size();j++){
        //         v.push_back(matrix[i][j]);
        //     }
        // }
        // int half;
        // sort(v.begin(),v.end());
        // int med=v.size();
        // if(med%2!=0){
        //   half=med/2; 
        // }
        // else{
        //     half=med+1/2;
        // }
        // return v[half];
        
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(int i=0;i<R;i++){
            mini=min(mini,matrix[i][0]);
            maxi=max(maxi,matrix[i][C-1]);
        }
        int ans;
        while(mini<=maxi){
            int mid=(mini+maxi)/2;
            int freq=0;
            for(int i=0;i<R;i++){
               freq+=upper_bound(matrix[i].begin(),matrix[i].end(),mid)-matrix[i].begin(); 
            }
            if(freq>=(R*C+1)/2){
               ans=mid;
               maxi=mid-1;
            }
            else{
                mini=mid+1;
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        int ans=-1;
        ans=obj.median(matrix, r, c);
        cout<<ans<<"\n";        
    }
    return 0;
}
// } Driver Code Ends