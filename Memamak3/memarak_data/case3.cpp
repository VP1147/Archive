#include <iostream>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <termios.h> 
using namespace std;
char memarakLogo()
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
    system("clear");
    char resetvalue;
    int loop;
    int factorn;
    int max;
    float x;
    float y;
    float a;
    float z;//resposta
    memarakLogo();
    cout<<"Tamanho máximo dos fatores:";
    cin>>max;
    refactor:
    system("clear");
    memarakLogo();
    cout<<"Quantidade de fatores(2-3):";
    cin>>factorn;
    reset:
    system("clear");
    switch(factorn)
    {
        case 2:
        {
          for(loop = 0; loop > -1; loop++)
          {
            srand((unsigned)time(NULL));
            x = rand() % max;
            y = rand() % max;
            cout<<x<<"x"<<y<<"\n";
            cin>>z;
            if(z == x*y)
            {
              cout<<"Certo!\n";
            }
            else
            {
              cout<<"Errado, é "<<x*y<<"\n";
              goto gend;
        }
      }
        }
        case 3:
        {
            for(loop = 0; loop > -1; loop++)
          {
              srand((unsigned)time(NULL));    
                      x = rand() % max;
                      y = rand() % max;
                      a = rand() % max;
                      cout<<x<<"x"<<y<<"x"<<a<<"\n";
                      cin>>z;
                      if(z == (x*y)*a)
                      {
                          cout<<"Certo!\n";
                    }
                    else
                    {
                        cout<<"Errado, é "<<(x*y)*a<<"\n";
                        goto gend;
                    }
            }
        }
        default:
        {
            goto refactor;
        }
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
