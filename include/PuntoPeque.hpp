#pragma once
#include <dibujo.hpp>
#include <Actualizable.hpp>

class PuntoPeque : public dibujo, public Actualizable
{
private:
    /* data */
public:
    PuntoPeque(/* args */) : dibujo("PuntoPeque") {}

    PuntoPeque(int x, int y) : dibujo(x, y, ("PuntoPeque")) {}

    void Actualizar()
    {
    }

    ~PuntoPeque() {}
};