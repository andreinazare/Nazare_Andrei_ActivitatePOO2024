#include <iostream>
using namespace std;


class Bloc {

    private:
    int nrApartamente;
    static float nrEtaje;
    int* nrLocuitori;
    bool areBalcon;
    const int anConstructie;

    public:
    Bloc() : anConstructie(2020) {
        this->nrApartamente = 50;
        this->nrLocuitori = new int (150);
        this->areBalcon =  true;
    }

    Bloc( int apartamente, float etaje, bool balcon, int an) : anConstructie(an){
        this->nrApartamente = apartamente;
        this->nrEtaje = etaje;
        this->areBalcon = balcon;
        this->nrLocuitori = new int [nrApartamente];
        for (int i=0; i< 1; i++){
            this->nrLocuitori[i] = nrApartamente * 3;
        }
    }

    Bloc(const Bloc& b) : anConstructie(b.anConstructie){
        this->nrApartamente = b.nrApartamente;
        this->nrEtaje = b.nrEtaje;
        this->areBalcon = b.areBalcon;
        this->nrLocuitori = new int [nrApartamente];
        for (int i=0; i< 1; i++){
            this->nrLocuitori[i] = b.nrLocuitori[i];
        }

    }

    ~Bloc() {
        if (this->nrLocuitori != NULL){
        delete[]this->nrLocuitori;
        }
    }


    int getnrApartamente(){
        return this->nrApartamente;
    }

    void setnrApartamente(int nrApartamente){
        if( nrApartamente > 0) {
            this->nrApartamente = nrApartamente;
        }

    }

    void afisareBloc() {
        cout << "Numar Apartamente:" << this->nrApartamente << endl;
        cout << "Numar Etaje:" << this->nrEtaje <<endl;
        cout << "Are Balcon:" << (this->areBalcon ? "Da" : "NU") << endl;
        if ( this->nrLocuitori != NULL){
            for (int i=0; i < 1; i++){
                cout << this->nrLocuitori[i] << endl;
            }
        }
        cout << "An constructie:" << this->anConstructie << endl;
    
    }
};


float Bloc::nrEtaje = 5;


int main(){
    Bloc b1;
    b1.afisareBloc();
    Bloc b2(40, 4, false, 2021);
    b2.setnrApartamente(35);
    b2.afisareBloc();

    return 0;

}



