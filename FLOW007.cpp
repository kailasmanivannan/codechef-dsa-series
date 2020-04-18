#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int t;
    long int n,rev;
	cin>>t;
	while(t--)
	{
	    rev=0;
	    cin>>n;
	    while(n>0)
	    {
	        rev=rev*10+n%10;
	        n=n/10;
	    }
	    cout<<rev<<'\n';
	}
	return 0;
}
