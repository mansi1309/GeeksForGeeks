//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        //Your code here
        int ans=0;
        bool flag=false;
        // int neg;
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])){
                ans=ans*10+s[i]-'0';
            }
            else if(s[i]=='-' && i==0){
                flag=true;
                // neg=-;
            }
            else
            {
                return -1;
            }
        }
        if(flag==true){
            return -ans;
        }
        else
        return ans;
        
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends