/**  Salman Al kazrauni
*    Exercise 4
*    c00199530
*    Electrical Resistance of a Wire */


#include <iostream>
#include <cmath>
//#define PI  3.14

using namespace std;

/**< resistance() function */
double resistance(double r , double l, double p);

/**<main() function */
int main(void)
{
    /** variables declarations */
    double r =0, l =0, p = 0 , result;

    while(r<=0)
    {
        /** display the value of the radius */
        cout <<" please enter radius value: "   ;
        cin >> r ;
    }

    while(l<=0)
    {
        /** display the value of the length */
        cout << "\n please enter length value:"  ;
        cin >> l  ;
    }

    while(p<=0)
    {
        /** display the value of the resistivity  */
        cout <<"\n please enter resistivity value: "  ;
        cin >> p  ;
    }

    result = resistance(r,l,p);

    cout << "\n\n the resistance is "<< result <<  "ohm" <<  endl ;

    return 0;
}


/**< resistance() function */
double resistance(double r , double l, double p)
{
    double A =0,R=0;

    /** calculate cross sectional area in (m2)  */
    A =M_PI*(r*r) ;

    /** calculate resistance in ohm  */
    R = p*(l/A) ;

    return R;
}
