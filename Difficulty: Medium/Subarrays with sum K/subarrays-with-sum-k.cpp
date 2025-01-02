//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int countSubarrays(vector<int> &arr, int k) {
        // code here
        // int cnt=0;
        // for(int i=0;i<arr.size()-1;i++){
        //     int sum=0;
        //     for(int j=i;j<arr.size();j++){
        //         sum+=arr[j];
        //     if(sum==k){
        //         cnt++;
        //         // break;
        //     }
         
        //     }
           
        // }
        // return cnt;
        
        // using prefix sum
        unordered_map<int,int>mp;
        int sum=0;
        int cnt=0;
        for(int i=0;i<arr.size();i++){
            sum=sum+arr[i];
            if(sum==k){
                cnt++;
            }
            if(mp.find(sum-k)!=mp.end()){
                cnt+=mp[sum-k];
            }
            mp[sum]++;
            
        }
        return cnt;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        cout << obj.countSubarrays(arr, k);
        cout << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends