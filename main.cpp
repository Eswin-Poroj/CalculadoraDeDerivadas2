#include <iostream>
#include <iomanip>
#include <cmath>
#include <locale.h>
#include <windows.h>
using namespace std;

//Menú General de la Calculadora
void menuGeneral();
//Limites Trigonometricos
void menuLimitesTrigonometricos();
void seno1();
void seno2();
void seno3();
void seno4();
void seno5();
void tan1();
void cos1();
void cos2();
// Limites Al Infinito
void menuLimitesAlInfinito();
void limitesAlInfinito1();
void limitesAlInfinito2();
void limitesAlInfinito3();
void limitesAlInfinito4();
void limitesAlInfinito5();
void limitesAlInfinito6();
void limitesAlInfinito7();
// Limites con La Formula
void menuDerivadaConLaFormula();
void derivadaConLaFormula1();
void derivadaConLaFormula2();
void derivadaConLaFormula3();
void derivadaConLaFormula4();
void derivadaConLaFormula5();
void derivadaConLaFormula6();

// Derivadas de funciones exponenciales, logaritmicas, hiperbolicas e hiperbolicas inversas
void menuDerivadasInversasExponencialesLogaritmicasHiperbolicas();
void menuFuncionesHipervolicasInversas();
void hiperbolicasInversas1();
void hiperbolicasInversas2();
void hipervolicasInversas3();
void hiperbolicasInversas4();
void hiperbolicasInversas5();
void hiperbolicasInversas6();

// derivadas de funciones inversas
void menuFuncionesExponenciales();
// derivadas de funciones exponenciales
void exponenciales1();
void exponenciales2();
void exponenciales3();
void exponenciales4();
void exponenciales5();

void menuFuncionesLogaritmicas();
// derivadas de funciones logaritmicas
void logaritmicas1();
void logaritmicas2();
void logaritmicas3();
void logaritmicas4();
void logaritmicas5();

void menuFuncionesHiperbolicas();
// derivadas de funciones hiperbolicas
void hiperbolicas1();
void hiperbolicas2();
void hiperbolicas3();
void hiperbolicas4();
void hiperbolicas5();
void hiperbolicas6();

void menuReglaHospital();
void ejercicio1();
void ejercicio2();
void ejercicio3();
void ejercicio4();



int main(){
    menuGeneral();
}

void menuGeneral(){
    setlocale(LC_ALL, "");
    system("cls");
    int opcion;
    do
    {
        cout << "Calculadora de Derivadas \n";
        cout << "1. Limites Trigonometricos \n2. Limites Al Infinito \n3. Derivada Con La Formula (Los 4 pasos)\n4. Derivadas (Exponenciales, Logaritmicas, Hiperbolicas, Hiperbolicas Inversas) \n5. Regla de L'Hospital \n6. Salir\n";
        cout << "Seleccione una opccion:"; cin >> opcion;
        switch (opcion)
        {
        case 1:
            menuLimitesTrigonometricos();
            break;
        case 2:
            menuLimitesAlInfinito();
            break;
        case 3:
            menuDerivadaConLaFormula();
            break;
        case 4:
            menuDerivadasInversasExponencialesLogaritmicasHiperbolicas();
            break;
        case 5: 
            menuReglaHospital();
            break;
        case 6:
            cout << "GRACIAS POR SU PREFERENCIA";
            return;
        default:
            cout << "Seleccione una opcion correcta";
            break;
        }
    } while (opcion != 6);
    
}

void menuLimitesTrigonometricos(){
    system("cls");
    setlocale(LC_ALL, "");
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


        cout << "Ingrese una opccion:";
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
                cout << "Seleccione una opccion correcta" << endl;
            break;
        }
    } while (opcion != 9);
}

void seno1(){
    system("cls");
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
    system("pause");
}

void seno2(){
    system("cls");
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
    system("pause");
}

void seno3(){
    system("cls");
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
    system("pause");
}

void seno4(){
    system("cls");
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
    system("pause");
}

void seno5(){
    system("cls");
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
    system("pause");
}

void tan1(){
    system("cls");
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
    system("pause");
}

void cos1(){
    system("cls");
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
    system("pause");
}

void cos2(){
    system("cls");
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
    system("pause");
}

void menuLimitesAlInfinito(){
    system("cls");
    setlocale(LC_ALL, "");
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
    system("cls");
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
    system("pause");
}

