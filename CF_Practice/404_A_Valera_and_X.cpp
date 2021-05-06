
/*   => int overflow
     => array bounds 
     => special cases (n=1?)
     => do smth instead of nothing 
     => stay organized 
     => WRITE STUFF DOWN DON'T GET STUCK ON ONE APPROACH
     =>Read Stuff At Bottom !
*/



#include <bits/stdc++.h>
#define ll                  long long
#define llu                 long long unsigned int
#define lld                 long double 
#define ull                 unsigned long long
#define en                  '\n'
#define repi(i,n)           for (int i = 0; i <n; i++)
#define repa(i,a,n)         for(int i=a;i<n;i++)
#define repan(i,a,n)        for(int i=a;i<=n;i++)
#define vi                  vector<int>
#define pi                  pair<int, int>
#define pb                  push_back
#define SUM(a)              accumulate(a.begin(), a.end(), 0)
#define vsort(v)            sort(v.begin(), v.end())
#define rvsort(v)           sort(v.rbegin(), v.rend())
#define vmax(v)             *max_element(v.begin(), v.end())
#define vmin(v)             *min_element(v.begin(), v.end())
#define cnt(v, n)           count(v.begin(), v.end(), (n))
#define mem1(a)             memset(a,-1,sizeof(a))
#define mem0(a)             memset(a,0,sizeof(a))
#define joshi               main
#define cb                  cout<<"Case "<<"#"<<test_case<<": ";



const int                   maxi = 1e5;
const int                   maxn = 3e3 + 10;
const ll                    mod = 1e9 + 7;

using namespace std;

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
void swap(int &x, int &y) {int temp = x; x = y; y = temp;}



template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}


ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b;}
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}


/*

00 04 
11 13 
22 
31 33 
40 44 

*/


void solve()
{
        ll n;
        cin>>n;
       char ar[n+1][n+1]={0};

       repan(i,1,n)
       {
        repan(j,1,n)
        {
            cin>>ar[i][j];
        }
       }

       char c1,c2;

       c1=ar[1][1],c2=ar[2][1];

       int c11=0,c22=0;

       repan(i,1,n)
       {
        repan(j,1,n)
        {
            if(ar[i][j]==c1)
            {
                c11++;
            }
            else if(ar[i][j]==c2)
            {
                c22++;
            }

        }
       }
       int su=0,su2=0;

       su=(n*2 )-1;

       su2=(n*n)-su;

       if(c11!=su || c22!=su2)
       {
        cout<<"NO\n";
        return;
       }


       for(int i=1;i<=n/2;i++)
       {
            for(int j=1;j<=n;j++)
            {
                if(ar[i][j]==ar[n-i+1][j])
                {
                    continue;
                }
                else
                {
                    cout<<"NO\n";
                    return;
                }
            }
       }


       if(ar[n/2][n/2]==c1)
            {
                for(int i=n/2;i<=n/2;i++)
                {
                    for(int j=1;j<=n;j++)
                    {
                        if(ar[i][j]==ar[n-i-1][j])
                            {
                                continue;
                            }
                            else
                            {
                                cout<<"NO\n";
                                return;
                            }
                    }
                }
            }
            else
                            {
                                cout<<"NO\n";
                                return;
                            }





       for(int i=(n/2)+1;i<=n;i++)
       {
            for(int j=1;j<=n;j++)
            {
                if(ar[i][j]==ar[n-i+1][j])
                {
                    continue;
                }
                else
                {
                    cout<<"NO\n";
                    return;
                }
            }
       }
       cout<<"YES\n";
       return;




}


int joshi(void)
{

        ios::sync_with_stdio(0);
        cin.tie(0);


      #ifndef ONLINE_JUDGE
            freopen("error.txt" , "w" , stderr);
      #endif

      // #ifndef ONLINE_JUDGE
      //  freopen("input.txt", "r", stdin);//for input from input.txt
      //  freopen("output.txt", "w", stdout); //for Output.txt
      // #endif

      ll test_case=1;
//       cin>>test_case;
     
      while(test_case--)
      {

        solve();
       
      }
      
    
      
     

// cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
  return 0;

}

