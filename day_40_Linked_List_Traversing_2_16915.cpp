//https://www.hackerrank.com/contests/cse205-day40-24906/challenges/linked-list-traversing-2-16915

#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int X,y=0;
    vector<int> A;
    while(X!=-1){
        cin>>X;
        A.push_back(X);
        if(X%2==0)y++;
    }
    if(y==0){
        cout<<"No even number present";
    }
    else{
        cout<<y;
    }
    
    return 0;
}