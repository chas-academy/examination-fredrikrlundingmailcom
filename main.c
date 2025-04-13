//Write your code in this file
#include <stdio.h>
#include <ctype.h>

int main()
{
    int students = 5;
    int tests = 13;
    char names[students][11];
    int results[students][tests];
    float averages[students];
    int sum = 0;

    for (int i = 0; i < students; i++)
    {
        scanf("%s", names[i]);

        for (int j = 0; j < tests; j++)
        {
            scanf("%d", &results[i][j]);

            sum += results[i][j];
        }

        averages[i] = (float)sum / tests;
        sum = 0;
    }

    float totalAverage = 0.f;

    for (int i = 0; i < students; i++)
    {
        totalAverage += averages[i];
    }

    totalAverage = (float) totalAverage / students;

    int indexOfHighestScore = 0;
    float highestScore = 0;

    for (int i = 0; i < students; i++)
    {
        if (averages[i] > highestScore)
        {
            highestScore = averages[i];
            indexOfHighestScore = i;
        }
    }

    names[indexOfHighestScore][0] = toupper(names[indexOfHighestScore][0]);

    printf("%s\n", names[indexOfHighestScore]);

    for (int i = 0; i < students; i++)
    {
        if (averages[i] < totalAverage)
        {
            names[i][0] = toupper(names[i][0]);
            printf("%s\n", names[i]);
        }
    }

    return 0;
}