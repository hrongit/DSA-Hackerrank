
// QUES LINK
//https://www.hackerrank.com/contests/cse205-day23-24906/challenges/twoway-list-1-16856
//C++

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Node{
    struct Node *next;
    int data;
};
struct Node *start = NULL;

void insert_at_tail(int item){
    struct Node *n = new Node;
    n->next = NULL;
    n->data = item;
    if(start == NULL){
        start = n;
    }
    else{
        struct Node *ptr = start;
        while(ptr->next!=NULL){
            ptr = ptr->next;
        }
        ptr->next = n;
    }
}

void insert_sort(int item){
    struct Node *n = new Node;
    n->next = NULL;
    n->data = item;
    struct Node *ptr = start;
    if(ptr->data > item){
        n->next = ptr;
        start = n;
    }
    else{
        struct Node *save = NULL;
        struct Node *ptr = start;
        while(ptr!=NULL){
            if(ptr->data > item){
                save->next = n;
                n->next = ptr;
                break;
            }
            save = ptr;
            ptr = ptr->next;
            if(ptr == NULL){
                save->next = n;
                break;
            }
        }
    }
}

int main() {
    int tcases;
    cin >> tcases;
    for(int i = 0; i < tcases; i++){
        start = NULL;
        int n;
        cin >> n;
        for(int j = 0; j < n; j++){
            int inp;
            cin >> inp;
            insert_at_tail(inp);
        }
        int ele;
        cin >> ele;
        insert_sort(ele);
        struct Node *ptr = start;
        while(ptr!=NULL){
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
    }
    return 0;
}

