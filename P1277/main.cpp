#include <stdio.h>
#include <string.h>

int main()
{
    int h, m;
    char H[20], M[20];
    scanf("%d%d", &h, &m);

    //处理小时
    if (h == 0)
    {
        strcpy(H, "zero");
    }
    else
    {
        switch (h)
        {
        case 1:
            strcpy(H, "one");
            break;
        case 2:
            strcpy(H, "two");
            break;
        case 3:
            strcpy(H, "three");
            break;
        case 4:
            strcpy(H, "four");
            break;
        case 5:
            strcpy(H, "five");
            break;
        case 6:
            strcpy(H, "six");
            break;
        case 7:
            strcpy(H, "seven");
            break;
        case 8:
            strcpy(H, "eight");
            break;
        case 9:
            strcpy(H, "nine");
            break;
        case 10:
            strcpy(H, "ten");
            break;
        case 11:
            strcpy(H, "eleven");
            break;
        case 12:
            strcpy(H, "twelve");
            break;
        case 13:
            strcpy(H, "thirteen");
            break;
        case 14:
            strcpy(H, "fourteen");
            break;
        case 15:
            strcpy(H, "fifteen");
            break;
        case 16:
            strcpy(H, "sixteen");
            break;
        case 17:
            strcpy(H, "seventeen");
            break;
        case 18:
            strcpy(H, "eighteen");
            break;
        case 19:
            strcpy(H, "nineteen");
            break;
        case 20:
            strcpy(H, "twenty");
            break;
        case 21:
            strcpy(H, "twenty one");
            break;
        case 22:
            strcpy(H, "twenty two");
            break;
        case 23:
            strcpy(H, "twenty three");
            break;
        }
    }


    if (m == 0)
    {
        strcpy(M, "o'clock");
    }
    else
    {
        switch (m)
        {
        case 1:
            strcpy(M, "one");
            break;
        case 2:
            strcpy(M, "two");
            break;
        case 3:
            strcpy(M, "three");
            break;
        case 4:
            strcpy(M, "four");
            break;
        case 5:
            strcpy(M, "five");
            break;
        case 6:
            strcpy(M, "six");
            break;
        case 7:
            strcpy(M, "seven");
            break;
        case 8:
            strcpy(M, "eight");
            break;
        case 9:
            strcpy(M, "nine");
            break;
        case 10:
            strcpy(M, "ten");
            break;
        case 11:
            strcpy(M, "eleven");
            break;
        case 12:
            strcpy(M, "twelve");
            break;
        case 13:
            strcpy(M, "thirteen");
            break;
        case 14:
            strcpy(M, "fourteen");
            break;
        case 15:
            strcpy(M, "fifteen");
            break;
        case 16:
            strcpy(M, "sixteen");
            break;
        case 17:
            strcpy(M, "seventeen");
            break;
        case 18:
            strcpy(M, "eighteen");
            break;
        case 19:
            strcpy(M, "nineteen");
            break;
        case 20:
            strcpy(M, "twenty");
            break;
        case 21:
            strcpy(M, "twenty one");
            break;
        case 22:
            strcpy(M, "twenty two");
            break;
        case 23:
            strcpy(M, "twenty three");
            break;
        case 24:
            strcpy(M, "twenty four");
            break;
        case 25:
            strcpy(M, "twenty five");
            break;
        case 26:
            strcpy(M, "twenty six");
            break;
        case 27:
            strcpy(M, "twenty seven");
            break;
        case 28:
            strcpy(M, "twenty eight");
            break;
        case 29:
            strcpy(M, "twenty nine");
            break;
        case 30:
            strcpy(M, "thirty");
            break;
        case 31:
            strcpy(M, "thirty one");
            break;
        case 32:
            strcpy(M, "thirty two");
            break;
        case 33:
            strcpy(M, "thirty three");
            break;
        case 34:
            strcpy(M, "thirty four");
            break;
        case 35:
            strcpy(M, "thirty five");
            break;
        case 36:
            strcpy(M, "thirty six");
            break;
        case 37:
            strcpy(M, "thirty seven");
            break;
        case 38:
            strcpy(M, "thirty eight");
            break;
        case 39:
            strcpy(M, "thirty nine");
            break;
        case 40:
            strcpy(M, "forty");
            break;
        case 41:
            strcpy(M, "forty one");
            break;
        case 42:
            strcpy(M, "forty two");
            break;
        case 43:
            strcpy(M, "forty three");
            break;
        case 44:
            strcpy(M, "forty four");
            break;
        case 45:
            strcpy(M, "forty five");
            break;
        case 46:
            strcpy(M, "forty six");
            break;
        case 47:
            strcpy(M, "forty seven");
            break;
        case 48:
            strcpy(M, "forty eight");
            break;
        case 49:
            strcpy(M, "forty nine");
            break;
        case 50:
            strcpy(M, "fifty");
            break;
        case 51:
            strcpy(M, "fifty one");
            break;
        case 52:
            strcpy(M, "fifty two");
            break;
        case 53:
            strcpy(M, "fifty three");
            break;
        case 54:
            strcpy(M, "fifty four");
            break;
        case 55:
            strcpy(M, "fifty five");
            break;
        case 56:
            strcpy(M, "fifty six");
            break;
        case 57:
            strcpy(M, "fifty seven");
            break;
        case 58:
            strcpy(M, "fifty eight");
            break;
        case 59:
            strcpy(M, "fifty nine");
            break;
        }
    }

    printf("%s %s", H, M);
    return 0;
}
