#include <stdio.h>
#include <conio.h>
#define HIGH 100
#define LOW 1

int main()
{
    int n = 1, ch = HIGH, cl = LOW, chislo = (HIGH + LOW) / 2;
    char c;
    printf("������� ����� �� %d �� %d, � � ������� ������� ����\n\n", cl, ch);
    printf("C���� ���� �������, ");
    printf("b - ���� �����, m - �����\n");
    printf("    ����, ���� ����� %d?\n", chislo);
    while ((c = getchar()) != 'y')
    {
        if (c != '\n');
        {
            if (c == 'm')
            {
                ++n;
                ch = chislo - 1;
                chislo = (ch + cl) / 2;
                printf("��������� ����. ���� %d?\n", chislo);
            }
            else
             if (c == 'b')
             {
                ++n;
                cl = chislo + 1;
                chislo = (ch + cl) / 2;
                printf("�������� ����, ���� �� %d?\n", chislo);
             }
             else printf("ϳ�����, ����� b �� ����� m?\n");
        }
    }
    printf("� ������� �� %d �����!! \n", n);
    printf("\nCreate by Yevhenii Sirenko");
    getch();
}

