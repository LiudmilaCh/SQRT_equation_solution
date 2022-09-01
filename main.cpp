/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float x, x1, x2, y;
    float a,b,c;        //коэффициенты квадратного уравнения
    float D;
    int num_sol;        //число корней уравнения
    D = pow(b,2)-4*a*c; //формула вычисления дискриминанта
    
    cout<<"Программа для решения квадратных уравнений";
    cout<<"\n Введите коэффициенты квадратного уравнения";

cout<<"\n a = ";
cin>>a;
cout<<"\n b = ";
cin>>b;
cout<<"\n c = ";
cin>>c;

cout<<"\n 1. Вычислим дискриминант D = ";
    cout<<D;
    
    if (D<0)
    {
        cout<<" - Кореней нет";
        num_sol = 0;
    }
    else if (D ==0)
    {
        cout<<" - Один корень";
        num_sol = 1;
    }
    else 
        cout<<" - Есть два корня";
        num_sol = 2;
    cout<<"\n 2. Решим квадратное уравнение, где x = ((-b+-sqrt(D))/2a)";
    
    y = 0;
    
    switch(num_sol)
    {
        case 1:
        {
        x = ((-b+sqrt(D))/2*a);
        cout<<"\n x ="<<x<<endl;
        }
        break;
        case 2:
        {
            x1 = ((-b+sqrt(D))/2*a);
            x2 = ((-b-sqrt(D))/2*a);
        cout<<"\n x1 ="<<x<<endl;
        cout<<"\n x2 ="<<x<<endl;
        }
        break;
        case 0:
        break;
    }
    

    return 0;
}


