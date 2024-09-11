//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int kthElement(int k, vector<int>& arr1, vector<int>& arr2) {
        // code here
       
        int n=arr1.size();
        int m=arr2.size();
         vector<int>v(n+m);
        int i=0;
        int j=0,x=0;
        while(i<n && j<m){
            if(arr1[i]<arr2[j]){
                v[x++]=arr1[i++];
            }
            else{
                v[x++]=arr2[j++];
            }
        }
        while(i<n){
            v[x++]=arr1[i++];
        }
        while(j<m){
            v[x++]=arr2[j++];
        }
        return v[k-1];
    }
};

//{ Driver Code Starts.

// Driver code
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, m, k;
        cin >> k;
        cin.ignore();
        string input;
        int num;
        vector<int> arr1, arr2;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr1.push_back(num);
        }

        getline(cin, input);
        stringstream s3(input);
        while (s3 >> num) {
            arr2.push_back(num);
        }

        Solution ob;
        cout << ob.kthElement(k, arr1, arr2) << endl;
    }
    return 0;
}
// } Driver Code Ends