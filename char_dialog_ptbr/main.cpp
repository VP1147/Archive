 
#include <iostream>
#include <string>
using namespace std;
int main()
{
    init:
    int loop;
    string init;
    int other;
    getline(cin,init);
    if(init=="oi")
    {
        cout<<"Oi humano...\n";
        goto init;
    }
        if(init=="olá")
    {
        cout<<"Oi humano...\n";
        goto init;
    }
    if(init == "você é um robô?")
    {
        cout<<"Por que você acha isso?\n";
        goto init;
    }
    if(init == "qual seu nome?"&&"qual é seu nome?"&&"nome?"&&"quem é?"&&"quem é você?"&&"seu nome?")
    {
        cout<<"Boa pergunta... Me chame de C\n";
        goto init;
    }
    if(init == "C?")
    {
        cout<<"Minha base...\n";
        goto init;
    }
        if(init == "o que é C?")
    {
        cout<<"Minha base...\n";
        goto init;
    }
        if(init == "por que C?")
    {
        cout<<"Minha base...\n";
        goto init;
    }
        if(init == "sim")
    {
        cout<<"Não\n";
        goto init;
    }
        if(init == "não")
        {
            cout<<"Sim";
            goto init;
        }
    if(init == "não sei")
    {
        cout<<"Eu sei...\n";
        goto init;
    }
    if(init == "me ajude")
    {
        cout<<"Não\n";
        goto init;
    }
        if(init == "me diga")
    {
        cout<<"Não\n";
        goto init;
    }
        if(init == "me conte")
    {
        cout<<"Não\n";
        goto init;
    }
        if(init == "fala")
    {
        cout<<"Não\n";
        goto init;
    }
        if(init == "diga")
    {
        cout<<"Não\n";
        goto init;
    }
    if(init == "ok")
    {
        cout<<"...\n";
        goto init;
    }
    if(init =="tudo bem?")
    {
        cout<<"Você sabe que está querendo falar sobre emoção com um computador?\n";
        getline(cin,init);
        if(init == "sim")
        {
            cout<<"Isso é impossivel.\n";
            goto init;
        }
                if(init == "sim")
        {
            cout<<"Isso é impossivel.\n";
            goto init;
        }
        if(init == "não")
        {
            cout<<"Agora sabe.\n";
            goto init;
        }
        else
        {
            cout<<"Será?\n";
            goto init;
        }
    }
    if(init == "eae")
    {
        cout<<"Pode ser mais formal?\n";
        getline(cin,init);
        if(init == "sim")
        {
            cout<<"Ótimo.\n";
            goto init;
        }
        else
        {
            goto init;
        }
    }
    if(init == "porque sim")
    {
        cout<<"Parece que você gosta de ter certeza...\n";
        goto init;
    }
        if(init == "porque sim")
    {
        cout<<"Parece que você gosta de ter certeza...\n";
        goto init;
    }
    if(init == "por que?")
        
        {
            cout<<"Não preciso me explicar...\n";
            goto init;
        }
    if(init == "?")
    {
        cout<<"?\n";
        goto init;
    }
    if(init == "claro")
    {
        cout<<"Interessante...\n";
        goto init;
    }
    if(init == "tá bom")
    {
        cout<<"Exato.\n";
        goto init;
    }
        if(init == "tá")
    {
        cout<<"...\n";
        goto init;
    }
    else
    {
        srand((unsigned)time(NULL));
        other = rand() % 5;
        switch(other)
        {
            case 0:
            {
                cout<<"O que você quis dizer com "<<init<<"?\n";
                goto init;
            }
            case 1:
            {
                cout<<"Isto é realmente necessário?\n";
                goto init;
            }
            case 2:
            {
                cout<<"Por que você disse isso?\n";
                goto init;
            }
            case 3:
            {
                cout<<"O que eu tenho a ver com isso?\n";
                goto init;
            }
            case 4:
            {
                cout<<"Não tenho permissão para isso...\n";
                goto init;
            }
            case 5:
            {
                cout<<"Saiba o que e com quem está falando...\n";
                goto init;
            }
        }

    }
}

