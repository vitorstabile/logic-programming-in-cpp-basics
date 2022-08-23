<h1 align="center"> Logic Programming with C++ </h1>

# Content

1. [Chapter 1: The C++ Language](#chapter1)
    - [Chapter 1 - Part 1: First Program in C++](#chapter1part1)
    - [Chapter 1 - Part 2: Variables Types in C++](#chapter1part2)
    - [Chapter 1 - Part 3: Data Output in C++](#chapter1part3)
    - [Chapter 1 - Part 4: Data Processing in C++](#chapter1part4)
    - [Chapter 1 - Part 5: Data Casting in C++](#chapter1part5)
    - [Chapter 1 - Part 6: Data Input in C++](#chapter1part6)
    - [Chapter 1 - Part 7: Conditional Statement in C++](#chapter1part7)
    - [Chapter 1 - Part 8: While Statement in C++](#chapter1part8)
    - [Chapter 1 - Part 9: For Statement in C++](#chapter1part9)
    - [Chapter 1 - Part 10: Vectors in C++](#chapter1part10)
    - [Chapter 1 - Part 11: Matrix in C++](#chapter1part11)
2. [Chapter 2: Object Oriented](#chapter2)
    - [Chapter 2 - Part 1: Abstraction](#chapter2part1)
    - [Chapter 2 - Part 2: Encapsulation](#chapter2part2)
    - [Chapter 2 - Part 3: Inheritance](#chapter2part3)
    - [Chapter 2 - Part 4: Polymorphism](#chapter2part4)
  
## <a name="chapter1"></a>Chapter 1: The C++ Language

#### <a name="chapter1part1"></a>Chapter 1 - Part 1: First Program in C++

```cpp

#include <iostream>

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    return 0;
}

```

#### <a name="chapter1part2"></a>Chapter 1 - Part 2: Variables Types in C++

```cpp

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    int age;
    double salary, height;
    char genre;
    string name;

    age = 20;
    salary = 5800.5;
    height = 1.63;
    genre = 'F';
    name = "Maria Silva";

    cout << fixed << setprecision(2);
    cout << "AGE = " << age << endl;
    cout << "SALARY = " << salary << endl;
    cout << "HEIGHT = " << height << endl;
    cout << "GENRE = " << genre << endl;
    cout << "NAME = " << name << endl;

    return 0;
}

```

#### <a name="chapter1part3"></a>Chapter 1 - Part 3: Data Output in C++

```cpp

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    cout << "Good Morning";
    cout << "Good Night";

    cout<<"\n";

    cout << "Good Morning" << endl;
    cout << "Good Night" << endl;

    int x, y;
    x = 10;
    y = 20;
    cout << x << endl;
    cout << y << endl;

    double z;
    z = 2.3456;
    cout << fixed << setprecision(2) << z << endl;

    int age;
    double salary;
    string name;
    char genre;

    age = 32;
    salary = 4560.9;
    name = "Maria Silva";
    genre = 'F';

    cout << fixed << setprecision(2);
    cout << "The employee " << name << ", genre "
    << genre << ", earn " << salary << " and have "
    << age << " years old" << endl;

    return 0;
}

```

#### <a name="chapter1part4"></a>Chapter 1 - Part 4: Data Processing in C++

```cpp

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    int x1, y1;
    x1 = 5;
    y1 = 2 * x1;
    cout << x1 << endl;
    cout << y1 << endl;

    int x2;
    double y2;
    x2 = 5;
    y2 = 2 * x2;
    cout << x2 << endl;
    cout << fixed << setprecision(1) << y2 << endl;

    double b1, b2, h, area;
    b1 = 6.0;
    b2 = 8.0;
    h = 5.0;
    area = (b1 + b2) / 2.0 * h;
    cout << area << endl;

    int a, b, resultado;
    a = 5;
    b = 2;
    resultado = a / b;
    cout << resultado << endl;

    return 0;
}

```

#### <a name="chapter1part5"></a>Chapter 1 - Part 5: Data Casting in C++

```cpp

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    double a;
    int b;
    a = 5.0;
    b = (int) a;
    cout << b << endl;

    return 0;
}

```

#### <a name="chapter1part6"></a>Chapter 1 - Part 6: Data Input in C++

```cpp

#include <iostream>
#include <iomanip>
#include <string>
#include <climits>

using namespace std;

int main()
{
    double salary1, salary2;
    string name1, name2;
    int age;
    char genre;

    cout << "Name of the first person: ";
    getline(cin, name1);
    cout << "Salary of the first person: ";
    cin >> salary1;

    cout << "Name of the second person: ";
    cin.ignore(INT_MAX, '\n'); // ------------- buffer cleaning
    getline(cin, name2);
    cout << "Salary of the second person: ";
    cin >> salary2;

    cout << "Age: ";
    cin >> age;
    cout << "Genre (F/M): ";
    cin >> genre;

    cout << fixed << setprecision(2);
    cout << "Name 1: " << name1 << endl;
    cout << "Salary 1: " << salary1 << endl;
    cout << "Name 2: " << name2 << endl;
    cout << "Salary 2: " << salary2 << endl;
    cout << "Age: " << age << endl;
    cout << "Genre: " << genre << endl;

    return 0;
}

```

#### <a name="chapter1part7"></a>Chapter 1 - Part 7: Conditional Statement in C++

```cpp

#include <iostream>
#include <iomanip>
#include <string>
#include <climits>

using namespace std;

int main()
{
    int time;
    cout << "Enter a time of day: ";
    cin >> time;

    if (6 <= time && time < 12) {
            cout << "Good Morning!" << endl;
    }

    else if (12 <= time && time < 18) {
            cout << "Good Afternoon!" << endl;
    }

    else{
        cout << "Good Night!" << endl;
    }


    return 0;
}

```

#### <a name="chapter1part8"></a>Chapter 1 - Part 8: While Statement in C++

```cpp

#include <iostream>
#include <iomanip>
#include <string>
#include <climits>

using namespace std;

int main()
{
   int x, sum;

    sum = 0;
    cout << "Enter the first number: ";
    cin >> x;

    while (x != 0) {
        sum = sum + x;
        cout << "Enter another number: ";
        cin >> x;
    }

    cout << "SUM = " << sum;

    return 0;
}

```

#### <a name="chapter1part9"></a>Chapter 1 - Part 9: For Statement in C++

```cpp

#include <iostream>
#include <iomanip>
#include <string>
#include <climits>

using namespace std;

int main()
{
   int N, i, x, sum;

   cout << "How many number will be enter? ";
   cin >> N;

   sum = 0;
   for (i = 1; i <= N; i++) {
       cout << "Enter a number: ";
       cin >> x;
       sum = sum + x;
   }

   cout << "SUM = " << sum << endl;

    return 0;
}

```

#### <a name="chapter1part10"></a>Chapter 1 - Part 10: Vectors in C++

```cpp

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   int N, i;

   cout << "How many numbers will be enter? ";
   cin >> N;

   double vet[N];


   for (i = 0; i < N; i++) {
       cout << "Enter a number: ";
       cin >> vet[i];
   }

   cout << endl << "Typed Numbers:" << endl;
   cout << fixed << setprecision(1);
   for (i = 0; i < N; i++) {
        cout << vet[i] << endl;
   }

    return 0;
}

```

#### <a name="chapter1part11"></a>Chapter 1 - Part 11: Matrix in C++

```cpp

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   int M, N, i, j;

   cout << "How many rows the matrix will be? ";
   cin >> M;
   cout << "How many columns the matrix will be? ";
   cin >> N;

   int mat[M][N];


   for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            cout << "Element [" << i << "," << j << "]: ";
            cin >> mat[i][j];
        }
   }

   cout << endl << "Typed Matrix:" << endl;
   for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
   }

    return 0;
}

```

## <a name="chapter2"></a>Chapter 2: Object Oriented

#### <a name="chapter2part1"></a>Chapter 2 - Part 1: Abstraction

How it represents a real object in our system. It must have identity (Class) given by properties (attributes) and methods (functions).

o Class: Structured type that can contain members - Representation of an entity (Product, Customer), service (ProductService, CustomerService), drivers (ProductController), utilities (calculator) and others (views, repositories).
o Attributes (Data or Fields - Ex: Customer has attribute name, email, cpf and etc.)
o Methods (Class functions and operations - Ex: Consult email, consult cpf, change cpf)

• A class can also have:
o Constructors (Special class operation, performed at instantiation of the class. Used to start attribute values ​​or to force the object to receive data or dependency on its instantiation (Dependency injection))
o Overload of constructors or methods (Esoecify more than one constructor or method in the class)
Encapsulation (Getters and Setters)
o Inheritance (from whom this class inherits)
Polymorphism (A class has several forms or functions)

• Object: They are the instance of the class or instance of the type - Ex: Product p1, Client customer1
• Class: It is the definition of the type (Customer Class, Product Class)

• Instantiation: When we instantiate primitive variables (double, int, String ...) it is instantiated in the memory stack. When the command New in Objects, Arrays and Lists is communicated, the dynamic location of memory occurs, where the object is allocated in another area of memory, called Heap and the object will point to the memory address.

• Advantages of object orientation:
o Reuse of the code and delegation of responsibilities

#### <a name="chapter2part2"></a>Chapter 2 - Part 2: Encapsulation

Adds security to an object-oriented application, as it hides class properties.

o An object must not expose any attributes (use of access modifiers - private, protected ...)
o Class attributes are usually accessed by special methods (Getters and Setters), avoiding direct access to the object's property.
o Analogy with a television: When you click on the call button, we do not know what happens internally on the TV. We can say that the methods that connect the TV are encapsulated.

#### <a name="chapter2part3"></a>Chapter 2 - Part 3: Inheritance

Type of association between classes that allows a class to inherit all data and behavior from another

o Can be used for code reuse
o Used for polymorphism - A class has several uses
The whole class java me, inherits from Object (Warper Classes)

#### <a name="chapter2part4"></a>Chapter 2 - Part 4: Polymorphism

A feature that allows variables of the same more generic type to be able to point to objects of different specific types, thus having different behaviors according to each specific type. In some cases, we must perform the upcasting or dowcasting of the object.

<!-- URL's -->
