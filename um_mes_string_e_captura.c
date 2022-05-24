/* ========================================== */
/* --- Bibliotecas ---*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/* ========================================== */
/* --- Constantes ---*/


#define tam_caract 5000 // fazer modificacao por alocamento de memoria

/* ========================================== */
/* --- Protótipo das funcoes ---*/

void valor_max_min_equipamento(float *vetor_equipamento,int numero_elementos_do_vetor);

/* ========================================== */
/* --- Variáveis Globais --- */




main()
{

/*variaveis programa de captura*/
/*=============================*/

    int count_p = 1; // variavel contadora para ponteiros de abertura de arquivos, entrada nos cases

   // ponteiros do tipo arquivo para abertura do arquivo de leitura 
    FILE *f1,*f2,*f3,*f4,*f5,*f6,*f7,*f8,*f9,*f10,*f11,*f12,*f13,*f14,*f15,*f16,*f17,*f18,*f19,*f20,*f21,*f22,*f23,*f24,*f25,*f26,*f27,*f28,*f29,*f30,*f31;

    // variavel de captura do arquivo a ser lido
     int   ch,ch2,ch3,ch4,ch5,ch6,ch7,ch8,ch9,ch10,ch11,ch12,ch13,ch14,ch15,ch16,ch17,ch18,ch19,ch20,ch21,ch22,ch23,ch24,ch25,ch26,ch27,ch28,ch29,ch30,ch31;  
    
    // variavel de contagem duas primeiras linhas, sanando lixo de arquivo
     int   count1   =  0,
           count12  =  0,
           count13  =  0,
           count14  =  0,
           count15  =  0,
           count16  =  0,
           count17  =  0,
           count18  =  0,
           count19  =  0,
           count110 =  0;

     // variavel percorre countagem do arquivo
     int   count2  =  1,
           count22 =  1,
           count23 =  1,
           count24 =  1,
           count25 =  1,
           count26 =  1,
           count27 =  1,
           count28 =  1,
           count29 =  1,
           count210 = 1;

     //variavel que captura a linha onde o equipamento desejado se encontra
     int   count_equip   =  0,
           count_equip2  =  0,
           count_equip3  =  0,
           count_equip4  =  0,
           count_equip5  =  0,
           count_equip6  =  0,
           count_equip7  =  0,
           count_equip8  =  0,
           count_equip9  =  0,
           count_equip10 =  0;

     // variavel que captura a linha onde começa a mostra a hora 00:00:00
     int   count_h_inicial   =  0,
           count_h_inicial2  =  0,
           count_h_inicial3  =  0,
           count_h_inicial4  =  0,
           count_h_inicial5  =  0,
           count_h_inicial6  =  0,
           count_h_inicial7  =  0,
           count_h_inicial8  =  0,
           count_h_inicial9  =  0,
           count_h_inicial10 =  0;

     // variavel que sempre irá correr nos resultados após cada 'h'..., de modo a encontrar o valor de count_equip
     int   count_valores   =  1,
           count_valores2  =  1,
           count_valores3  =  1,
           count_valores4  =  1,
           count_valores5  =  1,
           count_valores6  =  1,
           count_valores7  =  1,
           count_valores8  =  1,
           count_valores9  =  1,
           count_valores10 =  1;

   //  variavel que será atualizando de acordo com os resultados encontrados, de modo a entrar ou sair de determinados if's
     int   validando_captura   =  0, 
           validando_captura2  =  0,
           validando_captura3  =  0,
           validando_captura4  =  0,
           validando_captura5  =  0,
           validando_captura6  =  0,
           validando_captura7  =  0,
           validando_captura8  =  0,
           validando_captura9  =  0,
           validando_captura10 =  0;


     register int i = 0, i2 = 0, i3 = 0, i4 = 0, i5 = 0, i6 = 0, i7 = 0, i8 = 0, i9 = 0, i10 = 0,
                  w, w2,w3,w4,w5,w6,w7,w8, w9,w10,
                  j = 0, j2=0, j3 =0, j4 = 0, j5 = 0, j6 = 0, j7 = 0, j8 = 0, j9 = 0, j10 = 0; // percorre o vetor Valores_Equipamento, 
    

    // captura de equipamento
     char  Equipamento_guardando[tam_caract],
           Equipamento_guardando2[tam_caract], // guarda conteudo de cada linha 
           Equipamento_guardando3[tam_caract],
           Equipamento_guardando4[tam_caract],
           Equipamento_guardando5[tam_caract],
           Equipamento_guardando6[tam_caract],
           Equipamento_guardando7[tam_caract],
           Equipamento_guardando8[tam_caract],
           Equipamento_guardando9[tam_caract],
           Equipamento_guardando10[tam_caract];

     char  Equipamento_interesse[tam_caract] = "ABT_LTCNO_HZ"; // Equipamento que estou encontrando no arquivo, é sempre comparado com Equipamento_guardando
    // posso passar esse Equipamento em modo de leitura do teclado posteriormente. Entrada mais flexivel...
     

    // captura de h 00:00:00
     char  Hora_inicio_guardando[tam_caract],
           Hora_inicio_guardando2[tam_caract], 
           Hora_inicio_guardando3[tam_caract],
           Hora_inicio_guardando4[tam_caract],
           Hora_inicio_guardando5[tam_caract],
           Hora_inicio_guardando6[tam_caract],
           Hora_inicio_guardando7[tam_caract],
           Hora_inicio_guardando8[tam_caract],
           Hora_inicio_guardando9[tam_caract],
           Hora_inicio_guardando10[tam_caract];



     char  Hora_inicio_interesse[tam_caract] = "h 00:00:00";
           


     float  Valores_Equipamento[tam_caract],
            Valores_Equipamento2[tam_caract],  // valores para comparacao futura max e min
            Valores_Equipamento3[tam_caract],
            Valores_Equipamento4[tam_caract],
            Valores_Equipamento5[tam_caract],
            Valores_Equipamento6[tam_caract],
            Valores_Equipamento7[tam_caract],
            Valores_Equipamento8[tam_caract],
            Valores_Equipamento9[tam_caract],
            Valores_Equipamento10[tam_caract];


     char   Valores_Equipamento_guardando[tam_caract],
            Valores_Equipamento_guardando2[tam_caract], // Armazena valores do equipamento de interesse
            Valores_Equipamento_guardando3[tam_caract],
            Valores_Equipamento_guardando4[tam_caract],
            Valores_Equipamento_guardando5[tam_caract],
            Valores_Equipamento_guardando6[tam_caract],
            Valores_Equipamento_guardando7[tam_caract],
            Valores_Equipamento_guardando8[tam_caract],
            Valores_Equipamento_guardando9[tam_caract],
            Valores_Equipamento_guardando10[tam_caract];


/*=============================*/


char barra_invertida[4] = "\\";

/*Construção do caminho principal*/


char caminho_principal[20052] = "C:";

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

register int z; // faz controle do dia atual do mes


    printf("Insira o ano completo com 4 algarismos: ");
    gets(ano_completo);

    printf("Insira somente os dois ultimos algarismos do ano: ");
    gets(ano_dois_algarismos);

    printf("Insira o mes desejado: ");
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
                /*teste de exibicao de caminho completo aqui dentro*/
                // Aqui dentro eu tenho o caminho completo para passar para a captura
                // nesse momento caminho_principal possui condicoes de abrir no fopen de captura
                // passar captura aqui

                //printf("%d\n",strlen(caminho_principal));
                



            /*criacao dos ponteiros para abertura dos arquivos*/
            /*================================================*/

                switch(count_p)
                {
                case 1:
                    
                    f1 = fopen(caminho_principal,"r");
                    printf("%s\n",caminho_principal);

                    if(f1 == NULL)
                    {
                        printf("ERRO1\n");
                    }


                    while((ch=fgetc(f1)) != EOF)
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
                                w = 0;     
                            } // end if 
                            else 
                            {
                                Equipamento_guardando[w] = ch; 
                                w++;
                            }
                        

                            if(strstr(Equipamento_guardando,Equipamento_interesse))
                            {
                                count_equip = count2;
                            //    printf("count_equip = %d\n", count_equip); 
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
                                w = 0; 
                            } 
                            else 
                            {
                                Hora_inicio_guardando[w] = ch; 
                                w++;
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
                                Valores_Equipamento_guardando[w] = ch; 
                                w++;
                            } // end else if
                            else if((count_valores == count_equip) && (ch == 0x0A)) 
                            {
                                float aux1 = atof(Valores_Equipamento_guardando);
                                Valores_Equipamento[j] = aux1;
                            //  printf("count_valores = %d | count2 = %d  | j = %d \n",count_valores,count2,j);

                                j++;
                                count_valores++; 
                                count2++;
                                w=0;
            
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


                    valor_max_min_equipamento(&Valores_Equipamento,j);
                    fclose(f1);

                

                    memset(dia_string,'\0',tamanho_dia_string); // reseta string dia_string
                    memset(caminho_principal+tamanho_caminho_mes,'\0',tamanho_caminho_mes); // resetando dia no caminho principal
                    
                    count_p++;
                    break;
                case 2:

                        f2 = fopen(caminho_principal,"r");
                        printf("%s\n",caminho_principal);

                        if(f2 == NULL)
                        {
                            printf("ERRO2\n");
                        }


                        while((ch2=fgetc(f2)) != EOF)
                        {
                            
                            /*================================================*/
                            // regiao de caputura do lixo de arquivo, 2 linhas.

                            if((ch2 == 0x0A) && (count12 < 2)) 
                            {
                            count12++; 
                            } // end if

                            /*================================================*/

                            /*================================================*/
                            // regiao de caputura do Equipamento desejado
                            if((count12 == 2) && (validando_captura2 == 0)) // inicio da terceira linha e capturando linha do equipamento de nosso interesse
                            {

                                if(ch2 == 0x0A)
                                {   
                                    count22++;      
                                    w2 = 0;     
                                } // end if 
                                else 
                                {
                                    Equipamento_guardando2[w2] = ch2; 
                                    w2++;
                                }
                            

                                if(strstr(Equipamento_guardando2,Equipamento_interesse))
                                {
                                    count_equip2 = count22;
                                //    printf("count_equip = %d\n", count_equip); 
                                    validando_captura2 = 1;
                                } 
                                
                            } // END IF (COUNT 1) == 2 && VALIDANDO CAPTURA == 0 
                            /*================================================*/   


                            /*================================================*/
                            // Capturando inicio da hora h 00:00:00
                            if(validando_captura2 == 1)
                            {

                                if(ch2 == 0x0A)
                                {   
                                    count22++;      
                                    w2 = 0; 
                                } 
                                else 
                                {
                                    Hora_inicio_guardando2[w2] = ch2; 
                                    w2++;
                                }

                                if(strstr(Hora_inicio_guardando2,Hora_inicio_interesse))
                                {
                                    count_h_inicial2 = count22;
                                    validando_captura2 = 2;
                                } 
                            } // END IF VALIDANDO CAPTURA == 1
                            /*================================================*/


                            /*================================================*/
                            // Capturando todos valores do equipamento
                            if(validando_captura2 == 2)
                            {
                                
                                if((count_valores2 < count_equip2) && (ch2 == 0x0A))
                                {
                                    count_valores2++;
                                    count22++;    
                                } // end if
                                else if((count_valores2 == count_equip2) && ch2!= 0x0A) 
                                {
                                    Valores_Equipamento_guardando2[w2] = ch2; 
                                    w2++;
                                } // end else if
                                else if((count_valores2 == count_equip2) && (ch2 == 0x0A)) 
                                {
                                    float aux2 = atof(Valores_Equipamento_guardando2);
                                    Valores_Equipamento2[j2] = aux2;
                     
                                //  printf("count_valores = %d | count2 = %d  | j = %d \n",count_valores,count2,j);

                                    j2++;
                                    count_valores2++; 
                                    count22++;
                                    w2=0;
                
                                } // end else if

                                else if((count_valores2 > count_equip2) && (count_valores2 < count_h_inicial2) && (ch2 == 0x0A)) 
                                {
                                    count_valores2++;
                                    count22++;
                                } // end else if

                                else if((count_valores2 == count_h_inicial2) && (ch2 = 0x0A))
                                {
                                    count_valores2 = 1;
                                }

                            } // end if(validando_captura == 2)


                            /*================================================*/

                        } // end while de EOF

                        valor_max_min_equipamento(&Valores_Equipamento2,j2);
                        fclose(f2);


                        memset(dia_string,'\0',tamanho_dia_string); // reseta string dia_string
                        memset(caminho_principal+tamanho_caminho_mes,'\0',tamanho_caminho_mes); // resetando dia no caminho principal
                        
                        count_p++;
                        break;
                case 3:

                        f3 = fopen(caminho_principal,"r");
                        printf("%s\n",caminho_principal);

                        if(f3 == NULL)
                        {
                            printf("ERRO3\n");
                        }


                        while((ch3=fgetc(f3)) != EOF)
                        {
                            
                            /*================================================*/
                            // regiao de caputura do lixo de arquivo, 2 linhas.

                            if((ch3 == 0x0A) && (count13 < 2)) 
                            {
                            count13++; 
                            } // end if

                            /*================================================*/

                            /*================================================*/
                            // regiao de caputura do Equipamento desejado
                            if((count13 == 2) && (validando_captura3 == 0)) // inicio da terceira linha e capturando linha do equipamento de nosso interesse
                            {

                                if(ch3 == 0x0A)
                                {   
                                    count23++;      
                                    w3 = 0;     
                                } // end if 
                                else 
                                {
                                    Equipamento_guardando3[w3] = ch3; 
                                    w3++;
                                }
                            

                                if(strstr(Equipamento_guardando3,Equipamento_interesse))
                                {
                                    count_equip3 = count23;
                                //    printf("count_equip = %d\n", count_equip); 
                                    validando_captura3 = 1;
                                } 
                                
                            } // END IF (COUNT 1) == 2 && VALIDANDO CAPTURA == 0 
                            /*================================================*/   


                            /*================================================*/
                            // Capturando inicio da hora h 00:00:00
                            if(validando_captura3 == 1)
                            {

                                if(ch3 == 0x0A)
                                {   
                                    count23++;      
                                    w3 = 0; 
                                } 
                                else 
                                {
                                    Hora_inicio_guardando3[w3] = ch3; 
                                    w3++;
                                }

                                if(strstr(Hora_inicio_guardando3,Hora_inicio_interesse))
                                {
                                    count_h_inicial3 = count23;
                                    validando_captura3 = 2;
                                } 
                            } // END IF VALIDANDO CAPTURA == 1
                            /*================================================*/


                            /*================================================*/
                            // Capturando todos valores do equipamento
                            if(validando_captura3 == 2)
                            {

                                if((count_valores3 < count_equip3) && (ch3 == 0x0A))
                                {
                                    count_valores3++;
                                    count23++;    
                                } // end if
                                else if((count_valores3 == count_equip3) && ch3!= 0x0A) 
                                {
                                    Valores_Equipamento_guardando3[w3] = ch3; 
                                    w3++;
                                } // end else if
                                else if((count_valores3 == count_equip3) && (ch3 == 0x0A)) 
                                {
                                    float aux3 = atof(Valores_Equipamento_guardando3);
                                    Valores_Equipamento3[j3] = aux3;
                                //  printf("count_valores = %d | count2 = %d  | j = %d \n",count_valores,count2,j);

                                    j3++;
                                    count_valores3++; 
                                    count23++;
                                    w3=0;
                
                                } // end else if

                                else if((count_valores3 > count_equip3) && (count_valores3 < count_h_inicial3) && (ch3 == 0x0A)) 
                                {
                                    count_valores3++;
                                    count23++;
                                } // end else if

                                else if((count_valores3 == count_h_inicial3) && (ch3 = 0x0A))
                                {
                                    count_valores3 = 1;
                                }

                            } // end if(validando_captura == 2)


                            /*================================================*/

                        } // end while de EOF

                        valor_max_min_equipamento(&Valores_Equipamento3,j3);
                        fclose(f3);

                    

                        memset(dia_string,'\0',tamanho_dia_string); // reseta string dia_string
                        memset(caminho_principal+tamanho_caminho_mes,'\0',tamanho_caminho_mes); // resetando dia no caminho principal
                        
                        count_p++;
                    break;
                case 4:

                    f4 = fopen(caminho_principal,"r");
                            printf("%s\n",caminho_principal);

                            if(f4 == NULL)
                            {
                                printf("ERRO4\n");
                            }


                            while((ch4=fgetc(f4)) != EOF)
                            {
                                
                                /*================================================*/
                                // regiao de caputura do lixo de arquivo, 2 linhas.

                                if((ch4 == 0x0A) && (count14 < 2)) 
                                {
                                count14++; 
                                } // end if

                                /*================================================*/

                                /*================================================*/
                                // regiao de caputura do Equipamento desejado
                                if((count14 == 2) && (validando_captura4 == 0)) // inicio da terceira linha e capturando linha do equipamento de nosso interesse
                                {

                                    if(ch4 == 0x0A)
                                    {   
                                        count24++;      
                                        w4 = 0;     
                                    } // end if 
                                    else 
                                    {
                                        Equipamento_guardando4[w4] = ch4; 
                                        w4++;
                                    }
                                

                                    if(strstr(Equipamento_guardando4,Equipamento_interesse))
                                    {
                                        count_equip4 = count24;
                                    //    printf("count_equip = %d\n", count_equip); 
                                        validando_captura4 = 1;
                                    } 
                                    
                                } // END IF (COUNT 1) == 2 && VALIDANDO CAPTURA == 0 
                                /*================================================*/   


                                /*================================================*/
                                // Capturando inicio da hora h 00:00:00
                                if(validando_captura4 == 1)
                                {

                                    if(ch4 == 0x0A)
                                    {   
                                        count24++;      
                                        w4 = 0; 
                                    } 
                                    else 
                                    {
                                        Hora_inicio_guardando4[w4] = ch4; 
                                        w4++;
                                    }

                                    if(strstr(Hora_inicio_guardando4,Hora_inicio_interesse))
                                    {
                                        count_h_inicial4 = count24;
                                        validando_captura4 = 2;
                                    } 
                                } // END IF VALIDANDO CAPTURA == 1
                                /*================================================*/


                                /*================================================*/
                                // Capturando todos valores do equipamento
                                if(validando_captura4 == 2)
                                {

                                    if((count_valores4 < count_equip4) && (ch4 == 0x0A))
                                    {
                                        count_valores4++;
                                        count24++;    
                                    } // end if
                                    else if((count_valores4 == count_equip4) && ch4!= 0x0A) 
                                    {
                                        Valores_Equipamento_guardando4[w4] = ch4; 
                                        w4++;
                                    } // end else if
                                    else if((count_valores4 == count_equip4) && (ch4 == 0x0A)) 
                                    {
                                        float aux4 = atof(Valores_Equipamento_guardando4);
                                        Valores_Equipamento4[j4] = aux4;
                                    //  printf("count_valores = %d | count2 = %d  | j = %d \n",count_valores,count2,j);

                                        j4++;
                                        count_valores4++; 
                                        count24++;
                                        w4=0;
                    
                                    } // end else if

                                    else if((count_valores4 > count_equip4) && (count_valores4 < count_h_inicial4) && (ch4 == 0x0A)) 
                                    {
                                        count_valores4++;
                                        count24++;
                                    } // end else if

                                    else if((count_valores4 == count_h_inicial4) && (ch4 = 0x0A))
                                    {
                                        count_valores4 = 1;
                                    }

                                } // end if(validando_captura == 2)


                                /*================================================*/

                            } // end while de EOF

                            valor_max_min_equipamento(&Valores_Equipamento4,j4);
                            fclose(f4);

                        

                            memset(dia_string,'\0',tamanho_dia_string); // reseta string dia_string
                            memset(caminho_principal+tamanho_caminho_mes,'\0',tamanho_caminho_mes); // resetando dia no caminho principal

                    count_p++;
                    break;
                case 5:
                            f5 = fopen(caminho_principal,"r");
                            printf("%s\n",caminho_principal);

                            if(f5 == NULL)
                            {
                                printf("ERRO5\n");
                            }


                            while((ch5=fgetc(f5)) != EOF)
                            {
                                
                                /*================================================*/
                                // regiao de caputura do lixo de arquivo, 2 linhas.

                                if((ch5 == 0x0A) && (count15 < 2)) 
                                {
                                count15++; 
                                } // end if

                                /*================================================*/

                                /*================================================*/
                                // regiao de caputura do Equipamento desejado
                                if((count15 == 2) && (validando_captura5 == 0)) // inicio da terceira linha e capturando linha do equipamento de nosso interesse
                                {

                                    if(ch5 == 0x0A)
                                    {   
                                        count25++;      
                                        w5 = 0;     
                                    } // end if 
                                    else 
                                    {
                                        Equipamento_guardando5[w5] = ch5; 
                                        w5++;
                                    }
                                

                                    if(strstr(Equipamento_guardando5,Equipamento_interesse))
                                    {
                                        count_equip5 = count25;
                                    //    printf("count_equip = %d\n", count_equip); 
                                        validando_captura5 = 1;
                                    } 
                                    
                                } // END IF (COUNT 1) == 2 && VALIDANDO CAPTURA == 0 
                                /*================================================*/   


                                /*================================================*/
                                // Capturando inicio da hora h 00:00:00
                                if(validando_captura5 == 1)
                                {

                                    if(ch5 == 0x0A)
                                    {   
                                        count25++;      
                                        w5 = 0; 
                                    } 
                                    else 
                                    {
                                        Hora_inicio_guardando5[w5] = ch5; 
                                        w5++;
                                    }

                                    if(strstr(Hora_inicio_guardando5,Hora_inicio_interesse))
                                    {
                                        count_h_inicial5 = count25;
                                        validando_captura5 = 2;
                                    } 
                                } // END IF VALIDANDO CAPTURA == 1
                                /*================================================*/


                                /*================================================*/
                                // Capturando todos valores do equipamento
                                if(validando_captura5 == 2)
                                {

                                    if((count_valores5 < count_equip5) && (ch5 == 0x0A))
                                    {
                                        count_valores5++;
                                        count25++;    
                                    } // end if
                                    else if((count_valores5 == count_equip5) && ch5!= 0x0A) 
                                    {
                                        Valores_Equipamento_guardando5[w5] = ch5; 
                                        w5++;
                                    } // end else if
                                    else if((count_valores5 == count_equip5) && (ch5 == 0x0A)) 
                                    {
                                        float aux5 = atof(Valores_Equipamento_guardando5);
                                        Valores_Equipamento5[j5] = aux5;
                                    //  printf("count_valores = %d | count2 = %d  | j = %d \n",count_valores,count2,j);

                                        j5++;
                                        count_valores5++; 
                                        count25++;
                                        w5=0;
                    
                                    } // end else if

                                    else if((count_valores5 > count_equip5) && (count_valores5 < count_h_inicial5) && (ch5 == 0x0A)) 
                                    {
                                        count_valores5++;
                                        count25++;
                                    } // end else if

                                    else if((count_valores5 == count_h_inicial5) && (ch5 = 0x0A))
                                    {
                                        count_valores5 = 1;
                                    }

                                } // end if(validando_captura == 2)


                                /*================================================*/

                            } // end while de EOF

                            valor_max_min_equipamento(&Valores_Equipamento5,j5);
                            fclose(f5);
   

                            memset(dia_string,'\0',tamanho_dia_string); // reseta string dia_string
                            memset(caminho_principal+tamanho_caminho_mes,'\0',tamanho_caminho_mes); // resetando dia no caminho principal
                    
                    count_p++;
                    break;
                case 6:
                            f6 = fopen(caminho_principal,"r");
                            printf("%s\n",caminho_principal);

                            if(f6 == NULL)
                            {
                                printf("ERRO5\n");
                            }


                            while((ch6=fgetc(f6)) != EOF)
                            {
                                
                                /*================================================*/
                                // regiao de caputura do lixo de arquivo, 2 linhas.

                                if((ch6 == 0x0A) && (count16 < 2)) 
                                {
                                count16++; 
                                } // end if

                                /*================================================*/

                                /*================================================*/
                                // regiao de caputura do Equipamento desejado
                                if((count16 == 2) && (validando_captura6 == 0)) // inicio da terceira linha e capturando linha do equipamento de nosso interesse
                                {

                                    if(ch6 == 0x0A)
                                    {   
                                        count26++;      
                                        w6 = 0;     
                                    } // end if 
                                    else 
                                    {
                                        Equipamento_guardando6[w6] = ch6; 
                                        w6++;
                                    }
                                

                                    if(strstr(Equipamento_guardando6,Equipamento_interesse))
                                    {
                                        count_equip6 = count26;
                                    //    printf("count_equip = %d\n", count_equip); 
                                        validando_captura6 = 1;
                                    } 
                                    
                                } // END IF (COUNT 1) == 2 && VALIDANDO CAPTURA == 0 
                                /*================================================*/   


                                /*================================================*/
                                // Capturando inicio da hora h 00:00:00
                                if(validando_captura6 == 1)
                                {

                                    if(ch6 == 0x0A)
                                    {   
                                        count26++;      
                                        w6 = 0; 
                                    } 
                                    else 
                                    {
                                        Hora_inicio_guardando6[w6] = ch6; 
                                        w6++;
                                    }

                                    if(strstr(Hora_inicio_guardando6,Hora_inicio_interesse))
                                    {
                                        count_h_inicial6 = count26;
                                        validando_captura6 = 2;
                                    } 
                                } // END IF VALIDANDO CAPTURA == 1
                                /*================================================*/


                                /*================================================*/
                                // Capturando todos valores do equipamento
                                if(validando_captura6 == 2)
                                {

                                    if((count_valores6 < count_equip6) && (ch6 == 0x0A))
                                    {
                                        count_valores6++;
                                        count26++;    
                                    } // end if
                                    else if((count_valores6 == count_equip6) && ch6!= 0x0A) 
                                    {
                                        Valores_Equipamento_guardando6[w6] = ch6; 
                                        w6++;
                                    } // end else if
                                    else if((count_valores6 == count_equip6) && (ch6 == 0x0A)) 
                                    {
                                        float aux6 = atof(Valores_Equipamento_guardando6);
                                        Valores_Equipamento6[j6] = aux6;
                                    //  printf("count_valores = %d | count2 = %d  | j = %d \n",count_valores,count2,j);

                                        j6++;
                                        count_valores6++; 
                                        count26++;
                                        w6=0;
                    
                                    } // end else if

                                    else if((count_valores6 > count_equip6) && (count_valores6 < count_h_inicial6) && (ch6 == 0x0A)) 
                                    {
                                        count_valores6++;
                                        count26++;
                                    } // end else if

                                    else if((count_valores6 == count_h_inicial6) && (ch6 = 0x0A))
                                    {
                                        count_valores6 = 1;
                                    }

                                } // end if(validando_captura == 2)


                                /*================================================*/

                            } // end while de EOF

                            valor_max_min_equipamento(&Valores_Equipamento6,j6);
                            fclose(f6);

                        

                            memset(dia_string,'\0',tamanho_dia_string); // reseta string dia_string
                            memset(caminho_principal+tamanho_caminho_mes,'\0',tamanho_caminho_mes); // resetando dia no caminho principal                


                    count_p++;
                    break;
                case 7:
                            f7 = fopen(caminho_principal,"r");
                            printf("%s\n",caminho_principal);

                            if(f7 == NULL)
                            {
                                printf("ERRO5\n");
                            }


                            while((ch7=fgetc(f7)) != EOF)
                            {
                                
                                /*================================================*/
                                // regiao de caputura do lixo de arquivo, 2 linhas.

                                if((ch7 == 0x0A) && (count17 < 2)) 
                                {
                                count17++; 
                                } // end if

                                /*================================================*/

                                /*================================================*/
                                // regiao de caputura do Equipamento desejado
                                if((count17 == 2) && (validando_captura7 == 0)) // inicio da terceira linha e capturando linha do equipamento de nosso interesse
                                {

                                    if(ch7 == 0x0A)
                                    {   
                                        count27++;      
                                        w7 = 0;     
                                    } // end if 
                                    else 
                                    {
                                        Equipamento_guardando7[w7] = ch7; 
                                        w7++;
                                    }
                                

                                    if(strstr(Equipamento_guardando7,Equipamento_interesse))
                                    {
                                        count_equip7 = count27;
                                    //    printf("count_equip = %d\n", count_equip); 
                                        validando_captura7 = 1;
                                    } 
                                    
                                } // END IF (COUNT 1) == 2 && VALIDANDO CAPTURA == 0 
                                /*================================================*/   


                                /*================================================*/
                                // Capturando inicio da hora h 00:00:00
                                if(validando_captura7 == 1)
                                {

                                    if(ch7 == 0x0A)
                                    {   
                                        count27++;      
                                        w7 = 0; 
                                    } 
                                    else 
                                    {
                                        Hora_inicio_guardando7[w7] = ch7; 
                                        w7++;
                                    }

                                    if(strstr(Hora_inicio_guardando7,Hora_inicio_interesse))
                                    {
                                        count_h_inicial7 = count27;
                                        validando_captura7 = 2;
                                    } 
                                } // END IF VALIDANDO CAPTURA == 1
                                /*================================================*/


                                /*================================================*/
                                // Capturando todos valores do equipamento
                                if(validando_captura7 == 2)
                                {

                                    if((count_valores7 < count_equip7) && (ch7 == 0x0A))
                                    {
                                        count_valores7++;
                                        count27++;    
                                    } // end if
                                    else if((count_valores7 == count_equip7) && ch7!= 0x0A) 
                                    {
                                        Valores_Equipamento_guardando7[w7] = ch7; 
                                        w7++;
                                    } // end else if
                                    else if((count_valores7 == count_equip7) && (ch7 == 0x0A)) 
                                    {
                                        float aux7 = atof(Valores_Equipamento_guardando7);
                                        Valores_Equipamento7[j7] = aux7;
                                    //  printf("count_valores = %d | count2 = %d  | j = %d \n",count_valores,count2,j);

                                        j7++;
                                        count_valores7++; 
                                        count27++;
                                        w7=0;
                    
                                    } // end else if

                                    else if((count_valores7 > count_equip7) && (count_valores7 < count_h_inicial7) && (ch7 == 0x0A)) 
                                    {
                                        count_valores7++;
                                        count27++;
                                    } // end else if

                                    else if((count_valores7 == count_h_inicial7) && (ch7 = 0x0A))
                                    {
                                        count_valores7 = 1;
                                    }

                                } // end if(validando_captura == 2)


                                /*================================================*/

                            } // end while de EOF

                            valor_max_min_equipamento(&Valores_Equipamento7,j7);
                            fclose(f7);

                        

                            memset(dia_string,'\0',tamanho_dia_string); // reseta string dia_string
                            memset(caminho_principal+tamanho_caminho_mes,'\0',tamanho_caminho_mes); // resetando dia no caminho principal


                    count_p++;
                    break;
                case 8:
                    
                    f8 = fopen(caminho_principal,"r");
                            printf("%s\n",caminho_principal);

                            if(f8 == NULL)
                            {
                                printf("ERRO5\n");
                            }


                            while((ch8=fgetc(f8)) != EOF)
                            {
                                
                                /*================================================*/
                                // regiao de caputura do lixo de arquivo, 2 linhas.

                                if((ch8 == 0x0A) && (count18 < 2)) 
                                {
                                count18++; 
                                } // end if

                                /*================================================*/

                                /*================================================*/
                                // regiao de caputura do Equipamento desejado
                                if((count18 == 2) && (validando_captura8 == 0)) // inicio da terceira linha e capturando linha do equipamento de nosso interesse
                                {

                                    if(ch8 == 0x0A)
                                    {   
                                        count28++;      
                                        w8 = 0;     
                                    } // end if 
                                    else 
                                    {
                                        Equipamento_guardando8[w8] = ch8; 
                                        w8++;
                                    }
                                

                                    if(strstr(Equipamento_guardando8,Equipamento_interesse))
                                    {
                                        count_equip8 = count28;
                                    //    printf("count_equip = %d\n", count_equip); 
                                        validando_captura8 = 1;
                                    } 
                                    
                                } // END IF (COUNT 1) == 2 && VALIDANDO CAPTURA == 0 
                                /*================================================*/   


                                /*================================================*/
                                // Capturando inicio da hora h 00:00:00
                                if(validando_captura8 == 1)
                                {

                                    if(ch8 == 0x0A)
                                    {   
                                        count28++;      
                                        w8 = 0; 
                                    } 
                                    else 
                                    {
                                        Hora_inicio_guardando8[w8] = ch8; 
                                        w8++;
                                    }

                                    if(strstr(Hora_inicio_guardando8,Hora_inicio_interesse))
                                    {
                                        count_h_inicial8 = count28;
                                        validando_captura8 = 2;
                                    } 
                                } // END IF VALIDANDO CAPTURA == 1
                                /*================================================*/


                                /*================================================*/
                                // Capturando todos valores do equipamento
                                if(validando_captura8 == 2)
                                {

                                    if((count_valores8 < count_equip8) && (ch8 == 0x0A))
                                    {
                                        count_valores8++;
                                        count28++;    
                                    } // end if
                                    else if((count_valores8 == count_equip8) && ch8!= 0x0A) 
                                    {
                                        Valores_Equipamento_guardando8[w8] = ch8; 
                                        w8++;
                                    } // end else if
                                    else if((count_valores8 == count_equip8) && (ch8 == 0x0A)) 
                                    {
                                        float aux8 = atof(Valores_Equipamento_guardando8);
                                        Valores_Equipamento8[j8] = aux8;
                                    //  printf("count_valores = %d | count2 = %d  | j = %d \n",count_valores,count2,j);

                                        j8++;
                                        count_valores8++; 
                                        count28++;
                                        w8=0;
                    
                                    } // end else if

                                    else if((count_valores8 > count_equip8) && (count_valores8 < count_h_inicial8) && (ch8 == 0x0A)) 
                                    {
                                        count_valores8++;
                                        count28++;
                                    } // end else if

                                    else if((count_valores8 == count_h_inicial8) && (ch8 = 0x0A))
                                    {
                                        count_valores8 = 1;
                                    }

                                } // end if(validando_captura == 2)


                                /*================================================*/

                            } // end while de EOF

                            valor_max_min_equipamento(&Valores_Equipamento8,j8);
                            fclose(f8);

                        

                            memset(dia_string,'\0',tamanho_dia_string); // reseta string dia_string
                            memset(caminho_principal+tamanho_caminho_mes,'\0',tamanho_caminho_mes); // resetando dia no caminho principal


                    count_p++;
                    break;
                case 9:
                            f9 = fopen(caminho_principal,"r");
                            printf("%s\n",caminho_principal);

                            if(f9 == NULL)
                            {
                                printf("ERRO5\n");
                            }


                            while((ch9=fgetc(f9)) != EOF)
                            {
                                
                                /*================================================*/
                                // regiao de caputura do lixo de arquivo, 2 linhas.

                                if((ch9 == 0x0A) && (count19 < 2)) 
                                {
                                count19++; 
                                } // end if

                                /*================================================*/

                                /*================================================*/
                                // regiao de caputura do Equipamento desejado
                                if((count19 == 2) && (validando_captura9 == 0)) // inicio da terceira linha e capturando linha do equipamento de nosso interesse
                                {

                                    if(ch9 == 0x0A)
                                    {   
                                        count29++;      
                                        w9 = 0;     
                                    } // end if 
                                    else 
                                    {
                                        Equipamento_guardando9[w9] = ch9; 
                                        w9++;
                                    }
                                

                                    if(strstr(Equipamento_guardando9,Equipamento_interesse))
                                    {
                                        count_equip9 = count29;
                                    //    printf("count_equip = %d\n", count_equip); 
                                        validando_captura9 = 1;
                                    } 
                                    
                                } // END IF (COUNT 1) == 2 && VALIDANDO CAPTURA == 0 
                                /*================================================*/   


                                /*================================================*/
                                // Capturando inicio da hora h 00:00:00
                                if(validando_captura9 == 1)
                                {

                                    if(ch9 == 0x0A)
                                    {   
                                        count29++;      
                                        w9 = 0; 
                                    } 
                                    else 
                                    {
                                        Hora_inicio_guardando9[w9] = ch9; 
                                        w9++;
                                    }

                                    if(strstr(Hora_inicio_guardando9,Hora_inicio_interesse))
                                    {
                                        count_h_inicial9 = count29;
                                        validando_captura9 = 2;
                                    } 
                                } // END IF VALIDANDO CAPTURA == 1
                                /*================================================*/


                                /*================================================*/
                                // Capturando todos valores do equipamento
                                if(validando_captura9 == 2)
                                {

                                    if((count_valores9 < count_equip9) && (ch9 == 0x0A))
                                    {
                                        count_valores9++;
                                        count29++;    
                                    } // end if
                                    else if((count_valores9 == count_equip9) && ch9!= 0x0A) 
                                    {
                                        Valores_Equipamento_guardando9[w9] = ch9; 
                                        w9++;
                                    } // end else if
                                    else if((count_valores9 == count_equip9) && (ch9 == 0x0A)) 
                                    {
                                        float aux9 = atof(Valores_Equipamento_guardando9);
                                        Valores_Equipamento9[j9] = aux9;
                                    //  printf("count_valores = %d | count2 = %d  | j = %d \n",count_valores,count2,j);

                                        j9++;
                                        count_valores9++; 
                                        count29++;
                                        w9=0;
                    
                                    } // end else if

                                    else if((count_valores9 > count_equip9) && (count_valores9 < count_h_inicial9) && (ch9 == 0x0A)) 
                                    {
                                        count_valores9++;
                                        count29++;
                                    } // end else if

                                    else if((count_valores9 == count_h_inicial9) && (ch9 = 0x0A))
                                    {
                                        count_valores9 = 1;
                                    }

                                } // end if(validando_captura == 2)


                                /*================================================*/

                            } // end while de EOF

                            valor_max_min_equipamento(&Valores_Equipamento9,j9);
                            fclose(f9);

                        

                            memset(dia_string,'\0',tamanho_dia_string); // reseta string dia_string
                            memset(caminho_principal+tamanho_caminho_mes,'\0',tamanho_caminho_mes); // resetando dia no caminho principal


                    count_p++;
                    break;
                case 10:
                    
                            f10 = fopen(caminho_principal,"r");
                            printf("%s\n",caminho_principal);

                            if(f10 == NULL)
                            {
                                printf("ERRO5\n");
                            }


                            while((ch10=fgetc(f10)) != EOF)
                            {
                                
                                /*================================================*/
                                // regiao de caputura do lixo de arquivo, 2 linhas.

                                if((ch10 == 0x0A) && (count110 < 2)) 
                                {
                                count110++; 
                                } // end if

                                /*================================================*/

                                /*================================================*/
                                // regiao de caputura do Equipamento desejado
                                if((count110 == 2) && (validando_captura10 == 0)) // inicio da terceira linha e capturando linha do equipamento de nosso interesse
                                {

                                    if(ch10 == 0x0A)
                                    {   
                                        count210++;      
                                        w10 = 0;     
                                    } // end if 
                                    else 
                                    {
                                        Equipamento_guardando10[w10] = ch10; 
                                        w10++;
                                    }
                                

                                    if(strstr(Equipamento_guardando10,Equipamento_interesse))
                                    {
                                        count_equip10 = count210;
                                    //    printf("count_equip = %d\n", count_equip); 
                                        validando_captura10 = 1;
                                    } 
                                    
                                } // END IF (COUNT 1) == 2 && VALIDANDO CAPTURA == 0 
                                /*================================================*/   


                                /*================================================*/
                                // Capturando inicio da hora h 00:00:00
                                if(validando_captura10 == 1)
                                {

                                    if(ch10 == 0x0A)
                                    {   
                                        count210++;      
                                        w10 = 0; 
                                    } 
                                    else 
                                    {
                                        Hora_inicio_guardando10[w10] = ch10; 
                                        w10++;
                                    }

                                    if(strstr(Hora_inicio_guardando10,Hora_inicio_interesse))
                                    {
                                        count_h_inicial10 = count210;
                                        validando_captura10 = 2;
                                    } 
                                } // END IF VALIDANDO CAPTURA == 1
                                /*================================================*/


                                /*================================================*/
                                // Capturando todos valores do equipamento
                                if(validando_captura10 == 2)
                                {

                                    if((count_valores10 < count_equip10) && (ch10 == 0x0A))
                                    {
                                        count_valores10++;
                                        count210++;    
                                    } // end if
                                    else if((count_valores10 == count_equip10) && ch10!= 0x0A) 
                                    {
                                        Valores_Equipamento_guardando10[w10] = ch10; 
                                        w10++;
                                    } // end else if
                                    else if((count_valores10 == count_equip10) && (ch10 == 0x0A)) 
                                    {
                                        float aux10 = atof(Valores_Equipamento_guardando10);
                                        Valores_Equipamento10[j10] = aux10;
                                    //  printf("count_valores = %d | count2 = %d  | j = %d \n",count_valores,count2,j);

                                        j10++;
                                        count_valores10++; 
                                        count210++;
                                        w10=0;
                    
                                    } // end else if

                                    else if((count_valores10 > count_equip10) && (count_valores10 < count_h_inicial10) && (ch10 == 0x0A)) 
                                    {
                                        count_valores10++;
                                        count210++;
                                    } // end else if

                                    else if((count_valores10 == count_h_inicial10) && (ch10 = 0x0A))
                                    {
                                        count_valores10 = 1;
                                    }

                                } // end if(validando_captura == 2)


                                /*================================================*/

                            } // end while de EOF

                            valor_max_min_equipamento(&Valores_Equipamento10,j10);
                            fclose(f10);

                        

                            memset(dia_string,'\0',tamanho_dia_string); // reseta string dia_string
                            memset(caminho_principal+tamanho_caminho_mes,'\0',tamanho_caminho_mes); // resetando dia no caminho principal





                    count_p++;
                    break;
                case 11:
                    printf("ok11\n");
                    count_p++;
                    break;
                case 12:
                    printf("ok12\n");
                    count_p++;
                    break;
                case 13:
                    printf("ok13\n");
                    count_p++;
                    break;
                case 14:
                    printf("ok14\n");
                    count_p++;
                    break;
                case 15:
                    printf("ok15\n");
                    count_p++;
                    break;
                case 16:
                    printf("ok16\n");
                    count_p++;
                    break;
                case 17:
                    printf("ok17\n");
                    count_p++;
                    break;
                case 18:
                    printf("ok18\n");
                    count_p++;
                    break;
                case 19:
                    printf("ok19\n");
                    count_p++;
                    break;
                case 20:
                    printf("ok20\n");
                    count_p++;
                    break;
                case 21:
                    printf("ok21\n");
                    count_p++;
                    break;
                case 22:
                    printf("ok22\n");
                    count_p++;
                    break;
                case 23:
                    printf("ok23\n");
                    count_p++;
                    break;
                case 24:
                    printf("ok24\n");
                    count_p++;
                    break;
                case 25:
                    printf("ok25\n");
                    count_p++;
                    break;
                case 26:
                    printf("ok26\n");
                    count_p++;
                    break;
                case 27:
                    printf("ok27\n");
                    count_p++;
                    break;
                case 28:
                    printf("ok28\n");
                    count_p++;
                    break;
                case 29:
                    printf("ok29\n");
                    count_p++;
                    break;
                case 30:
                    printf("ok30\n");
                    count_p++;
                    break;
                case 31:
                    printf("ok31\n");
                    count_p++;
                    break;

                } // end switch

  

                
            } // end for dias

            



    system("PAUSE");
    return 0;


} // end main

/* ========================================== */
/* --- Desenvolvimento de funcoes ---*/



void valor_max_min_equipamento(float *vetor_equipamento,int numero_elementos_do_vetor)
{

register int k;
         float min = vetor_equipamento[1];
         float max = vetor_equipamento[1];

    // capturando valor min
    for(k=1; k < numero_elementos_do_vetor; k++)
    {
        if(vetor_equipamento[k] <= min)
        {
            min = vetor_equipamento[k];
        }

    }

    // capturando valor max
    for(k=1; k < numero_elementos_do_vetor; k++)
    {
        if(vetor_equipamento[k] >= max)
        {
            max = vetor_equipamento[k];
        }
  

    } // end for

    //printf("min = %f\n",min);
    printf("max = %f\n",max);


} // end funcao valor_minimo_equipamento
