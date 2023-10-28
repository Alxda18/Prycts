#include <unistd.h>
#include <curses.h>
#include <dibujo.hpp>
#include <list>
#include <Actualizable.hpp>


using namespace std;

class Ventana
{
private:
    /* data */
public:
    Ventana() {
        initscr();
        noecho();
        curs_set(FALSE);
        cbreak();
        keypad(stdscr,TRUE);
        timeout(10);
    
    }
        void Actualizar(list<Actualizable*> actualizables){
            for (auto && actualizable : actualizables)
            {
               actualizable -> Actualizar();   
            }
            

            usleep(41000);
        }
    
        void Dibujar (list<dibujo*> dibujos){
            clear();

            for (auto &&dibujo : dibujos)
            {
                dibujo->dibujar();
            }
            
            box(stdscr, '=','?');
            refresh();
        }
    
    

    ~Ventana() {
        keypad(stdscr,FALSE);
        endwin();
    }
};