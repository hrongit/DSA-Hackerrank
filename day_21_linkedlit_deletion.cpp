#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class node{
    public:
    char data;
    node *next;
};
class process{
    node *head;
    public:
    process(){
        head=NULL;
    }
    void insert(char d){
        
        node *n=new node;
        n->data=d;
        n->next=NULL;
        if(head==NULL){
            head=n;
            
        }
        else{
            node *temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=n;
            
        }
    }
    void Do(){
        node *temp=head;
        int x=0,q=0;
        while(temp!=NULL){
            if(temp->data=='a'||temp->data=='e'||temp->data=='i'||temp->data=='o'||temp->data=='u'){
                x++;
            }
            temp=temp->next;
        }
        x--;
        //cout<<x<<endl;
        if(x==0){
            cout<<"No vowel in linked list";
        }
        else{
            temp=head;
            while(temp!=NULL){
                if(temp->data=='a'||temp->data=='e'||temp->data=='i'||temp->data=='o'||temp->data=='u'){
                    x++;
                }
                else{
                    if(q!=0)cout<<"-->";
                    cout<<temp->data;
                    q++;

                }
                temp=temp->next;
            }
        }
    }
    
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    process l;
    char a='a',b='b';
    while(a!=b){
        b=a;
        cin>>a; 
        l.insert(b);
    }
    l.Do();
    return 0;
}