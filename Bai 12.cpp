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
int reverse(int n,int x =0){
if(n==0) return x;
return reverse(n/10,x*10 + n%10);
} int main(){
    int n;
    cin >> n;
    cout << reverse(n);
}
