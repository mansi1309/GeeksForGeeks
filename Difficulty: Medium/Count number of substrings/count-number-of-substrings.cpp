//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
  long long int helper(string s,int k){
      int l=0,r=0,cnt=0;
    	long long ans=0;
    	vector<int>mp(26,0);
    	for(r=0;r<s.size();r++){
    	    mp[s[r]-'a']++;
    	    if(mp[s[r]-'a']==1){
    	        cnt++;
    	    }
    	    while(cnt>k){
    	        mp[s[l]-'a']--;
    	        if(mp[s[l]-'a']==0){
    	            cnt--;
    	        }
    	        l++;
    	    }
    	    ans+=r-l+1;
    	}
    	return ans;
  }
    long long int substrCount (string s, int k) {
    	//code here.
    	return helper(s,k)-helper(s,k-1);
    	
    }
};

//{ Driver Code Starts.


int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		int k; cin >> k;
		Solution ob;
		cout <<ob.substrCount (s, k) << endl;
	}
}
// } Driver Code Ends