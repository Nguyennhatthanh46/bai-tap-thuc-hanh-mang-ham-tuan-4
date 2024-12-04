#include <iostream>
using namespace std;

int largest_input(){
    int n;
    cin >> n;
    if (n == 0) return 0;
    int lonnhat = largest_input();
    if (n > lonnhat) return n;
    if (lonnhat>=n) return lonnhat;
}
int main(){
	cout << largest_input();
}
