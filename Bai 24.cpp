/* Tạo mảng một nhiều a bao gồm n số nguyên tố theo thứ tự tăng dần. Nhập vào chữ số y (0 <= y <= 9). 
Tìm xem trong mảng a có bao nhiêu phần tử chứa số y.
Input:
- Dòng đầu tiên là số nguyên y
- Dòng tiếp theo là số phần tử của mảng a

Output:
Số phần tử chứa y có trong mảng a.
Ví dụ:
INPUT                 OUTPUT           
-------------------------------------
1       	            3
7    
*/

#include <iostream>
#include <math.h>
using namespace std;
#define MAX 100

void NhapmangSNT(int a[], int &n);
int SoPhanTuChuaY(int a[], int n,int y);

bool snt(int a) {
    if(a < 2) return false;
    if((a!=2)&&(a%2==0)) return false;
    for(int i = 2; i <= sqrt(a); ++i) {
        if (a % i == 0) return false;
    }
    return true;
}


void NhapmangSNT(int a[], int &n){
cin>>n;
int batdau = 2;
for(int i=0;i<n;){
    if(snt(batdau)){
        a[i] = batdau;
        i++;
   } batdau++;
}
}
bool kt(int a, int x){
int n;
for(int i = a;i!=0;i/=10){
    n = i%10;
    if(x==n){
        return true;
    }
}return false;
}
int SoPhanTuChuaY(int a[], int n,int y){
int dem = 0;
for(int i = 0; i<n;i++){
   if(kt(a[i],y)){
    dem++;
   }
}return dem;
}
int main()
{
	int a[MAX], n, y;
	cin >>y;
	NhapmangSNT(a,n);
	cout << SoPhanTuChuaY(a, n, y) << endl;;
	return 0;
}
