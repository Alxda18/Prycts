#pragma once
#include <dibujo.hpp>
#include <Actualizable.hpp>

class PacMan : public dibujo, public Actualizable
{
private:
    /* data */
public:
    PacMan(/* args */) : dibujo("Pacmann")
    {
    }

    PacMan(int x, int y) : dibujo(x, y, ("Pacmann")) {}

    void Actualizar()
    {
    }

    void DesplazarAbajo()
    {
        this->y += 1;
    }
    void DesplazarArriba()
    {
        this->y -= 1;
    }
    void DesplazarIzquierda()
    {
        this->x -= 1;
    }
    void DesplazarDerecha()
    {
        this->x += 1;
    }

    ~PacMan() {}
};