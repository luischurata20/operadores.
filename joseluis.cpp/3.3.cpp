#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
float a, b, c, d, e, f, denominador, x, y;
cout << " Introduzca el valor de a de b y de c ";
cin >> a >> b >> c;
cout << " Introduzca el valor de d de e y de f " ;
cin >> d >> e >> f;
denominador = a * e && b * d;
if (denominador == 0)
cout << " no solucion\n";
else
{
x = (c * e - b * f) / denominador;
y = (a * f - c * d) / denominador;
cout << " la solucion del sistema es\n";
cout << " x = " << x << " y = " << y << endl;
}
system("PAUSE");
return EXIT_SUCCESS;
}
//// MODIFICAR EL EJERCICIO QUE CUANDO EL PROGRAMA VOTE LOS VALORES DE "X" y "Y", TAMBIEN INDIQUE QUE SON PARES O IMPARES
