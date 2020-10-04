#include <iostream>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <termios.h> 
using namespace std;
char memarakLogo()//declara a função memarakLogo()
{
    cout<<"███╗   ███╗███████╗███╗   ███╗ █████╗ ██████╗  █████╗ ██╗  ██╗    ██╗██╗██╗\n";
    cout<<"████╗ ████║██╔════╝████╗ ████║██╔══██╗██╔══██╗██╔══██╗██║ ██╔╝    ██║██║██║\n";
    cout<<"██╔████╔██║█████╗  ██╔████╔██║███████║██████╔╝███████║█████╔╝     ██║██║██║\n";
    cout<<"██║╚██╔╝██║██╔══╝  ██║╚██╔╝██║██╔══██║██╔══██╗██╔══██║██╔═██╗     ██║██║██║\n";
    cout<<"██║ ╚═╝ ██║███████╗██║ ╚═╝ ██║██║  ██║██║  ██║██║  ██║██║  ██╗    ██║██║██║\n";
    cout<<"╚═╝     ╚═╝╚══════╝╚═╝     ╚═╝╚═╝  ╚═╝╚═╝  ╚═╝╚═╝  ╚═╝╚═╝  ╚═╝    ╚═╝╚═╝╚═╝\n";
    cout<<" ______________________________________________________________________________\n";
    cout<<"/_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/_____/\n\n";
}
char unknownOption()//declara função unknownOption()
{
    system("clear");
    memarakLogo();
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
    ginit:
    int initmenu;
    system("clear");
    memarakLogo();
  cout<<"1-Jogar\n";
  cout<<"2-Ferramentas\n";
  cout<<"3-Sobre o jogo\n";
  cout<<"4-Avançado\n";
  cout<<"5-Sair\n";
  initmenu = getch();
  switch(initmenu)
  {
      default:
      {
          unknownOption();
          goto ginit;
    }
    case '5'://caso sair
                {
                    system("clear");
                    system("exit");
                }
                break;
    case '2'://caso ferramentas
                {
                    finit:
                    system("clear");
                    int fmenu;
    memarakLogo();
    cout<<"1-Calculadora de PN\n2-Calculadora PSD\n3-Voltar\n";
    fmenu = getch();
    switch(fmenu)
    {
        default:
        {
            unknownOption();
            goto finit;
        }
        break;
        case '3':
        {
            system("clear");
            goto ginit;
        }
        break;;
        case '1':
        {
            system("./memarak_data/fcase1");
        }
        break;
        case '2':
        {
            system("./memarak_data/fcase2");
        }
        break;
    }
        }
        break;
    case '3'://caso sobre o jogo
      {
          system("clear");
    memarakLogo();
          cout<<"Tomake\n";
          system("read -p \"Pressione enter para voltar\" saindo");
          goto ginit;
    }
    break;
    case '4'://caso avançado
      {
          dem:
          system("clear");
                int debugm;
    memarakLogo();
                cout<<"1-Geração aleatória\n2-Reiniciar conceito\n3-Voltar\n";
                debugm = getch();
                switch(debugm)
            {
                    default:
                    {
                        unknownOption();
          goto dem;
                    }
            case '1':
            {
            system ("clear");
            int debugrdsp;
            int debugrmx;
    memarakLogo();
                cout<<"Tamanho máximo do número a ser gerado:";
                cin>>debugrmx;
                srand((unsigned)time(NULL));
                debugrdsp = rand() % debugrmx;
                system ("clear");
    memarakLogo();
                cout<<debugrdsp<<"\n";
                system("read -p \"Pressione enter para voltar\" saindo");
                system ("clear");
                goto ginit;
                }
                break;
                case '2':
                {
                srand((unsigned)time(NULL));
                system("sleep 2");
                goto ginit;
                }
                break;
                case '3':
                {
                goto ginit;
                }
                break;
    }
}
break;
      case '1'://caso jogar
      {
          playm:
        system("clear");
        int playmenu;
    memarakLogo();
    cout<<"1-Aritmética\n";
    cout<<"2-Álgebra\n";
    cout<<"3-Diversos\n";
    cout<<"4-Voltar\n";
    playmenu = getch();
    switch(playmenu)
    {
        default:
        {
            system("clear");
    memarakLogo();
          cout<<"Opção desconhecida\n";
          system("sleep 0.7");
          goto playm;
        }
        case '4':
        {
            goto ginit;
        }
        case '1'://caso Aritmética
        {
        aritm:
        system("clear");
         int aritmenu;
    memarakLogo();
  cout<<"1-Adição\n";
  cout<<"2-Subtração\n";
  cout<<"3-Multiplicação\n";
  cout<<"4-Voltar\n";
  aritmenu = getch();
  switch(aritmenu)
  {
      default:
      {
          unknownOption();
          goto aritm;
    }
      case '1'://caso Adição
      {
        system("./memarak_data/case1");
    }
    break;
      case '2'://caso Subtração
      {
        system("./memarak_data/case2");
    }
    break;
      case '3'://caso multiplicação
      {
        system("./memarak_data/case3");
    }
    break;
      case '4':
      {
          goto playm;
    }
}
        }
        break;
      case '2'://caso Álgebra
    {
        algm:
        int algmenu;
        system("clear");
    memarakLogo();
    cout<<"1-Equação\n";
    cout<<"2-Voltar\n";
    algmenu = getch();
    switch(algmenu)
    {
        default:
        {
            unknownOption();
          goto algm;
        }
        case '2':
        {
            goto playm;
        }
        case '1':
        {
            system("./memarak_data/algcase1");
        }
        break;
    }
    }
    break;
        case '3'://caso Diversos
        {
            divm:
            int divmenu;
            system("clear");
            memarakLogo();
            cout<<"1-Produto Notável\n";
            cout<<"2-Produto da soma pela diferença\n";
            cout<<"3-Radicais\n";
            cout<<"4-Voltar\n";
            divmenu = getch();
            switch(divmenu)
            {
                default:
                {
                    unknownOption();
                    goto divm;
                }
                case '4':
                {
                    goto playm;
                }
                
                case '1':
                {
                    system("./memarak_data/divcase1");
                }
                break;
                case '2':
                {
                    system("./memarak_data/divcase2");
                }
                break;
                case '3':
                {
                    system("./memarak_data/divcase3");
                }
                break;
            }
            break;
        }
    }
    break;
        }//fim de caso jogar
        break;
    }//fim de switch
}
