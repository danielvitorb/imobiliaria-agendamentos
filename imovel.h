#include <string>
using namespace std;

class Imovel {
    private: // Atributos private
        static int nextId;
        int id;
        int proprietarioId;
        double preco;
        double lat;
        double lng;
        string endereco;

    public: // Construtor e métodos public
        Imovel();

        void setPropietarioId(int id);
        void setPreco(double preco);
        void setLatitude(double latitude);
        void setLongitude(double longitude);
        void setEndereco(string endereco);

        int getId();
        int getProprietarioId();
        double getPreco();
        double getLatitude();
        double getLongitude();
        string getEndereco();
};