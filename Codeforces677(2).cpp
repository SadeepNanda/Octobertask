    #include <iostream>
    #include <bits/stdc++.h>
    using namespace std;
     
    int main() {
    	int t;
    	cin>>t;
    	while(t--)
    	{
    	    int n,k=0,s=0,e=0;
    	    cin>>n;
    	    int a[n+1];
    	    for(int i=0;i<n;i++)
    	    cin>>a[i];
    	    if((count(a,a+n,1)==1)||n<=2)
    	    {cout<<"0"<<endl;
    	    continue;}
    	    for(int i=0;i<n;i++)
    	    { if(a[i]==1)
    	      {s=i;
    	      
    	       break;} 
    	    }
    	    for(int i=n-1;i>=0;i--)
    	    { if(a[i]==1)
    	      {e=i;
    	      
    	       break;} 
    	    }
    	    for(int i=s;i<=e;i++)
    	    {
    	        if(a[i]==0)
    	        k++;
    	    }
    	    cout<<k<<endl;
    	    
    	    
    	    
    	}
    	return 0;
    }