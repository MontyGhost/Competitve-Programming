#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mag 100000 //10^8
#define inf 1e18
#define MOD 1000000007
#define rep(i,n) for(i=0;i<n;i++)
#define mset(x,v) memset(x, v, sizeof(x))
#define print_array(a,n) for(i=0;i<n;i++) cout<<a[i]<<" ";
#define var_val(x) cout<<#x<<" "<<x<<endl;
#define pb push_back
#define fi first
#define se second
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mag 100000
#define inf 1e18
#define MOD 1000000007
#define rep(i,n) for(i=0;i<n;i++)
#define mset(x,v) memset(x, v, sizeof(x))
#define print_array(a,n) for(i=0;i<n;i++) cout<<a[i]<<" ";
#define var_val(x) cout<<#x<<" "<<x<<endl;
#define pb push_back
#define fi first
#define se second
ll func(ll num){
ll i,sum=0;
ll square_root = (sqrt(num)) + 1;
for (i = 1; i < square_root; i++){
if (num % i == 0&& i*i!=num)
    sum+=2;
if(num % i == 0&&i*i==num)
   sum+=1;
}
return sum;
}
int main(){

cout<<func(12);
}