void limitesAlInfinito2(){
    system("cls");
    double a;

    cout << "2. Lim A/x\n";
    cout << " x->inf\n\n";

    cout << "Ingrese el valor de x: ";
    cin >> a;

    cout << "Lim " << a << "/x = 0\n";
    cout << " x->inf\n\n";
    system("pause");
}

void limitesAlInfinito3(){
    system("cls");
    double a;

    cout << "3. Lim x/A\n";
    cout << " x->inf\n\n";

    cout << "Ingrese el valor de x: ";
    cin >> a;

    cout << "Lim x/" << a << " = Infinito\n";
    cout << " x->inf\n\n";
    system("pause");
}

void limitesAlInfinito4(){
    system("cls");
    double a;

    cout << "4. Lim x^2 - Ax\n";
    cout << " x->inf\n\n";

    cout << "Ingrese el valor de A: ";
    cin >> a;

    cout << "Lim x^2 - " << a << "x = Infinito\n";
    cout << " x->inf\n\n";
    system("pause");
}

void limitesAlInfinito5(){
    system("cls");
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
    system("pause");
}

void limitesAlInfinito6(){
    system("cls");
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
    system("pause");
}

void limitesAlInfinito7(){
    system("cls");
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
    system("pause");
}

void menuDerivadaConLaFormula(){
    int opcion;
    do{
        cout << "Menu de derivada con la formula\n";
        cout << "1. f(x) = x^3 + Ax\n";
        cout << "2. f(x) = A/x\n";
        cout << "3. f(x) = Ax + B\n";
        cout << "4. f(x) = Ax^2 - Bx + C\n";
        cout << "5. f(x) = ax^3 - bx^2 + cx - d\n";
        cout << "6. f(x) = sqrt(a - bx)\n";
        cout << "7. Salir\n";

        cin >> opcion;
        switch(opcion){
            case 1:
                derivadaConLaFormula1();
                break;
            case 2:
                derivadaConLaFormula2();
                break;
            case 3:
                derivadaConLaFormula3();
                break;
            case 4:
                derivadaConLaFormula4();
                break;
            case 5:
                derivadaConLaFormula5();
                break;
            case 6:
                derivadaConLaFormula6();
                break;
            case 7:
                cout << "Saliendo...\n";
                break;
        }
    }while(opcion != 7);
}

void derivadaConLaFormula1(){
    system("cls");
    int n;
    cout << "f(x) = x^3 + Ax\n";
    cout << "Ingrese el valor de A: ";
    cin >> n;

    cout << "Funcion Ingresada: \n";
    cout << "f'(x) = 3x^2 + " << n << endl;

    cout << "      (x^3 + 3x^2h + 3xh^2 + h^3) + " << n << "x + " << n << "h - x^3 - " << n << "x / h\n";
    cout << "Lim  -----------------------------\n";
    cout << "   h->0\n\n";

    cout << "La derivada de x^3 + " << n << "x es 3x^2 + " << n << endl;
    system("pause");
}

void derivadaConLaFormula2(){
    system("cls");
    int n;
    cout << "f(x) = A/x\n";
    cout << "Ingrese el valor de A: ";
    cin >> n;

    cout << "Funcion Ingresada: \n";
    cout << "f'(x) = " << n << "/x^2" << endl;

    cout << "Lim ("<<n<<"/(x+h) - "<<n<<"/x) / h\n";
    cout << "-----------------------------\n";
    cout << "h->0\n\n";

    cout << "La derivada de A/x es -" << n << "/x^2" << endl;
    system("pause");
}

void derivadaConLaFormula3(){
    system("cls");
    int a, b;
    cout << "f(x) = Ax + B\n";
    cout << "Ingrese el valor de A: ";
    cin >> a;
    cout << "Ingrese el valor de B: ";
    cin >> b;

    cout << "Funcion Ingresada: \n";
    cout << "f'(x) = " << a << "x + " << b << endl;

    cout << "     ("<<a<<"(x+h) + "<<b<<" - "<<a<<"x - "<<b<<") \n";
    cout << "Lim  -----------------------------------\n";
    cout << "  h->0              h\n\n";

    cout << "    ("<<a<<"x + "<<a<<"h + "<<b<<" - "<<a<<"x - "<<b<<") \n";
    cout << " Lim -----------------------------------\n";
    cout << "  h->0              h\n\n";

    cout << "La derivada de Ax + B es " << a << endl;
    system("pause");
}

