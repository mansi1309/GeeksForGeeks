//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	string removeDuplicates(string str) {
	    // code here
	    string s="";
	    map<char,int>mp;
	    for(int i=0;i<str.size();i++){
	        if(mp.find(str[i])==mp.end()){
	            mp[str[i]]++;
	            s=s+str[i];
	        }
	    }
	   // string s="";
	   // for(auto it:mp){
	   //     s=s+it.first;
	   // }
	    return s;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        auto ans = ob.removeDuplicates(str);

        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends