/* Viết chương trình tính Giai thừa kép (ký hiệu n!!), biết rằng:
n!!=2.4.6..n nếu n chẵn.
n!!=1.3.5..n nếu n lẻ.
INPUT
- Một số nguyên dương n ≥ 1

OUTPUT
- Giai thừa kép của n.

VÍ DỤ
INPUT           OUTPUT           GIẢI THÍCH
--------------------------------------------------------------
8               384     	       2 · 4 · 6 · 8 = 384
--------------------------------------------------------------
9               945              1 · 3 · 5 · 7 · 9 = 945
*/

#include <iostream>
using namespace std;
long long tinhgiaithua(long long n){
    long long x = 1;
if(n%2==0){
    for(int i = 2;i<=n;i+=2){
        x*=i;
    }
}else{
    for(int i = 1;i<=n;i+=2){
        x*=i;
    }
}
return x;
}

int main()
{
	long long n;
	cin >> n;
	cout<<tinhgiaithua(n);
}
