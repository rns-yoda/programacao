#include <iostream> 

using namespace std;

/**
	Exercício prático 1: Calcular a TMB

	Implementar um programa que realize o cálculo da Taxa Metabólica Basal (TMB), 
	utilizando a fórmula de Harris-Benedict. 
	O programa deve receber como entrada os seguintes dados do usuário: 
		* idade (em anos), peso (em quilogramas), altura (em centímetros) e sexo (masculino ou feminino).
	
	A fórmula para o cálculo da TMB varia de acordo com o sexo do usuário: 
		* Para homens: TMB = 88,36 + (13,4 × peso) + (4,8 × altura) − (5,7 × idade)
		* Para mulheres: TMB = 447,6 + (9,2 × peso) + (3,1 × altura) − (4,3 × idade)
	
	Requisitos: 
		* Solicitar as informações necessárias com mensagens claras e amigáveis; 
		* Calcular a TMB;
		* Exibir o resultado formatado, indicando a taxa metabólica basal correspondente.

*/

//Metodo para validar sexo
bool isSexoInvalido(char sexo){
	return (sexo != 'm' && sexo != 'f');
}

int main() {
	
    int idade;
    float peso, altura, tmb;
    char sexo;

    // Solicitar informações do usuário
    cout << "=== Calculadora de Taxa Metabolica Basal (TMB) ===\n" << std::endl;
    
    cout << "Idade (em anos): ";
    cin >> idade;
    
    cout << "Peso (em kg): ";
    cin >> peso;
    
    cout << "Altura (em cm): ";
    cin >> altura;
    
    do{
        cout << "Sexo (m/f): ";
   		cin >> sexo;

    	// Validar sexo
    	if (isSexoInvalido(sexo)) {
        	cout << "\nErro: Sexo invalido. Use 'm' ou 'f'.\n" <<endl; 
    	}
    
	} while(isSexoInvalido(sexo));


    // Calcular TMB
    if (sexo == 'm') {
        tmb = 88.36 + (13.4 * peso) + (4.8 * altura) - (5.7 * idade);
    } else {
        tmb = 447.6 + (9.2 * peso) + (3.1 * altura) - (4.3 * idade);
    }

    // Exibir resultado  
    cout << "Sua TMB eh: " << tmb << " calorias por dia. \n";
    
	return 0;
	
}
