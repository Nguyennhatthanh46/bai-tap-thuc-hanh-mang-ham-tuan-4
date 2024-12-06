/* Nhập mảng 1 chiều các số nguyên có n phần tử (0<n<100).
Xuất tất cả các phần tử có chỉ số là số lẻ (chỉ số của mảng bắt đầu từ 0)

Input
- Nhập số phần tử n.
- Nhập mảng.

Output
- Xuất tất cả các phần tử có chỉ số là số lẻ .

VÍ DỤ
INPUT                 OUTPUT           
-------------------------------------
8       	            2 4 6 8
1 2 3 4 5 6 7 8    
*/	

#include <iostream>
using namespace std;

void Nhapmang(int a[], int n){
for(int i = 0; i<n;i++){
    cin>>a[i];
}
}

void Xuatmang(int a[], int n){
for(int i  = 0; i <n; i++){
    if(i%2!=0){
        cout<<a[i]<<" ";
    }
}
}
int main()
{
    int n;
    cin>>n;
	int a[n];
	Nhapmang(a, n);
	Xuatmang(a, n);
}
