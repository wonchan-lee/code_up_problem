#include <iostream>
#include <string>
using namespace std;

int main(){
    int h, b, c, s;
    double tmp, result;
    cin >> h >> b >> c >> s;
    unsigned int tmp1= h*b*c*s;
    tmp = 8*1024*1024;
    
    result = tmp1/tmp;
    printf("%.1lf MB",result);
    }
