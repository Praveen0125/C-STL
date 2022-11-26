#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(4);
    ls.push_front(5);
    ls.emplace_front(6);
    ls.push_back(3);
    ls.emplace_back(1);
    ls.push_front(7);
    for (auto &i :ls)
    cout<<i<<" ";
    cout<<"\n"<<ls.size();

//all other function are same like vector.... begin end insert swap

    deque<int> dq;

//all function are same like vector list.... begin end insert swap

}