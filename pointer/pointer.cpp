#include<bits/stdc++.h>
using namespace std;

int main(){
    int num = 33;
    int *ptr = &num;
    cout<<"&num is"<<&num<<endl;
    cout<<"Memory address of variable  "<<num <<" is : "<<ptr<<endl;
    cout<<"Value stored in number is : "<<*ptr<<endl;
    int **ptr1 = &ptr;
    cout<<"Memory address of pointer is : "<<&ptr<<endl;
    cout<<"Pointer pointing to pointer is : "<<**ptr1<<endl;
    return 0;



    
/* Here’s a clear **comparison table** to differentiate between **reference variables** and **pointers** in C++:

### **1. Syntax**
| **Aspect**           | **Reference Variable**                | **Pointer**                       |
|-----------------------|---------------------------------------|------------------------------------|
| Declaration           | `int& ref = x;`                     | `int* ptr = &x;`                  |
| Dereferencing         | Not required (acts as alias)         | Use `*` to dereference (`*ptr`)   |

---

### **2. Initialization**
| **Aspect**           | **Reference Variable**                | **Pointer**                       |
|-----------------------|---------------------------------------|------------------------------------|
| Initialization        | Must be initialized at declaration   | Can be initialized later          |
| Changing Target       | Cannot be changed after binding      | Can point to different variables  |

---

### **3. Null Assignment**
| **Aspect**           | **Reference Variable**                | **Pointer**                       |
|-----------------------|---------------------------------------|------------------------------------|
| Null Assignment       | Cannot be null                       | Can be null (`int* ptr = nullptr;`)|

---

### **4. Memory and Address**
| **Aspect**           | **Reference Variable**                | **Pointer**                       |
|-----------------------|---------------------------------------|------------------------------------|
| Own Memory Address    | Shares the same address as the original variable | Has its own memory to store the address it points to |
| Access to Variable    | Direct access, no extra memory lookup| Indirect access, via memory address|

---

### **5. Usage and Behavior**
| **Aspect**           | **Reference Variable**                | **Pointer**                       |
|-----------------------|---------------------------------------|------------------------------------|
| Dereferencing         | Not required, direct access          | Use `*` to access value           |
| Use Cases             | - Pass-by-reference in functions     | - Dynamic memory allocation       |
|                       | - Operator overloading               | - Data structures (e.g., linked lists) |
| Rebinding             | Fixed to one variable                | Can rebind to different variables |

---

### **6. Code Example Comparison**
| **Reference Variable**                              | **Pointer**                              |
|----------------------------------------------------|------------------------------------------|
| ```cpp                                            | ```cpp                                   |
| int x = 10;                                       | int x = 10;                              |
| int& ref = x;     // ref binds to x               | int* ptr = &x;   // ptr points to x      |
| ref = 20;          // Changes x to 20             | *ptr = 30;        // Changes x to 30     |
| cout << x;         // Outputs 20                  | cout << x;         // Outputs 30         |
| ```                                                | ```                                      |

This table-based clarification provides a concise differentiation between reference variables and pointers. Let me know if you need further explanation!*/
}