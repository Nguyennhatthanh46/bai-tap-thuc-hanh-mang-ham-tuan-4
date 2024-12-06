/*
Xuất tất cả các số nguyên tố trong mảng, nếu mảng không có số nguyên tố xuất số 0.
Input
- Nhập số phần tử n.
- Nhập mảng một chiều các số nguyên dương có n phần tử.

Output
- Xuất tất cả các số nguyên tố trong mảng.
- Nếu mảng không có số nguyên tố, xuất số 0.

VÍ DỤ
INPUT                       OUTPUT           
--------------------------------------------------------
8                           2 3 5 7
1 2 3 4 5 6 7 8 
--------------------------------------------------------
8                           0
4 9 6 12 15 18 22 8
*/

#include <iostream>
#include <cmath>
using namespace std;

bool xetsont(int a){
if(a<2) return false;
if((a!=2)&&(a%2==0)) return false;
for(int i = 2; i<=sqrt(a);i++){
    if(a%i==0) return false;
}
return true;
}
void Nhapmang(int a[], int n){
for(int i = 0; i<n;i++){
    cin>>a[i];
}
}

void Xuatmang(int a[], int n){
int dem=0;
for(int i  = 0; i <n; i++){
    int t = xetsont(a[i]);
    if(t==true){
        cout<<a[i]<<" ";
        dem++;
    }
    }
    if(dem==0)cout<<dem;
}

int main()
{
    int n;
    cin>>n;
	int a[n];
	Nhapmang(a, n);
	Xuatmang(a, n);
}
