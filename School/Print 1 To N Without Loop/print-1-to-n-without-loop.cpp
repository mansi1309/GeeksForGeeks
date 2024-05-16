//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    void solve(int x,int n){
        // base
        cout<<x<<" ";
        if(x==n)
        return;
        
        else{
            
            solve(x+1,n);
        }
    }
    void printNos(int N)
    {
        //Your code here
        int x=1;
        solve(x,N);
    }
};

//{ Driver Code Starts.
/* Driver program to test printNos */
int main()
{
    int T;
    
    //taking testcases
    cin>>T;
    
    while(T--)
    {
        int N;
        
        //input N
        cin>>N;
        Solution ob;
        //calling printNos() function
        ob.printNos(N);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends