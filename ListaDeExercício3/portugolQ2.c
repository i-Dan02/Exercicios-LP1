programa
{
    funcao real media(inteiro vetor[], inteiro tamanho)
    {
        inteiro i
        real soma = 0

        para (i = 0; i < tamanho; i++)
        {
            soma = soma + vetor[i]
        }

        escreva("Soma: ", soma, "\n")
        retorne soma / tamanho
    }

    funcao inteiro comparar(inteiro a, inteiro b)
    {
        retorne a - b
    }

    funcao real mediana(inteiro vetor[], inteiro tamanho)
    {
        ordenar(vetor, tamanho)
        se (tamanho % 2 == 0)
        {
            retorne (vetor[tamanho / 2 - 1] + vetor[tamanho / 2]) / 2.0
        }
        senao
        {
            retorne vetor[tamanho / 2]
        }
    }

    funcao real desvio_padrao(inteiro vetor[], inteiro tamanho, real media)
    {
        inteiro i
        real soma = 0

        para (i = 0; i < tamanho; i++)
        {
            soma = soma + ((vetor[i] - media) * (vetor[i] - media))
        }

        retorne sqrt(soma / tamanho)
    }

    funcao valReps(inteiro vetor[], inteiro tamanho)
    {
        inteiro i, j, contador

        para (i = 0; i < tamanho; i++)
        {
            contador = 0
            para (j = 0; j < tamanho; j++)
            {
                se (vetor[i] == vetor[j])
                {
                    contador++
                }
            }

            se (contador > 1)
            {
                escreva("Valor: ", vetor[i], ", Quantidade de vezes: ", contador, "\n")
            }
        }
    }

    funcao contReps(inteiro vetor[], inteiro tamanho)
    {
        inteiro i, j, contador
        vetor de inteiro repeticoes = {0}

        para (i = 0; i < tamanho; i++)
        {
            contador = 0
            para (j = 0; j < tamanho; j++)
            {
                se (vetor[i] == vetor[j])
                {
                    contador++
                }
            }

            repeticoes[i] = contador
        }

        para (i = 0; i < tamanho; i++)
        {
            se (repeticoes[i] > 1)
            {
                escreva("Valor ", vetor[i], ": ", repeticoes[i], " vezes\n")
            }
        }
    }

    funcao inteiro unicoArr(inteiro vetor[], inteiro tamanho, inteiro unicos[])
    {
        inteiro i, j, contador = 0

        para (i = 0; i < tamanho; i++)
        {
            para (j = 0; j < contador; j++)
            {
                se (vetor[i] == unicos[j])
                {
                    pare
                }
            }

            se (j == contador)
            {
                unicos[contador] = vetor[i]
                contador++
            }
        }

        retorne contador
    }

    funcao inicio()
    {
        inteiro n = 10000
        vetor de inteiro valores[10000]
        vetor de inteiro unicos[10000]
        vetor de inteiro repeticoes[10000]
        inteiro i, tamanho_unico
        real media_valores, mediana_valores, desvio_valores

        // Inicializa o gerador de números aleatórios
        sorteia_aleatorio()

        para (i = 0; i < n; i++)
        {
            valores[i] = sorteia(0, 1000)
            escreva(i + 1, " - ", valores[i], "\n")
        }

        media_valores = media(valores, n)
        mediana_valores = mediana(valores, n)
        escreva("Média: ", media_valores, "\n")
        escreva("Mediana: ", mediana_valores, "\n")

        valReps(valores, n)
        desvio_valores = desvio_padrao(valores, n, media_valores)
        escreva("Desvio padrão: ", desvio_valores, "\n")

        contReps(valores, n)

        tamanho_unico = unicoArr(valores, n, unicos)
        escreva("Array sem repetições: ")
        para (i = 0; i < tamanho_unico; i++)
        {
            escreva(unicos[i], " ")
        }
        escreva("\n")
    }
}
