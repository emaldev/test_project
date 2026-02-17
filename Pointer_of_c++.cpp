#include <iostream>
using namespace std;




int main(){
    int x = 5; 
    int* p = &x;
    p = nullptr;
    cout << "Done " << x;

    return 0;
}