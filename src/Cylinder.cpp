# ifndef CYLINDER_CPP
# define CYLINDER_CPP

# include "Cylinder.h"
#include <cmath>
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

double pi = M_PI;

double Cylinder :: SurfaceArea(){
    return pi * 2.0 * radius * radius + pi * 2.0 * radius * height;
}

double Cylinder :: Volume(){
    return pi * radius * radius * height;
}

double Cylinder :: Circumference(){
    return pi * radius * 2.00;
}

istream & operator>>(istream & in, Cylinder & cldr)
{
    in >> cldr.radius >> cldr.height;
    return in;
}

ostream & operator<<(ostream & out, Cylinder & cldr)
{
    double C = cldr.Circumference();
    double A = cldr.SurfaceArea();
    double V = cldr.Volume();
    out << "Circumference: " << fixed << setprecision(3) << C << endl;
    out << "SurfaceArea: " << fixed << setprecision(3) << A << endl;
    out << "Volume: " << fixed << setprecision(3) << V << endl;
    return out;
}

# endif
