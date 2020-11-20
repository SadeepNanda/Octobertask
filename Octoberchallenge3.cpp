#include <iostream>
#include <math.h>
using namespace std;

int main() {int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    if ((ceil(log2(n)) == floor(log2(n)))&&(n!=1))
    {cout<<"-1"<<endl;
    continue;}
    if(n==1)
    {cout<<"1"<<endl;
    continue;}
    else if(n==3)
    {cout<<"2 3 1"<<endl;
     continue;
    }
    cout<<"2 3 1 ";
    for(int i=4;i<=n;i++)
    {if(ceil(log2(i)) == floor(log2(i)))
     {cout<<i+1<<" "<<i<<" ";
     i=i+1;}
     else
     cout<<i<<" ";
        
    }
        
    
   cout<<endl;     
    
}

	// your code goes here
	return 0;
}