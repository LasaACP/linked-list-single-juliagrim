/*

Header file for single linked list class library

*/

    
    void clear()	{				//Removes all elements from this list.
        
    }

    equals(list)	{			//Returns true if the two lists contain the same elements in the same order.
        
    }

    get(index)	{			//Returns the element at the specified index in this list.
        
    }

    insert(index, value)		//Inserts the element into this list before the specified index.

//exchg(index1, index2)		//Switches the payload data of specified indexex.

// isEmpty()				//Returns true if this list contains no elements.

// mapAll(fn)				//Calls the specified function on each element of the linkedlist in ascending index order.

     remove(index)	{		//Removes the element at the specified index from this list.
        Node *n = head;
        int ret = n->x;

        head = head->next;
        delete n;
     }
  
// set(index, value)		//Replaces the element at the specified index in this list with a new value.



// subList(start, length)	//Returns a new list containing elements from a sub-range of this list.

// toString()				//Converts the list to a printable string representation.
  
  

  class LinkedList
{
private:
  struct Node
  {
    string name;
    Node *pNext;
  };

  Node *current;
  Node *first;
public:
  LinkedList();
  LinkedList(string);
  void Last();
  void addList(string);
  void displayList();
};


LinkedList::LinkedList()
{
    current = NULL;
    first = NULL;
}

LinkedList::LinkedList(string nm)
{

    current = first = new Node;
    first -> name = nm;
    first -> pNext = NULL;
}
void LinkedList::Last()
{
   if(current != NULL)
     { 
         while(current -> pNext != NULL)
            current = current -> pNext;

     }
}
void LinkedList::addList(string nm)
{
  if(current == NULL)            // empty list
    {
      current = new Node;
      current -> name = nm;
      current -> pNext = NULL;
      first = current;

    }
  else
    {
      Last();
      current -> pNext = new Node;
      current = current -> pNext;
      current -> name = nm;
      current -> pNext = NULL;

    }
}

void LinkedList::displayList()
{
     /* Add code here */
}

int LinkedList::size()	//Returns the number of elements in this list.
{
  current = first; 
  int count;
  if(current != NULL)
     { 
         while(current -> pNext != NULL){
            current = current -> pNext;
            count++;}

     }
}
