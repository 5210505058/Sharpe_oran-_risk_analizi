# Sharpe Oranı Hesaplayıcı (C)

Bu basit C programı, finansal piyasalarda kullanılan **Sharpe Oranı**nı hesaplar.  
Sharpe oranı, bir yatırımın aldığı riske göre ne kadar fazla getiri sağladığını gösterir.

---

## Formül

**Sharpe Oranı = (Yatırım Getirisi - Risksiz Faiz Oranı) / Standart Sapma**

Yani:
- Yüksek Sharpe oranı → Risk başına daha yüksek getiri  
- Düşük veya negatif Sharpe oranı → Risk karşısında düşük getiri

---

## Örnek Hesaplama

| Değer | Açıklama |
|-------|-----------|
| Yatırım Getirisi | %15 |
| Risksiz Faiz | %5 |
| Standart Sapma | %12 |

Hesaplama:  
(0.15 - 0.05) / 0.12 = 0.83

**Sonuç:** Sharpe Oranı = 0.83 → Risk fazla veya getiri yetersiz.

---

## Program Kodu

```c
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
        printf("Yorum: Mukemmel bir getiri/risk dengesi!\n");
    else if (sharpe >= 2.0)
        printf("Yorum: Cok iyi bir oran.\n");
    else if (sharpe >= 1.0)
        printf("Yorum: Kabul edilebilir bir oran.\n");
    else
        printf("Yorum: Risk fazla veya getiri yetersiz.\n");

    return 0;
}
# Sharpe_oran-_risk_analizi
