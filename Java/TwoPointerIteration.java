
 
class Main{
     

static class Node
{
    int data;
    Node next;
};
 
static Node head_ref = null;
  

static void reverse()
{
    Node prev = null;
    Node current = head_ref;
     
    
    while (current != null)
    {
        
        Node next = current.next;
        current.next = prev;
        prev = current;
        current = next;
    }
    head_ref = prev;
}
  

static void push(int new_data)
{
     
  
    Node new_node = new Node();
  
    new_node.data = new_data;
  
 
    new_node.next = (head_ref);
  
 
    (head_ref) = new_node;
}
  

static void printList()
{
    Node temp = head_ref;
    while (temp != null)
    {
        System.out.print(temp.data + " ");
        temp = temp.next;
    }
}
  

public static void main(String []args)
{
    push(20);
    push(4);
    push(15);
    push(85);
  
    System.out.print("Given linked list\n");
    printList();
    reverse();
    System.out.print("\nReversed Linked list \n");
    printList();
}
}