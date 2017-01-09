/*

Header file for single linked list class library

*/

  class LinkedList
{
private:
  struct Node
  {
    string airport;
    double lat;
    double lon;
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

LinkedList::LinkedList(string a, double la, double lo)
{

    current = first = new Node;
    first -> airport = a;
    first -> lat = la;
    first -> lon = lo;
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
void LinkedList::addList(string a, double la, double lo)
{
  if(current == NULL)            // empty list
    {
      current = new Node;
      current -> airport = a;
      current -> lat = la;
      current -> lon = lo;
      current -> pNext = NULL;
      first = current;

    }
  else
    {
      Last();
      current -> pNext = new Node;
      current = current -> pNext;
      current -> airport = a;
      current -> lat = la;
      current -> lon = lo;
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

void LinkedList::clear()				//Removes all elements from this list. // check
{
    current = first;
    while (current =! NULL){
        delete current;
        current = current -> pNext;}
}

bool LinkedList::isEmpty()				//Returns true if this list contains no elements.
{
    current = first;
    if(current == NULL)
        return true;
    return false;
}


void LinkedList::set(index, string a, double la, double lo)		//Replaces the element at the specified index in this list with a new value.
{
    current = first;
    for (int i=0; i<=index; i++)
        current = current -> pNext;
      current -> airport = a;
      current -> lat = la;
      current -> lon = lo;
}

void LinkedList::remove(index)			//Removes the element at the specified index from this list.
{
    current = first;
    for (int i=0; i<=index; i++)
        current = current -> pNext;
    delete current;
}

Node LinkedList::get(index)			//Returns the element at the specified index in this list.
{
    current = first;
    for (int i=0; i<=index; i++)
        current = current -> pNext;
    return &current;
}

void LinkedList::exchg(index1, index2)		//Switches the payload data of specified indexex.
{
    current = first;
    for (int i=0; i<=index1; i++)
        current = current -> pNext;
    string a1 = current -> airport;
    double la1 = current -> lat;
    double lo1 = current -> lon;
    current = first;
    for (int i=0; i<=index2; i++)
        current = current -> pNext;
    string a2 = current -> airport;
    double la2 = current -> lat;
    double lo2 = current -> lon;
    current -> airport = a1;
    current -> lat = la1;
    current -> lon = lo1;
    current = first;
    for (int i=0; i<=index1; i++)
        current = current -> pNext;
    current -> airport = a2;
    current -> lat = la2;
    current -> lon = lo2;
}

bool LinkedList::equals(list)				//Returns true if the two lists contain the same elements in the same order.
{
    bool boolean = true;
    current = first;
    list.current = list.first;
    while (current =! NULL && list.current =! NULL){
      if (!(current -> airport == list.current -> airport && current -> lat == list.current -> lat && current -> lon == list.current -> lon))
        boolean = false;
      current = current -> pNext;
      list.current = list.current -> pNext;}
    return boolean;   
}

void LinkedList::insert(index, value)		//Inserts the element into this list before the specified index.
{

}

void LinkedList::mapAll(fn)				//Calls the specified function on each element of the linkedlist in ascending index order.
{
    
}

void LinkedList::subList(start, length)	//Returns a new list containing elements from a sub-range of this list.
{
  
}  
  
string LinkedList::toString()				//Converts the list to a printable string representation.
{

}
