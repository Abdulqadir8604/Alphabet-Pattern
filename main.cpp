#include <iomanip>
#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <windows.h>
#include <chrono>
#include <thread>

using namespace std;

// Below height and width variable can be used
// to create a user-defined sized alphabet's pattern

// Number of lines for the alphabet's pattern
int height = 30;
// Number of character width in each line
int width = (2 * height) - 1;

// Function to find the absolute value
// of a number D
int abs(int d)
{
    return d < 0 ? -1 * d : d;
}

// Sleep function
void sleepcp(int milli) {
    // Cross-platform sleep function
    clock_t end_time;
    end_time = clock() + milli * CLOCKS_PER_SEC/1000;
    while (clock() < end_time) {
        //blank loop for waiting
    }
}

// Function to print the pattern of 'A'
void printA()
{
    int n = width / 2, i, j;
    for (i = 0; i < height; i++) {

        for (j = 0; j <= width; j++) {

            if (j == n || j == (width - n) || (i == height / 2 && j > n && j < (width - n))){
                system("Color 2B");
                printf("a");

                sleepcp(100);


            }
            else{
                printf(" ");
            }

        }
        printf("\n");
        n--;
    }
}

// Function to print the pattern of 'B'
void printB()
{
    int i, j, half = (height / 2);
    for (i = 0; i < height; i++) {
        printf("b");
        for (j = 0; j < width; j++) {
            if ((i == 0 || i == height - 1 || i == half)
                && j < (width - 2))
                printf("b");
            else if (j == (width - 2)
                     && !(i == 0 || i == height - 1
                          || i == half))
                printf("b");
            else
                printf(" ");
        }
        printf("\n");
    }
}

// Function to print the pattern of 'C'
void printC()
{
    int i, j;
    for (i = 0; i < height; i++) {
        printf("c");
        for (j = 0; j < (height - 1); j++) {
            if (i == 0 || i == height - 1)
                printf("c");
            else
                continue;
        }
        printf("\n");
    }
}

// Function to print the pattern of 'D'
void printD()
{
    int i, j;
    for (i = 0; i < height; i++) {
        printf("d");
        for (j = 0; j < height; j++) {
            if ((i == 0 || i == height - 1)
                && j < height - 1)
                printf("d");
            else if (j == height - 1 && i != 0
                     && i != height - 1)
                printf("d");
            else
                printf(" ");
        }
        printf("\n");
    }
}

// Function to print the pattern of 'E'
void printE()
{
    int i, j;
    for (i = 0; i < height; i++) {
        printf("e");
        for (j = 0; j < height; j++) {
            if ((i == 0 || i == height - 1)
                || (i == height / 2
                    && j <= height / 2))
                printf("e");
            else
                continue;
        }
        printf("\n");
    }
}

// Function to print the pattern of 'F'
void printF()
{
    int i, j;
    for (i = 0; i < height; i++) {
        printf("f");
        for (j = 0; j < height; j++) {
            if ((i == 0) || (i == height / 2
                             && j <= height / 2))
                printf("f");
            else
                continue;
        }
        printf("\n");
    }
}

// Function to print the pattern of 'G'
void printG()
{
    int i, j;
    width--;
    for (i = 0; i < height; i++) {
        for (j = 0; j < width; j++) {
            if ((i == 0 || i == height - 1)
                && (j == 0 || j == width - 1))
                printf(" ");
            else if (j == 0)
                printf("g");
            else if (i == 0 && j <= height)
                printf("g");
            else if (i == height / 2
                     && j > height / 2)
                printf("g");
            else if (i > height / 2
                     && j == width - 1)
                printf("g");
            else if (i == height - 1
                     && j < width)
                printf("g");
            else
                printf(" ");
        }
        printf("\n");
    }
}

// Function to print the pattern of 'H'
void printH()
{
    int i, j;
    for (i = 0; i < height; i++) {
        printf("h");
        for (j = 0; j < height; j++) {
            if ((j == height - 1)
                || (i == height / 2))
                printf("h");
            else
                printf(" ");
        }
        printf("\n");
    }
}

// Function to print the pattern of 'I'
void printI()
{
    int i, j;
    for (i = 0; i < height; i++) {
        for (j = 0; j < height; j++) {
            if (i == 0 || i == height - 1)
                printf("i");
            else if (j == height / 2)
                printf("i");
            else
                printf(" ");
        }
        printf("\n");
    }
}

// Function to print the pattern of 'J'
void printJ()
{
    int i, j;
    for (i = 0; i < height; i++) {
        for (j = 0; j < height; j++) {
            if (i == height - 1 && (j > 0
                                    && j < height - 1))
                printf("j");
            else if ((j == height - 1
                      && i != height - 1)
                     || (i > (height / 2) - 1
                         && j == 0 && i != height - 1))
                printf("j");
            else
                printf(" ");
        }
        printf("\n");
    }
}

