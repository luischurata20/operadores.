#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
int hectometros, decametros, metros, decimetros;

cout << " Introduzca hectometros, decametros y metros ";
cin >> hectometros >> decametros >> metros;

decimetros = ((hectometros * 10 + decametros) * 10 + metros) * 10;
cout << " numero de decimetros es "<< decimetros << endl;
system("PAUSE");
return EXIT_SUCCESS;
}