void derivadaConLaFormula4(){
    system("cls");
    int a, b, c;
    cout << "f(x) = Ax^2 - Bx + C\n";
    cout << "Ingrese el valor de A: ";
    cin >> a;
    cout << "Ingrese el valor de B: ";
    cin >> b;
    cout << "Ingrese el valor de C: ";
    cin >> c;

    cout << "Funcion Ingresada: \n";
    cout << "f'(x) = " << a << "x^2 - " << b << "x + " << c << endl;

    cout << "     ("<<a<<"(x+h)^2 - "<<b<<"(x+h) + "<<c<<") - "<<a<<"x^2 + "<<b<<"x - "<<c<<" \n";
    cout << "Lim  -------------------------------------------------------------\n";
    cout << "   h->0                             h\n\n";

    cout << "    ("<<a<<"x^2 + "<<2*a<<"xh + "<<a<<"h^2 - "<<b<<"x - "<<b<<"h + "<<c<<" - "<<a<<"x^2 + "<<b<<"x - "<<c<<") \n";
    cout << " Lim -------------------------------------------------------------\n";
    cout << "  h->0                             h\n\n";

    cout << "    ("<<2*a<<"xh + "<<a<<"h^2 - "<<b<<"h) \n";
    cout << " Lim -----------------------------------\n";
    cout << "  h->0              h\n\n";

    cout << "La derivada de Ax^2 - Bx + C es " << 2*a << "x - " << b << endl;
    system("pause");
}

void derivadaConLaFormula5(){
    int a, b, c, d;
    cout << "f(x) = ax^3 - bx^2 + cx - d\n";
    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de b: ";
    cin >> b;
    cout << "Ingrese el valor de c: ";
    cin >> c;
    cout << "Ingrese el valor de d: ";
    cin >> d;

    cout << "Funcion Ingresada: \n";
    cout << a << "^3 - " << b << "x^2 + " << c << "x - " << d << endl;
    cout << "Funcion Derivada: \n";
    cout << "f'(x) = " << 3*a << "x^2 - " << 2*b << "x + " << c << endl;

    cout << "     ("<<a<<"(x+h)^3 - "<<b<<"(x+h)^2 + "<<c<<"(x+h) - "<<d<<") - "<<a<<"x^3 + "<<b<<"x^2 - "<<c<<"x + "<<d<<" \n";
    cout << "Lim  -------------------------------------------------------------\n";
    cout << "   h->0                             h\n\n";

    cout << "    ("<<a<<"x^3 + "<<3*a<<"x^2h + "<<3*a<<"xh^2 + "<<a<<"h^3 - "<<b<<"x^2 - "<<2*b<<"xh - "<<b<<"h^2 + "<<c<<"x + "<<c<<"h - "<<d<<" - "<<a<<"x^3 + "<<b<<"x^2 - "<<c<<"x + "<<d<<") \n";
    cout << " Lim -------------------------------------------------------------\n";
    cout << "  h->0                             h\n\n";

    cout << "    ("<<3*a<<"x^2h + "<<3*a<<"xh^2 + "<<a<<"h^3 - "<<2*b<<"xh - "<<b<<"h^2 + "<<c<<"h) \n";
    cout << " Lim -----------------------------------\n";
    cout << "  h->0              h\n\n";

    cout << "La derivada de ax^3 - bx^2 + cx - d es " << 3*a << "x^2 - " << 2*b << "x + " << c << endl;
}

void derivadaConLaFormula6(){
    int a, b;
    cout << "f(x) = sqrt(a - bx)\n";
    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de b: ";
    cin >> b;

    cout << "Funcion Ingresada: \n";
    cout << "f(x) = sqrt(" << a << " - " << b << "x)\n";
    cout << "Funcion Derivada: \n";
    cout << "f'(x) = -" << b << "/2sqrt(" << a << " - " << b << "x)" << endl;

    cout << "Lim (sqrt("<<a<<" - "<<b<<"(x+h)) - sqrt("<<a<<" - "<<b<<"x)) / h\n";
    cout << "-------------------------------------------------------------\n";
    cout << "                        h\n\n";

    cout << "La derivada de sqrt(a - bx) es -" << b << "/2sqrt(" << a << " - " << b << "x)" << endl;
}


