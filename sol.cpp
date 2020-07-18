#include <bits/stdc++.h>

using namespace std;

void test_case() {
	int n;
	cin >> n;
	vector<int> a(2 * n);
	for(auto &it : a) cin >> it;
	vector<int> used(n);
	vector<int> p;
	for(int i = 0; i < 2 * n; ++i) {
		if(!used[a[i]-1]) {
			used[a[i]-1] = true;
			p.push_back(a[i]);
		}
	}
	for(auto it : p) cout << it << " ";
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int T;
	cin >> T;
	for(int nr = 1; nr <= T; ++nr) {
		test_case();
	}
	return 0;
}
