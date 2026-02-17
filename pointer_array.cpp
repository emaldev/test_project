#include <iostream>
using namespace std;
int main() {
    int myArray[5];
    int *p;

    p = myArray;
    *p = 10;
     p++; 
    *p = 20;
     p = &myArray[2];
     *p = 30;
     p = myArray + 3;
     *p = 40;
     p = myArray;
     *(p + 4) = 50;

     for(int i = 0; i < 5; i++){
        cout << myArray[i] << endl;
     }


    return 0;
}