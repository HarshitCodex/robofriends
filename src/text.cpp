#include <bits/stdc++.h>
#include <unistd.h>
using namespace std;
#define int long long
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define mod 1000000007
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define fwd(a) a.begin(), a.end()
#define bwd(a) a.rbegin(), a.rend()
#define vinput(a)                           \
    for (int i = 0; i < (int)a.size(); i++) \
        cin >> a[i];
#define voutput(a)                          \
    for (int i = 0; i < (int)a.size(); i++) \
        cout << a[i] << " ";
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef vector<pi> vpi;

// #define endl "\n"
class compare //for priority queue
{
public:
    bool operator()(pair<int, int> a, pair<int, int> b)
    {
        if (a.first > b.first)
            return true;
        return false;
    }
};
bool comp(pi a, pi b)
{
    if (a.second > b.second)
        return true;
    else if (a.second == b.second)
    {
        return a.fi < b.fi;
    }
    else
    {
        return false;
    }
}
int power(int a, int b)
{
    int res = 1;
    a = a % mod;
    while (b)
    {
        if (b & 1)
        {
            res = (res * a) % mod;
        }
        b /= 2;
        a = (a * a) % mod;
    }
    return res;
}
// bool primes[1000005];
// vector<int> prime;
// void sieve()
// {
//     primes[1] = true;
//     primes[2] = false;
//     for (int i = 2; i * i <= 1000000; i++)
//     {
//         if (primes[i] == false)
//         {
//             for (int p = i * i; p <= 1000000; p += i)
//             {
//                 primes[p] = true;
//             }
//         }
//     }
//     for (int i = 2; i <= 1000000; i++)
//     {
//         if (primes[i] == false)
//             prime.push_back(i);
//     }
// }
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int32_t main()
{
    fastio;
    // sieve();
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        int a = 1;
        
    }
}
