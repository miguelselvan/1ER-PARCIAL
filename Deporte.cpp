#include <iostream>
#include <string>
using namespace std;

// DeporteConBalon
class DeporteConBalon {
public:
    // Atributos
    string nombre;
    int jugadores;
    float tamanoBalon;
    string terrenoJuego;
    int tiempoJuego; // en minutos
    
    // M�todos
    void mostrarInfoDeporte() {
        cout << "\nDeporte: " << nombre << endl;
        cout << "Jugadores: " << jugadores << endl;
        cout << "Tama�o del bal�n: " << tamanoBalon << " cm" << endl;
        cout << "Terreno de juego: " << terrenoJuego << endl;
        cout << "Duraci�n del juego: " << tiempoJuego << " minutos" << endl;
    }
};

// Clases derivadas seg�n extremidad para golpear el bal�n
class DeportePie : public DeporteConBalon {
public:
    DeportePie() {
        cout << "\nEste deporte se juega principalmente con los pies" << endl;
    }
    
    void patear() {
        cout << "Acci�n de patear el bal�n" << endl;
    }
};

class DeporteMano : public DeporteConBalon {
public:
    DeporteMano() {
        cout << "\nEste deporte se juega principalmente con las manos" << endl;
    }
    
    void lanzar() {
        cout << "Acci�n de lanzar el bal�n" << endl;
    }
};

class DeporteMixto : public DeporteConBalon {
public:
    DeporteMixto() {
        cout << "\nEste deporte se juega con pies y manos" << endl;
    }
    
    void usarAmbas() {
        cout << "Puede usar tanto pies como manos" << endl;
    }
};

int main() {
	
    DeportePie futbol;
    futbol.nombre = "F�tbol";
    futbol.jugadores = 11;
    futbol.tamanoBalon = 22;
    futbol.terrenoJuego = "Campo de c�sped";
    futbol.tiempoJuego = 90;
    futbol.mostrarInfoDeporte();
    futbol.patear();
    
    DeporteMano baloncesto;
    baloncesto.nombre = "Baloncesto";
    baloncesto.jugadores = 5;
    baloncesto.tamanoBalon = 24;
    baloncesto.terrenoJuego = "Cancha dura";
    baloncesto.tiempoJuego = 48;
    baloncesto.mostrarInfoDeporte();
    baloncesto.lanzar();
    
    DeporteMixto voleibol;
    voleibol.nombre = "Voleibol";
    voleibol.jugadores = 6;
    voleibol.tamanoBalon = 21;
    voleibol.terrenoJuego = "Cancha de arena o piso";
    voleibol.tiempoJuego = 60;
    voleibol.mostrarInfoDeporte();
    voleibol.usarAmbas();
    
    return 0;
}
