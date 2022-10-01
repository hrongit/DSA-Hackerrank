//QUES LINK - https://www.hackerrank.com/contests/cse205-day25-24906/challenges/queue-2-26699

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s;
    getline(cin,s);
    char arr[s.length()];
    int top = -1;
    for(int i = 0; i < int(s.length()); i++){
        top = top + 1;
        arr[top] = s[i];
    }
    string newstr = "";
    while(arr[top]!=','){
        newstr = newstr + arr[top];
        top = top -1;
    }
    for(int i = newstr.length()-1; i >= 0; i--){
        cout << newstr[i];
    }
    
    return 0;
}