//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution
{
    public:
    
    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> q, int k) {
        // add code here.
        queue<int>qt;
        stack<int>s;
        int cnt=0;
        while(!q.empty())
        {
            
               
                s.push(q.front());
                q.pop();
            if(cnt>=k-1)
            {
               break; 
            }
             cnt++;
        }
        while(!s.empty())
        {
            qt.push(s.top());
            s.pop();
        }
        while(!q.empty())
        {
            qt.push(q.front());
            q.pop();
        }
        return qt;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n, k;
        cin >> n >> k;
        queue<int> q;
        while (n-- > 0) {
            int a;
            cin >> a;
            q.push(a);
        }
        Solution ob;
        queue<int> ans = ob.modifyQueue(q, k);
        while (!ans.empty()) {
            int a = ans.front();
            ans.pop();
            cout << a << " ";
        }
        cout << endl;
    }
}
// } Driver Code Ends