#include <stdio.h>
#include <string.h>

// Function for the bubble sort function
void bubble_sort(char array[], int size);

// Function for the average value of an array
void avg_val_of_array(char array[], int size);

// Function for the median of array
void Find_median(char array[], int size);

// Function for the median of array
void Find_mode(char array[], int size);

int main()
{
  // Declare a variable to hold the size of the array
  int size;
  
  // Prompt the user to enter the size of the array
  printf("Enter the size of the array: ");
  scanf("%d", &size);
  
  // Declare an array to hold the symbols
  char row[size];
  
  // Prompt the user to enter the symbols
  printf("Enter the array: ");
  for (int i = 0; i < size; i++)
  {
    scanf("%s", &row[i]);
  }
  
  // Sort the array using the bubble sort method
  bubble_sort(row, size);

  // Print min and max values
  printf("MIN value is %c \n",row[0]);
  printf("MAX value is %c \n",row[size-1]);

  // Calculate and print the average array value
  avg_val_of_array(row, size);

  // Calculate and print the median
  Find_median(row, size);

  // Calculate and print the mode/s
  Find_mode(row, size);
  
  // Print the sorted symbols array
  for (int i = 0; i < size; i++)
  {
    printf("%c ", row[i]);
  }
  printf("\n");

  // Print the sorted ASCII integer values
  for (int i = 0; i < size; i++)
  {
    printf("%d ", row[i]);
  }
  printf("\n");
  
  return 0;
}

void bubble_sort(char array[], int size)
{
  // Loop through the array, comparing adjacent elements
  // and swapping them if they are out of order
  for (int i = 0; i < size - 1; i++)
  {
    for (int j = 0; j < size - i - 1; j++)
    {
      if (array[j] > array[j + 1])
      {
        // Use a bitwise XOR operation to swap the symbols
        array[j] = array[j] ^ array[j + 1];
        array[j + 1] = array[j] ^ array[j + 1];
        array[j] = array[j] ^ array[j + 1];
      }
    }
  }
}

void avg_val_of_array(char array[], int size)
{
 // Declare a variable to hold the sum of the values in the array
  int sum = 0;

  // Use a for loop to iterate through the array, adding each value to the sum
  for (int i = 0; i < 10; i++) {
    sum += array[i];
  }

  // Calculate the average value 
  int average = sum / size;
  
  // Print the avarage value
  printf("The average value of the array is %c\n", average);
}

// function to calculate the median of the array
void Find_median(char array[] , int n) //n = size
{
    // if number of elements are even
    if(n%2 == 0){
        float median=0;
        median = (array[(n-1)/2] + array[n/2])/2.0;
        printf("The median in a fraction (%.1f), so symbol can not be printed \n",median);
    }
    // if number of elements are odd
    else
     {
        char median=0;
        median = array[n/2];
        printf("The median is : %c\n",median);
     }
  }

  //
    void Find_mode(char str[] , int len)
  {
    int counts[256];    // counts of each symbol in the string
    int max_count = 0;  // maximum count of any symbol
    int max_index = 0;  // index of the most common symbol
    
    // Initialize counts of all symbols to 0
  memset(counts, 0, sizeof(counts));

  // Calculate the count of each symbol in the string
  for (int i = 0; i < len; i++) {
    counts[(int)str[i]]++;
  }

  // Find the maximum count of any symbol
  for (int i = 0; i < 256; i++) {
    if (counts[i] > max_count) {
      max_count = counts[i];
    }
  }

  // Output all common symbols with the maximum count
  printf("The most common symbols in the string are: ");
  for (int i = 0; i < 256; i++) {
    if (counts[i] == max_count) {
      printf("'%c' ", (char)i);
    }
  }
  printf("with a count of %d.\n", max_count);
  }



//https://chat.openai.com/chat
//https://www.includehelp.com/c-programs/calculate-median-of-an-array.aspx
