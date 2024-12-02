/*
Viết hàm tính tổng tất cả các chữ số của số nguyên dương N.

INPUT
Một số nguyên dương N (N<2 tỷ, mặc định nhập đúng điều kiện).

OUTPUT
Một số nguyên dương.

EXAMPLE
INPUT         OUTPUT          
----------------------------
3456          6        	      
----------------------------
10            1               
*/

#include <iostream>
int TongChuSo(int a){
int x =0;
int b;
for(int i = a;i!=0;i/=10){
    b=i%10;
    x+=b;
}return x;
}

void input(int &a){
std::cin>>a;
}
 int main() {
    int a;
    input(a);
    std::cout << TongChuSo(a);
    return 0;
}
