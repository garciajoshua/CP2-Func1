#include <iostream>

using namespace std;


int main() {
    
    int add1, add2, sub1, sub2, mul1, mul2, div1, div2, choice;
    char continueChoice;
    
    do {
        
        
        cout << "Choose 1 for (+), 2 for (-), 3 for (x), 4 for (/): ";
        cin >> choice;
        
        if (choice != 1 && choice != 2 && choice != 3 && choice != 4) {
            cout << "Invalid Option, Please Try Again!" << endl;
            
        }
        
        switch (choice) {
            case 1:
                cout << "Enter value of 1: ";
                cin >> add1;
                
                cout << "Enter value of 2: ";
                cin >> add2;
                
                cout << add1 << "+" << add2 << "=" << add1 + add2 << endl;
                break;
                
            case 2:
                cout << "Enter value of 1: ";
                cin >> sub1;
                
                cout << "Enter value of 2: ";
                cin >> sub2;
                
                cout << sub1 << "-" << sub2 << "=" << sub1 - sub2 << endl;
                break;
                
            case 3:
                cout << "Enter value of 1: ";
                cin >> mul1;
                
                cout << "Enter value of 2: ";
                cin >> mul2;
                
                cout << mul1 << "x" << mul2 << "=" << mul1 * mul2 << endl;
                break;
                
            case 4:
                cout << "Enter value of 1: ";
                cin >> div1;
                
                cout << "Enter value of 2: ";
                cin >> div2;
                
                if (div2 != 0) {
                    cout << div1 << "/" << div2 << "=" << div1 / div2 << endl;
                } else {
                    cout << "Error: Division by zero is not allowed." << endl;
                }
                break;
        }
        
        cout << "Do you want to continue (Y/N)? ";
        cin >> continueChoice;
        system("cls");
    } while (continueChoice == 'Y' || continueChoice == 'y');
    
    return 0;
}
