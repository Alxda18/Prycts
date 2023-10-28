
#include <dibujo.hpp>
#include <curses.h>
#include <unistd.h>
#include <Ventana.hpp>
#include <list>
#include <PacMan.hpp>
#include <Fantasma.hpp>
#include <PuntoPeque.hpp>


using namespace std;

int main(int argc, char const *argv[])
{

Ventana Ventana;
PacMan* pacman1= new PacMan(5,0);
Fantasma* fantasma= new Fantasma(120,50);
PuntoPeque* punto = new PuntoPeque (30,50);


list<dibujo*> dibujos;

dibujos.push_back(pacman1);
dibujos.push_back(fantasma);


list<Actualizable*> actualizables;

actualizables.push_back(pacman1);
actualizables.push_back(fantasma);


while (true)
{

int key = getch();
if (key == 'q' || key == 'Q')
{
    //salir juego
    break;
}

if (key == 'a' || key == 'A' || key == KEY_LEFT){

    pacman1 ->DesplazarIzquierda();
}

if (key == 'd' || key == 'D' || key == KEY_RIGHT){
    pacman1 -> DesplazarDerecha();
}

if (key == 'w' || key == 'W' || key == KEY_UP){

    pacman1 ->DesplazarArriba();
}

if (key == 's' || key == 'S' || key == KEY_DOWN){
    pacman1 -> DesplazarAbajo();
}

Ventana.Actualizar(actualizables);
Ventana.Dibujar(dibujos);

}
endwin();

    return 0;
}
