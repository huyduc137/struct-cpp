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

struct thongSo
{
    string name , ns;
};

bool cmp(const thongSo &a , const thongSo &b)
{
    string n = a.ns , d = b.ns;
    ll n1 = (n[0] - '0')*10 + (n[1] - '0');
    ll n2 = (d[0] - '0')*10 + (d[1] - '0');
    ll t1 = (n[3] - '0')*10 + (n[4] - '0');
    ll t2 = (d[3] - '0')*10 + (d[4] - '0');
    ll na1 = (n[6] - '0')*1000 + (n[7] - '0')*100 + (n[8] - '0')*10 + (n[9] - '0');
    ll na2 = (d[6] - '0')*1000 + (d[7] - '0')*100 + (d[8] - '0')*10 + (d[9] - '0');
    if (na1 != na2) return na1 > na2;
    if (t1 != t2) return t1 > t2;
    return n1 > n2;
}

int main()
{
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n; cin >> n;
    thongSo a[n + 5];
    for (ll i = 0 ; i < n ; i++)
    {
        cin >> a[i].name >> a[i].ns;
    }
    sort(a , a + n , cmp);
    cout << a[0].name << " " << a[n-1].name;
}
