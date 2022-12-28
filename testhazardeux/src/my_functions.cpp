//  Copyright (c) 2022 Virgile Tupet
//

#include "my_header.h"
#include <iostream>

float temptab (float a [14])
{
float tmin = a[0];

for(int i = 0; i<15; i++)
{
    if(a[i]>0)
    {
        if(a[i] < tmin)
        {
            tmin= a[i];
        }
    }
    else if(a[i]<0)
    {
        if(a[i] < tmin )
        {
            tmin = a[i];
        }
    }
    else 
    {
        tmin = a[i];
    }

}
return tmin;
}


