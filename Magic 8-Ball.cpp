#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {

    while (true)
    {
        srand(time(0));
        int Random = rand() % 9;
        string Risposte_italiano[9] = { "Si", "No", "Forse", "Probabilmente", "Non contarci troppo", "Assolutamente si", "Assolutamente no", "Non posso prevederlo ora", "Chiedi piu' tardi" };
        cout << "Inserisci la tua domanda (o digita 'exit' per uscire): ";
        string Domanda;
        getline(cin, Domanda);
        if (Domanda == "exit")
        {
            break;
        }
        cout << Risposte_italiano[Random] << endl;
        cout << endl;
    }
    return 0;
}

//TODO: 1. Aggiungere la lingua ingele.