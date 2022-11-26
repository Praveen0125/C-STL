#include<bits/stdc++.h>
using namespace std;

int main()
{
    //FIFO
    queue<int> q;
    q.push(1);  //1
    q.push(2);  //1 2
    q.emplace(3);   // 1 2 3
    q.back() +=5;    // 1 2 8
    // cout<<q.back();
    // cout<<q.front();
    q.pop();        // 2 8
    q.back() -= 7;   // 2 1
    cout<<q.back()<<" ";
    cout<<q.front();
}