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



/* ========================================== */
/* --- Variáveis Globais --- */




main()
{


char barra_invertida[4] = "\\";

/*Construção do caminho principal*/


char caminho_principal[2052] = "C:";

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

register int i,z; // faz controle do dia atual do mes


    printf("Insira o ano completo com 4 algarismos: ");
    gets(ano_completo);

    printf("Insira somente os dois ultimos algarismos do ano: ");
    gets(ano_dois_algarismos);



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
 
        for(mes_int = 1; mes_int<=12;mes_int++)
        {

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
                /*teste de exibicao de caminho completo aqui dentro*/
                // Aqui dentro eu tenho o caminho completo para passar para a captura
                // nesse momento caminho_principal possui condicoes de abrir no fopen de captura
                // passar captura aqui

                printf("%d\n",strlen(caminho_principal));
                printf("%s\n",caminho_principal);


                printf("\n");

                memset(dia_string,'\0',tamanho_dia_string); // reseta string dia_string
                memset(caminho_principal+tamanho_caminho_mes,'\0',tamanho_caminho_mes); // resetando dia no caminho principal
                


            } // end for dias

            memset(caminho_principal+tamanho_caminho_principal,'\0',tamanho_caminho_principal); // resetando mes

        } // end for mes


    /*termino da regiao 360+ iteracoes*/
    /*==============================================================================================*/


    system("PAUSE");
    return 0;


} // end main

/* ========================================== */
/* --- Desenvolvimento de funcoes ---*/




