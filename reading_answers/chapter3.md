## Chapter 3


### Virtual memory

**_1. The Georgian alphabet has 33 letters.  How many bit are needed to specify a letter?_**

6 bits are needed to specify a letter.

**_2. In the UTF-16 character encoding, the binary representation of a character can take up to 32 bits.  
Ignoring the details of the encoding scheme, how many different characters can be represented?_**

2^32 characters

**_3. What is the difference between "memory" and "storage" as defined in Think OS?_**

Memory is volatile and storage is not.

**_4. What is the difference between a GiB and a GB?  What is the percentage difference in their sizes?_**

A GiB is 2^30 and a GB is 10^9. A GiB is 1.07% larger.

**_5. How does the virtual memory system help isolate processes from each other?_**

Virtual memory is abstracted from programs so they do not need to know a physical location in memory to store variables.

**_6. Why do you think the stack and the heap are usually located at opposite ends of the address space?_**

The stack and heap can grow towards each other without having to move.

**_7. What Python data structure would you use to represent a sparse array?_**

A list.

**_8. What is a context switch?_**

A context switch is when the operating system pauses a program, saves its state, and switches to running a different process.

[aspace.c](aspace.c)

**_In this directory, you should find a subdirectory named `aspace` that contains `aspace.c`.  Run it on your computer and compare your results to mine._**
  
**_1. Add a second call to `malloc` and check whether the heap on your system grows up (toward larger addresses)._**

The heap grows up.

**_2. Add a function that prints the address of a local variable, and check whether the stack grows down._** 

The stack grows down.

**_3. Choose a random number between 1 and 32, and allocate two chunks with that size.  
How much space is there between them?  Hint: Google knows how to subtract hexadecimal numbers._**

The space between them is 32.