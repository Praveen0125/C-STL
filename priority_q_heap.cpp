#include<bits/stdc++.h>
using namespace std;

int main()
{

    // Maximum Heap


//     priority_queue<int> pq;     // in priority queue data in not stored linera but like a tree.
//     pq.push(1);                 //   1
//     pq.push(6);                 //  6 1
//     pq.emplace(4);              //  6 4 1
//     pq.pop();
//     cout<<pq.top();      // largest gets printed

// if we want the smallest element on top

    // Minimum Heap


    priority_queue<int, vector<int>, greater<int>> spq;
    spq.push(6);
    spq.push(3);
    spq.push(8);
    spq.emplace(1);
    spq.pop();
    cout<<spq.top();
}