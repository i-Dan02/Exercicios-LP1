programa
{
    // Função para preencher o array tridimensional com valores sequenciais
    funcao seqArray(inteiro array[10][20][5])
    {
        inteiro val = 0
        para (inteiro i = 0; i < 10; i++)
        {
            para (inteiro j = 0; j < 20; j++)
            {
                para (inteiro k = 0; k < 5; k++)
                {
                    array[i][j][k] = val
                    val++
                }
            }
        }
    }

    // Função para imprimir os valores do array tridimensional
    funcao impArray(inteiro array[10][20][5])
    {
        para (inteiro i = 0; i < 10; i++)
        {
            para (inteiro j = 0; j < 20; j++)
            {
                para (inteiro k = 0; k < 5; k++)
                {
                    escreva("array[", i, "][", j, "][", k, "] = ", array[i][j][k], "\n")
                }
            }
        }
    }

    funcao inicio()
    {
        // Declaração do array tridimensional
        inteiro array[10][20][5]

        // Preenche o array com valores sequenciais
        seqArray(array)

        // Imprime os valores do array
        impArray(array)
    }
}
