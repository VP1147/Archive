#include <iostream>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <termios.h> 
#include <cmath>
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
     char resetvalue;
     int x;
     int format;
     int fvlue;
     int z;
     int max;
     int loop;
     system("clear");
     memarakLogo();
     cout<<"Tamanho máximo dos resultados:";
     cin>>max;
     reseterror:
     system("clear");
     memarakLogo();
     cout<<"1-Gerar raizes quadradas\n";
     cout<<"2-Gerar raizes cúbicas\n";
     format = getch();
     reset:
     system("clear");
     switch(format)
     {
         default:
         {
             unknownOption();
             goto reseterror;
        }
        break;
         case '1':
         {
             for(loop = 0; loop > -1; loop++)
             {
                 srand((unsigned)time(NULL));
                 x = rand() % max;
                 cout<<"Raiz quadrada de "<<pow(x,2)<<" = ";
                 cin>>z;
                 if(z == x)
                 {
                     cout<<"Certo!\n";
                }
                else
                {
                    cout<<"Errado, é "<<x<<"\n";
                    goto gend;
                }
            }
        }
        break;
         case '2':
         {
             for(loop = 0; loop > -1; loop++)
             {
                 srand((unsigned)time(NULL));
                 x = rand() % max;
                 cout<<"Raiz cúbica de "<<pow(x,3)<<" = ";
                 cin>>z;
                 if(z == x)
                 {
                     cout<<"Certo!\n";
                }
                else
                {
                    cout<<"Errado, é "<<x<<"\n";
                    goto gend;
                }
        }
        
    }
    break;
    }
    gend:
            cout<<"---------------------------------------------------\n";
cout<<"Você acertou "<<loop<<" pergunta(s)\n";
cout<<"---------------------------------------------------\n";
cout<<"Deseja voltar ao menu principal? (S = sim; n = não) ";
resetvalue = getch();
if(resetvalue == 'n')
{
    goto reset;
}
else
{
system("clear");
system("./memarak_data/init");
}
     }
