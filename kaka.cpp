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
ll fib(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fib(n - 1) + fib(n - 2);
}
void faster() { cin.tie(0)->sync_with_stdio(0); }

int main()
{
    faster();
    cout << fib(9);
    return 0;
}