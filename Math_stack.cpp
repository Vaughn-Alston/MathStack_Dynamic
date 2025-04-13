//Programer Vaughn
//Version 1.0


#include <iostream>
using namespace std;
template <class T>

class DynStack
{
    private:
        struct Node {
            
            T value;
            Node* next;
        };
          Node* top; // point to the top of the stack
  public:

    DynStack()
    {
        top = nullptr;
    }
    
    // function prototypes
    void push(T); 
    void pop(T&);
    bool isEmpty();
    void display();
    T peek();
    bool search(T);

}; // end of class

//Destructor to clean up memory
template <class T>

DynStack<T> :: DynStack() 
{
    T temp;
    while(!isEmpty())
    {
        pop(temp); // Repeatedly pop until stack is empty
    }
}
 // end of destructor



