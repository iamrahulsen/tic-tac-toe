#include<stdio.h>
#include<conio.h>

char arr[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'}; // arr for the game grid
void game_name(char *g_name)
{
    printf("\n\t\t\t\t\t\t\t\t\t");
    printf("**Let's Play %s**\n\n\n",g_name);  // displays the game name at the top
}

void show_grid()
{
    printf("\t\t\t\t\t\t\t\t\t    -----|-----|-----\n");
    printf("\t\t\t\t\t\t\t\t\t      %c  |  %c  |  %c \n", arr[0], arr[1], arr[2]);
    printf("\t\t\t\t\t\t\t\t\t    -----|-----|-----\n");
    printf("\t\t\t\t\t\t\t\t\t      %c  |  %c  |  %c \n",arr[3], arr[4], arr[5]);
    printf("\t\t\t\t\t\t\t\t\t    -----|-----|-----\n");
    printf("\t\t\t\t\t\t\t\t\t      %c  |  %c  |  %c \n", arr[6], arr[7], arr[8]);
    printf("\t\t\t\t\t\t\t\t\t    -----|-----|-----\n");

}
int main()
{
    game_name("Tic Tac Toe");
    show_grid();


    return 0;
}