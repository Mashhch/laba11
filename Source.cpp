#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <stdlib.h>
#include <time.h>



int f1(int n) { n = n + 1;  return n; };
int f2(int n) { n = n + 2;  return n; };
int f3(int n) { n = n + 3; return n; };
int f4(int n) { n = n + 4; return n; };
int f5(int n) { n = n + 5; return n; };
int f6(int n) { n = n + 6; return n; };
int f7(int n) { n = n + 7; return n; };
int f8(int n) { n = n + 8; return n; };
int f9(int n) { n = n + 9; return n; };
int f10(int n) {return n; };
char* f11(char* s1, char s[20])
{
    char m[20] = "AAAAAAAAAAAAAAAAAAAA";
    for (int i = 0; i < 20; i++)
    {
        s[i] = m[i];
    }
    printf("\n f1 строка: ");
    for (int i = 0; i < 20; i++)
        printf("%c", s[i]);
    s1 = s;

    return s1;
}
char* f12(char* s1, char s[20])
{
    printf("\n f2 строка: ");
    char m[20] = "this is a string kk";
    for (int i = 0; i < 20; i++)
    {
        s[i] = m[i];
    }
    for (int i = 0; i < 20; i++)
        printf("%c", s[i]);
    s1 = s;

    return s1;
}
char* f13(char* s1, char s[20])
{
    char m[20] = "This is a string kk";
    for (int i = 0; i < 20; i++)
    {
        s[i] = m[i];
    }
    printf("\n f3 строка: ");
    for (int i = 0; i < 20; i++)
        printf("%c", s[i]);
    s1 = s;

    return s1;
}
char* f14(char* s1, char s[20])
{
    char m[20] = "What can i dooooooo";
    for (int i = 0; i < 20; i++)
    {
        s[i] = m[i];
    }
    printf("\n f4 строка: ");
    for (int i = 0; i < 20; i++)
        printf("%c", s[i]);
    s1 = s;

    return s1;
}
char* f15(char* s1, char s[20])
{
    char m[20] = "i can do nothinggggg";
    for (int i = 0; i < 20; i++)
    {
        s[i] = m[i];
    }
    printf("\n f5 строка: ");
    for (int i = 0; i < 20; i++)
        printf("%c", s[i]);
    s1 = s;

    return s1;
}
char* f16(char* s1, char s[20])
{
    char m[20] = "my english is badddd";
    for (int i = 0; i < 20; i++)
    {
        s[i] = m[i];
    }
    printf("\n f6 строка: ");
    for (int i = 0; i < 20; i++)
        printf("%c", s[i]);
    s1 = s;

    return s1;
}
char* f17(char* s1, char s[20])
{
    char m[20] = "QWERTYUIOPASDFGHJKLZ";
    for (int i = 0; i < 20; i++)
    {
        s[i] = m[i];
    }
    printf("\n f7 строка: ");
    for (int i = 0; i < 20; i++)
        printf("%c", s[i]);
    s1 = s;

    return s1;
}
char* f18(char* s1, char s[20])
{
    char m[20] = "yuiopasdfghjklzxcvbd";
    for (int i = 0; i < 20; i++)
    {
        s[i] = m[i];
    }
    printf("\n f8 строка: ");
    for (int i = 0; i < 20; i++)
        printf("%c", s[i]);
    s1 = s;

    return s1;
}
char* f19(char* s1, char s[20])
{
    char m[20] = "OOuipasdfghjklzxcvbd";
    for (int i = 0; i < 20; i++)
    {
        s[i] = m[i];
    }
    printf("\n f9 строка: ");
    for (int i = 0; i < 20; i++)
        printf("%c", s[i]);
    s1 = s;

    return s1;
}

