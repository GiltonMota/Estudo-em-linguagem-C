// ai ai papai, isso vai dar um trabalheira mas vamos lah.

#include <stdio.h>
#include <string.h>    //estringer chada pra danar...
#include <stdlib.h>  


//###########################################paletinha-de cor do the lest of us######################################
#define RESET        "\033[0m"
#define VERDE        "\033[38;2;110;139;61m"
#define FERRUGEM     "\033[38;2;155;80;60m"
#define CINZA        "\033[38;2;90;90;90m"
#define SEPIA        "\033[38;2;117;84;57m"
#define BRANCO       "\033[97m"
#define VERMELHO     "\033[38;2;255;0;0m"
#define CIANO_ESCURO "\033[38;2;24;127;131m"


//############################################Emojis-tematicos#########################################################3
#define EMOJI_BOTTLE   "??"
#define EMOJI_FIRE     "??"


//variais de linkdede
int codigos;


//##############################################INFORMACOES_PRINCIPAIS###############################################################################
struct menuLanches{ //estrutura para amarzenar dados dos lanches...
    int codigo;
    float preco;
    char nomeProduto[50];
    char adicionais[100];
};

struct menuBebidas{ //estrutura para amarzenar dados dos bebidas...
    int codigo;
    float preco;
    char nomeProduto[50];
};
//###########################################estrutura para pagamento e tratamento de erro#########################################################
struct pagamentos{
    int codigo;
    char metodo[20];
};
//##############################################################################################################################################


// Define a cor branco acinzentado (#212228 em ANSI aproximação)
#include <stdio.h>

#define MARROM "\033[38;2;133;102;75m"
#define RESET  "\033[0m"

void titulo() {
    printf(MARROM);
    printf("¦¦¦¦¦¦¦¦+¦¦+  ¦¦+¦¦¦¦¦¦¦+        ¦¦+      ¦¦¦¦¦+ ¦¦¦¦¦¦¦+¦¦¦¦¦¦¦¦+     ¦¦¦¦¦¦+  ¦¦¦¦¦¦    ¦¦+   ¦¦+ ¦¦¦¦¦¦¦+\n");
    printf("+--¦¦+--+¦¦¦  ¦¦¦¦¦+----+        ¦¦¦     ¦¦+--¦¦+¦¦+----++--¦¦+--+    ¦¦+---¦¦+ ¦¦+--+    ¦¦¦   ¦¦¦ ¦¦+----+\n");
    printf("   ¦¦¦   ¦¦¦¦¦¦¦¦¦¦¦¦¦+          ¦¦¦     ¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦+   ¦¦¦       ¦¦¦   ¦¦¦ ¦¦¦¦¦¦    ¦¦¦   ¦¦¦ ¦¦¦¦¦¦¦+\n");
    printf("   ¦¦¦   ¦¦+--¦¦¦¦¦+--+          ¦¦¦     ¦¦+--¦¦¦+----¦¦¦   ¦¦¦       ¦¦¦   ¦¦¦ ¦¦+--+    ¦¦¦   ¦¦¦ +----¦¦¦\n");
    printf("   ¦¦¦   ¦¦¦  ¦¦¦¦¦¦¦¦¦¦+        ¦¦¦¦¦¦¦+¦¦¦  ¦¦¦¦¦¦¦¦¦¦¦   ¦¦¦       +¦¦¦¦¦¦++ ¦¦¦       +¦¦¦¦¦¦++ ¦¦¦¦¦¦¦¦\n");
    printf("   +-+   +-+  +-++------+        +------++-+  +-++------+   +-+        +-----+  +-+        +-----+  +------+\n");
    printf(RESET "\n");

    printf(MARROM);
    printf("   ¦¦+      ¦¦¦¦¦+ ¦¦¦¦+   ¦¦ ¦¦¦¦¦¦¦¦ ¦¦+  ¦¦+¦¦¦¦¦¦¦+¦¦¦¦¦¦¦+\n");
    printf("   ¦¦¦     ¦¦+--¦¦+¦¦¦+¦+  ¦¦ ¦¦+----+ ¦¦¦  ¦¦¦¦¦+----+¦¦+----+\n");
    printf("   ¦¦¦     ¦¦¦¦¦¦¦¦¦¦¦ +¦+ ¦¦ ¦¦¦      ¦¦¦¦¦¦¦¦¦¦¦¦¦+  ¦¦¦¦¦¦¦+\n");
    printf("   ¦¦¦     ¦¦+--¦¦¦¦¦¦  +¦+¦¦ ¦¦+----+ ¦¦+--¦¦¦¦¦+--+  +----¦¦¦\n");
    printf("   ¦¦¦¦¦¦¦+¦¦¦  ¦¦¦¦¦¦   +¦¦¦ ¦¦¦¦¦¦¦¦ ¦¦¦  ¦¦¦¦¦¦¦¦¦¦+¦¦¦¦¦¦¦¦\n");
    printf("   +------++-+  +-++-+    +-+ +------+ +-+  +-++------++------+\n");
    printf(RESET "\n");

}