void menuDerivadasInversasExponencialesLogaritmicasHiperbolicas(){
    system("cls");
    int opcion;

    do
    {
        cout << "1. Derivada de la función exponencial" << endl;
        cout << "2. Derivada de la función logarítmica" << endl;
        cout << "3. Derivada de la función hiperbólica" << endl;
        cout << "4. Derivada de la función hiperbolica inversa" << endl;
        cout << "5. Salir" << endl;
        cout << "Ingrese una opción: ";
        cin >> opcion;
        switch(opcion){
            case 1:
                menuFuncionesExponenciales();
                break;
            case 2:
                menuFuncionesLogaritmicas();
                break;
            case 3:
                menuFuncionesHiperbolicas();
                break;
            case 4:
                menuFuncionesHipervolicasInversas();
                break;
            case 5:
                return;
            default:
                cout << "Opción no válida" << endl;
                break;
        }
    } while (opcion != 5);
    
}

void menuFuncionesHipervolicasInversas(){
    system("cls");
    int opcion;
    do
    {
        cout << "1. f(x) = Senh^-1 4x" << endl;
        cout << "2. f(x) = Cosh^-1 (x^2 + 3)" << endl;
        cout << "3. f(x) = tanh^-1 5x^3" << endl;
        cout << "4. f(x) = coth^-1 x" << endl;
        cout << "5. f(x) = Sech^-1 (-x^2)" << endl;
        cout << "6. f(x) = Csch^-1 (x - 4)" << endl;
        cout << "7. Salir" << endl;
        cout << "Ingrese una opción: ";
        cin >> opcion;

        switch(opcion){
            case 1:
                hiperbolicasInversas1();
                break;
            case 2:
                hiperbolicasInversas2();
                break;
            case 3:
                hipervolicasInversas3();
                break;
            case 4:
                hiperbolicasInversas4();
                break;
            case 5:
                hiperbolicasInversas5();
                break;
            case 6:
                hiperbolicasInversas6();
                break;
            case 7:
                return;
            default:
                cout << "Opción no válida" << endl;
                break;
        }
    } while (opcion != 7);
    
}

void hiperbolicasInversas1(){
    system("cls");
    int a;
    cout << "f(x) = Senh^-1 Ax \n";
    cout << "Ingrese el valor de A: "; cin >> a;
    cout << "f(x) = Senh^-1 " << a <<"x \n";
    cout << "f'(x) = " << a << "x / sqrt(" << a*a << "x^2 + 1)\n";
    system("pause");
}

void hiperbolicasInversas2(){
    system("cls");
    int a;
    cout << "f(x) = Cosh^-1 (x^2 + A) \n";
    cout << "Ingrese el valor de A: "; cin >> a;
    cout << "f(x) = Cosh^-1 (x^2 + " << a <<" \n";
    cout << "f'(x) = " << a << "x / sqrt(" << a*a << "x^2 - 1)\n";
    system("pause");
}

void hipervolicasInversas3(){
    system("cls");
    int a,b;
    cout << "f(x) = tanh^-1 Ax^B \n";
    cout << "Ingrese el valor de A: "; cin >> a;
    cout << "Ingrese el valor de B: "; cin >> b;
    cout << "f(x) = tanh^-1 " << a <<"x^" << b << " \n";
    cout << "f'(x) = " << a*b << "^" << b-1 << " / (1 - " << a*a << "x^" << b * b << ")\n";
    system("pause");
}

void hiperbolicasInversas4(){
    system("cls");
    int a;
    cout << "f(x) = coth^-1 Ax \n";
    cout << "Ingrese el valor de A: "; cin >> a;
    cout << "f(x) = coth^-1 " << a <<"x \n";
    cout << "f'(x) = " << a << "x / sqrt(" << a*a << "x^2)\n";
    system("pause");
}

void hiperbolicasInversas5(){
    system("cls");
    int a,b;
    cout << "f(x) = Sech^-1 (-Ax^B) \n";
    cout << "Ingrese el valor de A: "; cin >> a;
    cout << "Ingrese el valor de B: "; cin >> b;
    cout << "f(x) = Sech^-1 " << a <<"x^" << b << " \n";
    cout << "f'(x) = -(-" << a*b << "x^" << b-1 << ") / " << a << "x^" << b << " sqrt( 1 - " << a*a << "x^" << b << ")\n";
    system("pause");
}

