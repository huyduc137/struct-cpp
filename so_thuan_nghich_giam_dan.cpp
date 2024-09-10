# include <bits/stdc++.h>
# define fi first
# define se second
# define all(a) a.begin() , a.end()
# define ms(a , n) memset(a , n , sizeof(a))
# define sz(a) a.size()
# define endl "\n"
using namespace std;

using ll = long long;
using ld = long double;
typedef pair <ll , ll> pi;
typedef vector <pi> vii;
const ll mod = 1e9 +7;
const ll base = 31;
const ll maxn = 1e6 + 6;
const ll PI = 3.14;
inline ll gcd(ll a , ll b){ll r; while(b){r = a % b ; a = b ; b = r;} return a;}
inline ll lcm(ll a, ll b){return a / gcd(a , b)*b;}

bool check(string s)
{
    if (s.size() < 2) return false;
    string tem = s;
    reverse(all(s));
    if (s == tem) return true;
    return false;
}

bool cmp(const pair<string , ll> &a , const pair <string , ll> &b)
{
//    return a.fi > b.fi; // cách 1
    return (a.fi.size() != b.fi.size() ? a.fi.size() > b.fi.size() :  a > b); // cách 2
}

int main()
{
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n; cin >> n;
    map <string , ll> mp;
    while(n--)
    {
        string s; cin >> s;
        if (check(s)) mp[s]++;
    }
    vector <pair <string , ll>> p;
    for (auto it : mp)
    {
        p.push_back({it.fi , it.se});
    }
    sort(all(p) , cmp);
    for (auto it : p)
    {
        cout << it.fi << " " << it.se << endl;
    }
}
