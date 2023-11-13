My C++ Journey Part 1: The Beginning at ISART DIGITAL Montreal (2017)
Project: Lost Fortune - A Personalized Adventure
In 2017, I embarked on an educational journey in C++ at ISART DIGITAL Montreal, leading to the creation of my first program: "Lost Fortune". This README documents the learning milestones achieved through this project.

Introduction to C++
As a novice, I began by understanding the syntax and structure of C++. "Lost Fortune" was a simple yet pivotal program that allowed me to grasp the basics of C++ programming including variables, control structures, input/output operations, and fundamental data types.

Key Concepts Learned
Basic Syntax and Structure: The use of #include for directives, understanding of functions, particularly int main(), which is the entry point of a C++ program.

Using Namespace: Learned the concept of namespaces to avoid naming conflicts and to simplify code with using directives.

Variables and Data Types: Worked with integers and strings to store numbers and text.

Constants: Used const to create unchangeable/read-only variables.

Input/Output Streams: Utilized cin for input and cout for output to interact with the user.

Arithmetic Operations: Performed calculations using arithmetic operators like subtraction and modulo to manipulate data.

Control Flow: Developed an understanding of the program's flow and how to use input data to influence the output.

Comments: Used single-line // and multi-line /* */ comments to document the code.

Personalized Storytelling
The program narrates a personalized adventure where the user's input directly influences the storyline. It takes the number of adventurers, the number killed in an ambush, and the leader's name as inputs to tell a unique story for each user.

Challenges and Problem-Solving
Creating "Lost Fortune" presented challenges such as handling user input, performing calculations, and outputting a coherent story. Problem-solving skills were honed by implementing the modulus operator to evenly distribute treasure among survivors, ensuring fairness in the story's outcome.

Conclusion and Reflection
Building "Lost Fortune" was a foundational step in my C++ learning journey. It solidified basic concepts and encouraged a problem-solving mindset. Reflecting on this project reminds me of the excitement and potential programming holds, paving the way for more complex and rewarding endeavors in the future.

Compilation and Execution
To compile and run the "Lost Fortune" program, ensure you have a C++ compiler installed. Then, navigate to the program directory and compile the code using a command similar to g++ -o lost_fortune lost_fortune.cpp. Run the resulting executable to start your adventure.

This README serves as a testament to my initial steps into the world of C++ and as a beacon for future learning endeavors.

Happy Coding!

QUESTIONS AND ANSWERS
Q: Why do game companies use C++?
A: C++ combines speed, low-level hardware access, and high-level constructs
better than just about any other language. In addition, most game companies
have a lot invested in C++ resources (both in reusable code and in
programmer experience).
Q: How is C++ different than C?
A: C++ is the next iteration of the C programming language. To gain
acceptance, C++ essentially retained all of C. However, C++ defines new
ways to do things that can replace some of the traditional C mechanisms. In
addition, C++ adds the ability to write object-oriented programs.
Q: How is C++ different from C#?
A: C# is a programming language created by Microsoft intended to be both
simple and general purpose. C# was influenced by and bears much similarity
to C++, but the two are separate and distinct languages.
Q: How should I use comments?
A: To explain code that is unusual or unclear. You should not comment the
obvious.
Q: What’s a programming block?
A: One or more statements surrounded by curly braces that form a single unit.
Q: What’s a compiler warning?
A: A message from your compiler stating a potential problem. A warning will
not stop the compilation process.
Q: Can I ignore compiler warnings?
A: You can, but you generally shouldn’t. You should address the warning and
fix the offending code.
Q: What is whitespace?
A: A set of non-printing characters that create space in your source files,
including tabs, spaces, and new lines.
Q: What are literals?
A: Elements that represent explicit values. "Game Over!" is a string literal,
while 32 and 98.6 are numeric literals.
Q: Why should I always try to initialize a new variable with a value?
A: Because the contents of an uninitialized variable could be any value—even
one that doesn’t make sense for your program.
Q: What are variables of type bool for?
A: They can represent a condition that is true or false, such as whether a chest
is locked or a playing card is face up.
Q: How did the bool type get its name?
A: The type is named in honor of the English mathematician George Boole.
Q: Must the names of constants be in uppercase letters?
A: No. Using uppercase is just an accepted practice—but one you should use
because it’s what other programmers expect.
Q: How can I store more than one character with a single variable?
A: With a string object.

DISCUSSION QUESTIONS
1. How does having a widely adopted C++ standard help game
programmers?

Advantages:
Portability: Game code can be more easily transferred between different platforms and compilers.
Consistency: A standard provides a consistent set of features and behaviors that programmers can rely on.
Interoperability: It allows for better collaboration and code sharing among developers.
Optimization: Compilers can be optimized for standards, leading to potentially better performance for standard-compliant code.
Challenges:
Complexity: Learning and following the standard can be complex due to its vastness.
Limitations: Sometimes, game programmers need to use platform-specific optimizations that may not adhere to the standard.


2. What are the advantages and disadvantages of employing the using
directive?
Advantages:
Simplicity: They can make code cleaner and more readable by removing the need for namespace prefixes.
Convenience: Reduce the typing required, especially for namespaces used frequently.
Disadvantages:
Namespace Collisions: Can lead to naming conflicts if different namespaces contain elements with the same name.
Code Clarity: It can be unclear which namespace a particular symbol comes from, making the code harder to understand and maintain.


3. Why might you define a new name for an existing type?
Readability: A new name can make the purpose of a type clearer in the context of its use.
Abstraction: Hides the complexity of a type definition and allows for easier changes in the future.
Consistency: Helps maintain a consistent type system within an application or library.

4. Why are there two versions of the increment operator? What’s the
difference between them?
Prefix Increment (++i): Increments the value of i and then returns the incremented value.
Postfix Increment (i++): Returns the current value of i and then increments it.
Difference:
Efficiency: Prefix can be more efficient because it doesn't need to create a temporary to hold the original value.
Usage in Expressions: They can produce different results when used in expressions, so choosing the right one is essential for the intended behavior.

5. How can you use constants to improve your code?
Maintenance: Constants prevent "magic numbers" and make it easier to update values throughout the code.
Readability: They provide meaningful names for values, making the code easier to read and understand.
Safety: They protect against accidental changes to values that should be immutable, reducing bugs.
Efficiency: Compilers can optimize the usage of constants for better performance.