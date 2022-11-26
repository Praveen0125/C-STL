#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, int> p= {1,3};
    cout<<p.second;

    pair<int, pair<double, int>> q={1,{2.5,3}};
    cout<<q.first<<endl;
    cout<<q.second.first<<endl;
}