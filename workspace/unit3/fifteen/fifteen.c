// Implements Game of Fifteen (generalized to d x d)

#define _XOPEN_SOURCE 500

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// Constants
#define DIM_MIN 3
#define DIM_MAX 9
#define COLOR "\033[32m"

// Board
int board[DIM_MAX][DIM_MAX];

// Dimensions
int d;

// Saved locations of the blank tile
int blank_j;
int blank_col;

// Prototypes
void clear(void);
void greet(void);
void init(void);
void draw(void);
bool move(int tile);
bool won(void);
void swap(int *a, int *b);
void print_grid_j(int d);
void print_tile(int tile);

int main(int argc, string argv[])
{
    // Ensure proper usage
    if (argc != 2)
    {
        printf("Usage: fifteen d\n");
        return 1;
    }

    // Ensure valid dimensions
    d = atoi(argv[1]);
    if (d < DIM_MIN || d > DIM_MAX)
    {
        printf("Board must be between %i x %i and %i x %i, inclusive.\n",
            DIM_MIN, DIM_MIN, DIM_MAX, DIM_MAX);
        return 2;
    }

    // Open log
    FILE *file = fopen("log.txt", "w");
    if (file == NULL)
    {
        return 3;
    }

    // Greet user with instructions
    greet();

    // Initialize the board
    init();

    // Accept moves until game is won
    while (true)
    {
        // Clear the screen
        clear();

        // Draw the current state of the board
        draw();

        // Log the current state of the board (for testing)
        for (int i = 0; i < d; i++)
        {
            for (int j = 0; j < d; j++)
            {
                fprintf(file, "%i", board[i][j]);
                if (j < d - 1)
                {
                    fprintf(file, "|");
                }
            }
            fprintf(file, "\n");
        }
        fflush(file);

        // Check for win
        if (won())
        {
            printf("ftw!\n");
            break;
        }

        // Prompt for move
        printf("Tile to move: ");
        int tile = get_int();

        // Quit if user inputs 0 (for testing)
        if (tile == 0)
        {
            break;
        }

        // Log move (for testing)
        fprintf(file, "%i\n", tile);
        fflush(file);

        // Move if possible, else report illegality
        if (!move(tile))
        {
            printf("\nIllegal move.\n");
            usleep(500000);
        }

        // Sleep thread for animation's sake
        usleep(50000);
    }

    // Close log
    fclose(file);

    // Success
    return 0;
}

// Clears screen using ANSI escape sequences
void clear(void)
{
    printf("\033[2J");
    printf("\033[%d;%dH", 0, 0);
}

// Greets player
void greet(void)
{
    clear();
    printf("WELCOME TO GAME OF FIFTEEN\n");
    usleep(2000000);
}

// Initializes the game's board with tiles numbered 1 through d*d - 1
// (i.e., fills 2D array with values but does not actually print them)
void init(void)
{
int dim = d; //Creates a temporary variable used to store board dimensions
int loops = 0;
int total = (dim*dim) - 1; //Total numbers needed to be filled in the board
for (int j = 0; j < dim; j++){
for (int i = 0; i < dim; i++){
    board[j][i] = total - loops; //Sets the number on the board
loops++;
}
board[d-1][d-1] = '_';

    if (d % 2 == 0)
    {
        board[d-1][d-2] = 2;
        board[d-1][d-3] = 1;
    }
}

}

// Prints the board in its current state
void draw(void)
{
for(int j = 0; j < d; j++){
    for (int i = 0; i < d; i++){
        if(board[j][i] == 0){
            printf("  _");
        }
        else{
            printf("%3i",board[j][i]);
        }
    }
     printf("\n\n");
}
}

// If tile borders empty space, moves tile and returns true, else returns false
bool move(int tile)
{
 for(int j = 0; j < d; j++)
    {
        for(int i = 0; i < d; i++)
        {
            if (board[j][i] == tile)
            {
                if (board[j-1][i] == 95)
                {
                    board[j-1][i] = tile;
                    board[j][i] = 95;
                    return true;
                }

                else if (board[j][i-1] == 95)
                {
                    board[j][i-1] = tile;
                    board[j][i] = 95;
                    return true;
                }

                else if (board[j][i+1] == 95)
                {
                    board[j][i+1] = tile;
                    board[j][i] = 95;
                    return true;
                }

                else if (board[j+1][i] == 95)
                {
                    board[j+1][i] = tile;
                    board[j][i] = 95;
                    return true;
                }
                return false;
}}}
return 0;
}

// Returns true if game is won (i.e., board is in winning configuration), else false
bool won(void)
{
if(d==3){
if(board[0][0] == 1 && board[0][1] == 2 && board[0][2] == 3 && board[1][0] == 4 && board[1][1] == 5 &&  board[1][2] == 6 &&  board[2][0] == 7 && board[2][1] == 8){
return true;
}
}
else if(d==4){
if(board[0][0] == 15 && board[0][1] == 14 && board[0][2] == 13 && board[0][3] == 12 && board[1][0] == 11 && board[1][1] == 10 &&  board[1][2] == 9 && board[1][3] == 8 && board[2][0] == 7 && board[2][1] == 6 && board[2][2] == 5 && board[2][3] == 4 && board[3][0] == 3  && board[3][1] == 2  && board[3][2] == 1){
return true;
}
}
else{
return false;
}
return 0;
}
