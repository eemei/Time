#include <stdlib.h>
#include <stdio.h>
#include "TimeSample.h"
#include <time.h>

#define SIZE 256


int timeFunction(){
  time_t seconds;

  seconds = time (NULL);
  printf ("%ld hours since January 1, 1970", seconds/3600);
  
  return 0;
}

int TimeFunction(){
  char buffer[SIZE];
  time_t curtime;
  struct tm *loctime;

  /* Get the current time. */
  curtime = time (NULL);

  /* Convert it to local time representation. */
  loctime = localtime (&curtime);

  /* Print out the date and time in the standard format. */
  fputs (asctime (loctime), stdout);

  /* Print it out in a nice format. */
  strftime (buffer, SIZE, "Today is %A, %B %d.\n", loctime);
  fputs (buffer, stdout);
  strftime (buffer, SIZE, "The time is %I:%M %p.\n", loctime);
  fputs (buffer, stdout);

  return 0;
}
/* Program to demonstrate time taken by function fun() */ 
// A function that terminates when enter key is pressed
void fun(){
    printf("fun() starts \n");
    printf("Press enter to stop fun \n");
    char ch; 
    ch = getchar();
    while(1)
    {
        if (ch = 27 )
            break;
    }
    printf("fun() ends \n");
}
  // The main program calls fun() and measures time taken by fun()
int timeFun(){
    // Calculate the time taken by fun()
    clock_t t;
    t = clock();
    fun();
    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
 
    printf("fun() took %f seconds to execute \n", time_taken);
    return 0;
}

int diffTime(){

  time_t start,stop;
  start = time(NULL);
  time(&start);
  int iteration, i;
    for (iteration = 1; iteration <= 1; iteration++) {
            for (i = 0; i <= 50; i++) {
                     printf("looping while waiting 60 second..\n");
             }
            stop = time(NULL);
            int diff = difftime(start, stop);
            if (diff % 60 == 0) {
                     printf("60 second passed..\n");}
            }

    return 1;
}
int otherDiffTime(){
	time_t time1,time2;
	char get_input [256];
	double dif_sec;

	time (&time1);
	printf ("Please enter the name of your pet: ");
	gets (get_input);

	time (&time2);
	dif_sec = difftime (time2,time1);
	printf ("It took you %.2lf seconds to type the name.\n", dif_sec );

	return 0;
}

int diffTimeTwo(){
   time_t start_t, end_t;
   double diff_t;

   printf("Starting of the program...\n");
   time(&start_t);

   printf("Sleeping for 1 seconds...\n");
   sleep(1);

   time(&end_t);
   diff_t = difftime(end_t, start_t);

   printf("Execution time = %f\n", diff_t);
   printf("Exiting of the program...\n");

   return 0;
}

void currentTime(){
    time_t t;
    time(&t);
    printf("\n current time is : %s",ctime(&t));
}