
/*
struct node
{
    int data;
    node* left;
    node* right;
}*/

void levelOrder(node * root) {
        queue<node*> q;
    q.push(root);
    q.push(NULL);
    
    while(!(q.empty()))
        {
        node* f=q.front();
        if(f==NULL)
            {
            q.pop();
            if(!q.empty())
        {
             q.push(NULL);   
            }
        }
        else
            {
            cout<<f->data<<" ";
            q.pop();
            if(f->left)
                q.push(f->left);
            if(f->right)
                q.push(f->right);
            
            
        }
    }
    
}
