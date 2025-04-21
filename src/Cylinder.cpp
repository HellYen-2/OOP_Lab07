# ifndef CYLINDER_CPP
# define CYLINDER_CPP

# include "Cylinder.h"
# include <cmath>
# include <iomanip>
double Cylinder :: SurfaceArea(){
    double cir, rec, area;
    cir=acos(-1)*radius*radius;
    rec=acos(-1)*2*radius*height;
    area=(2*cir)+rec;
    return area;
}

double Cylinder :: Volume(){
    double vol=acos(-1)*radius*radius*height;
    return vol;
}

double Cylinder :: Circumference(){
    double cir=acos(-1)*2*radius;
    return cir;
}

istream & operator>>(istream & in, Cylinder & cldr)
{
    int r,h;
    in>>r>>h;
    cldr.radius=r;
    cldr.height=h;
    return in;
}

ostream & operator<<(ostream & out, Cylinder & cldr)
{
    out<<"Circumference: "<<fixed<<setprecision(3)<<cldr.Circumference()<<"\n";
    out<<"SurfaceArea: "<<fixed<<setprecision(3)<<cldr.SurfaceArea()<<"\n";
    out<<"Volume: "<<fixed<<setprecision(3)<<cldr.Volume()<<"\n";
    return out;
}

# endif
