#include <iostream>
#include <iomanip>
using namespace std;
long double gttd(long double y) {
    return (y < 0) ? -y : y;
}
long double tinh(long double x){
long double tong = x;
long double a = -1;
long double b = x;
long double y;
long double c = 1;
for (int i = 1;;i++){
b*=x*x;
c*= (2*i)*(2*i+1);
y = a*(b/c);
tong+=y;
 if (gttd(y) < 0.00001) break;
   a*=-1;}
    return tong;
}
int main(){
long double x;
cin >> x;
    cout << fixed << setprecision(4) << tinh(x);
    return 0;
}
