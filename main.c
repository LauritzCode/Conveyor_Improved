#include <stdio.h>

int main(void) {
  int motorAmount = 0;
  int packageWeight = 0;
  float packageHandle = 5.6;

  printf("Welcome to our stress test system.\nHow many motors are involved "
         "today?\nMotor amount: ");
  scanf("%d", &motorAmount);
  printf("Lovely. And how much weight accumulates from the packages?\nTotal "
         "weight from the packages: ");
  scanf("%d", &packageWeight);

  double weightCapacity = motorAmount * packageHandle;
  if (packageWeight <= weightCapacity) {
    printf("The conveyor belt can carry the packages.");
  } else {
    printf("The conveyor belt can't not carry the packages.");
  }
}
