#include <stdlib.h>
#include <stdio.h>
#include "linkedlist.h"

int main() {
  struct List * my_list = init_list();
  struct ListItem * item, * item1, * item2, * item3;
  
  item1 = add_item(my_list, "One");
  item2 = add_item(my_list, "Two");
  item3 = add_item(my_list, "Three");

  // Walk the list
  for (item = my_list->head; item!=NULL; item=item->next) {
    puts(item->item);
  }

  // Remove Items
  rem_item(my_list, item1);
  rem_item(my_list, item2);
  rem_item(my_list, item3);

  // Ensure newly emptied list still works
  item1 = add_item(my_list, "Four");
  item2 = add_item(my_list, "Five");
  item3 = add_item(my_list, "Six");

  print_list(my_list);

  destroy_list(my_list);
}