// массив указателей на функции
void** mass_fint() {

    void** funcs = (void**)malloc(9 * sizeof(void*));
    for (int i = 0; i < 9; i++)
        funcs[i] = (void*)malloc(sizeof(void*));
    funcs[0] = (void*)(&f1);
    funcs[1] = (void*)(&f2);
    funcs[2] = (void*)(&f3);
    funcs[3] = (void*)(&f4);
    funcs[4] = (void*)(&f5);
    funcs[5] = (void*)(&f6);
    funcs[6] = (void*)(&f7);
    funcs[7] = (void*)(&f8);
    funcs[8] = (void*)(&f9);

    return funcs;
}

void** mass_fchar() {

    void** funcs = (void**)malloc(9 * sizeof(void*));
    for (int i = 0; i < 9; i++)
        funcs[i] = (void*)malloc(sizeof(void*));
    funcs[0] = (void*)(&f11);
    funcs[1] = (void*)(&f12);
    funcs[2] = (void*)(&f13);
    funcs[3] = (void*)(&f14);
    funcs[4] = (void*)(&f15);
    funcs[5] = (void*)(&f16);
    funcs[6] = (void*)(&f17);
    funcs[7] = (void*)(&f18);
    funcs[8] = (void*)(&f19);

    return funcs;
}

char* concat(int dlins1, int dlins2, char* s1, char* s2, char* s)
{
    for (int i = 0; i < dlins1; i++)
        s[i] = s1[i];
    for (int j = 0; j < dlins2; j++)
        s[j + dlins1] = s2[j];
    printf("\nf1 Склеенная строка: ");
    for (int i = 0; i < (dlins1+dlins2); i++)
        printf("%c", s[i]);
    return s;
}

typedef struct {
    void** A; // массив
    int N; // колво элементов в массиве
    char tip; //  i - integer, c -char
    char f; // y - это функция, n - нет
    int dlinstr; // длина строк в массиве
    char* s1;
    int dlins1;
    char* s2;
    int dlins2;
    char* s; // склеенная строка
    void** newA; // массив для where
    void*** ukaznewA; // указатель на массив where
    int* ukaznewN; //указатель на размер массива newA
    int newN; // размер массива newA
    void** newmapA; // массив для map
}Arr;

void* F1( void** newmapA, int N, void** A, char tip, char f, int arg, char* s1[9], char s[9][20])
{
    int flag = 0;

    if (tip == 'i' && f == 'y') //int func
    {
        for (int i = 0; i < N; i++)
        {
            (int*)newmapA[i] = ((int(*)(int))A[i])(arg) * (-1); // массив чисел * -1              
        }
    }
    if (tip == 'c' && f == 'n') // stroka
    {
        for (int i = 0; i < N; i++)
        {
            if ('a' <= *((char*)A[i]) && *((char*)A[i]) <= 'z')
                (char*)newmapA[i] = *((char*)A[i]) + 'A' - 'a'; //массив первых букв массива переведенных в заглавные
            else  (char*)newmapA[i] = *((char*)A[i]);
        }
    }

    if (tip == 'c' && f == 'y') // char func
    {
        for (int i = 0; i < N; i++)
        {
            
            if ('a' <= *(((char* (*)(char*, char k[20])) A[i]) (s1[i], s[i])) && *(((char* (*)(char*, char k[20])) A[i]) (s1[i], s[i])) <= 'z')
                (char*)newmapA[i] = *((((char* (*)(char*, char k[20])) A[i])) (s1[i], s[i])) + 'A' - 'a';//массив первых букв строк переведенных в заглавные
            else  (char*)newmapA[i] = *((((char* (*)(char*, char k[20])) A[i])) (s1[i], s[i]));
       
        }
    }
    return newmapA;
}

void** map( void** newmapA, int N, void** A, char tip, char f, int arg, char* s1[9], char s[9][20], void (*F)(void** newmapA, int N, void** A, char tip, char f, int arg, char* s1[9], char s[9][20]))
{
    (*F)( newmapA, N, A, tip, f, arg, s1, s);
    return newmapA;
}

