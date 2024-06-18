#include <stdio.h>
#include "draw.h" // project-related declarations

int main() 
{
  puts("Welcome!");

  while (1) { // Infinite while loop

    printf("Enter command (s for square, t for triangle, a for arrow, q to quit): ");
    scanf(" %c", &command);

    // Given the user command, selects which method to call
    switch (command) {
    case 't':
      puts("You selected triangle:");
      print_triangle(5, 7);
      break;
    case 's':
      puts("You selected square:");
      print_square(5, 5);
      break;
    case 'c':
      puts("You selected chars:");
      for (char c = 'A'; c < 'D'; c++)
	print_char_11x16(c);
      break;
    case 'q':
      printf("Bye!");
      goto done; 		/* terminate */
    default:
      printf("Unrecognized option, please try again!\n");
    }
  }

 done: // To exit from program
  return 0;
}
