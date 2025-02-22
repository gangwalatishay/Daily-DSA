#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0);
#define endl '\n' 
void solve(){
	ll n,k;
	cin>>n,k;
	vll arr(n);
	for(ll i=0;i<n;i++){
		cin>>arr[i];
	}
	
	ll count = 0,sum = 0;
	ll i =0;
	for(ll j=0;j<n;j++){
		sum += arr[j];
	
	
	while(sum>k){
		sum -= arr[i];
		i++;
	}
	count += (j-i+1);
}
	cout<<count<<endl;

}

signed main(){
	FAST_IO
	int t;
	cin>>t;
	while(t--)
		solve();
return 0;
}



