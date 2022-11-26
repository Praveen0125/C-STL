#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st; // LIFO
    st.push(1);            //  |  3  |
    st.push(2);            //  |  2  |
    st.push(3);            //  |__1__|
    // cout<<st.top();         // op - 3
    st.pop();                  // out - 3
    cout<<st.top();            // op - 2

// all other emplace size empty swap all same....
}