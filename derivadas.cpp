#include <iostream>
#include <cmath>
using namespace std;

void menuDerivadasInversasExponencialesLogaritmicasHiperbolicas();
void menuFuncionesHipervolicasInversas();
void hiperbolicasInversas1();
void hiperbolicasInversas2();
void hiperbolicasInversas3();
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

int main(){
    menuDerivadasInversasExponencialesLogaritmicasHiperbolicas();
    return 0;
}

void menuDerivadasInversasExponencialesLogaritmicasHiperbolicas(){
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

void hiperbolicasInversas1(){
    int a;
    cout << "f(x) = Senh^-1 Ax \n";
    cout << "Ingrese el valor de A: "; cin >> a;
    cout << "f(x) = Senh^-1 " << a <<"x \n";
    cout << "f'(x) = " << a << "x / sqrt(" << a*a << "x^2 + 1)\n";
}

void hiperbolicasInversas2(){
    int a;
    cout << "f(x) = Cosh^-1 (x^2 + A) \n";
    cout << "Ingrese el valor de A: "; cin >> a;
    cout << "f(x) = Cosh^-1 (x^2 + " << a <<" \n";
    cout << "f'(x) = " << a << "x / sqrt(" << a*a << "x^2 - 1)\n";
}

void hipervolicasInversas3(){
    int a,b;
    cout << "f(x) = tanh^-1 Ax^B \n";
    cout << "Ingrese el valor de A: "; cin >> a;
    cout << "Ingrese el valor de B: "; cin >> b;
    cout << "f(x) = tanh^-1 " << a <<"x^" << b << " \n";
    cout << "f'(x) = " << a*b << "^" << b-1 << " / (1 - " << a*a << "x^" << b * b << ")\n";
}

void hiperbolicasInversas4(){
    int a;
    cout << "f(x) = coth^-1 Ax \n";
    cout << "Ingrese el valor de A: "; cin >> a;
    cout << "f(x) = coth^-1 " << a <<"x \n";
    cout << "f'(x) = " << a << "x / sqrt(" << a*a << "x^2)\n";
}

void hiperbolicasInversas5(){
    int a,b;
    cout << "f(x) = Sech^-1 (-Ax^B) \n";
    cout << "Ingrese el valor de A: "; cin >> a;
    cout << "Ingrese el valor de B: "; cin >> b;
    cout << "f(x) = Sech^-1 " << a <<"x^" << b << " \n";
    cout << "f'(x) = -(-" << a*b << "x^" << b-1 << ") / " << a << "x^" << b << " sqrt( 1 - " << a*a << "x^" << b << ")\n";
}

void hiperbolicasInversas6(){
    int a,b;
    cout << "f(x) = Csch^-1 (Ax - B) \n";
    cout << "Ingrese el valor de A: "; cin >> a;
    cout << "Ingrese el valor de B: "; cin >> b;
    cout << "f(x) = Csch^-1 " << a <<"x - " << b << " \n";
    cout << "f'(x) = " << a << " / |" << a << "x - " << b << "| sqrt(" << a*a << "x^2 - " << b * 2 << "x + " << b*b << ")\n";
}

void menuFuncionesExponenciales(){
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
    double A, u;
    cout << "Ingrese el valor de A: ";
    cin >> A;
    cout << "Ingrese el valor de u: ";
    cin >> u;
    cout << "La derivada ingresada es: " << A << "^" << u << endl;

    cout << " = " << A << "^" << u << " * ln(" << A << ")" << " * " << u << "'\n";
}

void exponenciales2(){
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
}

void exponenciales3(){
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
}

void exponenciales4(){
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
}

void exponenciales5(){
    double A;
    cout << "Ingrese el valor de A: "; cin >> A;

    cout << "La derivada ingresada es: " << A << "^sqrt(x)\n\n";
    cout << " a = " << A << "\n";
    cout << " u = sqrt(x) = 1/2\n";
    cout << " u' = 1/2x^-1/2\n\n";

    cout << "f'(x) = " << A << "^sqrt(x) * ln(" << A << ") * 1/2sqrt(x)'\n";
}

void menuFuncionesLogaritmicas(){
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
    int a;
    cout << "Ingrese el valor de A: "; cin >> a;

    cout << "La derivada ingresada es: ln(" << a << "x)\n\n";
    cout << " = " << a << "/" << a << "x\n";
    cout << " = " << a/a << "\n";
}

void logaritmicas2(){
    int a;
    cout << "Ingrese el valor de A: "; cin >> a;

    cout << "La derivada ingresada es: ln(" << a << "x^2)\n\n";
    cout << a*2 << "/" << a << "x^2\n";
    cout << (a*2)/a << "/x\n";
}

void logaritmicas3(){
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
}

void logaritmicas4(){
    int a, b;
    cout << "Ingrese el valor de A: "; cin >> a;
    cout << "Ingrese el valor de B: "; cin >> b;

    cout << "La derivada ingresada es: log" << a << "(" << a << "x^" << b << ")\n\n";
    cout << " =          " << (a*b)/a << "\n";
    cout << "   ------------------\n";
    cout << "      x * In(10)\n";
}

void logaritmicas5(){
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
    
}

void menuFuncionesHiperbolicas(){
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
    int a, b, c;
    cout << "Ingrese el valor de A: "; cin >> a;
    cout << "Ingrese el valor de B: "; cin >> b;
    cout << "Ingrese el valor de C: "; cin >> c;

    cout << "La derivada ingresada es: Sinh(" << a << "x^" << b << "-" << c << ")\n\n";
    cout << "f'(x) = [Cosh(" << a << "x^" << b << "-" << c << ")] - (" << a*b << "x^" << b-1 << ")\n";
}

void hiperbolicas2(){
    int a, b, c, d;
    cout << "Ingrese el valor de A: "; cin >> a;
    cout << "Ingrese el valor de B: "; cin >> b;
    cout << "Ingrese el valor de C: "; cin >> c;
    cout << "Ingrese el valor de D: "; cin >> d;

    cout << "La derivada ingresada es: Cosh(" << a << "x^" << b << "+" << c << "x^" << d << ")\n\n";
    cout << "f'(x) = [Sinh(" << a << "x^" << b << "+" << c << "x^" << d << ")] - (" << a*b << "x^" << b-1 << "+" << c*d << "x^" << d-1 << ")\n";
}

void hiperbolicas3(){
    cout << "La derivada ingresada es: tanh x\n\n";
    cout << "f'(x) = [Sech^2 x] * (1)\n";
    cout << "f'(x) = Sech^2 x\n";
}

void hiperbolicas4(){
    int a, b, c, d;
    cout << "Ingrese el valor de A: "; cin >> a;
    cout << "Ingrese el valor de B: "; cin >> b;
    cout << "Ingrese el valor de C: "; cin >> c;
    cout << "Ingrese el valor de D: "; cin >> d;

    cout << "La derivada ingresada es: Coth(" << a << "x^" << b << "+" << c << "x^" << d << ")\n\n";
    cout << "f'(x) = [ -Csch^2(" << a << "x^" << b << "+" << c << "x^" << d << ")] - (" << a*b << "x^" << b-1 << "+" << c*d << "x^" << d-1 << ")\n";
}

void hiperbolicas5(){
    int a, b;
    cout << "Ingrese el valor de A: "; cin >> a;
    cout << "Ingrese el valor de B: "; cin >> b;

    cout << "La derivada ingresada es: Sech(" << a << "x^" << b << ")\n\n";
    cout << "f'(x) = [ -Sech(" << a << "x^" << b << ") * Tanh(" << a << "x^" << b << ")] - (" << a*b << "x^" << b-1 << ")\n";
    cout << "f'(x) = " << a*b << "x^" << b-1 << " * (Sech" << a << "x^" << b << " * Tanh" << a << "x^" << b << ")\n";
}

void hiperbolicas6(){
    int a, b;
    cout << "Ingrese el valor de A: "; cin >> a;
    cout << "Ingrese el valor de B: "; cin >> b;

    cout << "La derivada ingresada es: Csch("<< a << "x^" << b << ")\n\n";

    cout << "f'(x) = [ -Csch(" << a << "x^" << b << ") * Coth(" << a << "x^" << b << ")] - (" << a*b << "x^" << b-1 << ")\n";
    cout << "f'(x) = " << a*b << "x^" << b-1 << " * (Csch" << a << "x^" << b << " * Coth" << a << "x^" << b << ")\n";
}

