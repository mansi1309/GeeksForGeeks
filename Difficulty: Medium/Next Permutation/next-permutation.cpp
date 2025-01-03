//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        // code here
        int idx1=-1;
        for(int i=arr.size()-2;i>=0;i--){
            if(arr[i]<arr[i+1]){
                idx1=i;
                break;
            }
        }
        // int idx=0;
        if(idx1<0){
            sort(arr.begin(),arr.end());
        }
        else{
            int idx2=0;
            for(int i=arr.size()-1;i>=idx1;i--){
                if(arr[i]>arr[idx1]){
                    idx2=i;
                    break;
                }
            }
            swap(arr[idx1],arr[idx2]);
            reverse(arr.begin()+idx1+1,arr.end());
        }
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
        Solution ob;
        int n = arr.size();
        ob.nextPermutation(arr);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends