/*
Viết hàm tính tổng tất cả các chữ số của số nguyên dương N.

INPUT
Một số nguyên dương N (N<2 tỷ, mặc định nhập đúng điều kiện).

OUTPUT
Một số nguyên dương.

EXAMPLE
INPUT         OUTPUT          
----------------------------
3456          18        	      
----------------------------
10            1               
*/

#include <iostream>
using namespace std;

int sum(int n, int &s){
if (n==0) return s;
s+=n%10;
return sum(n/10,s);
}
void input(int &n){
cin>>n;
}
int main() {
    int n, s=0;
    input(n);
    sum(n, s);
    cout << s;
}
