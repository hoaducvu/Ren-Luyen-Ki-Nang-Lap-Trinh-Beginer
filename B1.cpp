#include<bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i=(a),_b=(b);i<=_b;i++)
#define FORD(i,a,b) for(int i=(a),_b=b;i>=_b;i--)
#define endl "\n"
#define ULL unsigned long long
#define elif else if

int main() {
	#ifdef HoaSayyy
		freopen("" , "r" , stdin);
		//freopen("" , "w" , stdout);
	#endif
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	ULL sum=0;
	FOR(i,1,n) sum+=i;
	cout<<sum;
    return 0;
}

