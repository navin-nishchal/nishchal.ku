#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int hight = 40, width = 40, flag;
int x, y, Fx, Fy, counttail = 0, gameover, score;
int tailx[100], taily[100];
void draw()
{
    system("cls");
    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < hight; j++)
        {
            if (i == 0 || j == 0 || i == width - 1 || j == hight - 1)
            {
                printf("N");
            }
            else
            {
                if (i == x && j == y)
                {
                    printf("0");
                }
                else if (i == Fx && j == Fy)
                {
                    printf("F");
                }
                else
                {
                    int ch = 0;
                    for (int k = 0; k < counttail; k++)
                    {
                        if (i == tailx[k] && j == taily[k])
                        {
                            printf("o");
                            ch = 1;
                        }
                    }
                    if (ch == 0)
                    {
                        printf(" ");
                    }
                }
            }
        }
        printf("\n");
    }
}
void setup()
{
    gameover = 0;

    x = width / 2;
    y = hight / 2;

label1:
    Fx = rand() % 40;
    if (Fx == 0)
    {
        goto label1;
    }
label2:
    Fy = rand() % 40;
    if (Fy == 0)
    {
        goto label2;
    }

    score = 0;
}
void input()
{
    if (kbhit())
    {
        switch (getch())
        {
        case 'a':
            flag = 1;
            break;
        case 's':
            flag = 2;
            break;
        case 'w':
            flag = 3;
            break;
        case 'z':
            flag = 4;
            break;
        case 'q':
            gameover = 1;
            break;
        }
    }
}
void makelogic()
{
    int i;
    int prevx = tailx[0];
    int prevy = taily[0];
    int prev2x, prev2y;
    tailx[0] = x;
    taily[0] = y;
    for (i = 1; i < counttail; i++)
    {
        prev2x = tailx[i];
        prev2y = taily[i];
        tailx[i] = prevx;
        taily[i] = prevy;
        prevx = prev2x;
        prevy = prev2y;
    }

    switch (flag)
    {
    case 1:
        y--;
        break;
    case 2:
        y++;
        break;
    case 3:
        x--;
        break;
    case 4:
        x++;
        break;

    default:
        break;
    }
    if (x <= 0 || x >= width || y <= 0 || y >= hight)
    {
        gameover = 1;
    }
    for (int i = 0; i <  counttail; i++)
    {
        if (x==tailx[i]&& y==taily[i])
        {
            gameover=1;
        }
        
    }
    
    
    if (x == Fx && y == Fy)
    {
    label3:
        Fx = rand() % 40;
        if (Fx == 0)
        {
            goto label3;
        }
    label4:
        Fy = rand() % 40;
        if (Fy == 0)
        {
            goto label4;
        }
        score += 10;
        counttail++;
    }
}
int main()
{
    setup();
    while (!gameover)
    {
        draw();
        input();
        makelogic();
        printf("score :-%d",score);
        for (int m = 0; m < 10000; m++)
        {
            for (int n = 0; n < 1000; n++)
            {
                    
            }
            
        }
        
    }
    
    

    return 0;
}
