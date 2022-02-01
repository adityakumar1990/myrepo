// Q1:-> wap to print a welcome on screen .

print_welcome(){

printf("Welcome !!\n") ;
}

// Q2 :->  wap to print hello on the first line & students on the second line on screen .

print_hello_students(){

printf("Hello\nStudents\n") ;
}

// Q3 :->  wap to print "MySirG" on the screen

print_mysirg()
{
    printf("\"MySirG\"\n");

}

// Q4 :->  wap to print %d on the screen

print_perc_d()
{
    char s = '%' ;
    printf("%cd\n",s);

}

//Q5 :-> print new line character

print_new_line_char()
{
    printf("\\n\n");

}

//Q6 :-> area of circle

circle_area(){
float radious ;
float pi = 3.14 ;

printf("Enter circle radious :-> ") ;
scanf("%f",&radious);
printf("The area of circle is :-> %f \n" , pi * (radious* radious));

}

//Q7 :-> area of rectangle

rectangle_area(){
float l, b ;
printf("Enter rectangle length :-> ") ;
scanf("%f",&l);
printf("Enter rectangle breadth :-> ") ;
scanf("%f",&b);
printf("The area of rectangle is :-> %f \n" ,  (l* b ));

}

//Q8 :-> cube volumne

cube_volume(){
float side ;
printf("Enter cube side measurement  :-> ") ;
scanf("%f",&side);
printf("The cube volumne is :-> %f \n" ,  (side *side * side));

}


//Q9 :-> simple intereset

simple_interest(){
float amount , rate , year ;
printf("Enter amount :-> ") ;
scanf("%f",&amount);
printf("Enter rate :-> ") ;
scanf("%f",&rate);
printf("Enter year :-> ") ;
scanf("%f",&year);
printf("Simple interest is  :-> %f \n" ,  ((amount * rate * year) /100 ));

}


//Q10 :-> calculate average

average(){
float i,k,v ;
printf("Enter first Number :-> ") ;
scanf("%f",&i);
printf("Enter second Number :-> ") ;
scanf("%f",&k);
printf("Enter third Number :-> ") ;
scanf("%f",&v);
printf("Average is   :-> %f \n" ,  ((i+k+v) /3 ));

}

//Entry point for all functions
main(){
print_welcome() ;
print_hello_students() ;
print_mysirg();
print_perc_d();
print_new_line_char();
circle_area();
rectangle_area();
cube_volume();
simple_interest() ;
average();
}
