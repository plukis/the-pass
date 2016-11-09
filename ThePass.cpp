#include <iostream>
#include <cstdlib>
#include <string.h>
#include <stdio.h>
using namespace std;

int main()
{
    // obteniendo la ruta del archivo a abrir
    //string dir = " \"C:\\Documents and Settings\\Virtual\\Mis documentos\\FuerzaBruta.zip\" ";
    string dir = " /home/alejandro_becerra/FuerzaBruta.zip";
    string command = "unzip -o -P ";
    string dirCommand = " -d /home/alejandro_becerra/";
    string password     = "";
    int     a           = 97;
    int     z           = 122;
    char    posA        = 'a';
    char    posB        = 'a';
    char    posC        = 'a';
    char    posD        = 'a';

    int miAscii = 0;
    //cout << "Introduce la constraseña: " << endl;
    //getline(cin, password);
    string linea = command+password+dir+dirCommand;

    int i = system(linea.c_str());


    miAscii = int(posA);
    cout << miAscii;
    posA= miAscii+1;
    cout << posA;
    cout << "\n";
    //password = posA+posB+posC+posD;
    password.push_back(posA);
    password.push_back(posB);
    password.push_back(posC);
    password.push_back(posD);



    while (i != 0)
    {


        for (int indexA = a;indexA <= z; indexA++ )
        {

            password    = "";
            posA        = indexA;
            miAscii     = indexA;

            password.push_back(posA);
            password.push_back(posB);
            password.push_back(posC);
            password.push_back(posD);

            linea = command + password + dir + dirCommand;
            i = system(linea.c_str());
            if (i==0)
            {
                cout << "\n econtrado \n";
                cout << password;
                cin.get();
                exit(0);
            }
            else if (miAscii == z )
            {
                posA = a;
                miAscii = a;
                cout << "fuuuuuuuck";
                exit(0);
            }

            for (int indexB = a;indexB <= z; indexB++ )
            {

                password    = "";
                posB        = indexB;
                miAscii     = indexB;

                password.push_back(posA);
                password.push_back(posB);
                password.push_back(posC);
                password.push_back(posD);

                linea = command + password + dir + dirCommand;
                i = system(linea.c_str());
                if (i==0)
                {
                    cout << "\n econtrado \n";
                    cout << password;
                    cin.get();
                    exit(0);
                }

                else if (miAscii == z )
                {
                    posB = a;
                    miAscii = a;
                }

                for (int indexC = a;indexC <= z; indexC++ )
                {

                    password    = "";
                    posC        = indexC;
                    miAscii     = indexC;

                    password.push_back(posA);
                    password.push_back(posB);
                    password.push_back(posC);
                    password.push_back(posD);

                    linea = command + password + dir + dirCommand;
                    i = system(linea.c_str());
                    if (i==0)
                    {

                        cout << "\n econtrado \n";
                        cout << password;
                        cin.get();
                        exit(0);
                    }

                    else if (miAscii == z )
                    {
                        posC = a;
                        miAscii = a;
                    }

                    for (int indexD = a;indexD <= z; indexD++ )
                    {
                        password    = "";
                        posD        = indexD;
                        miAscii     = indexD;

                        password.push_back(posA);
                        password.push_back(posB);
                        password.push_back(posC);
                        password.push_back(posD);

                        cout << password << "\n";

                        linea = command + password + dir + dirCommand;
                        i = system(linea.c_str());

                        if (i==0)
                        {
                            cout << "\n encontrado \n";
                            cout << password;
                            cin.get();
                            exit(0);
                        }
                        else if (miAscii == z )
                        {
                            posD = a;
                            miAscii = a;

                        }

                    }
                }
            }

        }


    }

    if ( i == 0 ) cout << endl << "Se descomprimio el archivo";
    return 0;
}
