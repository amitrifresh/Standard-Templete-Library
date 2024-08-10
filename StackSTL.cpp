//                 ---** STANDARD TEMPLATE LIBRARY (STL) in C++ **---
//                         ---** PRACTICE CODING SKILLS **---


#include<iostream>
#include<stack>
using namespace std;


void PrintData(stack<int> S){
 while(!S.empty()){
    cout<<S.top()<<" ";
    S.pop();
 }
 cout<<endl;
}
int main(){
    stack<int>S;
    S.push(1);
    S.push(2);
    S.push(3);
    S.push(4);
    S.push(5);
    S.push(6);

    PrintData(S);
    cout<<S.empty()<<endl;
    cout<<S.size()<<endl;
}

// <---------OUTPUT------------->

// PS D:\C++ programming> cd "d:\C++ programming\" ; if ($?) { g++ StackSTL.cpp -o StackSTL } ; if ($?) { .\StackSTL }
// 6 5 4 3 2 1 
// 0
// 6