# Stack - Linked List

Although a Stack is best implemented using an array due to its fast operations and small memory requirement, we should still be able to implement the Stack using a Linked List.

Using the Singly Linked List implementation, create the SinglyStack class inheriting the Stack class to implement the stack operations using a Singly Linked List.

When trying to return the top element when one does not exist, return 0 instead.

Remember that there are two pairs (or options) in implementing the stack's push and pop operations. You are to utilize the pair of methods that has an O(1) running time in all the stack operations. This is to ensure that the operations are as fast as that of an array implementation. This will be checked manually by the instructor.

### Sample Output 1
Enter op: a 1 </br>
Enter op: a 3
Enter op: a 5
Enter op: a 7
Enter op: a 9
Enter op: r
Removed 9
Enter op: x
Exiting

### Sample Output 2
Enter op: a 2
Enter op: a 4
Enter op: a 6
Enter op: a 8
Enter op: a 10
Enter op: a 12
Enter op: r
Removed 12
Enter op: r
Removed 10
Enter op: r
Removed 8
Enter op: x
Exiting

### Sample Output 3
Enter op: a 9
Enter op: a 7
Enter op: a 5
Enter op: r
Removed 5
Enter op: a 4
Enter op: a 2
Enter op: r
Removed 2
Enter op: r
Removed 4
Enter op: r
Removed 7
Enter op: r
Removed 9
Enter op: a 5
Enter op: a 7
Enter op: a 12
Enter op: r
Removed 12
Enter op: x
Exiting
