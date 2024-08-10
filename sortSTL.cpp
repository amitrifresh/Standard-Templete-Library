//                 ---** STANDARD TEMPLATE LIBRARY (STL) in C++ **---
//                         ---** PRACTICE CODING SKILLS **---


#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void showArray(int a[],int size){
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int a[]={9, 8, 1, 2, 7 , 4, 0, 5, 3, 5};
    int size=sizeof(a)/sizeof(a[0]);
    showArray(a,size);
    
    sort(a, a+10);
    showArray(a,size);
    
    vector<int> v;
    v.push_back(10);
    v.push_back(-3);
    v.push_back(2);
    v.push_back(91);
    v.push_back(5);
    v.push_back(7);
    
    sort(v.begin(), v.end());
    for(int i=0;i<(int)v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    
}
//<------------OUTPUT----------->
// PS D:\C++ programming> cd "d:\C++ programming\" ; if ($?) { g++ sortSTL.cpp -o sortSTL } ; if ($?) { .\sortSTL }
// 9 8 1 2 7 4 0 5 3 5 
// 0 1 2 3 4 5 5 7 8 9 
// -3 2 5 7 10 91 