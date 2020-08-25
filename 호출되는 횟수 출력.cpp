#include<iostream>
#include<string>
using namespace std;

int main(){
    int n, tmp;
    cin >> n;
    int a[23];
   
    for(int i=0; i<23; i++){
        a[i]=0;
    }
    

    for(int i=0; i<n; i++){
        cin >> tmp;
        a[tmp-1]+=1;
    }
    
    for(int i=0; i<23 ; i++){
        cout << a[i] << ' '; 
    }
}
