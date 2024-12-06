/*
Nếu một dãy 10 số tồn tại 3 số có chữ số bắt đầu là chữ số 1 và 1 số bắt đầu bằng chữ số 4 thì có thể giả định rằng dãy số đó tuân thủ theo luật Benford. 
Hãy viết chương trình kiểm tra dãy số nhập vào có thỏa luật Benford không?

INPUT
Nhập 10 số nguyên dương bất kỳ có giá trị f (f < 99999).

OUTPUT
Nếu dãy số đó có 3 con số bắt đầu bằng chữ số 1 và 1 con số bắt đầu bằng chữ số 4 thì xuất ra màn hình ra TRUE.
Ngược lại, xuất ra màn hình FALSE.

VÍ DỤ
INPUT               OUTPUT          
------------------------------------
45087               FALSE

22650

59147

13072

25060

39642

29697

42234

20781

86586               	      
------------------------------------
5390                TRUE

12777

42273

8565

98557

52699

10484

36897

73658

10399                  
*/

#include <iostream>
using namespace std;
#define MAX 100

void Nhapmang(int a[], int n){
for(int i = 0; i<n;i++){
    cin>>a[i];
}
}

int tinh(int x){
while(x>=10){
  x/=10;
}
return x;
}


bool isBenford(int a[], int n){
int dem1 = 0;
int dem2 =0;
for (int i = 0; i<n;i++){
    int gt = tinh(a[i]);
    if(gt==1) {
            dem1++;
    }
    if(gt==4){
        dem2++;
    }
} if((dem1>=3)&&(dem2>=1)) return true;
return false;
}
int main()
{
	int a[MAX], n = 10;
	Nhapmang(a, n);
	if (isBenford(a, n) == true)
		cout << "TRUE" << endl;
	else
		cout << "FALSE" << endl;
	return 0;
}
