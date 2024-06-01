#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void menuLimitesTrigonometricos();
void seno1();
void seno2();
void seno3();
void seno4();
void seno5();
void tan1();
void cos1();
void cos2();

int main(){
    menuLimitesTrigonometricos();
    return 0;
}

void menuLimitesTrigonometricos(){
    int opcion;
    do {
        cout << "LIMITES TRIGONOMETRICOS" << endl;
        cout << "            Sen Kx" << endl;
        cout << "1. Lim  ---------------" << endl;
        cout << "      x->0     Kx" << endl << endl;

        cout << "            Sen Ax" << endl;
        cout << "2. Lim  ---------------" << endl;
        cout << "      x->0     x" << endl << endl;

        cout << "            Sen Ax" << endl;
        cout << "3. Lim  ---------------" << endl;
        cout << "      x->0     Bx" << endl << endl;

        cout << "             Sen^2 X" << endl;
        cout << "4. Lim  ---------------" << endl;
        cout << "      x->0     X" << endl << endl;

        cout << "         Sen Ax * Sen Bx" << endl;
        cout << "5. Lim  ---------------" << endl;
        cout << "      x->0     x^2" << endl << endl;

        cout << "          Tan Ax" << endl;
        cout << "6. Lim  ---------------" << endl;
        cout << "      x->0     x" << endl << endl;

        cout << "          Cos Ax" << endl;
        cout << "7. Lim  ---------------" << endl;
        cout << "      x->0     x" << endl << endl;

        cout << "          (1 - Cos Ax)" << endl;
        cout << "8. Lim  ---------------" << endl;
        cout << "      x->0      A x" << endl << endl;

        cout << "9. Salir" << endl;


        cout << "Ingrese una opcción:";
        cin >> opcion;

        switch (opcion) {
            case 1:
                seno1();
            break;
            
            case 2:
                seno2();
            break;

            case 3:
                seno3();
            break;

            case 4:
                seno4();
            break;

            case 5:
                seno5();
            break;

            case 6:
                tan1();
            break;

            case 7:
                cos1();
            break;

            case 8:
                cos2();
            break;

            case 9:
                cout << "Saliendo..." << endl;
                return;

            default:
                cout << "Seleccione una opcción correcta" << endl;
            break;
        }
    } while (opcion != 9);
}

void seno1(){
    int k;
    cout << "         Sen Kx" << endl;
    cout << "Lim  ---------------" << endl;
    cout << "  x->0     Kx" << endl << endl;

    cout << "Ingrese el valor de K: "; cin >> k;

    cout << "         Sen "<< k << "x" << endl;
    cout << "Lim  ---------------" << endl;
    cout << "  x->0     "<< k << "x" << endl << endl;

    cout << "         Sen "<< k << "x" << endl;
    cout << "Lim  ---------------  =  1" << endl;
    cout << "  x->0     "<< k << "x" << endl << endl;
}

void seno2(){
    int k;
    cout << "         Sen Kx" << endl;
    cout << "Lim  ---------------" << endl;
    cout << "  x->0     x" << endl << endl;

    cout << "Ingrese el valor de K: "; cin >> k;

    cout << "         Sen "<< k << "x" << endl;
    cout << "Lim  ---------------" << endl;
    cout << "  x->0       x" << endl << endl;

    cout << "        " << k <<"Sen "<< k << "x" << endl;
    cout << "Lim  ---------------" << endl;
    cout << "  x->0     "<< k << "x" << endl << endl;

    cout << "                 Sen "<< k << "x" << endl;
    cout << k <<" * Lim  ---------------" << endl;
    cout << "      x->0      "<< k << "x" << endl << endl;

    cout << k << " * " << 1 << " = " << k << endl;
}

void seno3(){
    int a, b, mod;

    cout << "         Sen Ax" << endl;
    cout << "Lim  ---------------" << endl;
    cout << "  x->0     Bx" << endl << endl;

    cout << "Ingrese el valor de A: " ; cin >> a;

    cout << "Ingrese el valor de B: "; cin >> b;

    if (a < b)
    {

        cout << "         Sen "<< a <<"x" << endl;
        cout << "Lim  ---------------" << endl;
        cout << "  x->0     " << b << "x" << endl << endl;

        cout << "      " << a <<  " * Sen "<< a <<"x" << endl;
        cout << "Lim  ---------------" << endl;
        cout << "  x->0     " << b << " * " << a << "x" << endl << endl;

        cout << "             " << a <<  " * Sen "<< a <<"x" << endl;
        cout << a << "/" << b << " * "<< "Lim  ---------------" << endl;
        cout << "              x->0     " << b << " * " << a << "x" << endl << endl;

        cout << a << "/" << b << " * 1 = " << a << "/" << b << endl << endl; 
    } else 
    {
        mod = a / b;
        cout << mod << endl;

        cout << "         Sen "<< a <<"x" << endl;
        cout << "Lim  ---------------" << endl;
        cout << "  x->0     " << b << "x" << endl << endl;

        cout << "      " << mod <<  " * Sen "<< a <<"x" << endl;
        cout << "Lim  ---------------" << endl;
        cout << "  x->0     " << mod << " * " << a << "x" << endl << endl;

        cout << "               " << a <<  " * Sen "<< a <<"x" << endl;
        cout << mod << " * "<< "Lim  ---------------" << endl;
        cout << "              x->0     " << mod * b << "x" << endl << endl;

        cout << mod << " * 1 = " << mod << endl << endl;
    }
}

