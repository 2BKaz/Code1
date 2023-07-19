#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.141592653589793238;

// Funcion para calcular el área de las figuras
double calcularAreaTriangulo(double base, double altura) {
    return (base * altura) / 2;
}

double calcularAreaRectangulo(double base, double altura) {
    return base * altura;
}

double calcularAreaCirculo(double radio) {
    return PI * pow(radio, 2);
}

// Funcion para calcular el volumen de las figuras
double calcularVolumenCubo(double lado) {
    return pow(lado, 3);
}

double calcularVolumenPrisma(double areaBase, double altura) {
    return areaBase * altura;
}

double calcularVolumenCilindro(double radio, double altura) {
    return PI * pow(radio, 2) * altura;
}

// Función para validar que el número ingresado no sea negativo
double obtenerNumeroPositivo() {
    double numero;
    do {
        cin >> numero;
        if (numero < 0) {
            cout << "Error: Ingrese un número positivo: ";
        }
    } while (numero < 0);
    return numero;
}

int main() {
    int opcion;
    
    do {
        cout << "Seleccione una opción:\n";
        cout << "1. Calcular área\n";
        cout << "2. Calcular volumen\n";
        cout << "3. Salir\n";
        cin >> opcion;
        
        switch (opcion) {
            case 1:
                int opcionArea;
                double base, altura, radio;
                
                cout << "Seleccione la figura para calcular el área:\n";
                cout << "1. Triángulo\n";
                cout << "2. Rectángulo\n";
                cout << "3. Círculo\n";
                cout << "4. Regresar al menú principal\n";
                cin >> opcionArea;
                
                switch (opcionArea) {
                    case 1:
                        cout << "Ingrese la base del triángulo: ";
                        base = obtenerNumeroPositivo();
                        cout << "Ingrese la altura del triángulo: ";
                        altura = obtenerNumeroPositivo();
                        cout << "El área del triángulo es: " << calcularAreaTriangulo(base, altura) << endl;
                        break;
                        
                    case 2:
                        cout << "Ingrese la base del rectángulo: ";
                        base = obtenerNumeroPositivo();
                        cout << "Ingrese la altura del rectángulo: ";
                        altura = obtenerNumeroPositivo();
                        cout << "El área del rectángulo es: " << calcularAreaRectangulo(base, altura) << endl;
                        break;
                        
                    case 3:
                        cout << "Ingrese el radio del círculo: ";
                        radio = obtenerNumeroPositivo();
                        cout << "El área del círculo es: " << calcularAreaCirculo(radio) << endl;
                        break;
                        
                    case 4:
                        cout << "Regresando al menú principal.\n";
                        break;
                        
                    default:
                        cout << "Opción inválida.\n";
                        break;
                }
                break;
                
            case 2:
                int opcionVolumen;
                double lado, areaBase, alturaVolumen;
                
                cout << "Seleccione la figura para calcular el volumen:\n";
                cout << "1. Cubo\n";
                cout << "2. Prisma\n";
                cout << "3. Cilindro\n";
                cout << "4. Regresar al menú principal\n";
                cin >> opcionVolumen;
                
                switch (opcionVolumen) {
                    case 1:
                        cout << "Ingrese el lado del cubo: ";
                        lado = obtenerNumeroPositivo();
                        cout << "El volumen del cubo es: " << calcularVolumenCubo(lado) << endl;
                        break;
                        
                    case 2:
                        cout << "Ingrese el área de la base del prisma: ";
                        areaBase = obtenerNumeroPositivo();
                        cout << "Ingrese la altura del prisma: ";
                        alturaVolumen = obtenerNumeroPositivo();
                        cout << "El volumen del prisma es: " << calcularVolumenPrisma(areaBase, alturaVolumen) << endl;
                        break;
                        
                    case 3:
                        cout << "Ingrese el radio del cilindro: ";
                        radio = obtenerNumeroPositivo();
                        cout << "Ingrese la altura del cilindro: ";
                        alturaVolumen = obtenerNumeroPositivo();
                        cout << "El volumen del cilindro es: " << calcularVolumenCilindro(radio, alturaVolumen) << endl;
                        break;
                        
                    case 4:
                        cout << "Regresando al menú principal.\n";
                        break;
                        
                    default:
                        cout << "Opción inválida.\n";
                        break;
                }
                break;
                
            case 3:
                cout << "Saliendo del programa.\n";
                break;
                
            default:
                cout << "Opción inválida.\n";
                break;
        }
        
    } while (opcion != 3);
    
    return 0;
}
