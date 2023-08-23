#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <limits>

using namespace std;

// Defina uma estrutura para armazenar uma pergunta e suas opções
struct Question {
    string text;
    vector<string> options;
    int correctOption;  // Índice da opção correta
};

// Defina uma estrutura para representar uma equipe
struct Team {
    string name;
    int score;

    // Construtor para inicializar uma equipe
    Team(const string& _name) : name(_name), score(0) {}
};

// Função para exibir uma pergunta e suas opções
void displayQuestion(const Question& question) {
    cout << question.text << endl;
    for (size_t i = 0; i < question.options.size(); i++) {
        cout << i + 1 << ". " << question.options[i] << endl;
    }
}

// Função para verificar se a resposta do jogador está correta
bool checkAnswer(int playerAnswer, const Question& q) {
    return playerAnswer == q.correctOption;
}

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));

    // Crie um vetor para armazenar as perguntas
    vector<Question> questions;

    // Exiba uma mensagem de boas-vindas e obtenha o nome da equipe
    cout << "Bem-vindo ao Jogo +++++++++++++++" << endl;
    cout << "Por favor, insira o nome da sua equipe: " << endl;
    string teamName;
    cin >> teamName;

    // Defina o número de rodadas e perguntas por rodada
    int totalRounds = 1;
    int totalQuestionsPerRound = 4;

    // Crie um vetor para armazenar as equipes e adicione a primeira equipe
    vector<Team> teams;
    teams.push_back(Team(teamName));

    // Defina e preencha as perguntas
    Question q1;
    q1.text = "Qual a função usada para leitura de dados no código?";
    q1.options = {"scanf", "fscanf", "rand", "printf"};
    q1.correctOption = 1;  // Índice da opção correta
    questions.push_back(q1);

    // Defina e preencha o restante das perguntas...
    // (Repita blocos similares para as perguntas q2 a q12)

    // Embaralhe a ordem das perguntas
    random_shuffle(questions.begin(), questions.end());

    // Percorra as rodadas
    for (int round = 1; round <= totalRounds; ++round) {
        cout << "-----------------------------------------" << endl;
        cout << "Rodada " << round << " de " << totalRounds << endl;

        // Percorra as perguntas por rodada
        for (int questionIndex = 0; questionIndex < totalQuestionsPerRound; ++questionIndex) {
            const Question& currentQuestion = questions[questionIndex];

            cout << "Pergunta " << questionIndex + 1 << ":" << endl;
            displayQuestion(currentQuestion);

            int playerAnswer;
            cout << "Digite a opção correta: ";
            cin >> playerAnswer;

            // Verifique a resposta do jogador e atualize a pontuação
            if (checkAnswer(playerAnswer, currentQuestion)) {
                cout << "Resposta correta! Você ganhou 1 ponto." << endl;
                teams[0].score++;
            } else {
                cout << "Resposta incorreta!" << endl;
            }
        }

        // Exiba as pontuações após cada rodada
        cout << "-----------------------------------------" << endl;
        cout << "Pontuação após a rodada " << round << ":" << endl;
        for (const Team& team : teams) {
            cout << "Equipe " << team.name << ": " << team.score << " pontos." << endl;
        }
    }

    // Exiba a classificação final
    cout << "-----------------------------------------" << endl;
    cout << "Fim do jogo! Classificação final:" << endl;
    sort(teams.begin(), teams.end(), [](const Team& a, const Team& b) {
        return a.score > b.score;
    });

    int rank = 1;
    for (const Team& team : teams) {
        cout << "Posição " << rank << ": Equipe " << team.name << " - " << team.score << " pontos." << endl;
        rank++;
    }

    return 0;
}
