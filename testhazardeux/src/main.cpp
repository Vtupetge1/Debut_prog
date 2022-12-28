//  Copyright (c) 2022 Virgile Tupet
// l'objectif de ce programme et de me rappeler de ce que je fait 
// tout d'abord declarer la fction dans myheader avec les parametres qu'elle va utiliser (nom du parametre)
// ensuite utilisation de la fction et redeclaration si besoin
// attribution d'une variable qui va prendre la valeure que va retourner la fonction
// et volaaa
//

#include "my_header.h"
#include <iostream>
#include <string>
PwmOut MotG(PA_7);
PwmOut MotD(PA_6);
Timer Chrono;

DigitalIn BP0(PA_9, PullUp);
DigitalIn BP1(PA_10, PullUP);
DigitalIn BP2(PB_0, PullUP);
DigitalIn BP3(PB_7, PullUP);

int main() {

    MotG.period(1);
    MotD.period(1);
    Chrono.start;

while(1)
{
    if(!BP0)
    {
        MotD.write(0);
        MotG.write(0);
    }
    else if(!BP1)
    {
        while(!BP1)
        {
            Chrono.reset();
            if (Chrono.read_ms() < 500)
            {
                MotD.write(0,25);
            }
        else if (Chrono.read_ms() > 500 && Chrono.read_ms() < 1000)
            {
                MotD.write(0,5);
            }
        else if (Chrono.read_ms() > 1000 && Chrono.read_ms() < 1500)
            {
                MotD.write(0,75);
            }
        else if (Chrono.read_ms() > 1500)
            {
                MotD.write(1);
            }

        }
    }
    else if(!BP2)
    {
        while(!BP2)
        {
            Chrono.reset();
            if (Chrono.read_ms() < 500)
            {
                MotD.write(0,25);
                MotG.write(0,25);
            }
        else if (Chrono.read_ms() > 500 && Chrono.read_ms() < 1000)
            {
                MotD.write(0,5);
                MotG.write(0,5);
            }
        else if (Chrono.read_ms() > 1000 && Chrono.read_ms() < 1500)
            {
                MotD.write(0,75);
                MotG.write(0,75);
            }
        else if (Chrono.read_ms() > 1500)
            {
                MotD.write(1);
                MotG.write(1);
            }

        }
    }
    else if(!BP3)
    {
        while(!BP3)
        {
            Chrono.reset();
            if (Chrono.read_ms() < 500)
            {
                MotG.write(0,25);
            }
        else if (Chrono.read_ms() > 500 && Chrono.read_ms() < 1000)
            {
                MotG.write(0,5);
            }
        else if (Chrono.read_ms() > 1000 && Chrono.read_ms() < 1500)
            {
                MotG.write(0,75);
            }
        else if (Chrono.read_ms() > 1500)
            {
                MotG.write(1);
            }

        }
    }
}

}


// type nom(typeparam nomparam, typeparam nomparam);
// typedef def nom