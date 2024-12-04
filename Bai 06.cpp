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

int gcd(int a, int b){
if(a==0||b==0) {return 0;}
while (b!=0){
    int c = b;
    b=a%b;
    a = c;
} return a;
}
void input(int &n){
cin>>n;
}
int input(){
int m;
cin>>m;
return m;
}
int main() {
	int m, n;
	input(n);
	m=input();
	cout << gcd(m, n);
}
