#include<bits/stdc++.h>
#include "distance.hpp"
using namespace std;

typedef pair<int,int> II;
typedef vector<II> VII;
typedef vector<int> VI;
typedef vector< VI > VVI;
typedef long long int LL;

#define PB push_back
#define MP make_pair
#define F first
#define S second
#define SZ(a) (int)(a.size())
#define ALL(a) a.begin(),a.end()
#define SET(a,b) memset(a,b,sizeof(a))

#define si(n) scanf("%d",&n)
#define dout(n) printf("%d\n",n)
#define sll(n) scanf("%lld",&n)
#define lldout(n) printf("%lld\n",n)
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define TRACE

#ifdef TRACE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char* name, Arg1&& arg1){
  cerr<<name<<" : "<<arg1<<endl;
}
template <typename Arg1, typename... Args>
void __f(const char* names,Arg1&& arg1,Args&&... args){
  const char* comma=strchr(names+1,',');
  cerr.write(names,comma-names)<<" : "<<arg1<<" | ";__f(comma+1,args...);
}
#else
#define trace(...)
#endif
float  inf=std::numeric_limits<double>::infinity();
LL INF=std::numeric_limits<LL>::max();
//FILE *fin = freopen("in","r",stdin);
//FILE *fout = freopen("out","w",stdout);
int main()
{
  //earth mean radius 6,371000 m;
  pair<double,double> X,Y; 
  cin>>X.F>>X.S;cin>>Y.F>>Y.S;
  double major,minor;
  //cin>>major>>minor;
  //https://en.wikipedia.org/wiki/Earth_radius 
  major = 6378137.0; minor = 6356752.3;
  Geometry::Point XX(X.F,X.S);
   Geometry::Point YY(Y.F,Y.S);
  cout<<Geometry::Distance(XX,YY,major,minor)<<endl;
  return 0;
}
