//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string postToPre(string post_exp) {
        // Write your code here
        // postfix-->top2+top1
        // prefix convert--->operator+top2+top1
        stack<string>st;
        for(int i=0;i<post_exp.size();i++){
            if(post_exp[i]>='A' && post_exp[i]<='Z' ||
            post_exp[i]>='a' && post_exp[i]<='z' ||
            post_exp[i]>='0' && post_exp[i]<='9'){
                st.push(string(1,post_exp[i]));
            }
            else{
                // if operator comes
                string t1=st.top();
                st.pop();
                string t2=st.top();
                st.pop();
                st.push(post_exp[i]+t2+t1);
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
        cout << obj.postToPre(postfix) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends