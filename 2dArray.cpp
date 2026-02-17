#include <iostream>

using namespace std;

int main(){
    int menue_number;
    int total = 0;
    cout <<" >:< # Welcon my rastorant # >:<" << endl;
    while (true){
        cout << "\n Menu: \n";
        cout << "1.Burger - $5 \n";
        cout << "2. Pizza - $7 \n";
        cout << "3.Sandwich - $3 \n";
        cout << "4. Exit \n";
        
    cout << "choose a number (1 - 4): "<< endl;
    cin >> menue_number;

    switch(menue_number)
    {
        case 1:
           cout << "You chose Burger . price: $5"<<endl;
           total += 5;
           break;
        case 2:
          cout << "You chose Pizza . price : $7" << endl;
          total += 7;
          break;
        case 3:
           cout << "You chose Sandwitch . price : $3" << endl;
           total += 3;
           break;
        case 4:
          cout <<"Exiting program ... \n";
          cout << "total price : $" << total << endl;
            return 0;
        default:
        cout << "Invalid choice";
    }
}
    return 0;
}
