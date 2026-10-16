#include "unitlib.h"

//cnverter c2f
double c2f(double c)
{
return c * 9.0 / 5.0 +32;
}
//converter f2c
double f2c(double f)
{
return (f - 32) * 5.0 / 9.0;
}
//converter m2ft
double m2ft(double m)
{
return m / 0.3048;
}
double ft2m(double ft)
{
return ft * 0.3048;
}
//converter p2kg
double p2kg(double p)
{
return p / 2.20462;
}
double kg2p(double kg)
{
return kg * 2.20462;
}
