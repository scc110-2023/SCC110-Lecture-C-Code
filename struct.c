#include <stdio.h>
#include <string.h>

/* Assessment modelling example using structs in C */

/* Struct representing an assessment */

struct assessment {
    char name[20];

    int max,
        mark;
};

/* Struct representing a student */

struct student {
    int id;

    struct assessment quiz;

    struct assessment cprogram;

    int overallMark;
};

int main()
{
    struct student fred;

    fred.id = 123;

    strcpy(fred.quiz.name, "C Quiz");
    fred.quiz.max = 25;
    fred.quiz.mark = 14;

    strcpy(fred.cprogram.name, "C Program");
    fred.cprogram.max = 40;
    fred.cprogram.mark = 18;

    fred.overallMark = (fred.quiz.mark + fred.cprogram.mark) * 100 /
                       (fred.quiz.max + fred.cprogram.max);

    printf("Fred (id %d) got %d on the %s, and %d on the %s, and %d%% overall\n",
           fred.id, fred.quiz.mark, fred.quiz.name,
           fred.cprogram.mark, fred.cprogram.name,
           fred.overallMark);
}