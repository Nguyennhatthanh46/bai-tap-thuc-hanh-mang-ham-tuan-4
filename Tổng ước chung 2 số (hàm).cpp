/* Tính tổng tất cả các ước số chung của 2 số nguyên dương N và M.

INPUT
Hai số nguyên dương M và N (<2 tỷ, mặc định nhập đúng điều kiện).

OUTPUT
Một số nguyên dương.
INPUT           OUTPUT           GIẢI THÍCH
---------------------------------------------------------------------
15  20          6        	       Ước số chung của 15 và 20 là 1, 5
---------------------------------------------------------------------
17   27         1                	Ước số chung của 17 và 27 là 1

*/

#include <iostream>
int tong(int uoc){
   int x = 0;
    for(int i = 1; i*i <= uoc;i++){
        if(uoc%i==0){
            x+=i;
        if(i!=(uoc/i)){
            x+=(uoc/i);
         }
        }
    }
    return x;
}
int TongUocChung(int a, int b){
if (a == 0 || b == 0) return 0;
while(b!=0){
    int c = b;
    b = a%b;
    a = c;
}int y = tong(a);
return y;
}
int input(){
int a;
std::cin>>a;
return a;
}
void input(int &b){
std::cin>>b;
}
int main(){
    int a, b;
    a=input();
    input(b);
    std::cout << TongUocChung(a, b);
    return 0;
}
