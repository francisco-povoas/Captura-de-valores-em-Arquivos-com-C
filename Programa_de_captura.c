/* ========================================== */
/* --- Bibliotecas ---*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/* ========================================== */
/* --- Constantes ---*/

#define tam_caract 500 // fazer modificacao por alocamento de memoria


/* ========================================== */
/* --- Protótipo das funcoes ---*/

void valor_max_min_equipamento(float *vetor_equipamento,int numero_elementos_do_vetor);
void imprimir_valores_ft(float *vetor_equipamento, int numero_elementos_do_vetor);

/* ========================================== */
/* --- Variáveis Globais --- */




main()
{

    FILE *fr;

    // variavel de captura do arquivo a ser lido
     int   ch;  
    
    // variavel de contagem duas primeiras linhas, sanando lixo de arquivo
     int   count1 = 0;

     // variavel percorre countagem do arquivo
     int   count2 = 1;

     //variavel que captura a linha onde o equipamento desejado se encontra
     int   count_equip = 0;

     // variavel que captura a linha onde começa a mostra a hora 00:00:00
     int   count_h_inicial = 0;

     // variavel que sempre irá correr nos resultados após cada 'h'..., de modo a encontrar o valor de count_equip
     int   count_valores = 1;

   //  variavel que será atualizando de acordo com os resultados encontrados, de modo a entrar ou sair de determinados if's
     int   validando_captura = 0;


     register int i = 0,
                  j = 0; // percorre o vetor Valores_Equipamento, 
    

    // captura de equipamento
     char  Equipamento_guardando[tam_caract]; // guarda conteudo de cada linha 
     char  Equipamento_interesse[tam_caract] = "ABT_TF2_MW"; // Equipamento que estou encontrando no arquivo, é sempre comparado com Equipamento_guardando
     

    // captura de h 00:00:00
     char  Hora_inicio_guardando[tam_caract]; 
     char  Hora_inicio_interesse[tam_caract] = "h 00:00:00";


     float  Valores_Equipamento[tam_caract] ; // valores para comparacao futura max e min
     char   Valores_Equipamento_guardando[tam_caract] ; // Armazena valores do equipamento de interesse
    



    char caminho[] = "C:\\Users\\0330527\\Documents\\Novos materiais sage\\Arquivos\\abt\\ucs1\\2020\\01\\01\\arqs\\jan0120.pas";

    //fr = fopen("C:\\Users\\0330527\\Documents\\Novos materiais sage\\Arquivos\\abt\\ucs1\\2020\\01\\01\\arqs\\jan0120.pas","r");
    fr = fopen(caminho,"r");


    if(fr == NULL)
    {
        printf("ERRO1\n");
        system("pause");
        exit(1);
    }



    while((ch=fgetc(fr)) != EOF)
    {
        
        /*================================================*/
        // regiao de caputura do lixo de arquivo, 2 linhas.

        if((ch == 0x0A) && (count1 < 2)) 
        {
           count1++; 
        } // end if

        /*================================================*/





        /*================================================*/
        // regiao de caputura do Equipamento desejado

        if((count1 == 2) && (validando_captura == 0)) // inicio da terceira linha e capturando linha do equipamento de nosso interesse
        {

            if(ch == 0x0A)
            {   
                count2++;      
                i = 0;
                
            } // end if 
            else 
            {
                Equipamento_guardando[i] = ch; 
                i++;
            }
           


            if(strstr(Equipamento_guardando,Equipamento_interesse))
            {
                count_equip = count2;
                printf("count_equip = %d\n", count_equip); 
                validando_captura = 1;
            } 
            


        } // END IF (COUNT 1) == 2 && VALIDANDO CAPTURA == 0 

        
        /*================================================*/   
     

        


        /*================================================*/
        // Capturando inicio da hora h 00:00:00


        if(validando_captura == 1)
        {

            if(ch == 0x0A)
            {   
                count2++;      
                i = 0;
                
            } 
            else 
            {
                Hora_inicio_guardando[i] = ch; 
                i++;
            }

            if(strstr(Hora_inicio_guardando,Hora_inicio_interesse))
            {
                count_h_inicial = count2;
                
                validando_captura = 2;
               
            } 


   
           
            

    } // END IF VALIDANDO CAPTURA == 1

    /*================================================*/





        /*================================================*/
        // Capturando todos valores do equipamento

    
        if(validando_captura == 2)
        {

            
            if((count_valores < count_equip) && (ch == 0x0A))
            {
                   
                count_valores++;
                count2++;
                    
              
                    
            } // end if

            
            else if((count_valores == count_equip) && ch!= 0x0A) 
            {
                Valores_Equipamento_guardando[i] = ch; 
                
                i++;
               
            
            } // end else if

            else if((count_valores == count_equip) && (ch == 0x0A)) 
            {
                   

                float aux = atof(Valores_Equipamento_guardando);
                Valores_Equipamento[j] = aux;

                printf("count_valores = %d | count2 = %d  | j = %d \n",count_valores,count2,j);

                j++;
                count_valores++; 
                count2++;

                i=0;

                   
                 

            } // end else if

            else if((count_valores > count_equip) && (count_valores < count_h_inicial) && (ch == 0x0A)) 
            {
           
                count_valores++;
                count2++;

            } // end else if

            else if((count_valores == count_h_inicial) && (ch = 0x0A))
            {
                count_valores = 1;
                
           
            }

        } // end if(validando_captura == 2)


        /*================================================*/



    } // end while de EOF


    printf("count2 = %d\n",count2);


    imprimir_valores_ft(&Valores_Equipamento,j);
    valor_max_min_equipamento(&Valores_Equipamento,j);


    fclose(fr);
    



    system("PAUSE");
    return 0;


} // end main

/* ========================================== */
/* --- Desenvolvimento de funcoes ---*/




void valor_max_min_equipamento(float *vetor_equipamento,int numero_elementos_do_vetor)
{

register int i;
         float min = vetor_equipamento[1];
         float max = vetor_equipamento[1];

    // capturando valor min
    for(i=1; i < numero_elementos_do_vetor; i++)
    {
        if(vetor_equipamento[i] <= min)
        {
            min = vetor_equipamento[i];
        }

    }

    // capturando valor max
    for(i=1; i < numero_elementos_do_vetor; i++)
    {
        if(vetor_equipamento[i] >= max)
        {
            max = vetor_equipamento[i];
        }
  

    } // end for

    printf("min = %f\n",min);
    printf("max = %f\n",max);


} // end funcao valor_minimo_equipamento

void imprimir_valores_ft(float *vetor_equipamento, int numero_elementos_do_vetor)
{

    register int i;

    for(i=1;i<numero_elementos_do_vetor;i++)
    {
        printf("Valores_Equipamento[%d] = %f\n",i,vetor_equipamento[i]);
    }

    

} // end funcao imprimir_valores_ft