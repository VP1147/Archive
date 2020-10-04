#include <iostream>
#include <cmath>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{//Inicio do main
  	menustart:
    system("clear");
  	int start;
  	system("clear");
    cout<<"_______________\n";
    cout<<"---MEMARAK----|___                           / Mental math     \\ ";
          cout<<"\n1-Iniciar     |________                      \\ random accounts / ";
          cout<<"\n2-Créditos    |________________";
          cout<<"\n3-Propósito   |______________________________";
          cout<<"\n4-DEBUG       |_____________________________________________\n";
  		cin>>start;
      system("clear");
      switch(start)
      {
        default:
        {
          system("clear");
          goto menustart;
        }
        break;
        case 7:
        {
          cout<<"CHEGA!\n";
          system("read -p \"Pressione enter para sair\" saindo");
          system("clear");
          goto menustart;
        }
        case 6:
        {
          cout<<"Sabia que você é curioso demais?\n";
          system("read -p \"Pressione enter para sair\" saindo");
          system("clear");
          goto menustart;
        }
        break;
        case 5:
        {
          cout<<"Não existem easter eggs por aqui, pare de procurar...\n";
          system("read -p \"Pressione enter para sair\" saindo");
          goto menustart;
        }
        break;
        			case 2:// caso Créditos
        				{
        					cout<<"Por VP1147\n@2017-18\nTOTALMENTE OPEN-SOURCE!\n";
        					system("read -p \"Pressione enter para sair\" saindo");
        					goto menustart;
        				}
                break;
                case 3://caso Propósito
                {
                  cout<<"A fazer...\n";
                system("read -p \"Pressione enter para sair\" saindo");
                  goto menustart;
                }
                break;
                case 4://caso DEBUG
                {//inicio de DEBUG

                 					int debugm;
                 					cout<<"1-Geração aleatória\n2-Reiniciar conceito\n3-Voltar\n";
                 					cin>>debugm;
                 					switch(debugm)
                 					{
                 						case 1:
                 							{
                 								system ("clear");
                 							    int debugrdsp;
                 								int debugrmx;
                 								cout<<"Max number size:\n";
                 								cin>>debugrmx;
                 									srand((unsigned)time(NULL));
                 								debugrdsp = rand() % debugrmx;
                 								system ("clear");
                 								cout<<debugrdsp<<"\n";
                 								system("read -p \"Pressione enter para sair\" saindo");
                 								system ("clear");
                 								goto menustart;
                              }
                              break;
                              case 2:
                              {
                             srand((unsigned)time(NULL));
                             system("sleep 2");
                            goto menustart;
                 							}
                              break;
                              case 3:
                              {
                                goto menustart;
                              }
                              break;
                }

      }//Fim de DEBUG
      break;
      case 1://caso Iniciar
      {//Inicio (jogo)
        int max;
    		float x;
    		float y;
    		float z;
    		int gmenu;
    		int end = 0;
    		cout<<"Qual operação deseja exercitar?\n";
    		cout<<"1-Adição\n2-Subtração\n3-Multiplicação\n4-Divisão\n";
    		cout<<"5-Potenciação\n6-Radiciação\n7-Aleatório\n8-Voltar\n";
    		cin>>gmenu;
        system("clear");
        if (gmenu == 8)
        {
          goto menustart;
        }
        cout<<"Tamanho máximo dos fatores:";
    		cin>>max;
        system("clear");
        switch(gmenu)
        {
                    case 1:
                    {
                      		while (end == 0)
                      		{
                      			//srand((unsigned)time(NULL));
                      		x = rand() % max;
                      		y = rand() % max;
                      		cout<<x<<"+"<<y<<"\n";
                      		cin>>z;
                      		if (z == x + y)
                      		{
                      			cout<<"Certo!\n";
                      		}
                      		else
                      		{
                      			cout<<"Errado, é "<<x+y<<"\n";
                      		}
                      		if (z == 1234567890)
                      		{
                      			system ("clear");
                      			goto menustart;
                      		}


                      		}
                    }
                    break;
                    case 2:
                    {
                      	  while (end == 0)
                      		{
                      			srand((unsigned)time(NULL));
                      		x = rand() % max;
                      		y = rand() % max;
                      		cout<<x<<"-"<<y<<"\n";
                      		cin>>z;
                      		if (z == x - y)
                      		{
                      			cout<<"Certo!\n";
                      		}
                      		else
                      		{
                      			cout<<"Errado, é "<<x-y<<"\n";
                      		}
                      		if (z == 1234567890)
                      		{
                      			system ("clear");
                      			goto menustart;
                      		}


                      		}
                    }
                    case 3:
                    {
                      		while (end == 0)
                      		{
                      			srand((unsigned)time(NULL));
                      		x = rand() % max;
                      		y = rand() % max;
                      		cout<<x<<"x"<<y<<"\n";
                      		cin>>z;
                      		if (z == x * y)
                      		{
                      			cout<<"Certo!\n";
                      		}
                      		else
                      		{
                      			cout<<"Errado, é "<<x*y<<"\n";
                      		}
                      		if (z == 1234567890)
                      		{
                      			system ("clear");
                      			goto menustart;
                      		}


                      		}
                    }
                    case 4:
                    {
                      						while (end == 0)
                      		{
                      			srand((unsigned)time(NULL));
                      		x = rand() % max;
                      		y = rand() % max;
                      		cout<<x<<"/"<<y<<"\n";
                      		cin>>z;
                      		if (z == x / y)
                      		{
                      			cout<<"Certo!\n";
                      		}
                      		else
                      		{
                      		 cout<<"Errado, é "<<x/y<<"\n";
                      		}
                      		if (z == 1234567890)
                      		{
                      			system ("clear");
                      			goto menustart;
                      		}


                      		}
                    }
                    case 5:
                    {
                      							int vpow;
                      							while (end == 0)
                      		{
                      			srand((unsigned)time(NULL));
                      		x = rand() % max;
                      		y = rand() % max;
                      		vpow = rand() % 1;
                      		switch(vpow)
                      		{
                      			case 0://caso ao quadrado
                      				{
                      		cout<<x<<" ao quadrado\n";
                      		cin>>z;
                      		if (z == pow(x,2))
                      		{
                      			cout<<"Certo!\n";
                      		}
                      		else
                      		{
                      		 cout<<"Errado, é "<<pow(x,2)<<"\n";
                      		}
                      		if (z == 1234567890)
                      		{
                      			system ("clear");
                      			goto menustart;
                      		}


                      		}
                      		    case 1:
                      		    	{//caso ao cubo
                      		    		cout<<x<<" ao cubo\n";
                      		cin>>z;
                      		if (z == pow(x,3))
                      		{
                      			cout<<"Certo!\n";
                      		}
                      		else
                      		{
                      			cout<<"Errado, é "<<pow(x,3)<<"\n";
                      		}
                      		if (z == 1234567890)
                      		{
                      			system ("clear");
                      			goto menustart;
                      		}


                      		        }
                      				}
                      				}
                    }
                    case 6:
                    {
                      		        	int vroot;
                      							while (end == 0)
                      		{
                      			srand((unsigned)time(NULL));
                      		x = rand() % max;
                      		y = rand() % max;
                      		vroot = rand() % 1;
                      		switch(vroot)
                      		{
                      			case 0://caso raiz quadrada
                      				{
                      		cout<<"Raiz quadrada de "<<x<<"\n";
                      		cin>>z;
                      		if (z == sqrt(x))
                      		{
                      			cout<<"Certo!\n";
                      		}
                      		else
                      		{
                      			cout<<"Errado, é "<<sqrt(x)<<"\n";
                      		}
                      		if (z == 1234567890)
                      		{
                      			system ("clear");
                      			goto menustart;
                      		}


                      		}
                      		    case 1://caso raiz cubica
                      		    	{
                      		    		cout<<"Cubic root of "<<x<<"\n";
                      		cin>>z;
                      		if (z == cbrt(x))
                      		{
                      			cout<<"Certo!\n";
                      		}
                      		else
                      		{
                      			cout<<"Errado, é"<<cbrt(x)<<"\n";
                      		}
                      		if (z == 1234567890)
                      		{
                      			system ("clear");
                      			goto menustart;
                      		}


                      		        }
                      				}
                      				}
                    }
                    case 7:
                    {
                      					int vrandom;
                      					int caseloop;
                      					srand((unsigned)time(NULL));
                      					vrandom = rand() % 5;
                      					while(caseloop == 0)
                      					{
                      						switch(vrandom)
                      					{
                      						case 0:
                      						{
                      							srand((unsigned)time(NULL));
                      		x = rand() % max;
                      		y = rand() % max;
                      		cout<<x<<"+"<<y<<"\n";
                      		cin>>z;
                      		if (z == x + y)
                      		{
                      			cout<<"Certo!\n";
                      		}
                      		else
                      		{
                      			cout<<"Errado, é "<<x+y<<"\n";
                      		}
                      		if (z == 1234567890)
                      		{
                      			system ("clear");
                      			goto menustart;
                      		}


                      						}
                      						case 1:
                      							{
                      		srand((unsigned)time(NULL));
                      		x = rand() % max;
                      		y = rand() % max;
                      		cout<<x<<"-"<<y<<"\n";
                      		cin>>z;
                      		if (z == x - y)
                      		{
                      			cout<<"Certo!\n";
                      		}
                      		else
                      		{
                      			cout<<"Errado, é "<<x-y<<"\n";
                      		}
                      		if (z == 1234567890)
                      		{
                      			system ("clear");
                      			goto menustart;
                      		}



                      							}
                      							case 2:
                      								{
                      		srand((unsigned)time(NULL));
                      		x = rand() % max;
                      		y = rand() % max;
                      		cout<<x<<"x"<<y<<"\n";
                      		cin>>z;
                      		if (z == x * y)
                      		{
                      			cout<<"Certo!\n";
                      		}
                      		else
                      		{
                      			cout<<"Errado, é "<<x*y<<"\n";
                      		}
                      		if (z == 1234567890)
                      		{
                      			system ("clear");
                      			goto menustart;
                      		}


                      								}
                      								case 3:
                      									{
                      	    srand((unsigned)time(NULL));
                      		x = rand() % max;
                      		y = rand() % max;
                      		cout<<x<<"/"<<y<<"\n";
                      		cin>>z;
                      		if (z == x / y)
                      		{
                      			cout<<"Certo!\n";
                      		}
                      		else
                      		{
                      			cout<<"Errado, é "<<x/y<<"\n";
                      		}
                      		if (z == 1234567890)
                      		{
                      			system ("clear");
                      			goto menustart;
                      		}


                      									}
                      									case 4:
                      										{
                      		int vpow;
                      		srand((unsigned)time(NULL));
                      		x = rand() % max;
                      		y = rand() % max;
                      		vpow = rand() % 1;
                      		switch(vpow)
                      		{
                      			case 0:
                      				{
                      		cout<<x<<" ao quadrado\n";
                      		cin>>z;
                      		if (z == pow(x,2))
                      		{
                      			cout<<"Certo!\n";
                      		}
                      		else
                      		{
                      			cout<<"Errado, é "<<pow(x,2)<<"\n";
                      		}
                      		if (z == 1234567890)
                      		{
                      			system ("clear");
                      			goto menustart;
                      		}


                      		}
                      		    case 1:
                      		    	{
                      		    		cout<<x<<" ao cubo\n";
                      		cin>>z;
                      		if (z == pow(x,3))
                      		{
                      			cout<<"Certo!\n";
                      		}
                      		else
                      		{
                      			cout<<"Errado, é "<<pow(x,3)<<"\n";
                      		}
                      		if (z == 1234567890)
                      		{
                      			system ("clear");
                      			goto menustart;
                      		}


                      		        }
                      				}
                      										}
                      										case 5:
                      											{
                      		int vroot;
                      		srand((unsigned)time(NULL));
                      		x = rand() % max;
                      		y = rand() % max;
                      		vroot = rand() % 1;
                      		switch(vroot)
                      		{
                      			case 0:
                      				{
                      		cout<<"Raiz quadrada de "<<x<<"\n";
                      		cin>>z;
                      		if (z == sqrt(x))
                      		{
                      			cout<<"Certo!\n";
                      		}
                      		else
                      		{
                      			cout<<"Errado, é "<<sqrt(x)<<"\n";
                      		}
                      		if (z == 1234567890)
                      		{
                      			system ("clear");
                      			goto menustart;
                      		}


                      		}
                      		    case 1:
                      		    	{
                      		    		cout<<"Raiz cubica de "<<x<<"\n";
                      		cin>>z;
                      		if (z == cbrt(x))
                      		{
                      			cout<<"Certo\n";
                      		}
                      		else
                      		{
                      			cout<<"Errado, é "<<cbrt(x)<<"\n";
                      		}
                      		if (z == 1234567890)
                      		{
                      			system ("clear");
                      			goto menustart;
                      		}


                      		        }
                      }
                      }
                      }
                      }
                    }


        }

        }
      }//Fim (jogo)
}//Fim do main
