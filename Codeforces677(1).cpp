    #include <iostream>
    using namespace std;
     
    int main() {
    	int t;
    	cin>>t;
    	while(t--)
    	{
    	    int x,n=0;
    	    cin>>x;
    	    int a=x%10;
    	    while(x>0)
    	    {n++;
    	    x=x/10;}
    	    if(n==3)
    	    cout<<(a-1)*10 + 6<<endl;
    	    else if(n==2)
    	    cout<<(a-1)*10 + 3<<endl;
    	    else if(n==1)
    	    cout<<(a-1)*10 + 1<<endl;
    	    else if(n==4)
    	    cout<<a*10<<endl;
    	}
    	return 0;
    }