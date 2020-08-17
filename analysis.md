# Introduction

   Algorithms based on non-preemptive scheduling that we chose are Shortest Job First (SJF), First Come First Serve (FCFS) and Priority (non preemptive version).

   Non-preemptive Scheduling is used when a process terminates, or a process switches from running to waiting state. In this scheduling, once the resources (CPU cycles) is allocated to a process, the process holds the CPU until it gets terminated or it reaches a waiting state. In case of non-preemptive scheduling does not interrupt a process running CPU in middle of the execution. Instead, it waits until the process complete its CPU burst time and then it can allocate the CPU to another process.
   
   Three algorithms applied in our project which are First Come, First Serve (FCFS), Priority and Shortest Job First (SJF).

   First Come First Serve (FCFS) is an operating system scheduling algorithm that automatically executes queued requests and processes in order of their arrival. It is the easiest and simplest CPU scheduling algorithm. In this type of algorithm, processes which requests the CPU first get the CPU allocation first. This is managed with a First In, First Out (FIFO) queue.

   Priority scheduling is a method of scheduling processes based on priority. In this method, the scheduler chooses the tasks to work as per the priority. Priority scheduling also involves priority assignment to every process, and processes with higher priorities are carried out first.

   Shortest-Job-First (SJF) is a non-preemptive discipline in which waiting job (or process) with the smallest estimated run-time-to-completion is run next. In other words, when CPU is available, it is assigned to the process that has smallest next CPU burst. The SJF scheduling is especially appropriate for batch jobs for which the run times are known in advance. Since the SJF scheduling algorithm gives the minimum average time for a given set of processes, it is probably optimal. The SJF algorithm favors short jobs (or processors) at the expense of longer ones.The obvious problem with SJF scheme is that it requires precise knowledge of how long a job or process will run, and this information is not usually available. The best SJF algorithm can do is to rely on user estimates of run times. In the production environment where the same jobs run regularly, it may be possible to provide reasonable estimate of run time, based on the past performance of the process. But in the development environment users rarely know how their program will execute.

# Consideration

Describe what you have considered

# Analysis

## FCFS

Give an analysis of your algo and compare it with the other two

## Priority

Give an analysis of your algo and compare it with the other two

## SJF

Give an analysis of your algo and compare it with the other two

