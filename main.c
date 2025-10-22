#include <stdio.h>

int main() {
    double getiri, risksiz, stdSapma, sharpe;

    printf("Yatirimin getirisi (%% olarak): ");
    scanf("%lf", &getiri);

    printf("Risksiz faiz orani (%% olarak): ");
    scanf("%lf", &risksiz);

    printf("Portfoyun standart sapmasi (%% olarak): ");
    scanf("%lf", &stdSapma);

    // Yüzdelik değerleri ondalığa çevir
    getiri /= 100.0;
    risksiz /= 100.0;
    stdSapma /= 100.0;

    sharpe = (getiri - risksiz) / stdSapma;

    printf("\nSharpe Orani = %.2f\n", sharpe);

    if (sharpe >= 3.0)
        printf("Yorum: Mükemmel bir getiri/risk dengesi!\n");
    else if (sharpe >= 2.0)
        printf("Yorum: Cok iyi bir oran.\n");
    else if (sharpe >= 1.0)
        printf("Yorum: Kabul edilebilir bir oran.\n");
    else
        printf("Yorum: Risk fazla veya getiri yetersiz.\n");

    return 0;
}
