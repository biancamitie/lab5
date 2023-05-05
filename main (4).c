#include <stdio.h>

#define LINHAS 4
#define COLUNAS 4

int main() {
    int matriz[LINHAS][COLUNAS];
    int i, j, contador = 0;


    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);


            if (matriz[i][j] > 10) {
                contador++;
            }
        }
    }

     printf("A matriz possui %d valores maiores que 10.\n", contador);
}

#include <stdio.h>

#define LINHAS 5
#define COLUNAS 5

int main() {
    int matriz[LINHAS][COLUNAS] = 
    {
        1,0,0,0,0,
        0,1,0,0,0,
        0,0,1,0,0,
        0,0,0,1,0,
        0,0,0,0,1,
    };
    int i, j;


    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;

}

#include <stdio.h>

#define DIMENSAO 5

int main() {
    int matriz[DIMENSAO][DIMENSAO];
    int i, j;


    for (i = 0; i < DIMENSAO; i++) {
        for (j = 0; j < DIMENSAO; j++) {
            if (i == j) {
                matriz[i][j] = 1;
            } else {
                matriz[i][j] = 0;
            }
        }
    }

    printf("Matriz resultante:\n");
    for (i = 0; i < DIMENSAO; i++) {
        for (j = 0; j < DIMENSAO; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>

int main(){

    int matriz[5][5], i,j,x, aux = 1;

    printf("Digite matriz 5x5: ");

    for(i=0; i < 5; i++){
        for(j=0; j <5; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Digite valor busca: ");
    scanf("%d", &x);

    for (i = 0; i < 5; i++) {
       for(j = 0; j < 5; j++){
        if(matriz[i][j] == x){
            printf("\nvalor encontrado na linha %d, na coluna %d.", i+1, j+1);
        }
        aux = 0;

       }

    }
      
    if(aux){
        printf("nao encontrado");
        return 0; 
        }
    
    }

#include <stdio.h>

int main() {
    int A[10][10];

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (i < j) {
                A[i][j] = 2*i + 7*j - 2;
            } else if (i == j) {
                A[i][j] = 3*i*i - 1;
            } else {
                A[i][j] = 4*i*i*i - 5*j*j + 1;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matriz[4][4];
    int i, j;
    

    srand(time(NULL));
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            matriz[i][j] = rand() % 20 + 1;
        }
    }
    
 
    printf("Matriz original:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
  
    for(i = 0; i < 4; i++) {
        for(j = i + 1; j < 4; j++) {
            matriz[i][j] = 0;
        }
    }
    

    printf("\nMatriz transformada:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHAS 5
#define COLUNAS 5

int main() {
    int cartela[LINHAS][COLUNAS] = {0};
    int numeros[100] = {0};
    int i, j, num;


    srand(time(NULL));


    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {

            do {
                num = rand() % 100;
            } while (numeros[num] == 1);

            cartela[i][j] = num;
            numeros[num] = 1;
        }
    }


    printf("Cartela de Bingo:\n");
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("%2d ", cartela[i][j]);
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>
#include <string.h>

int main(){

    char str[20] = "Hello World";
    printf("%s\n", str);

    return 0;

    }


#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count = 0;

    printf("Digite uma string contendo apenas 0's e 1's: ");
    scanf("%s", str);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == '1') {
            count++;
        }
    }

    printf("O numero de 1's na string eh: %d\n", count);

    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    printf("A palvra ao contrario eh: ");

    for(int i = strlen(palavra) - 1; i >=0; i--){
        printf("%c", palavra[i]);
    }
    

    return 0;
}

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char palavra[50], c;
    int i, vogais = 0;

    printf("Digite uma palavra: ");
    scanf("%s", &palavra);

    for(i = 0; i < strlen(palavra); i++){
        if(tolower(palavra[i])== 'a' || tolower(palavra[i] == 'e') || tolower(palavra[i] == 'i') || tolower(palavra[i] == 'o') || tolower(palavra[i] == 'u')){
            vogais++;
        }
    }

    printf("A palavra possui %d vogais", vogais);

    printf("\nDigite um caractere para substituir as vogais: ");
    scanf("%s", &c);

    
    for(i = 0; i < strlen(palavra); i++){
        if(tolower(palavra[i])== 'a' || tolower(palavra[i] == 'e') || tolower(palavra[i] == 'i') || tolower(palavra[i] == 'o') || tolower(palavra[i] == 'u')){
            palavra[i] = c;
        }
    }

    printf("A palavra alterada eh: %s", palavra);


    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    char palavra[50];
    int i;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    for(i=0; i < strlen(palavra); i++){
        if(palavra[i]>= 'A' && palavra[i]<= 'Z'){
            palavra[i] = palavra[i] + 32;
        }
    }

    printf("Em minusculo: %s", palavra);




    return 0;
}


#include <stdio.h>
#include <string.h>

int main() {
    char palavra[50];
    int i;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    for(i=0; i < strlen(palavra); i++){
        if(palavra[i]>= 'a' && palavra[i]<= 'z'){
            palavra[i] = palavra[i] - 32;
        }
    }

    printf("Em maisculo: %s", palavra);




    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    char frase[100];
    printf("Digite uma frase: ");
    fgets(frase, 100, stdin);

    int tam = strlen(frase);
    char nova_frase[tam];
    int j = 0;

    for (int i = 0; i < tam; i++) {
        if (frase[i] != ' ') {
            nova_frase[j] = frase[i];
            j++;
        }
    }

    nova_frase[j] = '\0';
    printf("Frase sem espacos em branco: %s\n", nova_frase);

    return 0;
}


#include <stdio.h>
#include <string.h>

int main() {
    char string[100];
    char l1, l2;

    printf("Digite uma string: ");
    fgets(string, 100, stdin);

    printf("Digite a letra L1 que deseja substituir: ");
    scanf("%c", &l1);

    printf("Digite a letra L2 que deseja colocar no lugar de L1: ");
    scanf(" %c", &l2);

    int tam = strlen(string);

    for (int i = 0; i < tam; i++) {
        if (string[i] == l1) {
            string[i] = l2;
        }
    }

    printf("Nova string: %s\n", string);

    return 0;
}


#include <stdio.h>
#include <string.h>

#define TAMANHO_MATRIZ 5

int main() {
    char carros[TAMANHO_MATRIZ][20];
    float consumo[TAMANHO_MATRIZ];


    for (int i = 0; i < TAMANHO_MATRIZ; i++) {
        printf("Digite o modelo do carro %d: ", i+1);
        fgets(carros[i], 20, stdin);
        carros[i][strcspn(carros[i], "\n")] = '\0'; 

        printf("Digite o consumo do carro %d (km/l): ", i+1);
        scanf("%f", &consumo[i]);
        getchar(); 
    }


    float menor_consumo = consumo[0];
    int indice_menor_consumo = 0;

    for (int i = 1; i < TAMANHO_MATRIZ; i++) {
        if (consumo[i] < menor_consumo) {
            menor_consumo = consumo[i];
            indice_menor_consumo = i;
        }
    }

    printf("O modelo mais econômico é o %s, com um consumo de %.2f km/l\n", carros[indice_menor_consumo], menor_consumo);


    printf("\nConsumo para percorrer 1000 km:\n");

    for (int i = 0; i < TAMANHO_MATRIZ; i++) {
        float litros = 1000 / consumo[i];
        printf("%s: %.2f litros\n", carros[i], litros);
    }

    return 0;
}


#include <stdio.h>
#include <string.h>

int main(){

    char str[20];
    float valor, porcentagem;
    printf("Nome da mercadoria: ");
    scanf("%s", &str);

    printf("Valor da mercadoria: ");
    scanf("%f", &valor);

    porcentagem = valor - (valor*0.10);

    printf("Mercadoria: %s\n", str);
    printf("10%% desconto = %.2f\n", porcentagem);



    return 0;

    }


#include <stdio.h>
#include <string.h>

int main() {
    char string[100];
    int i, j;

    printf("Digite uma string: ");
    fgets(string, 100, stdin);
    string[strcspn(string, "\n")] = '\0'; // Removendo o \n da string

    printf("Digite o valor de i: ");
    scanf("%d", &i);

    printf("Digite o valor de j: ");
    scanf("%d", &j);

    if (i >= 0 && j >= 0 && i <= strlen(string) && j <= strlen(string) && i <= j) {
        printf("Segmento S[%d..%d]: ", i, j);
        for (int k = i; k <= j; k++) {
            printf("%c", string[k]);
        }
        printf("\n");
    } else {
        printf("Valores de i e j inválidos.\n");
    }

    return 0;
}


#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define DESLOCAMENTO 3 

int main() {
    char string[100];
    int i, tamanho;

    printf("Digite uma string: ");
    fgets(string, 100, stdin);
    string[strcspn(string, "\n")] = '\0'; 

    tamanho = strlen(string);

    for (i = 0; i < tamanho; i++) {
        if (isalpha(string[i])) { 
            if (islower(string[i])) { 
                string[i] = ((string[i] - 'a') + DESLOCAMENTO) % 26 + 'a'; 
            } else {
                string[i] = ((string[i] - 'A') + DESLOCAMENTO) % 26 + 'A'; 
            }
        }
    }

    printf("String cifrada: %s\n", string);

    return 0;
}


#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char string[100];
    int i, j, tamanho, palindromo = 1;

    printf("Digite uma string: ");
    fgets(string, 100, stdin);
    string[strcspn(string, "\n")] = '\0';

    tamanho = strlen(string);

    for (i = 0, j = tamanho - 1; i < j; i++, j--) {
        while (!isalpha(string[i]) && i < j) { 
            i++;
        }
        while (!isalpha(string[j]) && i < j) { 
            j--;
        }
        if (tolower(string[i]) != tolower(string[j])) { 
            palindromo = 0;
            break;
        }
    }

    if (palindromo) {
        printf("A string é um palindromo.\n");
    } else {
        printf("A string não é um palindromo.\n");
    }

    return 0;
}


#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int n;

    printf("Digite a primeira string: ");
    fgets(str1, 100, stdin);
    str1[strcspn(str1, "\n")] = '\0'; 

    printf("Digite a segunda string: ");
    fgets(str2, 100, stdin);
    str2[strcspn(str2, "\n")] = '\0'; 

    printf("Digite o valor de N: ");
    scanf("%d", &n);

    strncat(str1, str2, n); 
    str1[strlen(str1)] = '\0'; 

    printf("Resultado: %s\n", str1);

    return 0;
}


#include <stdio.h>
#include <string.h>

int main() {
    char digits[] = "73167176531330624919225119674426574742355349194934"
                    "96983520312774506326239578318016984801869478851843"
                    "85861560789112949495459501737958331952853208805511"
                    "12540698747158523863050715693290963295227443043557"
                    "66896648950445244523161731856403098711121722383113"
                    "62229893423380308135336276614282806444486645238749"
                    "30358907296290491560440772390713810515859307960866"
                    "70172427121883998797908792274921901699720888093776"
                    "65727333001053367881220235421809751254540594752243"
                    "52584907711670556013604839586446706324415722155397"
                    "53697817977846174064955149290862569321978468622482"
                    "83972241375657056057490261407972968652414535100474"
                    "82166370484403199890008895243450658541227588666881"
                    "16427171479924442928230863465674813919123162824586"
                    "17866458359124566529476545682848912883142607690042"
                    "24219022671055626321111109370544217506941658960408"
                    "07198403850962455444362981230987879927244284909188"
                    "84580156166097919133875499200524063689912560717606"
                    "05886116467109405077541002256983155200055935729725"
                    "71636269561882670428252483600823257530420752963450";
    int n = strlen(digits);
    int max_product = 0;
    
    for (int i = 0; i < n - 4; i++) {
        int product = (digits[i] - '0') * (digits[i+1] - '0') * 
                      (digits[i+2] - '0') * (digits[i+3] - '0') * 
                      (digits[i+4] - '0');
        if (product > max_product) {
            max_product = product;
        }
    }
    
    printf("Maior produto: %d\n", max_product);
    
    return 0;
}

#include <stdio.h>

int main (){

    int A[6] = {1, 0, 5, -2, -5, 7};
    int soma;

    soma = A[0] + A[1] + A[5];
    printf("Soma dos vetores = %d\n",soma);

    A[4] = 100;

    for(int i = 0; i < 6; i++){
        printf("Vetor A[%d]\n", A[i]);
    }

    return 0;

}

#include <stdio.h>

int main (){

    int vetor[8], x, y, soma;

    printf("digite 8 valores: ");
    for(int i = 0; i < 8; i++){
        scanf("%d", &vetor[i]);
    }


    printf("Digite valor de y e x (0 a 7)");
    scanf("%d %d", &x, &y);

    soma = vetor[x] + vetor[y];

    printf("Valor x + y = %d", soma);



    return 0;

}

#include <stdio.h>

int main (){

    int vetor[6];

    printf("digite 6 valores: ");

    for(int i = 0; i < 6; i++){
        scanf("%d", &vetor[i]);
    }

    for(int i = 5; i >= 0; i--){
        printf("%d\n", vetor[i]);
    }



    return 0;

}

#include <stdio.h>

int main (){

    int vetor[5], maior = 0, menor = 0;

    printf("digite 5 valores: ");

    for(int i = 0; i < 5; i++){
        scanf("%d", &vetor[i]);
    }


    for(int i = 1; i < 5; i++) {
        if(vetor[i] > vetor[maior]) {
            maior = i;
        }
        if(vetor[i] < vetor[menor]) {
            menor = i;
        }
    }

    printf("Posicao do maior valor: %d\n", maior);
    printf("Posicao do menor valor: %d\n", menor);

    return 0;

}

#include <stdio.h>

int main (){

    int vetor[50];

    for(int i = 0; i < 50; i++){
        vetor[i] = (i+5*i)%(i+1);
    }


    for(int i = 0; i < 50; i++) {
        printf("%d\n", vetor[i]);

    }

    return 0;

}

#include <stdio.h>

int primo(int n);
int main (){

    int vetor[10], i;

    printf("digite 10 valores: ");

    for(i = 0; i < 10; i++){
        scanf("%d", &vetor[i]);
    }

  for(i = 0; i < 10; i++) {
        if(primo(vetor[i])) {
            printf("%d na posicao %d\n", vetor[i], i);
        }
    }


    return 0;



}

int primo(int n){
    int i;
    if(n <=1){
        return 0;
    }
    for(i = 2; i<= n/2; i++){
        if(n%i == 0 ){
            return 0;
        }
    }
    return 1;
}

#include <stdio.h>

int main (){

    int vetor[6], par = 0, impar = 0, soma = 0, i;

    printf("digite 6 valores: ");

    for(i = 0; i < 6; i++){
        scanf("%d", &vetor[i]);

        if(vetor[i] % 2 == 0){
            par++;
            par += vetor[i];
        }
        else{
            impar++;
        }
    }

    printf("\nNumeros pares digitados: ");
    for(i = 0; i < 6; i++) {
        if(vetor[i] % 2 == 0) {
            printf("%d, ", vetor[i]);
        }
    }

    printf("\nSoma dos vetores pares digitados: %d", soma);

    printf("\nnumeros impares digitados: ");
    for(i = 0; i < 6; i++){
        if(vetor[i]%2 !=0){
            printf("%d, ", vetor[i]);
        }
    }
    printf("\nQuantidade de numeros impares digitados: %d\n", impar);


    return 0;

}

#include <stdio.h>

#define TAM 10 

int main() {
    int vetor[TAM], i, j, num;
    
    for(i = 0; i < TAM; i++) {
        printf("Digite um numero: ");
        scanf("%d", &num);
        
        for(j = 0; j < i; j++) {
            if(num == vetor[j]) {
                printf("numero repetido. Digite outro numero.\n");
                i--; 
                break;
            }
        }
        

        vetor[i] = num;
    }

    printf("\nVetor final: ");
    for(i = 0; i < TAM; i++) {
        printf("%d ", vetor[i]);
    }
    
    return 0;
}
