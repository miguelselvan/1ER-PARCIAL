#include <iostream>
#include <iomanip>
using namespace std;
// miguel angel selvan diaz Matricula: 362312980
int main() {
    int n;
    
    cout << "MULTIPLICADOR DE MATRICES CUADRADAS NxN (CON DECIMALES)\n";
    cout << "Ingrese la dimension (N) de las matrices: ";
    cin >> n;
    
    // Validar entrada
    if(n <= 0) {
        cout << "Error: La dimension debe ser un numero positivo.";
        return 1;
    }
    
    const int MAX_SIZE = 10;
    if(n > MAX_SIZE) {
        cout << "Error: El programa soporta matrices hasta " << MAX_SIZE << "x" << MAX_SIZE;
        return 1;
    }
    
    // Crear las matrices con decimales
    float A[MAX_SIZE][MAX_SIZE], B[MAX_SIZE][MAX_SIZE], C[MAX_SIZE][MAX_SIZE];
    
    // Leer matriz A
    cout << "\nIngrese los elementos de la matriz A:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << "A[" << i+1 << "][" << j+1 << "]: ";
            while(!(cin >> A[i][j])) {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Entrada invalida. Ingrese un numero: ";
            }
        }
    }
    
    // Leer matriz B
    cout << "\nIngrese los elementos de la matriz B:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << "B[" << i+1 << "][" << j+1 << "]: ";
            while(!(cin >> B[i][j])) {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Entrada invalida. Ingrese un numero: ";
            }
        }
    }
    
    // Multiplicar matrices
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            C[i][j] = 0.0f; // Inicializar con 0.0
            for(int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
    // Mostrar resultado con 2 decimales
    cout << fixed << setprecision(2); // Formato para 2 decimales
    cout << "\nMatriz Resultante C = A x B:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << setw(8) << C[i][j] << " "; // Ajuste de ancho
        }
        cout << "\n";
    }
    
    return 0;
}