void hiperbolicasInversas6(){
    system("cls");
    int a,b;
    cout << "f(x) = Csch^-1 (Ax - B) \n";
    cout << "Ingrese el valor de A: "; cin >> a;
    cout << "Ingrese el valor de B: "; cin >> b;
    cout << "f(x) = Csch^-1 " << a <<"x - " << b << " \n";
    cout << "f'(x) = " << a << " / |" << a << "x - " << b << "| sqrt(" << a*a << "x^2 - " << b * 2 << "x + " << b*b << ")\n";
    system("cls");
}

void menuFuncionesExponenciales(){
    system("cls");
    int opcion;
    do
    {
        cout << "1. f(x) = A^b\n";
        cout << "2. f(x) = A^bx\n";
        cout << "3. f(x) = A^bx^c+d\n";
        cout << "4. f(x) = A*B^xc+d\n";
        cout << "5. f(x) = A^sqrt(x)\n";
        cout << "6. Salir\n";
        cout << "Ingrese una opción: ";
        cin >> opcion;

        switch(opcion){
            case 1:
                exponenciales1();
                break;
            case 2:
                exponenciales2();
                break;
            case 3:
                exponenciales3();
                break;
            case 4:
                exponenciales4();
                break;
            case 5:
                exponenciales5();
                break;
            case 6:
                return;
            default:
                cout << "Opción no válida" << endl;
                break;
        }
    } while (opcion != 6);
    
}

void exponenciales1(){
    system("cls");
    double A, u;
    cout << "Ingrese el valor de A: ";
    cin >> A;
    cout << "Ingrese el valor de u: ";
    cin >> u;
    cout << "La derivada ingresada es: " << A << "^" << u << endl;

    cout << " = " << A << "^" << u << " * ln(" << A << ")" << " * " << u << "'\n";
    system("pause");
}

void exponenciales2(){
    system("cls");
    double A, u;
    cout << "Ingrese el valor de A: ";
    cin >> A;
    cout << "Ingrese el valor de u: ";
    cin >> u;
    cout << "La derivada ingresada es: " << A << "^" << u << "x\n";
    cout << "a = " << A << "\n";
    cout << "u = " << u << "x\n";
    cout << "u' = " << u << "\n\n";

    cout << " = " << u << " * " << A << "^" << u << "x * ln(" << A << ")'\n";
    system("pause");
}

void exponenciales3(){
    system("cls");
    double A, B, u,d;
    cout << "Ingrese el valor de A: "; cin >> A;
    cout << "Ingrese el valor de B: "; cin >> B;
    cout << "Ingrese el valor de u: "; cin >> u;
    cout << "Ingrese el valor de d: "; cin >> d;
    cout << "La derivada ingresada es: " << A << "^" << B << "x^" << u << "+" << d << endl;
    cout << "a = " << A << "\n";
    cout << "u = " << B << "x^" << u << "+" << d << "\n";
    if (u == 1){
        cout << "u' = " << u * B << "\n\n";

        cout << " = " << B << " * " << A << "^" << B << "x^" << u << " * ln(" << A << ")'\n";
        cout << "f(x) = " << A << "^" << B << "x^" << u << "+" << d << " * ln(" << A << ")'\n";
    } else {
        cout << "u' = " << u * B << "x^" << u-1 << "\n\n";
        cout << "f(x) = " << A << "^" << B << "x^" << u << "+" << d << "x * ln(" << A << ")'\n";
    }
    system("pause");
}

void exponenciales4(){
    system("cls");
    int a, b, c, d, e;
    cout << "Ingrese el valor de A: "; cin >> a;
    cout << "Ingrese el valor de B: "; cin >> b;
    cout << "Ingrese el valor de C: "; cin >> c;
    cout << "Ingrese el valor de D: "; cin >> d;

    cout << "La derivada ingresada es: " << a << "*" << b << "^" << c << "x^" << d << " +" << e << endl;
    cout << "a = " << a << "\n";
    cout << "u = " << b << "x^" << c << "+" << d << "\n";
    
    if (c == 1)
    {
        cout << "u' = " << c * b << "\n\n";
        cout << "f(x) = " << c * b << " * " << b << "x^" << c << "+" << d << " * ln(" << b << ")'\n";
    } else {
        cout << "u' = " << c * b << "x^" << c-1 << "\n\n";
        cout << "f(x) = " << c * b << "x * " << b << "x^" << c << "+" << d << " * ln(" << b << ")'\n";
    }
    system("pause");
}

