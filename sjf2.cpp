//MUHAMMAD ZULHILMIE BIN MOHAMAD ROSDI 	1812277
//MUHAMMAD SHAFIQ BIN SHAMSURI			1811069
//MUHAMMAD ALIF NAJMI BIN MOHD AZMAN	1915601


#include<bits/stdc++.h>

using namespace std;

 
struct Process
{
   int code;     // process ID
   int arrival;      // burst Time
   int duration; //Class Time
};
 
/* 
    this function is used for sorting all
    processes in increasing order of burst time
*/
bool comparison(Process a, Process b)
{
    return (a.arrival < b.arrival);
}
 
// function to find the waiting time for all processes
void findWaitingTime(Process proc[], int n, int wt[])
{
    // waiting time for first process is 0
    wt[0] = 0;
 
    // calculating waiting time
    for (int i = 1; i < n ; i++)
    {
        wt[i] = proc[i-1].duration + wt[i-1] ;
    }
}
 
// function to calculate turn around time
void findTurnAroundTime(Process proc[], int n, int wt[], int tat[])
{
    // calculating turnaround time by adding bt[i] + wt[i]
    for (int i = 0; i < n ; i++)
    {
        tat[i] = proc[i].duration + wt[i];
    }
}
 
// function to calculate average time
void findAverageTime(Process proc[], int n)
{
    int wt[n], tat[n], total_wt = 0, total_tat = 0;
 
    // function to find waiting time of all processes
    findWaitingTime(proc, n, wt);
 
    // function to find turn around time for all processes
    findTurnAroundTime(proc, n, wt, tat);
 
    // display processes along with all details
    cout << "\n Course "<< " Arrival " <<"Duration"
         << " Waiting time " << " Turn around time\n";
 
    // calculate total waiting time and total turn around time
    for (int i = 0; i < n; i++)
    {
        total_wt = total_wt + wt[i];
        total_tat = total_tat + tat[i];
        cout << " " << proc[i].code << "\t\t"  << proc[i].arrival << "\t\t"
             << proc[i].duration << "\t " << wt[i]
             << "\t\t " << tat[i] <<endl;
    }
 
    cout << "Average waiting time = "
         << (float)total_wt / (float)n;
    cout << "\nAverage turn around time = "
         << (float)total_tat / (float)n;
}
 
// main function
int main()
{
    Process proc[] = {{4501, 4, 1}, {2594, 5, 3}, {3451, 6, 5}};
    int n = sizeof proc / sizeof proc[0];
 
    // sorting processes by burst time.
    sort(proc, proc + n, comparison);
 
    cout << "Order in which class gets executed\n";
    for (int i = 0 ; i < n; i++)
    {
        cout << proc[i].arrival <<" ";
    }
 
    findAverageTime(proc, n);
    
    return 0;
}

