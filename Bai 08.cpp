/*
Viết hàm tính số đảo ngược của số nguyên dương N.

INPUT
Nhập vào một số nguyên dương N (<2 tỷ, mặc định nhập đúng điều kiện).

OUTPUT
Một số nguyên dương là số đảo ngược của số N.

EXAMPLE
  
INPUT           OUTPUT           
----------------------------
1037            7301        	      
----------------------------
3030            303
*/
#include <iostream>
using namespace std;
int reverse(int n){
int a = 0;
int x;
for(int i = n;i!=0;i/=10){
    x=i%10;
    a=a*10+x;
} return a;
}

int main() {
    int n;
    cin >> n;
    cout << reverse(n);
}