// Function to print the pattern of 'K'
void printK()
{
    int i, j, half = height / 2, dummy = half;
    for (i = 0; i < height; i++) {
        printf("k");
        for (j = 0; j <= half; j++) {
            if (j == abs(dummy))
                printf("k");
            else
                printf(" ");
        }
        printf("\n");
        dummy--;
    }
}

// Function to print the pattern of 'L'
void printL()
{
    int i, j;
    for (i = 0; i < height; i++) {
        printf("l");
        for (j = 0; j <= height; j++) {
            if (i == height - 1)
                printf("l");
            else
                printf(" ");
        }
        printf("\n");
    }
}

// Function to print the pattern of 'M'
void printM()
{
    int i, j, counter = 0;
    for (i = 0; i < height; i++) {
        printf("m");
        for (j = 0; j <= height; j++) {
            if (j == height)
                printf("m");
            else if (j == counter
                     || j == height - counter - 1)
                printf("m");
            else
                printf(" ");
        }
        if (counter == height / 2) {
            counter = -99999;
        }
        else
            counter++;
        printf("\n");
    }
}

// Function to print the pattern of 'N'
void printN()
{
    int i, j, counter = 0;
    for (i = 0; i < height; i++) {
        printf("n");
        for (j = 0; j <= height; j++) {
            if (j == height)
                printf("n");
            else if (j == counter)
                printf("n");
            else
                printf(" ");
        }
        counter++;
        printf("\n");
    }
}

// Function to print the pattern of 'O'
void printO()
{
    int i, j, space = (height / 3);
    int width = height / 2 + height / 5 + space + space;
    for (i = 0; i < height; i++) {
        for (j = 0; j <= width; j++) {
            if (j == width - abs(space)
                || j == abs(space))
                printf("o");
            else if ((i == 0
                      || i == height - 1)
                     && j > abs(space)
                     && j < width - abs(space))
                printf("o");
            else
                printf(" ");
        }
        if (space != 0
            && i < height / 2) {
            space--;
        }
        else if (i >= (height / 2 + height / 5))
            space--;
        printf("\n");
    }
}

// Function to print the pattern of 'P'
void printP()
{
    int i, j;
    for (i = 0; i < height; i++) {
        printf("p");
        for (j = 0; j < height; j++) {
            if ((i == 0 || i == height / 2)
                && j < height - 1)
                printf("p");
            else if (i < height / 2
                     && j == height - 1 && i != 0)
                printf("p");
            else
                printf(" ");
        }
        printf("\n");
    }
}

// Function to print the pattern of 'Q'
void printQ()
{
    printO();
    int i, j, d = height;
    for (i = 0; i < height / 2; i++) {
        for (j = 0; j <= d; j++) {
            if (j == d)
                printf("q");
            else
                printf(" ");
        }
        printf("\n");
        d++;
    }
}

// Function to print the pattern of 'R'
void printR()
{
    int i, j, half = (height / 2);
    for (i = 0; i < height; i++) {
        printf("r");
        for (j = 0; j < width; j++) {
            if ((i == 0 || i == half)
                && j < (width - 2))
                printf("r");
            else if (j == (width - 2)
                     && !(i == 0 || i == half))
                printf("r");
            else
                printf(" ");
        }
        printf("\n");
    }
}

// Function to print the pattern of 'S'
void printS()
{
    int i, j;
    for (i = 0; i < height; i++) {
        for (j = 0; j < height; j++) {
            if ((i == 0 || i == height / 2
                 || i == height - 1))
                printf("s");
            else if (i < height / 2
                     && j == 0)
                printf("s");
            else if (i > height / 2
                     && j == height - 1)
                printf("s");
            else
                printf(" ");
        }
        printf("\n");
    }
}

// Function to print the pattern of 'T'
void printT()
{
    int i, j;
    for (i = 0; i < height; i++) {
        for (j = 0; j < height; j++) {
            if (i == 0)
                printf("t");
            else if (j == height / 2)
                printf("t");
            else
                printf(" ");
        }
        printf("\n");
    }
}

// Function to print the pattern of 'U'
void printU()
{
    int i, j;
    for (i = 0; i < height; i++) {
        if (i != 0 && i != height - 1)
            printf("u");
        else
            printf(" ");
        for (j = 0; j < height; j++) {
            if (((i == height - 1)
                 && j >= 0
                 && j < height - 1))
                printf("u");
            else if (j == height - 1 && i != 0
                     && i != height - 1)
                printf("u");
            else
                printf(" ");
        }
        printf("\n");
    }
}

// Function to print the pattern of 'V'
void printV()
{
    int i, j, counter = 0;
    for (i = 0; i < height; i++) {
        for (j = 0; j <= width; j++) {
            if (j == counter
                || j == width - counter - 1)
                printf("v");
            else
                printf(" ");
        }
        counter++;
        printf("\n");
    }
}

