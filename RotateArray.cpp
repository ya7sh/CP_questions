#include <iostream>
using namespace std;

void rotateArry(int a[],int n,int d)
{
    int newArry[n];
    for (int i = 0; i < n; i++)
    {
    	int newIndex = (i+n-d)%n;
    	newArry[newIndex]=a[i];
    }

    for (int i = 0; i < n; i++)
    {
    	cout<<newArry[i]<<" ";
    }
}

int main() 
{
	int t,n,d;
	cin>>t;
	
	while(t--)
	{
	    cin>>n>>d;
	    int a[n];
	    
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    
	    rotateArry(a,n,d);
	    cout<<"\n";
	}
	
	return 0;
}
