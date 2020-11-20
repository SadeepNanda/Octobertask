#include <iostream>
using namespace std;

int main() {int t;
cin>>t;
while(t--)
{
    int n,k,x,y,l=0,j=0;
    cin>>n>>k>>x>>y;
    if(x==y)
    {cout<<"YES"<<endl;
    continue;}
    if(k==0||y>=n)
    {cout<<"NO"<<endl;
    continue;}
    l=x;
    do
    {if(l==y)
     {cout<<"YES"<<endl;
     j++;
     break;}
     l=l+k;
     if(l>=n)
     l=l%n;
    }while(l!=x);
    if(j==0)
    cout<<"NO"<<endl;
    
}
	// your code goes here
	return 0;
}
