#include <bits/stdc++.h>
typedef long long ll;
#define forn(i, start, end) for (ll i = start; i < ll(end); i++)
#define input(arr, n) forn(i, 0, n) cin >> arr[i];
#define MOD 1000000007
#define vll vector<ll>
#define vpll vector<pair<ll,ll>>
#define vvll vector<vector<ll>>
#define mll map<ll, ll>
#define mcl map<char, ll>
#define sc set<char>
#define sll set<ll>
#define ssll stack<ll>
#define CHK(param) cout << #param << " is : " << param << "\n";
#define pb push_back
#define ppb pop_back
#define mk make_pair
#define f first
#define s second
#define all(x) (x).begin(), (x).end()
#define LAUV                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define TC       \
    ll TTTT;     \
    cin >> TTTT; \
    while (TTTT--)
using namespace std;

int32_t main()
{
    LAUV;
    TC
    {
        ll n;
        cin >> n;
        ll arr[n];
        input(arr, n);
        for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    }
    return 0;
}
