#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    return ex15();
}

  ///----------///
/// EXERCICIO 1 ///
 ///----------///

int ex1()
{
    float n1, n2, n3, n4, m;

    printf("Informe a nota um: ");
    scanf("%f", &n1);
    printf("Informe a nota dois: ");
    scanf("%f", &n2);
    printf("Informe a nota tres: ");
    scanf("%f", &n3);
    printf("Informe a nota quatro: ");
    scanf("%f", &n4);

    m = (n1 + n2 + n3 + n4) / 4.0;

    if (m >= 7){
        printf("A media do aluno foi %0.1f, portanto foi Aprovado", m);
    }
    if (m < 7) {
        printf("A media do aluno foi %0.1f, portanto foi Reprovado", m);
    }

    return 0;
}

  ///----------///
/// EXERCICIO 2 ///
 ///----------///

int ex2()
{
    float n1, n2, m;

    printf("Informe a primeira nota: ");
    scanf("%f", &n1);
    printf("Informe a segunda nota: ");
    scanf("%f", &n2);

    m = (n1 + n2) / 2;

    if (m > 0 && m <= 3)
    {
        printf("\nCom %0.1f voce foi Reprovado", m);
    }
    else if (m > 3 && m <= 7)
    {
        printf("\nCom %0.1f voce foi Exame", m);
    }
    else if(m > 7)
    {
        printf("\nCom %0.1f voce foi Aprovado\n", m);
    }

    return 0;
}

  ///----------///
/// EXERCICIO 3 ///
 ///----------///

int ex3()
{
    float n1, n2;

    printf("Informe um numero: ");
    scanf("%f", &n1);
    printf("Informe outro: ");
    scanf("%f", &n2);

    if (n1 < n2)
    {
        printf("\nO primeiro numero e o menor");
    }
    else if (n1 > n2) {
        printf("\nO segundo numero e o menor");
    }
    else if (n1 = n2){
        printf("Os numeros sao iguais");
    }
    return 0;
}

  ///----------///
/// EXERCICIO 4 ///
 ///----------///

int ex4()
{
    float n1, n2, n3;

    printf("Informe o primeiro numero: ");
    scanf("%f", &n1);
    printf("Informe o segundo numero: ");
    scanf("%f", &n2);
    printf("Informe o terceiro numero: ");
    scanf("%f", &n3);

    if (n1 > n2 && n1 > n3){
        printf("O maior numero e %.f", n1);
    }
    else if (n2 > n1 && n2 > n3){
        printf("O maior numero e %.f", n2);
    }
    else if(n3 > n1 && n3 > n2) {
        printf("O maior numero e %.f", n3);
    }
    else if (n1 = n2 = n3){
        printf("Os numeros sao iguais");
    }

    return 0;
}

  ///----------///
/// EXERCICIO 5 ///
 ///----------///

