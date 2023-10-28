#pragma once

#include <fstream>
#include <iostream>
#include <string>
#include <curses.h>

class dibujo
{
private:
    std::fstream archivo;



protected:
    int x;
    int y;

public:
    dibujo(int x, int y, std::string recurso)
    {
        archivo.open("./data/"+ recurso + ".txt");
        this -> x = x;
        this -> y = y;
    }

    dibujo(std::string recurso)
    {
        archivo.open("./data/"+ recurso + ".txt");
        this -> x = 0;
        this -> y = 0;
    }

  

    void dibujar()
    {
        
        std::string linea;

        move(this-> y, this->x);
        while (std::getline(archivo, linea))
        {
           
            int y = getcury(stdscr);
            mvaddstr(y+1,this->x,linea.c_str());
        }

        archivo.clear();
        archivo.seekg(0);
    }
    ~dibujo()
    {
        archivo.close();
    }
};