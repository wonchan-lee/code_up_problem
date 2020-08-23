#include <iostream>
#include <string>
using namespace std;

int main(){
    int limit;
    int i=0;
    int sum=0;
    cin >> limit;
    
    while(sum < limit){
        i++;
        sum+=i;
    }
    cout << i;
}
