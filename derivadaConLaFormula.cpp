#include <iostream>
#include <cmath>
using namespace std;

void menuDerivadaConLaFormula();
void derivadaConLaFormula1();
void derivadaConLaFormula2();
void derivadaConLaFormula3();
void derivadaConLaFormula4();
void derivadaConLaFormula5();
void derivadaConLaFormula6();

int main(){
    menuDerivadaConLaFormula();
    return 0;
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
}

void derivadaConLaFormula2(){
    
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
}

void derivadaConLaFormula3(){
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
}

void derivadaConLaFormula4(){
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
