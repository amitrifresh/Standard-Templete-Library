//                 ---** STANDARD TEMPLATE LIBRARY (STL) in C++ **---
//                         ---** PRACTICE CODING SKILLS **---


#include<iostream>
#include<algorithm>
#include<numeric>
using namespace std;

int main(){
int arr[6]={1,4,3,5,6,7};
int count=0;
for(int i=0;i<6;i++){
 if(arr[i]>0){
 count++;
}
}
cout<<"count value "<<count<<" "<<endl;

all_of(arr, arr+6, [](int x){ return x>0;}) ? cout<<"all elements of array is +ve"<<endl : cout<<"All elements of array is not necessary to be +ve"<<endl;
    
    any_of(arr, arr+6, [](int x){return x<0;}) ? cout<<"we have atleast one -ve element"<<endl : cout<<"All elements are +ve"<<endl;
    
    none_of(arr, arr+6, [](int x){return x==100;}) ? cout<<"we have none of element exactly is equal to 100 "<<endl : cout<<"It means we have atleast one element  = 100"<<endl;
    

int arr1[6];
    copy_n(arr, 6 , arr1);  // aaray  size  new_array
    for(int i=0;i<6;i++){cout<<arr1[i]<<" ";} //
    
    cout<<endl;
    int arr2[6]; // 2 3 4 5 6 7
    iota(arr2, arr2+6 , 20);
    for(int i=0;i<6;i++){cout<<arr2[i]<<" ";} //
    cout<<endl;

}
//<----------OUTPUT----------->
// PS D:\C++ programming> cd "d:\C++ programming\" ; if ($?) { g++ ArraySTL.cpp -o ArraySTL } ; if ($?) { .\ArraySTL }
// count value 6 
// all elements of array is +ve
// All elements are +ve
// we have none of element exactly is equal to 100 
// 1 4 3 5 6 7 
// 20 21 22 23 24 25 