void exponenciales5(){
    system("cls");
    double A;
    cout << "Ingrese el valor de A: "; cin >> A;

    cout << "La derivada ingresada es: " << A << "^sqrt(x)\n\n";
    cout << " a = " << A << "\n";
    cout << " u = sqrt(x) = 1/2\n";
    cout << " u' = 1/2x^-1/2\n\n";

    cout << "f'(x) = " << A << "^sqrt(x) * ln(" << A << ") * 1/2sqrt(x)'\n";
    system("pause");
}

void menuFuncionesLogaritmicas(){
    system("cls");
    int opcion;
    do
    {
        cout << "1. y = In(Ax)" << endl;
        cout << "2. y = In(Ax^2)" << endl;
        cout << "3. y = In(ax^b + cx^d)^e" << endl;
        cout << "4. f(x) = logA(Ax^2)" << endl;
        cout << "5. f(x) = logA(bx^c + dx^e - fx + g)" << endl;
        cout << "6. Salir" << endl;
        cout << "Ingrese una opción: ";
        cin >> opcion;

        switch(opcion){
            case 1:
                logaritmicas1();
                break;
            case 2:
                logaritmicas2();
                break;
            case 3:
                logaritmicas3();
                break;
            case 4:
                logaritmicas4();
                break;
            case 5:
                logaritmicas5();
                break;
            case 6:
                return;
            default:
                cout << "Opción no válida" << endl;
                break;
        }
    } while (opcion != 6);
    
}

void logaritmicas1(){
    system("cls");
    int a;
    cout << "Ingrese el valor de A: "; cin >> a;

    cout << "La derivada ingresada es: ln(" << a << "x)\n\n";
    cout << " = " << a << "/" << a << "x\n";
    cout << " = " << a/a << "\n";
    system("pause");
}

void logaritmicas2(){
    system("cls");
    int a;
    cout << "Ingrese el valor de A: "; cin >> a;

    cout << "La derivada ingresada es: ln(" << a << "x^2)\n\n";
    cout << a*2 << "/" << a << "x^2\n";
    cout << (a*2)/a << "/x\n";
    system("pause");
}

void logaritmicas3(){
    system("cls");
    int a, b, c, d, e;
    cout << "Ingrese el valor de A: "; cin >> a;
    cout << "Ingrese el valor de B: "; cin >> b;
    cout << "Ingrese el valor de C: "; cin >> c;
    cout << "Ingrese el valor de D: "; cin >> d;
    cout << "Ingrese el valor de E: "; cin >> e;

    cout << "La derivada ingresada es: ln(" << a << "x^" << b << "+" << c << "x^" << d << ")^" << e << "\n\n";

    cout << "   " << e << " * (" << a << "x^" << b << "+" << c << "x^" << d << ")^" << e-1 << " * (" << a << "x^" << b << "+" << c << "x^" << d << ")'\n";
    cout << " = -------------------------------------------------\n";
    cout << "       (" << a << "x^" << b << "+" << c << "x^" << d << ")^" << e << "\n\n";

    cout << "   " << e * a << "x^" << b << "+" << e * c << "\n";
    cout << " = ----------------------------\n";
    cout << "      x(" << a << "x^" << b << "+" << c << ") \n";
    system("pause");
}

void logaritmicas4(){
    system("cls");
    int a, b;
    cout << "Ingrese el valor de A: "; cin >> a;
    cout << "Ingrese el valor de B: "; cin >> b;

    cout << "La derivada ingresada es: log" << a << "(" << a << "x^" << b << ")\n\n";
    cout << " =          " << (a*b)/a << "\n";
    cout << "   ------------------\n";
    cout << "      x * In(10)\n";
    system("pause");
}

