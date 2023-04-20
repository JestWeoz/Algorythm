#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mll map <long long, long long>
#define mcl map <char, long long>
#define ll long long
#define vi vector<int>
#define vc vector<char>
#define vll vector<long long>
#define si set<int>
#define sll set<long long>
#define sc set<char>
#define gl(a) getline(cin, (a))
#define all(a) ((a).begin(), (a).end())
ll mod  = 1e9 + 7;
ll n, k, a[123], test = 0;
void faster() {cin.tie(0) -> sync_with_stdio(0);}
void init() {
	for (int i = 1; i <= k; i++) {
		a[i] = i;
	}
}
void sinh() {
	int i = k;
	while (i >= 1 && a[i] == n - k + i) {
		--i;
	}
	if (i == 0) {
		test = 1;
	} else {
		a[i]++;
		for (int j = i + 1; j <= k; j++) {
			a[j] = a[j - 1] + 1;
		}
	}

}
int main()
{
	faster();
	cin >> n >> k;
	init();
	while (!test) {
		for (int i = 1; i <= k; i++) {
			cout << a[i] << " ";
		}
		cout << endl;
		sinh();
	}
	return 0;
}