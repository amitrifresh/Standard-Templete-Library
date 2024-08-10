//                 ---** STANDARD TEMPLATE LIBRARY (STL) in C++ **---
//                         ---** PRACTICE CODING SKILLS **---


#include<iostream>
#include<deque>
using namespace std;


void showDeque(deque<int> q){
    deque<int> :: iterator it;
    for(it = q.begin(); it!=q.end() ;it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}
 
int main(){
    deque<int>dq;
    dq.push_back(1);  // front<----4 2 1 3--->back 
    dq.push_front(2);
    dq.push_back(3);
    dq.push_front(4);

    showDeque(dq);

    cout<<dq.at(1)<<endl;
    cout<<"maximum size "<<dq.size()<<endl;
    cout<< "Front Element "<<dq.front()<<endl;
    cout<< "Back Element "<<dq.back()<<endl;


    dq.pop_back();
    showDeque(dq);

}

// <---------OUTPUT------------->

// PS D:\C++ programming> cd "d:\C++ programming\" ; if ($?) { g++ DequeSTL.cpp -o DequeSTL } ; if ($?) { .\DequeSTL }
// 4 2 1 3 
// 2
// maximum size 4
// Front Element 4
// Back Element 3
// 4 2 1 