void seno4(){
    int x = 1;

    cout << "             Sen^2 X" << endl;
    cout << "Lim  ---------------" << endl;
    cout << "  x->0     X" << endl << endl;

    cout << "Ingrese el valor de X: "; cin >> x;

    cout << "             Sen^2 " << x << endl;
    cout << "Lim  ---------------" << endl;
    cout << "  x->0     " << x << endl << endl;

    cout << "             Sen " << x << "  *     Sen " << x << endl;
    cout << "Lim  -------------     -----------" << endl;
    cout << "  x->0     " << x << endl << endl;

    cout << "          Sen " << x  << endl;
    cout << "Lim  --------------- *  Lim   Sen " << x << endl;
    cout << "  x->0     " << x << "             x->0" << endl << endl;

    float seno = sin(static_cast<float>(x));
    cout << " 1 * " << fixed << setprecision(2) << seno << " = " << fixed << setprecision(2) << 1 * seno << endl;
}

void seno5(){
    int a, b;

    cout << "         Sen Ax * Sen Bx" << endl;
    cout << "Lim  ---------------" << endl;
    cout << "  x->0     x^2" << endl << endl;

    cout << "Ingrese el valor de A: "; cin >> a;
    cout << "Ingrese el valor de B: "; cin >> b;

    cout << "      Sen " << a << "x * Sen " << b << "x" << endl;
    cout << "Lim  --------------------" << endl;
    cout << "  x->0     x^2" << endl << endl;

    cout << "         Sen " << a << "x           Sen " << b << "x" << endl;
    cout << "Lim  -------------  Lim  -----------" << endl;
    cout << "  x->0     x          x->0    x" << endl << endl;

    cout << "      " << a << "  Sen " << a << "x           " << b << " Sen " << b << "x" << endl;
    cout << "Lim  -------------  Lim  -----------" << endl;
    cout << "  x->0    " << a << "x          x->0    " << b << "x" << endl << endl;

    cout << "                Sen " << a << "x                     Sen " << b << "x" << endl;
    cout << a << " * Lim  ---------------  *  " << b << " * Lim  ---------------" << endl;
    cout << "      x->0     " << a << "x                  x->0     " << b << "x" << endl << endl;

    cout << " = "<< a << " * 1 * " << b << " * 1 = " << a * b << endl;
}

void tan1(){
    int x = 1;

    cout << "          Tan Ax" << endl;
    cout << "Lim  ---------------" << endl;
    cout << "  x->0     x" << endl << endl;

    cout << "Ingrese el valor de A: "; cin >> x;

    cout << "          Sen " << x  << "x" << endl;
    cout << "         ------" << endl;
    cout << "          Cos " << x << "x" << endl;
    cout << "Lim  ---------------" << endl;
    cout << "  x->0     " << x << endl;
    cout << "         ------" << endl;
    cout << "            1" << endl << endl;

    cout << "          Sen " << x << "x          1" << endl;
    cout << "Lim "<< x << " --------------- * Lim ------------" << endl;
    cout << "  x->0     " << x << "x           x->0     Cos" << x << "x" << endl << endl;

    cout << "            Sen " << x << "x          1" << endl;
    cout << x << "Lim  --------------- * Lim ------------" << endl;
    cout << "    x->0     " << x << "x           x->0     Cos" << x << "x" << endl << endl;  

    cout << x << " * 1 = " << x << endl;
}

void cos1(){
    int x = 1;

    cout << "          Cos Ax" << endl;
    cout << "Lim  ---------------" << endl;
    cout << "  x->0     x" << endl << endl;

    cout << "Ingrese el valor de A: "; cin >> x;

    cout << "          Cos " << x  << "x" << endl;
    cout << "         ------" << endl;
    cout << "          Sen " << x << "x" << endl;
    cout << "Lim  ---------------" << endl;
    cout << "  x->0     " << x << endl;
    cout << "         ------" << endl;
    cout << "            1" << endl << endl;

    cout << "          Cos " << x << "x          1" << endl;
    cout << "Lim "<< x << " --------------- * Lim ------------" << endl;
    cout << "  x->0     " << x << "x           x->0     Sen" << x << "x" << endl << endl;

    cout << "            Cos " << x << "x          1" << endl;
    cout << x << "Lim  --------------- * Lim ------------" << endl;
    cout << "    x->0     " << x << "x           x->0     Sen" << x << "x" << endl << endl;  

    cout << x << " * 1 = " << x << endl;
}

void cos2(){
    int a;

    cout << "          (1 - Cos Ax)" << endl;
    cout << "Lim  ---------------" << endl;
    cout << "  x->0      A x" << endl << endl;

    cout << "Ingrese el valor de A: "; cin >> a;

    cout << "          (1 - Cos " << a << "x)" << endl;
    cout << "Lim  ---------------" << endl;
    cout << "  x->0      " << a << "x" << endl << endl;

    cout << "            1 - Cos " << a << "x" << endl;
    cout << a << " * Lim  ---------------" << endl;
    cout << "    x->0      " << a << "x" << endl << endl;

    cout << a << " * 0 = 0" << endl;
}




