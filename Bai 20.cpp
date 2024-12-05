/*
Nhập số nguyên n sao cho 0 ≤ n ≤ 50, nếu n không thỏa điều kiện thì nhập lại. Xuất ra màn hình tổng n số nguyên tố đầu tiên.

INPUT
- Số nguyên n
OUTPUT
- Xuất thông báo "Gia tri vua nhap la <n>, khong hop le. Vui long nhap lai." nếu n không hợp lệ.
- Xuất chuỗi "Tong <n> so nguyen to dau tien la: <tong>" nếu n hợp lệ.

VÍ DỤ
INPUT           OUTPUT           
--------------------------------------------------------------------------
3               Tong 3 so nguyen to dau tien la: 10
--------------------------------------------------------------------------
0               Gia tri vua nhap la 0, khong hop le. Vui long nhap lai.      	       
--------------------------------------------------------------------------
-6              Gia tri vua nhap la -6, khong hop le. Vui long nhap lai.        	       
--------------------------------------------------------------------------
6               Tong 6 so nguyen to dau tien la: 41       	       
*/


#include <iostream>
#include <math.h>
using namespace std;

bool xetsont(int a){
if(a<2) return false;
if((a!=2)&&(a%2==0)) return false;
for(int i = 2; i<=sqrt(a);i++){
    if(a%i==0) return false;
}
return true;
}
int main(){
int n;
do {
    cin>>n;
if (n <= 0 || n > 50) {
            cout << "Gia tri vua nhap la " << n << ", khong hop le. Vui long nhap lai." << endl;
        }
 else{
int tong = 0;
int dem = 0;
for (int i = 2;;i++){
    if(xetsont(i)){
        if(dem==n) break;
        tong+=i;
        dem++;
    }
}
    cout << "Tong " << n << " so nguyen to dau tien la: " << tong;
}
}
while ((n<=0)||(n>50));
return 0;
}
