#include <iostream>
#include <cmath>
using namespace std;

void menuLimitesAlInfinito();
void limitesAlInfinito1();
void limitesAlInfinito2();
void limitesAlInfinito3();
void limitesAlInfinito4();
void limitesAlInfinito5();
void limitesAlInfinito6();
void limitesAlInfinito7();

int main(){
    menuLimitesAlInfinito();
    return 0;
}

void menuLimitesAlInfinito(){
    int opcion;
    do{
        cout << "Menu de limites al infinito\n";
        cout << "1. Lim Ax\n";
        cout << " x->inf\n\n";

        cout << "2. Lim A/x\n";
        cout << " x->inf\n\n";

        cout << "3. Lim x/A\n";
        cout << " x->inf\n\n";

        cout << "4. Lim x^2 - Ax\n";
        cout << " x->inf\n\n";

        cout << "5. Lim Ax - B\n";
        cout << " x->inf\n\n";

        cout << "6. Lim (Ax + B)/(Cx + D)\n";
        cout << " x->inf\n\n";

        cout << "7. Lim Ax^2/Bx^2\n";
        cout << " x->inf\n\n";

        cout << "8. Salir\n";

        cin >> opcion;
        switch(opcion){
            case 1:
                limitesAlInfinito1();
                break;
            case 2:
                limitesAlInfinito2();
                break;
            case 3:
                limitesAlInfinito3();
                break;
            case 4:
                limitesAlInfinito4();
                break;

            case 5:
                limitesAlInfinito5();
                break;

            case 6:
                limitesAlInfinito6();
                break;

            case 7:
                limitesAlInfinito7();
                break;

            case 8:
                cout << "Saliendo...\n";
                return;
                
            default:
                cout << "Opcion no valida\n";
        }
    }while(opcion != 8);
}

void limitesAlInfinito1(){
    double x;

    cout << "1. Lim Ax\n";
    cout << " x->inf\n\n";

    cout << "Ingrese el valor de A: ";
    cin >> x;

    if (x < 0){
        cout << "Lim " << x << "x = Infinito\n";
        cout << " x->inf\n\n";
    } else
    {
        cout << "Lim " << x << "x = -Infinito\n";
        cout << " x->inf\n\n";
    }
}

void limitesAlInfinito2(){
    double a;

    cout << "2. Lim A/x\n";
    cout << " x->inf\n\n";

    cout << "Ingrese el valor de x: ";
    cin >> a;

    cout << "Lim " << a << "/x = 0\n";
    cout << " x->inf\n\n";
}

void limitesAlInfinito3(){
    double a;

    cout << "3. Lim x/A\n";
    cout << " x->inf\n\n";

    cout << "Ingrese el valor de x: ";
    cin >> a;

    cout << "Lim x/" << a << " = Infinito\n";
    cout << " x->inf\n\n";
}

void limitesAlInfinito4(){
    double a;

    cout << "4. Lim x^2 - Ax\n";
    cout << " x->inf\n\n";

    cout << "Ingrese el valor de A: ";
    cin >> a;

    cout << "Lim x^2 - " << a << "x = Infinito\n";
    cout << " x->inf\n\n";
}

void limitesAlInfinito5(){
    double a, b;

    cout << "5. Lim Ax - B\n";
    cout << " x->inf\n\n";

    cout << "Ingrese el valor de A: ";
    cin >> a;

    cout << "Ingrese el valor de B: ";
    cin >> b;

    if (a < 0){
        cout << "Lim " << a << "x - " << b << " = Infinito\n";
        cout << " x->inf\n\n";
    } else
    {
        cout << "Lim " << a << "x - " << b << " = -Infinito\n";
        cout << " x->inf\n\n";
    }
}

void limitesAlInfinito6(){
    double a, b, c, d;

    cout << "6. Lim (Ax + B)/(Cx + D)\n";
    cout << " x->inf\n\n";

    cout << "Ingrese el valor de A: ";
    cin >> a;

    cout << "Ingrese el valor de B: ";
    cin >> b;

    cout << "Ingrese el valor de C: ";
    cin >> c;

    cout << "Ingrese el valor de D: ";
    cin >> d;

    if (c == 0){
        cout << "Lim " << a << "x + " << b << " = Infinito\n";
        cout << " x->inf\n\n";
    } else
    {
        cout << "Lim (" << a << "x + " << b << ")/(" << c << "x + " << d << ") = " << a/c << "\n";
        cout << " x->inf\n\n";
    }
}

void limitesAlInfinito7(){
    double a, b;

    cout << "7. Lim Ax^2/Bx^2\n";
    cout << " x->inf\n\n";

    cout << "Ingrese el valor de A: ";
    cin >> a;

    cout << "Ingrese el valor de B: ";
    cin >> b;

    cout << "Lim " << a << "x^2/" << b << "x^2 = \n";
    cout << " x->inf\n\n";

    cout << "Lim " << a << "/" << b << " = " << a << "/" << b << "\n";
    cout << " x->inf\n\n";
}




   // Fin de limitesAlInfinito6