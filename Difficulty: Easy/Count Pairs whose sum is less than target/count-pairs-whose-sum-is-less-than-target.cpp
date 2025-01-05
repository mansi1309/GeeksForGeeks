//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Your code here
        int cnt=0;
    //   for(int i=0;i<arr.size()-1;i++){
    //       for(int j=i+1;j<arr.size();i++){
    //           int sum=arr[i]+arr[j];
    //           if(sum<target){
    //               cnt++;
    //           }
    //       }
    //   }
      
    //   return cnt; 
    sort(arr.begin(),arr.end());
    int l=0;
    int r=arr.size()-1;
    while(l<r){
        int sum=arr[l]+arr[r];
        if(sum<target){
            cnt+=r-l;
            l++;
            
        }
        else{
            r--;
        }
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
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int target;
        cin >> target;
        cin.ignore();
        Solution ob;
        int res = ob.countPairs(arr, target);
        cout << res << endl;
        cout << "~\n";
    }
    return 0;
}
// } Driver Code Ends