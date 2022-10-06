//Ques link - https://www.hackerrank.com/contests/cse205-day28-24906/challenges/stack1-28066

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N;
    cin>>N;
    int A[N];
    for(int i=0;i<N;i++){
        cin>>A[i];
    }
    if(N%2!=0)cout<<A[N/2]<<endl<<A[(N/2)-1];
    else cout<<A[(N/2)-1]<<endl<<A[(N/2)-1];
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}