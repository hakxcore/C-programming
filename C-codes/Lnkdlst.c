#include <stdio.h>
#include <stdlib.h>

typedef struct SinglyLinkedListInt {
  int value;
  struct SinglyLinkedListInt *next;
} SinglyLinkedListInt;

SinglyLinkedListInt *add_two_numbers(SinglyLinkedListInt *l1, SinglyLinkedListInt *l2) {
  SinglyLinkedListInt root = { .value = 0, .next = NULL };
  SinglyLinkedListInt *current = &root;

  int carry = 0;
  while (l1 || l2 || carry) {
    int a = l1 ? l1->value : 0;
    int b = l2 ? l2->value : 0;
    int value = carry + a + b;

    SinglyLinkedListInt *next = malloc(sizeof(SinglyLinkedListInt));
    next->value = value % 10;
    next->next = NULL;
    current->next = next;

    carry = value / 10;
    l1 = l1 ? l1->next : NULL;
    l2 = l2 ? l2->next : NULL;
    current = current->next;
  }

  return root.next;
}

int main() {
  SinglyLinkedListInt l13 = { .value = 3, .next = NULL };
  SinglyLinkedListInt l12 = { .value = 4, .next = &l13 };
  SinglyLinkedListInt l11 = { .value = 2, .next = &l12 };

  SinglyLinkedListInt l23 = { .value = 4, .next = NULL };
  SinglyLinkedListInt l22 = { .value = 6, .next = &l23 };
  SinglyLinkedListInt l21 = { .value = 5, .next = &l22 };

  SinglyLinkedListInt *result = add_two_numbers(&l11, &l21);

  while (result) {
    printf("%d ", result->value);
    result = result->next;
  }
  printf("\n");

  return 0;
}