int boolf(int i, void** A, char tip, char f, int arg, char* s1[9], char s[9][20])
{
    int flag = 0;
    if (tip == 'i' && f == 'y') //int func
    {
            if (((int(*)(int))A[i])(arg) %2 == 0)
                flag = 1; // :2
    }
    if (tip == 'c' && f == 'n') // stroka
    {
            if ('A' <= *((char*)A[i]) && *((char*)A[i]) <= 'Z')
                flag = 1;// строка начинается на заглавную
        }

    if (tip == 'c' && f == 'y') // char func
    {
            if ('A' <= *(((char* (*)(char*, char k[20])) A[i]) (s1[i], s[i])) && *(((char* (*)(char*, char k[20])) A[i]) (s1[i], s[i])) <= 'Z')
                flag = 1; // строка начинается на заглавную
    }
    if (flag == 1) return 1; else return 0;
}

void** where(int* newN, void*** newA, int N, void** A, char tip,  char f, int arg, char* s1[9], char s[9][20],int (*F)(int i, void** A, char tip, char f, int arg, char* s1[9], char s[9][20]))
{
    int t;
    for (int i = 0; i<N; i++)
    {
        t = (*F)(i, A, tip, f, arg, s1,s);
        if (t == 1)
            (*newN)++;
    }
    *newA = (void**)malloc((*newN) * sizeof(void*));
    int j = 0;
    for (int i = 0; i < N; i++)
    {
        t = (*F)(i, A, tip, f, arg, s1, s);
        if (t == 1)
        {
            (*newA)[j] = A[i];
            j++;
        }
    }
    return *newA;
}

void ctest( int N, char tip, char f)
{
    printf("\nКоличество элементов в массиве: %d", N);
    if (tip == 'c' && f == 'y')
        printf("\nМассив хранит указатели на функции, возвращающие указатель на char");
    if (tip == 'i' && f == 'y')
        printf("\nМассив хранит указатели на функции, возвращающие указатель на int");
    if (tip == 'c' && f == 'n')
        printf("\nМассив хранит указатели на char");
}

