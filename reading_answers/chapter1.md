## Chapter 1


### Compilation

**_1. Give an example of a feature common in interpreted languages that is rare in compiled languages._**

Interpreted languages usually support dynamic types.

**_2. Name two advantages of static typing over dynamic typing._**

Statically typed languages are usually more space efficient and faster than dynamic typing. These languages are compiled so it is possible to find errors before the progam runs.

**_3. Give an example of a static semantic error._**

An example of a static semantic error is inputing the wrong number of arguments in a function call.

**_4. What are two reasons you might want to turn off code optimization?_**

One reason is that sublte bugs may result in unkown behavior if optimization is on. Another reason is that optimization increases compile time.

**_5. When you run `gcc` with `-S`, why might the results look different on different computers?_**

-S generates assembly code which is specific to processor architecture.

**_6. If you spell a variable name wrong, or if you spell a function name wrong, 
the error messages you get might look very different.  Why?_**

The incorrect variable name will be picked up by the compiler while the linker will pick up the incorrect function name, resulting in different messages.

**_7. What is a segmentation fault?_**

A segmentation fault occurs when a program tries to access memory that does not belong to it.