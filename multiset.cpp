#include<bits/stdc++.h>
using namespace std;

// Sorted but not unique can have many same element but if we erase one it will erase all.
// but if we do find() it is iterator so it finds the address and hence deletes that only.

int main(){
    multiset<int> ms{1,2,1,1,1,3,2,4,7};
    // cout<<ms.count(1)<<endl;
    ms.erase(ms.find(1));
    // ms.erase(1);
    // cout<<ms.count(1)<<endl;
    cout<<ms.size();
}