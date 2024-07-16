//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    string printString(string s, char ch, int count) {
        // Your code goes here
        int cnt=0;
        int idx=0;
        string str="";
        for(int i=0;i<s.size();i++){
            if(s[i]==ch){
                cnt++;
                if(cnt==count){
                    // idx=i;
                    // break;
                    int j=i+1;
                    while(j<s.size()){
                        str=str+s[j++];
                    }
                    break;
                }
            }
        }
        return str;
        // if(cnt==0 && idx==0){
        //     return "";
        // }
        // string str="";
        // for(int i=idx+1;i<s.size();i++){
        //     str=str+s[i];
        // }
        // return str;
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string s;
        char ch;
        int count;

        cin >> s >> ch >> count;
        Solution ob;
        cout << ob.printString(s, ch, count) << "\n";
    }

    return 0;
}
// } Driver Code Ends