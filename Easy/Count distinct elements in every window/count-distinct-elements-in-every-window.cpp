//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends

class Solution{
  public:
    vector <int> countDistinct (int A[], int n, int k)
    {
        vector<int>v;
        int s=0;
        int e=0;
        map<int,int>mp;
        for(int i=0;i<k;i++)
        {
            mp[A[i]]++;
            e++;
        }
        v.push_back(mp.size());
        for(int i=k;i<n;i++)
        {
            mp[A[s]]--;
            if(mp[A[s]]<=0)
            {
                mp.erase(A[s]);
            }
            s++;
            mp[A[e++]]++;
            v.push_back(mp.size());
        }
        return v;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) 
        	cin >> a[i];
        Solution obj;
        vector <int> result = obj.countDistinct(a, n, k);
        for (int i : result) 
        	cout << i << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends