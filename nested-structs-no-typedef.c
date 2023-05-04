// Define type 'struct question' (a question/answer string pair)

struct question {
    char question[40],
         answer[40];
};

// Define type 'struct coursework' to represent a coursework, which has
// a name, worth (%) and a set of 10 questions/answers (array)

struct coursework {
    char name[20];

    int maxPercentage;

    struct question questions[10];
};

int main()
{
    struct coursework cQuiz;

    // Initialise fields in CourseworkType

    strcpy(cQuiz.name, "C Quiz");
    cQuiz.maxPercentage = 5;

    // Initialise first element in question/answer struct

    strcpy(cQuiz.questions[0].question, "Why did the chicken cross the road?");
    strcpy(cQuiz.questions[0].answer, "It was really bored");

    return 0;
}