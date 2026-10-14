#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n; cin>>n;
vector<long long > v(n); long long cnt = 0 ;
    // input
for(long long  &x : v) cin>>x;  long long maxEle = v[0];
    for(int i = 1; i<n; i++){
        if(v[i] < maxEle)  cnt += maxEle - v[i];
        else  maxEle = v[i] ;  
    }
    cout<<cnt;
    return 0 ;
}
