#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll t,n,k,y,x;
string check(ll n,ll k,ll x,ll y){
    string result;
    if(n<k){
        return result="NO";
    }
    if( k==0 || n==0){
        if(k==0 && x==y){
            result="YES";
            return result;
        }
        result="NO";
        return result;
    }
    for(ll i=0;i<=ll(n/k);i++){
        if(x==y){
            result="YES";
            return result;
        }
        else{
            x=(x+k)%n;
        }
    }
    result="NO";
    return result;
}
int main() {
    cin>>t;
    for(long long i=0;i<t;i++){
        scanf("%lld %lld %lld %lld",&n,&k,&x,&y);
        string result=check(n,k,x,y);
        cout<<result;
    }
    return 0;
}