//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int Maximize(vector<int> arr) {
        // Complete the function
        int mod=1e9+7;
        sort(arr.begin(),arr.end());
        long long sum=0;
        for(int i=0;i<arr.size();i++){
            long long pro=((long long)arr[i]*i)%mod;
            sum=(sum+pro)%mod;
        }
        return sum%mod;
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
        //  cin.ignore();
        int n = arr.size();
        Solution ob;
        cout << ob.Maximize(arr) << endl;
    }
}
// } Driver Code Ends