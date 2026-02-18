#include <iostream>

using namespace std;

int main(){
    cout << "Enter a number for (n) :> ";
     int n;
     cin >> n;
    int myArray[n];
    int *ptr = myArray;
    int sum = 0;
    
     cout << "Enter n  number " << endl;
    for (int i = 0 ; i < n; i++)
    {
        cin >> *(ptr + i);
    }

    int max = ptr[0];
    int *maxAddress = ptr;

    for (int i = 0; i < n; i++)
    {
        if(*(ptr  + i) > max) max = *(ptr + i);
        maxAddress = ptr +  i;
        cout  << *(ptr + i) << "  ";
         sum += *(ptr + i);
    }
          cout << "\n max number  is : " << max << endl;
          cout << maxAddress << endl;
        cout  <<"\n Sum :" <<  sum;

       return 0;
}