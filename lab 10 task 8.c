#include <stdio.h>
#include <string.h>

int main() {

    char students[4][20] = {"Alice", "Bob", "Charlie", "Diana"};

    char courses[4][5][20] = {
        {"Math", "Physics", "English", "", ""},
        {"Biology", "Chemistry", "Math", "History", ""},
        {"Physics", "ComputerScience", "", "", ""},
        {"Math", "Physics", "Chemistry", "Biology", "English"}
    };

    int courseCount[4] = {3, 4, 2, 5};

    printf("Students and their registered courses:\n\n");
    for(int i=0;i<4;i++){
        printf("%s: ", students[i]);
        for(int j=0;j<courseCount[i];j++){
            printf("%s ", courses[i][j]);
        }
        printf("\n");
    }

    char search[20];
    printf("\nEnter course to search for: ");
    scanf("%s", search);

    printf("\nStudents taking %s:\n", search);
    for(int i=0;i<4;i++){
        for(int j=0;j<courseCount[i];j++){
            if(strcmp(courses[i][j], search)==0){
                printf("%s\n", students[i]);
                break;
            }
        }
    }

    printf("\nOverloaded students (more than 3 courses):\n");
    for(int i=0;i<4;i++){
        if(courseCount[i] > 3){
            printf("%s\n", students[i]);
        }
    }

    return 0;
}
