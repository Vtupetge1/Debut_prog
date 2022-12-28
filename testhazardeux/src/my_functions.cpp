//  Copyright (c) 2022 Virgile Tupet
//

#include "my_header.h"
#include <iostream>



float calculateur (float valeurDeBase)
{
    float resultat = 0.0f;
    
    std::cout << "taper une valeur a virgule :\n ";
    std::cin >> valeurDeBase ;
    resultat = valeurDeBase * valeurDeBase * 3.14;

    return resultat;
}


