typedef long long ll;
class Solution {
public:
    bool isHappy(int n) {
        map<ll,ll> m;
        // condition will break when either n become 1 or number repeats.
        // so if the number repeats then it will be infinte loop.
        while(n!=1 && m[n]==0)
        {
            m[n]++;
            ll ans = n;
            ll replace = 0;
            while(ans>0)
            {
                ll num = ans%10;
                replace+=(num*num);
                ans/=10;
            }
            n = replace;
        }
        if(n==1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
