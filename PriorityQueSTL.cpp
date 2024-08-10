//                 ---** STANDARD TEMPLATE LIBRARY (STL) in C++ **---
//                         ---** PRACTICE CODING SKILLS **---



#include<iostream>
#include<queue>
using namespace std;

void ShowData(priority_queue<int>p){
    priority_queue<int> pq=p;
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
}


int main(){
    priority_queue<int>pq;
    pq.push(1);
    pq.push(2);
    pq.push(3);
    pq.push(4);
    pq.push(-5);

    ShowData(pq);
    cout<<pq.empty()<<endl;
    cout<<"size "<<pq.size()<<endl;

    pq.pop();
    ShowData(pq);
}
// <----------OUTPUT------------>
// PS D:\C++ programming> cd "d:\C++ programming\" ; if ($?) { g++ PriorityQueSTL.cpp -o PriorityQueSTL } ; if ($?) { .\PriorityQueSTL }
// 4 3 2 1 -5 
// 0
// size 5
// 3 2 1 -5 