#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)
#define MOD 1000000007
#define inf 1000000010
#define endl "\n"
#define ull unsigned long long
#define con (f?"YES":"NO")
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

#define dpos(n) fixed << setprecision(n)

#define CLR1(a) memset(a, -1, sizeof(a))
#define CLR0(a) memset(a, 0, sizeof(a))

#define sortn(a,x,n) sort(a+x, a+x+n)
#define sortv(s) sort(s.begin(), s.end())
#define reversev(s) reverse(s.begin(), s.end())
#define reversesortv(s) sortv(s); reversev(s)
#define unik(a) unique(a.begin(), a.end()) - a.begin()

#define lowerbound(v,x) lower_bound(v.begin(), v.end(), x)-v.begin()
#define upperbound(v,x) upper_bound(v.begin(), v.end(), x)-v.begin()

#define pb push_back
#define loj(i,j) "Case "<<i<<": "<<j
#define gap " "

#define auto(x,a) for (auto& x : a)

int dx[] = {1, -1, 0, 0, 1, 1, -1, -1};
int dy[] = {0, 0, 1, -1, 1, -1, 1, -1};

int main() {
   ios_base::sync_with_stdio(false); cin.tie(0),cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        
        vector<int>a;
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            a.push_back(x);
        }

        sortv(a);

        int sum = a[0], cnt =0;

        vector<int>ans, v;
        ans.push_back(a[0]);

        for(int i=1;i<n;i++){
            if(sum>=a[i]){
                cnt++;
                v.push_back(a[i]);
            }
            else{
                sum+=a[i];
                ans.push_back(a[i]);
            }
        }

        cout<<cnt<<endl;
        for(int x: ans) cout<<x<<" ";
        for(int x: v) cout<<x<<" ";
        cout<<endl;
    }
}