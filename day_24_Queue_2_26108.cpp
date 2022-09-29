//ques link - https://www.hackerrank.com/contests/cse205-day24-24906/challenges/queue-2-
//C++

#include <cmath>
#include <cstdio>
#include <vector>
#include<bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
     int n;
    cin>>n;
    queue<int>q,q1;
    stack<int>st;
    while(n--)
    {
        int a;
        cin>>a;
        q.push(a);
    }
    int a;
    cin>>a;
    while(a--)
    {
        st.push(q.front());
        q.pop();
    }
    while(!st.empty())
    {
        q1.push(st.top());
        st.pop();
    }
    while(!q.empty())
    {
        q1.push(q.front());
        q.pop();
    }
    while(!q1.empty())
    {
        cout<<q1.front()<<" ";
        q1.pop();
    }
    cout<<endl;
    return 0;
}