## Chapter 4


### Files and file systems

**_1. What abstractions do file systems provide?  Give an example of something that is logically true about files systems but not true of their implementations._**

File systems can have nested folders but the data within the folder is not actually nested.

**_2. What information do you imagine is stored in an `OpenFileTableEntry`?_**

The file being read and the position within that file.

**_3. What are some of the ways operating systems deal with the relatively slow performance of persistent storage?_**

A process that is waiting for a block will be interrupted and suspended for another process to run in the mean time.

**_4. Suppose your program writes a file and prints a message indicating that it is done writing.  
Then a power cut crashes your computer.  After you restore power and reboot the computer, you find that the file you wrote is not there.  What happened?_**

The block in memory is usually stored in a buffer in memory before it is written to the disk. The data is written to the disk when the file table entry is freed.

**_5. Can you think of one advantage of a File Allocation Table over a UNIX inode?  Or an advantage of a inode over a FAT?_**

FAT does not seem to have a maximum size and since the pointer to the next block is stored inside of the block, there is less wasted space than having indirection blocks. An inode stores information about the blocks.

**_6. What is overhead?  What is fragmentation?_**

Overhead is the data used up by the data structure. Fragmentation is unused blocks or the empty space in partial blocks.

**_7. Why is the "everything is a file" principle a good idea?  Why might it be a bad idea?_**

This is a good idea because it makes programs more versatile. It might be a bad idea because it might be easy for a program to pipe something malicious into another program.

If you would like to learn more about file systems, a good next step is to learn about journaling file systems.  
Start with [this Wikipedia article](https://en.wikipedia.org/wiki/Journaling_file_system), then 
[Anatomy of Linux Journaling File Systems](http://www.ibm.com/developerworks/library/l-journaling-filesystems/index.html).  
Also consider reading [this USENIX paper](https://www.usenix.org/legacy/event/usenix05/tech/general/full_papers/prabhakaran/prabhakaran.pdf).