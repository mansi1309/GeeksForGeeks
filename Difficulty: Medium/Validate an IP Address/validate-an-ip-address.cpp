//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int isValid(string str) {
        // code here
        string a = "", b = "", c = "", d = "";
        int cnt = 0ll;
        for(int i = 0; i < str.size(); i++) {
            if(str[i]!='.' && cnt == 0) {
                a+=str[i];
            }
            if(str[i]!='.' && cnt == 1) {
                b+=str[i];
            } 
            if(str[i]!='.' && cnt == 2) {
                c+=str[i];
            } 
            if(str[i]!='.' && cnt == 3) {
                d+=str[i];
            }
            else if(str[i] == '.')cnt++;
        }
        if(cnt != 3)return false;
        if(a=="" || b == "" || c == "" || d == "")return false;
        if ((a.size() > 1 && a[0] == '0') || (b.size() > 1 && b[0] == '0') ||
            (c.size() > 1 && c[0] == '0') || (d.size() > 1 && d[0] == '0')) {
            return false;
        }
        int p = stoi(a), q = stoi(b), r = stoi(c), ss = stoi(d);
        if(p >= 0 && p < 256 && q >= 0 && q < 256 && r >= 0 && r < 256 && ss >= 0 && ss < 256) {
            return true;
        }
        return false;
    }
};

//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        // if (s.size() == 3) {
        //     cout << "false" << endl;
        //     return 0;
        // }
        Solution ob;
        bool f = ob.isValid(s);
        if (f)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends