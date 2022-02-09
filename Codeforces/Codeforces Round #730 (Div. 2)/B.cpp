#include<bits/stdc++.h>
using namespace std;

#define int long long

#define fi first
#define se second
#define pb push_back
#define mp make_pair

typedef pair<int, int> II;
typedef pair<int, II> III;

const int INF = 1e9;
const int MOD = 1e9 + 7;
const int N = 1e5 + 5;

void solve(){
	int n;
	cin >> n;
	vector<int> a(n, 0);
	for(int &i : a) cin >> i;
	int sum = 0;
	for(int i: a) sum += i;
	sum = sum % n;
	int val = n - sum;
	cout << sum * val << '\n';
}

int32_t main(){
	//freopen("C:\\Users\\nqhho\\Desktop\\CP\\test.txt", "r", stdin);
	ios_base::sync_with_stdio(false); cin.tie(0);
	int T; cin >> T; while(T--){solve();}
}