#include <string>
using namespace std;

enum Tipo{
    Casa,
    Apartamento,
    Terreno,
    Indefinido
};

class Imovel {
    private: // Atributos private
        Tipo tipo;
        static int nextId;
        int id;
        int proprietarioId;
        double preco;
        double lat;
        double lng;
        string endereco;

    public: // Construtor e métodos public
        Imovel(Tipo tipo = Indefinido, int id = 0, double latitude = 0, double longitude = 0, double preco = 0, string endereco = "");

        void setTipo(Tipo tipo);
        void setProprietarioId(int id);
        void setPreco(double preco);
        void setLatitude(double latitude);
        void setLongitude(double longitude);
        void setEndereco(string endereco);

        Tipo getTipo();
        int getId();
        int getProprietarioId();
        double getPreco();
        double getLatitude();
        double getLongitude();
        string getEndereco();
};