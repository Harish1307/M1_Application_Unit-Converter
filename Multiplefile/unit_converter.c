#include <unit_converter.h>

int length_convert(int u1, int u2, int a)
{
    switch (u1)
    {
        case 1: 
        switch (u2)
        {
            case 1:
            return a; 
            case 2:
            return (float)a/10;
            case 3:
            return (float)a/1000;
            case 4:
            return (float)a/1000000;
            default:
            return 0;
        }
        case 2:
        switch (u2)
        {
            case 1:
            return a*10;
            case 2:
            return a; 
            case 3:
            return (float)a/100;
            case 4:
            return (float)a/100000;
            default:
            return 0;
        }
        case 3:
        switch (u2)
        {
            case 1:
            return a*1000;
            case 2:
            return a*100;
            case 3:
            return a; 
            case 4:
            return a/1000;
            default:
            return 0;
        }
        case 4:
        switch (u2)
        {
            case 1:
            return a*1000000;
            case 2:
            return a*100000;
            case 3:
            return a*1000;
            case 4:
            return a; 
            default:
            return 0;
        }
        default:
        return 0;
    }
}

int mass_convert(int u1, int u2, int a)
 {
    switch (u1)
    {
        case 1: 
        switch (u2)
        {
            case 1:
            return a; 
            case 2:
            return (float)a/1000;
            case 3:
            return (float)a/1000000;
            case 4:
            return (float)a/1000000000;
            default:
            return 0;
        }
        case 2:
        switch (u2)
        {
            case 1:
            return a*1000;
            case 2:
            return a; 
            case 3:
            return (float)a/1000;
            case 4:
            return (float)a/1000000;
            default:
            return 0;
        }
        case 3:
        switch (u2)
        {
case 1:
            return a*1000000;
            case 2:
            return a*1000;
            case 3:
            return a; 
            case 4:
            return a/1000;
            default:
            return 0;
        }
        case 4:
        switch (u2)
        {
            case 1:
            return a*1000000000;
            case 2:
            return a*1000000;
            case 3:
            return a*1000;
            case 4:
            return a; 
            default:
            return 0;
        }
        default:
        return 0;
    }
}

int time_convert(int u1, int u2, int a)
{
    switch (u1)
    {
        case 1: 
        switch (u2)
        {
            case 1:
            return a; 
            case 2:
            return (float)a/60;
            case 3:
            return (float)a/3600;
            case 4:
            return (float)a/86400;
            default:
            return 0;
        }
        case 2:
        switch (u2)
        {
            case 1:
            return a*60;
            case 2:
            return a; 
            case 3:
            return (float)a/60;
            case 4:
            return (float)a/1440;
            default:
            return 0;
        }
        case 3:
        switch (u2)
        {
            case 1:
            return a*3600;
            case 2:
            return a*60;
            case 3:
            return a; 
            case 4:
            return a/24;
            default:
            return 0;
        }
        case 4:
        switch (u2)
        {
            case 1:
            return a*86400;
            case 2:
            return a*1440;
            case 3:
            return a*24;
            case 4:
            return a; 
            default:
            return 0;
        }
        default:
        return 0;
    }
}

