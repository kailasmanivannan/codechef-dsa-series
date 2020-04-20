#include <iostream>
#include <string>
using namespace std;
typedef long int ll;
#define m 1000000007
#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string str;
	int t,len,i,val;
	int flag;
	char ch;
    cin>>t;
    while(t--)
    {
        flag=0;
        int a[25]={0};
        int b[25]={0};
        cin>>str;
        len=str.size();
        if(len%2==0)
        {
            for(i=0;i<len/2;i++)
            {
                ch=str[i];
                val = int(ch);
                val-=97;
                a[val]++;
            }
            for(i=len/2;i<len;i++)
            {
                ch = str[i];
                val = int(ch);
                val-=97;
                b[val]++;
            }
            for(i=0;i<25;i++)
            {
                if(a[i]!=b[i])
                {
                    flag=1;
                    break;
                }
            }
            flag?cout<<"NO"<<endl:cout<<"YES"<<endl;
        }
        else
        {
             for(i=0;i<len/2;i++)
            {
                ch = str[i];
                val = int(ch);
                val-=97;
                a[val]++;
            }
            for(i=(len/2)+1;i<len;i++)
            {
                ch = str[i];
                val = int(ch);
                val-=97;
                b[val]++;
            }
            for(i=0;i<25;i++)
            {
                if(a[i]!=b[i])
                {
                    flag=1;
                    break;
                }
            }
            flag?cout<<"NO"<<endl:cout<<"YES"<<endl;
        }
    }
	return 0;
}
