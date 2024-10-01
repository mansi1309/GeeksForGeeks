//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:

    vector<int> replaceWithRank(vector<int> &arr, int N){
        // vector<int>v;
        // min heap
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<N;i++){
            pq.push(arr[i]);
        }
        unordered_map<int,int>mp;
        int i=1;
        while(!pq.empty()){
            int val=pq.top();
            pq.pop();
            if(mp.find(val)==mp.end()){
                mp[val]=i++;
            }
        }
        vector<int>v;
        for(int i=0;i<N;i++){
            v.push_back(mp[arr[i]]);
        }
        return v;
    }

};


//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while(t--){
        //Input

       int n; cin >> n;
       vector<int> vec(n);
       for(int i = 0;i<n;i++) cin >> vec[i];

        Solution obj;
        vector<int> ans = obj.replaceWithRank(vec,n);
        for(int i = 0;i<n;i++) cout << ans[i] << " ";
        cout << endl;
        

        
        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends