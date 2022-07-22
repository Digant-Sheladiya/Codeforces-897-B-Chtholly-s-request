// JAY SWAMINARAYAN //
// DIGANT SHELADIYA //
// Codeforces:Digant0204 //

#include<iostream>
#include<cstring>
#include<cstdio>
#include<set>
#include<string>
#include<map>
#include<stack>
#include<cmath>
#include<queue>
#include<vector>
#include<cstdlib>
#include<algorithm>
using namespace std;
#define test int t; cin>>t; while(t--)
#define pi (3.141592653589)
#define ll long long int
#define of(i, x, n) for (ll i = x; i >= n; i--)
#define f(i, x, n) for (ll i = x; i < n; i++)
#define fr(i, m) for (auto i : m)
#define vl vector<long long>
#define vs vector<string>
#define sl set<ll>
#define ss set<string>
#define sc set<char>
#define mll map<ll,ll>
#define mcl map<char,ll>
#define msi map<string,int>
#define msl map<string,ll>
#define pb push_back
#define pp pop_back
#define float double
#define all(v) (v).begin(), (v).end()
#define bll(v) (v).begin(), (v).end(),greater<int>()
#define fi first
#define se second
#define maxi *max_element
#define mini *min_element
#define min3(a, b, c) min(a, min(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))
#define max3(a, b, c) max(a, max(b, c))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))
#define M 1e9+7
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define rtn return
ll gcd(ll a, ll b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
ll fact(ll n){int fact = 1; for (int i = 1; i <= n; i++) fact *= i; return fact;}
void primeFactors(ll num)
{ll fac = 2; while (num > 1) {if (num % fac == 0) {cout << fac << '^'; num /= fac;ll pow = 1;while (num % fac == 0)
{num /= fac; pow++;} cout << pow << endl;}else {fac++;}}}
ll binpow(ll x,ll y)
{
    if(y==0){return 1;}
    if(y==1){return x;}
    ll ans=binpow(x,y/2);
    if(y%2==0){return (ans*ans);}
    return (ans*ans*x);
}
bool perfectsq(double x)
{
    if (x >= 0)
    {
        ll sr = sqrt(x);
        return (sr * sr == x);
    }
    return false;
}
bool isprime(ll number)
{
    if (number <= 1)
        return false;
    if (number == 2)
        return true;
    if (number % 2 == 0)
        return false;
    ll boundary = (ll)floor(sqrt(number));
    for (ll i = 3; i <= boundary; i += 2)
        if (number % i == 0)
            return false;
    return true;
}
ll nCr1[1001][1001];
ll nCr(ll n,ll r)
{
    if(nCr1[n][r])return nCr1[n][r];
    if(r==1) return nCr1[n][r]=n;
    if(n==r) return nCr1[n][r]=1;
    if(r==0) return nCr1[n][r]=1;
    return nCr1[n][r]=(nCr(n-1,r) + nCr(n-1,r-1));
}
// !(n&(n-1)) --> n==2^x n&(n-1) --> n!=2^x
ll pld(ll i)
{
        string s=to_string(i);
        string s1=s;
        reverse(all(s1));
        rtn stoll(s+s1);
}
void solve()
{
    ll k,p;
    cin>>k>>p;
    ll sum=0;
        f(i,0,k)
            {
                sum+=pld(i+1);
                sum%=p;
            }
    cout<<sum%p;
}
int main()
{
    fast;
//    test
    solve();
    rtn 0;
}

