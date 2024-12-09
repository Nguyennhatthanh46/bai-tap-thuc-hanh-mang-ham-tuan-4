/* Giả sử có 2 mảng a và b đã được sắp xếp theo thứ tự tăng dần.
Hãy nối 2 mảng a và b thành mảng c sao cho mảng c vẫn đảm bảo thứ tự tăng dần (không sử dụng thuật toán sắp xếp trên mảng c)
Input
- Nhập số phần tử của mảng a, b.
- Nhập mảng a, b.

Output
- Xuất mảng c vừa tạo.
VÍ DỤ
INPUT                 OUTPUT           
------------------------------------------------------
5                     1 2 5 6 7 8 10 11 20
2 5 6 8 20 

4
1 7 10 11
------------------------------------------------------
3                     1 2 3 4 5 6 7
1 2 3

4
4 5 6 7

*/
#include <iostream>
using namespace std;
int main(){
int n; cin>>n;
int a[n];
for(int i = 0; i < n;i++){
    cin>>a[i];
}
int m; cin>>m;
int b[m];
for(int j = 0; j < m;j++){
      cin>>b[j];
}
int i=0,j=0;
while((i<n)&&(j<m)){
    if(a[i]<=b[j]){
        cout<<a[i]<<" ";
        ++i;
    }else{
    cout<<b[j]<<" ";
    ++j;
    }
}
while(i<n){
    cout<<a[i]<<" ";
    ++i;
}
while(j<m){
    cout<<b[j]<<" ";
    ++j;
}
}


