#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    float luas, phi= 3.14;
    int r;
    
    cin >> r;
    if (r>0 && r<=100){
    luas= phi*r*r;
    
    printf("%.2f", luas);
}
   
    return 0;
}
