#include <stdio.h>
#include <conio.h>

char arr[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'}; // arr for the game grid
char p1_name[100], p2_name[100];                             // player's name

void game_name(char *g_name)
{
    printf("\n\t\t\t\t\t\t\t\t\t");
    printf("**Let's Play %s**\n\n\n", g_name); // displays the game name at the top
}

void show_grid()
{
    // draws the grid for playing the game with position number
    printf("\t\t\t\t\t\t\t\t\t      %c  |  %c  |  %c \n", arr[0], arr[1], arr[2]);
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
    printf("\t\t\t\t\t\t\t%s, Your symbol is O \n", p2_name); 

}

void start()
{
    printf("\n\n\t\t\t\t\t\t\t So, Who is going the start the game? Player 1 enter you name: ");
    gets(p1_name);
    printf("\t\t\t\t\t\t\t **Best of luck %[^\n]", p1_name);

    printf("\n\t\t\t\t\t\t\t Player 2 enter you name: ");
    gets(p2_name);
    printf("\t\t\t\t\t\t\t **Best of luck %[^\n]", p2_name);
    system("cls");
    show_grid();
    symbol();
}

void play()
{
    char position;
    static int k = 0;
    if (k == 0)
    {
        printf("\n\t\t\t\t\t\t\t Enter your postion %s: ", p1_name);
        scanf("%c", &position);
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
        scanf("%c", &position);
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

void won()
{
}

int main()
{
    system("cls");            // clearing the screen for gcc/g++ compiler in Linux
    game_name("Tic Tac Toe"); // displays the name of the game
    show_grid();              // draws the grid for playing the game
    game_symbols();   // defines the symbols of the game
    start();
    //play();

    getch();

    return 0;
}