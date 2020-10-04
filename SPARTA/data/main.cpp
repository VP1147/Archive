#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <termios.h> 
using namespace std;
void logoType()//declara função de logotipo
{

    cout<<" ▄▀▀▀▀▄  ▄▀▀▄▀▀▀▄  ▄▀▀█▄   ▄▀▀▄▀▀▀▄  ▄▀▀▀█▀▀▄  ▄▀▀█▄  \n";
    cout<<"█ █   ▐ █   █   █ ▐ ▄▀ ▀▄ █   █   █ █    █  ▐ ▐ ▄▀ ▀▄ \n";
    cout<<"   ▀▄   ▐  █▀▀▀▀    █▄▄▄█ ▐  █▀▀█▀  ▐   █       █▄▄▄█ \n";
    cout<<"▀▄   █     █       ▄▀   █  ▄▀    █     █       ▄▀   █ \n";
    cout<<" █▀▀▀    ▄▀       █   ▄▀  █     █    ▄▀       █   ▄▀  \n";
    cout<<" ▐      █         ▐   ▐   ▐     ▐   █         ▐   ▐   \n";
    cout<<"        ▐                           ▐                  \n";
    cout<<"▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀   █\n";
    cout<<"         █▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀\n";
}
char unknownOption()//declara função unknownOption()
{
    logoType();
          cout<<"Opção desconhecida\n";
          system("sleep 0.7");
}
char getch()//declara função getch()
{
    /*#include <unistd.h>   //_getch*/
    /*#include <termios.h>  //_getch*/
    char buf=0;
    struct termios old={0};
    fflush(stdout);
    if(tcgetattr(0, &old)<0)
        perror("tcsetattr()");
    old.c_lflag&=~ICANON;
    old.c_lflag&=~ECHO;
    old.c_cc[VMIN]=1;
    old.c_cc[VTIME]=0;
    if(tcsetattr(0, TCSANOW, &old)<0)
        perror("tcsetattr ICANON");
    if(read(0,&buf,1)<0)
        perror("read()");
    old.c_lflag|=ICANON;
    old.c_lflag|=ECHO;
    if(tcsetattr(0, TCSADRAIN, &old)<0)
        perror ("tcsetattr ~ICANON");
    printf("%c\n",buf);
    return buf;
 }
