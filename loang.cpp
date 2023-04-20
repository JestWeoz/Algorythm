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

void faster() {cin.tie(0) -> sync_with_stdio(0);}

int main()
{
    faster();
    int n, k;
    vector<int> a(k);
    for (int i = 0; i < k; i++) {
        cin >> a[i];
    }
    int i = k - 1;
    while (i >= 0 and a[i] == n - k + i - 1) {
        --i;
    }
    if (i >= 0) {
        a[i]++;
        for (int j = i + 1; j < k; j++) {
            a[j] = a[j - 1] + 1;
        }
    } else {
        for (int j = 1; j <= k; j++) {
            a[j - 1] = j;
        }
    }
    for (int j = 0; j < k; j++) {
        cout << a[j] << " ";
    }
    return 0;
}