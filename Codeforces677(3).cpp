    #include <iostream>
    #include <bits/stdc++.h>
    using namespace std;
     
    int main() {
    	int t;
    	cin>>t;
    	while(t--)
    	{
    	    int n,max=0,s=0,e=0;
    	    cin>>n;
    	    int a[n+1],b[n+1];
    	    for(int i=0;i<n;i++)
    	    {cin>>a[i];
    	    b[i]=a[i];
    	    }
    	    sort(b,b+n);
    	    max=b[n-1];
    	    for(int i=0;i<n;i++)
    	    {if(a[i]==max)
    	        {s=i;break;}
    	    }
    	    /*for(int i=n-1;i>=0;i--)
    	    {if(a[i]==max)
    	        {e=i;break;}
    	    }*/
    	    if(count(a,a+n,max)==n)
    	    {cout<<"-1"<<endl;continue;}
    	    else if(count(a,a+n,max)==1)
    	    {cout<<s+1<<endl;continue;}
    	    else
    	    {for(int i=s+1;i<n;i++)
    	     {if(a[i]!=max)
    	      {cout<<i<<endl;
    	      e++;
    	      break;}      
    	     }
    	     if(e==0)
    	     cout<<s+1<<endl;
    	    }
    	    
    	    
    	    
    	    
    	    
    	    
    	}
    	return 0;
    }