/**
Agenda de Contatos:

Objetivo: Implementar um programa que permite ao usuário adicionar, remover, buscar e listar contatos. Cada contato deve conter nome, telefone e e-mail.
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

char *nomes[1000];
int telefones[1000];
int indices_repetidos[1000]; 
int largura = 60, num = 0, parcont = 0;
bool inicio = true, add = true;
const char *OPCOES[] = {
        "[1] Adicionar Contato",
        "[2] Remover Contato",
        "[3] Ver Contatos",
        "[4] Buscar Contato",
        "[5] Encerrar Agenda"
    };

int main (void) {
    system("cls");
    printf("Nomes: %s\nTelefones: %i\nIndices Repetidos: %i\nLargura: %i\nBoolean 1: %i\nBoolean 2: %i\n", nomes, telefones, indices_repetidos, largura, inicio, add);
    for (int i = 0; i < 5; i++){
        num = 0;
        if (inicio == true){
        }
        for (int options = 0, n = strlen(OPCOES); options < 5; options++){
            printf("%s\n", OPCOES[options]);
            num++;
        }
        printf("\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &parcont);
        switch (parcont){
        case 1:
            while (add == true){
                char *nome[];
                int telAtual = 0;
                printf("Digite o nome do contato: ");
                scanf("%s", &nome);
                printf("Digite o numero de telefone do contato: ");
                scanf("%d", telAtual);
                add = false;

            }
            break;
//                     while add:
//                         print("-" * largura)
//                         nome = input("             Digite o nome do contato: ").lower()
//                         telAtual = input("          Digite o número de telefone do contato: ")
//                         if nome or telAtual:
//                             nomes.append(nome)
//                             telefones.append(telAtual)
//                             add = False
//                         else:
//                              continue
//                         system('cls')
//                         print("-" * largura)
//                         print(f'Contato adicionado {nomes[len(nomes) - 1].title()} - {telAtual}'.center(largura))
//                         print("-" * largura)
//                         continue




        case 2:
            printf("2");
            break;
        case 3:
            printf("3");
            break;
        case 4:
            printf("4");
            break;
        case 5:
            printf("5");
            break;
        default:
        printf("Teste");
            break;
        }
        if (parcont == 5){
            break;
        }
    }
}

// while True:
//     num = 0
//     try:
//         if inicio == True:
//             print('-' * largura)
//             inicio = False
//         for opcao in opcoes:
//             print(opcao.center(largura))
//         print('-' * largura)
//         parcont = int(input('                    Escolha uma opção: '))
//         system('cls')
//     except:
//         system('cls')
//         print("-" * largura)
//         print('|', "Opção Inválida!".center(largura - 4), '|')
//         print("-" * largura)
//         continue
//     try:
//         match parcont:


//             case 1: # Adicionar Contatos (Funcionando)
//                     while add:
//                         print("-" * largura)
//                         nome = input("             Digite o nome do contato: ").lower()
//                         telAtual = input("          Digite o número de telefone do contato: ")
//                         if nome or telAtual:
//                             nomes.append(nome)
//                             telefones.append(telAtual)
//                             add = False
//                         else:
//                              continue
//                         system('cls')
//                         print("-" * largura)
//                         print(f'Contato adicionado {nomes[len(nomes) - 1].title()} - {telAtual}'.center(largura))
//                         print("-" * largura)
//                         continue


//             case 2: # Remover Contatos (Em Processo)
//                     if not telefones and not nomes:
//                         print("-" * largura)
//                         print("Ainda não existem contatos para remover.".center(largura))
//                         print("-" * largura)
//                         continue

//                     print("-" * largura)
//                     contatoRemove = input("             Digite o contato deseja remover: ").lower()
//                     print("-" * largura)


//                     if contatoRemove not in telefones and contatoRemove not in nomes:
//                         print('Este contato não existe!'.center(largura))2
//                     elif nomes.count(contatoRemove) >= 2:
//                         for i in range(len(nomes)):
//                             if nomes[i] == contatoRemove:
//                                 indices_repetidos.append(i)
//                         for indice, i in enumerate(indices_repetidos):
//                             if contatoRemove == telefones[i] or contatoRemove == nomes[i]:
//                                 print(f"{indice + 1}. {nomes[i].title()} - {telefones[i]}".center(largura))

//                         print("-" * largura)
//                         while True:
//                             try:
//                                 print('-' * largura)
//                                 indiceRemove = int(input("  Existem contatos com nomes iguais, qual deseja remover: ")) - 1
//                                 nomeRemovido = nomes[indices_repetidos[indiceRemove]]
//                                 telefoneRemovido = telefones[indices_repetidos[indiceRemove]]
//                                 nomes.pop(indices_repetidos[indiceRemove])
//                                 telefones.pop(indices_repetidos[indiceRemove])
//                                 system('cls')
//                                 print('-' * largura)
//                                 break
//                             except:
//                                 print('-' * largura)
//                                 print("Digite uma opção válida!".center(largura))

//                         print(f'Removendo {nomeRemovido.title()} - {telefoneRemovido}'.center(largura))

//                     elif telefones.count(contatoRemove) >= 2:
//                         for i in range(len(telefones)):
//                             if telefones[i] == contatoRemove:
//                                 indices_repetidos.append(i)
//                         for indice, i in enumerate(indices_repetidos):
//                             if contatoRemove == telefones[i] or contatoRemove == nomes[i]:
//                                 print(f"{indice + 1}. {nomes[i].title()} - {telefones[i]}".center(largura))

//                         print("-" * largura)
//                         while True:
//                             try:
//                                 indiceRemove = int(input("  Existem contatos com nomes iguais, qual deseja remover: ")) - 1
//                                 nomeRemovido = nomes[indices_repetidos[indiceRemove]]
//                                 telefoneRemovido = telefones[indices_repetidos[indiceRemove]]
//                                 nomes.pop(indices_repetidos[indiceRemove])
//                                 telefones.pop(indices_repetidos[indiceRemove])
//                                 system('cls')
//                                 print('-' * largura)
//                                 break
//                             except:
//                                 print("Digite uma opção válida!".center(largura))

//                         print(f'Removendo {nomeRemovido.title()} - {telefoneRemovido}'.center(largura))

//                     else:
//                         if contatoRemove in telefones:
//                             vart = telefones.index(contatoRemove) # Verifica a posição/indice do telefone do contato
//                             print(f"Contato Removido: {nomes[vart].title()} - {telefones[vart]}".center(largura))
//                             telefones.remove(contatoRemove)
//                             nomes.remove(nomes[vart])

//                         else:
//                             varn = nomes.index(contatoRemove) # Verifica a posição/indice do nome do contato
//                             print(f"Contato Removido: {nomes[varn].title()} - {telefones[varn]}".center(largura))
//                             nomes.remove(contatoRemove)
//                             telefones.remove(telefones[varn])


//                     print("-" * largura)
//                     continue

//             case 3: # Ver Contatos (Funcionando)
//                     if not telefones and not nomes:
//                         print("-" * largura)
//                         print("Ainda não existem contatos para mostrar.".center(largura))
//                         print("-" * largura)
//                         continue

//                     print("-" * largura)
//                     print('|', 'Contato Salvos: '.center(largura - 4), '|')
//                     print("-" * largura)
//                     for i in range(len(nomes)):
//                         print(f'{nomes[i].title()} - {telefones[i]}'.center(largura))
//                     print("-" * largura)
//                     continue
                
//             case 4: # Buscar Contatos (Funcionando)
//                     if not telefones and not nomes:
//                         print("-" * largura)
//                         print("Ainda não existem contatos para buscar.".center(largura))
//                         print("-" * largura)
//                         continue
//                     print("-" * largura)
//                     buscaContato = input("             Qual contato deseja procurar: ").lower()
//                     encontrado = False
//                     print("-" * largura)
//                     print('Contatos Encontrados'.center(largura))
//                     for i in range(len(nomes)):
//                          if buscaContato in telefones[i] or buscaContato in nomes[i]:
//                               print(f"{nomes[i].title()} - {telefones[i]}".center(largura))
//                               encontrado = True
//                     if not encontrado:
//                         print(" Não foi encontrado nenhum contato com esse nome! ".center(largura))
//                     print("-" * largura)
                
//             case 5: # Encerrar Agenda (Funcionando)
//                     print("-" * largura)
//                     print("Obrigado por utilizar a agenda! :)".center(largura))
//                     print("-" * largura)
//                     break
//             case anotherCase:
//                     print("-" * largura)
//                     print('|', "Opção Inválida!".center(largura - 4), '|')
//                     print("-" * largura)

//     except:
//         system('cls')
//         print("-" * largura)
//         print('|', "Opção Inválida! Erro".center(largura - 4), '|')
//         print("-" * largura)