main()
{

    char* s1[9];
    char s[9][20];
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 2; j++)
            s[i][j] = '0';
        s1[i] = &s[i];
    }
    Arr Massiv;
    int (*ukazf2)(int i, void** A, char tip, char f, int arg, char* s1[9], char s[9][20]);
    void (*ukazf1)(int N, void** A, char tip, char f, int arg, char* s1[9], char s[9][20]);
    system("chcp 1251");
    system("cls");
    char SET[] = "QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnm123456789";
    int set_len, arg, k;
    srand((unsigned)time(NULL));
    int deistvie_int = 0;
    char deistvie;
    ukazf1 = &F1;
    ukazf2 = &boolf;
    int flag = 0;
    rewind(stdin);
    while (deistvie_int >= 0 && deistvie_int <= 9)
    {
        arg = 0;
        Massiv.newN = 0;
        Massiv.ukaznewN = &Massiv.newN;
        deistvie_int = 10;
        printf("\n\n0 - Автоматический ввод функций int;\n1 - Автоматический ввод функций char;\n2 - Автоматический ввод строк;\n3 - ручной ввод функций int;\n4 - ручной ввод функций char; \n5 - ручной ввод строк; 6 - concat; \n7 - ctest\nВыход - любая другая клавиша;\n");
        rewind(stdin);
        deistvie = getchar();

        if (deistvie >= '0' && deistvie <= '7')
            deistvie_int = (deistvie - '0');

        if (deistvie_int == 0) //Автоматический ввод функций int
        {
            flag = 1;
            arg = rand() % 15;
            Massiv.tip = 'i';
            Massiv.f = 'y';
            Massiv.N = rand() % 9 + 1;
            Massiv.newmapA = (void**)malloc(Massiv.N * sizeof(int));
            Massiv.newA = (void**)malloc(Massiv.N * sizeof(void*));
            for (int i = 0; i < Massiv.N; i++)
                Massiv.newA[i] = mass_fint()[i];
            Massiv.ukaznewA = &Massiv.newA;
            printf("Колличество элементов в массиве: %d", Massiv.N);
            Massiv.A = (void**)malloc(Massiv.N * sizeof(void*)); // динамический массив указателей на функции 
                   //указатели на функции
            for (int i = 0; i < Massiv.N; i++)
                Massiv.A[i] = mass_fint()[i];
            printf("Значение, подаваемое в функции: %d", arg);
            printf("\nЗначения функций в массиве:");
            for (int i = 0; i < Massiv.N; i++)
            {
                printf("\nf(%d) = ", i);
                printf("%d", ((int(*)(int))Massiv.A[i])(arg));
            }
            Massiv.newA = (void**)malloc(Massiv.N * sizeof(void*));
            printf("\nФункции map и where: \n");
            map(Massiv.newmapA, Massiv.N, Massiv.A, Massiv.tip, Massiv.f, arg, s1, s, *ukazf1);
            printf("\nMAP: массив из значений функций, умноженных на (-1):\n");
            for (int i = 0; i < Massiv.N; i++)
            {
                printf("\nf(%d) = ", i);
                printf("%d", (int*)Massiv.newmapA[i]);
            }
            Massiv.newA = where(Massiv.ukaznewN, Massiv.ukaznewA, Massiv.N, Massiv.A, Massiv.tip, Massiv.f, arg, s1, s, ukazf2);
            printf("\nWHERE: массив из значений функций, кратных 2:\n");
            printf("%d", Massiv.newN);
            for (int i = 0; i < Massiv.newN; i++)
            {
                printf("\nf(%d) = ", i);
                printf("%d", ((int(*)(int))(Massiv.newA)[i])(arg));
            }
        }


        if (deistvie_int == 1)//Автоматический ввод функций char
        {
            flag = 1;
                Massiv.tip= 'c';
                Massiv.f = 'y';
            Massiv.N = rand() % 9 + 1;
            Massiv.newmapA = (void**)malloc(Massiv.N * sizeof(int));
            Massiv.newA = (void**)malloc(Massiv.N * sizeof(void*));
            for (int i = 0; i < Massiv.N; i++)
                Massiv.newA[i] = mass_fint()[i];
            Massiv.ukaznewA = &Massiv.newA;
            printf("Колличество элементов в массиве: %d", Massiv.N);
            Massiv.A = (void**)malloc(Massiv.N * sizeof(void*)); // динамический массив указателей на функции 
                   //указатели на функции
            for (int i = 0; i < Massiv.N; i++)
                Massiv.A[i] = mass_fchar()[i];
            printf("\nЗначения функций в массиве: ");
            for (int i = 0; i < Massiv.N; i++)
                (((char* (*)(char*, char k[20])) Massiv.A[i])) (s1[i], s[i]);

            printf("\nФункции map и where: \n");
                Massiv.newN = 0;
                    printf("\nВызов функций в map"); 
                    Massiv.newmapA = map(Massiv.newmapA, Massiv.N, Massiv.A, Massiv.tip, Massiv.f, arg, s1, s, *ukazf1);
                    printf("\nКонец вызова функций в map\n");
                    printf("\nMAP: массив первых символов строк, переведенных в заглавные : \n");
                    for (int i = 0; i < Massiv.N; i++)
                    {
                        printf("\nf(%d) = ", i+1);
                        printf("%c", (char*)Massiv.newmapA[i]);
                    }
                    printf("\nВызов функций в where");
                    Massiv.newA = where(Massiv.ukaznewN, Massiv.ukaznewA, Massiv.N, Massiv.A, Massiv.tip, Massiv.f, arg, s1, s, ukazf2);
                    printf("\nКонец вызова функций в where\n");
                    printf("\nWhere: массив функций, возвращающих строки, начинающиеся на заглавные буквы:\n");
                    for (int i = 0; i < Massiv.newN; i++)
                    {
                        (((char* (*)(char*, char k[20])) Massiv.newA[i])) (s1[i], s[i]);
                    }
        }

        if (deistvie_int == 2)//Автоматический ввод строк
        {
            flag = 1;
            Massiv.tip = 'c';
            Massiv.f = 'n';
            Massiv.dlinstr = rand() % 33 + 1;
            //массив строк длины dlinstr
            Massiv.N = rand() % 33 + 1;
            Massiv.newmapA = (void**)malloc(Massiv.N * sizeof(int));
            Massiv.newA = (void**)malloc(Massiv.N * sizeof(void*));
            for (int i = 0; i < Massiv.N; i++)
                Massiv.newA[i] = mass_fint()[i];
            Massiv.ukaznewA = &Massiv.newA;
            printf("\nКолличество элементов в массиве: %d", Massiv.N);
            printf("\nДлина строк: %d", Massiv.dlinstr);
            Massiv.A = (void**)malloc(Massiv.N * sizeof(void*)); // динамический массив указателей на строки
            char* a = (char*)malloc((Massiv.N) * Massiv.dlinstr * sizeof(char));
            for (int i = 0; i < Massiv.N; i++)
            {
                for (int j = 0; j < Massiv.dlinstr; j++)
                {
                    srand(j + i * 12 + (unsigned)time(NULL));
                    set_len = strlen(SET);
                    *(a + i * Massiv.dlinstr + j) = SET[rand() % set_len];
                }
                Massiv.A[i] = a + i * Massiv.dlinstr;
            }
            printf("\n Cтроки в динамическом массиве:");
            for (int i = 0; i < Massiv.N; i++)
            {
                printf("\n %d строка:", i);
                for (int j = 0; j < Massiv.dlinstr; j++)
                    printf("%c", *((char*)Massiv.A[i] + j));
            }

            printf("\nФункции map и where: \n");
            Massiv.newN = 0;
            Massiv.newmapA = map(Massiv.newmapA, Massiv.N, Massiv.A, Massiv.tip, Massiv.f, arg, s1, s, *ukazf1);
            printf("\nMAP: массив первых символов строк, переведенных в заглавные : \n");
            for (int i = 0; i < Massiv.N; i++)
            {
                printf("\ns%d - ", i);
                printf("%c", (char*)Massiv.newmapA[i]);
            }
            printf("\nWHERE: массив строк, начинающихся на заглавную букву:\n");
            Massiv.newA = where(Massiv.ukaznewN, Massiv.ukaznewA, Massiv.N, Massiv.A, Massiv.tip, Massiv.f, arg, s1, s, ukazf2);
            for (int i = 0; i < Massiv.newN; i++)
            {
                printf("\n %d строка:", i);
                for (int j = 0; j < Massiv.dlinstr; j++)
                    printf("%c", *((char*)Massiv.newA[i] + j));
            }
            free(a);
        }

        if (deistvie_int == 3)//ручной ввод функиций int
        {
            flag = 1;
            printf("\nВведите число, выступающее в качестве аргумента функций: ");
            scanf("%d", &arg);
            Massiv.tip = 'i';
            Massiv.f = 'y';
            printf("\nВведите количество элементов в массиве(<10): ");
            scanf("%d", &Massiv.N);
            Massiv.newmapA = (void**)malloc(Massiv.N * sizeof(int));
            Massiv.newA = (void**)malloc(Massiv.N * sizeof(void*));
            for (int i = 0; i < Massiv.N; i++)
                Massiv.newA[i] = mass_fint()[i];
            Massiv.ukaznewA = &Massiv.newA;
            Massiv.A = (void**)malloc(Massiv.N * sizeof(void*)); // динамический массив указателей на функции 
                   //указатели на функции
            for (int i = 0; i < Massiv.N; i++)
                Massiv.A[i] = mass_fint()[i];
            printf("\nЗначения функций в массиве: ");
            for (int i = 0; i < Massiv.N; i++)
            {
                printf("\nf(%d) = ", i);
                printf("%d", ((int(*)(int))Massiv.A[i])(arg));
            }

            printf("\nФункции map и where: \n");
                    map(Massiv.newmapA, Massiv.N, Massiv.A, Massiv.tip, Massiv.f, arg, s1, s, *ukazf1);
                    printf("\n\nMAP: массив из значений функций, умноженных на (-1):\n");
                    for (int i = 0; i < Massiv.N; i++)
                    {
                        printf("\nf(%d) = ", i);
                        printf("%d", (int*)Massiv.newmapA[i]);
                    }
                    Massiv.newA = where(Massiv.ukaznewN, Massiv.ukaznewA, Massiv.N, Massiv.A, Massiv.tip, Massiv.f, arg, s1, s, ukazf2);
                    printf("\n\nWHERE: массив из значений функций, кратных 2:\n");
                    for (int i = 0; i < Massiv.newN; i++)
                    {
                        printf("\nf(%d) = ", i);
                        printf("%d", ((int(*)(int))(Massiv.newA)[i])(arg));
                    }
        }

        if (deistvie_int == 4)//Ручной ввод функций char
        {
            flag = 1;
            Massiv.tip = 'c';
            Massiv.f = 'y';
            printf("\nВведите количество элементов в массиве(<10)");
            scanf("%d", &Massiv.N);
            Massiv.newmapA = (void**)malloc(Massiv.N * sizeof(int));
            Massiv.newA = (void**)malloc(Massiv.N * sizeof(void*));
            for (int i = 0; i < Massiv.N; i++)
                Massiv.newA[i] = mass_fint()[i];
            Massiv.ukaznewA = &Massiv.newA;
            Massiv.A = (void**)malloc(Massiv.N * sizeof(void*)); // динамический массив указателей на функции 
                   //указатели на функции
            for (int i = 0; i < Massiv.N; i++)
                Massiv.A[i] = mass_fchar()[i];
            printf("\nЗначения функций в массиве:");
            for (int i = 0; i < Massiv.N; i++)
                (((char* (*)(char*, char k[20])) Massiv.A[i])) (s1[i], s[i]);

            printf("\nФункции map и where: \n");
            Massiv.newN = 0;
            printf("\nВызов функций в map");
            Massiv.newmapA = map(Massiv.newmapA, Massiv.N, Massiv.A, Massiv.tip, Massiv.f, arg, s1, s, *ukazf1);
            printf("\nКонец вызова функций в map\n");
            printf("\nMAP: массив первых символов строк, переведенных в заглавные : \n");
            for (int i = 0; i < Massiv.N; i++)
            {
                printf("\nf(%d) = ", i + 1);
                printf("%c", (char*)Massiv.newmapA[i]);
            }
            printf("\nВызов функций в where");
            Massiv.newA = where(Massiv.ukaznewN, Massiv.ukaznewA, Massiv.N, Massiv.A, Massiv.tip, Massiv.f, arg, s1, s, ukazf2);
            printf("\nКонец вызова функций в where\n");
            printf("\nWhere: массив функций, возвращающих строки, начинающиеся на заглавные буквы:\n");
            for (int i = 0; i < Massiv.newN; i++)
            {
                (((char* (*)(char*, char k[20])) Massiv.newA[i])) (s1[i], s[i]);
            }
        }

        if (deistvie_int == 5) //ручной ввод строк
        {
            flag = 1;
            Massiv.tip = 'c';
            Massiv.f = 'n';
            printf("\nВведите количество элементов в массиве: ");
            rewind(stdin);
            scanf("%d", &Massiv.N);
            printf("\nВведите длину строки: ");
            rewind(stdin);
            scanf("%d", &Massiv.dlinstr);
            rewind(stdin);
            Massiv.newmapA = (void**)malloc(Massiv.N * sizeof(int));
            Massiv.newA = (void**)malloc(Massiv.N * sizeof(void*));
            for (int i = 0; i < Massiv.N; i++)
                Massiv.newA[i] = mass_fint()[i];
            Massiv.ukaznewA = &Massiv.newA;

            Massiv.A = (void**)malloc(Massiv.N * sizeof(void*)); // динамический массив указателей на строки
            char* a = (char*)malloc((Massiv.N) * Massiv.dlinstr * sizeof(char));
            printf("\nВведите  строки из %d символов(в случае переполнения учитываются первые %d введенных символа)", Massiv.dlinstr, Massiv.dlinstr);
            rewind(stdin);
            for (int i = 0; i < Massiv.N; i++)
            {
                printf("\n%d строка:", i);
                for (int j = 0; j < Massiv.dlinstr; j++)
                    scanf("%c", (a + i * Massiv.dlinstr + j));
                rewind(stdin);
            }

            for (int i = 0; i < Massiv.N; i++)
                Massiv.A[i] = a + i * Massiv.dlinstr;
            printf("\n Cтроки в динамическом массиве:");
            for (int i = 0; i < Massiv.N; i++)
            {
                printf("\n %d строка:", i);
                for (int j = 0; j < Massiv.dlinstr; j++)
                    printf("%c", *((char*)Massiv.A[i] + j));
            }


            printf("\nФункции map и where: \n");
            Massiv.newN = 0;
            Massiv.newmapA = map(Massiv.newmapA, Massiv.N, Massiv.A, Massiv.tip, Massiv.f, arg, s1, s, *ukazf1);
            printf("\nMAP: массив первых символов строк, переведенных в заглавные : \n");
            for (int i = 0; i < Massiv.N; i++)
            {
                printf("\ns%d - ", i);
                printf("%c", (char*)Massiv.newmapA[i]);
            }
            printf("\nWHERE: массив строк, начинающихся на заглавную букву:\n");
            Massiv.newA = where(Massiv.ukaznewN, Massiv.ukaznewA, Massiv.N, Massiv.A, Massiv.tip, Massiv.f, arg, s1, s, ukazf2);
            for (int i = 0; i < Massiv.newN; i++)
            {
                printf("\n %d строка:", i);
                for (int j = 0; j < Massiv.dlinstr; j++)
                    printf("%c", *((char*)Massiv.newA[i] + j));
            }
            free(a);
        }

        if (deistvie_int == 6) //concat
        {
            Massiv.dlins1 = rand() % 13 + 1;
            Massiv.dlins2 = rand() % 17 + 1;
            printf("Длина 1 строки: %d;\n Длина 2 строки: %d", Massiv.dlins1, Massiv.dlins2);
            Massiv.s1 = (char*)malloc(Massiv.dlins1 * sizeof(char));
            Massiv.s2 = (char*)malloc(Massiv.dlins2 * sizeof(char));
            Massiv.s = (char*)malloc((Massiv.dlins1 + Massiv.dlins2) * sizeof(char));
            int set_len;
            set_len = strlen(SET);
            srand(Massiv.dlins1);
            printf("\n 1 строка: ");
            for (int i = 0; i < Massiv.dlins1; i++)
            {
                Massiv.s1[i] = SET[(rand() + i) % set_len];
                printf("%c", Massiv.s1[i]);
            }
            srand(Massiv.dlins2);
            printf("\n 2 строка: ");
            for (int i = 0; i < Massiv.dlins2; i++)
            {
                Massiv.s2[i] = SET[(rand() + i) % set_len];
                printf("%c", Massiv.s2[i]);
            }
            concat(Massiv.dlins1, Massiv.dlins2, Massiv.s1, Massiv.s2, Massiv.s);
        }

        if (deistvie_int == 7)
        {
            if (flag == 1)
                ctest(Massiv.N, Massiv.tip, Massiv.f);
            else printf("Вы не заполнили массив");
        }
    }
    free(Massiv.newA);
    free(Massiv.newmapA);
    free(Massiv.A);
}
