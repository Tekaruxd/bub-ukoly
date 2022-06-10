#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
// fungující prototyp hry 0.2.2
int main()
{
    srand(time(NULL));
    int karty[13] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10, 11};
    int hrajukarty[4] = {karty[rand() % 13], karty[rand() % 13], karty[rand() % 13], karty[rand() % 13]};
    int aikarty = rand() % 5 + 17;
    int odpoved = 0;
    int soucet = 0;

    soucet = hrajukarty[0] + hrajukarty[1];
    printf("\n\nvase karty %d %d soucet vasich karet: %d \n Chcete dalsi kartu?(y/n)\n", hrajukarty[0], hrajukarty[1], soucet);
    odpoved = getchar();
    getchar();
    while (odpoved != 121 && odpoved != 110)

    {
        printf("Rikal jsem y nebo n, proc jsi napsal neco jineho? No, nevadi mas na to dalsi sanci. Chces dalsi kartu?\n");
        odpoved = getchar();
        getchar();
    }
    if (odpoved == 121)
    {
        soucet += hrajukarty[2];
        printf("\nvase karty %d %d %d soucet vasich karet: %d \n ", hrajukarty[0], hrajukarty[1], hrajukarty[2], soucet);
        if (soucet > 21)
        {
            printf("No to si trochu prestrelil..");
            return 0;
        }
        printf("Chcete dalsi kartu?(y/n)\n");
        odpoved = getchar();
        getchar();
        if (odpoved == 121)
        {
            soucet += hrajukarty[3];
            printf("\nvase karty %d %d %d %d soucet vasich karet: %d \n ", hrajukarty[0], hrajukarty[1], hrajukarty[2], hrajukarty[3], soucet);
        }
    }

    if (soucet > 21)
    {
        printf("No to si trochu prestrelil..");
        return 0;
    }
    if (soucet < aikarty)
    {
        printf("Prohral si! Soucet protivnikovych karet byl: %d", aikarty);
    }
    else if (soucet == aikarty)
    {
        printf("Remiza! Soucet protivnikovych karet byl: %d", aikarty);
    }
    else
        printf("Vyhral si! Soucet protivnikovych karet byl: %d", aikarty);

    return 0;
}
