#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

struct klasy
{
        string klasaa;       
};

class szkola
{
              vector <struct klasy> spis;
       
        public:
                void wprowadz();
                void wypisz();
                void zapiszDoPliku(const char *);              
};

void szkola::wprowadz()
{
        int ilosc_klas;
        struct klasy wprowadzany;
        cout << "Ilosc klas: ";
        cin  >> ilosc_klas;
        for (int i=0; i<ilosc_klas; i++)
        {
                cout << "Podaj nazwe klasy: ";
                cin >> wprowadzany.klasaa;
                spis.push_back(wprowadzany); 
        }
}
void szkola::wypisz()
{
        for (vector<struct klasy>::iterator it = spis.begin(); it != spis.end(); ++it)
        {
                cout << it->klasaa << "\n";
        }
}

void szkola::zapiszDoPliku(const char *nazwa)
{
        ofstream plik;
        plik.open(nazwa);
        for (vector<struct klasy>::iterator it = spis.begin(); it != spis.end(); ++it)
        {
                plik << it->klasaa << "\n";
        }
        plik.close();  
}

int main(int argc, char** argv) {
        szkola s;
        s.wprowadz();
        s.wypisz();
        s.zapiszDoPliku("dane.txt");
        return 0;
}
