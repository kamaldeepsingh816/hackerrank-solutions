#include<iostream>
#include<queue>
using namespace std;
class treeNode{
public:

    int data;
    treeNode*left;
    treeNode*right;
treeNode()
{

}
    treeNode(int d)
    {
        data=d;
        left=NULL;
        right=NULL;
    }
    void inorder(treeNode* root)
    {
        if(root)
        {
            inorder(root->left);
            cout<<root->data<<" ";
            inorder(root->right);
        }
        else
            return;
    }

    void performSwap(treeNode* root,int k)
    {
       if(!root)
        return;

       queue<treeNode*>f;
       f.push(root);
       f.push(NULL);

       int level=1;

       while(!f.empty())
       {
           treeNode* var=f.front();
           f.pop();

           if(var==NULL)
           {
               if(!f.empty())
               {
                   f.push(NULL);
               }

               level++;
           }

           else
           {
               if(level==k)
               {
                   swap(var->left,var->right);
               }

               if(var->left)
                f.push(var->left);

               if(var->right)
                f.push(var->right);
           }
       }
    }

};
int main()
{
    treeNode obj;
    int n;
    cin>>n;
    treeNode* root=NULL;
    int level=1;
    queue<treeNode*> q;
    if(n>0)
    {
        root=new treeNode(1);
        q.push(root);
        q.push(NULL);
    }

    while(n>0&&!(q.empty()))
    {
        treeNode* temp=q.front();
        q.pop();
        if(temp==NULL)
        {
            if(!q.empty())
            {
                q.push(NULL);
                level++;
            }
        }
        else{
            int a,b;
            cin>>a>>b;
            if(a!=-1)
            {
                temp->left=new treeNode(a);
                q.push(temp->left);
            }

            if(b!=-1)
            {
                temp->right=new treeNode(b);
                q.push(temp->right);
            }
    n--;
        }

    }

    int t;
    cin>>t;
    while(t--)
    {
        int itr=2;
        int k;
        cin>>k;
        int lvl=k;
        while(lvl<=level)
        {
            obj.performSwap(root,lvl);
            lvl=itr*k;
            itr++;
        }
        obj.inorder(root);
        cout<<endl;

    }

    return 0;
}
