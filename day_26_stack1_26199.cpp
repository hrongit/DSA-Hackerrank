//QUES LINK - https://www.hackerrank.com/contests/cse205-day26-24906/challenges/stack1-26199

#include<cmath>
#include<cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string stack[100];
int top=-1;

void push(string ele,int n)
{
    if(top>=n-1)
        cout<<"Full Box"<<endl;
    else
    {
        top++;
        stack[top]=ele;
    }
}
void pop()
{
    if(top==-1)
        cout<<"Empty Box"<<endl;
    else
    {
        top--;
    }
}
void show()
{
    int flag=0;
    if(top>=0)
    {
        for(int i=top;i>=0;i--)
        {
            if(flag!=0)cout<<"->";
            cout<<stack[i];
            flag++;
        }
    }
    else{
        cout<<"Empty Box"<<endl;
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    string ch;
    cin>>n;
    if(n>=0 and n<=6)
    {
        for(int i=0;i<n;i++)
        {
            cin>>ch;
            push(ch,n);
        }
        show();
   }
    else
        cout<<"Full Box"<<endl;
    return 0;
}