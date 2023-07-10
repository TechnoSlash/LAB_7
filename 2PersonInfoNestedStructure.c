//1. Create a structure Date containing three members: int dd, int mm and int yy. Create another 
//   structure Person containing four members: full name, address, telephone and date of birth. 
//   For member date of birth, create an object of structure Date within Person. Using these 
//   structures, write a program to input the record. Then, display the contents in tabular form.
    #include<stdio.h>
    struct date{
      int dd, mm, yy;
    };
    
    struct personData{
      char name[30];
      char address[40];
      long phNumber;
      struct date dob;
    };
    int main(){
      int n;
      printf("Enter the amount of person's data that you want to store.\n");
      scanf("%d",&n);
      struct personData no[n];
      struct date dno[n];
      for(int i=0;i<n;i++){
      printf("Enter the full name,address and phone no of the Person %d.\n",i+1);
      scanf(" %[^\n]%*c%s%ld",no[i].name,no[i].address,&no[i].phNumber);
      printf("Enter the date of birth as well in (day,month,year) in A.D.\n");
      scanf("%d%d%d",&dno[i].dd,&dno[i].mm,&dno[i].yy);
      }   

      for (int i=0;i<n;i++){
        printf("Details of student %d\n",i+1);
        printf("NAME: %s\n",no[i].name);
        printf("ADDRESS: %s\n",no[i].address);
        printf("ROLL NO: %ld\n",no[i].phNumber);
        printf("Date of birth %d: %d, %d\n",dno[i].dd,dno[i].mm,dno[i].yy);
      }
      return 0;
    }