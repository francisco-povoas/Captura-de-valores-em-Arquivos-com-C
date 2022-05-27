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
float maximo_mensal(float *vetor_equipamento_valores, int n_elementos_vetor);
float minimo_mensal(float * vet_equipamento_valores, int n_element_vetor);

/* ========================================== */
/* --- Variáveis Globais --- */




main()
{

/*variaveis programa de captura*/
/*=============================*/

    int count_p = 1; // variavel contadora para ponteiros de abertura de arquivos, entrada nos cases
    float maximum = 0,minimum = 0;
    float maximum_aux = 0, minimum_aux = 0;
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
           count110 =  0,
           count111 =  0,
           count112 =  0,
           count113 =  0,
           count114 =  0,
           count115 =  0,
           count116 =  0,
           count117 =  0,
           count118 =  0,
           count119 =  0,
           count120 =  0,
           count121 =  0,
           count122 =  0,
           count123 =  0,
           count124 =  0,
           count125 =  0,
           count126 =  0,
           count127 =  0,
           count128 =  0,
           count129 =  0,
           count130 =  0,
           count131 =  0;

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
           count210 = 1,
           count211 = 1,
           count212 = 1,
           count213 = 1,
           count214 = 1,
           count215 = 1,
           count216 = 1,
           count217 = 1,
           count218 = 1,
           count219 = 1,
           count220 = 1,
           count221 = 1,
           count222 = 1,
           count223 = 1,
           count224 = 1,
           count225 = 1,
           count226 = 1,
           count227 = 1,
           count228 = 1,
           count229 = 1,
           count230 = 1,
           count231 = 1;

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
           count_equip10 =  0,
           count_equip11 =  0,
           count_equip12 =  0,
           count_equip13 =  0,
           count_equip14 =  0,
           count_equip15 =  0,
           count_equip16 =  0,
           count_equip17 =  0,
           count_equip18 =  0,
           count_equip19 =  0,
           count_equip20 =  0,
           count_equip21 =  0,
           count_equip22 =  0,
           count_equip23 =  0,
           count_equip24 =  0,
           count_equip25 =  0,
           count_equip26 =  0,
           count_equip27 =  0,
           count_equip28 =  0,
           count_equip29 =  0,
           count_equip30 =  0,
           count_equip31 =  0;

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
           count_h_inicial10 =  0,
           count_h_inicial11 =  0,
           count_h_inicial12 =  0,
           count_h_inicial13 =  0,
           count_h_inicial14 =  0,
           count_h_inicial15 =  0,
           count_h_inicial16 =  0,
           count_h_inicial17 =  0,
           count_h_inicial18 =  0,
           count_h_inicial19 =  0,
           count_h_inicial20 =  0,
           count_h_inicial21 =  0,
           count_h_inicial22 =  0,
           count_h_inicial23 =  0,
           count_h_inicial24 =  0,
           count_h_inicial25 =  0,
           count_h_inicial26 =  0,
           count_h_inicial27 =  0,
           count_h_inicial28 =  0,
           count_h_inicial29 =  0,
           count_h_inicial30 =  0,
           count_h_inicial31 =  0;

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
           count_valores10 =  1,
           count_valores11 =  1,
           count_valores12 =  1,
           count_valores13 =  1,
           count_valores14 =  1,
           count_valores15 =  1,
           count_valores16 =  1,
           count_valores17 =  1,
           count_valores18 =  1,
           count_valores19 =  1,
           count_valores20 =  1,
           count_valores21 =  1,
           count_valores22 =  1,
           count_valores23 =  1,
           count_valores24 =  1,
           count_valores25 =  1,
           count_valores26 =  1,
           count_valores27 =  1,
           count_valores28 =  1,
           count_valores29 =  1,
           count_valores30 =  1,
           count_valores31 =  1;

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
           validando_captura10 =  0,
           validando_captura11 =  0,
           validando_captura12 =  0,
           validando_captura13 =  0,
           validando_captura14 =  0,
           validando_captura15 =  0,
           validando_captura16 =  0,
           validando_captura17 =  0,
           validando_captura18 =  0,
           validando_captura19 =  0,
           validando_captura20 =  0,
           validando_captura21 =  0,
           validando_captura22 =  0,
           validando_captura23 =  0,
           validando_captura24 =  0,
           validando_captura25 =  0,
           validando_captura26 =  0,
           validando_captura27 =  0,
           validando_captura28 =  0,
           validando_captura29 =  0,
           validando_captura30 =  0,
           validando_captura31 =  0;


     register int i = 0, i2 = 0, i3 = 0, i4 = 0, i5 = 0, i6 = 0, i7 = 0, i8 = 0, i9 = 0, i10 = 0, i11 = 0, i12 = 0, i13 = 0, i14 = 0, i15 = 0, i16 = 0, i17 = 0, i18 = 0, i19 = 0, i20 = 0, i21 = 0, i22 = 0, i23 =0, i24 = 0, i25 = 0, i26 = 0, i27 = 0, i28 = 0, i29 = 0, i30 = 0, i31 =0,
                  w, w2,w3,w4,w5,w6,w7,w8, w9,w10,w11,w12,w13,w14,w15,w16,w17,w18,w19,w20,w21,w22,w23,w24,w25,w26,w27,w28,w29,w30,w31,
                  j = 0, j2=0, j3 =0, j4 = 0, j5 = 0, j6 = 0, j7 = 0, j8 = 0, j9 = 0, j10 = 0, j11 = 0, j12 = 0, j13 = 0, j14 = 0, j15 = 0, j16 = 0, j17 = 0, j18 = 0, j19 = 0, j20 = 0, j21 = 0, j22 = 0, j23 = 0, j24= 0, j25 = 0, j26 =0, j27 = 0, j28 = 0, j29 = 0, j30 = 0, j31 = 0; // percorre o vetor Valores_Equipamento, 
    

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
           Equipamento_guardando10[tam_caract],
           Equipamento_guardando11[tam_caract],
           Equipamento_guardando12[tam_caract],
           Equipamento_guardando13[tam_caract],
           Equipamento_guardando14[tam_caract],
           Equipamento_guardando15[tam_caract],
           Equipamento_guardando16[tam_caract],
           Equipamento_guardando17[tam_caract],
           Equipamento_guardando18[tam_caract],
           Equipamento_guardando19[tam_caract],
           Equipamento_guardando20[tam_caract],
           Equipamento_guardando21[tam_caract],
           Equipamento_guardando22[tam_caract],
           Equipamento_guardando23[tam_caract],
           Equipamento_guardando24[tam_caract],
           Equipamento_guardando25[tam_caract],
           Equipamento_guardando26[tam_caract],
           Equipamento_guardando27[tam_caract],
           Equipamento_guardando28[tam_caract],
           Equipamento_guardando29[tam_caract],
           Equipamento_guardando30[tam_caract],
           Equipamento_guardando31[tam_caract];

     char  Equipamento_interesse[tam_caract] = "ABT_LTBIG_KVAB"; // Equipamento que estou encontrando no arquivo, é sempre comparado com Equipamento_guardando
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
           Hora_inicio_guardando10[tam_caract],
           Hora_inicio_guardando11[tam_caract],
           Hora_inicio_guardando12[tam_caract],
           Hora_inicio_guardando13[tam_caract],
           Hora_inicio_guardando14[tam_caract],
           Hora_inicio_guardando15[tam_caract],
           Hora_inicio_guardando16[tam_caract],
           Hora_inicio_guardando17[tam_caract],
           Hora_inicio_guardando18[tam_caract],
           Hora_inicio_guardando19[tam_caract],
           Hora_inicio_guardando20[tam_caract],
           Hora_inicio_guardando21[tam_caract],
           Hora_inicio_guardando22[tam_caract],
           Hora_inicio_guardando23[tam_caract],
           Hora_inicio_guardando24[tam_caract],
           Hora_inicio_guardando25[tam_caract],
           Hora_inicio_guardando26[tam_caract],
           Hora_inicio_guardando27[tam_caract],
           Hora_inicio_guardando28[tam_caract],
           Hora_inicio_guardando29[tam_caract],
           Hora_inicio_guardando30[tam_caract],
           Hora_inicio_guardando31[tam_caract];



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
            Valores_Equipamento10[tam_caract],
            Valores_Equipamento11[tam_caract],
            Valores_Equipamento12[tam_caract],
            Valores_Equipamento13[tam_caract],
            Valores_Equipamento14[tam_caract],
            Valores_Equipamento15[tam_caract],
            Valores_Equipamento16[tam_caract],
            Valores_Equipamento17[tam_caract],
            Valores_Equipamento18[tam_caract],
            Valores_Equipamento19[tam_caract],
            Valores_Equipamento20[tam_caract],
            Valores_Equipamento21[tam_caract],
            Valores_Equipamento22[tam_caract],
            Valores_Equipamento23[tam_caract],
            Valores_Equipamento24[tam_caract],
            Valores_Equipamento25[tam_caract],
            Valores_Equipamento26[tam_caract],
            Valores_Equipamento27[tam_caract],
            Valores_Equipamento28[tam_caract],
            Valores_Equipamento29[tam_caract],
            Valores_Equipamento30[tam_caract],
            Valores_Equipamento31[tam_caract];


     char   Valores_Equipamento_guardando[tam_caract],
            Valores_Equipamento_guardando2[tam_caract], // Armazena valores do equipamento de interesse
            Valores_Equipamento_guardando3[tam_caract],
            Valores_Equipamento_guardando4[tam_caract],
            Valores_Equipamento_guardando5[tam_caract],
            Valores_Equipamento_guardando6[tam_caract],
            Valores_Equipamento_guardando7[tam_caract],
            Valores_Equipamento_guardando8[tam_caract],
            Valores_Equipamento_guardando9[tam_caract],
            Valores_Equipamento_guardando10[tam_caract],
            Valores_Equipamento_guardando11[tam_caract],
            Valores_Equipamento_guardando12[tam_caract],
            Valores_Equipamento_guardando13[tam_caract],
            Valores_Equipamento_guardando14[tam_caract],
            Valores_Equipamento_guardando15[tam_caract],
            Valores_Equipamento_guardando16[tam_caract],
            Valores_Equipamento_guardando17[tam_caract],
            Valores_Equipamento_guardando18[tam_caract],
            Valores_Equipamento_guardando19[tam_caract],
            Valores_Equipamento_guardando20[tam_caract],
            Valores_Equipamento_guardando21[tam_caract],
            Valores_Equipamento_guardando22[tam_caract],
            Valores_Equipamento_guardando23[tam_caract],
            Valores_Equipamento_guardando24[tam_caract],
            Valores_Equipamento_guardando25[tam_caract],
            Valores_Equipamento_guardando26[tam_caract],
            Valores_Equipamento_guardando27[tam_caract],
            Valores_Equipamento_guardando28[tam_caract],
            Valores_Equipamento_guardando29[tam_caract],
            Valores_Equipamento_guardando30[tam_caract],
            Valores_Equipamento_guardando31[tam_caract];


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


                    valor_max_min_equipamento(&Valores_Equipamento,j); // irá imprimir o maximo e minimo diario

                    maximum = maximo_mensal(&Valores_Equipamento,j); // captura o maximo diario e coloca em maximum
                    minimum = minimo_mensal(&Valores_Equipamento,j); // captura o minimo diario e coloca em minimum

                    
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

                        valor_max_min_equipamento(&Valores_Equipamento2,j2); // imprime os valores maximos e minimos diarios

                        maximum_aux = maximo_mensal(&Valores_Equipamento2,j2); // armazena max diario em aux 
                        minimum_aux = minimo_mensal(&Valores_Equipamento2,j2); // armazena min diario em aux

                        if(maximum_aux > maximum)
                        {
                            maximum = maximum_aux; // novo valor de maximum caso if verdadeiro
                        }

                        if(minimum_aux < minimum)
                        {
                            minimum = minimum_aux; // novo valor de minimo caso if verdadeiro 
                        }


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

                        maximum_aux = maximo_mensal(&Valores_Equipamento3,j3); // armazena max diario em aux 
                        minimum_aux = minimo_mensal(&Valores_Equipamento3,j3); // armazena min diario em aux

                        if(maximum_aux > maximum)
                        {
                            maximum = maximum_aux; // novo valor de maximum caso if verdadeiro
                        }

                        if(minimum_aux < minimum)
                        {
                            minimum = minimum_aux; // novo valor de minimo caso if verdadeiro 
                        }




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

                            maximum_aux = maximo_mensal(&Valores_Equipamento4,j4); // armazena max diario em aux 
                            minimum_aux = minimo_mensal(&Valores_Equipamento4,j4); // armazena min diario em aux

                            if(maximum_aux > maximum)
                            {
                                maximum = maximum_aux; // novo valor de maximum caso if verdadeiro
                            }

                            if(minimum_aux < minimum)
                            {
                                minimum = minimum_aux; // novo valor de minimo caso if verdadeiro 
                            }


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

                            valor_max_min_equipamento(&Valores_Equipamento5,j5); // imprime max e min diario

                            maximum_aux = maximo_mensal(&Valores_Equipamento5,j5); // armazena max diario em aux 
                            minimum_aux = minimo_mensal(&Valores_Equipamento5,j5); // armazena min diario em aux

                            if(maximum_aux > maximum)
                            {
                                maximum = maximum_aux; // novo valor de maximum caso if verdadeiro
                            }

                            if(minimum_aux < minimum)
                            {
                                minimum = minimum_aux; // novo valor de minimo caso if verdadeiro 
                            }



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

                            valor_max_min_equipamento(&Valores_Equipamento6,j6); // imprime max e min diario

                            maximum_aux = maximo_mensal(&Valores_Equipamento6,j6); // armazena max diario em aux 
                            minimum_aux = minimo_mensal(&Valores_Equipamento6,j6); // armazena min diario em aux

                            if(maximum_aux > maximum)
                            {
                                maximum = maximum_aux; // novo valor de maximum caso if verdadeiro
                            }

                            if(minimum_aux < minimum)
                            {
                                minimum = minimum_aux; // novo valor de minimo caso if verdadeiro 
                            }

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
                                printf("ERRO7\n");
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

                            maximum_aux = maximo_mensal(&Valores_Equipamento7,j7); // armazena max diario em aux 
                            minimum_aux = minimo_mensal(&Valores_Equipamento7,j7); // armazena min diario em aux

                            if(maximum_aux > maximum)
                            {
                                maximum = maximum_aux; // novo valor de maximum caso if verdadeiro
                            }

                            if(minimum_aux < minimum)
                            {
                                minimum = minimum_aux; // novo valor de minimo caso if verdadeiro 
                            }


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
                                printf("ERRO8\n");
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

                            maximum_aux = maximo_mensal(&Valores_Equipamento8,j8); // armazena max diario em aux 
                            minimum_aux = minimo_mensal(&Valores_Equipamento8,j8); // armazena min diario em aux

                            if(maximum_aux > maximum)
                            {
                                maximum = maximum_aux; // novo valor de maximum caso if verdadeiro
                            }

                            if(minimum_aux < minimum)
                            {
                                minimum = minimum_aux; // novo valor de minimo caso if verdadeiro 
                            }


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

                            maximum_aux = maximo_mensal(&Valores_Equipamento9,j9); // armazena max diario em aux 
                            minimum_aux = minimo_mensal(&Valores_Equipamento9,j9); // armazena min diario em aux

                            if(maximum_aux > maximum)
                            {
                                maximum = maximum_aux; // novo valor de maximum caso if verdadeiro
                            }

                            if(minimum_aux < minimum)
                            {
                                minimum = minimum_aux; // novo valor de minimo caso if verdadeiro 
                            }
                            
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

                            maximum_aux = maximo_mensal(&Valores_Equipamento10,j10); // armazena max diario em aux 
                            minimum_aux = minimo_mensal(&Valores_Equipamento10,j10); // armazena min diario em aux

                            if(maximum_aux > maximum)
                            {
                                maximum = maximum_aux; // novo valor de maximum caso if verdadeiro
                            }

                            if(minimum_aux < minimum)
                            {
                                minimum = minimum_aux; // novo valor de minimo caso if verdadeiro 
                            }


                            fclose(f10);

                        

                            memset(dia_string,'\0',tamanho_dia_string); // reseta string dia_string
                            memset(caminho_principal+tamanho_caminho_mes,'\0',tamanho_caminho_mes); // resetando dia no caminho principal





                    count_p++;
                    break;
                case 11:
                            f11 = fopen(caminho_principal,"r");
                            printf("%s\n",caminho_principal);

                            if(f11 == NULL)
                            {
                                printf("ERRO11\n");
                            }


                            while((ch11=fgetc(f11)) != EOF)
                            {
                                
                                /*================================================*/
                                // regiao de caputura do lixo de arquivo, 2 linhas.

                                if((ch11 == 0x0A) && (count111 < 2)) 
                                {
                                count111++; 
                                } // end if

                                /*================================================*/

                                /*================================================*/
                                // regiao de caputura do Equipamento desejado
                                if((count111 == 2) && (validando_captura11 == 0)) // inicio da terceira linha e capturando linha do equipamento de nosso interesse
                                {

                                    if(ch11 == 0x0A)
                                    {   
                                        count211++;      
                                        w11 = 0;     
                                    } // end if 
                                    else 
                                    {
                                        Equipamento_guardando11[w11] = ch11; 
                                        w11++;
                                    }
                                

                                    if(strstr(Equipamento_guardando11,Equipamento_interesse))
                                    {
                                        count_equip11 = count211;
                                    //    printf("count_equip = %d\n", count_equip); 
                                        validando_captura11 = 1;
                                    } 
                                    
                                } // END IF (COUNT 1) == 2 && VALIDANDO CAPTURA == 0 
                                /*================================================*/   


                                /*================================================*/
                                // Capturando inicio da hora h 00:00:00
                                if(validando_captura11 == 1)
                                {

                                    if(ch11 == 0x0A)
                                    {   
                                        count211++;      
                                        w11 = 0; 
                                    } 
                                    else 
                                    {
                                        Hora_inicio_guardando11[w11] = ch11; 
                                        w11++;
                                    }

                                    if(strstr(Hora_inicio_guardando11,Hora_inicio_interesse))
                                    {
                                        count_h_inicial11 = count211;
                                        validando_captura11 = 2;
                                    } 
                                } // END IF VALIDANDO CAPTURA == 1
                                /*================================================*/


                                /*================================================*/
                                // Capturando todos valores do equipamento
                                if(validando_captura11 == 2)
                                {

                                    if((count_valores11 < count_equip11) && (ch11 == 0x0A))
                                    {
                                        count_valores11++;
                                        count211++;    
                                    } // end if
                                    else if((count_valores11 == count_equip11) && ch11!= 0x0A) 
                                    {
                                        Valores_Equipamento_guardando11[w11] = ch11; 
                                        w11++;
                                    } // end else if
                                    else if((count_valores11 == count_equip11) && (ch11 == 0x0A)) 
                                    {
                                        float aux11 = atof(Valores_Equipamento_guardando11);
                                        Valores_Equipamento11[j11] = aux11;
                                    //  printf("count_valores = %d | count2 = %d  | j = %d \n",count_valores,count2,j);

                                        j11++;
                                        count_valores11++; 
                                        count211++;
                                        w11=0;
                    
                                    } // end else if

                                    else if((count_valores11 > count_equip11) && (count_valores11 < count_h_inicial11) && (ch11 == 0x0A)) 
                                    {
                                        count_valores11++;
                                        count211++;
                                    } // end else if

                                    else if((count_valores11 == count_h_inicial11) && (ch11 = 0x0A))
                                    {
                                        count_valores11 = 1;
                                    }

                                } // end if(validando_captura == 2)


                                /*================================================*/

                            } // end while de EOF

                            valor_max_min_equipamento(&Valores_Equipamento11,j11);

                            maximum_aux = maximo_mensal(&Valores_Equipamento11,j11); // armazena max diario em aux 
                            minimum_aux = minimo_mensal(&Valores_Equipamento11,j11); // armazena min diario em aux

                            if(maximum_aux > maximum)
                            {
                                maximum = maximum_aux; // novo valor de maximum caso if verdadeiro
                            }

                            if(minimum_aux < minimum)
                            {
                                minimum = minimum_aux; // novo valor de minimo caso if verdadeiro 
                            }

                            fclose(f11);

                        

                            memset(dia_string,'\0',tamanho_dia_string); // reseta string dia_string
                            memset(caminho_principal+tamanho_caminho_mes,'\0',tamanho_caminho_mes); // resetando dia no caminho principal



                    count_p++;
                    break;
                case 12:
                    
                            f12 = fopen(caminho_principal,"r");
                            printf("%s\n",caminho_principal);

                            if(f12 == NULL)
                            {
                                printf("ERRO12\n");
                            }


                            while((ch12=fgetc(f12)) != EOF)
                            {
                                
                                /*================================================*/
                                // regiao de caputura do lixo de arquivo, 2 linhas.

                                if((ch12 == 0x0A) && (count112 < 2)) 
                                {
                                count112++; 
                                } // end if

                                /*================================================*/

                                /*================================================*/
                                // regiao de caputura do Equipamento desejado
                                if((count112 == 2) && (validando_captura12 == 0)) // inicio da terceira linha e capturando linha do equipamento de nosso interesse
                                {

                                    if(ch12 == 0x0A)
                                    {   
                                        count212++;      
                                        w12 = 0;     
                                    } // end if 
                                    else 
                                    {
                                        Equipamento_guardando12[w12] = ch12; 
                                        w12++;
                                    }
                                

                                    if(strstr(Equipamento_guardando12,Equipamento_interesse))
                                    {
                                        count_equip12 = count212;
                                    //    printf("count_equip = %d\n", count_equip); 
                                        validando_captura12 = 1;
                                    } 
                                    
                                } // END IF (COUNT 1) == 2 && VALIDANDO CAPTURA == 0 
                                /*================================================*/   


                                /*================================================*/
                                // Capturando inicio da hora h 00:00:00
                                if(validando_captura12 == 1)
                                {

                                    if(ch12 == 0x0A)
                                    {   
                                        count212++;      
                                        w12 = 0; 
                                    } 
                                    else 
                                    {
                                        Hora_inicio_guardando12[w12] = ch12; 
                                        w12++;
                                    }

                                    if(strstr(Hora_inicio_guardando12,Hora_inicio_interesse))
                                    {
                                        count_h_inicial12 = count212;
                                        validando_captura12 = 2;
                                    } 
                                } // END IF VALIDANDO CAPTURA == 1
                                /*================================================*/


                                /*================================================*/
                                // Capturando todos valores do equipamento
                                if(validando_captura12 == 2)
                                {

                                    if((count_valores12 < count_equip12) && (ch12 == 0x0A))
                                    {
                                        count_valores12++;
                                        count212++;    
                                    } // end if
                                    else if((count_valores12 == count_equip12) && ch12!= 0x0A) 
                                    {
                                        Valores_Equipamento_guardando12[w12] = ch12; 
                                        w12++;
                                    } // end else if
                                    else if((count_valores12 == count_equip12) && (ch12 == 0x0A)) 
                                    {
                                        float aux12 = atof(Valores_Equipamento_guardando12);
                                        Valores_Equipamento12[j12] = aux12;
                                    //  printf("count_valores = %d | count2 = %d  | j = %d \n",count_valores,count2,j);

                                        j12++;
                                        count_valores12++; 
                                        count212++;
                                        w12=0;
                    
                                    } // end else if

                                    else if((count_valores12 > count_equip12) && (count_valores12 < count_h_inicial12) && (ch12 == 0x0A)) 
                                    {
                                        count_valores12++;
                                        count212++;
                                    } // end else if

                                    else if((count_valores12 == count_h_inicial12) && (ch12 = 0x0A))
                                    {
                                        count_valores12 = 1;
                                    }

                                } // end if(validando_captura == 2)


                                /*================================================*/

                            } // end while de EOF

                            valor_max_min_equipamento(&Valores_Equipamento12,j12);

                            maximum_aux = maximo_mensal(&Valores_Equipamento12,j12); // armazena max diario em aux 
                            minimum_aux = minimo_mensal(&Valores_Equipamento12,j12); // armazena min diario em aux

                            if(maximum_aux > maximum)
                            {
                                maximum = maximum_aux; // novo valor de maximum caso if verdadeiro
                            }

                            if(minimum_aux < minimum)
                            {
                                minimum = minimum_aux; // novo valor de minimo caso if verdadeiro 
                            }



                            fclose(f12);

                        

                            memset(dia_string,'\0',tamanho_dia_string); // reseta string dia_string
                            memset(caminho_principal+tamanho_caminho_mes,'\0',tamanho_caminho_mes); // resetando dia no caminho principal




                    count_p++;
                    break;
                case 13:
                    
                            f13 = fopen(caminho_principal,"r");
                            printf("%s\n",caminho_principal);

                            if(f13 == NULL)
                            {
                                printf("ERRO13\n");
                            }


                            while((ch13=fgetc(f13)) != EOF)
                            {
                                
                                /*================================================*/
                                // regiao de caputura do lixo de arquivo, 2 linhas.

                                if((ch13 == 0x0A) && (count113 < 2)) 
                                {
                                count113++; 
                                } // end if

                                /*================================================*/

                                /*================================================*/
                                // regiao de caputura do Equipamento desejado
                                if((count113 == 2) && (validando_captura13 == 0)) // inicio da terceira linha e capturando linha do equipamento de nosso interesse
                                {

                                    if(ch13 == 0x0A)
                                    {   
                                        count213++;      
                                        w13 = 0;     
                                    } // end if 
                                    else 
                                    {
                                        Equipamento_guardando13[w13] = ch13; 
                                        w13++;
                                    }
                                

                                    if(strstr(Equipamento_guardando13,Equipamento_interesse))
                                    {
                                        count_equip13 = count213;
                                    //    printf("count_equip = %d\n", count_equip); 
                                        validando_captura13 = 1;
                                    } 
                                    
                                } // END IF (COUNT 1) == 2 && VALIDANDO CAPTURA == 0 
                                /*================================================*/   


                                /*================================================*/
                                // Capturando inicio da hora h 00:00:00
                                if(validando_captura13 == 1)
                                {

                                    if(ch13 == 0x0A)
                                    {   
                                        count213++;      
                                        w13 = 0; 
                                    } 
                                    else 
                                    {
                                        Hora_inicio_guardando13[w13] = ch13; 
                                        w13++;
                                    }

                                    if(strstr(Hora_inicio_guardando13,Hora_inicio_interesse))
                                    {
                                        count_h_inicial13 = count213;
                                        validando_captura13 = 2;
                                    } 
                                } // END IF VALIDANDO CAPTURA == 1
                                /*================================================*/


                                /*================================================*/
                                // Capturando todos valores do equipamento
                                if(validando_captura13 == 2)
                                {

                                    if((count_valores13 < count_equip13) && (ch13 == 0x0A))
                                    {
                                        count_valores13++;
                                        count213++;    
                                    } // end if
                                    else if((count_valores13 == count_equip13) && ch13!= 0x0A) 
                                    {
                                        Valores_Equipamento_guardando13[w13] = ch13; 
                                        w13++;
                                    } // end else if
                                    else if((count_valores13 == count_equip13) && (ch13 == 0x0A)) 
                                    {
                                        float aux13 = atof(Valores_Equipamento_guardando13);
                                        Valores_Equipamento13[j13] = aux13;
                                    //  printf("count_valores = %d | count2 = %d  | j = %d \n",count_valores,count2,j);

                                        j13++;
                                        count_valores13++; 
                                        count213++;
                                        w13=0;
                    
                                    } // end else if

                                    else if((count_valores13 > count_equip13) && (count_valores13 < count_h_inicial13) && (ch13 == 0x0A)) 
                                    {
                                        count_valores13++;
                                        count213++;
                                    } // end else if

                                    else if((count_valores13 == count_h_inicial13) && (ch13 = 0x0A))
                                    {
                                        count_valores13 = 1;
                                    }

                                } // end if(validando_captura == 2)


                                /*================================================*/

                            } // end while de EOF

                            valor_max_min_equipamento(&Valores_Equipamento13,j13);

                            maximum_aux = maximo_mensal(&Valores_Equipamento13,j13); // armazena max diario em aux 
                            minimum_aux = minimo_mensal(&Valores_Equipamento13,j13); // armazena min diario em aux

                            if(maximum_aux > maximum)
                            {
                                maximum = maximum_aux; // novo valor de maximum caso if verdadeiro
                            }

                            if(minimum_aux < minimum)
                            {
                                minimum = minimum_aux; // novo valor de minimo caso if verdadeiro 
                            }

                            fclose(f13);

                        

                            memset(dia_string,'\0',tamanho_dia_string); // reseta string dia_string
                            memset(caminho_principal+tamanho_caminho_mes,'\0',tamanho_caminho_mes); // resetando dia no caminho principal



                    count_p++;
                    break;
                case 14:
                    
                            f14 = fopen(caminho_principal,"r");
                            printf("%s\n",caminho_principal);

                            if(f14 == NULL)
                            {
                                printf("ERRO14\n");
                            }


                            while((ch14=fgetc(f14)) != EOF)
                            {
                                
                                /*================================================*/
                                // regiao de caputura do lixo de arquivo, 2 linhas.

                                if((ch14 == 0x0A) && (count114 < 2)) 
                                {
                                count114++; 
                                } // end if

                                /*================================================*/

                                /*================================================*/
                                // regiao de caputura do Equipamento desejado
                                if((count114 == 2) && (validando_captura14 == 0)) // inicio da terceira linha e capturando linha do equipamento de nosso interesse
                                {

                                    if(ch14 == 0x0A)
                                    {   
                                        count214++;      
                                        w14 = 0;     
                                    } // end if 
                                    else 
                                    {
                                        Equipamento_guardando14[w14] = ch14; 
                                        w14++;
                                    }
                                

                                    if(strstr(Equipamento_guardando14,Equipamento_interesse))
                                    {
                                        count_equip14 = count214;
                                    //    printf("count_equip = %d\n", count_equip); 
                                        validando_captura14 = 1;
                                    } 
                                    
                                } // END IF (COUNT 1) == 2 && VALIDANDO CAPTURA == 0 
                                /*================================================*/   


                                /*================================================*/
                                // Capturando inicio da hora h 00:00:00
                                if(validando_captura14 == 1)
                                {

                                    if(ch14 == 0x0A)
                                    {   
                                        count214++;      
                                        w14 = 0; 
                                    } 
                                    else 
                                    {
                                        Hora_inicio_guardando14[w14] = ch14; 
                                        w14++;
                                    }

                                    if(strstr(Hora_inicio_guardando14,Hora_inicio_interesse))
                                    {
                                        count_h_inicial14 = count214;
                                        validando_captura14 = 2;
                                    } 
                                } // END IF VALIDANDO CAPTURA == 1
                                /*================================================*/


                                /*================================================*/
                                // Capturando todos valores do equipamento
                                if(validando_captura14 == 2)
                                {

                                    if((count_valores14 < count_equip14) && (ch14 == 0x0A))
                                    {
                                        count_valores14++;
                                        count214++;    
                                    } // end if
                                    else if((count_valores14 == count_equip14) && ch14!= 0x0A) 
                                    {
                                        Valores_Equipamento_guardando14[w14] = ch14; 
                                        w14++;
                                    } // end else if
                                    else if((count_valores14 == count_equip14) && (ch14 == 0x0A)) 
                                    {
                                        float aux14 = atof(Valores_Equipamento_guardando14);
                                        Valores_Equipamento14[j14] = aux14;
                                    //  printf("count_valores = %d | count2 = %d  | j = %d \n",count_valores,count2,j);

                                        j14++;
                                        count_valores14++; 
                                        count214++;
                                        w14=0;
                    
                                    } // end else if

                                    else if((count_valores14 > count_equip14) && (count_valores14 < count_h_inicial14) && (ch14 == 0x0A)) 
                                    {
                                        count_valores14++;
                                        count214++;
                                    } // end else if

                                    else if((count_valores14 == count_h_inicial14) && (ch14 = 0x0A))
                                    {
                                        count_valores14 = 1;
                                    }

                                } // end if(validando_captura == 2)


                                /*================================================*/

                            } // end while de EOF

                            valor_max_min_equipamento(&Valores_Equipamento14,j14);

                            maximum_aux = maximo_mensal(&Valores_Equipamento14,j14); // armazena max diario em aux 
                            minimum_aux = minimo_mensal(&Valores_Equipamento14,j14); // armazena min diario em aux

                            if(maximum_aux > maximum)
                            {
                                maximum = maximum_aux; // novo valor de maximum caso if verdadeiro
                            }

                            if(minimum_aux < minimum)
                            {
                                minimum = minimum_aux; // novo valor de minimo caso if verdadeiro 
                            }
                            fclose(f14);

                        

                            memset(dia_string,'\0',tamanho_dia_string); // reseta string dia_string
                            memset(caminho_principal+tamanho_caminho_mes,'\0',tamanho_caminho_mes); // resetando dia no caminho principal





                    count_p++;
                    break;
                case 15:
                    

                            f15 = fopen(caminho_principal,"r");
                            printf("%s\n",caminho_principal);

                            if(f15 == NULL)
                            {
                                printf("ERRO5\n");
                            }


                            while((ch15=fgetc(f15)) != EOF)
                            {
                                
                                /*================================================*/
                                // regiao de caputura do lixo de arquivo, 2 linhas.

                                if((ch15 == 0x0A) && (count115 < 2)) 
                                {
                                count115++; 
                                } // end if

                                /*================================================*/

                                /*================================================*/
                                // regiao de caputura do Equipamento desejado
                                if((count115 == 2) && (validando_captura15 == 0)) // inicio da terceira linha e capturando linha do equipamento de nosso interesse
                                {

                                    if(ch15 == 0x0A)
                                    {   
                                        count215++;      
                                        w15 = 0;     
                                    } // end if 
                                    else 
                                    {
                                        Equipamento_guardando15[w15] = ch15; 
                                        w15++;
                                    }
                                

                                    if(strstr(Equipamento_guardando15,Equipamento_interesse))
                                    {
                                        count_equip15 = count215;
                                    //    printf("count_equip = %d\n", count_equip); 
                                        validando_captura15 = 1;
                                    } 
                                    
                                } // END IF (COUNT 1) == 2 && VALIDANDO CAPTURA == 0 
                                /*================================================*/   


                                /*================================================*/
                                // Capturando inicio da hora h 00:00:00
                                if(validando_captura15 == 1)
                                {

                                    if(ch15 == 0x0A)
                                    {   
                                        count215++;      
                                        w15 = 0; 
                                    } 
                                    else 
                                    {
                                        Hora_inicio_guardando15[w15] = ch15; 
                                        w15++;
                                    }

                                    if(strstr(Hora_inicio_guardando15,Hora_inicio_interesse))
                                    {
                                        count_h_inicial15 = count215;
                                        validando_captura15 = 2;
                                    } 
                                } // END IF VALIDANDO CAPTURA == 1
                                /*================================================*/


                                /*================================================*/
                                // Capturando todos valores do equipamento
                                if(validando_captura15 == 2)
                                {

                                    if((count_valores15 < count_equip15) && (ch15 == 0x0A))
                                    {
                                        count_valores15++;
                                        count215++;    
                                    } // end if
                                    else if((count_valores15 == count_equip15) && ch15!= 0x0A) 
                                    {
                                        Valores_Equipamento_guardando15[w15] = ch15; 
                                        w15++;
                                    } // end else if
                                    else if((count_valores15 == count_equip15) && (ch15 == 0x0A)) 
                                    {
                                        float aux15 = atof(Valores_Equipamento_guardando15);
                                        Valores_Equipamento15[j15] = aux15;
                                    //  printf("count_valores = %d | count2 = %d  | j = %d \n",count_valores,count2,j);

                                        j15++;
                                        count_valores15++; 
                                        count215++;
                                        w15=0;
                    
                                    } // end else if

                                    else if((count_valores15 > count_equip15) && (count_valores15 < count_h_inicial15) && (ch15 == 0x0A)) 
                                    {
                                        count_valores15++;
                                        count215++;
                                    } // end else if

                                    else if((count_valores15 == count_h_inicial15) && (ch15 = 0x0A))
                                    {
                                        count_valores15 = 1;
                                    }

                                } // end if(validando_captura == 2)


                                /*================================================*/

                            } // end while de EOF

                            valor_max_min_equipamento(&Valores_Equipamento15,j15);

                            maximum_aux = maximo_mensal(&Valores_Equipamento15,j15); // armazena max diario em aux 
                            minimum_aux = minimo_mensal(&Valores_Equipamento15,j15); // armazena min diario em aux

                            if(maximum_aux > maximum)
                            {
                                maximum = maximum_aux; // novo valor de maximum caso if verdadeiro
                            }

                            if(minimum_aux < minimum)
                            {
                                minimum = minimum_aux; // novo valor de minimo caso if verdadeiro 
                            }
                            fclose(f15);

                        

                            memset(dia_string,'\0',tamanho_dia_string); // reseta string dia_string
                            memset(caminho_principal+tamanho_caminho_mes,'\0',tamanho_caminho_mes); // resetando dia no caminho principal





                    count_p++;
                    break;
                case 16:
                    
                            f16 = fopen(caminho_principal,"r");
                            printf("%s\n",caminho_principal);

                            if(f16 == NULL)
                            {
                                printf("ERRO16\n");
                            }


                            while((ch16=fgetc(f16)) != EOF)
                            {
                                
                                /*================================================*/
                                // regiao de caputura do lixo de arquivo, 2 linhas.

                                if((ch16 == 0x0A) && (count116 < 2)) 
                                {
                                count116++; 
                                } // end if

                                /*================================================*/

                                /*================================================*/
                                // regiao de caputura do Equipamento desejado
                                if((count116 == 2) && (validando_captura16 == 0)) // inicio da terceira linha e capturando linha do equipamento de nosso interesse
                                {

                                    if(ch16 == 0x0A)
                                    {   
                                        count216++;      
                                        w16 = 0;     
                                    } // end if 
                                    else 
                                    {
                                        Equipamento_guardando16[w16] = ch16; 
                                        w16++;
                                    }
                                

                                    if(strstr(Equipamento_guardando16,Equipamento_interesse))
                                    {
                                        count_equip16 = count216;
                                    //    printf("count_equip = %d\n", count_equip); 
                                        validando_captura16 = 1;
                                    } 
                                    
                                } // END IF (COUNT 1) == 2 && VALIDANDO CAPTURA == 0 
                                /*================================================*/   


                                /*================================================*/
                                // Capturando inicio da hora h 00:00:00
                                if(validando_captura16 == 1)
                                {

                                    if(ch16 == 0x0A)
                                    {   
                                        count216++;      
                                        w16 = 0; 
                                    } 
                                    else 
                                    {
                                        Hora_inicio_guardando16[w16] = ch16; 
                                        w16++;
                                    }

                                    if(strstr(Hora_inicio_guardando16,Hora_inicio_interesse))
                                    {
                                        count_h_inicial16 = count216;
                                        validando_captura16 = 2;
                                    } 
                                } // END IF VALIDANDO CAPTURA == 1
                                /*================================================*/


                                /*================================================*/
                                // Capturando todos valores do equipamento
                                if(validando_captura16 == 2)
                                {

                                    if((count_valores16 < count_equip16) && (ch16 == 0x0A))
                                    {
                                        count_valores16++;
                                        count216++;    
                                    } // end if
                                    else if((count_valores16 == count_equip16) && ch16!= 0x0A) 
                                    {
                                        Valores_Equipamento_guardando16[w16] = ch16; 
                                        w16++;
                                    } // end else if
                                    else if((count_valores16 == count_equip16) && (ch16 == 0x0A)) 
                                    {
                                        float aux16 = atof(Valores_Equipamento_guardando16);
                                        Valores_Equipamento16[j16] = aux16;
                                    //  printf("count_valores = %d | count2 = %d  | j = %d \n",count_valores,count2,j);

                                        j16++;
                                        count_valores16++; 
                                        count216++;
                                        w16=0;
                    
                                    } // end else if

                                    else if((count_valores16 > count_equip16) && (count_valores16 < count_h_inicial16) && (ch16 == 0x0A)) 
                                    {
                                        count_valores16++;
                                        count216++;
                                    } // end else if

                                    else if((count_valores16 == count_h_inicial16) && (ch16 = 0x0A))
                                    {
                                        count_valores16 = 1;
                                    }

                                } // end if(validando_captura == 2)


                                /*================================================*/

                            } // end while de EOF

                            valor_max_min_equipamento(&Valores_Equipamento16,j16);

                            maximum_aux = maximo_mensal(&Valores_Equipamento16,j16); // armazena max diario em aux 
                            minimum_aux = minimo_mensal(&Valores_Equipamento16,j16); // armazena min diario em aux

                            if(maximum_aux > maximum)
                            {
                                maximum = maximum_aux; // novo valor de maximum caso if verdadeiro
                            }

                            if(minimum_aux < minimum)
                            {
                                minimum = minimum_aux; // novo valor de minimo caso if verdadeiro 
                            }
                            fclose(f16);

                        

                            memset(dia_string,'\0',tamanho_dia_string); // reseta string dia_string
                            memset(caminho_principal+tamanho_caminho_mes,'\0',tamanho_caminho_mes); // resetando dia no caminho principal






                    count_p++;
                    break;
                case 17:
                    
                            f17 = fopen(caminho_principal,"r");
                            printf("%s\n",caminho_principal);

                            if(f17 == NULL)
                            {
                                printf("ERRO17\n");
                            }


                            while((ch17=fgetc(f17)) != EOF)
                            {
                                
                                /*================================================*/
                                // regiao de caputura do lixo de arquivo, 2 linhas.

                                if((ch17 == 0x0A) && (count117 < 2)) 
                                {
                                count117++; 
                                } // end if

                                /*================================================*/

                                /*================================================*/
                                // regiao de caputura do Equipamento desejado
                                if((count117 == 2) && (validando_captura17 == 0)) // inicio da terceira linha e capturando linha do equipamento de nosso interesse
                                {

                                    if(ch17 == 0x0A)
                                    {   
                                        count217++;      
                                        w17 = 0;     
                                    } // end if 
                                    else 
                                    {
                                        Equipamento_guardando17[w17] = ch17; 
                                        w17++;
                                    }
                                

                                    if(strstr(Equipamento_guardando17,Equipamento_interesse))
                                    {
                                        count_equip17 = count217;
                                    //    printf("count_equip = %d\n", count_equip); 
                                        validando_captura17 = 1;
                                    } 
                                    
                                } // END IF (COUNT 1) == 2 && VALIDANDO CAPTURA == 0 
                                /*================================================*/   


                                /*================================================*/
                                // Capturando inicio da hora h 00:00:00
                                if(validando_captura17 == 1)
                                {

                                    if(ch17 == 0x0A)
                                    {   
                                        count217++;      
                                        w17 = 0; 
                                    } 
                                    else 
                                    {
                                        Hora_inicio_guardando17[w17] = ch17; 
                                        w17++;
                                    }

                                    if(strstr(Hora_inicio_guardando17,Hora_inicio_interesse))
                                    {
                                        count_h_inicial17 = count217;
                                        validando_captura17 = 2;
                                    } 
                                } // END IF VALIDANDO CAPTURA == 1
                                /*================================================*/


                                /*================================================*/
                                // Capturando todos valores do equipamento
                                if(validando_captura17 == 2)
                                {

                                    if((count_valores17 < count_equip17) && (ch17 == 0x0A))
                                    {
                                        count_valores17++;
                                        count217++;    
                                    } // end if
                                    else if((count_valores17 == count_equip17) && ch17!= 0x0A) 
                                    {
                                        Valores_Equipamento_guardando17[w17] = ch17; 
                                        w17++;
                                    } // end else if
                                    else if((count_valores17 == count_equip17) && (ch17 == 0x0A)) 
                                    {
                                        float aux17 = atof(Valores_Equipamento_guardando17);
                                        Valores_Equipamento17[j17] = aux17;
                                    //  printf("count_valores = %d | count2 = %d  | j = %d \n",count_valores,count2,j);

                                        j17++;
                                        count_valores17++; 
                                        count217++;
                                        w17=0;
                    
                                    } // end else if

                                    else if((count_valores17 > count_equip17) && (count_valores17 < count_h_inicial17) && (ch17 == 0x0A)) 
                                    {
                                        count_valores17++;
                                        count217++;
                                    } // end else if

                                    else if((count_valores17 == count_h_inicial17) && (ch17 = 0x0A))
                                    {
                                        count_valores17 = 1;
                                    }

                                } // end if(validando_captura == 2)


                                /*================================================*/

                            } // end while de EOF

                            valor_max_min_equipamento(&Valores_Equipamento17,j17);

                            maximum_aux = maximo_mensal(&Valores_Equipamento17,j17); // armazena max diario em aux 
                            minimum_aux = minimo_mensal(&Valores_Equipamento17,j17); // armazena min diario em aux

                            if(maximum_aux > maximum)
                            {
                                maximum = maximum_aux; // novo valor de maximum caso if verdadeiro
                            }

                            if(minimum_aux < minimum)
                            {
                                minimum = minimum_aux; // novo valor de minimo caso if verdadeiro 
                            }
                            fclose(f17);

                        

                            memset(dia_string,'\0',tamanho_dia_string); // reseta string dia_string
                            memset(caminho_principal+tamanho_caminho_mes,'\0',tamanho_caminho_mes); // resetando dia no caminho principal


                    count_p++;
                    break;
                case 18:
                    
                            f18 = fopen(caminho_principal,"r");
                            printf("%s\n",caminho_principal);

                            if(f18 == NULL)
                            {
                                printf("ERRO18\n");
                            }


                            while((ch18=fgetc(f18)) != EOF)
                            {
                                
                                /*================================================*/
                                // regiao de caputura do lixo de arquivo, 2 linhas.

                                if((ch18 == 0x0A) && (count118 < 2)) 
                                {
                                count118++; 
                                } // end if

                                /*================================================*/

                                /*================================================*/
                                // regiao de caputura do Equipamento desejado
                                if((count118 == 2) && (validando_captura18 == 0)) // inicio da terceira linha e capturando linha do equipamento de nosso interesse
                                {

                                    if(ch18 == 0x0A)
                                    {   
                                        count218++;      
                                        w18 = 0;     
                                    } // end if 
                                    else 
                                    {
                                        Equipamento_guardando18[w18] = ch18; 
                                        w18++;
                                    }
                                

                                    if(strstr(Equipamento_guardando18,Equipamento_interesse))
                                    {
                                        count_equip18 = count218;
                                    //    printf("count_equip = %d\n", count_equip); 
                                        validando_captura18 = 1;
                                    } 
                                    
                                } // END IF (COUNT 1) == 2 && VALIDANDO CAPTURA == 0 
                                /*================================================*/   


                                /*================================================*/
                                // Capturando inicio da hora h 00:00:00
                                if(validando_captura18 == 1)
                                {

                                    if(ch18 == 0x0A)
                                    {   
                                        count218++;      
                                        w18 = 0; 
                                    } 
                                    else 
                                    {
                                        Hora_inicio_guardando18[w18] = ch18; 
                                        w18++;
                                    }

                                    if(strstr(Hora_inicio_guardando18,Hora_inicio_interesse))
                                    {
                                        count_h_inicial18 = count218;
                                        validando_captura18 = 2;
                                    } 
                                } // END IF VALIDANDO CAPTURA == 1
                                /*================================================*/


                                /*================================================*/
                                // Capturando todos valores do equipamento
                                if(validando_captura18 == 2)
                                {

                                    if((count_valores18 < count_equip18) && (ch18 == 0x0A))
                                    {
                                        count_valores18++;
                                        count218++;    
                                    } // end if
                                    else if((count_valores18 == count_equip18) && ch18!= 0x0A) 
                                    {
                                        Valores_Equipamento_guardando18[w18] = ch18; 
                                        w18++;
                                    } // end else if
                                    else if((count_valores18 == count_equip18) && (ch18 == 0x0A)) 
                                    {
                                        float aux18 = atof(Valores_Equipamento_guardando18);
                                        Valores_Equipamento18[j18] = aux18;
                                    //  printf("count_valores = %d | count2 = %d  | j = %d \n",count_valores,count2,j);

                                        j18++;
                                        count_valores18++; 
                                        count218++;
                                        w18=0;
                    
                                    } // end else if

                                    else if((count_valores18 > count_equip18) && (count_valores18 < count_h_inicial18) && (ch18 == 0x0A)) 
                                    {
                                        count_valores18++;
                                        count218++;
                                    } // end else if

                                    else if((count_valores18 == count_h_inicial18) && (ch18 = 0x0A))
                                    {
                                        count_valores18 = 1;
                                    }

                                } // end if(validando_captura == 2)


                                /*================================================*/

                            } // end while de EOF

                            valor_max_min_equipamento(&Valores_Equipamento18,j18);

                            maximum_aux = maximo_mensal(&Valores_Equipamento18,j18); // armazena max diario em aux 
                            minimum_aux = minimo_mensal(&Valores_Equipamento18,j18); // armazena min diario em aux

                            if(maximum_aux > maximum)
                            {
                                maximum = maximum_aux; // novo valor de maximum caso if verdadeiro
                            }

                            if(minimum_aux < minimum)
                            {
                                minimum = minimum_aux; // novo valor de minimo caso if verdadeiro 
                            }
                            fclose(f18);

                        

                            memset(dia_string,'\0',tamanho_dia_string); // reseta string dia_string
                            memset(caminho_principal+tamanho_caminho_mes,'\0',tamanho_caminho_mes); // resetando dia no caminho principal






                    count_p++;
                    break;
                case 19:
                    

                            f19 = fopen(caminho_principal,"r");
                            printf("%s\n",caminho_principal);

                            if(f19 == NULL)
                            {
                                printf("ERRO19\n");
                            }


                            while((ch19=fgetc(f19)) != EOF)
                            {
                                
                                /*================================================*/
                                // regiao de caputura do lixo de arquivo, 2 linhas.

                                if((ch19 == 0x0A) && (count119 < 2)) 
                                {
                                count119++; 
                                } // end if

                                /*================================================*/

                                /*================================================*/
                                // regiao de caputura do Equipamento desejado
                                if((count119 == 2) && (validando_captura19 == 0)) // inicio da terceira linha e capturando linha do equipamento de nosso interesse
                                {

                                    if(ch19 == 0x0A)
                                    {   
                                        count219++;      
                                        w19 = 0;     
                                    } // end if 
                                    else 
                                    {
                                        Equipamento_guardando19[w19] = ch19; 
                                        w19++;
                                    }
                                

                                    if(strstr(Equipamento_guardando19,Equipamento_interesse))
                                    {
                                        count_equip19 = count219;
                                    //    printf("count_equip = %d\n", count_equip); 
                                        validando_captura19 = 1;
                                    } 
                                    
                                } // END IF (COUNT 1) == 2 && VALIDANDO CAPTURA == 0 
                                /*================================================*/   


                                /*================================================*/
                                // Capturando inicio da hora h 00:00:00
                                if(validando_captura19 == 1)
                                {

                                    if(ch19 == 0x0A)
                                    {   
                                        count219++;      
                                        w19 = 0; 
                                    } 
                                    else 
                                    {
                                        Hora_inicio_guardando19[w19] = ch19; 
                                        w19++;
                                    }

                                    if(strstr(Hora_inicio_guardando19,Hora_inicio_interesse))
                                    {
                                        count_h_inicial19 = count219;
                                        validando_captura19 = 2;
                                    } 
                                } // END IF VALIDANDO CAPTURA == 1
                                /*================================================*/


                                /*================================================*/
                                // Capturando todos valores do equipamento
                                if(validando_captura19 == 2)
                                {

                                    if((count_valores19 < count_equip19) && (ch19 == 0x0A))
                                    {
                                        count_valores19++;
                                        count219++;    
                                    } // end if
                                    else if((count_valores19 == count_equip19) && ch19!= 0x0A) 
                                    {
                                        Valores_Equipamento_guardando19[w19] = ch19; 
                                        w19++;
                                    } // end else if
                                    else if((count_valores19 == count_equip19) && (ch19 == 0x0A)) 
                                    {
                                        float aux19 = atof(Valores_Equipamento_guardando19);
                                        Valores_Equipamento19[j19] = aux19;
                                    //  printf("count_valores = %d | count2 = %d  | j = %d \n",count_valores,count2,j);

                                        j19++;
                                        count_valores19++; 
                                        count219++;
                                        w19=0;
                    
                                    } // end else if

                                    else if((count_valores19 > count_equip19) && (count_valores19 < count_h_inicial19) && (ch19 == 0x0A)) 
                                    {
                                        count_valores19++;
                                        count219++;
                                    } // end else if

                                    else if((count_valores19 == count_h_inicial19) && (ch19 = 0x0A))
                                    {
                                        count_valores19 = 1;
                                    }

                                } // end if(validando_captura == 2)


                                /*================================================*/

                            } // end while de EOF

                            valor_max_min_equipamento(&Valores_Equipamento19,j19);

                            maximum_aux = maximo_mensal(&Valores_Equipamento19,j19); // armazena max diario em aux 
                            minimum_aux = minimo_mensal(&Valores_Equipamento19,j19); // armazena min diario em aux

                            if(maximum_aux > maximum)
                            {
                                maximum = maximum_aux; // novo valor de maximum caso if verdadeiro
                            }

                            if(minimum_aux < minimum)
                            {
                                minimum = minimum_aux; // novo valor de minimo caso if verdadeiro 
                            }
                            fclose(f19);

                        

                            memset(dia_string,'\0',tamanho_dia_string); // reseta string dia_string
                            memset(caminho_principal+tamanho_caminho_mes,'\0',tamanho_caminho_mes); // resetando dia no caminho principal





                    count_p++;
                    break;
                case 20:
                    
                            f20 = fopen(caminho_principal,"r");
                            printf("%s\n",caminho_principal);

                            if(f20 == NULL)
                            {
                                printf("ERRO20\n");
                            }


                            while((ch20=fgetc(f20)) != EOF)
                            {
                                
                                /*================================================*/
                                // regiao de caputura do lixo de arquivo, 2 linhas.

                                if((ch20 == 0x0A) && (count120 < 2)) 
                                {
                                count120++; 
                                } // end if

                                /*================================================*/

                                /*================================================*/
                                // regiao de caputura do Equipamento desejado
                                if((count120 == 2) && (validando_captura20 == 0)) // inicio da terceira linha e capturando linha do equipamento de nosso interesse
                                {

                                    if(ch20 == 0x0A)
                                    {   
                                        count220++;      
                                        w20 = 0;     
                                    } // end if 
                                    else 
                                    {
                                        Equipamento_guardando20[w20] = ch20; 
                                        w20++;
                                    }
                                

                                    if(strstr(Equipamento_guardando20,Equipamento_interesse))
                                    {
                                        count_equip20 = count220;
                                    //    printf("count_equip = %d\n", count_equip); 
                                        validando_captura20 = 1;
                                    } 
                                    
                                } // END IF (COUNT 1) == 2 && VALIDANDO CAPTURA == 0 
                                /*================================================*/   


                                /*================================================*/
                                // Capturando inicio da hora h 00:00:00
                                if(validando_captura20 == 1)
                                {

                                    if(ch20 == 0x0A)
                                    {   
                                        count220++;      
                                        w20 = 0; 
                                    } 
                                    else 
                                    {
                                        Hora_inicio_guardando20[w20] = ch20; 
                                        w20++;
                                    }

                                    if(strstr(Hora_inicio_guardando20,Hora_inicio_interesse))
                                    {
                                        count_h_inicial20 = count220;
                                        validando_captura20 = 2;
                                    } 
                                } // END IF VALIDANDO CAPTURA == 1
                                /*================================================*/


                                /*================================================*/
                                // Capturando todos valores do equipamento
                                if(validando_captura20 == 2)
                                {

                                    if((count_valores20 < count_equip20) && (ch20 == 0x0A))
                                    {
                                        count_valores20++;
                                        count220++;    
                                    } // end if
                                    else if((count_valores20 == count_equip20) && ch20!= 0x0A) 
                                    {
                                        Valores_Equipamento_guardando20[w20] = ch20; 
                                        w20++;
                                    } // end else if
                                    else if((count_valores20 == count_equip20) && (ch20 == 0x0A)) 
                                    {
                                        float aux20 = atof(Valores_Equipamento_guardando20);
                                        Valores_Equipamento20[j20] = aux20;
                                    //  printf("count_valores = %d | count2 = %d  | j = %d \n",count_valores,count2,j);

                                        j20++;
                                        count_valores20++; 
                                        count220++;
                                        w20=0;
                    
                                    } // end else if

                                    else if((count_valores20 > count_equip20) && (count_valores20 < count_h_inicial20) && (ch20 == 0x0A)) 
                                    {
                                        count_valores20++;
                                        count220++;
                                    } // end else if

                                    else if((count_valores20 == count_h_inicial20) && (ch20 = 0x0A))
                                    {
                                        count_valores20 = 1;
                                    }

                                } // end if(validando_captura == 2)


                                /*================================================*/

                            } // end while de EOF

                            valor_max_min_equipamento(&Valores_Equipamento20,j20);

                            maximum_aux = maximo_mensal(&Valores_Equipamento20,j20); // armazena max diario em aux 
                            minimum_aux = minimo_mensal(&Valores_Equipamento20,j20); // armazena min diario em aux

                            if(maximum_aux > maximum)
                            {
                                maximum = maximum_aux; // novo valor de maximum caso if verdadeiro
                            }

                            if(minimum_aux < minimum)
                            {
                                minimum = minimum_aux; // novo valor de minimo caso if verdadeiro 
                            }
                            fclose(f20);

                        

                            memset(dia_string,'\0',tamanho_dia_string); // reseta string dia_string
                            memset(caminho_principal+tamanho_caminho_mes,'\0',tamanho_caminho_mes); // resetando dia no caminho principal



                    count_p++;
                    break;
                case 21:
                    
                            f21 = fopen(caminho_principal,"r");
                            printf("%s\n",caminho_principal);

                            if(f21 == NULL)
                            {
                                printf("ERRO21\n");
                            }


                            while((ch21=fgetc(f21)) != EOF)
                            {
                                
                                /*================================================*/
                                // regiao de caputura do lixo de arquivo, 2 linhas.

                                if((ch21 == 0x0A) && (count121 < 2)) 
                                {
                                count121++; 
                                } // end if

                                /*================================================*/

                                /*================================================*/
                                // regiao de caputura do Equipamento desejado
                                if((count121 == 2) && (validando_captura21 == 0)) // inicio da terceira linha e capturando linha do equipamento de nosso interesse
                                {

                                    if(ch21 == 0x0A)
                                    {   
                                        count221++;      
                                        w21 = 0;     
                                    } // end if 
                                    else 
                                    {
                                        Equipamento_guardando21[w21] = ch21; 
                                        w21++;
                                    }
                                

                                    if(strstr(Equipamento_guardando21,Equipamento_interesse))
                                    {
                                        count_equip21 = count221;
                                    //    printf("count_equip = %d\n", count_equip); 
                                        validando_captura21 = 1;
                                    } 
                                    
                                } // END IF (COUNT 1) == 2 && VALIDANDO CAPTURA == 0 
                                /*================================================*/   


                                /*================================================*/
                                // Capturando inicio da hora h 00:00:00
                                if(validando_captura21 == 1)
                                {

                                    if(ch21 == 0x0A)
                                    {   
                                        count221++;      
                                        w21 = 0; 
                                    } 
                                    else 
                                    {
                                        Hora_inicio_guardando21[w21] = ch21; 
                                        w21++;
                                    }

                                    if(strstr(Hora_inicio_guardando21,Hora_inicio_interesse))
                                    {
                                        count_h_inicial21 = count221;
                                        validando_captura21 = 2;
                                    } 
                                } // END IF VALIDANDO CAPTURA == 1
                                /*================================================*/


                                /*================================================*/
                                // Capturando todos valores do equipamento
                                if(validando_captura21 == 2)
                                {

                                    if((count_valores21 < count_equip21) && (ch21 == 0x0A))
                                    {
                                        count_valores21++;
                                        count221++;    
                                    } // end if
                                    else if((count_valores21 == count_equip21) && ch21!= 0x0A) 
                                    {
                                        Valores_Equipamento_guardando21[w21] = ch21; 
                                        w21++;
                                    } // end else if
                                    else if((count_valores21 == count_equip21) && (ch21 == 0x0A)) 
                                    {
                                        float aux21 = atof(Valores_Equipamento_guardando21);
                                        Valores_Equipamento21[j21] = aux21;
                                    //  printf("count_valores = %d | count2 = %d  | j = %d \n",count_valores,count2,j);

                                        j21++;
                                        count_valores21++; 
                                        count221++;
                                        w21=0;
                    
                                    } // end else if

                                    else if((count_valores21 > count_equip21) && (count_valores21 < count_h_inicial21) && (ch21 == 0x0A)) 
                                    {
                                        count_valores21++;
                                        count221++;
                                    } // end else if

                                    else if((count_valores21 == count_h_inicial21) && (ch21 = 0x0A))
                                    {
                                        count_valores21 = 1;
                                    }

                                } // end if(validando_captura == 2)


                                /*================================================*/

                            } // end while de EOF

                            valor_max_min_equipamento(&Valores_Equipamento21,j21);

                            maximum_aux = maximo_mensal(&Valores_Equipamento21,j21); // armazena max diario em aux 
                            minimum_aux = minimo_mensal(&Valores_Equipamento21,j21); // armazena min diario em aux

                            if(maximum_aux > maximum)
                            {
                                maximum = maximum_aux; // novo valor de maximum caso if verdadeiro
                            }

                            if(minimum_aux < minimum)
                            {
                                minimum = minimum_aux; // novo valor de minimo caso if verdadeiro 
                            }
                            fclose(f21);

                        

                            memset(dia_string,'\0',tamanho_dia_string); // reseta string dia_string
                            memset(caminho_principal+tamanho_caminho_mes,'\0',tamanho_caminho_mes); // resetando dia no caminho principal



                    count_p++;
                    break;
                case 22:
                    
                            f22 = fopen(caminho_principal,"r");
                            printf("%s\n",caminho_principal);

                            if(f22 == NULL)
                            {
                                printf("ERRO22\n");
                            }


                            while((ch22=fgetc(f22)) != EOF)
                            {
                                
                                /*================================================*/
                                // regiao de caputura do lixo de arquivo, 2 linhas.

                                if((ch22 == 0x0A) && (count122 < 2)) 
                                {
                                count122++; 
                                } // end if

                                /*================================================*/

                                /*================================================*/
                                // regiao de caputura do Equipamento desejado
                                if((count122 == 2) && (validando_captura22 == 0)) // inicio da terceira linha e capturando linha do equipamento de nosso interesse
                                {

                                    if(ch22 == 0x0A)
                                    {   
                                        count222++;      
                                        w22 = 0;     
                                    } // end if 
                                    else 
                                    {
                                        Equipamento_guardando22[w22] = ch22; 
                                        w22++;
                                    }
                                

                                    if(strstr(Equipamento_guardando22,Equipamento_interesse))
                                    {
                                        count_equip22 = count222;
                                    //    printf("count_equip = %d\n", count_equip); 
                                        validando_captura22 = 1;
                                    } 
                                    
                                } // END IF (COUNT 1) == 2 && VALIDANDO CAPTURA == 0 
                                /*================================================*/   


                                /*================================================*/
                                // Capturando inicio da hora h 00:00:00
                                if(validando_captura22 == 1)
                                {

                                    if(ch22 == 0x0A)
                                    {   
                                        count222++;      
                                        w22 = 0; 
                                    } 
                                    else 
                                    {
                                        Hora_inicio_guardando22[w22] = ch22; 
                                        w22++;
                                    }

                                    if(strstr(Hora_inicio_guardando22,Hora_inicio_interesse))
                                    {
                                        count_h_inicial22 = count222;
                                        validando_captura22 = 2;
                                    } 
                                } // END IF VALIDANDO CAPTURA == 1
                                /*================================================*/


                                /*================================================*/
                                // Capturando todos valores do equipamento
                                if(validando_captura22 == 2)
                                {

                                    if((count_valores22 < count_equip22) && (ch22 == 0x0A))
                                    {
                                        count_valores22++;
                                        count222++;    
                                    } // end if
                                    else if((count_valores22 == count_equip22) && ch22!= 0x0A) 
                                    {
                                        Valores_Equipamento_guardando22[w22] = ch22; 
                                        w22++;
                                    } // end else if
                                    else if((count_valores22 == count_equip22) && (ch22 == 0x0A)) 
                                    {
                                        float aux22 = atof(Valores_Equipamento_guardando22);
                                        Valores_Equipamento22[j22] = aux22;
                                    //  printf("count_valores = %d | count2 = %d  | j = %d \n",count_valores,count2,j);

                                        j22++;
                                        count_valores22++; 
                                        count222++;
                                        w22=0;
                    
                                    } // end else if

                                    else if((count_valores22 > count_equip22) && (count_valores22 < count_h_inicial22) && (ch22 == 0x0A)) 
                                    {
                                        count_valores22++;
                                        count222++;
                                    } // end else if

                                    else if((count_valores22 == count_h_inicial22) && (ch22 = 0x0A))
                                    {
                                        count_valores22 = 1;
                                    }

                                } // end if(validando_captura == 2)


                                /*================================================*/

                            } // end while de EOF

                            valor_max_min_equipamento(&Valores_Equipamento22,j22);

                            maximum_aux = maximo_mensal(&Valores_Equipamento22,j22); // armazena max diario em aux 
                            minimum_aux = minimo_mensal(&Valores_Equipamento22,j22); // armazena min diario em aux

                            if(maximum_aux > maximum)
                            {
                                maximum = maximum_aux; // novo valor de maximum caso if verdadeiro
                            }

                            if(minimum_aux < minimum)
                            {
                                minimum = minimum_aux; // novo valor de minimo caso if verdadeiro 
                            }
                            fclose(f22);

                        

                            memset(dia_string,'\0',tamanho_dia_string); // reseta string dia_string
                            memset(caminho_principal+tamanho_caminho_mes,'\0',tamanho_caminho_mes); // resetando dia no caminho principal


                    count_p++;
                    break;
                case 23:
                    
                            f23 = fopen(caminho_principal,"r");
                            printf("%s\n",caminho_principal);

                            if(f23 == NULL)
                            {
                                printf("ERRO23\n");
                            }


                            while((ch23=fgetc(f23)) != EOF)
                            {
                                
                                /*================================================*/
                                // regiao de caputura do lixo de arquivo, 2 linhas.

                                if((ch23 == 0x0A) && (count123 < 2)) 
                                {
                                count123++; 
                                } // end if

                                /*================================================*/

                                /*================================================*/
                                // regiao de caputura do Equipamento desejado
                                if((count123 == 2) && (validando_captura23 == 0)) // inicio da terceira linha e capturando linha do equipamento de nosso interesse
                                {

                                    if(ch23 == 0x0A)
                                    {   
                                        count223++;      
                                        w23 = 0;     
                                    } // end if 
                                    else 
                                    {
                                        Equipamento_guardando23[w23] = ch23; 
                                        w23++;
                                    }
                                

                                    if(strstr(Equipamento_guardando23,Equipamento_interesse))
                                    {
                                        count_equip23 = count223;
                                    //    printf("count_equip = %d\n", count_equip); 
                                        validando_captura23 = 1;
                                    } 
                                    
                                } // END IF (COUNT 1) == 2 && VALIDANDO CAPTURA == 0 
                                /*================================================*/   


                                /*================================================*/
                                // Capturando inicio da hora h 00:00:00
                                if(validando_captura23 == 1)
                                {

                                    if(ch23 == 0x0A)
                                    {   
                                        count223++;      
                                        w23 = 0; 
                                    } 
                                    else 
                                    {
                                        Hora_inicio_guardando23[w23] = ch23; 
                                        w23++;
                                    }

                                    if(strstr(Hora_inicio_guardando23,Hora_inicio_interesse))
                                    {
                                        count_h_inicial23 = count223;
                                        validando_captura23 = 2;
                                    } 
                                } // END IF VALIDANDO CAPTURA == 1
                                /*================================================*/


                                /*================================================*/
                                // Capturando todos valores do equipamento
                                if(validando_captura23 == 2)
                                {

                                    if((count_valores23 < count_equip23) && (ch23 == 0x0A))
                                    {
                                        count_valores23++;
                                        count223++;    
                                    } // end if
                                    else if((count_valores23 == count_equip23) && ch23!= 0x0A) 
                                    {
                                        Valores_Equipamento_guardando23[w23] = ch23; 
                                        w23++;
                                    } // end else if
                                    else if((count_valores23 == count_equip23) && (ch23 == 0x0A)) 
                                    {
                                        float aux23 = atof(Valores_Equipamento_guardando23);
                                        Valores_Equipamento23[j23] = aux23;
                                    //  printf("count_valores = %d | count2 = %d  | j = %d \n",count_valores,count2,j);

                                        j23++;
                                        count_valores23++; 
                                        count223++;
                                        w23=0;
                    
                                    } // end else if

                                    else if((count_valores23 > count_equip23) && (count_valores23 < count_h_inicial23) && (ch23 == 0x0A)) 
                                    {
                                        count_valores23++;
                                        count223++;
                                    } // end else if

                                    else if((count_valores23 == count_h_inicial23) && (ch23 = 0x0A))
                                    {
                                        count_valores23 = 1;
                                    }

                                } // end if(validando_captura == 2)


                                /*================================================*/

                            } // end while de EOF

                            valor_max_min_equipamento(&Valores_Equipamento23,j23);

                            maximum_aux = maximo_mensal(&Valores_Equipamento23,j23); // armazena max diario em aux 
                            minimum_aux = minimo_mensal(&Valores_Equipamento23,j23); // armazena min diario em aux

                            if(maximum_aux > maximum)
                            {
                                maximum = maximum_aux; // novo valor de maximum caso if verdadeiro
                            }

                            if(minimum_aux < minimum)
                            {
                                minimum = minimum_aux; // novo valor de minimo caso if verdadeiro 
                            }
                            fclose(f23);

                        

                            memset(dia_string,'\0',tamanho_dia_string); // reseta string dia_string
                            memset(caminho_principal+tamanho_caminho_mes,'\0',tamanho_caminho_mes); // resetando dia no caminho principal



                    count_p++;
                    break;
                case 24:
                    
                            f24 = fopen(caminho_principal,"r");
                            printf("%s\n",caminho_principal);

                            if(f24 == NULL)
                            {
                                printf("ERRO24\n");
                            }


                            while((ch24=fgetc(f24)) != EOF)
                            {
                                
                                /*================================================*/
                                // regiao de caputura do lixo de arquivo, 2 linhas.

                                if((ch24 == 0x0A) && (count124 < 2)) 
                                {
                                count124++; 
                                } // end if

                                /*================================================*/

                                /*================================================*/
                                // regiao de caputura do Equipamento desejado
                                if((count124 == 2) && (validando_captura24 == 0)) // inicio da terceira linha e capturando linha do equipamento de nosso interesse
                                {

                                    if(ch24 == 0x0A)
                                    {   
                                        count224++;      
                                        w24 = 0;     
                                    } // end if 
                                    else 
                                    {
                                        Equipamento_guardando24[w24] = ch24; 
                                        w24++;
                                    }
                                

                                    if(strstr(Equipamento_guardando24,Equipamento_interesse))
                                    {
                                        count_equip24 = count224;
                                    //    printf("count_equip = %d\n", count_equip); 
                                        validando_captura24 = 1;
                                    } 
                                    
                                } // END IF (COUNT 1) == 2 && VALIDANDO CAPTURA == 0 
                                /*================================================*/   


                                /*================================================*/
                                // Capturando inicio da hora h 00:00:00
                                if(validando_captura24 == 1)
                                {

                                    if(ch24 == 0x0A)
                                    {   
                                        count224++;      
                                        w24 = 0; 
                                    } 
                                    else 
                                    {
                                        Hora_inicio_guardando24[w24] = ch24; 
                                        w24++;
                                    }

                                    if(strstr(Hora_inicio_guardando24,Hora_inicio_interesse))
                                    {
                                        count_h_inicial24 = count224;
                                        validando_captura24 = 2;
                                    } 
                                } // END IF VALIDANDO CAPTURA == 1
                                /*================================================*/


                                /*================================================*/
                                // Capturando todos valores do equipamento
                                if(validando_captura24 == 2)
                                {

                                    if((count_valores24 < count_equip24) && (ch24 == 0x0A))
                                    {
                                        count_valores24++;
                                        count224++;    
                                    } // end if
                                    else if((count_valores24 == count_equip24) && ch24!= 0x0A) 
                                    {
                                        Valores_Equipamento_guardando24[w24] = ch24; 
                                        w24++;
                                    } // end else if
                                    else if((count_valores24 == count_equip24) && (ch24 == 0x0A)) 
                                    {
                                        float aux24 = atof(Valores_Equipamento_guardando24);
                                        Valores_Equipamento24[j24] = aux24;
                                    //  printf("count_valores = %d | count2 = %d  | j = %d \n",count_valores,count2,j);

                                        j24++;
                                        count_valores24++; 
                                        count224++;
                                        w24=0;
                    
                                    } // end else if

                                    else if((count_valores24 > count_equip24) && (count_valores24 < count_h_inicial24) && (ch24 == 0x0A)) 
                                    {
                                        count_valores24++;
                                        count224++;
                                    } // end else if

                                    else if((count_valores24 == count_h_inicial24) && (ch24 = 0x0A))
                                    {
                                        count_valores24 = 1;
                                    }

                                } // end if(validando_captura == 2)


                                /*================================================*/

                            } // end while de EOF

                            valor_max_min_equipamento(&Valores_Equipamento24,j24);

                            maximum_aux = maximo_mensal(&Valores_Equipamento24,j24); // armazena max diario em aux 
                            minimum_aux = minimo_mensal(&Valores_Equipamento24,j24); // armazena min diario em aux

                            if(maximum_aux > maximum)
                            {
                                maximum = maximum_aux; // novo valor de maximum caso if verdadeiro
                            }

                            if(minimum_aux < minimum)
                            {
                                minimum = minimum_aux; // novo valor de minimo caso if verdadeiro 
                            }
                            fclose(f24);

                        

                            memset(dia_string,'\0',tamanho_dia_string); // reseta string dia_string
                            memset(caminho_principal+tamanho_caminho_mes,'\0',tamanho_caminho_mes); // resetando dia no caminho principal



                    count_p++;
                    break;
                case 25:
                    
                            f25 = fopen(caminho_principal,"r");
                            printf("%s\n",caminho_principal);

                            if(f25 == NULL)
                            {
                                printf("ERRO25\n");
                            }


                            while((ch25=fgetc(f25)) != EOF)
                            {
                                
                                /*================================================*/
                                // regiao de caputura do lixo de arquivo, 2 linhas.

                                if((ch25 == 0x0A) && (count125 < 2)) 
                                {
                                count125++; 
                                } // end if

                                /*================================================*/

                                /*================================================*/
                                // regiao de caputura do Equipamento desejado
                                if((count125 == 2) && (validando_captura25 == 0)) // inicio da terceira linha e capturando linha do equipamento de nosso interesse
                                {

                                    if(ch25 == 0x0A)
                                    {   
                                        count225++;      
                                        w25 = 0;     
                                    } // end if 
                                    else 
                                    {
                                        Equipamento_guardando25[w25] = ch25; 
                                        w25++;
                                    }
                                

                                    if(strstr(Equipamento_guardando25,Equipamento_interesse))
                                    {
                                        count_equip25 = count225;
                                    //    printf("count_equip = %d\n", count_equip); 
                                        validando_captura25 = 1;
                                    } 
                                    
                                } // END IF (COUNT 1) == 2 && VALIDANDO CAPTURA == 0 
                                /*================================================*/   


                                /*================================================*/
                                // Capturando inicio da hora h 00:00:00
                                if(validando_captura25 == 1)
                                {

                                    if(ch25 == 0x0A)
                                    {   
                                        count225++;      
                                        w25 = 0; 
                                    } 
                                    else 
                                    {
                                        Hora_inicio_guardando25[w25] = ch25; 
                                        w25++;
                                    }

                                    if(strstr(Hora_inicio_guardando25,Hora_inicio_interesse))
                                    {
                                        count_h_inicial25 = count225;
                                        validando_captura25 = 2;
                                    } 
                                } // END IF VALIDANDO CAPTURA == 1
                                /*================================================*/


                                /*================================================*/
                                // Capturando todos valores do equipamento
                                if(validando_captura25 == 2)
                                {

                                    if((count_valores25 < count_equip25) && (ch25 == 0x0A))
                                    {
                                        count_valores25++;
                                        count225++;    
                                    } // end if
                                    else if((count_valores25 == count_equip25) && ch25!= 0x0A) 
                                    {
                                        Valores_Equipamento_guardando25[w25] = ch25; 
                                        w25++;
                                    } // end else if
                                    else if((count_valores25 == count_equip25) && (ch25 == 0x0A)) 
                                    {
                                        float aux25 = atof(Valores_Equipamento_guardando25);
                                        Valores_Equipamento25[j25] = aux25;
                                    //  printf("count_valores = %d | count2 = %d  | j = %d \n",count_valores,count2,j);

                                        j25++;
                                        count_valores25++; 
                                        count225++;
                                        w25=0;
                    
                                    } // end else if

                                    else if((count_valores25 > count_equip25) && (count_valores25 < count_h_inicial25) && (ch25 == 0x0A)) 
                                    {
                                        count_valores25++;
                                        count225++;
                                    } // end else if

                                    else if((count_valores25 == count_h_inicial25) && (ch25 = 0x0A))
                                    {
                                        count_valores25 = 1;
                                    }

                                } // end if(validando_captura == 2)


                                /*================================================*/

                            } // end while de EOF

                            valor_max_min_equipamento(&Valores_Equipamento25,j25);

                            maximum_aux = maximo_mensal(&Valores_Equipamento25,j25); // armazena max diario em aux 
                            minimum_aux = minimo_mensal(&Valores_Equipamento25,j25); // armazena min diario em aux

                            if(maximum_aux > maximum)
                            {
                                maximum = maximum_aux; // novo valor de maximum caso if verdadeiro
                            }

                            if(minimum_aux < minimum)
                            {
                                minimum = minimum_aux; // novo valor de minimo caso if verdadeiro 
                            }
                            fclose(f25);

                        

                            memset(dia_string,'\0',tamanho_dia_string); // reseta string dia_string
                            memset(caminho_principal+tamanho_caminho_mes,'\0',tamanho_caminho_mes); // resetando dia no caminho principal


                    count_p++;
                    break;
                case 26:
                    
                            f26 = fopen(caminho_principal,"r");
                            printf("%s\n",caminho_principal);

                            if(f26 == NULL)
                            {
                                printf("ERRO26\n");
                            }


                            while((ch26=fgetc(f26)) != EOF)
                            {
                                
                                /*================================================*/
                                // regiao de caputura do lixo de arquivo, 2 linhas.

                                if((ch26 == 0x0A) && (count126 < 2)) 
                                {
                                count126++; 
                                } // end if

                                /*================================================*/

                                /*================================================*/
                                // regiao de caputura do Equipamento desejado
                                if((count126 == 2) && (validando_captura26 == 0)) // inicio da terceira linha e capturando linha do equipamento de nosso interesse
                                {

                                    if(ch26 == 0x0A)
                                    {   
                                        count226++;      
                                        w26 = 0;     
                                    } // end if 
                                    else 
                                    {
                                        Equipamento_guardando26[w26] = ch26; 
                                        w26++;
                                    }
                                

                                    if(strstr(Equipamento_guardando26,Equipamento_interesse))
                                    {
                                        count_equip26 = count226;
                                    //    printf("count_equip = %d\n", count_equip); 
                                        validando_captura26 = 1;
                                    } 
                                    
                                } // END IF (COUNT 1) == 2 && VALIDANDO CAPTURA == 0 
                                /*================================================*/   


                                /*================================================*/
                                // Capturando inicio da hora h 00:00:00
                                if(validando_captura26 == 1)
                                {

                                    if(ch26 == 0x0A)
                                    {   
                                        count226++;      
                                        w26 = 0; 
                                    } 
                                    else 
                                    {
                                        Hora_inicio_guardando26[w26] = ch26; 
                                        w26++;
                                    }

                                    if(strstr(Hora_inicio_guardando26,Hora_inicio_interesse))
                                    {
                                        count_h_inicial26 = count226;
                                        validando_captura26 = 2;
                                    } 
                                } // END IF VALIDANDO CAPTURA == 1
                                /*================================================*/


                                /*================================================*/
                                // Capturando todos valores do equipamento
                                if(validando_captura26 == 2)
                                {

                                    if((count_valores26 < count_equip26) && (ch26 == 0x0A))
                                    {
                                        count_valores26++;
                                        count226++;    
                                    } // end if
                                    else if((count_valores26 == count_equip26) && ch26!= 0x0A) 
                                    {
                                        Valores_Equipamento_guardando26[w26] = ch26; 
                                        w26++;
                                    } // end else if
                                    else if((count_valores26 == count_equip26) && (ch26 == 0x0A)) 
                                    {
                                        float aux26 = atof(Valores_Equipamento_guardando26);
                                        Valores_Equipamento26[j26] = aux26;
                                    //  printf("count_valores = %d | count2 = %d  | j = %d \n",count_valores,count2,j);

                                        j26++;
                                        count_valores26++; 
                                        count226++;
                                        w26=0;
                    
                                    } // end else if

                                    else if((count_valores26 > count_equip26) && (count_valores26 < count_h_inicial26) && (ch26 == 0x0A)) 
                                    {
                                        count_valores26++;
                                        count226++;
                                    } // end else if

                                    else if((count_valores26 == count_h_inicial26) && (ch26 = 0x0A))
                                    {
                                        count_valores26 = 1;
                                    }

                                } // end if(validando_captura == 2)


                                /*================================================*/

                            } // end while de EOF

                            valor_max_min_equipamento(&Valores_Equipamento26,j26);

                            maximum_aux = maximo_mensal(&Valores_Equipamento26,j26); // armazena max diario em aux 
                            minimum_aux = minimo_mensal(&Valores_Equipamento26,j26); // armazena min diario em aux

                            if(maximum_aux > maximum)
                            {
                                maximum = maximum_aux; // novo valor de maximum caso if verdadeiro
                            }

                            if(minimum_aux < minimum)
                            {
                                minimum = minimum_aux; // novo valor de minimo caso if verdadeiro 
                            }
                            fclose(f26);

                        

                            memset(dia_string,'\0',tamanho_dia_string); // reseta string dia_string
                            memset(caminho_principal+tamanho_caminho_mes,'\0',tamanho_caminho_mes); // resetando dia no caminho principal


                    count_p++;
                    break;
                case 27:

                            f27 = fopen(caminho_principal,"r");
                            printf("%s\n",caminho_principal);

                            if(f27 == NULL)
                            {
                                printf("ERRO27\n");
                            }


                            while((ch27=fgetc(f27)) != EOF)
                            {
                                
                                /*================================================*/
                                // regiao de caputura do lixo de arquivo, 2 linhas.

                                if((ch27 == 0x0A) && (count127 < 2)) 
                                {
                                count127++; 
                                } // end if

                                /*================================================*/

                                /*================================================*/
                                // regiao de caputura do Equipamento desejado
                                if((count127 == 2) && (validando_captura27 == 0)) // inicio da terceira linha e capturando linha do equipamento de nosso interesse
                                {

                                    if(ch27 == 0x0A)
                                    {   
                                        count227++;      
                                        w27 = 0;     
                                    } // end if 
                                    else 
                                    {
                                        Equipamento_guardando27[w27] = ch27; 
                                        w27++;
                                    }
                                

                                    if(strstr(Equipamento_guardando27,Equipamento_interesse))
                                    {
                                        count_equip27 = count227;
                                    //    printf("count_equip = %d\n", count_equip); 
                                        validando_captura27 = 1;
                                    } 
                                    
                                } // END IF (COUNT 1) == 2 && VALIDANDO CAPTURA == 0 
                                /*================================================*/   


                                /*================================================*/
                                // Capturando inicio da hora h 00:00:00
                                if(validando_captura27 == 1)
                                {

                                    if(ch27 == 0x0A)
                                    {   
                                        count227++;      
                                        w27 = 0; 
                                    } 
                                    else 
                                    {
                                        Hora_inicio_guardando27[w27] = ch27; 
                                        w27++;
                                    }

                                    if(strstr(Hora_inicio_guardando27,Hora_inicio_interesse))
                                    {
                                        count_h_inicial27 = count227;
                                        validando_captura27 = 2;
                                    } 
                                } // END IF VALIDANDO CAPTURA == 1
                                /*================================================*/


                                /*================================================*/
                                // Capturando todos valores do equipamento
                                if(validando_captura27 == 2)
                                {

                                    if((count_valores27 < count_equip27) && (ch27 == 0x0A))
                                    {
                                        count_valores27++;
                                        count227++;    
                                    } // end if
                                    else if((count_valores27 == count_equip27) && ch27!= 0x0A) 
                                    {
                                        Valores_Equipamento_guardando27[w27] = ch27; 
                                        w27++;
                                    } // end else if
                                    else if((count_valores27 == count_equip27) && (ch27 == 0x0A)) 
                                    {
                                        float aux27 = atof(Valores_Equipamento_guardando27);
                                        Valores_Equipamento27[j27] = aux27;
                                    //  printf("count_valores = %d | count2 = %d  | j = %d \n",count_valores,count2,j);

                                        j27++;
                                        count_valores27++; 
                                        count227++;
                                        w27=0;
                    
                                    } // end else if

                                    else if((count_valores27 > count_equip27) && (count_valores27 < count_h_inicial27) && (ch27 == 0x0A)) 
                                    {
                                        count_valores27++;
                                        count227++;
                                    } // end else if

                                    else if((count_valores27 == count_h_inicial27) && (ch27 = 0x0A))
                                    {
                                        count_valores27 = 1;
                                    }

                                } // end if(validando_captura == 2)


                                /*================================================*/

                            } // end while de EOF

                            valor_max_min_equipamento(&Valores_Equipamento27,j27);

                            maximum_aux = maximo_mensal(&Valores_Equipamento27,j27); // armazena max diario em aux 
                            minimum_aux = minimo_mensal(&Valores_Equipamento27,j27); // armazena min diario em aux

                            if(maximum_aux > maximum)
                            {
                                maximum = maximum_aux; // novo valor de maximum caso if verdadeiro
                            }

                            if(minimum_aux < minimum)
                            {
                                minimum = minimum_aux; // novo valor de minimo caso if verdadeiro 
                            }
                            fclose(f27);

                        

                            memset(dia_string,'\0',tamanho_dia_string); // reseta string dia_string
                            memset(caminho_principal+tamanho_caminho_mes,'\0',tamanho_caminho_mes); // resetando dia no caminho principal

                    count_p++;
                    break;
                case 28:

                            f28 = fopen(caminho_principal,"r");
                            printf("%s\n",caminho_principal);

                            if(f28 == NULL)
                            {
                                printf("ERRO28\n");
                            }


                            while((ch28=fgetc(f28)) != EOF)
                            {
                                
                                /*================================================*/
                                // regiao de caputura do lixo de arquivo, 2 linhas.

                                if((ch28 == 0x0A) && (count128 < 2)) 
                                {
                                count128++; 
                                } // end if

                                /*================================================*/

                                /*================================================*/
                                // regiao de caputura do Equipamento desejado
                                if((count128 == 2) && (validando_captura28 == 0)) // inicio da terceira linha e capturando linha do equipamento de nosso interesse
                                {

                                    if(ch28 == 0x0A)
                                    {   
                                        count228++;      
                                        w28 = 0;     
                                    } // end if 
                                    else 
                                    {
                                        Equipamento_guardando28[w28] = ch28; 
                                        w28++;
                                    }
                                

                                    if(strstr(Equipamento_guardando28,Equipamento_interesse))
                                    {
                                        count_equip28 = count228;
                                    //    printf("count_equip = %d\n", count_equip); 
                                        validando_captura28 = 1;
                                    } 
                                    
                                } // END IF (COUNT 1) == 2 && VALIDANDO CAPTURA == 0 
                                /*================================================*/   


                                /*================================================*/
                                // Capturando inicio da hora h 00:00:00
                                if(validando_captura28 == 1)
                                {

                                    if(ch28 == 0x0A)
                                    {   
                                        count228++;      
                                        w28 = 0; 
                                    } 
                                    else 
                                    {
                                        Hora_inicio_guardando28[w28] = ch28; 
                                        w28++;
                                    }

                                    if(strstr(Hora_inicio_guardando28,Hora_inicio_interesse))
                                    {
                                        count_h_inicial28 = count228;
                                        validando_captura28 = 2;
                                    } 
                                } // END IF VALIDANDO CAPTURA == 1
                                /*================================================*/


                                /*================================================*/
                                // Capturando todos valores do equipamento
                                if(validando_captura28 == 2)
                                {

                                    if((count_valores28 < count_equip28) && (ch28 == 0x0A))
                                    {
                                        count_valores28++;
                                        count228++;    
                                    } // end if
                                    else if((count_valores28 == count_equip28) && ch28!= 0x0A) 
                                    {
                                        Valores_Equipamento_guardando28[w28] = ch28; 
                                        w28++;
                                    } // end else if
                                    else if((count_valores28 == count_equip28) && (ch28 == 0x0A)) 
                                    {
                                        float aux28 = atof(Valores_Equipamento_guardando28);
                                        Valores_Equipamento28[j28] = aux28;
                                    //  printf("count_valores = %d | count2 = %d  | j = %d \n",count_valores,count2,j);

                                        j28++;
                                        count_valores28++; 
                                        count228++;
                                        w28=0;
                    
                                    } // end else if

                                    else if((count_valores28 > count_equip28) && (count_valores28 < count_h_inicial28) && (ch28 == 0x0A)) 
                                    {
                                        count_valores28++;
                                        count228++;
                                    } // end else if

                                    else if((count_valores28 == count_h_inicial28) && (ch28 = 0x0A))
                                    {
                                        count_valores28 = 1;
                                    }

                                } // end if(validando_captura == 2)


                                /*================================================*/

                            } // end while de EOF

                            valor_max_min_equipamento(&Valores_Equipamento28,j28);

                            maximum_aux = maximo_mensal(&Valores_Equipamento28,j28); // armazena max diario em aux 
                            minimum_aux = minimo_mensal(&Valores_Equipamento28,j28); // armazena min diario em aux

                            if(maximum_aux > maximum)
                            {
                                maximum = maximum_aux; // novo valor de maximum caso if verdadeiro
                            }

                            if(minimum_aux < minimum)
                            {
                                minimum = minimum_aux; // novo valor de minimo caso if verdadeiro 
                            }
                            fclose(f28);

                        

                            memset(dia_string,'\0',tamanho_dia_string); // reseta string dia_string
                            memset(caminho_principal+tamanho_caminho_mes,'\0',tamanho_caminho_mes); // resetando dia no caminho principal



                    count_p++;
                    break;
                case 29:
                    
                            f29 = fopen(caminho_principal,"r");
                            printf("%s\n",caminho_principal);

                            if(f29 == NULL)
                            {
                                printf("ERRO29\n");
                            }


                            while((ch29=fgetc(f29)) != EOF)
                            {
                                
                                /*================================================*/
                                // regiao de caputura do lixo de arquivo, 2 linhas.

                                if((ch29 == 0x0A) && (count129 < 2)) 
                                {
                                count129++; 
                                } // end if

                                /*================================================*/

                                /*================================================*/
                                // regiao de caputura do Equipamento desejado
                                if((count129 == 2) && (validando_captura29 == 0)) // inicio da terceira linha e capturando linha do equipamento de nosso interesse
                                {

                                    if(ch29 == 0x0A)
                                    {   
                                        count229++;      
                                        w29 = 0;     
                                    } // end if 
                                    else 
                                    {
                                        Equipamento_guardando29[w29] = ch29; 
                                        w29++;
                                    }
                                

                                    if(strstr(Equipamento_guardando29,Equipamento_interesse))
                                    {
                                        count_equip29 = count229;
                                    //    printf("count_equip = %d\n", count_equip); 
                                        validando_captura29 = 1;
                                    } 
                                    
                                } // END IF (COUNT 1) == 2 && VALIDANDO CAPTURA == 0 
                                /*================================================*/   


                                /*================================================*/
                                // Capturando inicio da hora h 00:00:00
                                if(validando_captura29 == 1)
                                {

                                    if(ch29 == 0x0A)
                                    {   
                                        count229++;      
                                        w29 = 0; 
                                    } 
                                    else 
                                    {
                                        Hora_inicio_guardando29[w29] = ch29; 
                                        w29++;
                                    }

                                    if(strstr(Hora_inicio_guardando29,Hora_inicio_interesse))
                                    {
                                        count_h_inicial29 = count229;
                                        validando_captura29 = 2;
                                    } 
                                } // END IF VALIDANDO CAPTURA == 1
                                /*================================================*/


                                /*================================================*/
                                // Capturando todos valores do equipamento
                                if(validando_captura29 == 2)
                                {

                                    if((count_valores29 < count_equip29) && (ch29 == 0x0A))
                                    {
                                        count_valores29++;
                                        count229++;    
                                    } // end if
                                    else if((count_valores29 == count_equip29) && ch29!= 0x0A) 
                                    {
                                        Valores_Equipamento_guardando29[w29] = ch29; 
                                        w29++;
                                    } // end else if
                                    else if((count_valores29 == count_equip29) && (ch29 == 0x0A)) 
                                    {
                                        float aux29 = atof(Valores_Equipamento_guardando29);
                                        Valores_Equipamento29[j29] = aux29;
                                    //  printf("count_valores = %d | count2 = %d  | j = %d \n",count_valores,count2,j);

                                        j29++;
                                        count_valores29++; 
                                        count229++;
                                        w29=0;
                    
                                    } // end else if

                                    else if((count_valores29 > count_equip29) && (count_valores29 < count_h_inicial29) && (ch29 == 0x0A)) 
                                    {
                                        count_valores29++;
                                        count229++;
                                    } // end else if

                                    else if((count_valores29 == count_h_inicial29) && (ch29 = 0x0A))
                                    {
                                        count_valores29 = 1;
                                    }

                                } // end if(validando_captura == 2)


                                /*================================================*/

                            } // end while de EOF

                            valor_max_min_equipamento(&Valores_Equipamento29,j29);
                            maximum_aux = maximo_mensal(&Valores_Equipamento29,j29); // armazena max diario em aux 
                            minimum_aux = minimo_mensal(&Valores_Equipamento29,j29); // armazena min diario em aux

                            if(maximum_aux > maximum)
                            {
                                maximum = maximum_aux; // novo valor de maximum caso if verdadeiro
                            }

                            if(minimum_aux < minimum)
                            {
                                minimum = minimum_aux; // novo valor de minimo caso if verdadeiro 
                            }
                            fclose(f29);

                        

                            memset(dia_string,'\0',tamanho_dia_string); // reseta string dia_string
                            memset(caminho_principal+tamanho_caminho_mes,'\0',tamanho_caminho_mes); // resetando dia no caminho principal


                    count_p++;
                    break;
                case 30:
                    
                            f30 = fopen(caminho_principal,"r");
                            printf("%s\n",caminho_principal);

                            if(f30 == NULL)
                            {
                                printf("ERRO30\n");
                            }


                            while((ch30=fgetc(f30)) != EOF)
                            {
                                
                                /*================================================*/
                                // regiao de caputura do lixo de arquivo, 2 linhas.

                                if((ch30 == 0x0A) && (count130 < 2)) 
                                {
                                count130++; 
                                } // end if

                                /*================================================*/

                                /*================================================*/
                                // regiao de caputura do Equipamento desejado
                                if((count130 == 2) && (validando_captura30 == 0)) // inicio da terceira linha e capturando linha do equipamento de nosso interesse
                                {

                                    if(ch30 == 0x0A)
                                    {   
                                        count230++;      
                                        w30 = 0;     
                                    } // end if 
                                    else 
                                    {
                                        Equipamento_guardando30[w30] = ch30; 
                                        w30++;
                                    }
                                

                                    if(strstr(Equipamento_guardando30,Equipamento_interesse))
                                    {
                                        count_equip30 = count230;
                                    //    printf("count_equip = %d\n", count_equip); 
                                        validando_captura30 = 1;
                                    } 
                                    
                                } // END IF (COUNT 1) == 2 && VALIDANDO CAPTURA == 0 
                                /*================================================*/   


                                /*================================================*/
                                // Capturando inicio da hora h 00:00:00
                                if(validando_captura30 == 1)
                                {

                                    if(ch30 == 0x0A)
                                    {   
                                        count230++;      
                                        w30 = 0; 
                                    } 
                                    else 
                                    {
                                        Hora_inicio_guardando30[w30] = ch30; 
                                        w30++;
                                    }

                                    if(strstr(Hora_inicio_guardando30,Hora_inicio_interesse))
                                    {
                                        count_h_inicial30 = count230;
                                        validando_captura30 = 2;
                                    } 
                                } // END IF VALIDANDO CAPTURA == 1
                                /*================================================*/


                                /*================================================*/
                                // Capturando todos valores do equipamento
                                if(validando_captura30 == 2)
                                {

                                    if((count_valores30 < count_equip30) && (ch30 == 0x0A))
                                    {
                                        count_valores30++;
                                        count230++;    
                                    } // end if
                                    else if((count_valores30 == count_equip30) && ch30!= 0x0A) 
                                    {
                                        Valores_Equipamento_guardando30[w30] = ch30; 
                                        w30++;
                                    } // end else if
                                    else if((count_valores30 == count_equip30) && (ch30 == 0x0A)) 
                                    {
                                        float aux30 = atof(Valores_Equipamento_guardando30);
                                        Valores_Equipamento30[j30] = aux30;
                                    //  printf("count_valores = %d | count2 = %d  | j = %d \n",count_valores,count2,j);

                                        j30++;
                                        count_valores30++; 
                                        count230++;
                                        w30=0;
                    
                                    } // end else if

                                    else if((count_valores30 > count_equip30) && (count_valores30 < count_h_inicial30) && (ch30 == 0x0A)) 
                                    {
                                        count_valores30++;
                                        count230++;
                                    } // end else if

                                    else if((count_valores30 == count_h_inicial30) && (ch30 = 0x0A))
                                    {
                                        count_valores30 = 1;
                                    }

                                } // end if(validando_captura == 2)


                                /*================================================*/

                            } // end while de EOF

                            valor_max_min_equipamento(&Valores_Equipamento30,j30);

                            maximum_aux = maximo_mensal(&Valores_Equipamento30,j30); // armazena max diario em aux 
                            minimum_aux = minimo_mensal(&Valores_Equipamento30,j30); // armazena min diario em aux

                            if(maximum_aux > maximum)
                            {
                                maximum = maximum_aux; // novo valor de maximum caso if verdadeiro
                            }

                            if(minimum_aux < minimum)
                            {
                                minimum = minimum_aux; // novo valor de minimo caso if verdadeiro 
                            }
                            fclose(f30);

                        

                            memset(dia_string,'\0',tamanho_dia_string); // reseta string dia_string
                            memset(caminho_principal+tamanho_caminho_mes,'\0',tamanho_caminho_mes); // resetando dia no caminho principal



                    count_p++;
                    break;
                case 31:
                    
                            f31 = fopen(caminho_principal,"r");
                            printf("%s\n",caminho_principal);

                            if(f31 == NULL)
                            {
                                printf("ERRO31\n");
                            }


                            while((ch31=fgetc(f31)) != EOF)
                            {
                                
                                /*================================================*/
                                // regiao de caputura do lixo de arquivo, 2 linhas.

                                if((ch31 == 0x0A) && (count131 < 2)) 
                                {
                                count131++; 
                                } // end if

                                /*================================================*/

                                /*================================================*/
                                // regiao de caputura do Equipamento desejado
                                if((count131 == 2) && (validando_captura31 == 0)) // inicio da terceira linha e capturando linha do equipamento de nosso interesse
                                {

                                    if(ch31 == 0x0A)
                                    {   
                                        count231++;      
                                        w31 = 0;     
                                    } // end if 
                                    else 
                                    {
                                        Equipamento_guardando31[w31] = ch31; 
                                        w31++;
                                    }
                                

                                    if(strstr(Equipamento_guardando31,Equipamento_interesse))
                                    {
                                        count_equip31 = count231;
                                    //    printf("count_equip = %d\n", count_equip); 
                                        validando_captura31 = 1;
                                    } 
                                    
                                } // END IF (COUNT 1) == 2 && VALIDANDO CAPTURA == 0 
                                /*================================================*/   


                                /*================================================*/
                                // Capturando inicio da hora h 00:00:00
                                if(validando_captura31 == 1)
                                {

                                    if(ch31 == 0x0A)
                                    {   
                                        count231++;      
                                        w31 = 0; 
                                    } 
                                    else 
                                    {
                                        Hora_inicio_guardando31[w31] = ch31; 
                                        w31++;
                                    }

                                    if(strstr(Hora_inicio_guardando31,Hora_inicio_interesse))
                                    {
                                        count_h_inicial31 = count231;
                                        validando_captura31 = 2;
                                    } 
                                } // END IF VALIDANDO CAPTURA == 1
                                /*================================================*/


                                /*================================================*/
                                // Capturando todos valores do equipamento
                                if(validando_captura31 == 2)
                                {

                                    if((count_valores31 < count_equip31) && (ch31 == 0x0A))
                                    {
                                        count_valores31++;
                                        count231++;    
                                    } // end if
                                    else if((count_valores31 == count_equip31) && ch31!= 0x0A) 
                                    {
                                        Valores_Equipamento_guardando31[w31] = ch31; 
                                        w31++;
                                    } // end else if
                                    else if((count_valores31 == count_equip31) && (ch31 == 0x0A)) 
                                    {
                                        float aux31 = atof(Valores_Equipamento_guardando31);
                                        Valores_Equipamento31[j31] = aux31;
                                    //  printf("count_valores = %d | count2 = %d  | j = %d \n",count_valores,count2,j);

                                        j31++;
                                        count_valores31++; 
                                        count231++;
                                        w31=0;
                    
                                    } // end else if

                                    else if((count_valores31 > count_equip31) && (count_valores31 < count_h_inicial31) && (ch31 == 0x0A)) 
                                    {
                                        count_valores31++;
                                        count231++;
                                    } // end else if

                                    else if((count_valores31 == count_h_inicial31) && (ch31 = 0x0A))
                                    {
                                        count_valores31 = 1;
                                    }

                                } // end if(validando_captura == 2)


                                /*================================================*/

                            } // end while de EOF

                            valor_max_min_equipamento(&Valores_Equipamento31,j31);

                            maximum_aux = maximo_mensal(&Valores_Equipamento31,j31); // armazena max diario em aux 
                            minimum_aux = minimo_mensal(&Valores_Equipamento31,j31); // armazena min diario em aux

                            if(maximum_aux > maximum)
                            {
                                maximum = maximum_aux; // novo valor de maximum caso if verdadeiro
                            }

                            if(minimum_aux < minimum)
                            {
                                minimum = minimum_aux; // novo valor de minimo caso if verdadeiro 
                            }
                            fclose(f31);

                        

                            memset(dia_string,'\0',tamanho_dia_string); // reseta string dia_string
                            memset(caminho_principal+tamanho_caminho_mes,'\0',tamanho_caminho_mes); // resetando dia no caminho principal


                    count_p++;
                    break;

                } // end switch

  

                
            } // end for dias

            

            printf("\n\n\n Maximo mensal: %f\n",maximum);
            printf("Minimimo mensal: %f\n",minimum);



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

    printf("min = %f\n",min);
    printf("max = %f\n",max);

} // end funcao valor_minimo_equipamento


float maximo_mensal(float *vetor_equipamento_valores, int n_elementos_vetor)
{


    register int k;
    float max = vetor_equipamento_valores[1];

    // capturando valor max
    for(k=1; k < n_elementos_vetor; k++)
    {
        if(vetor_equipamento_valores[k] > max)
        {
            max = vetor_equipamento_valores[k];
        }
  
    } // end for

    return max;

} // end funcao maximo_mensal

float minimo_mensal(float * vet_equipamento_valores, int n_element_vetor)
{

    register int k;
    float min = vet_equipamento_valores[1];

    // capturando valor max
    for(k=1; k < n_element_vetor; k++)
    {
        if(vet_equipamento_valores[k] < min)
        {
            min = vet_equipamento_valores[k];
        }
  
    } // end for

    return min;

} // end funcao minimo_mensal