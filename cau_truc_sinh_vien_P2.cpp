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

struct sinhVien
{
    string ma , ten , lop , ns;
    ld gpa;
    void in()
    {
        cout << "-----------------------------------\n";
        cout << "Ma sinh vien: " << ma << endl;
        cout << "Ten sinh vien: " << ten << endl;
        cout << "Lop: " << lop << endl;
        cout << "Ngay sinh: " << ns << endl;
        cout << "Gpa: " << fixed << setprecision(2) << gpa << endl;
        cout << "-----------------------------------\n";
    }
    void nhap()
    {
        cout << "Nhap ma sinh vien: ";
        cout.flush();
        cin >> ma;
        cout << "Nhap ten sinh vien: ";
        cout.flush();
        cin.ignore();
        getline(cin , ten);
        cout << "Nhap lop: ";
        cout.flush();
        cin >> lop;
        cout << "Nhap ngay sinh: ";
        cout.flush();
        cin >> ns;
        cout << "Nhap Gpa: ";
        cout.flush();
        cin >> gpa;
    }
};

void inDs(sinhVien a[] , ll n)
{
    cout << "Thong tin danh sach sinh vien:\n";
    for (ll i = 0 ; i < n ; i++)
    {
        a[i].in();
    }
}

void tkma(sinhVien a[] , ll n)
{
    string ma;
    cout << "Nhap vao ma sinh vien can tim: ";
    cout.flush();
    cin >> ma;
    for (ll i = 0 ; i < n ; i++)
    {
        if(ma == a[i].ma)
        {
            a[i].in();
            return;
        }
    }
    cout << "Khong tim thay ma sinh vien !!!\n";
}

void gpaMax(sinhVien a[] , ll n)
{
    ld res = 0;
    for (ll i = 0 ; i < n ; i++)
    {
        if (a[i].gpa >= res) res = a[i].gpa;
    }
    cout << "Danh sach sinh vien co GPA cao nhat: \n";
    for (ll i = 0 ; i < n ; i++)
    {
        if (a[i].gpa == res)
        {
            a[i].in();
        }
    }
}

bool cmp1(sinhVien a , sinhVien b)
{
    return a.gpa > b.gpa;
}

void lkGpa2_5(sinhVien a[] , ll n)
{
    vector <sinhVien> v;
    for (ll i = 0 ; i < n ; i++)
    {
        if(a[i].gpa >= 2.5) v.push_back(a[i]);
    }
    sort(all(v) , cmp1);
    cout << "Danh sach sinh vien co diem GPA >= 2.5: \n";
    for (auto it : v)
    {
        it.in();
    }
}

// nguyen duc huy --> huynguyenduc
string chuanHoaTen(string name)
{
    stringstream ss(name);
    vector <string> v;
    string res = "";
    string token;
    while(ss >> token) v.push_back(token);
    res += v[v.size() - 1];
    for (ll i = 0 ; i < v.size() - 1 ; i++) res = res + v[i];
    return res;
}

bool cmp2(sinhVien a , sinhVien b)
{
    string ten1 = chuanHoaTen(a.ten) , ten2 = chuanHoaTen(b.ten);
    return ten1 < ten2;
}

void sapXepTen(sinhVien a[] , ll n)
{
    sort(a , a + n , cmp2);
    for (ll i = 0 ; i < n ; i++)
    {
        cout << a[i].ten << endl;
    }
}

int main()
{
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n = 0;
    sinhVien a[3000];
    while(1)
    {
        cout << "----------------------MENU-------------------------\n";
        cout << "1. Nhap thong tin sinh vien\n";
        cout << "2. Hien thi toan bo danh sach sinh vien\n";
        cout << "3. Tim kiem sinh vien theo ma\n";
        cout << "4. Liet ke cac sinh vien co diem GPA cao nhat\n";
        cout << "5. Liet ke cac sinh vien co diem GPA >= 2.5\n";
        cout << "6. Sap xep sinh vien theo ten\n";
        cout << "Nhap lua chon: \n";
        cout.flush();
        ll lc ; cin >> lc;
        if (lc == 1)
        {
            a[n].nhap();
            ++n;
        }
        else if (lc == 2)
        {
            inDs(a , n);
        }
        else if (lc == 3)
        {
            tkma(a , n);
        }
        else if (lc == 4)
        {
            gpaMax(a , n);
        }
        else if (lc == 5)
        {
            lkGpa2_5(a , n);
        }
        else if (lc == 6)
        {
            sapXepTen(a , n);
        }
        else if (lc == 0) break;
    }
}
