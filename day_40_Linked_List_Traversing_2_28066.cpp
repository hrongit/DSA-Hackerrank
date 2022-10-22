//https://www.hackerrank.com/contests/cse205-day40-24906/challenges/linked-list-traversing-1-28066-1

#include <bits/stdc++.h>

using namespace std;

int main() {

    

    int X,Y,y=0;

    vector<int> A;

    cin>>Y;

    while(Y--){

        cin>>X;

        A.push_back(X);

        if(X>=19)y++;

    }

    cout<<y;

    

    return 0;

}

