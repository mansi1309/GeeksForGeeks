//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
    //   sort(arr,arr+N);
    //   int cnt=0,maxi=1,last_small=0;
    //   for(int i=0;i<N;i++){
    //       if(arr[i]-1==last_small){
    //           cnt++;
    //           last_small=arr[i];
    //       }
    //       else if(arr[i]!=last_small){
    //           cnt=1;
    //           last_small=arr[i];
    //       }
    //       maxi=max(maxi,cnt);
    //   }
    //   return maxi;
    
    unordered_set<int>st;
    for(int i=0;i<N;i++){
        st.insert(arr[i]);
    }
    int cnt=0;
    int maxi=1;
    for(auto it:st){
        // find smallest elemt
        if(st.find(it-1)==st.end()){
            cnt=1;
            int x=it;
            // iterate throught the lasgest consevutive no
            while(st.find(x+1)!=st.end()){
                cnt++;
                x=x+1;
            }
        }
        maxi=max(maxi,cnt);
    }
    return maxi;
    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends