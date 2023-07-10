// 4.Create a structure named STUDENT having members name, roll and marks for 5 subjects. Feed the 
// related information for 5 students. Calculate the total marks of each student. Sort the data in 
// descending order( total marks wise). Display all the information as well as display the student 
// who ranked 3rd among the students.
#include <stdio.h>

struct STUDENT {
  char name[30];
  int roll;
  int marks[5];
  int totalMarks;
};

int main() {
  struct STUDENT students[5];

  for (int i = 0; i < 5; i++) {
      printf("Enter the information for Student %d:\n", i + 1);
      printf("Name: ");
      scanf("%s",students[i].name);
      printf("Roll: ");
      scanf("%d",&students[i].roll);
      printf("Marks for 5 subjects: ");
      students[i].totalMarks=0;
      for (int j=0;j<5;j++){
        scanf("%d", &students[i].marks[j]);
        students[i].totalMarks += students[i].marks[j];
      }
      printf("\n");
  }

// Sorting in descending order using bubble sorting algorithm.
  for(int i=0;i<5-1;i++){
      for(int j=0;j<5-i-1;j++){
          if(students[j].totalMarks<students[j+1].totalMarks){
            struct STUDENT temp=students[j];
            students[j]=students[j+1];
            students[j+1] = temp;
          }
      }
  }

  printf("Student Information (Sorted by Total Marks):\n");
  for (int i =0; i<5;i++){
      printf("Name: %s\n",students[i].name);
      printf("Roll: %d\n",students[i].roll);
      printf("Total Marks: %d\n\n",students[i].totalMarks);
  }

  printf("Student who Ranked 3rd:\n");
  printf("Name: %s\n",students[2].name);
  printf("Roll: %d\n",students[2].roll);
  printf("Total Marks: %d\n",students[2].totalMarks);

  return 0;
}
