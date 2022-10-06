//Ques link - https://www.hackerrank.com/contests/cse205-day28-24906/challenges/queueimplementation2-16921

#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    vector<char> A;
    int N=1;
    char X;
    while(N==1||N==2){
        cin>>N;
        if(N==1){
            cin>>X;
            if(A.size()==7){
                cout<<"OVERFLOW";
                return 0;
            }
            A.push_back(X);
        }
        else if(N==2){
            A.pop_back();
        }
        else{
            cout<<A[0]<<endl<<A[A.size()-1];
        }
    }
    return 0;
}