//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:

    string longestCommonPrefix(vector<string> arr) {
        // your code here
        if (arr.empty()) return "-1";
    
    // Find the smallest length string
    string str = arr[0];
    int minLen = str.length();
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i].length() < minLen) {
            minLen = arr[i].length();
            str = arr[i];
        }
    }
    
    string ans = "";
    // Check prefix char by char
    for (int i = 0; i < minLen; i++) {
        char current = str[i];
        for (int j = 0; j < arr.size(); j++) {
            if (arr[j][i] != current) {
                return ans.empty() ? "-1" : ans;
            }
        }
        ans += current;
    }
    
    return ans.empty() ? "-1" : ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<string> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        string number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.longestCommonPrefix(arr) << endl;
    }
}

// } Driver Code Ends