#include <iostream>
using namespace std;

int main()
{
	int n;
	n=6;
	int a[n];
	for(int i=0;i<n;i++){
        cin>>a[i];
	}
	int x;
	cin>>x;
	int k;
	cin>>k;
	for(int i = n-1;i>=k;i--){
        a[i+1]=a[i];
	}
	a[k]=x;
	++n;
	for(int i =0;i<n;i++){
        cout<<a[i]<<" ";
	}
}
