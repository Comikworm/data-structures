#include<iostream>
#include<queue>
using namespace std;

struct Node{
    int data;
    Node *left,*right;
};

Node* newNode(int x){
    Node* temp=new Node();
    temp->data=x;
    temp->left=temp->right=NULL;
    return temp;
}

Node* insert(Node* root,int x){
    if(root==NULL) return newNode(x);

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* temp=q.front();
        q.pop();

        if(temp->left==NULL){
            temp->left=newNode(x);
            return root;
        } else q.push(temp->left);

        if(temp->right==NULL){
            temp->right=newNode(x);
            return root;
        } else q.push(temp->right);
    }
    return root;
}

void inorder(Node* root){
    if(root){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

bool search(Node* root,int x){
    if(root==NULL) return false;
    if(root->data==x) return true;
    return search(root->left,x)||search(root->right,x);
}

int main(){
    Node* root=NULL;
    int ch,x;

    do{
        cout<<"\n1.Insert\n2.Search\n3.Display\n4.Exit\n";
        cin>>ch;

        switch(ch){
            case 1:
                cout<<"Enter element: ";
                cin>>x;
                root=insert(root,x);
                break;

            case 2:
                cout<<"Enter element: ";
                cin>>x;
                if(search(root,x))
                    cout<<"Found";
                else
                    cout<<"Not Found";
                break;

            case 3:
                cout<<"Binary Tree: ";
                inorder(root);
                break;
        }
    }while(ch!=4);
}