int ex5()
{
    printf("\n|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
    printf("\n|   ESCOLHA DO USUARIO  |                OPERACAO             |");
    printf("\n|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
    printf("\n|            1          |        Media entre os numeros       |");
    printf("\n|            2          |    Diferenca do maior pelo menor    |");
    printf("\n|            3          |       Produto entre os numeros      |");
    printf("\n|            4          |   Divisao do primeiro pelo segundo  |");
    printf("\n|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n");

    float n, n1, n2, med, a, a2, a3, p, d;

    printf("\nEscolha a operacao que ira fazer: ");
    scanf("%f", &n);
    ///Validação do numero da operação
    if (n < 1 || n > 4) {
        printf("O numero %.f nao faz parte das operacoes", n);
    }
    ///Informandos os numeros
    if (n >= 1 && n <= 4) {
        printf("\nInforme o primeiro numero: ");
        scanf("%f", &n1);

        printf("\nInforme o segundo numero: ");
        scanf("%f", &n2);
    }
    ///Operação 1
    if (n == 1)
    {
        printf("\nMEDIA ENTRE OS NUMEROS");

        med = (n1 + n2) / 2;

        printf("\nA media dos numeros e: %.1f", med);

    }
    ///Operação 2
    if(n == 2){
        if (n1 > n2) { /// 4 - 1
        printf("\nDIFERENCA DO MAIOR PELO MENOR");

        a = n1 - n2;

        printf("\nO resultado e: %.1f", a);
        }

        else if (n1 < n2) { /// 1 - 4
        printf("\nDIFERENCA DO MAIOR PELO MENOR");

        a2 = n2 - n1;

        printf("\nO resultado e: %.1f", a2);
        }

        else { /// 3 - 3
        a3 = n2 - n1;

        printf("\nO resultado e: %.1f", a3);
        }
    }
    ///Operação 3
    if (n == 3)
    {
        printf("\nPRODUTO ENTRE OS NUMEROS DIGITADOS");

        p = n1 * n2;

        printf("\nO produto dos numeros e: %.1f", p);

    }
    ///Operação 4
    if (n == 4)
    {
        if (n2 != 0){
        printf("\nDIVISAO DO PRIMEIRO PELO SEGUNDO");

        d = n1 / n2;

        printf("\nA divisao dos numeros e: %.2f", d);
        }
        else {
            printf("O segundo numero deve ser diferente de zero");
        }
    }
    return 0;
}

  ///----------///
/// EXERCICIO 6 ///
 ///----------///

int ex6()
{
    printf("\n||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
    printf("\n|   ESCOLHA DO USUARIO  |                OPERACAO              |");
    printf("\n||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
    printf("\n|            1          | O primeiro numero elevado ao segundo |");
    printf("\n|            2          | Raiz quadrada de cada um dos numeros |");
    printf("\n|            3          |  Raiz cubica de cada um dos numeros  |");
    printf("\n||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n");

    float e, n1, n2, r, rq, rq2, rc, rc2;

    printf("\nEscolha a operacao que ira fazer: ");
    scanf("%f", &e);

    if (e < 1 || e > 3 ) {
        printf("O numero %.f nao faz parte das operacoes", e);
    }

    if (e == 1)
    {
        printf("\n||||||||||||||||||||||||||||||||||||||||");
        printf("\n| O PRIMEIRO NUMERO ELEVADO AO SEGUNDO |");
        printf("\n||||||||||||||||||||||||||||||||||||||||\n\n");

        printf("\nInforme o primeiro numero: ");
        scanf("%f", &n1);

        printf("\nInforme o segundo numero: ");
        scanf("%f", &n2);

        r = pow(n1, n2);

        printf("\n\nO primeiro numero elevado ao segundo e: %.2f", r);

    }

    if(e == 2){
        printf("\n||||||||||||||||||||||||||||||||||||||||");
        printf("\n| RAIZ QUADRADA DE CADA UM DOS NUMEROS |");
        printf("\n||||||||||||||||||||||||||||||||||||||||\n\n");

        printf("\nInforme o primeiro numero: ");
        scanf("%f", &n1);

        printf("\nInforme o segundo numero: ");
        scanf("%f", &n2);

        printf("\n\nA raiz quadrada do primeiro numero e %.2f", sqrt(n1));
        printf("\n\nA raiz quadrada do segundo numero e %.2f", sqrt(n2));
    }

    if (e == 3)
    {
        printf("\n||||||||||||||||||||||||||||||||||||||");
        printf("\n| RAIZ CUBICA DE CADA UM DOS NUMEROS |");
        printf("\n||||||||||||||||||||||||||||||||||||||\n\n");

        printf("\nInforme o primeiro numero: ");
        scanf("%f", &n1);

        printf("\nInforme o segundo numero: ");
        scanf("%f", &n2);

        printf("\n\nA raiz cubica do primeiro numero e %.2f", cbrt(n1));
        printf("\n\nA raiz cubica do segundo numero e %.2f", cbrt(n2));
    }

    return 0;
}

  ///----------///
/// EXERCICIO 7 ///
 ///----------///

int ex7()
{
    float s, aum;

    printf("Informe o seu salario: ");
    scanf("%f", &s);

    if (s < 500){
        aum = s + (s * 0.30);

        printf("!!Parabens =) Voce recebeu um aumento de R$%0.2f, e agora voce recebe R$%0.2f ", s * 0.30, aum);
    } else {
        printf("=( Voce nao recebeu um aumento =(");
    }

    return 0;
}

  ///----------///
/// EXERCICIO 8 ///
 ///----------///

int ex8()
{
    float s, aum, aum2;

    printf("Informe o seu salario: ");
    scanf("%f", &s);

    if (s <= 300){
        aum = s + (s * 0.35);

        printf("Voce recebeu um aumento de R$%0.2f, seu novo salario e R$%0.2f ", s * 0.35, aum);
    }
    else if ( s > 300){

        aum2 = s + (s * 0.15);
        printf("Voce recebeu um aumento de R$%0.2f, seu novo salario e R$%0.2f", s * 0.15, aum2);
    }

    return 0;
}

  ///----------///
/// EXERCICIO 9 ///
 ///----------///

int ex9()
{
    float s, vc, aum2;

    printf("Informe o seu saldo medio no ultimo ano: ");
    scanf("%f", &s);

    if (s > 400){
        printf("\n30%% DO SALDO MEDIO\n");

        vc = s * 0.30;

        printf("\nSeu saldo medio e R$%0.2f e o valor de credito e R$%0.2f ", s, vc );
    }
    else if (s > 300 && s <=400){
        printf("\n25%% DO SALDO MEDIO\n");

        vc = s * 0.25;

        printf("\nSeu saldo medio e R$%0.2f e o valor de credito e R$%0.2f \n", s, vc );
    }
    else if (s > 200 && s <=300){
        printf("\n20%% DO SALDO MEDIO\n");

        vc = s * 0.20;

        printf("\nSeu saldo medio e R$%0.2f e o valor de credito e R$%0.2f \n", s, vc );
    }
    else if (s <= 200){
        printf("\n10%% DO SALDO MEDIO\n");

        vc = s * 0.10;

        printf("\nSeu saldo medio e R$%0.2f e o valor de credito e R$%0.2f \n", s, vc );
    }
    return 0;
}

  ///-----------///
/// EXERCICIO 10 ///
 ///-----------///

int ex10()
{
    float cf, pc;

    printf("Informe o custo de fabrica de seu carro(R$): ");
    scanf("%f", &cf);
    if (cf <= 12000){
        pc = cf + (cf * 0.05);
        printf("O preco de fabrica e R$%0.2f e o preco para o consumidor e R$%0.2f", cf, pc);
    }
    else if (cf > 12000 && cf <= 25000){
        pc = cf + ((cf * 0.10) + (cf * 0.15));
        printf("O preco de fabrica e R$%0.2f e o preco para o consumidor e R$%0.2f", cf, pc);
    }
    else if (cf > 25000){
        pc = cf + ((cf * 0.15) + (cf * 0.20));
        printf("O preco de fabrica e R$%0.2f e o preco para o consumidor e R$%0.2f", cf, pc);
    }

    return 0;
}

  ///-----------///
/// EXERCICIO 11 ///
 ///-----------///

int ex11()
{
    float s;
    printf("Informe o salario atual de seu funcionario: ");
    scanf("%f", &s);

    if (s <= 300){
        printf("Voce recebeu um aumento de %0.2f (15%%), seu novo salario e %0.2f", s * 0.15, s + (s * 0.15));
    }
    else if (s > 300 && s < 600){
        printf("Voce recebeu um aumento de %0.2f (10%%), seu novo salario e %0.2f", s * 0.10, s + (s * 0.10));
    }
    else if (s >= 600 && s <= 900){
        printf("Voce recebeu um aumento de %0.2f (5%%), seu novo salario e %0.2f", s * 0.05, s + (s * 0.05));
    }
    else {
        printf("=( Voce nao recebeu um aumento =(");
    }


    return 0;
}

  ///-----------///
/// EXERCICIO 12 ///
 ///-----------///

int ex12()
{
    float s, c1, c2, c3, c4;
    printf("Informe o salario de seu funcionario: ");
    scanf("%f", &s);

    if (s <= 350){
        c1 = s + 100 - (s * 0.07);
        printf("Voce recebeu um aumento de R$100.00, seu novo salario e R$%0.2f", c1);
    }
    else if (s > 350 && s < 600){
        c2 = s + 75 - (s * 0.07);
        printf("Voce recebeu um aumento de R$75.00, seu novo salario e R$%0.2f", c2);
    }
    else if (s >= 600 && s <= 900){
        c3 = s + 50 - (s * 0.07);
        printf("Voce recebeu uma gratificacao de R$50.00, seu novo salario e R$%0.2f", c3);
    }
    else {
        c4 = s + 35 - (s * 0.07);
        printf("Voce recebeu uma gratificação de RS$35.00, seu novo salario e: %0.2f", c4);
    }


    return 0;
}

  ///-----------///
/// EXERCICIO 13 ///
 ///-----------///

int ex13()
{
    float price, aum, k;

    printf("Informe o preco de um produto(R$): ");
    scanf("%f", &price);

    if (price <= 50){
        aum = price + (price * 0.05);

        k = aum;
    }
    else if (price > 50 && price <= 100){
        aum = price + (price * 0.10);

        k = aum;
    }
    else{
        aum = price + (price * 0.15);

        k = aum;
    }

    if (k <= 80){
        printf("O preco e R$%0.2f, portanto o produto e Barato!", k);
    }
    else if (k > 80 && k <=120){
        printf("O preco e R$%0.2f, portanto o produto e Normal!", k);
    }
    else if (k > 120 && k <=200){
        printf("O preco e R$%0.2f, portanto o produto e Caro!", k);
    }
    else {
        printf("O preco e R$%0.2f, portanto o produto e Muito Caro!", k);
    }

    return 0;
}

  ///-----------///
/// EXERCICIO 14 ///
 ///-----------///

int ex14()
{
    float sf, sn;

    printf("Informe o salario de um funcionario: ");
    scanf("%f", &sf);

    if (sf <= 300){
        sn = sf + (sf * 0.50);
        printf("O novo salario e: %0.2f", sn);
    }
    else if (sf > 300 && sf <= 500){
        sn = sf + (sf * 0.40);
        printf("O novo salario e: %0.2f", sn);
    }
    else if (sf > 500 && sf <=700){
        sn = sf + (sf * 0.30);
        printf("O novo salario e: %0.2f", sn);
    }
    else if (sf > 700 && sf <=800){
        sn = sf + (sf * 0.20);
        printf("O novo salario e: %0.2f", sn);
    }
    else if (sf > 800 && sf <=1000){
        sn = sf + (sf * 0.10);
        printf("O novo salario e: %0.2f", sn);
    }
    else {
        sn = sf + (sf * 0.05);
        printf("O novo salario e: %0.2f", sn);
    }

    return 0;
}

  ///-----------///
/// EXERCICIO 15 ///
 ///-----------///

int ex15()
{
    printf("\n|||||||||||||||||||||||||||||||||||||||||");
    printf("\n|      TIPO      |       DESCRICAO      |");
    printf("\n|||||||||||||||||||||||||||||||||||||||||");
    printf("\n|        1       |       Poupanca       |");
    printf("\n|        2       | Fundos de renda fixa |");
    printf("\n|||||||||||||||||||||||||||||||||||||||||\n\n");

    float inv, op;

    printf("Informe a operacao em que deseja investir: ");
    scanf("%f", &op);

    if (op < 1 || op > 2){
        printf("O tipo %.f nao consta na tabela", op);
    }

    else if (op >= 1 || op <= 2){
    printf("Informe o valor que deseja investir (R$): ");
    scanf("%f", &inv);

    if (op == 1){
        printf("Voce escolheu investir R$%0.2f na poupanca. Salario ao final do mes = R$%0.2f", inv, inv + (inv * 0.03));
    }


    else if (op == 2){
        printf("Voce escolheu investir R$%0.2f na renda fixa. Salario ao final do mes = R$%0.2f", inv, inv + (inv * 0.04));
    }
}
    return 0;
}

int ex16(){
    float p;

    printf("Informe o valor do produto: ");
    scanf("%f", &p);

    if (p <= 30){
        printf("Sem desconto, o preco do produto continua sendo R$%0.2f", p);
    }
    if (p > 30 && p <=100){
        printf("O produto recebeu um desconto de %%10, seu novo preco e: R$%0.2f", p - (p * 0.10));
    }
    if (p > 100){
        printf("O produto recebeu um desconto de %%15, seu novo preco e: R$%0.2f", p - (p * 0.15));
    }
}

int ex17(){
    float s;

    printf("\tLOGIN NO SISTEMA\n\n");
    printf("Informe a sua senha: ");
    scanf("%f", &s);

    if (s == 4531 ){
        printf("Seja bem-vindo(a)");
    }
    else if (s != 4531){
        printf("!!Acesso Negado!! Senha nao coincide com a do sistema");
    }

    return 0;
}

int ex18(){
    float idade;

    printf("Informe sua idade: ");
    scanf("%f", &idade);

    if (idade >= 18){
        printf("Maior de idade");
    } else {
        printf("Menor de idade");
    }
    return 0;
}

int ex19(){
    float h;
    char s;

    printf("Informe sua altura: ");
    scanf("%f", &h);
    printf("Informe seu sexo: ");
    scanf("%c%*c", &s);

    if (s = 'm'){
        printf("Seu peso ideal e %0.2f", (72.8 * h) - 58);
    }
    else if (s = 'f'){
        printf("Seu peso ideal e %0.2f", (62.1 * h) - 44.7);
    }
    return 0;
}














