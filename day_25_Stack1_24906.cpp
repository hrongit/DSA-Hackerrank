//QUES LINK - https://www.hackerrank.com/contests/cse205-day25-24906/challenges/stack1-24906

// 

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n = 1;
    string arr[99];
    int top = -1;
    while(n!=2){
        cin >> n;
        if(n == 2){
            break;
        }
        int nums;
        cin >> nums;
        for(int i = 0; i < nums; i++){
            top = top + 1;
            string w;
            cin >> w;
            arr[top] = w;
        }
        
    }
    cout << arr[top] << "\n";
    top = top -1;
    while(top != -1){
        cout << arr[top] << " ";
        top = top - 1;
    }
    return 0;
}