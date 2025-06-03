#include <stdio.h>

int main()
{
    float altura, peso, imc;
    
    ///////////altura
    printf("Ingresa tu altura en metros: ");
    scanf(" %f", &altura);
    
    ///////////peso
    printf("Ingresa tu peso en kilogramos: ");
    scanf(" %f", &peso);
    
    ///////////calculo imc
    imc=peso/(altura*altura);
    printf("Tu IMC es: %.2f\n", imc);
    
    //////////clasificacion y posicionamiento en tabla
    if (imc < 18.5) {
        printf("Estado: Bajo peso\n");
        printf("///////////////////////////////\n");
        printf("//       Indice| Condicion   //\n");
        printf("//---------------------------//\n");
        printf("//       <18.5 | Bajo peso   //<--Estas aqui\n");
        printf("// 18.5 a 24.9 | Normal      //\n");
        printf("// 25.0 a 29.9 | Sobrepeso   //\n");
        printf("//         >=30| Obesidad    //\n");
        printf("///////////////////////////////");
    } else if (imc >= 18.5 && imc < 24.9) {
        printf("Estado: Normal\n");
        printf("///////////////////////////////\n");
        printf("//       Indice| Condicion   //\n");
        printf("//---------------------------//\n");
        printf("//       <18.5 | Bajo peso   //\n");
        printf("// 18.5 a 24.9 | Normal      //<--Estas aqui\n");
        printf("// 25.0 a 29.9 | Sobrepeso   //\n");
        printf("//         >=30| Obesidad    //\n");
        printf("///////////////////////////////");
    } else if (imc >= 25 && imc < 29.9) {
        printf("Estado: Sobrepeso\n");
        printf("///////////////////////////////\n");
        printf("//       Indice| Condicion   //\n");
        printf("//---------------------------//\n");
        printf("//       <18.5 | Bajo peso   //\n");
        printf("// 18.5 a 24.9 | Normal      //\n");
        printf("// 25.0 a 29.9 | Sobrepeso   //<--Estas aqui\n");
        printf("//         >=30| Obesidad    //\n");
        printf("///////////////////////////////");
    } else {
        printf("Estado: Sin miedo al segundo plato en casa ajena (obesidad)\n");
        printf("///////////////////////////////\n");
        printf("//       Indice| Condicion   //\n");
        printf("//---------------------------//\n");
        printf("//       <18.5 | Bajo peso   //\n");
        printf("// 18.5 a 24.9 | Normal      //\n");
        printf("// 25.0 a 29.9 | Sobrepeso   //\n");
        printf("//         >=30| Obesidad    //<--Estas aqui\n");
        printf("///////////////////////////////");
    }

//printf("///////////////////////////////\n");
//printf("//       Indice| Condicion   //\n");
//printf("//---------------------------//\n");
//printf("//       <18.5 | Bajo peso   //\n");
//printf("// 18.5 a 24.9 | Normal      //\n");
//printf("// 25.0 a 29.9 | Sobrepeso   //\n");
//printf("//         >=30| Obesidad    //\n");
//printf("///////////////////////////////");
    
    return 0;
}
