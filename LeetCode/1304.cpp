#include <bits/stdc++.h>
using namespace std;
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define ld long double
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define eb emplace_back
#define INF 1e18
#define eps 0.00001
#define le length
#define debug(n1) cout << n1 << endl
#define rep0(i,n) for (i = 0; i < n; ++i) 
#define rep(i , j , n) for(ll i = j ; i <= n ; i++)
#define per(i , j , n) for(ll i = j ; i >= n ; i--)


vector<int> sumZero(int n){
    vector<int> v;
    for(int i = 1; i <= n/2; i++){
        v.emplace_back(i);
    }
    if(n%2 != 0)v.emplace_back(0);
    for(int i = 0; i < n/2; i++){
        v.emplace_back(v[i]*-1);
    }
    return v;
    
}
int main() {
    SPEED;
    int n;
    cin >> n;
    vector<int> v = sumZero(n);
    for(auto x: v){ cout << x << " ";}
    return 0;
}