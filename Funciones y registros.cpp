#include <iostream>
#include <string>

using namespace std;

// 1. REGISTRO (Struct): Define la estructura de datos de un libro
struct Libro {
    string titulo;
    string autor;
    int anioPublicacion;
    bool disponible;
};

// 2. FUNCIÓN que modifica el estado del registro por referencia (&)
void prestarLibro(Libro& lib) {
    if (lib.disponible) {
        lib.disponible = false;
        cout << "-> ¡Prestamo exitoso! El libro ahora esta marcado como no disponible.\n";
    } else {
        cout << "-> Lo siento, el libro ya se encuentra prestado.\n";
    }
}

// 3. FUNCIÓN que recibe el registro por valor para mostrar su información completa
void mostrarFichaLibro(Libro lib) {
    cout << "========================================\n";
    cout << "           FICHA BIBLIOGRAFICA         \n";
    cout << "========================================\n";
    cout << "Titulo: " << lib.titulo << endl;
    cout << "Autor: " << lib.autor << endl;
    cout << "Anio: " << lib.anioPublicacion << endl;
    cout << "Estado: " << (lib.disponible ? "Disponible" : "Prestado") << endl;
    cout << "========================================\n";
}

int main() {
    // Creación de una variable de tipo Registro
    Libro miLibro = {"Cien anos de soledad", "Gabriel Garcia Marquez", 1967, true};

    // Mostrar estado inicial con una función
    mostrarFichaLibro(miLibro);

    // Llamada a la función que modifica el registro
    prestarLibro(miLibro);

    // Mostrar estado después del cambio
    cout << "\nDespues de intentar el prestamo:\n";
    mostrarFichaLibro(miLibro);

    return 0;
}