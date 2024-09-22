//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string preToInfix(string pre_exp) {
        // Write your code here
        reverse(pre_exp.begin(),pre_exp.end());
        stack<string>st;
        for(int i=0;i<pre_exp.size();i++){
            if(pre_exp[i]>='A' && pre_exp[i]<='Z' || pre_exp[i]>='a' && pre_exp[i]<='z'
            || pre_exp[i]>='0' && pre_exp[i]<='9'){
                st.push(string(1,pre_exp[i]));
            }
            else{
                // found operand
                string s1=st.top();
                st.pop();
                string s2=st.top();
                st.pop();
                st.push('('+s1+pre_exp[i]+s2+')');
            }
        }
        string ans=st.top();
        // reverse()
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        string prefix;
        cin >> prefix;

        Solution obj;
        cout << obj.preToInfix(prefix) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends