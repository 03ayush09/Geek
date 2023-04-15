#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
#define za_warudo ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define all(a) a.begin(),a.end()
#define ff first
#define ss second
#define cy cout<<"YES"<< endl
#define cn cout<<"NO"<< endl
#define mod 1000000007
#define nl '\n'
void printvec(vector<int> &b) {
	for (auto  it : b) cout << it << " ";
}
void printmp(map<int, int> &mp) {
	for (auto  it = mp.begin(); it != mp.end(); it++) cout << it->ff << " " << it->ss << endl;
}
//**************************************************************************************************//
//if it doesnt works from forward try backwards
//**************************************************************************************************//
void solve()
{
	ll n;
	cin >> n;
	map<ll,ll>mp;
	ll sum = 0;
	for (ll i = 0; i < n; i++) {
		ll x;
		cin >> x;
		mp[x]++;
		if (x == 0) {
			ll k = (mp.rbegin())-> first;
			sum += k;
			mp[k]--;

			if (mp[k] == 0) mp.erase(k);
		}
	}

	cout << sum << nl;


}
int main() {
	za_warudo;

	ll test = 1;
	cin >> test;
	while (test--)
	{
		solve();
	}
	return 0;
}
