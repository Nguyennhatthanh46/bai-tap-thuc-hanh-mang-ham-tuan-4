/* Viết hàm tính tổng tất cả các ước chẵn của một số nguyên dương N. Nếu không có ước số chẵn nào thì trả về -1.

INPUT
Một số nguyên dương N (N<2 tỷ, mặc định nhập đúng điều kiện).

OUTPUT
Một số nguyên.
INPUT     OUTPUT         GIẢI THÍCH
--------------------------------------------------------
8          14         	Ước chẵn của 8 là: 2, 4, 8
--------------------------------------------------------
17         -1           Ước chẵn của 17 là: không có

*/

#include <iostream>
using namespace std;
int sum_even_divisor(int n){
int x = 0;
for(int i = 1; i*i <= n;i++){
   if(n%i==0){
    if (i%2==0){
        x+=i;
    }
        if(i!=(n/i)){
            if((n/i)%2==0){
                x+=(n/i);
            }
        }
}
}if(x!=0) return x;
else return -1;
}
int Input(){
    int n;
    cin >> n;
    return n;
}
int main() {
	int n;
	n=Input();
	cout << sum_even_divisor(n);
}
