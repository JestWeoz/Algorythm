#include <bits/stdc++.h>
using namespace std;
#define FOR(i, n) for (int i = 0; i < n; i++)
#define pb push_back
#define mll map<long long, long long>
#define mcl map<char, long long>
#define ll long long
#define vi vector<int>
#define vc vector<char>
#define vll vector<long long>
#define si set<int>
#define sll set<long long>
#define sc set<char>
#define gl(a) getline(cin, (a))
#define all(a) ((a).begin(), (a).end())
ll mod = 1e9 + 7;

void faster() { cin.tie(0)->sync_with_stdio(0); }

int s, n, f[100000006];
vi coin;

int main()
{
    faster();
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        coin.pb(tmp);
    }
    f[0] = 0;
    for (int i = 1; i <= s; i++)
    {
        f[i] = 1e9;
        for (auto c : coin)
        {
            if (i >= c)
            {
                f[i] = min(f[i], f[i - c] + 1);
            }
        }
    }
    if (f[s] == 1e9)
    {
        cout << -1;
    }

    else
    {
        cout << f[s];
    }

    return 0;
}