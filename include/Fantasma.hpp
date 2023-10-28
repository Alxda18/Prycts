#pragma once
#include <dibujo.hpp>
#include <Actualizable.hpp>

class Fantasma : public dibujo, public Actualizable
{
private:
    /* data */
public:
    Fantasma(/* args */) : dibujo("Fant")
    {
    }

    Fantasma(int x, int y) : dibujo(x, y, ("Fant")) {}

    void Actualizar()
    {

        // this-> x += 1;
        // this->y += 1;
    }

    void DesplazarAbajoF()
    {
    
    }
    void DesplazarArribaF()
    {
        
    }
    void DesplazarIzquierdaF()
    {
        this->x -= 1;
    }
    void DesplazarDerechaF()
    {
        this->x += 1;
    }

    ~Fantasma() {}
};