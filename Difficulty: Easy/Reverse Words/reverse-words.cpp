//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        string temp="";
        string ans="";
        for(int i=0;i<S.size();i++){
            if(S[i]=='.'){
                if(ans.empty()){
                    ans=temp;
                }
                else{
                ans=temp+"."+ans;
                }
                temp="";
            }
            else{
                temp=temp+S[i];
            }
        }
        if(ans.empty())
        {
             ans=temp;
        }
                else{
                ans=temp+"."+ans;
                }
                return ans;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends