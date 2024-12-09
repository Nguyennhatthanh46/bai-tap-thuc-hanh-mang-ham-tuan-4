#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
        cin>>a[i];
	}
	int p;
	cin>>p;
	int k;
	cin>>k;
	for(int i = p;i<n;i++){
        a[i]=a[i+k];
	}
	n-=k;
	for(int i =0;i<n;i++){
        cout<<a[i]<<" ";
	}
}
