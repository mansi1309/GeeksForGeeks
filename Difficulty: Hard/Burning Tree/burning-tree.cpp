//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};


Node *buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current Node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current Node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends
//User function Template for C++

/*
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
  vector<int> solve(Node *root , int &ans,int target){
      if(root==NULL) return {0,0};
      
      //find the heights of left and right subtree and if target in that subtree
      vector<int> left = solve(root->left,ans,target);
      vector<int> right = solve(root->right,ans,target);
      
      //if target not in either subtree and root data!= target return max subtree height +1 and 0 
      //to denote no target in the current subtree
      if(left[0]==0 && right[0]==0 && root->data!=target) return {0,max(left[1],right[1])+1};
      //first time encountered so fint the max distance of any node from subtrees and update ans
      // then since all nodes above the target again initialise the distance to 1 
      if(left[0]==0 && right[0]==0 && root->data==target){
          ans=max(ans,max(left[1],right[1])+1);
          return {1, 1};
      }
      //if present in left subtree update ans as the distance between taget and current
      //index + distance between current node and farthest node on right subtree from current
      if(left[0]==1){ 
          ans=max(ans,left[1]+1+right[1]);
          return {1,left[1]+1};
      }
      //similar to above
      else{
          ans=max(ans,left[1]+1+right[1]);
          return {1,right[1]+1};
      }
  }
    int minTime(Node* root, int target) 
    {
        // Your code goes here
        // Your code goes here
        //basically find the largest distance of a node from this node
        //divide the problem into depth and height
        // for nodes that are ancestor of target use depth otherwise use height
        int ans = 0;
        solve(root,ans,target);
        return ans-1;
    }
};

//{ Driver Code Starts.

int main() 
{
    int tc;
    scanf("%d ", &tc);
    while (tc--) 
    {    
        string treeString;
        getline(cin, treeString);
        // cout<<treeString<<"\n";
        int target;
        cin>>target;
        // cout<<target<<"\n";

        Node *root = buildTree(treeString);
        Solution obj;
        cout<<obj.minTime(root, target)<<"\n"; 

        cin.ignore();

    }


    return 0;
}

// } Driver Code Ends