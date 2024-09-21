//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};

void printList(Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << "\n";
}

void freeList(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        delete temp;
    }
}


// } Driver Code Ends
/*

  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution {
  public:
   Node* find(Node* head){
       Node* slow=head;
       Node* fast=head->next;
       while(fast!=NULL && fast->next!=NULL){
           slow=slow->next;
           fast=fast->next->next;
       }
       return slow;
   }
   Node* merge(Node* left,Node* right){
       if(left==NULL)
       return right;
       
       else if(right==NULL)
       return left;
       
       else{
           Node* dummy=new Node(-1);
           Node* temp=dummy;
           while(left!=NULL && right!=NULL){
               if(left->data<=right->data){
               temp->next=left;
               temp=left;
               left=left->next;
           }
           else{
               temp->next=right;
               temp=right;
               right=right->next;
           }
           }
           if(left!=NULL){
               temp->next=left;
           }
           else{
               temp->next=right;
           }
           return dummy->next;
       }
   }
    // Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node* head) {

        // Add code here
        if(head==NULL || head->next==NULL){
            return head;
        }
        // find mid
        Node* mid=find(head);
        Node* left=head;
        Node* right=mid->next;
        mid->next=NULL;
        left=segregate(left);
        right=segregate(right);
        return merge(left,right);
    }
};


//{ Driver Code Starts.

// Driver program to test above functions
int main() {
    int t, k;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t

    while (t--) {
        string input;
        getline(cin, input); // Read the entire line for the array elements

        stringstream ss(input);
        Node *head = nullptr, *tail = nullptr;
        int x;

        if (ss >> x) {
            head = new Node(x);
            tail = head;

            while (ss >> x) {
                tail->next = new Node(x);
                tail = tail->next;
            }

            // Link the last node to the head if k is 1 to make it circular
            if (k == 1) {
                tail->next = head;
            }
        }

        Solution ob;
        Node* newHead = ob.segregate(head);
        printList(newHead);
    }

    return 0;
}
// } Driver Code Ends