void menuLanches() {

    printf(SEPIA);
    printf("+----------------------------------------------------------------------------+\n");
    printf("¦" BRANCO "                THE LAST OF US MENU" SEPIA "                                         ¦\n");
    printf("¦" CINZA "           RACIONAMENTO PÓS-APOCALÍPTICO 2025" SEPIA "                               ¦\n");
    printf("¦----------------------------------------------------------------------------¦\n");

    printf("¦ %-70s             ¦\n", "LANCHES INFECTADOS ?????");
    printf("¦----------------------------------------------------------------------------¦\n");

    printf("¦ Código: 1001 ¦ %-50s ¦ R$ %5.2f ¦\n", EMOJI_FIRE"XCordyceps"          ,  28.90);
    printf("¦ Código: 1002 ¦ %-50s ¦ R$ %5.2f ¦\n", EMOJI_FIRE"XeggInfectado"       ,  30.90);
    printf("¦ Código: 1003 ¦ %-50s ¦ R$ %5.2f ¦\n", EMOJI_FIRE"EstaladorDeMolho"    ,  32.90);
    printf("¦ Código: 1004 ¦ %-50s ¦ R$ %5.2f ¦\n", EMOJI_FIRE"PerseguidoresDeBacon",  32.90);
    printf("¦ Código: 1005 ¦ %-50s ¦ R$ %5.2f ¦\n", EMOJI_FIRE"BaiacuCremoso"       ,  33.90);
    printf("¦ Código: 1006 ¦ %-50s ¦ R$ %5.2f ¦\n", EMOJI_FIRE"CorredorDeQueijo"    ,  34.90);
    printf("¦ Código: 1007 ¦ %-50s ¦ R$ %5.2f ¦\n", EMOJI_FIRE"ClickerCrocante"     ,  35.90);
    printf("¦ Código: 1008 ¦ %-50s ¦ R$ %5.2f ¦\n", EMOJI_FIRE"XRataoSupremo"       ,  89.90);
    printf("+----------------------------------------------------------------------------+\n");
    printf(VERMELHO"                    Digite '0' para Seguir Para Bebidas!\n"RESET                     );
    printf(BRANCO "\n                                    Ou                    \n                       ");
    printf(BRANCO "\n                     Digite o " VERMELHO"Código" RESET" do Item Desejado: "    RESET);
        //scanf("%d", &codigos);
    printf("\n");
}

void menuBebidas() {

    printf("\n\n");
    printf(CIANO_ESCURO);
    printf("+----------------------------------------------------------------------------+\n");
    printf("¦ %-70s         ¦\n", "BEBIDAS RACIONADAS ????");
    printf("¦----------------------------------------------------------------------------¦\n");

    printf("¦ Código: 1011 ¦ %-50s ¦ R$ %5.2f ¦\n",EMOJI_BOTTLE "The last shot"     ,   3.50);
    printf("¦ Código: 1012 ¦ %-50s ¦ R$ %5.2f ¦\n",EMOJI_BOTTLE "Firefly glow"      ,   9.00);
    printf("¦ Código: 1013 ¦ %-50s ¦ R$ %5.2f ¦\n",EMOJI_BOTTLE "CordyCola"         ,  12.00);
    printf("¦ Código: 1014 ¦ %-50s ¦ R$ %5.2f ¦\n",EMOJI_BOTTLE "Seattle Juice"     ,  15.50);

    printf("+----------------------------------------------------------------------------+\n");
    printf(VERMELHO"                   Digite '0' Para Seguir Para Pagamentos!\n"RESET);
    printf(BRANCO "\n                                    Ou                    \n     ");
    printf(BRANCO "\n                      Digite o " VERMELHO"Código" RESET" do Item Desejado: "    RESET);
    printf("\n");
}
//##################################################################################################################

