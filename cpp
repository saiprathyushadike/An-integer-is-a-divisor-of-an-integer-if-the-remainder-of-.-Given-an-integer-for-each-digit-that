#include <iostream>
using namespace std;

int main() {
	long int n,i,a,count=0,b,c,count1=0,d;
	cin>>n;
	long int arr[n];
	for(int i = 0; i < n; i++) 
	{
	        count1=0;
        cin>>arr[i];
        c=arr[i];
	    d=arr[i];
	while(c!=0){
	    a=c/10;
	    c=a;
	    count++;
	}
	for(int j=0;j<=count;j++){
	    b=d%10;
	    if(b!=0 && arr[i]%b==0){
	        count1++;
	    }
	    d=d/10;
	}
	cout<<count1<<"\n";
	
    }
	
	return 0;
}
