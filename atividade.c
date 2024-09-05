#include <stdio.h>
#include <stdlib.h>
 
main() {
    char codigo[10];
    int tipoSalario, numeroFilhos, w;
    float salarioBase, salarioBruto, inss, impostoRenda, salarioFamilia, salarioLiquido, x, y;
    printf("Digite o código do funcionário: ");
    scanf("%s", &codigo);
    printf("Digite o tipo de sálario: \n");
    printf("1) Horista  2) Diaristas  3) Mensalista\n");
    scanf("%d", &tipoSalario);
    if (tipoSalario == 1)
        w = 220;
    else if (tipoSalario == 2)
        w = 30;
    else if (tipoSalario == 3)
        w = 1;
    printf("%.2d\n", w);
    printf("Digite o sálario base: ");
    scanf("%f", &salarioBase);
    printf("Digite o número de filhos: ");
    scanf("%d", &numeroFilhos);
    salarioBruto = salarioBase * w;
 
    if (salarioBruto <= 3500)
        x = 0.08;
    else if (salarioBruto <= 5800)
        x = 0.09;
    else
        x = 0.1;
 
    printf("%.2f\n", x);
    inss = salarioBruto * x;
    if (salarioBruto - inss <= 6200)
        y = 0;
    else if (salarioBruto - inss <= 9400)
        y = 0.05;
    else
        y = 0.1;
    printf("%.2f\n", y);
    impostoRenda = (salarioBruto - inss) * y;
    salarioFamilia = numeroFilhos * 20;
    salarioLiquido = salarioBruto - inss - impostoRenda + salarioFamilia;
 
    printf("Sálario Bruto: %.2f\n", salarioBruto);
    printf("INSS: %.2f\n", inss);
    printf("Imposto de rend: %.2f\n", impostoRenda);
    printf("Sálario família: %.2f", salarioFamilia);
}