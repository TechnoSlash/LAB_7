/* 1.Create a structure Student containing name as char string, roll as integer and address as 
    character string. Read name, roll and address for one person from the user and display the contents in following format:
    NAME: name 
    ADDRESS: address 
    ROLL NO: roll                   */
    #include<stdio.h>
    struct studentData{
      char name[30];
      char address[40];
      int rollNo;
    };
    int main(){
      struct studentData s1;
      printf("Enter name,address and roll no of the student.\n");
      scanf("%s%s%d",s1.name,s1.address,&s1.rollNo);
      printf("NAME: %s\n",s1.name);
      printf("ADDRESS: %s\n",s1.address);
      printf("ROLL NO: %d\n",s1.rollNo);
      return 0;
    }