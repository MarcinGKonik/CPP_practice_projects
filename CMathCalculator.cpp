

#include <iostream>
#include <cmath>

using namespace std;

int x;
int y;
int choice;
int action;
void my_plus(){
     
    cout << x + y;

}

void my_minus(){

    cout <<  x - y;

}

void my_multi(){

   cout <<  x * y;

}

void my_divide(){
     if (y != 0) {
     cout << static_cast<double>(x) / y << endl;} else {
         cout << "Don't divide by 0 >: (" << endl;
     }

}

void my_modulo(){
    if (y != 0){
   cout << x % y;
        
    } else
    
    cout << "Don't divide by 0 >: (." << endl;
    return;

}

// content from cmath library

void my_sqrt(){

    cout <<  sqrt(x);

}

void my_sin(){

   cout <<  sin(x);

}

void my_cos(){

   cout <<  cos(x);

}


void my_round(){

   cout <<  round(x);

}

void my_pow(){
   cout << "Enter the exponent : ";
   int z;
   cin >> z;
   cout <<  pow(x, z) << endl;

}




int main() {
    cout << "MK ultra calculator" << endl;
    cout << "Please enter variable x: " << endl;

    //int x;
    cin >> x;

    cout << "Choose the action for the x" << endl;
    cout << "1 = sqrt, 2 = sin, 3 = cos, 4 = round up, 5 = pow, 6 = operation with another number." << endl;

    //int choice;
    cin >> choice;

    if (choice == 6) {

    //int y
    cout << "Enter variable y: " << endl;
    cin >> y;
    cout << "Choose your operation" << endl;
    cout << "1 add, 2 subtract, 3 multiply, 4 divide, 5 modulo" << endl;
    //int action;
    cin >> action;
    
    switch(action){
    
    case 1:
         my_plus();
         break;
    
    case 2:
         my_minus();
         break;

    case 3:
         my_multi();
         break;

    case 4:
         my_divide();
         break;

    case 5:
         my_modulo();
         break;

    default:
    cout << "Invalid input, please try again" << endl;
    break;
         
}

    } else {

    switch (choice){
        case 1:
             my_sqrt();
             break;

        case 2:
             my_sin();
             break;

        case 3:
             my_cos();
             break;

        case 4:
             my_round();
             break;

        case 5:
             my_pow();
             break;

        default:
              cout << "invalid input, please try again." << endl;
    }

    }

    return 0;
}
