/*  Viết hàm tìm ước số chung lớn nhất của hai số nguyên dương M và N.

INPUT
Hai số nguyên dương M và N (<2 triệu, mặc định nhập đúng điều kiện).

OUTPUT
Một số nguyên dương.

EXAMPLE
INPUT           OUTPUT           
-----------------------------
34  51          17        	      
-----------------------------
10  15          5               
*/
#include <iostream>
using namespace std;
int gcd(int m, int n){
if(m==n) return m;
if(m>n)return gcd(m-n,n);
if(m<n)return gcd(n,n-m);
}
int main() {
	int m, n;
	cin >> m >> n;
	cout << gcd(m, n);
	return 0;
}