void logaritmicas5(){
    system("cls");
    int a, b, c, d, e, f, g;
    cout << "Ingrese el valor de la Logaritmica: "; cin >> a;
    cout << "Ingrese el valor de B: "; cin >> b;
    cout << "Ingrese el valor de C: "; cin >> c;
    cout << "Ingrese el valor de D: "; cin >> d;
    cout << "Ingrese el valor de E: "; cin >> e;
    cout << "Ingrese el valor de F: "; cin >> f;
    cout << "Ingrese el valor de G: "; cin >> g;

    cout << "La derivada ingresada es: log" << a << "(" << b << "x^" << c << "+" << d << "x^" << e << "-" << f << "x+" << g << ")\n\n";

    if (((c-1)/c) == 0)
    {
        cout << " = " << (b*c)/c << "\n";
        cout << "   ------------------\n";
        cout << "      x * In(" << a <<")\n";
    } else {
        cout << " =         " << (b*c)/c << "x^" << (c-1)/c << "\n";
        cout << "   ------------------\n";
        cout << "      x * In(" << a <<")\n";
    }
    system("pause");
}

void menuFuncionesHiperbolicas(){
    system("cls");
    int opcion;
    do
    {
        cout << "1. f(x) = Senh(Ax^C - D)" << endl;
        cout << "2. f(x) = Cosh(Ax^B + Cx^D)" << endl;
        cout << "3. f(x) = tanh X" << endl;
        cout << "4. f(x) = coth(Ax^B + Cx^D)" << endl;
        cout << "5. f(x) = Sech Ax^B" << endl;
        cout << "6. f(x) = Csch Ax^B" << endl;
        cout << "7. Salir" << endl;
        cout << "Ingrese una opción: ";
        cin >> opcion;

        switch(opcion){
            case 1:
                hiperbolicas1();
                break;
            case 2:
                hiperbolicas2();
                break;
            case 3:
                hiperbolicas3();
                break;
            case 4:
                hiperbolicas4();
                break;
            case 5:
                hiperbolicas5();
                break;
            case 6:
                hiperbolicas6();
                break;
            case 7:
                return;
            default:
                cout << "Opción no válida" << endl;
                break;
        }
    } while (opcion != 7);
    
}

void hiperbolicas1(){
    system("cls");
    int a, b, c;
    cout << "Ingrese el valor de A: "; cin >> a;
    cout << "Ingrese el valor de B: "; cin >> b;
    cout << "Ingrese el valor de C: "; cin >> c;

    cout << "La derivada ingresada es: Sinh(" << a << "x^" << b << "-" << c << ")\n\n";
    cout << "f'(x) = [Cosh(" << a << "x^" << b << "-" << c << ")] - (" << a*b << "x^" << b-1 << ")\n";
    system("pause");
}

void hiperbolicas2(){
    system("cls");
    int a, b, c, d;
    cout << "Ingrese el valor de A: "; cin >> a;
    cout << "Ingrese el valor de B: "; cin >> b;
    cout << "Ingrese el valor de C: "; cin >> c;
    cout << "Ingrese el valor de D: "; cin >> d;

    cout << "La derivada ingresada es: Cosh(" << a << "x^" << b << "+" << c << "x^" << d << ")\n\n";
    cout << "f'(x) = [Sinh(" << a << "x^" << b << "+" << c << "x^" << d << ")] - (" << a*b << "x^" << b-1 << "+" << c*d << "x^" << d-1 << ")\n";
    system("pause");
}

void hiperbolicas3(){
    system("cls");
    cout << "La derivada ingresada es: tanh x\n\n";
    cout << "f'(x) = [Sech^2 x] * (1)\n";
    cout << "f'(x) = Sech^2 x\n";
    system("pause");
}

void hiperbolicas4(){
    system("cls");
    int a, b, c, d;
    cout << "Ingrese el valor de A: "; cin >> a;
    cout << "Ingrese el valor de B: "; cin >> b;
    cout << "Ingrese el valor de C: "; cin >> c;
    cout << "Ingrese el valor de D: "; cin >> d;

    cout << "La derivada ingresada es: Coth(" << a << "x^" << b << "+" << c << "x^" << d << ")\n\n";
    cout << "f'(x) = [ -Csch^2(" << a << "x^" << b << "+" << c << "x^" << d << ")] - (" << a*b << "x^" << b-1 << "+" << c*d << "x^" << d-1 << ")\n";
    system("pause");
}

void hiperbolicas5(){
    system("cls");
    int a, b;
    cout << "Ingrese el valor de A: "; cin >> a;
    cout << "Ingrese el valor de B: "; cin >> b;

    cout << "La derivada ingresada es: Sech(" << a << "x^" << b << ")\n\n";
    cout << "f'(x) = [ -Sech(" << a << "x^" << b << ") * Tanh(" << a << "x^" << b << ")] - (" << a*b << "x^" << b-1 << ")\n";
    cout << "f'(x) = " << a*b << "x^" << b-1 << " * (Sech" << a << "x^" << b << " * Tanh" << a << "x^" << b << ")\n";
    system("pause");
}

