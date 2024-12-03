/* Viết hàm tính giá trị 
S(n) với n là số nguyên dương.
S(n) = √n+√(n−1+√(n−2+...+√(2+√1.
INPUT
Một số nguyên dương n (n < 2 tỷ, mặc định nhập đúng điều kiện).

OUTPUT
Giá trị S(n) theo đề với 2 chữ số sau dấu thập phân.

EXAMPLE
INPUT           OUTPUT           
--------------------------------
1               1        	      
--------------------------------
2               1.73                
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
float calculate(int n){
float S=0;
for(int i = 1; i<=n;i++){
	S = sqrt(S+i);
} return S;
}
int main() {
	int n;
	cin >> n;
    cout << setprecision(3) << calculate(n);
}
