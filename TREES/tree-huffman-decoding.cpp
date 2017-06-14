/* 
The structure of the node is

typedef struct node
{
    int freq;
    char data;
    node * left;
    node * right;
    
}node;

*/


void decode_huff(node * root,string s)
{
    int i=0;
    int l=s.length();
    while(i<l)
        {
        node*p=root;
        while(p->data=='\0')
            {
            if(s[i]=='1')
                p=p->right;
        
        else
            p=p->left;
        
        ++i;
        }
        cout<<p->data;
    }
      return;  
    
}
