//Ques Link - https://www.hackerrank.com/contests/cse205-day32-24906/challenges/queue-1-26108/submissions/code/1350130031

#include <bits/stdc++.h>
using namespace std;

void display_q(queue<string> s){
 while(!s.empty()){
 cout<<s.front()<<" ";
 s.pop();
 }
 cout<<endl;
}
int main() {
 int n;
 cin>>n;
 queue<string> q;
 for(int i=0;i<n;i++){
 string s;
 cin>>s;
 q.push(s);
 }
 int k=3;
 while(k--){
 string p=q.front();
 q.pop();
 q.push(p);
 display_q(q);
 }
 cout<<q.front();
 return 0;
}