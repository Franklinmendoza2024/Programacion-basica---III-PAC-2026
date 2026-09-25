/*en esta lección se explican las bibliotecas en C++ y cómo utilizarlas en nuestros programas. Las bibliotecas son colecciones de funciones y clases que podemos incluir en nuestro código para aprovechar funcionalidades ya implementadas, evitando así tener que escribir todo desde cero.*/

#include <iostream> // Biblioteca estándar para entrada y salida
#include <string>   // Biblioteca estándar para manipulación de cadenas de texto


using namespace std;

int main()
{

    int edad;
    string nombre;

    cout << "Ingrese su edad: ";            // Solicita al usuario que ingrese su edad
    cin >> edad;                            // Lee la edad ingresada por el usuario
    cout << "Su edad es: " << edad << endl; // Muestra la edad ingresada


cout << "Ingrese su nombre: ";          // Solicita al usuario que ingrese su nombre
getline(cin >> ws, nombre); // Lee el nombre ingresado por el usuario, incluyendo espacios




cout << "Su nombre es: " << nombre << endl; // Muestra el nombre ingresado



    return 0;
}
