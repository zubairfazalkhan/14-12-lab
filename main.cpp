#include <iostream>
using namespace std;

 class Node{
public:
int data;
Node* left;
Node* right;
Node()
{
  data=0;
  left=NULL;
  right=NULL;

}
Node(int d,Node* l, Node* r)
{
data=d;
left=l;
right=r;
}
void setdata(int d)
{
data=d;
}
int getdata()
{
  return data;
}
void setleft(Node* l)
{
  left=l;
}
Node * getleft()
{
  return left;
}
void setright(Node* r)
{
  right=r;
}
Node * getright()
{
  return right;
}

}; 
class Tree{
  Node* root;
  public:
  Tree()
  {
    root=NULL;
  }
 
 Node* Insert(Node* root,int value)
 {
Node* temp=new Node;
temp->data=value;
if(root==NULL)
{
root=temp;
}
else if(root->data>value)
{
root->setleft(Insert(root->right,value));
}
else if(root->data<value)
{
  root->setright(Insert(root->right,value));
}
return root;
}
 void disply(Node* root)
 {
   if(root==NULL)
   return;
   else{
   cout<<root->getdata()<<" "<<endl;
   disply(root->getleft());
  disply(root->getright());
   }
 }
};
int main()
{
  Node* root;
Tree* obj=new Tree();

root=obj->Insert(root, 67);
obj->Insert(root, 556);
obj->Insert(root, 87);
obj->disply(root);

}