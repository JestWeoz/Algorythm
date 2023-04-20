#include <bits/stdc++.h>
using namespace std;
#define FOR(i, n) for(int i = 0; i < n; i++)
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

void faster() {cin.tie(0) -> sync_with_stdio(0);}

int main()
{
    faster();
    int n;
    cin >> n;
    vi a;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        a.pb(tmp);
    }
    int i = 0, j = a.size() - 1;
    while (i < j) {
        if (a[j] == 0) j--;
        if (a[i] == 0 and a[j] != 0) swap(a[i], a[j]);
        if (a[i] != 0) i++;
    }
    for (auto c : a) {
        cout << c << " ";
    }
    return 0;
}