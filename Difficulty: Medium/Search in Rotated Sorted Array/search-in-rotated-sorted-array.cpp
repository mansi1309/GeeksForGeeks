//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int search(vector<int>& arr, int key) {
        // complete the function here
        int l=0;
        int n=arr.size();
        int h=n-1;
        while(l<=h){
            int mid=(l+h)/2;
                // If the key is found at mid, return the index
            if(arr[mid]==key){
                return mid;
            }
            // check if left part is sorted
            else if(arr[l]<=arr[mid]){
                   // If the key lies in the sorted left half, adjust the high pointer
                if(key>=arr[l] && key<=arr[mid]){
                    h=mid-1;
                }
                else{
                     // Otherwise, adjust the low pointer to search in the right half

                    l=mid+1;
                }
            }
            // if the right half sorted
            else{
                if(key>=arr[mid] && key<=arr[h]){
                    // if key i=lies in sorted right half,adjust the low pointer
                    l=mid+1;
                }
                else{
                    // otherwise adjust the rigt pointer to swearch left half
                    h=mid-1;
                }
            }
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(arr, key) << endl;
    }
    return 0;
}
// } Driver Code Ends