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
inline ll gcd(ll a , ll b){ll r; while(b){r = a % b ; a = b ; b = r;} return a;}
inline ll lcm(ll a, ll b){return a / gcd(a , b)*b;}

struct SinhVien
{
    string id , ten , ns;
    ld gpa;
};

void nhap(SinhVien &a)
{
    getline(cin , a.ten);
    cin >> a.id;
    cin >> a.ns;
    cin >> a.gpa;
    if (a.ns[1] == '/')
    {
        a.ns = "0" + a.ns;
    }
    if (a.ns[4] == '/')
    {
        a.ns.insert(3 , "0");
    }
}

void in(SinhVien &a)
{
    cout << a.id << " " << a.ten << " " << a.ns << " " << a.gpa << fixed << setprecision(2);
}

int main()
{
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    SinhVien a;
    nhap(a);
    in(a);
}
