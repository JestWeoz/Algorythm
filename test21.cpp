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

int n, ans, sum = 0;
vi a;

void faster() {cin.tie(0) -> sync_with_stdio(0);}

void tri(int i) {
    sum += a[i];
    if (sum == ans) {
        sum = 0;
    } else {
        tri(i + 1);
    }
}

int main()
{
    faster();
    cin >> n >> ans;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        a.pb(tmp);
    }
    sort (all(a));

    return 0;
}