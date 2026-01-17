#include <bits/stdc++.h>
using namespace std;
//-------------extra defines-----------------
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
namespace __gnu_pbds{
	typedef tree<long long,
			null_type,
			less<long long>,
	rb_tree_tag,
	tree_order_statistics_node_update> ordered_set;
}
using namespace __gnu_pbds;


class stOrderedSet {
private:
	typedef tree<long long,
			null_type,
			less_equal<long long>,
			rb_tree_tag,
			tree_order_statistics_node_update> ordered_set;

	ordered_set s;

public:

	void insert(long long x) {//insert value
		s.insert(x);
	}


	bool isExist(long long x) {//check the existing of a value?
		if (s.upper_bound(x) == s.end()) {
			return false;
		}
		return (*s.upper_bound(x)) == x;
	}

	void erase(long long x) { //erase an instance of a value
		if (isExist(x)) {
			s.erase(s.upper_bound(x));
		}
	}

	long long idx(long long value) {//index of existing value
		if (!isExist(value)) {
			return -1;
		}
		return s.order_of_key(value);
	}
	//can't understand what's it does
	long long LastIdx(long long x) {//return the  index of the last instance of value
		if (!isExist(x)) {
			return -1;
		}
		if (*s.find_by_order(s.size() - 1) == x) {
			return s.size() - 1;
		}
		return idx(*s.lower_bound(x)) - 1;
	}

	long long value(long long index) {//find the value in an index
		return *s.find_by_order(index);
	}

	long long count(long long x) {//count the number of instances for specific value
		if (!isExist(x)) {
			return 0;
		}
		return LastIdx(x) - idx(x) + 1;
	}

	void clear() {//clear the set
		s.clear();
	}

	long long size(){//return the size of the set
		return s.size();
	}

	long long lower_bound(long long x)
	{
		return *s.upper_bound(x);
	}

	long long upper_bound(long long x)
	{

		return *s.lower_bound(x);
	}

	long long elementsLessThan_X(long long x) {
		return s.order_of_key(x);
	}

	long long elementsGreaterThan_X(long long x) {
		return size()-elementsLessThan_X(x+1);
	}

	long long elementsGreaterOrEqual_X(long long x) {
		return size()-elementsLessThan_X(x);
	}

	long long elementsLessOrEqual_X(long long x) {
		return size()-elementsGreaterThan_X(x);
	}

};



//-------------------------------------------
#define int long long
#define ld long double
#define ull unsigned long long
#define endl '\n'
#define pb push_back
#define pf push_front
#define sz(s)	(int)(s.size())
#define all(b) b.begin(),b.end()
#define allr(b) b.rbegin(),b.rend()
#define pq priority_queue
#define cin(b) for(auto &it:b)cin>>it;
#define cinG(grid) for(auto &r:grid) for(auto &c:r)cin>>c;
#define coutG(grid) for(auto &r:grid){ for(auto &c:r)cout<<c<<" ";cout<<endl;}
#define cout(b) for(auto &it:b)cout<<it<<" ";
#define ret return


typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<vi> vvi;
typedef vector<vs> vvs;
typedef pair<int,int> pii;
typedef vector<bool> vb;
typedef vector<vb> vvb;
typedef vector<char> vc;
typedef vector<vc> vvc;
typedef vector<pair<int, int>> vpi;
typedef vector<vector<pair<int, int>>> vvpi;


//   solve

int oo = 0x3f3f3f3f3f3f3f3f;
int num;
const int mod = 1e9 + 7;
int di[8]{ 1 , -1 , 0 ,  0 , 1 ,  1 , -1 , -1 };
int dj[8]{ 0 ,  0 , 1 , -1 , 1 , -1 , -1 ,  1 };
char dv[4]{ 'D','U','R','L' };

const int mxn=1e5+5;
int n;
vi v;

vi dp(mxn,1);

int solvedp() {

	int mx=1;
	for (int i=n-2;i>=0;i--) {
		if (v[i+1]>v[i])
		dp[i]=dp[i+1]+1;

		mx=max(mx,dp[i]);

	}


	ret mx;







}


void Zero() {
	cin>>n;
	 v=vi(n);
	cin(v);

	cout<<solvedp();

}



void Solve() {
	int tc = 1;

	//put pre processing functions here

	/*freopen("connect.in", "r", stdin);
	freopen("connect.out", "w", stdout);*/
	//cin >> tc;
	while (tc--) {

		Zero();
	}
}

signed main() {
	ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr); // Not needed with scanf/printf
	Solve();
	return 0;
}
