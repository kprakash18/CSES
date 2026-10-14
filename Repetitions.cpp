#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n = s.size();
    int curr_len = 1 ;
    int max_len = 1 ;
   for(int i = 1 ; i<n; i++){
   curr_len =  s[i-1] == s[i] ? curr_len + 1 : 1 ;
    max_len = max(max_len, curr_len);
   }
   max_len = max(max_len, curr_len); // the longest streak may be at the end
   cout<<max_len;
    return 0 ;
}