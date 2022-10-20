//https://www.hackerrank.com/contests/cse205-day38-24906/challenges/middle-element-of-a-linked-list

#include <bits/stdc++.h>
using namespace std;
class Nodes{
    public:
    char data;
    Nodes *next;
}*head=NULL;
void push(char x){
    Nodes *new_node=new Nodes;
    Nodes *temp=head;
    new_node->data=x;
    new_node->next=NULL;
    if(head==NULL)
        head=new_node;
    else{
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=new_node;
    }
}
Nodes* mid(){
    if(head==NULL){
        return NULL;
    }
    Nodes *slow=head;
    Nodes *fast=head->next;
    while(fast && fast->next){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}
int main(){
    int n;
    cin>>n;
    while(n--){
        char a;
        cin>>a;
        push(a);
    }
    Nodes *m=mid();
    cout<<m->data;
}