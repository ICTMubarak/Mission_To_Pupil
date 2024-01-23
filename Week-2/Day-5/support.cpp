#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sz(yo) (ll)yo.size()
 
void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0;i < n;i++)
        cin >> a[i];
    ll i = 0, j = 0, ans = 0;
    map<ll, ll> cnt;
    while (j < n)
    {
        cnt[a[j]]++;
        if (sz(cnt) <= k)
        {
            ans += (1LL * (j - i + 1));
            j++;
        }
        else
        {
            while (sz(cnt) > k && i <= j)
            {
                cnt[a[i]]--;
                if (cnt[a[i]] == 0)
                    cnt.erase(a[i]);
                i++;
            }
            if (sz(cnt) <= k)
                ans += (1LL * (j - i + 1));
            j++;
        }
    }
    cout << ans << '\n';
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    ll t;
    t = 1;
    // cin >> t;
    for (ll cs = 1; cs <= t; cs++)
    {
        // cout << "Case " << cs << ": ";
        solve();
    }
    return 0;
}
 