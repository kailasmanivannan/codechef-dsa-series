#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define m 1000000007
#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,i,temp;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==1)
            {cin>>temp;
            cout<<'1'<<endl;}
        else
        {
            int count = 0;
            int *ar =new int[n];
            int *res = new int[n];
            for(i=0;i<n;i++)
            {
                cin>>ar[i];
                res[i]=ar[i];
            }
            for(i=0;i<n-1;i++)
            {
                if(ar[i]<ar[i+1])
                    ar[i+1]=ar[i];                    
            }
            for(i=0;i<n;i++)
            {
                if(ar[i]==res[i])
                    {count++;}
            }
            cout<<count<<endl;
        }
        
    }
	return 0;
}
