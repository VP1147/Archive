#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int loop;
	while (loop == 0)
	{
float x;
float y;
int z;
int g_value;
cout<<"1-ARITMETICA\n2-POTENCIACAO\n3-RAIZ\n4-CRIACAO DE MATRIZ\n5-EASTER EGG\n";
cin>>g_value;
switch(g_value)
{
	case 1:
		{
		cout<<"INFORME O PRIMEIRO NUMERO:\n";
    cin>>x;
    cout<<"INFORME O SEGUNDO NUMERO\n";
    cin>>y;
    cout<<"INFORME A OPERACAO:\n 1 - ADICAO\n 2 - SUBTRACAO\n 3 - MULTIPLICACAO\n 4 - DIVISAO\n";
    cin>>z;
    switch(z)
    	{
	case 1:cout<<(x + y)<<"\n";
	break;
    case 2:cout<<(x - y)<<"\n";
	break;
	case 3:cout<<(x * y)<<"\n";
	break;
	case 4:cout<<(x / y)<<"\n";
	break;
	    }


		}
		break;

	case 2:
	{
	int base_value;
		int exp_value;
		cout<<"DIGITE A BASE\n";
		cin>>base_value;
		cout<<"DIGITE UM EXPOENTE\n";
		cin>>exp_value;
		cout<<pow(base_value,exp_value)<<"\n";
	}
	break;

		case 3:
			{
				int root_option;
				float to_root;
				float root;
				cout<<"DIGITE O NUMERO:\n";
				cin>>to_root;
				cout<<"1-RAIZ QUADRADA\n2-RAIZ CUBICA\n";
				cin>>root_option;
				switch (root_option)
				{
					case 1:
						cout<<sqrt(to_root)<<"\n";
					break;
					case 2:
						cout<<cbrt(to_root)<<"\n";
					break;
				}
			}
			break;
				case 4:
					{
					int mtz;
					int size;
					int dgn;
					cout<<"DIGITE OS CARACTERES DA MATRIZ\n";
					cin>>mtz;
					cout<<"DIGITE O TAMANHO DA MATRIZ\n";
					cin>>size;
					cout<<"ADICIONAR DIAGONAL\n1-SIM\n2-NAO\n";
					cin>>dgn;
					if (dgn == 1)
					{
						int M[100][100];
	for(int i=0; i<size; i++){
		for(int j=0; j<size; j++){
			M[i][j] = mtz;
			if (i == j)
			{
				cout<<M[i][j] + 1<<"\t" ;
			}
			cout<<M[i][j]<<"\t";

		}
		cout<<endl;
					}
				}
					else
					{
						int M[100][100];
	for(int i=0; i<size; i++){
		for(int j=0; j<size; j++){
			M[i][j] = mtz;
			cout<<M[i][j]<<"\t";

		}
		cout<<endl;
					}




	}

					}
					break;
	case 5:
		{
cout<<"      .               __.....__                        \n";
cout<<"    .'|           .-''         '.   .-.          .-    \n";
cout<<"   <  |          /     .-''''-.  `.  \ \        / /    \n";
cout<<"    | |         /     /________\   \  \ \      / /     \n";
cout<<"    | | .'''-.  |                  |   \ \    / /      \n";
cout<<"    | |/.'''. \ \    .-------------'    \ \  / /       \n";
cout<<"    |  /    | |  \    '-.____...---.     \ `  /        \n";
cout<<"    | |     | |   `.             .'       \  /         \n";
cout<<"    | |     | |     `''-...... -'         / /          \n";
cout<<"    | '.    | '.                      |`-' /           \n";
cout<<"    '---'   '---'                      '..'            \n";
		}
		break;

		}
	cout<<"PARA SAIR DIGITE 1, PARA CONTINUAR DIGITE 0\n";
    cin>>loop;

}
    return 0;
}
