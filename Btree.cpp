#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> btree;
    int ch,x;

    do{
        cout<<"\n1.Insert\n2.Display\n3.Exit\n";
        cin>>ch;

        switch(ch){
            case 1:
                cout<<"Enter element: ";
                cin>>x;
                btree.insert(x);
                break;

            case 2:
                cout<<"B-Tree: ";
                for(int i:btree)
                    cout<<i<<" ";
                break;
        }
    }while(ch!=3);
}
