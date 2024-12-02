/*
Viết hàm tính tổng tất cả các ước số nguyên tố chung của 2 số nguyên dương N và M. Nếu không có ước nguyên tố chung nào thì trả về -1

INPUT
Hai số nguyên dương M và N (<2 triệu, mặc định nhập đúng điều kiện).

OUTPUT
Một số nguyên.

EXAMPLE
INPUT           OUTPUT           GIẢI THÍCH
---------------------------------------------------------------------------------
30  20          7       	       Ước số nguyên tố chung của 30 và 20: 2, 5
---------------------------------------------------------------------------------
17   34         17               Ước số nguyên tố chung của 17 và 34: 17
---------------------------------------------------------------------------------
101  67         -1               Ước số nguyên tố chung của 101 và 67: không có
*/

#include <iostream>
#include <cmath>
using namespace std;
bool kt(int a){
	if (a<2){
		return false;
	}
    if (a != 2 && a % 2 == 0){
        return false;
    }
	for(int i = 2; i <=sqrt(a);i++){
		if(a%i==0){
	return false;
	}
	} return true;
}
int sum_common_prime(int m, int n){
	int tong = 0;
	int giatri = (m<n)?m:n;
	for (int i = 2; i <= sqrt(giatri); i++){
		if ((m%i==0)&&(n%i==0)&&((kt(i))==true)){
			tong+=i;
			} int x = giatri/i;
			if(i!=x && m%x==0 && n%x==0 &&(kt(x)==true)){
			tong+=x;
			}
	}
	if (m % giatri == 0 && n % giatri == 0 && (kt(giatri)==true)) {
        tong += giatri;
    }
	 return (tong>0)?tong:-1;
}
int main(){
	int m,n;
	cin>>m>>n;
	cout<<sum_common_prime(m,n);
}
