/*
MENTAL MATH - RANDON ACCOUNTS (MEMARAC) 1.0
By Vinnicius Pavao
December 2017
*/
#include <iostream>
#include <conio.h>
#include <cmath>
#include <windows.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{
	menustart:
	int start;
printf("%c%c%c%c%c%c%c%c%c%cMEMARAC 1.0%c%c%c%c%c%c%c%c%c%c"
,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177,177);
        cout<<"\n1-Start Game\n2-Credits\n3-Settings\n4-How to play\n5-DEBUG\n";
		cin>>start;
		switch(start)//MENU
		{
			case 2:
				{
					system(" ");
					cout<<"Made by Vinnicius Pavao\n@2017-2018\nTOTALLY OPEN-SOURCE\n\n";
					system("pause");
					system(" ");
					goto menustart;
				}
			case 4:
				{
					system(" ");
					cout<<"The purpose of the MEMARAC (Mental Math - Randon Accounts)\nis that the player";
					cout<<" calculates mentally or using techniques with paper and pen.\nTo start the game,";
					cout<<"  follow the menus instructions, choosing the maximum number\nto be generated in";
					cout<<" the accounts and the type of operation.\nYou can change the font color";
					cout<<" (recommended 15) and the background color (unrecommended changes)\n by";
					cout<<" using the list included in the game folder.\n\nTo return to the Start";
					cout<<" menu during the questions, type 1234567890 in the response.\n\n\nMade";
					cout<<" by Vinnicius Pavao in 2017-2018.\n";
					system("pause");
					system(" ");
					goto menustart;
				}
				break;
			default:
				{
					system(" ");
					cout<<"Invalid option\n";
					system("pause");
					system(" ");
					goto menustart;
				}
								case 5://DEBUG MENU
				{
					system(" ");
					int debugm;
					cout<<"1-Random Generate\n2-End System\n3-Reset System Color\n4-Reload Random Recipe\n5-RETURN TO MENU\n";
					cin>>debugm;
					switch(debugm)
					{
						default:
							{
								system(" ");
								cout<<"invalid option\n";
								system("pause");
								system(" ");
								goto menustart;
							}
						case 1:
							{
								system (" ");
							    int debugrdsp;
								int debugrmx;
								cout<<"Max number size:\n";
								cin>>debugrmx;
								if (debugrmx < 1000000000)
								{
									srand((unsigned)time(NULL));
								debugrdsp = rand() % debugrmx;
								system (" ");
								cout<<debugrdsp<<"\n";
								system ("pause");
								system (" ");
								goto menustart;
								}
								else
								{
									system (" ");
									cout<<"TOO LONG VALUE\n";
									system (" ");
									goto menustart;
                                                                }
                            }
                        case 2:
                        	{
                        		system(" ");
                        		system ("pause");
                        		return 0;
							}
						case 3:
							{
								system(" ");
							    system ("color 07");
								cout<<"<SYSTEM COLOR RESETED>";
								 (1500);
								system(" ");
								goto menustart;
							}
						case 4:
							{
								system(" ");
							    srand((unsigned)time(NULL));
								 (1000);
								cout<<"<RANDOM RECIPE RELOADED>";
								 (1500);
								system(" ");
								goto menustart;
							}
						case 5:
							{
								system(" ");
								goto menustart;
							}
					}//end debugm
				}
			case 3:
				{
					system(" ");
					int configm;
					cout<<"1-Font color\n2-Background color\n3-RETURN TO MENU\n";
					cin>>configm;
					switch(configm)
					{
						case 1:
							{
								system(" ");
								int fcolor;
								cout<<"Insert the font color (see program's color table):";
								cin>>fcolor;
								switch(fcolor)
								{
									case 0:system ("color 0");
									break;
									case 1:system ("color 1");
									break;
									case 2:system ("color 2");
									break;
									case 3:system ("color 3");
									break;
									case 4:system ("color 4");
									break;
									case 5:system ("color 5");
									break;
									case 6:system ("color 6");
									break;
									case 7:system ("color 7");
									break;
									case 8:system ("color 8");
									break;
									case 9:system ("color 9");
									break;
									case 10:system ("color A");
									break;
									case 11:system ("color B");
									break;
									case 12:system ("color C");
									break;
									case 13:system ("color D");
									break;
									case 14:system ("color E");
									break;
									case 15:system ("color F");
									break;
									default:
										{
											cout<<"Invalid color\n";
											system("pause");
											system(" ");
											goto menustart;
										}

								}
								system(" ");
								goto menustart;

							}
							break;
							case 2:
							{
								int bcolor;
								cout<<"Insert the background color (See program's color table:";
								cin>>bcolor;
								switch(bcolor)
								{
									case 0:system("color 07");
									break;
									case 1:system("color 17");
									break;
									case 2:system("color 27");
									break;
									case 3:system("color 37");
									break;
									case 4:system("color 47");
									break;
									case 5:system("color 57");
									break;
									case 6:system("color 67");
									break;
									case 7:system("color 77");
									break;
									case 8:system("color 87");
									break;
									case 9:system("color 97");
									break;
									case 10:system("color A7");
									break;
									case 11:system("color B7");
									break;
									case 12:system("color C7");
									break;
									case 13:system("color D7");
									break;
									case 14:system("color E7");
									break;
									case 15:system("color F7");
									break;
									default:
										{
											system(" ");
											cout<<"Invalid color\n";
											system("pause");
											system(" ");
											goto menustart;
										}
								}
							}
							case 3:
								{
									system(" ");
									goto menustart;
								}
					}
				}
				case 1:
					{
		system(" ");
		int max;
		int x;
		int y;
		int z;
		int gmenu;
		int end;
		cout<<"Insert the type of questions:\n";
		cout<<"1-Addiction\n2-Subtraction\n3-Multiplication\n4-Division\n";
		cout<<"5-Potenciation\n6-Root\n7-Random\n8-RETURN TO MENU\n";
		cin>>gmenu;
		if (gmenu == 8)
		{
			system(" ");
			goto menustart;
		}
		system(" ");
		cout<<"Max number size:";
		cin>>max;
		system(" ");
		switch (gmenu)
		{
					case 1:
			{
										while (end == 0)
		{
			srand((unsigned)time(NULL));
		x = rand() % max;
		y = rand() % max;
		cout<<x<<"+"<<y<<"\n";
		cin>>z;
		if (z == x + y)
		{
			cout<<"Correct\n";
		}
		else
		{
			cout<<"Wrong\n";
		}
		if (z == 1234567890)
		{
			system (" ");
			goto menustart;
		}


		}
			}

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
			cout<<"Correct\n";
		}
		else
		{
			cout<<"Wrong\n";
		}
		if (z == 1234567890)
		{
			system (" ");
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
			cout<<"Correct\n";
		}
		else
		{
			cout<<"Wrong\n";
		}
		if (z == 1234567890)
		{
			system (" ");
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
			cout<<"Correct\n";
		}
		else
		{
			cout<<"Wrong\n";
		}
		if (z == 1234567890)
		{
			system (" ");
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
			case 0:
				{
		cout<<x<<" High squared\n";
		cin>>z;
		if (z == pow(x,2))
		{
			cout<<"Correct\n";
		}
		else
		{
			cout<<"Wrong\n";
		}
		if (z == 1234567890)
		{
			system (" ");
			goto menustart;
		}


		}
		    case 1:
		    	{
		    		cout<<x<<" Cube-High\n";
		cin>>z;
		if (z == pow(x,3))
		{
			cout<<"Correct\n";
		}
		else
		{
			cout<<"Wrong\n";
		}
		if (z == 1234567890)
		{
			system (" ");
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
			case 0:
				{
		cout<<"Square root of "<<x<<"\n";
		cin>>z;
		if (z == sqrt(x))
		{
			cout<<"Correct\n";
		}
		else
		{
			cout<<"Wrong\n";
		}
		if (z == 1234567890)
		{
			system (" ");
			goto menustart;
		}


		}
		    case 1:
		    	{
		    		cout<<"Cubic root of "<<x<<"\n";
		cin>>z;
		if (z == cbrt(x))
		{
			cout<<"Correct\n";
		}
		else
		{
			cout<<"Wrong\n";
		}
		if (z == 1234567890)
		{
			system (" ");
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
			cout<<"Correct\n";
		}
		else
		{
			cout<<"Wrong\n";
		}
		if (z == 1234567890)
		{
			system (" ");
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
			cout<<"Correct\n";
		}
		else
		{
			cout<<"Wrong\n";
		}
		if (z == 1234567890)
		{
			system (" ");
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
			cout<<"Correct\n";
		}
		else
		{
			cout<<"Wrong\n";
		}
		if (z == 1234567890)
		{
			system (" ");
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
			cout<<"Correct\n";
		}
		else
		{
			cout<<"Wrong\n";
		}
		if (z == 1234567890)
		{
			system (" ");
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
		cout<<x<<" High squared\n";
		cin>>z;
		if (z == pow(x,2))
		{
			cout<<"Correct\n";
		}
		else
		{
			cout<<"Wrong\n";
		}
		if (z == 1234567890)
		{
			system (" ");
			goto menustart;
		}


		}
		    case 1:
		    	{
		    		cout<<x<<" Cube-High\n";
		cin>>z;
		if (z == pow(x,3))
		{
			cout<<"Correct\n";
		}
		else
		{
			cout<<"Wrong\n";
		}
		if (z == 1234567890)
		{
			system (" ");
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
		cout<<"Square root of "<<x<<"\n";
		cin>>z;
		if (z == sqrt(x))
		{
			cout<<"Correct\n";
		}
		else
		{
			cout<<"Wrong\n";
		}
		if (z == 1234567890)
		{
			system (" ");
			goto menustart;
		}


		}
		    case 1:
		    	{
		    		cout<<"Cubic root of "<<x<<"\n";
		cin>>z;
		if (z == cbrt(x))
		{
			cout<<"Correct\n";
		}
		else
		{
			cout<<"Wrong\n";
		}
		if (z == 1234567890)
		{
			system (" ");
			goto menustart;
		}


		        }
}
}
}
}
}//last case
		}

					}


		}



}