void hiperbolicas6(){
    system("cls");
    int a, b;
    cout << "Ingrese el valor de A: "; cin >> a;
    cout << "Ingrese el valor de B: "; cin >> b;

    cout << "La derivada ingresada es: Csch("<< a << "x^" << b << ")\n\n";

    cout << "f'(x) = [ -Csch(" << a << "x^" << b << ") * Coth(" << a << "x^" << b << ")] - (" << a*b << "x^" << b-1 << ")\n";
    cout << "f'(x) = " << a*b << "x^" << b-1 << " * (Csch" << a << "x^" << b << " * Coth" << a << "x^" << b << ")\n";
    system("pause");
}

void menuReglaHospital(){
    system("cls");
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
        cout << "   x->inf  e^x + c" << endl << endl;

        cout << "     x^2 + Ax + B "<< endl;
        cout << "4. Lim ------------------" << endl;
        cout << "   x->-2  -x - C" << endl << endl;

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
    system("cls");
    int a,b;

    cout << "              A"<<endl;
    cout << "Lim ---------------" << endl;
    cout << "  x->inf  (In x)^3 + Bx" << endl << endl;

    cout << "Ingrese el valor de A: "; cin >> a;
    cout << "Ingrese el valor de B: "; cin >> b;

    cout << "           " << a << endl;
    cout << " Lim ---------------" << endl;
    cout << " x->inf  (In x)^3 + " << b << "x" << endl << endl;

    cout << "Resultado del ejercicio: "<< endl;
    cout << "           " << a << "x                                        " << a << "                " << a << endl;
    cout << "Lim -------------------------- = lim ----------------------------- = ---" << endl;
    cout << " x->inf  (In x)^3 + " << b << "x           x->inf        3(In " << b << "x)^2             " << b <<endl;
    cout << "                                           ---------------------- + " << b << endl;
    cout << "                                                   " << b << "x" << endl;
    system("pause");
}

void ejercicio2(){
    system("cls");
    int a,b,c;
    cout << "           A - Bx^2" << endl;
    cout << " Lim ---------------" << endl;
    cout << " x->inf  Sen(pi Cx)" << endl << endl;

    cout << "Ingrese el valor de A: "; cin >> a;
    cout << "Ingrese el valor de B: "; cin >> b;

    cout << "             "<< a << " - " << b << "x^2" << endl;
    cout << " Lim ------------------" << endl;
    cout << "  x->inf    Sen(pi " << c << "x)" << endl << endl;

    cout << "            " << b * 2 << "x" << endl;
    cout << " Lim ----------------------------" << endl;
    cout << "  x->inf    Cos(pi " << c << "x)" << endl << endl;

    cout << "Resultado del ejercicio: "<< endl;
    cout << "        " << b * 2 << endl;
    cout << " ----------------" << endl;
    cout << "       pi " <<endl;
    system("pause");
}

void ejercicio3(){
    system("cls");
    int a,b,c;

    cout << "        Ax^2 + bx "<< endl;
    cout << "Lim ------------------" << endl;
    cout << "x->inf  e^x + c" << endl << endl;

    cout << "Ingrese el valor de A: "; cin >> a;
    cout << "Ingrese el valor de B: "; cin >> b;
    cout << "Ingrese el valor de C: "; cin >> c;

    cout << "      " << a << "x^2 + " << b << "x "<< endl;
    cout << "Lim ------------------" << endl;
    cout << "x->inf   e^x + " << c << endl << endl;

    cout << "      " << a * 2 << "x + " << b << endl;
    cout << "Lim ------------------" << endl;
    cout << "x->inf  e^x" << endl << endl;

    cout << "        " << a * 2 << endl;
    cout << "Lim ------------------" << endl;
    cout << "x->inf  e^x" << endl << endl;

    cout << "Resultado del ejercicio: "<< endl;
    cout << "      " << a * 2 << endl;
    cout << "------------------ =   0" << endl;
    cout << "      inf" << endl << endl;
    system("pause");
}

void ejercicio4(){
    system("cls");
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
    system("pause");
}
