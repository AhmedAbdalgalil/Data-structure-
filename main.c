#include <stdio.h>
#include <stdlib.h>


void creat_dynamic_array (int);



void creat_linked_list (int);


    struct student_information
{
   char name[50];
   int Student_ID;
   int Student_date_day;
   int Student_date_month;
   int Student_date_year;
  int Student_score;
};



struct student_information *ptr;






int main()
{
    int n, data_type;

    printf("welcome to our first project in data structure course !\n");


    the_start:
    printf("what type of data structure that you want to use    \n");
    printf("press 1 to use linked list    \n");
    printf("press 2 to use dynamic array    \n");
    scanf("%d", &data_type);

    if(data_type==1)
        {
        creat_linked_list (n);
        }

    else if (data_type==2)
    {
        printf("what is the number of students that you will work with  \n");
    scanf("%d", &n);
    creat_dynamic_array (n);
    }

    else{
        printf("Invalid input !! !\n");
        goto the_start;
    }
}






 void creat_dynamic_array (int n)
 {int operation_number,number_of_student_in_array=0;
ptr = (struct student_information*) calloc(n, sizeof(struct student_information));
printf("array has been created  \n");
operations_2:

    while(1){
    printf("what kind of operations do you want to do? \n");
    printf("press 1 to Insert a new student in the beginning    \n");
    printf("press 2 to Insert a new student at the end    \n");
    printf("press 3 to Insert a new student in the middle    \n");
    printf("press 4 to print  all students data    \n");
    scanf("%d", &operation_number);
if (operation_number==1){

    //Move element to make 1st space free
    for (int i=number_of_student_in_array-1;i>=0;i--)
    {
        ptr[i+1]=ptr[i];
    }
printf("Enter student name \n");
  scanf ("%s", (ptr)->name);
printf("Enter Student_ID \n");
  scanf ("%d", &(ptr )->Student_ID);
printf("Enter Student_date_day \n");
  scanf ("%d", &(ptr )->Student_date_day);
printf("Enter Student_date_month \n");
  scanf ("%d", &(ptr )->Student_date_month);
printf("Enter Student_date_year \n");
  scanf ("%d", &(ptr )->Student_date_year);
printf("Enter Student_score \n");
  scanf ("%d", &(ptr )->Student_score);
//the number of students in the array increased by 1
number_of_student_in_array++ ;
}
else if (operation_number==2){

printf("Enter student name \n");
  scanf ("%s", (ptr+number_of_student_in_array)->name);
printf("Enter Student_ID \n");
  scanf ("%d", &(ptr+number_of_student_in_array )->Student_ID);
printf("Enter Student_date_day \n");
  scanf ("%d", &(ptr+number_of_student_in_array )->Student_date_day);
printf("Enter Student_date_month \n");
  scanf ("%d", &(ptr+number_of_student_in_array )->Student_date_month);
printf("Enter Student_date_year \n");
  scanf ("%d", &(ptr+number_of_student_in_array )->Student_date_year);
printf("Enter Student_score \n");
  scanf ("%d", &(ptr+number_of_student_in_array )->Student_score);


  number_of_student_in_array++;


}
else if (operation_number==3){

         //Move element to make 1st space free
    for (int i=number_of_student_in_array-1;i>= number_of_student_in_array/2;i--)
    {
        ptr[i+1]=ptr[i];
    }
printf("Enter student name \n");
  scanf ("%s", (ptr+number_of_student_in_array/2)->name);
printf("Enter Student_ID \n");
  scanf ("%d", &(ptr+number_of_student_in_array/2 )->Student_ID);
printf("Enter Student_date_day \n");
  scanf ("%d", &(ptr+number_of_student_in_array/2 )->Student_date_day);
printf("Enter Student_date_month \n");
  scanf ("%d", &(ptr+number_of_student_in_array/2 )->Student_date_month);
printf("Enter Student_date_year \n");
  scanf ("%d", &(ptr+number_of_student_in_array/2 )->Student_date_year);
printf("Enter Student_score \n");
  scanf ("%d", &(ptr+number_of_student_in_array/2 )->Student_score);


   number_of_student_in_array++;
}

else if (operation_number==4){

for (int i=0;i<number_of_student_in_array;i++)
    {printf("student %d \n",i);
printf ("student name is %s \n", (ptr+i)->name);
printf ("Student_ID is %d\n", (ptr+i )->Student_ID);
printf ("Student_date_day %d\n", (ptr )->Student_date_day);
printf ("Student_date_month %d\n", (ptr+i )->Student_date_month);
printf ("Student_date_year %d\n", (ptr+i )->Student_date_year);
printf ("Student_score %d\n", (ptr+i )->Student_score);
}
}
else {
        printf("Invalid input !! !\n");

        goto operations_2 ;
}

 }
 }




































 void creat_linked_list (int n)

 {
     // A linked list node
typedef struct node {
    struct student_information val;
    struct node * next;
} node_t;

node_t * head = NULL;
head = (node_t *) malloc(sizeof(node_t));
head->next =NULL;
int operation_number,number_of_student_in_LinkedList=1;
    ////////////////////////////////////////////////



    printf("Add the first student \n");
        printf("Enter student name \n");
    scanf ("%s", head->val.name);
    printf("Enter Student_ID \n");
    scanf ("%d", &(head)->val.Student_ID);
    printf("Enter Student_date_day \n");
    scanf ("%d", &(head)->val.Student_date_day);
    printf("Enter Student_date_month \n");
    scanf ("%d", &(head)->val.Student_date_month);
    printf("Enter Student_date_year \n");
    scanf ("%d", &(head)->val.Student_date_year);
    printf("Enter Student_score \n");
    scanf ("%d", &(head)->val.Student_score);



    ///////////////////////////////////////////////////////
operations_1:
    while(1){

    printf("what kind of operations do you want to do? \n");
    printf("press 1 to Insert a new student in the beginning    \n");
    printf("press 2 to Insert a new student at the end    \n");
    printf("press 3 to Insert a new student in the middle    \n");
    printf("press 4 to print  all students data    \n");
    scanf("%d", &operation_number);

if (operation_number==1){

    node_t * new_node=NULL;
    new_node = (node_t *) malloc(sizeof(node_t));

    //
    printf("Enter student name \n");
    scanf ("%s", new_node->val.name);
    printf("Enter Student_ID \n");
    scanf ("%d", &(new_node)->val.Student_ID);
    printf("Enter Student_date_day \n");
    scanf ("%d", &(new_node)->val.Student_date_day);
    printf("Enter Student_date_month \n");
    scanf ("%d", &(new_node)->val.Student_date_month);
    printf("Enter Student_date_year \n");
    scanf ("%d", &(new_node)->val.Student_date_year);
    printf("Enter Student_score \n");
    scanf ("%d", &(new_node)->val.Student_score);
    //
    number_of_student_in_LinkedList++;

    new_node->next = head;
    head = new_node;



}

else if (operation_number==2){
        node_t * current = head;
    while (current->next != NULL) {
        current = current->next;
    }

        /* now we can add a new variable */
        current->next = (node_t *) malloc(sizeof(node_t));

printf("Enter student name \n");
  scanf ("%s", current->next->val.name);
printf("Enter Student_ID \n");
  scanf ("%d", &(current->next)->val.Student_ID);
printf("Enter Student_date_day \n");
  scanf ("%d", &(current->next)->val.Student_date_day);
printf("Enter Student_date_month \n");
  scanf ("%d", &(current->next)->val.Student_date_month);
printf("Enter Student_date_year \n");
  scanf ("%d", &(current->next)->val.Student_date_year);
printf("Enter Student_score \n");
  scanf ("%d", &(current->next)->val.Student_score);
number_of_student_in_LinkedList++;
current->next->next = NULL;

}
else if (operation_number==3){
//make a new node
  node_t * new_node=NULL;
    new_node = (node_t *) malloc(sizeof(node_t));
    printf("Enter student name \n");
    scanf ("%s", new_node->val.name);
    printf("Enter Student_ID \n");
    scanf ("%d", &(new_node)->val.Student_ID);
    printf("Enter Student_date_day \n");
    scanf ("%d", &(new_node)->val.Student_date_day);
    printf("Enter Student_date_month \n");
    scanf ("%d", &(new_node)->val.Student_date_month);
    printf("Enter Student_date_year \n");
    scanf ("%d", &(new_node)->val.Student_date_year);
    printf("Enter Student_score \n");
    scanf ("%d", &(new_node)->val.Student_score);


    ///////////////////////////////////


    int i=1;
    node_t * current = head;

    while (i<number_of_student_in_LinkedList/2) {
        current = current->next;
        i++;
    }

    new_node->next = current->next;
    current->next = new_node;

number_of_student_in_LinkedList++;

}
else if (operation_number==4){
    node_t * current = head;

    while (current != NULL) {

        //
        printf ("student name is %s \n", current->val.name);
        printf ("Student_ID is %d\n", (current)->val.Student_ID);
        printf ("Student_date_day %d\n", (current)->val.Student_date_day);
        printf ("Student_date_month %d\n", (current)->val.Student_date_month);
        printf ("Student_date_year %d\n", (current)->val.Student_date_year);
        printf ("Student_score %d\n", (current)->val.Student_score);
        //
         current = current->next;

    }




}
else{



        printf("Invalid input !! !\n");

        goto operations_1 ;


}

 }
 }






