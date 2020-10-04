/*
Por Vinnicius Pavão @ 2018
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
  //Inicio
    menustart:
    system("clear");
    int menu;
    cout<<"     --##--O fotógrafo--##--\n";
    cout<<"======================================\n"; 
    cout<<" /\\---===||(1)-Jogar    ||===---/\\  \n";
    cout<<" \\/---===||(2)-Créditos ||===---\\/ \n";
    cout<<" /\\---===||(3)-FAQ      ||===---/\\ \n";
    cout<<" \\/---===||(4)-Sobre    ||===---\\/  \n";
    cout<<" /\\---===||(5)-Sair     ||===---/\\  \n";
    cout<<"======================================\n";
    cin>>menu;
  switch(menu)
  {
      case 5:
      {
          system("clear");
          system("exit");
    }
    break;
    case 4:
    {
      system("clear");
      cout<<"||============================================================||\n";
      cout<<"|| Por VP1147 @2018. Sob nenhuma licença.                ||\n";
      cout<<"||============================================================||\n";
      cout<<"\n\n||=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-||\n";
      cout<<"\\/ Escrito em C++\n";
      cout<<"/\\ \n";
      cout<<"\\/   /  /  / \n";
      cout<<"/\\   \\  \\  \\\n";
      cout<<"\\/ \n";
      cout<<"/\\  |       | \\ \n";
      cout<<"\\/  \\       / / \n";
      cout<<"/\\   \\     /\n";
      cout<<"\\/__________________\n";
      cout<<"/\\ Coffee and code...\n";
      cout<<"||=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-||\n";
      system("read -p \"Pressione enter para sair\" quit");
      goto menustart;
    }
    break;
    case 3:
    {
      system("clear");
          cout<<"--##--Um fotógrafo imortal--##--\n";
          cout<<"===============================================\n";
          cout<<"|\\/| 1.Como jogar?                         |\\/|\n";
          cout<<"|/\\| O jogo funciona com base em comandos, |/\\|\n";
          cout<<"|\\/| digite help ao jogar para uma lista.  |\\/|\n";
          cout<<"===============================================\n";
          system("read -p \"Pressione enter para sair\" quit");
          goto menustart;
    }
    break;
    case 1://caso Jogar
  {
    gamestart:
    system("clear");
    string cmd;//cmds do jogo
    int coinhelpcount = 0;
    int boolcoinhelp;
    int coinhelpvalue;
    int coins = 0;//Declara var de dinheiro
    int cam;
    int coinhelprente;
    string buyedcam;
    int randpvalue;
    srand((unsigned)time(NULL));
    coins = rand() % 1000;
    cout<<"<Photograph Game> Digite \"help\" para uma lista de comandos\n";
    gamestart2:
    if(coinhelpcount >= 6)
    {
        if(coins < coinhelpvalue)
        {
            cout<<"||/\\/\\/\\/\\FIM DE JOGO/\\/\\/\\/\\||\n";
            cout<<"SEU PRAZO DE DEVOLUÇÃO DE EMPRESTIMO ENCERROU\n";
            cout<<"E VOCÊ NÃO TEM DINHEIRO PARA O PAGAR. FIM DE JOGO.\n";
            cout<<"||/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/||\n";
            system("read -p \"Pressione enter para voltar ao menu\" quit");
        }
        else
        {
            
            coinhelprente = coinhelpvalue + (coinhelpvalue / 10);
            coins = coins - coinhelprente;
            cout<<"-----##|IMPORTANTE|##-----\n";
            cout<<"SEU PRAZO PARA PAGAMENTO DO EMPRÉSTIMO EXPIROU\n";
            cout<<"E O VALOR DO MESMO COM 10% DE JUROS FOI DESCONTADO\n";
            cout<<"DE SEU DINHEIRO. VOCÊ POSSUI AGORA "<<coins<<" PHs.\n";
            cout<<"-----##|----------|##-----\n";
            
            coinhelpcount = 0;
            coinhelprente = 0;
            coinhelpvalue = 0;
        }
    }
    if (boolcoinhelp == 1)
    {
        coinhelpcount++;
    }
    cout<<">>";
    cin>>cmd;//inserir comandos (não suporta espaços)
    int boolcam = 0;
    int photopype;
    string cam1 = "CBF2000";
    string cam2 = "ITB1920";
    string cam3 = "Anky GCGP HD";
    string cam4 = "Demark Blueberry HD";
    string cam5 = "Demark Blueberry FHD";
    string cam6 = "Anky Parsec UHD";
    if (cmd == "help")//caso cmd de help
    {
      cout<<"-----------------------------------------------\n";
      cout<<"# coins - Mostra a quantidade de dinheiro (PHs) que você tem\n";
      cout<<"# cams - Mostra as câmeras que você tem.\n";
      cout<<"# buycam - Compra uma câmera (gastando PHs)\n";
      cout<<"# salecam - Vende sua câmera (~80/100 do valor de compra)\n";
      cout<<"# takephoto - Tirar uma foto (Ganha um valor que varia de 0 até o limite ";
      cout<<"determinado pela foto escolhida mais um bonus pela câmera utilizada\n";
      cout<<"# coinhelp - Pedir empréstimo (Até 7 jogadas para devolver)\n";
      cout<<"(O máximo é seu dinheiro disponível)\n";
      cout<<"# paycoinhelp - Pagar seu empréstimo\n";
      cout<<"# newgame - Reiniciar jogo\n";
      cout<<"# exit - Voltar ao menu\n";
      cout<<"-----------------------------------------------\n";
      goto gamestart2;
    }
    if (cmd == "coinhelp")//caso cmd de coinhelp
    {
        if (boolcoinhelp == 1)
        {
            cout<<"---------------------------------------------\n";
            cout<<"Você ainda não pagou o empréstimo atual\n";
            cout<<"---------------------------------------------\n";
            goto gamestart2;
        }
        cout<<"Valor desejado (Valor máximo é seu dinheiro disponível):";
        cin>>coinhelpvalue;
        if(coinhelpvalue > coins)
        {
            cout<<"-----------------------------\n";
            cout<<"Valor muito alto\n";
            cout<<"-----------------------------\n";
            goto gamestart2;
        }
        coins = coins + coinhelpvalue;
        boolcoinhelp = 1;
        cout<<"-----##|IMPORTANTE|##-----\n";
        cout<<"Você pediu "<<coinhelpvalue<<" PHs de empréstimo\n";
        cout<<"e agora possui "<<coins<<" PHs e 6 jogadas para pagar\n";
        cout<<"-----##|----------|##-----\n";
        goto gamestart2;
    }
    if (cmd == "paycoinhelp")//caso cmd de paycoinhelp
    {
        if (boolcoinhelp == 0)
        {
            cout<<"-----------------------------\n";
            cout<<"Você ainda não fez um empréstimo\n";
            cout<<"-----------------------------\n";
            goto gamestart2;
        }
        if(coins < coinhelpvalue)
        {
            cout<<"-----------------------------\n";
            cout<<"Você não tem dinheiro suficiente\n";
            cout<<"-----------------------------\n";
        }
        coins = coins - coinhelpvalue;
        cout<<"-----##|IMPORTANTE|##-----\n";
        cout<<"Você devolveu "<<coinhelpvalue<<" PHs e agora possui\n";
        cout<<coins<<"PHs\n";   
        boolcoinhelp = 0;
        coinhelpcount = 0;
        coinhelpvalue = 0;
        goto gamestart2;
    }
    if (cmd == "coins")//caso cmd de coins
    {
      cout<<"-----------------------------\n";
      cout<<"Você tem "<<coins<<" PHs\n";
      cout<<"-----------------------------\n";
      goto gamestart2;
    }
    if (cmd == "newgame")//caso cmd de newgame
    {
      goto gamestart;
    }
    if (cmd == "exit")//caso cmd de exit
    {
      goto menustart;
    }
    if(cmd == "cams")//caso cmd de cams
    {
      if (buyedcam != "")
      {
                  cout<<"-----------------------\n";
                  cout<<"Você tem uma "<<buyedcam<<"\n";
                  cout<<"-----------------------\n";
      }
      if (buyedcam == "")
      {
        cout<<"-----------------------\n";
        cout<<"Você não possui uma câmera\n";
        cout<<"-----------------------\n";
      }
      goto gamestart2;
        }
    if (cmd == "buycam")//caso cmd de buycam
    {
      cout<<"--------|| Lista de câmeras ||--------\n";
      cout<<"1- CBF2000 (10 PHs)(Qualidade 7)(5 PHs de bônus)\n";
      cout<<"2- ITB1920 (300 PHs)(Qualidade 26)(30 PHs de bônus)\n";
      cout<<"3- Anky GCGP HD (900 PHs)(Qualidade 47)(90 PHs de bônus)\n";
      cout<<"4- Demark Blueberry HD (4500 PHs)(Qualidade 71)(450 PHs de bônus)\n";
      cout<<"5- Demark Blueberry FHD (6000 PHs)(Qualidade 87)(600 PHs de bônus)\n";
      cout<<"6- Anky Parsec UHD (9500 PHs)(Qualidade 98)(950 PHs de bônus)\n";
      cout<<"7- Sair\n";
      cout<<"-------------------------------------\n";
      cin>>cam;
      switch(cam)//opções de comprar cam
      {
          case 7:
          {
              goto gamestart2;
        }
        case 1:
        {
          if(coins >= 10)
          {
            coins = coins - 10;
            buyedcam = "CBF2000 (10 PHs)(Qualidade 7)";
            boolcam = 1;
          }
          else
          {
            cout<<"----------------\n";
            cout<<"Você não tem dinheiro suficiente para a ação\n";
            cout<<"----------------\n";
          }
        goto gamestart2;
        }
        break;
        case 2:
        {
          if(coins >= 300)
          {
            coins = coins - 300;
            buyedcam = "ITB1920 (300 PHs)(Qualidade 26)";
            boolcam = 1;
          }
          else
          {
            cout<<"----------------\n";
            cout<<"Você não tem dinheiro suficiente para a ação\n";
            cout<<"----------------\n";
          }
          goto gamestart2;
        }
        case 3:
        {
          if(coins >= 900)
          {
            coins = coins - 900;
            buyedcam = "Anky GCGP HD (900 PHs)(Qualidade 47)";
            boolcam = 1;
          }
          else
          {
            cout<<"----------------\n";
            cout<<"Você não tem dinheiro suficiente para a ação\n";
            cout<<"----------------\n";
          }
          goto gamestart2;
        }
        break;
        case 4:
        {
          if(coins >= 4500)
          {
            coins = coins - 4500;
            buyedcam = "Demark Blueberry HD (4500 PHs)(Qualidade 71)";
            boolcam = 1;
          }
          else
          {
            cout<<"----------------\n";
            cout<<"Você não tem dinheiro suficiente para a ação\n";
            cout<<"----------------\n";
          }
          goto gamestart2;
        }
        break;
        case 5:
        {
          if(coins >= 6000)
          {
            coins = coins - 6000;
            buyedcam = "Demark Blueberry FHD (6000 PHs)(Qualidade 87)";
            boolcam = 1;
          }
          else
          {
            cout<<"----------------\n";
            cout<<"Você não tem dinheiro suficiente para a ação\n";
            cout<<"----------------\n";
          }
          goto gamestart2;
        }
        case 6:
        {
          if(coins >= 9500)
          {
            coins = coins - 9500;
            buyedcam = "Anky Parsec UHD (9500 PHs)(Qalidade 98)";
            boolcam = 1;
          }
          else
          {
            cout<<"----------------\n";
            cout<<"Você não tem dinheiro suficiente para a ação\n";
            cout<<"----------------\n";
          }
          goto gamestart2;
        }
      }
    }
    if (cmd == "takephoto")//caso cmd de takephoto
    {
      if (buyedcam != "")
      {
        goto tkinit;
      }
      if (buyedcam == "")
      {
        cout<<"Você não possui uma câmera\n";
        goto gamestart2;
      }
      tkinit:
      cout<<"---------|| Tipos de foto ||-----------\n";
      cout<<"1- Paisagem normal (15 PHs)(Rende até 35 PHs)\n";
      cout<<"2- Pessoas (55 PHs)(Rende até 130 PHs)\n";
      cout<<"3- Animais (100 PHs)(Rende até 295 PHs)\n";
      cout<<"4- Paisagem exótica (750 PHs)(Rende até 1200 PHs)\n";
      cout<<"5- Animais exóticos (1250 PHs)(Rende até 1950 PHs)\n";
      cout<<"6- Celebridades (2350 PHs)(Rende até 6115 PHs)\n";
      cout<<"7- Satélite (8920 PHs)(Rende até 15700 PHs)\n";
      cin>>photopype;
      switch(photopype)//tipos de foto
      {
        case 1://caso Paisagem
        {
          if (coins >= 15)
          {
            srand((unsigned)time(NULL));
                      randpvalue = rand() % 35;
                      coins = coins + randpvalue;
                      coins = coins - 15;
                      cout<<"Sua foto rendeu "<<randpvalue<<" PHs\n";
                      goto bonustk;
          }
         else
         {
           cout<<"Você não tem dinheiro suficiente\n";
           goto gamestart2;
         }
        }
        break;
        case 2://caso Pessoas
        {
          if (coins >= 55)
          {
            srand((unsigned)time(NULL));
            randpvalue = rand() % 130;
            coins = coins + randpvalue;
            coins = coins - 55;
            cout<<"Sua foto rendeu "<<randpvalue<<" PHs\n";
            goto bonustk;
          }
          else
          {
            cout<<"Você não tem dinheiro suficiente\n";
            goto gamestart2;
          }
        }
        break;
        case 3://caso Animais
        {
          if (coins >= 100)
          {
            srand((unsigned)time(NULL));
                      randpvalue = rand() % 295;
                      coins = coins + randpvalue;
                      coins = coins - 100;
                      cout<<"Sua foto rendeu "<<randpvalue<<" PHs\n";
                      goto bonustk;
          }
          else
          {
            cout<<"Você não tem dinheiro suficiente\n";
            goto gamestart2;
          }
        }
        break;
        case 4://caso Paisagem exótica
        {
          if (coins = 750)
          {
            srand((unsigned)time(NULL));
                      randpvalue = rand() % 1200;
                      coins = coins + randpvalue;
                      coins = coins - 750;
                      cout<<"Sua foto rendeu "<<randpvalue<<" PHs\n";
                      goto bonustk;
          }
          else
          {
            cout<<"Você não tem dinheiro suficiente\n";
            goto gamestart2;
          }
        }
        break;
        case 5://caso animais exóticos
        {
          if (coins >= 1250)
          {
            srand((unsigned)time(NULL));
                      randpvalue = rand() % 1950;
                      coins = coins + randpvalue;
                      coins = coins - 1250;
                      cout<<"Sua foto rendeu "<<randpvalue<<" PHs\n";
                      goto bonustk;
          }
         else
         {
           cout<<"Você não tem dinheiro suficiente\n";
           goto gamestart2;
         }
        }
        break;
        case 6://caso Celebridades
        {
          if (coins >= 2350)
          {
            srand((unsigned)time(NULL));
                      randpvalue = rand() % 6115;
                      coins = coins + randpvalue;
                      coins = coins - 2350;
                      cout<<"Sua foto rendeu "<<randpvalue<<" PHs\n";
                      goto bonustk;
          }
         else
         {
           cout<<"Você não tem dinheiro suficiente\n";
           goto gamestart2;
         }
        }
        break;
        case 7://caso Satélite
        {
          if (coins >= 8920)
          {
            srand((unsigned)time(NULL));
                      randpvalue = rand() % 15700;
                      coins = coins + randpvalue;
                      coins = coins - 8920;
                      cout<<"Sua foto rendeu "<<randpvalue<<" PHs\n";
                      goto bonustk;
          }
         else
         {
           cout<<"Você não tem dinheiro suficiente\n";
           goto gamestart2;
         }
        }
        break;
        default:
        {
          cout<<"Opção desconhecida\n";
          goto gamestart2;
        }
        break;
      }
      bonustk:
      switch(cam)//bônus
      {
        case 1:
        {
          coins = coins + 5;
          cout<<"Mais 5 de bônus\n";
          goto gamestart2;
        }
        break;
        case 2:
        {
          coins = coins  + 30;
          cout<<"Mais 30 de bônus\n";
          goto gamestart2;
        }
        break;
        case 3:
        {
          coins = coins  + 90;
          cout<<"Mais 90 de bônus\n";
          goto gamestart2;
        }
        break;
        case 4:
        {
          coins = coins  + 450;
          cout<<"Mais 450 de bônus\n";
          goto gamestart2;
        }
        break;
        case 5:
        {
          coins = coins  + 600;
          cout<<"Mais 600 de bônus\n";
          goto gamestart2;
        }
        case 6:
        {
         coins = coins  + 950;
         cout<<"Mais 950 de bônus\n";
         goto gamestart2;
        }
      }
    }
    if (cmd == "salecam")
    {
        if (buyedcam == "")
        {
            cout<<"----------------\n";
            cout<<"Você não possui uma câmera\n";
            cout<<"----------------\n";
            goto gamestart2;
        }
      switch(cam)
      {
        case 1:
        {
          coins = coins + 7;
          buyedcam = "";
          cout<<"CBF2000 vendida por 7 PHs\n";
          goto gamestart2;
        }
        break;
        case 2:
        {
          coins = coins + 250;
          buyedcam = "";
          cout<<"ITB1920 vendida por 250 PHs\n";
          goto gamestart2;
        }
        break;
        case 3:
        {
          coins = coins + 840;
          buyedcam = "";
          cout<<"Anky GCGP HD vendida por 840 PHs\n";
          goto gamestart2;
        }
        break;
        case 4:
        {
          coins = coins + 4300;
         buyedcam = "";
          cout<<"Demark Blueberry HD vendida por 4300 PHs\n";
          goto gamestart2;
        }
        break;
        case 5:
        {
          coins == coins + 5750;
          buyedcam = "";
          cout<<"Demark Blueberry FHD vendida por 5750 PHs\n";
          goto gamestart2;
        }
        break;
        case 6:
        {
          coins = coins + 9280;
          buyedcam = "";
          cout<<"Anky Parsec UHD vendida por 9280 PHs\n";
          goto gamestart2;
        }
        break;
        case 0:
        {
          cout<<"Você não possui uma câmera\n";
          goto gamestart2;
        }
      }
    }
    else//caso não teha relação com os cmds
    {
      cout<<"----------------\n";
      cout<<"[Erro de sintaxe]\n";
      cout<<"----------------\n";
      goto gamestart2;
    }
    //tomake
  }//fim de caso jogar
    break;
    case 2://caso Créditos
    {
      system("clear");
          cout<<"--##--O fotógrafo--##--\n";
          cout<<"======================================\n";
          cout<<"\\/\\/\\ Por VP1147 @2018-?\\/\\/\\/ \n";
          cout<<"======================================\n";
          system("read -p \"Pressione enter para sair\" saindo");
          goto menustart;
    }
    break;
  }
}
