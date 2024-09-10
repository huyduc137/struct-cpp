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


struct Point{
    ll x , y;
    ld doDai(Point p)
    {
        return sqrt(pow(x - p.x , 2)+pow(y - p.y , 2)); // tính độ dài của 2 điểm bất kì
    }
};

void solution(Point &a , Point &b , Point &c)
{
    cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y;
    ll t1 = a.doDai(b) , t2 = b.doDai(c) , t3 = a.doDai(c);
    if (t1 == 0 || t2 == 0 || t3 == 0) cout << "INVALID" << endl;
    else if (t1 + t2 <= t3 || t1 + t3 <= t2 || t3 + t2 <= t1) cout << "INVALID" << endl;
    else
    {
        ld sum = (t1 + t2 + t3)/2;
        ld s1 = sqrt(sum*(sum - t1)*(sum - t2)*(sum - t3));
        ld s2 = (t1*t2*t3)/(s1*4);
        cout << fixed << setprecision(3) << PI*s2*s2 << endl;
    }
}

int main()
{
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n; cin >> n;
    while(n--)
    {
        Point a , b , c;
        solution(a , b , c);
    }
}
