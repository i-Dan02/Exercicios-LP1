/*
Igor Daniel - Ciência da Computação
202410511

1. (peso 5,0) Desenvolva um programa, atenção utilizar regra UESC (indicando referência e considerando casas
  decimais e aproximação dos valores), que receba os valores e calcule:
  a) De acordo com a matéria, especifique o número de créditos a serem realizados (mínimo 2 e máximo 10);
  b)Deve ser calculado a média, indicando a situação do aluno e o resultado;
  c) Deve calcular a nota para Prova Final;
  d)Considerar o número de faltas para o resultado final, considere cada crédito 15 horas-aula;
  e) Apresentar ficha de avaliação do aluno, com todas notas, situação e médias;
*/

programa
{
    funcao inicio()
    {
        inteiro numCred, ch, totPeso, faltas
        real soma = 0, media, provaFinal = 0, precisa = 0, mediaFinal
        real nota[numCred]
        inteiro peso[numCred]

        // Pede ao usuário que digite o número de créditos
        escreva("Número de créditos: ")
        leia(numCred)

        // Loop que verifica se o número de créditos é válido
        enquanto (numCred < 2 ou numCred > 10)
        {
            escreva("Número de créditos inválido. (Mínimo 2 e máximo 10). Digite novamente: \n")
            leia(numCred)
        }

        // Carga horária: cada crédito equivale a +15 horas-aula
        ch = numCred * 15
        escreva("Carga horária: ", ch, " horas-aula\n")

        // Loop que pede ao usuário que digite as notas
        para (inteiro i = 0; i < numCred; i++)
        {
            escreva("Nota ", i + 1, ": ")
            leia(nota[i])

            // Loop que verifica se alguma nota digitada é inválida. Se for, digita novamente
            enquanto (nota[i] < 0 ou nota[i] > 10)
            {
                escreva("Nota inválida. Digite novamente: \n")
                leia(nota[i])
            }

            escreva("Peso ", i + 1, ": ")
            leia(peso[i])

            // Loop que verifica se algum peso digitado é inválido. Se for, digita novamente
            enquanto (peso[i] < 0 ou peso[i] > 10)
            {
                escreva("Peso inválido. Digite novamente: \n")
                leia(peso[i])
            }

            // Cálculo da soma com os pesos e total de pesos
            soma = soma + nota[i] * peso[i]
            totPeso = totPeso + peso[i]
        }
        escreva("Soma: ", soma, "\n")

        // Cálculo da média
        media = soma / totPeso
        escreva("Média: ", media, "\n")

        // Verifica se o aluno foi aprovado ou reprovado
        se (media >= 7)
        {
            escreva("Aprovado\n")
        }
        senao
        {
            escreva("Sua nota não foi o suficiente. Partiu FINAL!! \n")
        }

        // Número de faltas no semestre
        escreva("Digite o número de faltas no semestre: ")
        leia(faltas)

        // Cálculo de quanto precisa para ser aprovado na prova final
        se (media < 7)
        {
            precisa = (5 - media * 0.6) / 0.4
            escreva("Precisa tirar ", precisa, " na prova final para passar.\n")

            // Pede ao usuário que digite a nota da prova final
            escreva("Nota da prova final: ")
            leia(provaFinal)

            // Verifica se a nota da prova final é válida
            enquanto (provaFinal < 0 ou provaFinal > 10)
            {
                escreva("Nota deve ser maior que 0 e menor que 10. Digite novamente: \n")
                leia(provaFinal)
            }

            // Verifica através do cálculo da média final se o aluno foi aprovado ou reprovado pela prova final
            mediaFinal = (media * 6 + provaFinal * 4) / 10
            se (mediaFinal < 5)
            {
                escreva("Poxa, você não alcançou a média. Vamos deixar pro próximo semestre😓😓\n")
            }
            senao
            {
                escreva("Aprovado pela prova final!😀😀\n")
            }
        }

        // Ficha de avaliação
        escreva("\nFicha de avaliação do aluno(a): \n")
        escreva("-----------------------------------------------\n")
        escreva(" Número de créditos |        ", numCred, "\n")
        escreva("-----------------------------------------------\n")
        escreva("  Carga horária     |   ", ch, " horas-aula\n")
        escreva("-----------------------------------------------\n")
        escreva("       Notas        |         Peso     \n")
        escreva("-----------------------------------------------\n")

        // Loop que imprime as notas e seus respectivos pesos
        para (inteiro i = 0; i < numCred; i++)
        {
            se (nota[i] < 7)
            {
                escreva(" Notas ", i + 1, " |  :\x1b[31m ", nota[i], "\x1b[37m   |         Peso ", peso[i], "\n")
                escreva("-----------------------------------------------\n")
            }
            senao
            {
                escreva(" Notas ", i + 1, " |  :\x1b[32m ", nota[i], "\x1b[37m   |         Peso ", peso[i], "\n")
                escreva("-----------------------------------------------\n")
            }
        }

        // Condição que verifica se a média é menor que 7
        se (media < 7)
        {
            // Sendo menor que 7, imprime a média e a situação de prova final
            escreva("       Média        |         \x1b[31m", media, "\x1b[37m\n")
            escreva("-----------------------------------------------\n")
            escreva("       Situação     |    \x1b[31m Prova Final\x1b[37m\n")
            escreva("-----------------------------------------------\n")

            // Condição que verifica a nota da prova final
            se (provaFinal < precisa)
            {
                // A nota da prova final sendo menor que a nota necessária para passar, imprime a nota da prova final e a situação de reprovado
                escreva(" Prova Final        |        \x1b[31m ", provaFinal, "\x1b[37m\n")
                escreva("-----------------------------------------------\n")
                escreva("    Média Final     |        \x1b[31m ", mediaFinal, "\x1b[37m\n")
                escreva("-----------------------------------------------\n")
                escreva("             \x1b[31m Reprovado \x1b[37m\n")
                escreva("-----------------------------------------------\n")
            }
            senao
            {
                // Caso não seja menor que a nota necessária, imprime a nota da prova final e a situação de aprovado pela prova final
                escreva(" Prova Final        |        \x1b[32m ", provaFinal, "\x1b[37m\n")
                escreva("-----------------------------------------------\n")
                escreva("    Média Final     |        \x1b[32m ", mediaFinal, "\x1b[37m\n")
                escreva("-----------------------------------------------\n")
                escreva("             \x1b[32m Aprovado pela prova final \x1b[37m\n")
                escreva("-----------------------------------------------\n")
            }
        }
        senao
        {
            // Caso a média seja maior que 7, imprime a média e a situação de aprovado
            escreva("       Média        |         \x1b[32m", media, "\x1b[37m\n")
            escreva("-----------------------------------------------\n")
            escreva("       Situação     |    \x1b[32m Aprovado\x1b[37m\n")
            escreva("-----------------------------------------------\n")
        }

        escreva(" Número de faltas   |        ", faltas, "\n")
        escreva("-----------------------------------------------\n")

        // Condição que verifica a quantidade de faltas de acordo com a carga horária da matéria
        se (faltas < ch * 0.25)
        {
            // Se a quantidade de faltas seja menor que a quantidade de faltas permitidas, imprime a situação de que cumpriu a carga horária exigida pela matéria
            escreva("     Situação       |   \x1b[32mCumpriu carga horária\x1b[37m\n")
            escreva("-----------------------------------------------\n")
        }
        senao
        {
            // Caso a quantidade de faltas seja maior que a quantidade de faltas permitidas, imprime a situação de reprovado por falta
            escreva("     Situação       |     \x1b[31mReprovado por falta\x1b[37m\n")
            escreva("-----------------------------------------------\n")
        }
    }
}
