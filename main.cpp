#include "Carro.h"
#include "Mota.h"

int main() {
    Carro carro("Toyota GT86", 4, 130, "Preto Fosco", 20347.95, "Los Santos Customs", "Toyota", "FIXE-2024");
    Mota mota("Honda Seila",300, "Branco brilhante", 6070.90, "6STR", "Honda", "FIXE-2025");


    cout << "╓─────────────────────────────╖" << endl;
    cout << "║            Carros 🏎️          ║" << endl;
    cout << "╙──────────────────────────────╜" << endl;
    carro.mostrarDetalhes();
    
    cout << "┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉" << endl;
    
    cout << "╓─────────────────────────────╖" << endl;
    cout << "║            Motas 🏍️          ║" << endl;
    cout << "╙─────────────────────────────╜" << endl;
    mota.mostrarDetalhes();

    return 0;
}


//créditos ao programador jogy pela correção de erros 
