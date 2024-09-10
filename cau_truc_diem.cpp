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

struct student{
    string name , date;
    long double point_1, point_2, point_3;
};

int main()
{
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    student sv;
    getline(cin , sv.name);
    cin.ignore();
    getline(cin , sv.date);
    cin >> sv.point_1 >> sv.point_2 >> sv.point_3;
    cout << sv.name << " " << sv.date << " " << fixed << setprecision(1) << sv.point_1 + sv.point_3 + sv.point_2;
}
