#include "Evaluador.h"


double evaluarEscondido()
{
    double nota = 0;

    int a1[4];
    a1[0]=10;
    a1[1]=20;
    a1[2]=30;
    a1[3]=40;
    int a2[2];
    a2[0]=1;
    a2[1]=2;
    int a3[3];
    a3[0]=5;
    a3[1]=10;
    a3[2]=15;
    cout<<"getSegundoElemento():\t\t";
    if(getSegundoElemento(a1)==20
        &&getSegundoElemento(a2)==2
        &&getSegundoElemento(a3)==10
        )
    {
        nota+=2;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<"getDireccionPrimerElemento():\t";
    if(getDireccionPrimerElemento(a1)==a1
        && getDireccionPrimerElemento(a2)==a2
        && getDireccionPrimerElemento(a3)==a3
        )
    {
        nota+=2;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    vector<int>v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    vector<int>v2;
    v2.push_back(6);
    v2.push_back(7);
    vector<int>v3;
    v3.push_back(1);
    v3.push_back(2);
    v3.push_back(3);
    v3.push_back(4);

    escribir("archivo1",v1);
    vector<int>v11 = leer("archivo1");

    escribir("archivo2",v2);
    vector<int>v22 = leer("archivo2");

    escribir("archivo3",v3);
    vector<int>v33 = leer("archivo3");

    cout<<"leer() y escribir():\t\t";
    if(v1==v11
        && v2==v22
        && v3==v33
        )
    {
        nota+=3;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }




    list<int>l1;
    l1.push_back(30);
    l1.push_back(10);
    l1.push_back(20);

    list<int>l2;
    l2.push_back(1);
    l2.push_back(2);
    l2.push_back(3);
    l2.push_back(0);
    l2.push_back(7);
    l2.push_back(8);
    l2.push_back(6);
    l2.push_back(4);
    l2.push_back(5);

    list<int>l3;
    l3.push_back(6);
    l3.push_back(7);
    l3.push_back(9);
    l3.push_back(1);

    list<int>l4;
    l4.push_back(10);
    l4.push_back(11);
    l4.push_back(8);
    l4.push_back(200);

    cout<<"obtenerMediana():\t\t";
    if(obtenerMediana(l1)==20
        && obtenerMediana(l2)==4
        && obtenerMediana(l3)==6.5
        && obtenerMediana(l4)==10.5
        )
    {
        nota+=3;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    return nota;
}
