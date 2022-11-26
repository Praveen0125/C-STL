// Set -- sorted and unique
#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    // set is not a linear container but works as a tree

    // set<int> s;
    // s.insert(1);
    // s.insert(2);
    // s.insert(2);
    // s.insert(4);
    // s.insert(3);
    // s.erase(2);
    // auto it = s.find(1);        //finds the address of element
    // cout<<*it<<endl;
    // s.erase(it);
    // cout<<s.size()<<endl;
    // cout<<s.count(2);

    set<int> st{2,5,6,3,1,2,7,5};  // {1,2,3,5,6,7}
    auto a = st.find(2);
    auto b = st.find(5);
    st.erase(a,b);                 // erases from start to last-1 i.e., (2,3)
    cout<<st.size();
}