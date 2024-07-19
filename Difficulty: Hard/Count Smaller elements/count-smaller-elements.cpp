//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
//  User function template for C++

class Solution {
  public:
    vector<int> constructLowerArray(vector<int> &arr) {
        // code here
        // O(N2)-->tle
        // int n=arr.size();
        // vector<int>v;
        // for(int i=0;i<arr.size()-1;i++){
        //     int cnt=0;
        //     for(int j=i+1;j<arr.size();j++){
        //         if(arr[i]>arr[j]){
        //             cnt++;
        //         }
        //     }
        //     v.push_back(cnt);
        // }
        // v.push_back(0);
        // return v;
        
        // using lower bound
        // lower bound returns the index where the element lie in the sorted order
        vector<int>res; //resulant vector
        vector<int>ans;  //sort vector
        for(int i=arr.size()-1;i>=0;i--){
            int index=lower_bound(ans.begin(),ans.end(),arr[i])-ans.begin();
            res.push_back(index);
            
            // now put arr[i] in sort vector
            if(index==arr.size()){
                ans.push_back(arr[i]);
            }
            else{
                ans.insert(ans.begin()+index,arr[i]);
            }
        }
        reverse(res.begin(),res.end());
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;

    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int n = arr.size();
        Solution ob;
        vector<int> a = ob.constructLowerArray(arr);
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends