//                 ---** STANDARD TEMPLATE LIBRARY (STL) in C++ **---
//                         ---** PRACTICE CODING SKILLS **---


#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;



void show(vector<int> V)
{

  for (auto it = V.begin(); it != V.end(); it++)
  {
    cout << *it << " ";
  }
  cout << endl;
}

int main()
{
vector<int> V;
V.push_back(2);
V.push_back(3);  
V.push_back(4);  
V.push_back(5);  
V.push_back(6);  
V.push_back(7); 

show(V); 

reverse(V.begin(),V.end());
show(V); 

int x;
x=*max_element(V.begin(),V.end());
cout<<"Maximum element "<<x<<endl;

int y;
y= *min_element(V.begin(),V.end());
cout<<"Minimum element "<<y<<endl;
}


// <---------OUTPUT------------->

// PS D:\C++ programming> cd "d:\C++ programming\" ; if ($?) { g++ VectorSTL.cpp -o VectorSTL } ; if ($?) { .\VectorSTL }
// 2 3 4 5 6 7 
// 7 6 5 4 3 2 
// Maximum element 7
// Minimum element 2