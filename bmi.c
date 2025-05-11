#include <stdio.h>

int main()
{
    float altura, peso, imc;
    
    ///////////altura
    printf("Ingresa tu altura en metros: ");
    scanf("%f", &altura);
    
    ///////////peso
    printf("Ingresa tu peso en kilogramos: ");
    scanf("%f", &peso);
    
    ///////////calculo imc
    imc=peso/(altura*altura);
    printf("Tu IMC es: %.2f\n", imc);
    
    //////////clasificacion
    if (imc < 18.5) {
        printf("Estado: Bajo peso\n");
    } else if (imc >= 18.5 && imc < 24.9) {
        printf("Estado: Normal\n");
    } else if (imc >= 25 && imc < 29.9) {
        printf("Estado: Sobrepeso\n");
    } else {
        printf("Estado: Sin miedo al segundo plato en casa ajena (obesidad)\n");
    }

///////////////////////////////
//Índice| Condición          //
//---------------------------//
//<18.5 | Bajo peso          //
//18.5 a 24.9 | Normal       //
//25.0 a 29.9 | Sobrepeso    //
//>=30| Obesidad             //
///////////////////////////////
    
    return 0;
}