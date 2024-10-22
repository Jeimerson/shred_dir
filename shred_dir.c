#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    // Verifica se o caminho do diretório foi fornecido
    if (argc != 2) {
        fprintf(stderr, "Uso: %s <caminho_do_diretorio>\n", argv[0]);
        return 1;
    }

    // Monta o comando find + shred
    char command_shred[512];
    snprintf(command_shred, sizeof(command_shred),
             "find %s -type f -exec shred -n 5 -z -u -v {} \\;",
             argv[1]);

    // Exibe o comando find + shred que será executado
    printf("Executando comando: %s\n", command_shred);

    // Executa o comando find + shred
    int result_shred = system(command_shred);

    // Verifica se o comando find + shred foi executado com sucesso
    if (result_shred == -1) {
        perror("Erro ao executar o comando find + shred");
        return 1;
    }

    // Monta o comando wipe para apagar o diretório
    char command_wipe[256];
    snprintf(command_wipe, sizeof(command_wipe), "wipe -r -f %s", argv[1]);

    // Exibe o comando wipe que será executado
    printf("Executando comando: %s\n", command_wipe);

    // Executa o comando wipe para apagar o diretório
    int result_wipe = system(command_wipe);

    // Verifica se o comando wipe foi executado com sucesso
    if (result_wipe == -1) {
        perror("Erro ao executar o comando wipe");
        return 1;
    }

    printf("Processo de exclusão segura concluído.\n");

    return 0;
}