int main()
{
    init:
    int menu;
    logoType();
    cout<<"1-Iniciar\n";
    cout<<"2-Sobre\n";
    cout<<"3-Sair\n";
    menu = getch();
    system("clear");
    switch(menu)
    {
        default:
        {
            unknownOption();
            goto init;
        }
        break;
        case '2'://caso sobre
        {
            logoType();
            cout<<"Por VP1147 @2018\nEscrito em C++ e Shell Script\nOPEN SOURCE POWER\n\n";
            system("read -p \"Pressione enter para voltar\" saindo");
            goto init;
        }
        break;
        case '3'://caso sair
        {
            system("exit");
        }
        break;
        case '1'://caso jogar
        {
            string empirename;
            string playername;
            int difmenu;
            int difficulty;
            int maxmoneyvalue;
            string warempname = "void";
            int warempint = 0;
            int war_rand;
            int maxwar_rand;
            int war_rand_opt;
            int def_rand;
            int maxdef_rand;
            int victory_rand;
            int maxvictory_rand;
            int maxvictorymoney;
            int victorymoney;
            int maxpeace_value;
            int peace_value;
            int peaceopt;
            int attackopt;
            logoType();
            cout<<"Nome do player:";
            cin>>playername;
            logoType();
            cout<<"Certo, "<<playername<<"...\nDê um nome ao seu império:";
            cin>>empirename;
            difrefac:
            logoType();
            cout<<"Escolha um grau de dificuldade (1 a 3):";
            cin>>difmenu;
            srand((unsigned)time(NULL));
            switch(difmenu)//transforma o valor de difmenu em difficulty
            {
                default:
                {
                    unknownOption();
                    goto difrefac;
                }
                break;
                case 1:
                {
                    difficulty = 1;
                    maxmoneyvalue = 10000;
                    maxwar_rand = 3;
                    maxvictorymoney = 4000;
                    maxpeace_value = 1000;
                    maxvictory_rand = 0;
                }
                break;
                case 2:
                {
                    difficulty = 2;
                    maxmoneyvalue = 5000;
                    maxwar_rand = 2;
                    maxvictory_rand = 1;
                    maxvictorymoney = 2000;
                    maxpeace_value = 1000;
                }
                break;
                case 3:
                {
                    difficulty = 3;
                    maxmoneyvalue = 1000;
                    maxwar_rand = 1;
                    maxvictory_rand = 1;
                    maxvictorymoney = 1000;
                    maxpeace_value = 1000;
                }
                break;
            }
            system("clear");
            int money;
            money = rand() % maxmoneyvalue;
            cmdback:
            srand((unsigned)time(NULL));
            if(warempname != "void")//startcmd de guerra
            {
                war_rand = rand() % maxwar_rand;
                if(war_rand == 1)
                {
                    waroptrefact:
                    cout<<"\\\\[Aviso Importante]//\n";
                    cout<<"O(a) "<<warempname<<" está atacando "<<empirename<<".\n";
                    cout<<"O que deseja fazer?\n";
                    cout<<"1-Defender (- 20% de golds)\n";
                    war_rand_opt = getch();
                    switch(war_rand_opt)
                    {
                        default:
                        {
                            goto waroptrefact;
                        }
                        break;
                        case '1':
                        {
                            money = (money - (money/5));
                            srand((unsigned)time(NULL));
                            victory_rand = rand() % maxvictory_rand;
                            victorymoney = rand() % maxvictorymoney;
                            cout<<"\\\\[Resultado da batalha]//\n";
                            if(victory_rand == 0)
                            {
                                money = money + victorymoney;
                                cout<<"Sua defesa ("<<empirename<<") derrotou os invasores ";
                                cout<<"de(a)"<<warempname<<", sendo então vitorioso.\n";
                                cout<<"Isso rendeu "<<victorymoney<<" golds a sua nação.\n";
                            }
                            else
                            {
                                money = money - (money/4);
                                 cout<<"Sua defesa ("<<empirename<<") foi derrotada ";
                                 cout<<"pelos invasores.\n";
                                 cout<<"Você perdeu 25% de seus golds (-"<<(money/4)<<").";
                                 cout<<"É aconselhavel fazer um tratado de paz com ";
                                 cout<<warempname<<"\n";
                            }
                        }
                        break;
                        goto cmdback;
                    }
                }
            }
            string cmd;
            cout<<"<<";
            cin>>cmd;//dá entrada ao comando
            if(cmd == "help")
            {
             cout<<"[Help]\n";
             cout<<"economy --> Informações sobre economia\n";
             cout<<"war --> Declarar guerra a uma nação\n";
             cout<<"warstatus --> Ver status de guerra\n";
             cout<<"decpeace --> Declarar paz a uma nação.\n";
             goto cmdback;
            }
            if(cmd == "exit")//caso exit no cmd
            {
                goto init;
            }
            if(cmd == "economy")//caso economy no cmd
            {
                cout<<"[Economy]\n";
                cout<<money<<" Golds\n";
                goto cmdback;
            }
            if(cmd == "war")//caso war no cmd
            {
                cout<<"[War]\n";
                wardecoptrefact:
                cout<<"A qual nação deseja declarar guerra?\n";
                cout<<"1- Império Austro-Húngaro\n2-França\n3-Inglaterra\n4-Império Russo\n";
                cout<<"5-Império Alemão\n6-Cancelar\n";
                warempint = getch();
                switch(warempint)
                {
                    default:
                    {
                        cout<<"[Erro de sintaxe]\n";
                        goto waroptrefact;
                    }
                    break;
                    case '1'://caso austro-hungaro
                    {
                        warempname = "Império Austro-Húngaro";
                        cout<<"\\\\[Aviso Importante]//\n";
                        cout<<"Você declarou guerra a(o) "<<warempname<<".\n";
                        cout<<"Você pode ser atacado ou ataca-lo a qualquer momento.\n";
                    }
                    break;
                    case '2'://caso frança
                    {
                        warempname = "França";
                        cout<<"\\\\[Aviso Importante]//\n";
                        cout<<"Você declarou guerra a(o) "<<warempname<<".\n";
                        cout<<"Você pode ser atacado ou ataca-lo a qualquer momento.\n";
                    }
                    break;
                    case '3'://caso inglaterra
                    {
                        warempname = "Inglaterra";
                        cout<<"\\\\[Aviso Importante]//\n";
                        cout<<"Você declarou guerra a(o) "<<warempname<<".\n";
                        cout<<"Você pode ser atacado ou ataca-lo a qualquer momento.\n";
                    }
                    break;
                    case '4'://caso império alemão
                    {
                        warempname = "Império Alemão";
                        cout<<"\\\\[Aviso Importante]//\n";
                        cout<<"Você declarou guerra a(o) "<<warempname<<".\n";
                        cout<<"Você pode ser atacado ou ataca-lo a qualquer momento.\n";
                    }
                    break;
                    case '5'://caso império russo
                    {
                        warempname = "Império Russo";
                        cout<<"\\\\[Aviso Importante]//\n";
                        cout<<"Você declarou guerra a(o) "<<warempname<<".\n";
                        cout<<"Você pode ser atacado ou ataca-lo a qualquer momento.\n";
                    }
                    break;
                    case '6':
                    {
                        goto cmdback;
                    }
                }
                goto cmdback;
            }
            if(cmd == "warstatus")//caso warstatus no cmd
            {
                cout<<"[War status]\n";
                if(warempname == "void")
                {
                    cout<<"Você não está em guerra com nenhuma nação.\n";
                    cout<<"A paz reina, por enquanto...\n";
                }
                else
                {
                    cout<<"Você está em guerra com "<<warempname<<".\n";
                }
                goto cmdback;
            }
            if(cmd == "decpeace")//caso decpeace no cmd
            {
                cout<<"\\\\[Declare peace]//\n";
                if(warempname != "void")
                {
                    peace_value = rand() % maxpeace_value;
                    decpeaceoptrefact:
                    cout<<"Você está em guerra com "<<warempname<<".\n";
                    cout<<"Deseja declarar paz? (-"<<peace_value<<" golds)\n";
                    cout<<"1-Sim\n2-Cancelar\n";
                    peaceopt = getch();
                    switch(peaceopt)
                    {
                        default:
                        {
                            goto decpeaceoptrefact;
                        }
                        break;
                        case '1':
                        {
                            money = money - peace_value;
                            cout<<"O "<<warempname<<" aceitou sua proposta de paz.\n";
                            warempname = "void";
                        }
                        break;
                        case '2':
                        {
                            goto cmdback;
                        }
                        break;
                    }
                    goto cmdback;
                }
                else
                {
                    cout<<"Você não está em guerra com nenhuma nação.\n";
                }
                goto cmdback;
            }
            if(cmd == "attack")//caso attack no cmd
            {
                if(warempname != "void")
                {
                cout<<"[Attack]\n";
                cout<<"Você está em guerra com "<<warempname<<".\n";
                cout<<"Deseja atacar(-x% de golds)?\n";
                cout<<"1-Sim\n";
                cout<<"2-Cancelar\n";
                attackopt = getch();
                switch(attackopt)
                {
                    case '1':
                    {
                        srand((unsigned)time(NULL));
                        money = (money - (money/10));
                        victory_rand = rand() % maxvictory_rand;
                        victorymoney = rand() % maxvictorymoney;
                        cout<<"\\\\[Resultado do ataque]//\n";
                        if(victory_rand == 0)
                        {
                            cout<<"Houve uma vitória de "<<empirename<<" sobre o(a) ";
                            cout<<warempname<<"\n";
                            cout<<"Isso rendeu "<<victorymoney<<" golds a ";
                            cout<<empirename<<"\n";
                        }
                        else
                        {
                            cout<<empirename<<" foi derrotado pela defesa do(a) ";
                            cout<<warempname<<"\n";
                        }
                    }
                }
                }
                else
                {
                cout<<"Você ainda não declarou guerra a nenhuma nação\n";
                }
            }
            else//caso erro de sintaxe
            {
                cout<<"[Erro de sintaxe]\n";
                goto cmdback;
            }
        }
        break;
        
    }
}