int main() {

//utiliza um vetor vinculado ao struct, para armazenar a informacoes de escolha
titulo();
//##########################################Armazenamentos de informacoes########################################### 
    struct menuLanches lanches[8] = {
        {1001,28.90, "XCordyceps",""},
        {1002,30.90,"XeggInfectado",""},
        {1003,32.90,"EstaladorDeMolho", ""},
        {1004,32.90,"PerseguidoresDeBacon",""},
        {1005,33.90,"BaiacuCremoso",""},
        {1006,34.90,"CorredorDeQueijo",""},
        {1007,35.90,"ClickerCrocante",""},
        {1008,89.90,"XRataoSupremo",""}
    };
    
    struct menuBebidas bebidas[4] = {
        {1011,3.50,"The last shot"},
        {1012,9.00,"Firefly glow"},
        {1013,12.00,"CordyCola"},
        {1014,15.50,"Seattle Juice"}
    };
    struct pagamentos pagamento[4] = {
        {1,"Pix"},
        {2,"Cartao de Debito"},
        {3, "Cartao de Credito"},
        {4,"Dinheiro"}
    };

    float total = 0.0, valorPago = 0.0, troco;
    int codigo, quantidade, codigoPagamento;
    int etapa=1; // o controle de laco de repeticao, um dos mais importantes!
    int codigoValido=0; //outro controle!
    float restante;
    char adicionaiss[100];

//#####################PRIMEIRA-PARTE#####################################################
while(etapa==1){
    menuLanches();
    printf("====================================================> ");
    scanf("%d", &codigo);
    

    if (codigo== -1) {
        printf("Codigo Inserido Apagado!\n");
        continue;
    }

    if (codigo==0) {
        etapa=2;//irah para a proxima etapa.
        break;
    }

    codigoValido=0;
    //um laco de reperticao para pecorrer toda a lista, e verificar o que foi ou nao foi solicitado pelo cliente.
    for(int i=0; i<8;i++){
       if (lanches[i].codigo == codigo){
           codigoValido=1;
           

           do{
            printf("Digite a quantidade de %s (-1 Para Cancelar): ", lanches[i].nomeProduto);            
            scanf("%d", &quantidade);
            

           if (quantidade == -1) goto voltar_lanches;
           if (quantidade < 1) printf("Quantidade Invalida!\n");
           } while(quantidade<1);

            printf("Deseja adicionar observações/adicionais?\n");
            printf("Digite ou deixe em branco e pressione ENTER: ");
            fgets(adicionaiss, sizeof(adicionaiss),stdin);
                adicionaiss[strcspn(adicionaiss, "\n")] = '\0'; // remove '\n'
                while ((getchar()) != '\n');  // limpa o buffer


                if (strlen(adicionaiss) > 0)
                    strcpy(lanches[i].adicionais, adicionaiss);

                total += lanches[i].preco * quantidade;

                printf("Adicionado %dx %s (R$ %.2f)", quantidade, lanches[i].nomeProduto, lanches[i].preco * quantidade);
                if (strlen(lanches[i].adicionais) > 0)
                    printf(" [Adicionais: %s]", lanches[i].adicionais);
                
                printf("\n");
                break;
            }
        }


        if (!codigoValido)
            printf("Código inválido!\n");
            
        voltar_lanches:;
    }
    printf("\n");
     
    while (etapa == 2){
    menuBebidas();
    printf("====================================================> ");
        scanf("%d", &codigo);
        
        if(codigo== -1) {
        etapa = 1;
        continue;
        }
        if (codigo==0) {
        etapa=3;//irah para a proxima etapa.
        break;
        }
        codigoValido=0;
        for (int i = 0; i < 4; i++) {
            if (bebidas[i].codigo == codigo) {
                codigoValido = 1;

                do {
                    printf("Digite a quantidade de %s (-1 Para Cancelar): ", bebidas[i].nomeProduto);
                    scanf("%d", &quantidade);
                    if (quantidade == -1) goto voltar_bebida;
                    if (quantidade < 1) printf("Quantidade inválida!\n");
                } while (quantidade < 1);

                total += bebidas[i].preco * quantidade;
                printf("Adicionado %dx %s (R$ %.2f)\n", quantidade, bebidas[i].nomeProduto, bebidas[i].preco * quantidade);
                break;
            }
        }
        if (!codigoValido)
            printf("Código inválido!\n");

        voltar_bebida:;
    
    
    
    }
    //#################################################################FORMA-DE-PAGAMENTO################################################################
    while (etapa == 3) {
        printf("\n========= FORMAS DE PAGAMENTO =========\n");
        for (int i = 0; i < 4; i++) {
            printf("%d - %s\n", pagamento[i].codigo, pagamento[i].metodo);
        }

        printf("Escolha a forma de pagamento (código) (-1 para voltar): ");
        scanf("%d", &codigoPagamento);

        if (codigoPagamento == -1) {
            etapa = 2;
            continue;
        }

        codigoValido = 0;
        for (int i = 0; i < 4; i++) {
            if (pagamento[i].codigo == codigoPagamento) {
                printf("Forma de pagamento selecionada: %s\n", pagamento[i].metodo);
                codigoValido = 1;
                etapa = 4;
                break;
            }
        }

    if (!codigoValido)
            printf("Código inválido!\n");
    }  

    restante = total;
    printf("\nTOTAL A PAGAR: R$ %.2f\n", total);
    while (valorPago < total) {
        float pagamentoAtual;
        printf("Digite o valor pago (R$): ");
        scanf("%f", &pagamentoAtual);

        if (pagamentoAtual <= 0) {
            printf("Valor inválido!\n");
            continue;
        }

        valorPago += pagamentoAtual;
        restante = total - valorPago;

        if (restante > 0)
            printf("Faltam R$ %.2f\n", restante);
    }

    // TROCO
    troco = valorPago - total;
    if (troco > 0) {
        printf("Troco a ser devolvido: R$ %.2f\n", troco);
    }

    // FIM
    printf("\n>>> Obrigado pela preferência! Volte sempre. <<<\n");
    printf(">>> Pedido Entregue! <<<\n");

    system("mpv \"/home/vndede/Downloads/Future Days.mp3\" &");
    return 0;    
}
