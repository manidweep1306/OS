# Operating System Syllabus

## 1. Practicing Basic UNIX Commands

- Learn and practice essential UNIX commands to understand their functionality and use cases.

## 2. Write Programs Using the Following UNIX System Calls

- **fork()**
- **exec()**
- **getpid()**
- **exit()**
- **wait()**
- **close()**
- **stat()**
- **opendir()**
- **readdir()**

> [Click here for solutions](./lab2)

## 3. Simulate Common UNIX Commands

- Simulate commands like `cp`, `ls`, `grep`, etc., to understand how they function internally and implement them programmatically.

## 4. Simulate CPU Scheduling Algorithms

- **First-Come, First-Served (FCFS)**
- **Shortest Job First (SJF)**
- **Priority Scheduling**
- **Round Robin (RR)**

> Learn how each algorithm works, and implement them to understand the scheduling behavior in an OS.

## 5. Control Number of Ports Opened by the Operating System

- Use **Semaphores** to manage concurrency and control the number of opened ports.
- Use **Monitors** to achieve synchronization and resource control.

## 6. Illustrate Concurrent Execution of Threads Using Pthreads Library

- Write a program that demonstrates how threads can execute concurrently using the POSIX threads (pthreads) library.

## 7. Solve the Producer-Consumer Problem Using Semaphores

- Implement the classic producer-consumer problem where a producer creates data and a consumer consumes it. Use semaphores for synchronization.

## 8. Implement Memory Allocation Methods for Fixed Partitions

- **First Fit**: Allocate the first available partition that is large enough.
- **Worst Fit**: Allocate the largest available partition.
- **Best Fit**: Allocate the smallest partition that is large enough.

## 9. Simulate Page Replacement Algorithms

- **First-In-First-Out (FIFO)**
- **Least Recently Used (LRU)**
- **Least Frequently Used (LFU)**

> Implement these algorithms to manage how pages are swapped in and out of memory.

## 10. Simulate Paging Technique of Memory Management

- Implement a simulation to manage memory using paging technique, where memory is divided into fixed-size blocks (pages).

## 11. Implement Banker's Algorithm for Deadlock Avoidance and Prevention

- Use the **Banker's Algorithm** to avoid or prevent deadlocks in a multi-process system by ensuring that the system remains in a safe state.

## 12. Simulate File Allocation Strategies

- **Sequential Allocation**: Files are stored in consecutive blocks.
- **Indexed Allocation**: An index block is used to keep track of the file’s blocks.
- **Linked Allocation**: Each block contains a pointer to the next block.

> Simulate these strategies to understand their impact on performance and disk space utilization.

## 13. Download and Install Nachos Operating System

- Download and install the **Nachos** operating system.
- Experiment with various features and understand the concepts behind OS design and implementation.
