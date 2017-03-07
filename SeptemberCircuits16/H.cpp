
#include <bits/stdc++.h>
using namespace std;

#define pb                   push_back
#define mp                   make_pair
#define ff                   first
#define ss                   second
#define INF                  2047483647
#define INFLL                9023372036854775807LL
#define PI                   acos(-1.0)
#define gcd(_1,_2)           __gcd(_1,_2)
#define lcm(_1,_2)           ((_1/gcd(_1,_2))*(_2))
#define cnt_1                __builtin_popcountll
#define eps                  1e-12

#define rep(i,a,b)           for(int i=(a);i<=(b);++i)
#define rer(i,b,a)           for(int i=(b);i>=(a);--i)
#define clr(x,_)             memset(x,_,sizeof(x))
#define feach(c,_)           for(__typeof((c).begin()) _=(c).begin();_!=(c).end();++_)
#define all(_)               _.begin(),_.end()
#define sz(_)                (int(_.size()))
#define len(_)               (int(_.length()))
#define T()                  LL _;inp(_);while(_--)
#define exist(x,_)           (((_).find(x))!=((_).end()))
#define LB(_,x)              (lower_bound(all(_),x)-(_.begin()))
#define UB(_,x)              (upper_bound(all(_),x)-(_.begin()))
#define gc                   getchar//_unlocked

#define dist(x1,y1,x2,y2)        ((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2))
#define area(x1,y1,x2,y2,x3,y3)  (abs((x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2))))
#define lg(x)                    63-__builtin_clzll(x)
#define dig(x)                   (int(log10(double(x)))+1)
#define cil(a,b)                 (LL(ceil(double(a)/double(b))))
#define sin(x)                   (sin((x*PI)/180.0))
#define sq(x)                    ((x)*(x))

//traces
#define SP                   system("pause")
#define dbg1(x)              cerr<<__FUNCTION__<<" : "<<__LINE__<<" : "#x" = "<<x<<endl;
#define dbg2(x,y)            cerr<<__FUNCTION__<<" : "<<__LINE__<<" : "#x" = "<<x<<" | "#y" = "<<y<<endl;
#define dbg3(x,y,z)          cerr<<__FUNCTION__<<" : "<<__LINE__<<" : "#x" = "<<x<<" | "#y" = "<<y<<" | "#z" = "<<z<<endl;
#define dbg4(a,b,c,d)        cerr<<__FUNCTION__<<" : "<<__LINE__<<" : "#a" = "<<a<<" | "#b" = "<<b<<" | "#c" = "<<c<<" | "#d" = "<<d<<endl;
#define dbg5(a,b,c,d,e)      cerr<<__FUNCTION__<<" : "<<__LINE__<<" : "#a" = "<<a<<" | "#b" = "<<b<<" | "#c" = "<<c<<" | "#d" = "<<d<<" | "#e" = "<<e<<endl;
#define ds                   cerr<<__FUNCTION__<<" : "<<__LINE__<<" : ----- I am Here -----\n";

typedef long long int LL;     typedef pair<int,int> PII;       typedef vector<int> VI;          typedef vector<PII> VPII;
typedef pair<LL,LL> PLL;      typedef vector<LL> VLL;          typedef vector<PLL> VPLL;        typedef vector<VPII> VVPII;
typedef vector<VPLL> VVPLL;   typedef map<string,int> MSI;     typedef priority_queue<int> PQ;  typedef vector<string> VS;

#define RG                   10000007
int markP[RG];
inline void sieve(){int i,j;for(i=2;i*i<=RG;++i)if(!markP[i])for(j=i<<1;j<RG;j+=i)if(!markP[j])markP[j]=i; rep(i,1,RG-1)if(!markP[i]) markP[i]=i;}
inline void inp(LL &x){register LL c=gc();x=0;bool neg=0;for(;((c<48||c>57)&&c!='-');c=gc());if(c=='-'){neg=1;c=gc();}for(;c>47&&c<58;c=gc()){x=(x*10)+(c-48);}if(neg)x=-x;}
inline LL modexp(LL a,LL b,const LL &mod){LL x=1;a%=mod;while(b>0){if(b&1){x*=a;if(x>=mod)x%=mod;};b>>=1;a*=a;if(a>=mod)a%=mod;}return x;}
inline LL mulmod(LL a,LL b,const LL &mod){LL x=0;a%=mod;while(b>0){if(b&1){x+=a;if(x>=mod)x-=mod;}a<<=1;if(a>=mod)a%=mod;b>>=1;}return x;}
inline LL invmod(const LL &a,const LL &mod){return modexp(a,mod-2,mod);}
inline LL Pow(LL a,LL b){LL x=1;while(b>0){if(b&1)x=(x*a);a*=a;b>>=1;}return x;}
inline LL digSum(LL n){LL s=0;n=abs(n);while(n){s+=(n%10);n/=10;}return s;}
inline LL toNum(const string &st){LL num;stringstream ss(st);ss>>num;return num;}
inline string toStr(const LL &num){ return static_cast<stringstream*>( &(stringstream()<<num))->str();}
inline LL strmod(const string &T,const LL &mod){LL mul=0;rep(i,0,len(T)-1){mul=(mul*10+T[i]-'0');if(mul>=mod)mul%=mod;}return mul;}
inline bool isPrime(const LL &x){if(x<=3)return(x<=1?0:1);if(!(x&1)||!(x%3))return 0;for(LL i=5;i*i<=x;i+=6)if(!(x%i)||!(x%(i+2)))return 0;return 1;}
inline bool isPalin(const string &st){int l=len(st);for(int i=0;(i<<1)<l;++i)if(st[i]!=st[l-i-1])return 0;return 1;}
inline LL fib(LL n,const int &mod){LL i,j,h,k,t;i=h=1;j=k=0;while(n>0){if(n&1){t=j*h%mod;j=(i*h+j*k+t)%mod;i=(i*k+t)%mod;}t=h*h%mod;h=(2*k*h+t)%mod;k=(k*k+t)%mod;n>>=1;}return j;}
inline LL comb(const LL &N,LL R,const LL &mod){if(R>N) return 0;R>(N-R)?(R=N-R):R;LL mul=1LL;rep(i,0,R-1) mul=((mul*(N-i))%mod*invmod(i+1,mod))%mod;return mul;}
inline int elePos(int *A,const int &n,const int &x){int l=0,h=n-1,m;while(l<=h){ m=(h+l)>>1;if(x==A[m])return (m+1);(x<A[m])?(h=m-1):(l=m+1);}return -1;}
inline bool cmp(const PII &X,const PII &Y) {return (X.ff!=Y.ff)?(X.ff<Y.ff):(X.ss<Y.ss);}

#define MOD                  1000000007
#define MAX                  200007

int main(){
	//ios_base::sync_with_stdio(false);
	//freopen("inp.txt","r",stdin);
	//freopen("out.txt","w",stdout);
	LL n, k, prev, cnt, ans, it;
	sieve();
	T(){
	    inp(n), inp(k);
		LL res=0;
		rep(i,1,n){
		    it = i, prev = markP[it], cnt = 0, ans = 1;
			while(it>1){
				it /= markP[it];
				++cnt;
				if(markP[it] != prev){
					ans *= (cnt*k+1);
					if(ans>=MOD) ans%=MOD;
					cnt = 0;
				}
				prev = markP[it];
			}
			res += ans;
			if(res>=MOD) res-=MOD;
		}
		printf("%lld\n", res);
	}
    return 0;
}

