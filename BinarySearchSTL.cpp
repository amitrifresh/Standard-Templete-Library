//                 ---** STANDARD TEMPLATE LIBRARY (STL) in C++ **---
//                         ---** PRACTICE CODING SKILLS **---

#include<iostream>
#include<algorithm>
using namespace std;


void showData(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "; 
    }
    cout<<endl;
}

int main(){
    int arr[]={1,2,3,4,5,6,0};
    int size=sizeof(arr)/sizeof(arr[0]);

    showData(arr,size);

    cout<<"array after sorting...."<<endl;
    sort(arr,arr+size);
    showData(arr,size);

    if(binary_search(arr,arr+size,6)){
        cout<<"yes our element is present in this array"<<endl;
    }
    else{
        cout<<"No our element is not present in this array"<<endl;
    }
}

// <------------OUTPUT----------->
// PS D:\C++ programming> cd "d:\C++ programming\" ; if ($?) { g++ BinarySearchSTL.cpp -o BinarySearchSTL } ; if ($?) { .\BinarySearchSTL }
// 1 2 3 4 5 6 0 
// array after sorting....
// 0 1 2 3 4 5 6 
// yes our element is present in this array