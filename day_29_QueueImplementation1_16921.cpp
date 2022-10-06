//Ques link - https://www.hackerrank.com/contests/cse205-day29-24906/challenges/queueimplementation1-16921

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int size;
    cin >> size;
    if(size < 3 || size > 10){
        cout << "Invalid size";
    }
    else {
    int arr[size];
    int front = -1;
    int rear = -1;
    while(rear != size-1){
        int ele;
        cin >> ele;
        if(front == rear && rear == -1){
            front = rear = 0;
            arr[rear] = ele;
        }
        else{
            if(arr[rear] > ele){
                front = 0;
            }
            else{
                rear = rear + 1;
                arr[rear] = ele;
            }
        }
    }
    for(int i = 0; i < size; i++){
        cout << arr[i] << "\n";
    }
    }
    return 0;
}