#include <bits/stdc++.h>
using namespace std;

int main()
{
    // unique key in sorted order, but can have duplicate <value>.
    // multimap - keys can be duplicate but still in sorted order. 
    // unorderd_map - the keys will not be sorted neither duplicate.
    
    map<int, int> m1;
    map<pair<int, int>, int> m2;
    map<int, pair<int, int>> m3;
    m1[1] = 2; // {1,2}
    m1[2] = 3; // {1,2} {2,3}

    // cout<<m1[2];                // op - 3
    // cout<<m1.size();            // 2

    // m2[{1,2}] = 10;                // all
    // m2[{2,2}] = 11;                // keys
    // m2[{1,1}] = 12;                // are
    // m2[{2,1}] = 13;                // diff

    // for(auto it:m2){
    //     cout<<it.first.first<<" "<<it.first.second<<" "<<it.second<<endl;
    // }

    // cout<<m2.size();               // 4

    // m3[2] = {2,4};
    // cout<<m3.size();

    //erase swap empty all same.

    // lower bound and upper bound
}