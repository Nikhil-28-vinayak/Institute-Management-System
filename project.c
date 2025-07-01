#include<stdio.h>
#include<string.h>
typedef struct student{
  char name[100];
  char class[10];
  char section;
  int  rollno[7];
}stu;
typedef struct teacher{
  char name[100];
  char branch[15];
  char class_incharge[10];
  int  mobile_number[10];
}tea;
typedef struct staff{
  char name[100];
  char designation[10];
  int  mobile_number[10];
}sta;
typedef struct feedback{
    char name[100];
    char class[10];
    char section;
    char teacher_name[100];
    char remark;
}fee;
int main(){
    FILE *file;
    printf("\n");
    printf("*****WELCOME TO PCTE GROUP OF INSTITUTE ONLINE PORTAL*****\n");
    printf("\n");
    printf(" Choose any one option!\n");
    printf("A for registratin\n");
    printf("B for students\n");
    printf("C for teachers\n");
    printf("_____________________\n");
    char alphabet,enter;
    printf("Enter: ");
    scanf("%c",&alphabet);
    scanf("%c",&enter);
    if(alphabet=='A'||alphabet=='a'){
    printf(" Choose which type of registration you need !\n");
    printf(".A for Student\n");
    printf(".B for Teacher\n");
    printf(".C for Staff\n");
    printf("_____________________\n");
    char start,enter2;
    scanf("%c",&start);
       if(start=='A'||start=='a'){
        stu student;
        file=fopen("Student_reg.txt","a");
        scanf("%c",&enter2);
        printf("Enter your name: ");
        fgets(student.name,100,stdin);
        printf("class: ");
        scanf("%s",student.class);
        scanf("%c",&enter);
        printf("section: ");
        scanf("%c",&student.section);
        char string[100];
        printf("Roll Number: ");
        scanf("%s",string);
        for(int i=0;i<7;i++){
          student.rollno[i]=string[i]-'0';
        }
        fprintf(file,"\n");
        fprintf(file,"Name : %s",student.name);
        fprintf(file,"Class :%s",student.class);
        fprintf(file,"\n");
        fprintf(file,"Section :%c",student.section);
        fprintf(file,"\n");
        fprintf(file,"Roll no : ");
        for(int i=0;i<7;i++){
         fprintf(file,"%d",student.rollno[i]); 
        }
        fprintf(file,"\n");
        fprintf(file,"_______________");
        printf("_____________________\n");
        printf("Your Registration is Successfully Done\n");
        printf("THANK YOU!\n");
        printf("_____________________\n");
        fclose(file);   
    }
    else if(start=='B'||start=='b'){
      tea teacher;
      char enter;
      file=fopen("Teacher_reg.txt","a");
      scanf("%c",&enter);
      printf("Enter your name: ");
      fgets(teacher.name,100,stdin);
      printf("Enter your branch:");
      scanf("%s",teacher.branch);
      printf("Enter which class inchargeship is allocated to you: ");
      scanf("%s",teacher.class_incharge);
      char mobile_no[10];
      printf("Enter your mobile number: ");
      scanf("%s",mobile_no);
      for(int i=0;i<10;i++){
        teacher.mobile_number[i]=mobile_no[i]-'0';
      }
      fprintf(file,"\n");
      fprintf(file,"Name : %s",teacher.name);
      fprintf(file,"Branch : %s",teacher.branch);
      fprintf(file,"\n");
      fprintf(file,"Class incharge : %s",teacher.class_incharge);
      fprintf(file,"\n");
      fprintf(file,"Mobile no : ");
      for(int i=0;i<10;i++){
        fprintf(file,"%d",teacher.mobile_number[i]);
      }
      fprintf(file,"\n");
      fprintf(file,"_______________");
      printf("_____________________\n");
      printf("your registration is successfully done!\n");
      printf("THANK YOU\n");
      printf("_____________________\n");
      fclose(file);
    }
    else if(start=='C'||start=='c'){
      sta staff;
      file=fopen("Staff_reg.txt","a");
      scanf("%c",&enter);
      printf("enter your name: ");
      fgets(staff.name,100,stdin);
      printf("Enter your designation: ");
      scanf("%s",staff.designation);
      char mobile_no[10];
      printf("enter your mobile number: ");
      scanf("%s",mobile_no);
      for(int i=0;i<10;i++){
        staff.mobile_number[i]=mobile_no[i]-'0';
      }
      fprintf(file,"\n");
      fprintf(file,"Name : %s",staff.name);
      fprintf(file,"Designation : %s",staff.designation);
      fprintf(file,"\n");
      fprintf(file,"Mobile no : ");
      for(int i=0;i<10;i++){
        fprintf(file,"%d",staff.mobile_number[i]);
      }
      fprintf(file,"\n");
      fprintf(file,"_______________");
      fprintf(file,"\n");
      printf("_____________________\n");
      printf("Your registration is successfully done\n");
      printf("THANK YOU!\n");
      printf("_____________________\n");
      fclose(file);
    }
    else{
      printf("_____________________\n");
      printf("Invalid input!\n");
      printf("Please try again later\n");
      printf("_____________________\n");
    }}
    else if(alphabet=='B'||alphabet=='b'){
          char input;
          printf("A for cgpa calculation\n");
          printf("B for feedback\n");
          printf("C for check any update\n");
          printf("_____________________\n");
          printf("Enter: ");
          scanf("%c",&input);
          if(input=='A'||input=='a'){
            int totalsubjects;
            float totalmarks=0.0;
            printf("Enter your total number of subjects:");
            scanf("%d",&totalsubjects);
            printf("Enter your marks!");
            float array[totalsubjects];
            for(int i=0;i<totalsubjects;i++){
            scanf("%f",&array[i]);
              }
            printf("Enter the total marks of a subjects:");
            scanf("%f",&totalmarks);
            totalmarks=totalmarks*totalsubjects;
            float addition=0;
            for(int i=0;i<totalsubjects;i++){
               addition+=array[i];
             }
            addition=addition*100/totalmarks;
            float cgpa=addition/9.5;
            printf("your cgpa is %.1f\n",cgpa);
            printf("_____________________\n");
          }
          else if(input=='B'||input=='b'){
          fee feedback;
          file=fopen("feedback.txt","a");
          getchar();
          printf("Enter your name: ");
          fgets(feedback.name,100,stdin);
          printf("Class: ");
          scanf("%s",feedback.class);
          getchar();
          printf("Section: ");
          scanf("%c",&feedback.section);
          getchar();
          printf("Teacher name: ");
          fgets(feedback.teacher_name,100,stdin);
          printf("Enter G for Good experience!\n");
          printf("Enter A for Average experience!\n");
          printf("Enter B for Bad experience!\n");
          printf("_____________________\n");
          scanf("%c",&feedback.remark);
          getchar();
          fprintf(file,"__________________________\n");
          fprintf(file,"Name : %s",feedback.name);
          fprintf(file,"Class : %s\n",feedback.class);
          fprintf(file,"Section : %c\n",feedback.section);
          fprintf(file,"Teacher Name : %s",feedback.teacher_name);
          fprintf(file,"Remark : %c\n",feedback.remark);
          fprintf(file,"___________________________\n");
          if(feedback.remark=='G'||feedback.remark=='A'||feedback.remark=='B'
          ||feedback.remark=='g'||feedback.remark=='a'||feedback.remark=='b'){
            printf("_____________________\n");
            printf("Your feedback is successfully submitted!\n");
            printf("THANK YOU!\n");
            printf("_____________________\n");
          }
          else if(feedback.remark!='G'||feedback.remark!='A'||feedback.remark!='B'
          ||feedback.remark!='g'||feedback.remark!='a'||feedback.remark!='b'){
          printf("_____________________\n");
          printf("Invalid input!\n");
          printf("Please try again later!\n");
          printf("_____________________\n");
          }
          fclose(file);
          }
          else if(input=='C'||input=='c'){
            file=fopen("update.txt","r");
            char update[100];
            if(update==NULL){
              printf("There is no update!\n");
            }
            else{
            printf("There is a update\n");
            while(fgets(update,sizeof(update),file)){
              printf("%s",update);
            }}
            fclose(file);
           }
           else {
            printf("_____________________\n");
            printf("Invalid input\n");
            printf("Please try again later!\n");
            printf("_____________________\n");
           }
          }
          
    else if(alphabet=='C'||alphabet=='c'){
      char enter2;
      printf("A for Marking Attendance For Teacher\n");
      printf("B for Making any update\n");
      printf("_____________________\n");
      char choice;
      printf("Enter: ");
      scanf("%c",&choice);
      if(choice=='A'||choice=='a'){
        file=fopen("Attendance.txt","a");
        char subject[10];
        printf("Subject: ");
        scanf("%s",subject);
        getchar();
        char class2[10];
        printf("Class: ");
        scanf("%s",class2);
        getchar();
        char date[10];
        printf("Date 00/00/000 :");
        scanf("%s",date);
        getchar();
        int class;
        printf("Total number of student in your class: ");
        scanf("%d",&class);
        getchar();
        char attendance[class];
        printf("Now mark attendance!\n");
        for(int i=0;i<class;i++){
           printf("Roll no %d is: ",i+1);
           scanf(" %c",&attendance[i]);
        }
        getchar();
        fprintf(file,"  ATTENDENCE \n");
        fprintf(file,"Subject - %s\n",subject);
        fprintf(file,"Class - %s\n",class2);
        fprintf(file,"Date - %s \n",date);
        fprintf(file," ____________\n");
        int array[9];
        for(int i=0;i<9;i++){
          array[i]=0;
        }
        for(int i=0,j=0;i<9,j<9;i++,j++){
        fprintf(file,"|  %d%d  |  %c  |\n",array[j],i+1,attendance[i]);}
        for(int i=9;i<class;i++){
        fprintf(file,"|  %d  |  %c  |\n",i+1,attendance[i]);
        }
        fprintf(file,"|____________|\n");
        printf("_____________________\n");
        printf("Attendance is successfully recorded!");
        printf("_____________________\n");
        fclose(file);
      }
      else if(choice=='B'||choice=='b'){
        file=fopen("update.txt","a");
        getchar();
        printf("Now enter the update\n");
        char message[100];
        fgets(message,100,stdin);
        fprintf(file,"- %s",message);
        printf("_____________________\n");
        printf("Your message is successfully updated on the portal\n");
        printf("_____________________\n");
        fclose(file);
      }
      else{
        printf("_____________________\n");
        printf("Invalid output!\n");
        printf("Please try again later!\n");
        printf("_____________________\n");
      }
    }
    else{
      printf("_____________________\n");
      printf("Invalid output!\n");
      printf("Please try again later!\n");
      printf("_____________________\n");
    }
    return 0;
}