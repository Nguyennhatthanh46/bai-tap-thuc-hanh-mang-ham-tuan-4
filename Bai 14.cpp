/* Viết chương trình nhập vào số nguyên x sao cho 1 ≤ x ≤ 30. 
Nếu x không thỏa điều kiện, chương trình xuất ra màn hình thông báo “So <x> khong nam trong khoang [1,30].”.
Nếu x nằm trong khoảng [1,30], chương trình xuất ra màn hình số Fibonacci thứ x.

Input

Một số nguyên x

Output

Thông báo “So <x> khong nam trong khoang [1,30].” nếu x không hợp lệ

Ngược lại, xuất ra màn hình số Fibonacci thứ x

Ví dụ:
INPUT           OUTPUT           
-------------------------------------------------------
-6              So -6 khong nam trong khoang [1,30].
-------------------------------------------------------
6               8
*/
#include <iostream>
using namespace std;
#define MAX 300

int Fibo(int);

int main()
{
	int x;
	cin >> x;
	if (x < 1 || x>30)
		cout << "So " << x << " khong nam trong khoang [1,30]." << endl;
	else
	{
		cout << Fibo(x) << endl;
	}
	return 0;
}

int Fibo(int x)
{
int a = 0;
int b = 1;
int c = 1;
for (int i = 2; i<x;i++){
    a = b;
    b = c;
    c= a+b;
}return c;
}

