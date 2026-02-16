#include <iostream>

using namespace std;
int main(){
    int n;
    cout << "Enter size of matrix";
    cin >> n;
    int matrix[n][n];
    int sum = 0; 
    cout << "Enter elements of matrix :\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> matrix[i][j];
        }
    }
     cout << "\n Matrix is : \n";
     for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << matrix[i][j] << " ";
            sum += matrix[i][j];
        }
        cout<< endl;
   

     }
     cout << sum << endl;
     return 0; 
}