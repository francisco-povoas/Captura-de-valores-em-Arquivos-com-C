/* ========================================== */
/* --- Bibliotecas ---*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <float.h>

/* ========================================== */
/* --- Constantes ---*/


 #define tam_caract 5000 // fazer modificacao por alocacao de memoria

/* ========================================== */
/* --- Protótipo das funcoes ---*/


void captura(char *caminho_principal_passagem, int dia, float contadormax, float contadormin, float *ponteiro_max, float *ponteiro_min,char *ano_completoo, int mes);

/* ========================================== */
/* --- Variáveis Globais --- */



main()
{


/*criacao dos ponteiros*/


float *max_aponta, *min_aponta;

float maximum = ((-1) * (FLT_MAX)), minimum = FLT_MAX; // entregarão os valores maximos e minimos mensais.

max_aponta = &maximum;
min_aponta = &minimum;



/*=========================*/



char barra_invertida[4] = "\\";

/*Construção do caminho principal*/


char caminho_principal[1000] = "C:";

strcat(caminho_principal,barra_invertida);
strcat(caminho_principal,barra_invertida); // "C:\\"

strcat(caminho_principal,"Users");
strcat(caminho_principal,barra_invertida);
strcat(caminho_principal,barra_invertida); // "C:\\Users\\"

strcat(caminho_principal,"0330527");
strcat(caminho_principal,barra_invertida);
strcat(caminho_principal,barra_invertida); // "C:\\Users\\0330527\\"

strcat(caminho_principal,"Documents");
strcat(caminho_principal,barra_invertida);
strcat(caminho_principal,barra_invertida); // "C:\\Users\\0330527\\Documents\\"

strcat(caminho_principal,"Novos materiais sage");
strcat(caminho_principal,barra_invertida);
strcat(caminho_principal,barra_invertida); // "C:\\Users\\0330527\\Documents\\Novos materiais sage\\"

strcat(caminho_principal,"Arquivos");
strcat(caminho_principal,barra_invertida);
strcat(caminho_principal,barra_invertida); // "C:\\Users\\0330527\\Documents\\Novos materiais sage\\Arquivos\\"

strcat(caminho_principal,"abt");
strcat(caminho_principal,barra_invertida);
strcat(caminho_principal,barra_invertida); // "C:\\Users\\0330527\\Documents\\Novos materiais sage\\Arquivos\\abt\\"

strcat(caminho_principal,"ucs1");
strcat(caminho_principal,barra_invertida);
strcat(caminho_principal,barra_invertida); // "C:\\Users\\0330527\\Documents\\Novos materiais sage\\Arquivos\\abt\\ucs1\\"

/*=====================================*/



char ano_completo[5]; // ano em forma de string, leitura do usuario
char ano_dois_algarismos[5]; // recebe somente os dois ultimos algarismos do ano


int tamanho_caminho_principal,tamanho_caminho_mes;
   


int mes_int, dias_do_mes_int;
char dia_string[10]; // jogo valor de i teracao dia para dentro desse array como string
int tamanho_dia_string;

/*variaveis para determinar ano bissexto*/
int avaliacao_ano = 0;
/* ======================================*/

register int i; // faz controle do dia atual do mes


    printf("Insira o ano completo com 4 algarismos: ");
    gets(ano_completo);

    printf("Insira somente os dois ultimos algarismos do ano: ");
    gets(ano_dois_algarismos);

    printf("Insira o mes: ");
    scanf("%d",&mes_int);



    /* =====================================================================*/
    /* Regiao de avaliacao se o ano é bissexto*/

    int ano_int = atoi(ano_completo); // deu certo passar ano de string para inteiro

        if((ano_int % 4 == 0) && (ano_int % 100 != 0)) // entrou é bissexto
    {
        avaliacao_ano = 1;
    }
    else if((ano_int % 4 == 0) && (ano_int % 100 == 0) && (ano_int % 400 == 0)) // entrou é bissexto
    {
        avaliacao_ano = 1;
    }
    else // entrou nao é bissexto
    {
        avaliacao_ano = 0;
    }


    /* término de regiao de avaliacao ano bissexto*/
    /* =====================================================================*/


    tamanho_dia_string = strlen(dia_string); // usado para resetar a variavel dia_string a cada loop de dia posteriormente



    /* 1° concatenacao; caminho original + ano completo*/
    strcat(caminho_principal,ano_completo); // caminho principal + ano completo
    strcat(caminho_principal,barra_invertida); // cancatenando barra invertida
    strcat(caminho_principal,barra_invertida);
    tamanho_caminho_principal = strlen(caminho_principal); // tamanho caminho principal após segunda concatenação (caminho principal + ano completo + barras invertidas) 






    /* =====================================================================*/
    /* loop que itera o numero de dias do ano, de modo a escrever todos os diretorios depois do ano completo em diante*/
 


            switch(mes_int)
            {
                case 1:
                    strcat(caminho_principal,"01");
                    strcat(caminho_principal,barra_invertida);
                    strcat(caminho_principal,barra_invertida);
                        dias_do_mes_int = 31;
                    break;
                case 2:
                    strcat(caminho_principal,"02");
                    strcat(caminho_principal,barra_invertida);
                    strcat(caminho_principal,barra_invertida);
                        avaliacao_ano == 1 ? (dias_do_mes_int = 29) : (dias_do_mes_int = 28);                  
                    break;
                case 3:
                    strcat(caminho_principal,"03");
                    strcat(caminho_principal,barra_invertida);
                    strcat(caminho_principal,barra_invertida);
                        dias_do_mes_int = 31;
                    break;
                case 4:
                    strcat(caminho_principal,"04");
                    strcat(caminho_principal,barra_invertida);
                    strcat(caminho_principal,barra_invertida);
                        dias_do_mes_int = 30;
                    break;
                case 5:
                    strcat(caminho_principal,"05");
                    strcat(caminho_principal,barra_invertida);
                    strcat(caminho_principal,barra_invertida);
                        dias_do_mes_int = 31;
                    break;
                case 6:
                    strcat(caminho_principal,"06");
                    strcat(caminho_principal,barra_invertida);
                    strcat(caminho_principal,barra_invertida);
                        dias_do_mes_int = 30;
                    break;
                case 7:
                    strcat(caminho_principal,"07");
                    strcat(caminho_principal,barra_invertida);
                    strcat(caminho_principal,barra_invertida);
                        dias_do_mes_int = 31;
                    break;
                case 8:
                    strcat(caminho_principal,"08");
                    strcat(caminho_principal,barra_invertida);
                    strcat(caminho_principal,barra_invertida);
                        dias_do_mes_int = 31;
                    break;
                case 9:
                    strcat(caminho_principal,"09");
                    strcat(caminho_principal,barra_invertida);
                    strcat(caminho_principal,barra_invertida);
                        dias_do_mes_int = 30;
                    break;
                case 10:
                    strcat(caminho_principal,"10");
                    strcat(caminho_principal,barra_invertida);
                    strcat(caminho_principal,barra_invertida);
                        dias_do_mes_int = 31;
                    break;
                case 11:
                    strcat(caminho_principal,"11");
                    strcat(caminho_principal,barra_invertida);
                    strcat(caminho_principal,barra_invertida);
                        dias_do_mes_int = 30;
                    break;
                case 12:
                    strcat(caminho_principal,"12");
                    strcat(caminho_principal,barra_invertida);
                    strcat(caminho_principal,barra_invertida);
                        dias_do_mes_int = 31;
                    break;

            } // end switch mes

            tamanho_caminho_mes = strlen(caminho_principal);

            for(i=1;i<=dias_do_mes_int;i++)
            {
                itoa(i,dia_string,10); // Vou assumir que ele joga o valor de i para dia_string[0] a cada loop
                if(i<10)
                {
                    strcat(caminho_principal,"0");
                }
                strcat(caminho_principal,dia_string);
                strcat(caminho_principal,barra_invertida);
                strcat(caminho_principal,barra_invertida);

                strcat(caminho_principal,"arqs");
                strcat(caminho_principal,barra_invertida);
                strcat(caminho_principal,barra_invertida); 

                switch(mes_int)
                {
                    case 1:
                        strcat(caminho_principal,"jan");
                        if(i<10)
                        {
                            strcat(caminho_principal,"0");
                        }
                        strcat(caminho_principal,dia_string);
                        strcat(caminho_principal,ano_dois_algarismos);
                        strcat(caminho_principal,".pas");
                        break;
                    case 2:
                        strcat(caminho_principal,"fev");
                        if(i<10)
                        {
                            strcat(caminho_principal,"0");
                        }
                        strcat(caminho_principal,dia_string);
                        strcat(caminho_principal,ano_dois_algarismos);
                        strcat(caminho_principal,".pas");
                        break;
                    case 3:
                        strcat(caminho_principal,"mar");
                        if(i<10)
                        {
                            strcat(caminho_principal,"0");
                        }
                        strcat(caminho_principal,dia_string);
                        strcat(caminho_principal,ano_dois_algarismos);
                        strcat(caminho_principal,".pas");
                        break;
                    case 4:
                        strcat(caminho_principal,"abr");
                        if(i<10)
                        {
                            strcat(caminho_principal,"0");
                        }
                        strcat(caminho_principal,dia_string);
                        strcat(caminho_principal,ano_dois_algarismos);
                        strcat(caminho_principal,".pas");
                        break;
                    case 5:
                        strcat(caminho_principal,"mai");
                        if(i<10)
                        {
                            strcat(caminho_principal,"0");
                        }
                        strcat(caminho_principal,dia_string);
                        strcat(caminho_principal,ano_dois_algarismos);
                        strcat(caminho_principal,".pas");
                        break;
                    case 6:
                        strcat(caminho_principal,"jun");
                        if(i<10)
                        {
                            strcat(caminho_principal,"0");
                        }
                        strcat(caminho_principal,dia_string);
                        strcat(caminho_principal,ano_dois_algarismos);
                        strcat(caminho_principal,".pas");
                        break;
                    case 7:
                        strcat(caminho_principal,"jul");
                        if(i<10)
                        {
                            strcat(caminho_principal,"0");
                        }
                        strcat(caminho_principal,dia_string);
                        strcat(caminho_principal,ano_dois_algarismos);
                        strcat(caminho_principal,".pas");
                        break;
                case 8:
                        strcat(caminho_principal,"ago");
                        if(i<10)
                        {
                            strcat(caminho_principal,"0");
                        }
                        strcat(caminho_principal,dia_string);
                        strcat(caminho_principal,ano_dois_algarismos);
                        strcat(caminho_principal,".pas");
                        break;
                case 9:
                        strcat(caminho_principal,"set");
                        if(i<10)
                        {
                            strcat(caminho_principal,"0");
                        }
                        strcat(caminho_principal,dia_string);
                        strcat(caminho_principal,ano_dois_algarismos);
                        strcat(caminho_principal,".pas");
                        break;
                case 10:
                        strcat(caminho_principal,"out");
                        if(i<10)
                        {
                            strcat(caminho_principal,"0");
                        }
                        strcat(caminho_principal,dia_string);
                        strcat(caminho_principal,ano_dois_algarismos);
                        strcat(caminho_principal,".pas");
                        break;
                case 11:
                        strcat(caminho_principal,"nov");
                        if(i<10)
                        {
                            strcat(caminho_principal,"0");
                        }
                        strcat(caminho_principal,dia_string);
                        strcat(caminho_principal,ano_dois_algarismos);
                        strcat(caminho_principal,".pas");
                        break;
                case 12:
                        strcat(caminho_principal,"dez");
                        if(i<10)
                        {
                            strcat(caminho_principal,"0");
                        }
                        strcat(caminho_principal,dia_string);
                        strcat(caminho_principal,ano_dois_algarismos);
                        strcat(caminho_principal,".pas");
                        break;

                        

                } // end switch

                /*=================================================*/
                // Aqui dentro eu tenho o caminho completo para passar para a captura
                // nesse momento caminho_principal possui condicoes de abrir no fopen de captura
                // passar captura aqui

                

               

                printf("================================================================================================\n");

                captura(caminho_principal,i,maximum,minimum,max_aponta,min_aponta,ano_completo,mes_int);


                memset(dia_string,'\0',tamanho_dia_string); // reseta string dia_string
                memset(caminho_principal+tamanho_caminho_mes,'\0',tamanho_caminho_mes); // resetando dia no caminho principal
                

            
            } // end for dias

            if((minimum == FLT_MAX) && (maximum == (FLT_MAX*(-1))))
            {
                printf("\n");
                printf("================================================================================================\n");

                printf("Sem registros mensais...\n");
            }
            else
            {
                printf("Valor max mensal: %f\n",maximum);
                printf("Valor min mensal: %f\n",minimum);
            }
            

    

    
    /*==============================================================================================*/

    

    system("PAUSE");
    return 0;


} // end main

