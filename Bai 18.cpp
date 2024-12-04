#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
long double tinh(long double x){
long double tong = x;
long double a = -1;
long double b,bieuthuc;
long double c = 1;
for (int i = 1;;i++){
    a = pow(-1,i);
    b = pow(x,2*i+1);
    c*= (2*i)*(2*i+1);
bieuthuc = (a*b)/c;
tong+=bieuthuc;
 if (abs(bieuthuc) < 0.00001) break;
    }
    return tong;
}
int main(){
long double x;
cin >> x;
    cout << fixed << setprecision(4) << tinh(x);
    return 0;
}
