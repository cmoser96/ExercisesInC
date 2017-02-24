# Reflection 1
### Carl Moser

## Personal Goals:
  - Learn about low level programming and memory management
  - Understand how to program microcontrollers in C
  - Learn about registers and microcontroller architecture
  - Learn more about networking or programming graphics

Overall, the last sprint was a little bit slower than the previous sprint but we wrote more of our own code. I learned more about the arduinos architecture and how to directly change the serial registers in this sprint. I am continuing to work on getting serial communication in C.

My team was on top of the eduScrum ceremonies. Every meeting, we had a stand up and a discussion of what we were going to do by the next meeting. We kept our trello board updated through out the sprint. We did not quite as much done as we thought we would. We had planned to have some serial communication working. This was delayed because we had a hard time finding any example of serial communication in C. Once we did, it was hard to find the register names of the Atmega328.

## Head First C Exercises

[Exercise 3](../homework/hw03/tee.c)

[Exercise 4](../homework/hw04/trout)

## Think OS Reading Questions

[Chapter 3](../reading_answers/chapter3.md)

[Chapter 4](../reading_answers/chapter4.md)

[LBOS 1+2](../reading_answers/puzzles.md)

## Exam Question

Reading: Headfirst C chapter 4

*What is an advantage of compiling each file individually over compiling the whole project every time?*

One advantage is that it is faster to compile only the files that you changed and then linking them than it is to recompile the project as a whole. It is also easier to include the compiled object code into other projects by linking them and not having to recompile them.