#include <string>
using namespace std;

class Corretor {
    private: // Atributos private
        static int nextId;
        int id;
        string telefone;
        string nome;
        bool avaliador;
        double lat;
        double lng;

    public: // Construtor e métodos public
        Corretor(string telefone = "", int x = 0, double latitude = 0, double longitude = 0, string nome = "");

        void setTelefone(string telefone);
        void setNome(string nome);
        void setAvaliador(int x);
        void setLatitude(double latitude);
        void setLongitude(double longitude);

        int getId();
        string getTelefone();
        string getNome();
        bool getAvaliador();
        double getLatitude();
        double getLongitude();
};