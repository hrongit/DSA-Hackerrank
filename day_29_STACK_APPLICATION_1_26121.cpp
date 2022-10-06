//Ques link- https://www.hackerrank.com/contests/cse205-day29-24906/challenges/stack-application-1-26121

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;
    int top = -1;
    char arr[s.length()];
    for(int i = 0; i < s.length(); i++){
        if(top == -1){
            top = top + 1;
            arr[top] = s[i];
        }
        else if((arr[top] == '(' && s[i] == ')')||(arr[top] == '{' && s[i] == '}')||(arr[top] == '[' && s[i] == ']')){
            top = top - 1;
        }
        else{
            top = top + 1;
            arr[top] = s[i];
        }
    }
    if(top == -1){
        cout << "Balanced";
    }
    else{
        cout << "Not Balanced";
    }
    return 0;
}
