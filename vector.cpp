#include<bits/stdc++.h>
using namespace std;

/// @brief 
/// @return 
int main()
{
    // vector<int> v;
    // v.push_back(1);
    // v.emplace_back(4);
    // cout<<v[1];

// pair in a vector

    // vector<pair<int, int>> vec;
    // vec.push_back({2,3});
    // vec.emplace_back(4,5);
    // vec.emplace_back(6,9);
    // cout<<vec[1].first<<endl;
    // cout<<vec[2].second;

// passing a vector into another vector

    // vector<int> v(5,20);
    // vector<int> v1(v);
    // v1.push_back(21);
    // cout<<v1[5];

// iterator another way of getting elements

    // vector<int> v{3,4,5,6,7};
    // vector<int>::iterator it = v.begin();
    // it += 4;
    // cout<< *(it);

    // vector<int> v{3,4,5,6,7};
    // vector<int>::iterator it = v.end();
    // it--;
    // cout<< *(it)<<endl;
    
// printing all element using for loop

    // vector<int> v{3,4,5,6,7};
    // for(vector<int>::iterator it = v.begin(); it != v.end(); it++)
    //for(auto it = v.begin(); it != v.end(); it++)  // auto in place of vector iterator because auto in c++ assigns itself accordingl.
    //cout<<*(it)<<endl;
    
    // using for each loop
    // for(auto it:v)
    // {
    //     cout<<it<<endl;
    // }

// deleting elements

    // vector<int> v{3,4,5,6,7};
    // v.erase(v.begin()+1);
    // for (auto i:v) {
    //    cout<<i<<" ";  //op - 3 5 6 7
    //}

    // vector<int> v{3,4,5,6,7};
    // v.erase(v.begin() +1, v.begin()+3);
    // for (auto i:v) {
    //    cout<<i<<" "; // op - 3 6 7 because begin()+3 doesn't work, it worked 1 before that only
    // }
    
    // vector<int> v{3,4,5,6,7};
    // v.erase(v.end() -1);
    // for (auto i:v) {
    //    cout<<i<<" "; // op - 3 4 5 6
    // }

// insertion

    // vector<int> v(2,100);
    // v.insert(v.begin(), 200);
    // for(auto i:v){cout<<i<<" ";} //op 200 100 100

    // vector<int> v(2,100);
    // v.insert(v.begin()+1, 2, 10);
    // for(auto i:v){cout<<i<<" ";} //op 100 10 10 100

    vector<int> v(2,100);
    v.insert(v.end()-2, 2, 10);
    // for(auto i:v){cout<<i<<" ";} //op 10 10 100 100

    vector<int> copy(2, 50);
    v.insert(v.end(), copy.begin(), copy.end());
    for(auto i:v){cout<<i<<" ";} // op - 10 10 100 100 50 50
    v.pop_back();
    v.clear();
    cout<<v.empty()<<endl;
    cout<<v.size();
}