/* Viết hàm tính tổng tất cả các ước số chính phương của một số nguyên dương N.

INPUT
Một số nguyên dương N (N<2 tỷ, mặc định nhập đúng điều kiện).

OUTPUT
Một số nguyên dương là tổng của tất cả các số chính phương của N.
INPUT           OUTPUT           GIẢI THÍCH
------------------------------------------------------------------------------
8               5        	       Ước số có dạng chính phương của 8 là: 1, 4
------------------------------------------------------------------------------
17              1                Ước số có dạng chính phương của 17 là: 1
 
*/

#include <iostream>
using namespace std;
bool xet(int a){
for(int i = 0;i*i<=a;i++){
    if (a==i*i){
        return true;
    }
} return false;
}
int sum_all_square(int n){
int x=0;
for(int i = 1; i*i <= n;i++){
    if(n%i==0){
        if(xet(i)==true){
            x+=i;
         }
           if(i!=(n/i)){
                if(xet(n/i)==true){
                    x+=(n/i);
                }
            }
    }
}return x;
}
int main() {
    int n;
    cin>>n;
    cout << sum_all_square(n);
}
