//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string postToInfix(string exp) {
        // Write your code here
        // string ans="";
        stack<string>st;
        for(int i=0;i<exp.size();i++){
            if(exp[i]>='a' && exp[i]<='z' || exp[i]>='A' && exp[i]<='Z'
            || exp[i]>='0' && exp[i]<='9'){
                st.push(string(1,exp[i]));
            }
            else{
                string b=st.top();
                st.pop();
                string a=st.top();
                st.pop();
                st.push('('+a+exp[i]+b+')');  
                // // for optimization
                // ostringstream oss;
                // oss<<'('<<a<<exp[i]<<b<<')';
                // st.push(oss.str());
            }
        }
        return st.top();
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        string postfix;
        cin >> postfix;
        // char marker; cin >> marker;

        Solution obj;
        cout << obj.postToInfix(postfix) << endl;

        // cout << "~\n";
    }
    fclose(stdout);

    return 0;
}

// } Driver Code Ends