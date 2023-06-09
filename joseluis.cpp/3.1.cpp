#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char *argv[])
{
float a, b, h;
cout << "Introduce los lados ";
cin >> a >> b;
h = sqrt( a * a + b * b);
cout << " lado 1 = " << a << endl;
cout << " lado 2 = " << b << endl;
cout << " hipotenusa = " << h << endl;
system("PAUSE"); // QUE INDICA ESTA LINEA DE CODIGO
return EXIT_SUCCESS; // QUE INDICA ESTA LINEA DE CODIGO
} // PARA EL CASO QUE LA HIPOTENUSA SEA MAYOR QUE 10, TRIPLIQUE SU VALOR; CASO CONTRARIO LE INCREMETE 2