/* ========================================== */
/* --- Desenvolvimento de funcoes ---*/


void captura(char *caminho_principal_passagem, int dia, float contadormax, float contadormin, float *ponteiro_max, float *ponteiro_min,char *ano_completoo, int mes)
{


    FILE *ponteiro;

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


 register int y = 0,
     j = 0; // percorre o vetor Valores_Equipamento, 
    

    // captura de equipamento
     char  Equipamento_guardando[1000]; // guarda conteudo de cada linha 
     char  Equipamento_interesse[] = "ABT_LTCNO_HZ"; // Equipamento que estou encontrando no arquivo, é sempre comparado com Equipamento_guardando
     

    // captura de h 00:00:00
     char  Hora_inicio_guardando[1000]; 
     char  Hora_inicio_interesse[] = "h 00:00:00";


     float  Valores_Equipamento[2059] ; // valores para comparacao futura max e min
     char   Valores_Equipamento_guardando[1000] ; // Armazena valores do equipamento de interesse
    


    register int a = 0,b = 0;


     ponteiro = fopen(caminho_principal_passagem,"r");


    printf("%s\n",caminho_principal_passagem); 


    if(ponteiro == NULL)
    {
        printf("Erro! Arquivo nao encontrado.\n");
    }


    while((ch=fgetc(ponteiro)) != EOF)
    {

        

        /*================================================*/
        // regiao de captura do lixo de arquivo, 2 linhas.

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
                y = 0;
                
            } // end if 
            else 
            {
                Equipamento_guardando[y] = ch; 
                y++;
            }
           


            if(strstr(Equipamento_guardando,Equipamento_interesse))
            {
                count_equip = count2;
               // printf("count_equip = %d\n", count_equip); 
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
                y = 0;
                
            } 
            else 
            {
                Hora_inicio_guardando[y] = ch; 
                y++;
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
                Valores_Equipamento_guardando[y] = ch; 
                
                y++;
               
            
            } // end else if

            else if((count_valores == count_equip) && (ch == 0x0A)) 
            {
                   

                float aux = atof(Valores_Equipamento_guardando);
                Valores_Equipamento[j] = aux;
                

               // printf("count_valores = %d | count2 = %d  | j = %d \n",count_valores,count2,j);


                j++;
                count_valores++; 
                count2++;
                y=0;

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



        float min = Valores_Equipamento[1];
        float max = Valores_Equipamento[1];

        
    if(ponteiro != NULL)
    {
        

        // capturando valor min
        for(a = 1; a < 288; a++)
        {
            if(Valores_Equipamento[a] <= min)
            {
                min = Valores_Equipamento[a];
            }

        }

        if(min < contadormin)
        {
            *ponteiro_min = min;
            
        }

        // capturando valor max
        for(b =1; b < 288; b++)
        {
            if(Valores_Equipamento[b] >= max)
            {
                max = Valores_Equipamento[b];
            }
        } // end for

        if(max > contadormax)
        {
            *ponteiro_max = max;
            
        }

        printf("\n");

        printf("AA/MM/DD - %s/",ano_completoo);
        if(mes < 10)
        {
            printf("0");
        }
        
        printf("%d/",mes);

        if(dia < 10)
        {
            printf("0");
        }
        printf("%d  Valor max: %f ; Valor min: %f\n",dia,max,min);


        printf("\n");

        printf("================================================================================================\n");


    }
    else
    {
        printf("Sem maximo diario, arquivo nao encontrado!\n");
        printf("Sem minimo diario, arquivo nao encontrado!\n");
    }
    
 
    fclose(ponteiro);    



    memset(Equipamento_guardando,'\0',strlen(Equipamento_guardando)); 
    memset(Hora_inicio_guardando,'\0',strlen(Hora_inicio_guardando));
    memset(Valores_Equipamento_guardando,'\0',strlen(Valores_Equipamento_guardando));


} // end funcao captura
