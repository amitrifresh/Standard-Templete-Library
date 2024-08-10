//                 ---** STANDARD TEMPLATE LIBRARY (STL) in C++ **---
//                         ---** PRACTICE CODING SKILLS **---


#include <iostream>
#include <utility>
using namespace std;
int main(){
    pair<int, char> PAIR1;
    PAIR1.first = 100;
    PAIR1.second = 'G';
    
    cout<<PAIR1.first<<" "<<PAIR1.second<<endl;
    
    pair<string, double>PAIR2 ("Amit" , 92.0);
    cout<<PAIR2.first<<" "<<PAIR2.second<<endl;
    
    pair<string, double>PAIR3;
    PAIR3 = make_pair("Rifresh", 90.0);
    cout<<PAIR3.first<<" "<<PAIR3.second<<endl;

    pair<int, int> pair1 = make_pair(1, 19);
    pair<int, int> pair2 = make_pair(2, 7);
    pair<int, int> pair3(pair2);  // we copied pair2 data in the pair3
    cout<<pair1.first<<" "<<pair1.second<<endl;
    cout<<pair3.first<<" "<<pair3.second<<endl;
    
    cout<<(pair1==pair2)<<endl;
    cout<<(pair1!=pair2)<<endl;
    cout<<(pair1 >= pair2)<<endl;
    cout<<(pair1 <= pair2)<<endl;

    // swapping of data in between pairs
    pair1.swap(pair2);
    cout<<pair1.first<<" "<<pair1.second<<endl;
    cout<<pair2.first<<" "<<pair2.second<<endl;

    

}
// <-----------OUTPUT----------->
// PS D:\C++ programming> cd "d:\C++ programming\" ; if ($?) { g++ PairSTL.cpp -o PairSTL } ; if ($?) { .\PairSTL }
// 100 G
// Amit 92
// Rifresh 90
// 1 19
// 2 7
// 0
// 1
// 0
// 1
// 2 7
// 1 19