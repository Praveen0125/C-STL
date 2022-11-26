#include <bits/stdc++.h>
using namespace std;

int main()
{

    // strings

    // int myints[] = {10, 20, 30, 30, 20, 10, 10, 20};
    // vector<int> v(myints, myints + 8); // 10 20 30 30 20 10 10 20

    // sort(v.begin(), v.end()); // 10 10 10 20 20 20 30 30

    // vector<int>::iterator low, up;
    // low = lower_bound(v.begin(), v.end(), 20); //          ^
    // up = upper_bound(v.begin(), v.end(), 20);  //                   ^

    // cout << "lower_bound at position " << (low - v.begin()) << '\n';
    // cout << "upper_bound at position " << (up - v.begin()) << '\n';

// vectors

    vector<int> v = {3, 1, 4, 6, 5};   // 1 3 4 5 6
    decltype(v)::iterator it = lower_bound(v.begin(), v.end(), 3);
    decltype(v)::iterator it2 = upper_bound(v.begin(), v.end(), 3);

    cout << *it << ", pos = " << (it - v.begin()) << endl;
    cout << *it2 << ", pos = " << (it2 - v.begin()) << endl;
}