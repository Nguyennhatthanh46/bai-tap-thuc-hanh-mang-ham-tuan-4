#include <iostream>
#include <algorithm>
using namespace std;
int main(){
int n; cin>>n;
int a[n];
int x = 0;
for(int i = 0; i < n;i++){
    cin>>a[i];
}
for(int i = 0; i < n;i++){
       if(x<a[i]){
        x = a[i];
       }
}
sort(a, a + n);
int i;
int u;
for(int i = n - 1; i>=0;i--){
        u = a[i];
    if(u<x)
    break;
}
if(u<x){cout<<u;}
else cout<<0;
}

