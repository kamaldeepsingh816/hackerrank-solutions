/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.  

The Node struct is defined as follows:
   struct Node {
      int data;
      Node* left;
      Node* right;
   }
*/
bool isBST(Node*root,int min=-10000,int max=10000)
    {
    if(root==NULL)
        return true;
    bool leftBST=isBST(root->left,min,root->data);
    bool rightBST=isBST(root->right,root->data,max);
    
    if(leftBST&&rightBST&&root->data>min&&root->data<max)
        return true;
    else
        return false;
}
   bool checkBST(Node* root) {
      
     
       if(isBST(root))
           return true;
       else
           return false;
            
      
   }


