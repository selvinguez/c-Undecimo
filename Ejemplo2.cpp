#include <iostream>
using namespace std;
int main() {
   int menu =0;
  while(menu !=5){
   cout << "1.suma\n2.resta\n3.division\n4. multi\n5. salir\n->";
   cin >> menu;
    if(menu ==1){
       cout << "Ingrese numero 1: ";
    int numero1;
    cin >> numero1;
    cout << "Ingrese numero 2: ";
    int numero2;
    cin >> numero2;
    cout << "La suma es: " << numero1+numero2 << endl;
    }
     if(menu ==2){
       cout << "Ingrese numero 1: ";
    int numero1;
    cin >> numero1;
    cout << "Ingrese numero 2: ";
    int numero2;
    cin >> numero2;
    cout << "La Resta es: " << numero1-numero2 << endl;
    }
    }
    return 0;
  }
