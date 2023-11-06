#include <stdio.h>
#include <string.h>

struct Jogador {
    char nome[31];
    char posicao;
    int forca;
};

struct Time {
    char nome[31];
    struct Jogador jogadores[11];
};

double calcularForca(struct Time time);

int main() {
    struct Time times[2];

    for (int i = 0; i < 2; i++) {
        scanf(" %30[^\n]", times[i].nome);

        for (int j = 0; j < 11; j++) {
            scanf(" %30[^;]; %c; %d", times[i].jogadores[j].nome, &times[i].jogadores[j].posicao, &times[i].jogadores[j].forca);
        }
    }

    for (int i = 0; i < 2; i++) {
        printf("%s: %.2lf de força\n", times[i].nome, calcularForca(times[i]));
    }

    if (calcularForca(times[0]) > calcularForca(times[1])) {
        printf("%s eh mais forte e brabo\n", times[0].nome);
    } else if (calcularForca(times[1]) > calcularForca(times[0])) {
        printf("%s eh mais forte e brabo\n", times[1].nome);
    }

    return 0;
}

double calcularForca(struct Time time) {
    double forca = 0.0;
    for (int i = 0; i < 11; i++) {
        switch (time.jogadores[i].posicao) {
            case 'G':
                forca += 8.0 * time.jogadores[i].forca;
                break;
            case 'L':
                forca += 10.0 * time.jogadores[i].forca;
                break;
            case 'Z':
                forca += 5.0 * time.jogadores[i].forca;
                break;
            case 'V':
                forca += 8.0 * time.jogadores[i].forca;
                break;
            case 'M':
                forca += 11.0 * time.jogadores[i].forca;
                break;
            case 'A':
                forca += 12.0 * time.jogadores[i].forca;
                break;
        }
    }
    return forca / 100.0;
}
