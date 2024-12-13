#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    string opciones[3] = {"Piedra", "Papel", "Tijera"};
    int eleccionUsuario, eleccionComputadora;

    srand(time(0)); // Inicializa el generador de números aleatorios

    // Obtener la elección del usuario
    cout << "Elige una opción:" << endl;
    cout << "1. Piedra" << endl;
    cout << "2. Papel" << endl;
    cout << "3. Tijera" << endl;
    cin >> eleccionUsuario;

    // Validar la entrada del usuario
    if (eleccionUsuario < 1 || eleccionUsuario > 3) {
        cout << "Elección no válida. Debe ser 1, 2 o 3." << endl;
        return 1; // Salir del programa con un código de error
    }

    // Generar la elección de la computadora
    eleccionComputadora = rand() % 3;

    // Mostrar las elecciones
    cout << "Tu elección: " << opciones[eleccionUsuario - 1] << endl;
    cout << "Elección de la computadora: " << opciones[eleccionComputadora] << endl;

    // Determinar el resultado
    if (eleccionUsuario - 1 == eleccionComputadora) {
        cout << "¡Empate!" << endl;
    } else if ((eleccionUsuario - 1 == 0 && eleccionComputadora == 1) ||
               (eleccionUsuario - 1 == 1 && eleccionComputadora == 2) ||
               (eleccionUsuario - 1 == 2 && eleccionComputadora == 0)) {
        cout << "¡Perdiste!" << endl;
    } else {
        cout << "¡Ganaste!" << endl;
    }

    return 0;
}
