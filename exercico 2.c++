#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Habilidade {
    std::string nome;
    int nivel;
    int valor;
    int modificador;

    Habilidade() : nivel(0), valor(0), modificador(0) {}

    void setNome(const std::string& nome) {
        this->nome = nome.substr(0, 50);
    }
};

struct GrupoHabilidades {
    std::string nomeGrupo;
    std::vector<Habilidade> habilidades;
};

void exibirFichaPersonagem(const std::vector<GrupoHabilidades>& gruposHabilidades) {
    std::cout << "Ficha de Personagem\n";
    std::cout << "-------------------\n";

    for (const auto& grupo : gruposHabilidades) {
        std::cout << "Grupo: " << grupo.nomeGrupo << std::endl;
        std::cout << "Habilidades:\n";

        for (const auto& habilidade : grupo.habilidades) {
            std::cout << "Habilidade: " << habilidade.nome << ", Nível: " << habilidade.nivel;
            std::cout << ", Valor: " << habilidade.valor << ", Modificador: " << habilidade.modificador << std::endl;
        }

        std::cout << "-------------------\n";
    }
}

int main() {
    string nome;

    cout << "Digite o nome: ";
    getline(cin, nome);

    cout << nome << endl;

    string apelido;

    cout << "Digite o apelido: ";
    getline(cin, apelido);

    cout << apelido << endl;

    std::vector<GrupoHabilidades> gruposHabilidades;

    // Criando grupo de habilidades mágicas
    GrupoHabilidades grupoMagia;
    grupoMagia.nomeGrupo = "Magia";

    Habilidade magiaElemental;
    magiaElemental.nome = "Magias Elementais";
    magiaElemental.nivel = 0;
    magiaElemental.valor = 10;
    magiaElemental.modificador = 1;
    grupoMagia.habilidades.push_back(magiaElemental);

    Habilidade invocacao;
    invocacao.nome = "Invocação";
    invocacao.nivel = 0;
    invocacao.valor = 8;
    invocacao.modificador = 0;
    grupoMagia.habilidades.push_back(invocacao);

    Habilidade transmutacao;
    transmutacao.nome = "Transmutação";
    transmutacao.nivel = 0;
    transmutacao.valor = 6;
    transmutacao.modificador = -1;
    grupoMagia.habilidades.push_back(transmutacao);

    Habilidade necromancia;
    necromancia.nome = "Necromancia";
    necromancia.nivel = 0;
    necromancia.valor = 12;
    necromancia.modificador = 2;
    grupoMagia.habilidades.push_back(necromancia);

    gruposHabilidades.push_back(grupoMagia);

    // Criando grupo de habilidades físicas
    GrupoHabilidades grupoFisico;
    grupoFisico.nomeGrupo = "Físico";

    Habilidade forca;
    forca.nome = "Força";
    forca.nivel = 0;
    forca.valor = 14;
    forca.modificador = 2;
    grupoFisico.habilidades.push_back(forca);

    Habilidade velocidade;
    velocidade.nome = "Velocidade";
    velocidade.nivel = 0;
    velocidade.valor = 16;
    velocidade.modificador = 3;
    grupoFisico.habilidades.push_back(velocidade);

    Habilidade agilidade;
    agilidade.nome = "Agilidade";
    agilidade.nivel = 0;
    agilidade.valor = 12;
    agilidade.modificador = 2;
    grupoFisico.habilidades.push_back(agilidade);

    Habilidade resistencia;
    resistencia.nome = "Resistência";
    resistencia.nivel = 0;
    resistencia.valor = 18;
    resistencia.modificador = 4;
    grupoFisico.habilidades.push_back(resistencia);

    gruposHabilidades.push_back(grupoFisico);

    // Exibir a ficha de personagem inicial
    exibirFichaPersonagem(gruposHabilidades);

    // Solicitar ao usuário para escolher as habilidades e seus níveis
    std::cout << "Escolha as habilidades para o seu personagem:\n";

    for (auto& grupo : gruposHabilidades) {
        std::cout << "Grupo: " << grupo.nomeGrupo << std::endl;

        for (auto& habilidade : grupo.habilidades) {
            int nivel;
            std::string nome;

            std::cout << "Digite o nível para a habilidade " << habilidade.nome << ": ";
            std::cin >> nivel;
            habilidade.nivel = nivel;

            std::cout << "Digite o nome para a habilidade " << habilidade.nome << ": ";
            std::cin >> nome;
            habilidade.setNome(nome);

            habilidade.valor = nivel * 2;  // Exemplo de cálculo de valor baseado no nível
            habilidade.modificador = nivel / 2;  // Exemplo de cálculo de modificador baseado no nível
        }
    }

    // Limpar o buffer de entrada
    cin.ignore();

    // Exibir a ficha de personagem atualizada
    std::cout << "\nFicha de Personagem Atualizada:\n";
    exibirFichaPersonagem(gruposHabilidades);

    return 0;
}
