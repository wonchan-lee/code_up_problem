#include <iostream>
#include <string>
using namespace std;

int main(){
    int n, i;
    cin >> n;
    // int형 배열 사용
    int a[n];
    // lable goto문 사용
lable:
    scanf("%d", &a[n-1]);
    cout << a[n-1]<<'\n';
    n--;
    if(n!=0) goto lable;
    
    
}
