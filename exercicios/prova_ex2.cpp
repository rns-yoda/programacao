#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

/*
	Exercício prático 2: Calcular a quantidade diária de água recomendável (12 pontos)
		* Implementar um programa para calcular a quantidade diária recomendada de água que uma pessoa deve
		  ingerir. O Cálculo deve considerar as seguintes informações de entrada do usuário: peso (em quilogramas),
		  nível de actividade física (NAF):
			- Sedentário (pouco ou nenhum exercício) = 1,0
			- Levemente activo (exercício´leve ou esportes 1-3 dias por semana) = 1,2
			- Moderadamente activo (exercício moderado ou esportes 3-5 dias por semana) = 1,4
			- Altamente activo (exercício intenso ou esportes 6-7 dias por semana) = 1,6
			- Extremamente activo (exercício muito intenso ou trabalho físico exigente) = 1,8.

	Requisitos:
		* Solicitar as informações necessárias com mensagens claras e amigáveis;
		* Garantir que o peso seja maior do que zero e que o nível de actividade esteja entre as opções
		  disponíveis;
		* Calcular a quantidade básica de água recomendada: QBAR = Peso x 0,035;
		* Multiplicar a QBAR pelo NAF para encontrar a quantidade diária de água recomendável: QDAR = QBAR x NAF
		* Exibir uma mensagem semelhante a esta: 
			“ Com base no seu peso de 70 kg e nível de atividade física (Moderadamente ativo), a quantidade diária
			  recomendada de água é de 3,43 litros.”
*/

int main() {
    float peso, qbar, qdar, naf;
    int nivelAtividade;
    string descricaoAtividade;

    do{
        // Solicitar peso
    	cout << "Peso (em quilogramas): ";
    	cin >> peso;

   		// Validar peso
    	if (peso <= 0) {
        	cout << "\nO peso deve ser maior que zero. Tente novamente.\n" << endl;
    	}
    
	} while(peso <= 0);

    // Exibir opções de nível de atividade física
    cout << "\n Selecione o seu nivel de atividade fisica: \n" << endl;
    cout << "1. Sedentario (pouco ou nenhum exercicio)" << endl;
    cout << "2. Levemente ativo (exercicio leve ou esportes 1-3 dias por semana)" << endl;
    cout << "3. Moderadamente ativo (exercicio moderado ou esportes 3-5 dias por semana)" << endl;
    cout << "4. Altamente ativo (exercicio intenso ou esportes 6-7 dias por semana)" << endl;
    cout << "5. Extremamente ativo (exercicio muito intenso ou trabalho fisico exigente)" << endl;
    cout << "\n Escolha uma opcao (1-5): ";
    cin >> nivelAtividade;

    // Determinar o fator de atividade e validar entrada
    switch (nivelAtividade) {
        case 1:
            naf = 1.0;
            descricaoAtividade = "Sedentario";
            break;
        case 2:
            naf = 1.2;
            descricaoAtividade = "Levemente ativo";
            break;
        case 3:
            naf = 1.4;
            descricaoAtividade = "Moderadamente ativo";
            break;
        case 4:
            naf = 1.6;
            descricaoAtividade = "Altamente ativo";
            break;
        case 5:
            naf = 1.8;
            descricaoAtividade = "Extremamente ativo";
            break;
        default:
            cout << "Opção invalida. Reinicie o programa e tente novamente." << endl;
    }

    // Calcular a quantidade básica de água recomendada (QBAR)
    qbar = peso * 0.035;

    // Calcular a quantidade diária recomendada de água (QDAR)
    qdar = qbar * naf;

    // Exibir o resultado
    cout << fixed << setprecision(2);
    cout << "\n Com base no seu peso de " << peso << " kg e nivel de atividade fisica (" << descricaoAtividade << "), a quantidade diaria recomendada de agua e de " << qdar << " litros." << endl;

    return 0;
}
