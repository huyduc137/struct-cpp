// nhập vào 2 điểm A, B tính khoảng cách giữa 2 điểm A, B
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

struct point{
    ld x , y;
};

int main()
{
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    point A , B;
    cin >> A.x >> A.y;
    cin >> B.x >> B.y;
    ld t1 = (A.x - B.x)*(A.x - B.x);
    ld t2 = (A.y - B.y)*(A.y - B.y);
    cout << fixed << setprecision(4) << sqrt(t1 + t2);
}
