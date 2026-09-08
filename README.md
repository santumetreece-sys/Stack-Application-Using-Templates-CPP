# Stack-Application-Using-Templates-C++

A menu-driven Stack Application in C++ implemented using a class template, so the same Stack class works with int, char, float, double, and string data types.

Features
Single Stack<T> class template (no per-type duplication)
Fixed capacity of 5 elements per stack (MAX_SIZE)
Supports 5 independent stacks: Integer, Character, Float, Double, String
Push, Pop, and Display operations with proper TOP tracking
Stack Overflow / Underflow handling
Preserves each data type's stack between visits — on re-selecting a data type, user can continue with the old stack or create a new one
Invalid menu input handling with a limit of 3 consecutive invalid attempts before program termination
File
mini_stack.cpp — contains the Stack template class and the full menu-driven program (single file)
Compilation
bash
c++ mini_stack.cpp -o mini_stack
Run
bash
./mini_stack

On Windows (using g++/MinGW):

bash
c++ mini_stack.cpp -o mini_stack.exe
mini_stack.exe
Program Flow
START
  |
  v
MAIN MENU (choose data type / Exit)
  |
  v
STACK SUBMENU (Push / Pop / Display / Main Menu)
  |
  +--> returns to MAIN MENU on option 4
  |
  v
Exit (option 6 on Main Menu)
  |
  v
END
What the Demo Should Cover
Creating and using stacks for all 5 data types
Push operations up to and beyond capacity (Stack Overflow)
Pop operations down to and beyond empty (Stack Underflow)
Display Stack showing elements from TOP to bottom
Re-selecting a data type already in use — both "continue with old stack" and "create new stack" choices
Invalid menu input handling, including program termination after 3 consecutive invalid choices
Notes
MAX_SIZE is defined as 5 via #define MAX_SIZE 5.
Each data type's stack persists in memory even after returning to the Main Menu, so state is retained unless the user explicitly chooses to create a new stack.
