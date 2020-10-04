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
    char resetvalue;
    float x;
    float y;
    float z;
    int max;
    int format;
    int loop;
    system("clear");
    memarakLogo();
    cout<<"Tamanho máximo dos fatores:";
    cin>>max;
    reset:
    system("clear");
    for(loop = 0; loop > -1; loop++)
    {
        srand((unsigned)time(NULL));
        x = rand() % max;
        y = rand() % max;
        format = rand() % 7;
        switch(format)
        {
            case 0:
            {
                cout<<"x + "<<x<<" = "<<y<<"\n";
                cout<<"x = ";
                cin>>z;
                if(z == y - x)
                {
                    cout<<"Certo!\n";
                }
                else
                {
                    cout<<"Errado, é "<<y-x<<"\n";
                    goto gend;
                }
            }
            break;
            case 1:
            {
                cout<<x<<" + x = "<<y<<"\n";
                cout<<"x = ";
                cin>>z;
                if(z == y - x)
                {
                    cout<<"Certo!\n";
                }
                else
                {
                    cout<<"Errado, é "<<y-x<<"\n";
                    goto gend;
                }
            }
            break;
            case 2:
            {
               cout<<"x - "<<x<<" = "<<y<<"\n";
               cout<<"x = ";
               cin>>z;
               if(z == x + y)
               {
                   cout<<"Certo!\n";
            }
            else
            {
                cout<<"Errado, é "<<x+y<<"\n";
                goto gend;
            }
            }
            break;
            case 3:
            {
                cout<<x<<" = x + "<<y<<"\n";
                cout<<"x = ";
                cin>>z;
                if(z == x - y)
                {
                    cout<<"Certo!\n";
                }
                else
                {
                    cout<<"Errado, é "<<x-y<<"\n";
                    goto gend;
                }
            }
            break;
            case 4:
            {
                cout<<"2x = "<<x<<" + "<<y<<"\n";
                cout<<"x = ";
                cin>>z;
                if(z == (x + y)/2)
                {
                    cout<<"Certo!\n";
                }
                else
                {
                    cout<<"Errado, é "<<(x+y)/2<<"\n";
                    goto gend;
                }
            }
            break;
            case 5:
            {
                cout<<"2x = "<<x<<" - "<<y<<"\n";
                cout<<"x = ";
                cin>>z;
                if(z == (x - y)/2)
                {
                    cout<<"Certo!\n";
                }
                else
                {
                    cout<<"Errado, é "<<(x-y)/2<<"\n";
                    goto gend;
                }
            }
            break;
            case 6:
            {
                cout<<"2x + "<<x<<" = "<<y<<"\n";
                cout<<"x = ";
                cin>>z;
                if(z == (y-x)/2)
                {
                    cout<<"Certo!\n";
                }
                else
                {
                    cout<<"Errado, é "<<(x-y)/2<<"\n";
                    goto gend;
                }
            }
            break;
            case 7:
            {
                cout<<"-x = "<<x<<" + "<<y<<"\n";
                cout<<"x = ";
                cin>>z;
                if(z == (x+y)*-1)
                {
                    cout<<"Certo!";
                }
                else
                {
                    cout<<"Errado, é "<<(x+y)*-1<<"\n";
                    goto gend;
                }
            }
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
