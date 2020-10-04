#include <iostream>
#include <chrono>
#include <thread>
using namespace std;
int main()
{
    int max = 10;
    int wcount;
    int lcount;
    int w = 10;
    int l = 10;
    int matrix[w][l];
    for(lcount = 0; lcount <= (l-1); lcount++)
    {
        for(wcount = 0; wcount <= (w-1); wcount++)
        {
            srand((unsigned)time(NULL));
            matrix[wcount][lcount] = rand() % max;
            cout<<matrix[wcount][lcount]<<"\t";
            std::this_thread::sleep_for(std::chrono::milliseconds(10));
        }
    }
    //cout<<matrix;
    cout<<"hi";
}
