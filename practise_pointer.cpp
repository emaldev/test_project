#include <iostream>
using namespace std;
int main(){
    int a = 5; 
    int *p = &a;
    int **pp = &p;
    **pp = 20;
    cout << a;
    return 0;
}