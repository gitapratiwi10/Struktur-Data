#include <iostream>

using namespace std;

int main()
{
     cout << "BIODATA" << endl;
    cout << "nama : Gita Pratiwi" << endl;
    cout << "nim  : A11.2021.13351" << endl;
    cout << "mafa : Geprek" << endl;
    cout << "mifa : es kopi" << endl;
    cout << "Cita cita : orang yang bisa membahagiakan orang tua" << endl;
    cout << "Target kuliah : Lulus tepat waktu dengan nilai yang memuaskan" << endl << endl;


    cout << "LUAS PERSEGI" << endl;
    int a, b, x;
    cout << "Luas Persegi" << endl;
    cout << "Masukkan sisi a: ";
    cin >> a;
    cout << "Masukkan sisi b: ";
    cin >> b;
    cout << "Jumlah luas : "<< a*b << endl;

    if(a*b < 50){
        cout <<"kurang dari 50"<< endl;
    }
    else if(a*b > 50){
        cout <<"lebih dari 50"<<endl;
    }
    cout <<"looping " << endl;
    if (a*b < 50){
        for (x=0 ; x<a*b; x++){
            cout << "persegi"<< endl;
        }
    }
    return 0;
}
