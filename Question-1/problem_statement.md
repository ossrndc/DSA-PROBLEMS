```
         Vinayak's Seminar Hall Access
         time limit per test: 1 Second
         memory limit per test: 256 megabytes
```



All technical societies of Ajay Kumar Garg Engineering College are conducting their events and workshops in the month of April, which is causing clashes in their dates. However, the seminar hall in Ajay Kumar Garg Engineering College is limited in capacity. Therefore, all coordinators of their respective societies go to the Director General's office to request the seminar hall. Now, since the Director General cannot refuse anyone, he asks questions to all the head coordinators of the societies and says that whoever gives the correct answer will be given access to the seminar hall.

You are given n sticks of lengths **a1,a2,…,an.** Find the **maximum** number of regular(**equal-sided**) polygons you can construct simultaneously, such that:  
**1**.Each side of a polygon is formed by exactly one stick.  
**2**.No stick is used in more than 1 polygon.  
Note: Sticks cannot be broken.

**Input**  
The first line contains a single integer t (**1≤t≤100**) — the number of test cases.  
The first line of each test case contains a single integer n (**1≤n≤100**) — the number of sticks available.  
The second line of each test case contains n integers a1,a2,…,an (**1≤ai≤100**) — the stick lengths.

**Output**
For each test case, output a single integer on a new line — the maximum number of regular (equal-sided) polygons you can make simultaneously from the sticks available.  
Can you help Vinayak to get seminar hall ?  

**Input** 

    4  

    1  
    1  

    2  
    1 1  

    6  
    2 2 3 3 3 3  

    9  
    4 2 2 2 2 4 2 4 4  

**Output**  

    0  
    0  
    1  
    2  

**Note**  
In the first test case, we only have one stick, hence we can't form any polygon.  
In the second test case, the two sticks aren't enough to form a polygon either.  
In the third test case, we can use the 4 sticks of length 3 to create a square.