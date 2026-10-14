#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
int main(){
    int  n; cin>>n; vector<int>v(n);
    int cnt = 1 ;
    for(auto &x : v) cin>>x;  
    //    set<int>st;
    // st.insert(v.begin(), v.end());
    // cout<<st.size();

    // without set
    sort(v.begin(), v.end());
    for(int i = 1 ;i<n; i++){
        if(v[i] != v[i-1]) cnt++;
    }
 

    // cout<<cnt;
    return 0;
}