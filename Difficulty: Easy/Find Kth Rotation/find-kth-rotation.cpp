//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int cnt=0;
        int low=0;
        int high=arr.size()-1;
        int ans=INT_MAX;
        if(arr[low]<arr[high]){
            return cnt;
        }
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[low]<=arr[mid]){
                if(arr[low]<ans){
                ans=arr[low];
                cnt=low;
                }
                low=mid+1;
            }
            else{
                if(arr[mid]<ans){
                    cnt=mid;
                    ans=arr[mid];
                }
                
                high=mid-1;
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
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1) {
            arr.push_back(number1);
        }
        Solution ob;
        int res = ob.findKRotation(arr);
        cout << res << endl;
    }
}
// } Driver Code Ends