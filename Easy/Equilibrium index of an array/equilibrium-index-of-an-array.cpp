//{ Driver Code Starts
#include <iostream>
using namespace std;
#include <stdio.h>
 
int findEquilibrium(int [], int );
 
int main() {
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		cout<<findEquilibrium (a,n)<<endl;
	}
	// your code goes here
	return 0;
}
// } Driver Code Ends


/* You are required to complete this method*/
int findEquilibrium(int A[], int n)
{
  //Your code here
  int left=0;
  int right=0;
  int total=0;
  for(int i=0;i<n;i++)
  {
      total+=A[i];
  }
  right=total;
  for(int i=0;i<n;i++)
  {
      left+=A[i];
      if(left==right)
      {
          return i;
      }
      right=right-A[i];
  }
  return -1;
}