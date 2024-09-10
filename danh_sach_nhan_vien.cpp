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

struct nhanVien
{
    string ma, ns , name , sex , dia_chi , ma_thue , ngay_ki_hop_dong;
};

void nhap(nhanVien &a)
{
    cin.ignore();
    getline(cin , a.name);
    cin >> a.sex;
    cin >> a.ns;
    cin.ignore();
    getline(cin , a.dia_chi);
    cin >> a.ma_thue;
    cin >> a.ngay_ki_hop_dong;
    if (a.ns[1] == '/')
    {
        a.ns = "0" + a.ns;
    }
    if (a.ns[4] == '/')
    {
        a.ns.insert(3 , "0");
    }
}

void in(nhanVien &a , string s)
{
    while(s.size() < 5)
    {
        s = "0" + s;
    }
    a.ma = s;
    cout << a.ma << " " << a.name << " " << a.sex << " " << a.ns << " " << a.dia_chi << " " << a.ma_thue << " " << a.ngay_ki_hop_dong << endl;

}

int main()
{
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    nhanVien a;
    ll n; cin >> n;
    ll num = 0;
    while(n--)
    {
        nhap(a);
        string s = to_string(++num);
        in(a , s);
    }
}
