//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    // int solve(int n){
    //     int ans=0;
    //     for(int i=n;i>0;i--){
    //         if(n%i==0){
    //             ans=ans+i;
    //         }
    //     }
    //     return ans;
    // }
    long long sumOfDivisors(int N)
    {
        // Write Your Code here
        long long sum=0;
        // while(N!=0){
        //   int num=solve(N);
        //   sum=sum+num;
        //   N--;
        // }
        // return sum;
        
        for(int i=1;i<=N;i++){
           sum=sum+i*(N/i); 
        }
        return sum;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        long long ans  = ob.sumOfDivisors(N);
        cout<<ans<<endl;
    }
    return 0;
}
// } Driver Code Ends