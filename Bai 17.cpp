#include <iostream>
using namespace std;

long long sodx(long long i){
	long long tong = 0;
	long long a;
	while(i!=0){
		a=i%10;
		tong=tong*10+a;
		i/=10;
	}
	return tong;
}
bool kt(int a){
if(a<2) return false;
if ((a!=2)&&(a%2==0)) return false;
for (int i = 2; i*i <=a;i++){
    if(a%i==0) return false;
}
return true;
}
int main(){
long long a,b;
cin>>a>>b;
long long x = 0;
for(long long i = a;i<=b;i++){
	long long sodao = sodx(i);
 if (kt(sodao)&&kt(i)){
  x++;}
}cout<<x;
}

