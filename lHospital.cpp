#include <iostream>

using namespace std;
void menuReglaHospital();
void ejercicio1();
void ejercicio2();
void ejercicio3();
void ejercicio4();

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}

void menuReglaHospital(){
    int opcion;
    do
    {
        cout << "Regla de L'Hospital" << endl << endl;

        cout << "              x" << endl;
        cout << "1. Lim ---------------" << endl;
        cout << "   x->inf  (In x)^3 + Ax" << endl << endl;

        cout << "            A - Bx^2" << endl;
        cout << "2. Lim ---------------" << endl;
        cout << "   x->inf  Sen(pi Cx)" << endl << endl;

        cout << "        Ax^2 + bx "<< endl;
        cout << "3. Lim ------------------" << endl;
        cout << "x->inf  e^x + c" << endl << endl;

        cout << "     x^2 + Ax + B "<< endl;
        cout << "4. Lim ------------------" << endl;
        cout << "x->-2  -x - C" << endl << endl;

        cout << "5. Salir" << endl << endl;

        cout << "Ingrese una opcion: "; cin >> opcion;

        switch (opcion)
        {
            case 1:
                ejercicio1();
                break;
            case 2:
                ejercicio2();
                break;
            case 3:
                ejercicio3();
                break;
            case 4:
                ejercicio4();
                break;
            case 5:
                return;
            default:
                cout << "Opcion no valida" << endl;
                break;
        }

    } while (opcion != 7);    
}

void ejercicio1(){
    int a,b;

    cout << "             " << a << endl;
    cout << "1. Lim ---------------" << endl;
    cout << "   x->inf  (In x)^3 + " << a << "x" << endl << endl;

    cout << "Ingrese el valor de A: "; cin >> a;
    cout << "Ingrese el valor de B: "; cin >> b;

    cout << "             " << a << endl;
    cout << "1. Lim ---------------" << endl;
    cout << "   x->inf  (In x)^3 + " << b << "x" << endl << endl;

    cout << "Resultado del ejercicio: "<< endl;
    cout << "             " << a << "x                       " << a << "            " << a << endl;
    cout << "1. Lim -------------------------- = lim -------------------------- = ---" << endl;
    cout << "   x->inf  (In x)^3 + " << b << "x   x->inf   3(In " << b << "x)^2        " << b <<endl;
    cout << "                                             ---------------------- +" << b << endl;
    cout << "                                                     " << b << "x" << endl;
}

void ejercicio2(){
    int a,b,c;
    cout << "             A - Bx^2" << endl;
    cout << "2. Lim ---------------" << endl;
    cout << "   x->inf  Sen(pi Cx)" << endl << endl;

    cout << "Ingrese el valor de A: "; cin >> a;
    cout << "Ingrese el valor de B: "; cin >> b;

    cout << "           "<< a << " - " << b << "x^2" << endl;
    cout << " Lim ---------------" << endl;
    cout << "  x->inf  Sen(pi " << c << "x)" << endl << endl;

    cout << "          " << b * 2 << "x" << endl;
    cout << " Lim -------------------------" << endl;
    cout << "  x->inf  Cos(pi " << c << "x)" << endl << endl;

    cout << "Resultado del ejercicio: "<< endl;
    cout << "     " << b * 2 << endl;
    cout << " ----------------" << endl;
    cout << "       pi " <<endl;
}

void ejercicio3(){
    int a,b,c;

    cout << "        Ax^2 + bx "<< endl;
    cout << "Lim ------------------" << endl;
    cout << "x->inf  e^x + c" << endl << endl;

    cout << "Ingrese el valor de A: "; cin >> a;
    cout << "Ingrese el valor de B: "; cin >> b;
    cout << "Ingrese el valor de C: "; cin >> c;

    cout << "      " << a << "x^2 + " << b << "x "<< endl;
    cout << "Lim ------------------" << endl;
    cout << "x->inf  e^x + " << c << endl << endl;

    cout << "      " << a * 2 << "x + " << b << endl;
    cout << "Lim ------------------" << endl;
    cout << "x->inf  e^x" << endl << endl;

    cout << "      " << a * 2 << endl;
    cout << "Lim ------------------" << endl;
    cout << "x->inf  e^x" << endl << endl;

    cout << "Resultado del ejercicio: "<< endl;
    cout << "   " << a * 2 << endl;
    cout << "------------------ =   0" << endl;
    cout << "      inf" << endl << endl;
}

void ejercicio4(){
    int a,b,c;

    cout << "     x^2 + Ax + B "<< endl;
    cout << "Lim ------------------" << endl;
    cout << "x->-2  -x - C" << endl << endl;

    cout << "Ingrese el valor de A: "; cin >> a;
    cout << "Ingrese el valor de B: "; cin >> b;
    cout << "Ingrese el valor de C: "; cin >> c;

    cout << "      x^2 + " << a << "x + " << b << endl;
    cout << "Lim ------------------" << endl;
    cout << "x->  -x - " << c << endl << endl;

    cout << "      2x + " << a << endl;
    cout << "Lim ------------------" << endl;
    cout << "x->inf  -1" << endl << endl;
}