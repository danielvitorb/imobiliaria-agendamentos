#include <string>
using namespace std;

class Cliente {
    private:
        static int nextId;
        int id;
        string telefone;
        string nome;
    public:
        Cliente(string telefone = "", string nome = "");

        void setTelefone(string telefone);
        void setNome(string nome);

        int getId();
        string getTelefone();
        string getNome();
};