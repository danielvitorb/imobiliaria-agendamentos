#include <string>
using namespace std;

class Cliente {
    private:
        int id;
        int telefone;
        string nome;
    public:
        void setTelefone(int telefone);
        void setNome(string nome);

        int getId();
        int getTelefone();
        string getNome();
};