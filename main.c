#include <stdio.h>
#include <conio.h>
#include <unistd.h>
#include <stdlib.h>

char arr[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'}; // arr for the game grid
char p1_name[100], p2_name[100];                             // player's name
int end = 1;
int res =0;
int k = 0;
void game_name(char *g_name)
{
    printf("\n\t\t\t\t\t\t\t\t\t");
    printf("**Let's Play %s**\n\n", g_name); // displays the game name at the top
}

void show_grid()
{
    // draws the grid for playing the game with position number
    printf("\n\n\t\t\t\t\t\t\t\t\t      %c  |  %c  |  %c \n", arr[0], arr[1], arr[2]);
    printf("\t\t\t\t\t\t\t\t\t    -----|-----|-----\n");
    printf("\t\t\t\t\t\t\t\t\t      %c  |  %c  |  %c \n", arr[3], arr[4], arr[5]);
    printf("\t\t\t\t\t\t\t\t\t    -----|-----|-----\n");
    printf("\t\t\t\t\t\t\t\t\t      %c  |  %c  |  %c \n", arr[6], arr[7], arr[8]);
}

void game_symbols()
{
    printf("\n\t\t\t\t\t\t\t Player1 Symbol: X");
    printf("\n\t\t\t\t\t\t\t Player2 Symbol: O");
}
void symbol()
{
    printf("\n\t\t\t\t\t\t\t%s, Your symbol is X \n ", p1_name);
    printf("\t\t\t\t\t\t\t%s, Your symbol is O \n\n", p2_name); 

}

void start()
{
    fflush(stdin);
    printf("\n\n\t\t\t\t\t\t\t So, Who is going the start the game? Player 1 enter you name: ");
    gets(p1_name);
    printf("\t\t\t\t\t\t\t **Best of luck %s, Your symbol is X \n", p1_name);

    printf("\n\t\t\t\t\t\t\t Player 2 enter you name: ");
    gets(p2_name);
    printf("\t\t\t\t\t\t\t **Best of luck %s, Your symbol is O \n", p2_name);
    printf("\n\t\t\t\t\t\t\t\t\t      Loading.");
    sleep(1);
    printf(".");
    sleep(1);
    printf(".");
    sleep(1);
    printf(".");
    sleep(1);
    printf(".");
    sleep(1);
    printf(".");
    sleep(2);
    system("cls");
    game_name("Tic Tac Toe");
    symbol();
}

void play()
{
    char position;
    if (k == 0)
    {
        printf("\n\t\t\t\t\t\t\t Enter your postion, %s: ", p1_name);
        scanf(" %c", &position);
        for (int i = 0; i <= 8; i++)
        {
            if (arr[i] == position)
            {
                arr[i] = 'X';
                k = 1;
                break;
            }
        }
    }
    else
    {
        printf("\n\t\t\t\t\t\t\t Enter your postion %s: ", p2_name);
        scanf(" %c", &position);
        for (int i = 0; i <= 8; i++)
        {
            if (arr[i] == position )
            {
                arr[i] = 'O';
                k = 0;
                break;
            }
        }
    }
}

int who_won()
{
    if(arr[0] == 'X' && arr[1] == 'X' && arr[2] == 'X')
        return 1;
    else if(arr[0] == 'X' && arr[3] == 'X' && arr[6] == 'X')
        return 1;
    else if(arr[0] == 'X' && arr[4] == 'X' && arr[8] == 'X')
        return 1;
    else if(arr[1] == 'X' && arr[4] == 'X' && arr[7] == 'X')
        return 1;
    else if(arr[2] == 'X' && arr[5] == 'X' && arr[8] == 'X')
        return 1;
    else if(arr[2] == 'X' && arr[4] == 'X' && arr[6] == 'X')
        return 1;
    else if(arr[3] == 'X' && arr[4] == 'X' && arr[5] == 'X')
        return 1;
    else if(arr[6] == 'X' && arr[7] == 'X' && arr[8] == 'X')
        return 1;

    else if(arr[0] == 'O' && arr[1] == 'O' && arr[2] == 'O')
        return 2;
    else if(arr[0] == 'O' && arr[3] == 'O' && arr[6] == 'O')
        return 2;
    else if(arr[0] == 'O' && arr[4] == 'O' && arr[8] == 'O')
        return 2;
    else if(arr[1] == 'O' && arr[4] == 'O' && arr[7] == 'O')
        return 2;
    else if(arr[2] == 'O' && arr[5] == 'O' && arr[8] == 'O')
        return 2;
    else if(arr[2] == 'O' && arr[4] == 'O' && arr[6] == 'O')
        return 2;
    else if(arr[3] == 'O' && arr[4] == 'O' && arr[5] == 'O')
        return 2;
    else if(arr[6] == 'O' && arr[7] == 'O' && arr[8] == 'O')
        return 2;
    else 
        return 3;

}

void result()
{
    res = who_won();
    if(res == 1)
    {
        system("cls");
        game_name("Tic Tac Toe");
        show_grid();
        printf("\n\t\t\t\t\t\t\tCongrats %s!, you won the game.",p1_name);
        end = 0;
    }
    if (res == 2) {
        system("cls");
        game_name("Tic Tac Toe");
        show_grid();
        printf("\n\t\t\t\t\t\t\tCongrats %s!, you won the game.",p2_name);
        end = 0;
    }
    if(res == 3)
    {
        if((arr[0] == 'X' || arr[0] == 'O') 
        && (arr[1] == 'X' || arr[1] == 'O') 
        && (arr[2] == 'X' || arr[2] == 'O') 
        && (arr[3] == 'X' || arr[3] == 'O') 
        && (arr[4] == 'X' || arr[4] == 'O') 
        && (arr[5] == 'X' || arr[5] == 'O') 
        && (arr[6] == 'X' || arr[6] == 'O') 
        && (arr[7] == 'X' || arr[7] == 'O') 
        && (arr[8] == 'X' || arr[8] == 'O'))
        {
            system("cls");
            game_name("Tic Tac Toe");
            show_grid();
            printf("\n\t\t\t\t\t\t\tOh! tough fight, it's a DRAW....\n");
            end = 0;
        }
        
    }
    
}


int main()
{
    again:
    system("cls");            // clearing the screen for gcc/g++ compiler in Linux
    game_name("Tic Tac Toe"); // displays the name of the game
    show_grid();              // draws the grid for playing the game
    game_symbols();   // defines the symbols of the game
    start();
    
    while(end)
    {
        system("cls");
        game_name("Tic Tac Toe");
        symbol();
        show_grid();
        play();
        result();
    }
    printf("\n\t\t\t\t\t\t\tDo you want to play again? (y/n)");
    char ch;
    scanf(" %c,",&ch);
    if(ch == 'y' || ch == 'Y')
    {
        arr[0] = '1';
        arr[1] = '2';
        arr[2] = '3';
        arr[3] = '4';
        arr[4] = '5';
        arr[5] = '6';
        arr[6] = '7';
        arr[7] = '8';
        arr[8] = '9';
        end = 1;
        res = 0;
        k = 0;
        goto again;
    }
    else
    {
        system("cls");
        game_name("Tic Tac Toe");
        printf("\n\n\t\t\t\t\t\t\t\t    Thanks for playing! See you again.");
    }
    
    sleep(2);

    return 0;
}