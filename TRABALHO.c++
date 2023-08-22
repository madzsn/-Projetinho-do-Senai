

#include <iostream>
#include <string>
#include <vector> 
#include <cstdlib>
#include <ctime>                           
#include <algorithm>
#include <limits>

using namespace std;

struct Question {
    string text;
    vector <string> options;
    int correctOption;
}

struct Team {
    string name;
    int score;

    Team(const string& _name) : name(_name), score(0) {}
};

void displayQuestion(const Question& question.){
    cout << q.question << endl;
    for (size_t i = 0; i < q.options.size(); i++){
        cout << i + 1 << ". " << q.options[i] << endl;
    }
}

bool checkAnswer(int playerAnswer, const Question& q){
    return playerAnswer == q.correctOption;
}

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));
   

    random_shuffle(questions.begin(), questions.end());

     vector<Question> questions;

    cout << "Bem-vindo ao Jogo +++++++++++++++" << endl;
    cout << "Por favor, insira o nome da sua equipe: " << endl;
    string teamName;
    cin >> teamName;


    int totalRounds = 1;
    int totalQuestionsPerRound = 4;

    vector<Team> teams;
    teams.push_back(Team(teamName));
    
    Question q1;
    q1.question = "Qual a função usada para leitura de dados no código?";
    q1.options = "Digite o numero da opcao correta:" "\n1- scanf", "\n2- fscanf", "\n3- rand", "\n4- printf";
    q1.correct = 2;
    questions.push-back(q1);

    Question q2;
    q2.question = "Qual desses loops é usado quando você sabe antecipadamente quantas vezes deseja repetir o bloco de código?";
    q2.options = "Digite o numero da opcao correta:" "\n1- for", "\n2- while", "\n3- do-while", "\n4- if-else"
    q2.correct = 1;
    questions.push-back(q2);

    Question q3;
    q3.question = "Qual desses símbolos é usado para destacar um comentário de múltiplas linhas?";
    q3.options = "Digite o numero da opcao correta:" "\n1-<!-- -->", "\n2-#", "\n3-/* */", "\n4-//";
    q3.correct = 3;
    questions.push-back(q3);

    Question q4;
    q4.question = "Qual tipo de dado é usado para armazenar números inteiros?";
    q4.options = "Digite o numero da opcao correta:" "\n1-long", "\n2-float", "\n3-char", "\n4-int";
    q4.correct = 4;
    questions.push-back(q4);

    Question q5;
    q5.question = "Qual desses operadores lógicos é usado se pelo menos uma das opções de uma questão forer verdadeira?";
    q5.options = "Digite o numero da opcao correta:" "\n1-&&", "\n2-||", "\n3-!", "\n4-==";
    q5.correct = 2;
    questions.push-back(q5);

    Question q6;
    q6.question = "Qual dessas bibliotecas é usada para cronometragem de tempo?";
    q6.options = "Digite o numero da opcao correta:" "\n1-<vector>", "\n2-<algorithm>", "\n3-<cstdlib>", "n\4-<ctime>";
    q6.correct = 4;
    questions.push-back(q6);

    Question q7;
    q7.question = "O que uma função recursivas? \nDigite o numero da opção correta: \n 1-**Armazenamento de Dados:** Funções recursivas são usadas para guardar informações temporariamente durante a execução do programa., \n2 -  **Manipulação de Dados:** Elas possibilitam cálculos, operações e transformações dos dados., \n 3 - **Flexibilidade:** Funções recursivas tornam o código adaptável, permitindo atualizações e mudanças de valores., \n 4 - **Controle de Fluxo As variáveis são usadas para tomar decisões e conduzir a lógica do programa. ";
    q7.options = {1, 2, 3, 4};
    q7.correct = 2-"Manipulação de Dados: Funções recursivas possibilitam cálculos, operações e transformações dos dados.";
    questions.push-back(q7);

   Question q8;
    q8.question = "Por que se deve usar Vetores em um codigo? \nDigite o numero da opção correta: \n 1-*Armazenamento de Dados:* Vetores são usados para guardar informações temporariamente durante a execução do programa., \n2- *Manipulação de Dados:* Eles possibilitam cálculos, operações e transformações dos dados., \n 3- *Flexibilidade:* Vetores tornam o código adaptável, permitindo atualizações e mudanças de valores.,\n4- *Controle de Fluxo:* São nós".;
    q8.options = {1, 2, 3, 4};
    q8.correct = 2- "Manipulação de Dados: Vetores são usados para possibilitar o armazenamento eficiente e a manipulação de coleções de dados, como listas ou conjuntos. Eles permitem acesso a elementos por índices e simplificam a gestão de informações relacionadas, melhorando a organização do código e a eficiência das operações";
    questions.push-back(q8);

    Question q9;
    q9.question = "Por que se deve ter uma noção sobre a biblioteca \nDigite o numero da opção correta: \n1- *Armazenamento de Dados:* Ter uma noção sobre bibliotecas é importante para guardar informações temporariamente durante a execução do programa., \n2- *Manipulação de Dados:* É essencial para possibilitar cálculos, operações e transformações dos dados., \n3- *Flexibilidade:* Ter conhecimento sobre bibliotecas torna o código adaptável, permitindo atualizações e mudanças de valores., \n4. *Controle de Fluxo:* É usado para tomar decisões e conduzir a lógica do programa.";
    q9.options = {1, 2, 3, 4};
    q9.correct = 3- " *Flexibilidade:* Ter conhecimento sobre bibliotecas torna o código adaptável, permitindo atualizações e mudanças de valores.";
    questions.push-back(q9);

    Question q10;
    q10.question = " Como lidar com a Inserção de Informações em um codigo? \nDigite o numero da opção correta: \n1-*Armazenamento de Dados:* Lidar com a inserção de informações envolve guardar dados temporariamente durante a execução do programa., 2 - *Manipulação de Dados:* É a forma de realizar cálculos, operações e transformações nos dados inseridos., 3 - *Flexibilidade:* Envolve permitir que o código se adapte a diferentes entradas de informações., 4- *Controle de Fluxo:* Envolve tomar decisões com base nas informações inseridas.";
    q10.options = {1, 2, 3, 4};
    q10.correct =3- "*Flexibilidade:* Envolve permitir que o código se adapte a diferentes entradas de informações.";
    questions.push-back(q10);

    Question q11;
    q11.question = "Qual é a principal vantagem de utilizar vetores na programação? \n1. *Armazenamento de Dados:* Utilizar vetores é vantajoso para armazenar informações temporariamente durante a execução do programa. \n2. *Manipulação de Dados:* É a forma de realizar cálculos, operações e transformações nos dados armazenados nos vetores. \n3. *Flexibilidade:* Utilizar vetores torna o código adaptável, permitindo atualizações e mudanças nos dados. \n4. *Controle de Fluxo:* É usado para tomar decisões sobre a manipulação dos dados nos vetores.";
    q11.options = {1, 2, 3, 4};
    q11.correct = 2- "Manipulação de Dados: É a forma de realizar cálculos, operações e transformações nos dados armazenados nos vetores.";
    question.push-back(q11);

    Question q12;
    q12.question = "Qual destas opções descreve corretamente um vetor em programação?" \n "Digite o numero da opção correta: \n1-  Um tipo de dado que armazena valores do tipo verdadeiro ou falso. \n2- Uma estrutura de controle utilizada para repetir um bloco de código. \n3- Um conjunto não ordenado de elementos, cada um identificado por um índice ou chave. \n4- Uma função que converte um tipo de dado em outro tipo de dado.";
    q12.option = {1, 2, 3, 4};
    q12.correct = 3- "Um conjunto não ordenado de elementos, cada um identificado por um índice ou chave.";
    question.push-back(q12);
    
    for (int round = 1; round <= totalRounds; ++round) {
    cout << "-----------------------------------------" << endl;
    cout << "Rodada " << round << " de " << totalRounds << endl;

    for (int questionIndex = 0; questionIndex < totalQuestionsPerRound; ++questionIndex) {
        const Question& currentQuestion = questions[questionIndex];

        cout << "Pergunta " << questionIndex + 1 << ":" << endl;
        displayQuestion(currentQuestion);

        int playerAnswer;
        cout << "Digite a opção correta: ";
        cin >> playerAnswer;

        if (checkAnswer(playerAnswer, currentQuestion)) {
            cout << "Resposta correta! Você ganhou 1 ponto." << endl;
            teams[0].score++;
        } else {
            cout << "Resposta incorreta!" << endl;
        }
    }

    cout << "-----------------------------------------" << endl;
    cout << "Pontuação após a rodada " << round << ":" << endl;

    for (const Team& team : teams) {
        cout << "Equipe " << team.name << ": " << team.score << " pontos." << endl;
    }
}

    cout << "-----------------------------------------" << endl;
    cout << "Fim do jogo! Ranking final:" << endl;

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
