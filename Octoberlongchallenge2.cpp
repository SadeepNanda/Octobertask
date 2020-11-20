#include <iostream>
#include <math.h>
using namespace std;

int main() {int t;
cin>>t;
while(t--)
{  long long n,k; int flag=0;
cin>>n>>k;
long long q[n+1];
for(int i=0;i<n;i++)
cin>>q[i];
for(int i=0;i<n;i++)
{   if(q[i]<k)
    {
        cout<<i+1<<endl;
        flag++;
        break;
    }
    q[i]=q[i]-k;
    q[i+1]=q[i+1]+q[i];
    
}
if (flag==0)
cout<<n+((long long)q[n-1]/k)+1<<endl;

    
}  
    
    

	// your code goes here
	return 0;
}
