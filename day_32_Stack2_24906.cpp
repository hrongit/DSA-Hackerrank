//Ques Link - https://www.hackerrank.com/contests/cse205-day32-24906/challenges/stack2-24906

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    vector<string>v;
    int ch;
    do{
        cin>>ch;
        switch(ch){
            case 1:
                {
                    int a;
                    cin>>a;
                    for(int i=0;i<a;i++){
                        string k;
                        cin>>k;
                        v.push_back(k);
                       
                    }break; 
                }
            case 2:
                {
                    int last=v.size()-1;
                    cout<<v[last]<<endl;
                    v.pop_back();
                    int l=v.size();
                    for(int u=l-1;u>=0;u--){
                        cout<<v[u]<<" ";
                    }
                        
                        break;
                    }
                }
        }while(ch!=2);
    return 0;
}