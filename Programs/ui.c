#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define SIZE 10          // data size
#define FREQ_SIZE 1000   // upper bound for values

FILE *f;
// input:
//    user enters 10 non-negative integers
// output:
//    report how many times each unique value occured,
//    display values and occurence times in ascending order

void comeback(){
    char s=fgetc(f);
    printf("\n");
    while(s!='\n' && s!=EOF) {
        printf("%c",s);
        s=fgetc(f);
    }
    printf("\n");
}

int main() {

    int inputArray[SIZE] = { 0 };
    int frequency[FREQ_SIZE] = { 0 };
    int diffNums[SIZE] = { 0 };
    int num, counter = 0;
    int error_num = 0;
    f=fopen("comebacks.txt","r");

    printf("----------------------------------------\nThis program reports the frequency of whole non-negative numbers (in the range of 0 to %d) that the user inputs.\nIt also comes with a snarky personality!\n----------------------------------------\n", FREQ_SIZE);// report what the program does
    printf("Please enter 10 numbers\n");// ask to enter 10 numbers

   while(counter < SIZE){
      printf("Please enter element no. %d: ", counter+1);// ask to enter the following number
      if((scanf("%d", &num) == 1) && (getchar() == '\n')){
         if ((num >= 0) && (num <= FREQ_SIZE)){
            inputArray[counter++] = num;
            printf("\nSuccess!\n");// report that number entered successfully
         } else {
            comeback();
            printf("The value has to be between 0 and %d!\n", FREQ_SIZE);// report that value exceeds bounds and has to belong to [0; FREQ-SIZE]
            error_num += 1;
         }
      } else {
            comeback();
            printf("Enter a WHOLE NON-NEGATIVE number.\n");
            error_num += 1;
            // report invalid input, ask to enter whole non-negative number again
            while(getchar() != '\n')
            ;
      }
   }

   // report that data has been entered correctly
    fclose(f);
    printf("\n");
    (error_num > 2) ? printf("\nHere's your data, idiot.\n") : printf("\nData entered successfully, good job!\n");
   // proceeding to computations...
    printf("Calculating...\n");
   for(int i=0; i<SIZE; i++){
        frequency[ inputArray[i] ]++;
   }

   int flag;
   int diffNumsCounter = 0;

   for(int i=0; i<SIZE; i++){
      flag=1;
      for(int j=0; j<i; j++){
         if(inputArray[i] == inputArray[j]){
            flag=0;
         }
      }
      if(flag){
         diffNums[diffNumsCounter] = inputArray[i];
         diffNumsCounter++;
      }
   }

   int temp;

   for(int j=0; j<diffNumsCounter-1; j++){
      for(int i=0; i<diffNumsCounter-j-1; i++){
         if(diffNums[i] > diffNums[i+1]){
            temp = diffNums[i];
            diffNums[i] = diffNums[i+1];
            diffNums[i+1] = temp;
         }
      }
   }

   // report that results will be reported
    printf("Reporting...\n");
    printf("\nHere you are:\n");
    printf("Number            Frequency\n");
   for(int i=0; i<diffNumsCounter; i++){
      if( frequency[ diffNums[i] ] != 0 ){
         printf("%6d....................%d\n", diffNums[i], frequency[diffNums[i]]);
         // report the value of diffNums[i] and the value of frequency[diffNums[i]]
      }
   }
    getch();
   return 0;
}