// Function to print the pattern of 'W'
void printW()
{
    int i, j, counter = height / 2;
    for (i = 0; i < height; i++) {
        printf("w");
        for (j = 0; j <= height; j++) {
            if (j == height)
                printf("w");
            else if ((i >= height / 2)
                     && (j == counter
                         || j == height - counter - 1))
                printf("w");
            else
                printf(" ");
        }
        if (i >= height / 2) {
            counter++;
        }
        printf("\n");
    }
}

// Function to print the pattern of 'X'
void printX()
{
    int i, j, counter = 0;
    for (i = 0; i <= height; i++) {
        for (j = 0; j <= height; j++) {
            if (j == counter
                || j == height - counter)
                printf("x");
            else
                printf(" ");
        }
        counter++;
        printf("\n");
    }
}

// Function to print the pattern of 'Y'
void printY()
{
    int i, j, counter = 0;
    for (i = 0; i < height; i++) {
        for (j = 0; j <= height; j++) {
            if (j == counter
                || j == height - counter
                   && i <= height / 2)
                printf("y");
            else
                printf(" ");
        }
        printf("\n");
        if (i < height / 2)
            counter++;
    }
}

// Function to print the pattern of 'Z'
void printZ()
{
    int i, j, counter = height - 1;
    for (i = 0; i < height; i++) {
        for (j = 0; j < height; j++) {
            if (i == 0 || i == height - 1
                || j == counter)
                printf("z");
            else
                printf(" ");
        }
        counter--;
        printf("\n");
    }
}

// Function print the pattern of the
// alphabets from A to Z
void printPattern(char character)
{
    switch (character) {
        case 'A':
            for(int i=0; i<5; i++){
                printA();
                sleep(1);
                system("cls");
            }
            break;
        case 'B':
            for(int i=0; i<5; i++){
                printB();
                sleep(1);
                system("cls");
            }
            break;
        case 'C':
            for(int i=0; i<5; i++){
                printC();
                sleep(1);
                system("cls");
            }
            break;
        case 'D':
            for(int i=0; i<5; i++){
                printD();
                sleep(1);
                system("cls");
            }
            break;
        case 'E':
            for(int i=0; i<5; i++){
                printE();
                sleep(1);
                system("cls");
            }
            break;
        case 'F':
            for(int i=0; i<5; i++){
                printF();
                sleep(1);
                system("cls");
            }
            break;
        case 'G':
            for(int i=0; i<5; i++){
                printG();
                sleep(1);
                system("cls");
            }
            break;
        case 'H':
            for(int i=0; i<5; i++){
                printH();
                sleep(1);
                system("cls");
            }
            break;
        case 'I':
            for(int i=0; i<5; i++){
                printI();
                sleep(1);
                system("cls");
            }
            break;
        case 'J':
            for(int i=0; i<5; i++){
                printJ();
                sleep(1);
                system("cls");
            }
            break;
        case 'K':
            for(int i=0; i<5; i++){
                printK();
                sleep(1);
                system("cls");
            }
            break;
        case 'L':
            for(int i=0; i<5; i++){
                printL();
                sleep(1);
                system("cls");
            }
            break;
        case 'M':
            for(int i=0; i<5; i++){
                printM();
                sleep(1);
                system("cls");
            }
            break;
        case 'N':
            for(int i=0; i<5; i++){
                printN();
                sleep(1);
                system("cls");
            }
            break;
        case 'O':
            for(int i=0; i<5; i++){
                printO();
                sleep(1);
                system("cls");
            }
            break;
        case 'P':
            for(int i=0; i<5; i++){
                printP();
                sleep(1);
                system("cls");
            }
            break;
        case 'Q':
            for(int i=0; i<5; i++){
                printQ();
                sleep(1);
                system("cls");
            }
            break;
        case 'R':
            for(int i=0; i<5; i++){
                printR();
                sleep(1);
                system("cls");
            }
            break;
        case 'S':
            for(int i=0; i<5; i++){
                printS();
                sleep(1);
                system("cls");
            }
            break;
        case 'T':
            for(int i=0; i<5; i++){
                printT();
                sleep(1);
                system("cls");
            }
            break;
        case 'U':
            for(int i=0; i<5; i++){
                printU();
                sleep(1);
                system("cls");
            }
            break;
        case 'V':
            for(int i=0; i<5; i++){
                printV();
                sleep(1);
                system("cls");
            }
            break;
        case 'W':
            for(int i=0; i<5; i++){
                printW();
                sleep(1);
                system("cls");
            }
            break;
        case 'X':
            for(int i=0; i<5; i++){
                printX();
                sleep(1);
                system("cls");
            }
            break;
        case 'Y':
            for(int i=0; i<5; i++){
                printY();
                sleep(1);
                system("cls");
            }
            break;
        case 'Z':
            for(int i=0; i<5; i++){
                printZ();
                sleep(1);
                system("cls");
            }
            break;
    }
}

// Driver Code
int main()
{
    char character;
    do{
        cout << "Enter letter: ";
        cin >> character;
        printPattern(character);
        cout << "\n";
    }while(character != '`');

    return 0;
}
