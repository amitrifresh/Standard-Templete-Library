//                 ---** STANDARD TEMPLATE LIBRARY (STL) in C++ **---
//                         ---** PRACTICE CODING SKILLS **---



#include<iostream>
#include<queue>
#include<algorithm>
#include<numeric>
using namespace std;

//called function....
void ShowData(queue<int>Q){
while(!Q.empty()){
    cout<<Q.front()<<" ";
    Q.pop();
}
cout<<endl;

}

int main(){
//Inserting the data into queue.....    
queue<int>Q;
Q.push(1);
Q.push(2);    
Q.push(3);    
Q.push(4);    
Q.push(5);    
Q.push(6); 

//Calling function...........
ShowData(Q);

cout<<Q.empty()<<endl;
cout<<Q.size()<<endl;
}

// <---------OUTPUT------------->

// PS D:\C++ programming> cd "d:\C++ programming\" ; if ($?) { g++ QueueSTL.cpp -o QueueSTL } ; if ($?) { .\QueueSTL }
// 1 2 3 4 5 6 
// 0
// 6