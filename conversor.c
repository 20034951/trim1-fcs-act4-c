#include <stdio.h>

int main(){
    double quetzales;
    const double tipo_cambio_usd = 0.13; // 1 Quetzal = 0.13 USD
    const double tipo_cambio_euro = 0.11; //1 Quetzal = 0.11 Euros

    printf("Ingrese la cantidad de Quetzales que desea convertir: ");
    scanf("%lf", &quetzales);

    double monto_usd = quetzales * tipo_cambio_usd;
    double monto_euros = quetzales * tipo_cambio_euro;

    printf("%.2f Quetzales es aproximadamente igual a %.2f Dolares americanos.\n", quetzales, monto_usd);
    printf("%.2f Quetzales es aproximadamente igual a %.2f Euros.\n", quetzales, monto_euros);

    return 0;
}