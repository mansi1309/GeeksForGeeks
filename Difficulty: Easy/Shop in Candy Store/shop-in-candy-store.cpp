//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    vector<int> candyStore(int candies[], int N, int K)
    {
        // Write Your Code here
        // logic :
        // when we find mini-->take minimum candy on price and take maximum candy on free
        // when we find maxi-->take maximum candy on price and minimum candy on free
        
        // sort
        sort(candies,candies+N);
        // find minimum price 
        int mini=0;
        int buy=0;
        int free=N-1;
        while(buy<=free){
            mini=mini+candies[buy++];
            free=free-K;
        }
        
        // find maximum price
        int maxi=0;
        buy=N-1;
        free=0;
        while(buy>=free){
            maxi=maxi+candies[buy--];
            free=K+free;
        }
        return {mini,maxi};
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        int candies[N];

        for (int i = 0; i < N; i++)
        {
            cin >> candies[i];
        }

        Solution ob;
        vector<int> cost = ob.candyStore(candies, N, K);
        cout << cost[0] << " " << cost[1] << endl;
    }
    return 0;
}
// } Driver Code Ends