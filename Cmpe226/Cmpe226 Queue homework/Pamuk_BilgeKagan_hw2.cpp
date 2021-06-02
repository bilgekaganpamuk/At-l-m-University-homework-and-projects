#include <iostream>
#include <cassert>
#include "Queue.h"
#include <stdlib.h>
#include <time.h>
#include <conio.h>

//Bilge Kagan Pamuk/182244710016

const int Fsize=5;

using namespace std;

template<typename B>
struct Pos
{
    B x;
    B y;
    Pos<B> *next;
};

template<typename B>
class snake
{
private:
    char ArrField[20][20];
    Pos<B> head;
    Queue<Pos<B> > bodyqueue;
    int size,counter,NextVal;
    int AreaCounter=20;
    void  display()
    {
        for(int x=0;x<20;x++)
            {
            for(int y=0;y<20;y++)
                {
                cout<<ArrField[x][y];
                }
            cout<<endl;
            }
            cout<<endl;
    }


public:
    snake()
    {
        srand(time(0));
        size=1;
        NextVal=rand()%5+1;
        counter=0;
        head.x=5;
        head.y=5;
        for(int x=0;x<20;x++)
            {
                for(int y=0;y<20;y++)
                {
                    if(x!=Fsize||y!=Fsize)
                    {
                        ArrField[x][y]=-80;
                    }
                    else
                    {
                        ArrField[x][y]=-78;
                    }
                }
            }
    }

void gameLoop()
{
    display();
    int C=1;
    char Key=getch();
    if(Key=='w')
        {
            if(ArrField[head.y-1][head.x]!= -78 && head.y<20 && head.y>0)
                {
                bodyqueue.add(head);
                if(bodyqueue.size()>=size)
                    {
                    ArrField[bodyqueue.front().y][bodyqueue.front().x] = -80;
                    head.y=head.y-1;
                    bodyqueue.remove();
                    ArrField[head.y][head.x]=-78;
                    }
                else
                    {
                    head.y=head.y-1;
                    ArrField[head.y][head.x]=-78;
                    }
                    counter=counter+1;
                if(counter==NextVal)
                    {
                        counter=0;
                        size=size+1;
                        srand(time(0));
                        NextVal=rand()%5+1;
                    }
                }
            else
                {
                C=0;
                goto exit;
                }
        }
    if(Key=='a')
        {
            if(ArrField[head.y][head.x-1]!= -78 && head.x<20 && head.x>0)
                {
                bodyqueue.add(head);
                if(bodyqueue.size()>=size)
                    {

                    ArrField[bodyqueue.front().y][bodyqueue.front().x] = -80;
                    head.x=head.x-1;
                    bodyqueue.remove();
                    ArrField[head.y][head.x]=-78;
                    }
                    else
                    {
                    head.x=head.x-1;
                    ArrField[head.y][head.x]=-78;
                    }
                    counter=counter+1;
                    if(counter==NextVal)
                    {
                        counter=0;
                        size=size+1;
                        srand(time(0));
                        NextVal=rand()%5+1;
                    }

                }
            else
                {
                C=0;
                goto exit;
                }
        }
    if(Key=='s')
        {
if(ArrField[head.y+1][head.x]!= -78 && head.y<19 && head.y>-1)
                {
                bodyqueue.add(head);
                if(bodyqueue.size()>=size)
                    {

                    ArrField[bodyqueue.front().y][bodyqueue.front().x] = -80;
                    head.y=head.y+1;
                    bodyqueue.remove();
                    ArrField[head.y][head.x]=-78;
                    }
                    else
                    {
                    head.y=head.y+1;
                    ArrField[head.y][head.x]=-78;
                    }
                    counter=counter+1;
                    if(counter==NextVal)
                    {
                        counter=0;
                        size=size+1;
                        srand(time(0));
                        NextVal=rand()%5+1;
                    }
                }
            else
                {
                C=0;
                goto exit;
                }
        }
    if(Key=='d')
        {
            if(ArrField[head.y][head.x+1]!= -78 && head.x<19 && head.x>-1)
                {
                bodyqueue.add(head);
                if(bodyqueue.size()>=size)
                    {

                    ArrField[bodyqueue.front().y][bodyqueue.front().x] = -80;
                    head.x=head.x+1;
                    bodyqueue.remove();
                    ArrField[head.y][head.x]=-78;
                    }
                    else
                    {
                    head.x=head.x+1;
                    ArrField[head.y][head.x]=-78;
                    }
                    counter=counter+1;
                    if(counter==NextVal)
                    {
                        counter=0;
                        size=size+1;
                        srand(time(0));
                        NextVal=rand()%5+1;
                    }

                }
            else
                {
                C=0;
                goto exit;
                }
        }
        system("cls");
gameLoop();

exit:
    if(C==0){
    cout<<"Game Over"<<endl;
char X=0;
while(X!=32){
cout<<"Press space To Terminate"<<endl;
X=getch();
    }
}

}
};

int main()
{
snake<int> A;
A.gameLoop();
}
