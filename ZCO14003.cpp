#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define m 1000000007
#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t,n,i;
    //cin>>t;
 //   while(t--)
   // {
        cin>>n;
        ll *ar = new ll[n];
        for(i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        sort(ar,ar+n);
        ll max,temp,j;
        max=1;
        j=n;
        for(i=0;i<n;i++)
        {
            temp = ar[i]*j;
            if(temp>=max)
                max=temp;
            j--;
        }
        cout<<max<<endl;
    //}
	return 0;
}
