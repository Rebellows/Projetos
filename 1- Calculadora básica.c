#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

char nome[99];
char c;
int valor, num, v = 0, produto = 1, soma = 0, sub = 0, divi = 0;

int main() {
    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Olá %s, o que deseja fazer?\n [1] Calculadora\n [2] Benção\nDigite aqui: ", nome);
    scanf("%d", &valor);
    if (valor == 1) {
        printf("Certo, você deseja usar a calculadora. Qual das opções deseja fazer?\n [1] Adição        | [7]\n [2] Subtração     | [8]\n [3] Divisão       | [9]\n [4] Multiplicação | [10]\n [5] Potenciação   | [11]\n [6] Radiciação    | [12]\nDigite aqui: ");
        scanf("%d", &num);
        if (num == 4) {
            printf("Entendido, vamos multiplicar.\n");
            while(1) {
                printf("Insira um número inteiro (Digite [P] para parar): ");
                scanf("%d", &v);
                c = getchar();
                if (c =='P'|| c == 'p') {
                    break;
                }
            produto *= v;          
            }
            printf("O resultado obtido ao efetuar a multiplicação é: %d", produto); 
            return 0; 
        }
        if (num == 1) {
            printf("Entendido, vamos somar. \n");
            while(1) {
                printf("Insira um número inteiro (Digite [P] para parar): ");
                scanf("%d", &v);
                c = getchar();
                if (c =='P'|| c == 'p') {
                    break;
                }
            soma += v;          
            }
            printf("O resultado obtido ao efetuar a soma é: %d", soma); 
            return 0; 
        }
        if (num == 2) {
            printf("Entendido, vamos subtrair.\n");
            printf("Primeiro, digite o valor inicial: ");
            scanf("%d", &sub);
            while(1) {
                printf("Insira um número inteiro (Digite [P] para parar): ");
                scanf("%d", &v);
                c = getchar();
                if (c =='P'|| c == 'p') {
                    break;
                }
            sub -= v;          
            }
            printf("O resultado obtido ao efetuar a subtração é: %d", sub); 
            return 0; 
        }
        if (num == 3) {
            printf("Entendido, vamos dividir.\n");
            printf("Primeiro, digite o valor inicial: ");
            scanf("%d", &divi);
            while(1) {
                printf("Insira um número inteiro (Digite [P] para parar): ");
                scanf("%d", &v);
                c = getchar();
                if (c =='P'|| c == 'p') {
                    break;
                }
                if (v == 0) {
                    printf("Divisão por 0 não existe.\n");
                    break;
                }
            divi /= v;          
            }
            printf("O resultado obtido ao efetuar a divisão é: %d", divi); 
            return 0;
        }
        if (num == 5) {
            printf("Entendido, faremos potenciação!\n");
            float a, b, c;
            printf("Digite um número a ser elevado: ");
            scanf("%f", &a);
            printf("Digite o seu expoente: ");
            scanf("%f", &b);
            c = pow(a, b);
            printf("O resultado de %.1f^%.1f é aproximadamente: %.1f", a, b, c);
            }
        if (num == 6) {
            float b, i, r;
            printf("Certo, vamos calcular raízes!\n");
            printf("Digite o valor a aplicar a raiz: ");
            scanf("%f", &b);
            printf("Digite o índice da raiz: ");
            scanf("%f", &i);
            r = pow(b, 1/i);
            printf("O valor de %.1f em uma raíz de índice %.1f é aproximadamente: %.1f", b, i, r);
            return 0;
            }
        else {
            printf("O valor digitado não é válido.");
            }
        }
    if (valor == 2) {
        printf("%s, Deus te abençoe.", nome);
        return 0;
        }
    else if (valor != 1 && valor != 2) {
        printf("O valor digitado não é válido.");
        }
    }
