/*
 * Author Chaudhary Hamdan
 * C++ Template for Competitive Programming
 * Github link : https://github.com/hamdan-codes
 */

/*
 * Template available at my Github
 * Repository Link :-
 * https://github.com/hamdan-codes/templates-for-CP/
 */




#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/exception.hpp>
#include <ext/pb_ds/hash_policy.hpp>
#include <ext/pb_ds/list_update_policy.hpp>
#include <ext/pb_ds/tag_and_trait.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/trie_policy.hpp>

#define ff                 first
#define ss                 second
#define int                long long
#define pb                 push_back
#define mp                 make_pair
#define pii                pair<int,int>
#define vi                 vector<int>
#define vpii               vector<pair<int,int>>
#define vs                 vector<string>
#define gi                 greater<int>
#define mii                map<int,int>
#define pqb                priority_queue<int>
#define pqs                priority_queue<int,vi,greater<int>>
#define all(x)             x.begin(),x.end()
#define setbits(x)         __builtin_popcountll(x)
#define zrobits(x)         __builtin_ctzll(x)
#define gcd                __gcd
#define mod                1000000007
#define pi                 3.14159265358979323846264338327950288419716939937510
#define inf                LONG_LONG_MAX
#define ps(x,y)            fixed<<setprecision(y)<<x
#define endl               '\n'
#define mk(type,arr,n)     type *arr=new type[n]
#define f(i,x,y)           for(int i = x; i < y; i++)
#define fi(i,x,y,inc)      for(int i = x; i < y; i+=inc)
#define rf(i,x,y)          for(int i = x; i >= y; i--)
#define w(x)               int zyx; cin >> zyx; for(int x=1;x<=zyx;x++)



using namespace std;

using namespace __gnu_pbds;
using namespace __gnu_cxx;

mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;


void c_p_p()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("C:\\Users\\KIIT\\input", "r", stdin);
	freopen("C:\\Users\\KIIT\\output", "w", stdout);
#endif
}

/* ********************* Your Functions and Classes Below ********************** */









/* ********************* Your Functions and Classes Above ********************** */

int32_t main()
{
	c_p_p();

	/* ******************* Your main function Code Below ******************* */



	int s1;

	int  arr[100001] = {0};
	w(tc)
	{
		int n, k;
		cin >> n >> k;
		arr[0] = 1;
		arr[1] = k;
		for (int i = 2; i <= n; i++) {
			arr[i] = (arr[i - 1] * k) % mod;
		}

		string s;
		cin >> s;
		int ans = 0;
		for (int i = 0; i < (n + 1) / 2; i++) {
			int temp = s[i] - 'a';
			ans = (ans + (temp * (arr[(n + 1) / 2 - i - 1])) % mod) % mod;
		}

		string s1 = s;
		for (int i = 0; i < (n + 1) / 2; i++) {
			s1[n - i - 1] = s[i];
		}

		if (s1 < s) {
			ans++;
		}
		cout << "Case #" << tc << ": ";
		cout << ans << endl;
	}




	/* **************** Your main function Code Above ****************** */

	return 0;
}
