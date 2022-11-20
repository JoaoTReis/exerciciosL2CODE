#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){

    typedef struct data {
        int dia;
        int mes;
        int ano;
    }DATA;
    
    typedef struct contrato{
        int valor;
        int parcelas;
    }CONTRATO;

    typedef struct pessoas{
        int id;
        char nome[30];
        int contrato;
        char inadimplente;
        DATA dt_completo;
    }PESSOAS;

    PESSOAS dados[4];
    int soma1=0,soma2=0;
    for(int i=0;i<4;i++){
        printf("Digite o id do cliente: ");
        scanf("%d",&dados[i].id);
        printf("Digite o nome do cliente: ");
        scanf(" ");
        gets(dados[i].nome);
        printf("Digite o numero de contrato: ");
        scanf("%d",&dados[i].contrato);
        printf("O cliente esta inadimplente? (S ou N)");
        scanf("%s",&dados[i].inadimplente);   
        if(dados[i].inadimplente=='s'){
            soma1++;
        }
        else{
            soma2++;
        }
    }
    int auxInadimplentes[soma1],auxPagamentoCompleto[soma2],valortotal[soma2];
    for(int j=0;j<4;j++){
        struct contrato contrato_id;
            switch (dados[j].contrato)
            {
            case 1 :
                contrato_id.parcelas=100;
                contrato_id.valor=150;
                break;

            case 2 :
                contrato_id.parcelas=48;
                contrato_id.valor=300;
                break;
                
            case 3 :
                contrato_id.parcelas=24;
                contrato_id.valor=550;
                break;
            case 4 :
                contrato_id.parcelas=12;
                contrato_id.valor=1000;
                break;
            }
            struct data pagamentos;
            switch (dados[j].id)
            {
            case 4:
                pagamentos.ano=2021;
                pagamentos.mes=9;
                pagamentos.dia=1;
                break;
            case 3:
                pagamentos.ano=2021;
                pagamentos.mes=9;
                pagamentos.dia=5;
                break;
            case 1:
                pagamentos.ano=2021;
                pagamentos.mes=9;
                pagamentos.dia=19;
                break;
            case 2:
                pagamentos.ano=2021;
                pagamentos.mes=9;
                pagamentos.dia=25;
                break;
            default:
                break;
            }
        if(dados[j].inadimplente=='s'){
            auxInadimplentes[j]=dados[j].nome;
            pagamentos.dia;
        printf("(INADIMPLENTES) ");
        printf("Nome (%s)  Dia_Mes (%d) Valor_Parcela (%d)\n",auxInadimplentes[j],pagamentos.dia,contrato_id.valor);
        }
        
        else{
            auxPagamentoCompleto[j]=dados[j].nome;
            valortotal[j]=contrato_id.valor*contrato_id.parcelas;
            printf("(PAGAMENTO COMPLETO) ");
            printf("Nome (%s) Valor_Total (%d)\n",auxPagamentoCompleto[j],valortotal[j]);
        }
    }
    
}