//Ques link - https://www.hackerrank.com/contests/cse205-day34-24906/challenges/stack-2-16915


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void reverseStr(string& str)
{
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}
int main() {
    
  string s;
    getline(cin,s);
    int a=s.length();
    if(5<=a and a<=30){  
    reverseStr(s);
        cout<<s;
    }
    else{
        return 0;
    }
    return 0;
}