#include <iostream>
using namespace std;

int main() {int t;
cin>>t;
while(t--)
{
    long long x;
    cin>>x;
    if(x%2==0)
    cout<<(x/2)+1<<" "<<(x/2)-1<<endl;
    else
    cout<<x/2<<" "<<x-(x/2)<<endl;
}
	// your code goes here
	return 0;
}
