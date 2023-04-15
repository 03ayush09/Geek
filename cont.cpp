#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long int
#define za_warudo ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define all(a) a.begin(),a.end()
#define allr(a) a.rbegin(),a.rend()
#define ff first
#define ss second
#define cy cout<<"YES"<< endl
#define cn cout<<"NO"<< endl
#define mod 1000000007
#define nl '\n'
ll test = 1;
int t = 1;
void printvec(vector<int> &b) {
	for (auto  it : b) cout << it << " ";
}
void printmp(map<string, int> &mp) {
	for (auto  it = mp.begin(); it != mp.end(); it++) cout << it->ff << " " << it->ss << endl;
}
//**************************************************************************************************//
//if it doesnt works from forward try backwards
//**************************************************************************************************//
void solve()
{
	std::map<char, int> mp;
	for (int i = 0; i < 26; i++) {
		int x;
		cin >> x;
		mp.insert(pair<char, int>(char('A' + i), x));
	}


	int q;
	cin >> q;
	std::map<string, int>qmp;
	while (q--) {
		string s;
		cin >> s;
		string query = "";
		for (int i = 0 ; i < s.size(); i++) {
			string qth = to_string(mp[s[i]]);
			query.append(qth);
		}
		//cout << query << nl;
		qmp[query]++;
	}
	bool flag = 1;
	for (auto it : qmp) {
		if (it.ss > 1) {
			flag = 0;
			break;
		}
	}

	if (flag) {
		cout << "Case #" << t << ": ";
		cn;
		t++;
	}
	else {
		cout << "Case #" << t << ": ";
		cy;
		t++;
	}


}
int main() {
	za_warudo;
	cin >> test;
	while (test--)
	{
		solve();
	}
	return 0;
}