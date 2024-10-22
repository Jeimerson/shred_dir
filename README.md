```md
# Secure File and Directory Deletion Script

This C program provides an automated solution to securely delete all files within a specified directory using the `shred` command and then recursively removes the directory itself using the `wipe` tool.

## How it works:
1. **File deletion**: All files in the given directory are securely overwritten using `shred` with 5 passes, including zeroing out the file before deletion.
2. **Directory removal**: Once all files are securely deleted, the `wipe` command is used with the `-r` (recursive) and `-f` (force) options to delete the directory without user confirmation.

## Requirements:
- **shred**: Ensure that `shred` is installed (available by default in most Linux distributions).
- **wipe**: Install `wipe` via your package manager. For example, in Ubuntu/Debian-based systems, use:
  ```bash
  sudo apt-get install wipe
  ```

## Compilation:
To compile the program, use the following command:
```bash
gcc -o shred_and_wipe_force shred_and_wipe_force.c
```

## Usage:
Execute the program with the path to the directory you wish to securely delete:
```bash
./shred_and_wipe_force /path/to/directory
```

This process ensures that all files in the specified directory are securely overwritten and removed, followed by the deletion of the directory itself, leaving no trace behind.
```

```md
# Script de Exclusão Segura de Arquivos e Diretórios

Este programa em C oferece uma solução automatizada para excluir com segurança todos os arquivos dentro de um diretório especificado usando o comando `shred`, e depois remover recursivamente o próprio diretório utilizando a ferramenta `wipe`.

## Como funciona:
1. **Exclusão de arquivos**: Todos os arquivos no diretório especificado são sobrescritos de forma segura usando o `shred` com 5 passagens, incluindo a sobrescrita com zeros antes da exclusão.
2. **Remoção do diretório**: Após a exclusão segura dos arquivos, o comando `wipe` é utilizado com as opções `-r` (recursivo) e `-f` (forçar) para remover o diretório sem solicitar confirmação.

## Requisitos:
- **shred**: Verifique se o `shred` está instalado (disponível por padrão na maioria das distribuições Linux).
- **wipe**: Instale o `wipe` através do gerenciador de pacotes. Em sistemas baseados em Ubuntu/Debian, use:
  ```bash
  sudo apt-get install wipe
  ```

## Compilação:
Para compilar o programa, use o seguinte comando:
```bash
gcc -o shred_and_wipe_force shred_and_wipe_force.c
```

## Uso:
Execute o programa passando o caminho do diretório que deseja excluir com segurança:
```bash
./shred_and_wipe_force /caminho/para/diretorio
```

Este processo garante que todos os arquivos no diretório especificado sejam sobrescritos e removidos de forma segura, seguidos pela exclusão do próprio diretório, sem deixar rastros.
```
