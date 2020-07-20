#include <bits/stdc++.h>

using namespace std;

void test_case() {
	string s;
	cin >> s;
	bool ok = true;
	for(int i = 0; i < (int) s.size(); ++i) {
		if(s[i] != s[i+1]) i++;
		else if(s[i] == 'A' && s[i+1] == 'A') {
			ok = false;
			break;
		}
		else if(s[i] == 'B' && s[i+1] == 'B') {
			ok = false;
			break;
		} 
	}
	if(ok) cout << "yes";
	else cout << "no";
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
	//test_case();
	return 0;
}
