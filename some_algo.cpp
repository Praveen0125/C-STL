#include <bits/stdc++.h>
using namespace std;

// comparison operator declared.
bool comp(pair<int,int>p1, pair<int,int>p2){
    if(p1.second<p2.second){
        return true;
    } else if(p1.second==p2.second){
        if(p1.first>p2.second) return true;
        else return false;
    }
    else return false;
}

int main(){

    // sorting vectors and arrays using sort() instead of merge bubble or selection.

// array sorting

    // int arr[] = {1,5,3,2};
    // sort(arr, arr+4);
    // for(auto i:arr){
    //     cout<<i<<" ";
    // }

// array sorting in reverse

    // int arr[] = {1,5,3,2};
    // sort(arr, arr+4, greater<int>());
    // for(auto i:arr){
    //     cout<<i<<" ";
    // }

    // vector<int>arr{1,5,3,2};
    // sort(arr.begin(), arr.end(), greater<int>());
    // for(auto i:arr){
    //     cout<<i<<" ";
    // }

// sort in reverse order

    // vector<int>arr{1,5,3,2};
    // sort(arr.begin(), arr.end(), greater<int>());
    // for(auto i:arr){
    //     cout<<i<<" ";
    // }

// only last two gets sorted

    // vector<int>arr{1,5,3,2};
    // sort(arr.begin()+2, arr.end());
    // for(auto i:arr){
    //     cout<<i<<" ";
    // }

// all permutation of the string...

    // string s ="1234";
    // do {
    //     cout<<s<<endl;
    // }while(next_permutation(s.begin(), s.end()));

// max and min element in an array.

    // int arr[] = {1,3,5,1,6,8,2,9};
    // cout<<*max_element(arr,arr+8);
    // cout<<*min_element(arr,arr+8);

    vector<pair<int, int>> all = {{1,2},{2,1},{4,1}};
    sort(all.begin(), all.end(), comp);  // comp is a comparision declared by me.
    for (int i=0;i<3;i++)
    {
        cout<<all[i].first<<" "<<all[i].second<<endl;
    }
}