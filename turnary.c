#include <stdio.h>

int main()
{
  int l1, l2, l3, b1, b2, b3, p1, p2, p3;
  printf("\nEnter Length and Breadth for the First Rectangle: ");
  scanf("%d %d", &l1, &b1);
  printf("\nEnter Length and Breadth for the Second Rectangle: ");
  scanf("%d %d", &l2, &b2);
  printf("\nEnter Length and Breadth for the Third Rectangle: ");
  scanf("%d %d", &l3, &b3);
  p1 = 2 * (l1 + b1);
  p2 = 2 * (l2 + b2);
  p3 = 2 * (l3 + b3);

  p1 > p2 &&p1 > p3 ? printf("First Rectangle has the largest perimetre") : p2 > p1 &&p2 > p3 ? printf("Second Rectangle has the largest perimetre")
                                                                                              : printf("Third rectangle has the largest perimetre");

  return 0;
}