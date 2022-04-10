# Data-Structure

Data Structure : `Mathematical And Logical Model Of Organizing the interrelated data`

- A data structure is a way of organizing the data so that it can be used efficiently. Here, we have used the word efficiently, which in terms of both the space and time.

- The data structure is not any programming language like C, C++, java, etc. It is a set of algorithms that we can use in any programming language to structure the data in the memory.

- To structure the data in memory, 'n' number of algorithms were proposed, and all these algorithms are known as Abstract data types. These abstract data types are the set of rules.

# Types of Data Structures

There are two types of data structures:

`Primitive data structure`
`Non-primitive data structure`

## Primitive Data structure

The primitive data structures are primitive data types like:

- `int`
- `char`
- `float `
- `double`
- `pointer`

that can hold a single value.

## Non-Primitive Data structure

The non-primitive data structure is divided into two types:

`Linear data structure`
`Non-linear data structure`

### Linear Data Structure

The arrangement of data in a sequential manner is known as a linear data structure. The data structures used for this purpose are:

- `Arrays`
- `Linked list`
- `Stacks`
- `Queues`

In these data structures, one element is connected to only one another element in a linear form.

### Non-Linear Data Structure

When one element is connected to the 'n' number of elements known as a non-linear data structure. Like:

- `Trees `
- `Graphs`
- `Heap`
- `Hash`

In these case, the elements are arranged in a random manner.

### Data structures can also be classified as:

- `Static data structure:` It is a type of data structure where the size is allocated at the compile time. Therefore, the maximum size is fixed.
- `Dynamic data structure:` It is a type of data structure where the size is allocated at the run time. Therefore, the maximum size is flexibl

<br>
<div align="center">
    <img src="https://static.javatpoint.com/ds/images/ds-introduction.png" alt="Types Of Data Structure">
</div>
<br>

# Which Data Structure? `IMP*`

- A data structure is a way of organizing the data so that it can be used efficiently.
- Here, we have used the word efficiently, which in terms of both the space and time.
- For example, a stack is an ADT (Abstract data type) which uses either arrays or linked list data structure for the implementation.
- Therefore, we conclude that we require some data structure to implement a particular ADT.
- `An ADT tells what is to be done and data structure tells how it is to be done.` In other words, we can say that ADT gives us the blueprint while data structure provides the implementation part.

# Major Operations

The major or the common operations that can be performed on the data structures are:

- `Traversing:`Visit all the lements in a data structure from one position to another.
- `Searching:` We can search for any element in a data structure.
- `Sorting:` We can sort the elements of a data structure either in an ascending or descending order.
- `Insertion:` We can also insert the new element in a data structure.
- `Updation:` We can also update the element, i.e., we can replace the element with another element.
- `Deletion:` We can also perform the delete operation to remove the element from the data structure.
- `Merging:` Combine two Data Structure of same type.

# Advantages of Data structures

- `Efficiency:` If the choice of a data structure for implementing a particular ADT is proper, it makes the program very efficient in terms of time and space.
- `Reusability:` The data structure provides reusability means that multiple client programs can use the data structure.
- `Abstraction:` The data structure specified by an ADT also provides the level of abstraction. The client cannot see the internal working of the data structure, so it does not have to worry about the implementation part. The client can only see the interface.

# Prerequisite :

Basic Analysis Of Algorithm :

- `What Is Algorithm ?`
- `Time Complexity.`
- `Space Complexity.`
- `Rate Of Growth.`
- `Complexity Notation.`
- `Asymptotic Notation.`
  - `Big Oh`
  - `Theta`
  - `Omegs`
- `Worst Case & Best Case.`
- `Pointers.`
- `Structure.`

-----

# ARRAYS

- Arrays are defined as the collection of similar type of data items stored at contiguous memory locations.
- Arrays are the derived data type in C programming language which can store the primitive type of data such as int, char, double, float, etc.
- Array is the simplest data structure where each data element can be randomly accessed by using its index number.

### `Need of using Array`

- In computer programming, the most of the cases requires to store the large number of data of similar type.
- To store such amount of data, we need to define a large number of variables.
- It would be very difficult to remember names of all the variables while writing the programs.
- Instead of naming all the variables with a different name, it is better to define an array and store all the elements into it.

### `Accessing Elements of an array`

To access any random element of an array we need the following information:

- `Base Address of the array.`
- `Size of an element in bytes.`
- `Relative Index :` Number of elements present before the specified index of an element.

```
Byte address of element A[i]  = base address + size * Relative Index    ----------- 1
Relative Index : (i - first index)                                      ----------- i

Put i in 1 :
Byte address of element A[i]  = base address + size * (i - first index)
```

<br>
<div align="center">
    <img src="https://static.javatpoint.com/ds/images/ds-1d-array.png" alt="Types Of Data Structure">
</div>
<br>

-----------------------------------------------------------------------------------------------------

## `Traversing in Array`

Traversing in Array means Visit all the elements of the array from Lower Bound Address to Upper Bound Address.

Implementation :

```
Step 01: Start
Step 02: [Initialize counter variable. ] Set i = LB.
Step 03: Repeat for i = LB to UB.
Step 04: Apply process to arr[i].
Step 05: [End of loop. ]
Step 06: Stop
```
| TIME COMPLEXITY | SPACE COMPLEXITY |
| --------------- | ---------------- |
| O(n)            | O(1)             |

Complete Code : [![Open In Collab](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](https://github.com/hacker-404-error/Data-Structure-In-CPP/blob/master/A-ARRAY/A-Traversing.cpp)

----------------------------------------------------------------------------------------------------

## `Finding Minimum Element In Array`

- To Find the minimum Element in Array, we first assign the very first element as minimum
- Then we can traverse through the whole array by comparing the assumed minimum element (Very first element in array).
- If our minimum array element is greater then some element in array while traversing then we can assign that element as minimum element.
- Like this we traverse till the end of the array and at the end the element present in minimum variable is the minimum element.

   - `No Of Comparision Between The Elements : n-1`     
    
Implementation : 
```
smallest = array[i] // first element
for i from 1 to length(array):
    element_i = array[i]
    if smallest > element_i
        smallest = element_i
smallest // this is our answer
```
| TIME COMPLEXITY | SPACE COMPLEXITY |
| --------------- | ---------------- |
| Theta(n)        | Theta(1) or O(1) |

Complete Code : [![Open In Collab](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](https://github.com/hacker-404-error/Data-Structure-In-CPP/blob/master/A-ARRAY/B-Min_Element.cpp)

----------------------------------------------------------------------------------------------------

## `Finding Maximum Element In Array`
- To Find the Maximum Element in Array, we first assign the very first element as maximum
- Then we can traverse through the whole array by comparing the assumed maximum element (Very first element in array).
- If our maximum array element is smaller then some element in array while traversing then we can assign that element as maximum element.
- Like this we traverse till the end of the array and at the end the element present in maximum variable is the maximum element.

   - `No Of Comparision Between The Elements : n-1`    

Implementation : 
```
Step 1: Start

Step 2: Declare array a[n] and variable i, large

Step 3: Read n from User and read all the elements of a[n]

Step 4: Initialize Variable i=1 and large=a[0]

Step 5: Repeat Until i<=n-1
 
           5.1 if(a[i]>large), set large=a[i]

           5.2 increment i=i+1
           
Step 6: Print "The largest element is": large

Step 7: Stop
```
| TIME COMPLEXITY | SPACE COMPLEXITY |
| --------------- | ---------------- |
| Theta(n)        | Theta(1) or O(1) |

Complete Code : [![Open In Collab](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](https://github.com/hacker-404-error/Data-Structure-In-CPP/blob/master/A-ARRAY/C-Max_Element.cpp)

------------------------------------------------------------------------------------------------------------


## `Finding Minimum And Maximum`

```
   - No Of Comparision Between The Elements To find Minimum:              n-1
   - No Of Comparision Between The Elements To find Maximum:              n-1
     
   - Total Number Of Comparision To Find Min and Max :                    2n-2     
```
2n-2 is The total number of comparision to find minimum and maximum : Complete Code : [![Open In Collab](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](https://github.com/hacker-404-error/Data-Structure-In-CPP/blob/master/A-ARRAY/D-MinAndMax_Element.cpp)

- To reduce this comparision we can use one Method called : 

### `TOURNAMENT METHOD TO FIND MAX AND MIN (WITH MINIMUM NUMBER OF COMPARISION)`
- Divide the array into two parts and compare the maximums and minimums of the two parts to get the maximum and the minimum of the whole array.

Implementation (Algorithm) : 
```
Pair MaxMin(array, array_size)
   if array_size = 1
      return element as both max and min
   else if arry_size = 2
      one comparison to determine max and min
      return that pair
   else    /* array_size  > 2 */
      recur for max and min of left half
      recur for max and min of right half
      one comparison determines true max of the two candidates
      one comparison determines true min of the two candidates
      return the pair of max and min
```
| TIME COMPLEXITY | SPACE COMPLEXITY |
| --------------- | ---------------- |
| Theta(n)        | Theta(1) or O(1) |

Complete Code : [![Open In Collab](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](https://github.com/hacker-404-error/Data-Structure-In-CPP/blob/master/A-ARRAY/E-Tournament_Method_Min_And_Max.cpp)

--------
## `Insertion In Array`
Insert operation is to insert one or more data elements into an array. Based on the requirement, a new element can be added at the beginning, end, or any given index of array.
- #### Insertion At Beginning : [![Open In Collab](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](https://github.com/hacker-404-error/Data-Structure-In-CPP/blob/master/A-ARRAY/F-Insertion_At_Beg.cpp)
- #### Insertion At End :[![Open In Collab](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](https://github.com/hacker-404-error/Data-Structure-In-CPP/blob/master/A-ARRAY/G-Insertion_At_End.cpp)
- #### Insertion At Position : [![Open In Collab](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](https://github.com/hacker-404-error/Data-Structure-In-CPP/blob/master/A-ARRAY/H-Insertion_At_Position.CPP)


## `Deletion From Array`
Deletion refers to removing an existing element from the array and re-organizing all elements of an array.
- #### Deletion From Beginning : [![Open In Collab](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](https://github.com/hacker-404-error/Data-Structure-In-CPP/blob/master/A-ARRAY/I-Deletion_From_Beg.cpp)
- #### Deletion From End :[![Open In Collab](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](https://github.com/hacker-404-error/Data-Structure-In-CPP/blob/master/A-ARRAY/J-Deletion_From_End.cpp)
- #### Deletion From Position : [![Open In Collab](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](https://github.com/hacker-404-error/Data-Structure-In-CPP/blob/master/A-ARRAY/K-Deletion_From_Position.CPP)

## `Search Operation`
You can perform a search for an array element based on its value or its index.
- #### Linear Search : [![Open In Collab](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](https://github.com/hacker-404-error/Data-Structure-In-CPP/blob/master/A-ARRAY/L-Linear_Searching.cpp) 
- #### Binary Search : [![Open In Collab](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](https://github.com/hacker-404-error/Data-Structure-In-CPP/blob/master/A-ARRAY/M-Binary_Search.cpp)

## `Merge Operation`
Combine two arrays in such a way that one array is appended to another array.
[![Open In Collab](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](https://github.com/hacker-404-error/Data-Structure-In-CPP/blob/master/A-ARRAY/N-Merging.cpp)

## `Update Operation`
Update operation refers to updating an existing element from the array at a given index.
[![Open In Collab](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](https://github.com/hacker-404-error/Data-Structure-In-CPP/blob/master/A-ARRAY/O-Updating_In_Array.cpp)

--------------------------------------------------------------------------------------------------------------------------------------------------
# Linked Lists
- Linked list is a linear data structure that includes a series of connected nodes.
- Linked list can be defined as the nodes that are randomly stored in the memory. 
- A node in the linked list contains two parts, i.e., first is the data part and second is the address part. 
- The last node of the list contains a pointer to the null. 
- After array, linked list is the second most used data structure. 
- In a linked list, every link contains a connection to another link.

## Representation Of Linked List

<br>
<div align="center">
    <img src="https://static.javatpoint.com/ds/images/ds-linked-list.png" alt="Representation Of LL">
</div>
<br>

## Why use linked list over array?

`limitations of arrays -`

- The size of the array must be known in advance before using it in the program.
- Increasing the size of the array is a time taking process. It is almost impossible to expand the size of the array at run time.
- Inserting and deleting an element in the array needs shifting of all its predecessors.

`Linked list is useful because -`

- It allocates the memory dynamically. 
- All the nodes of the linked list are non-contiguously stored in the memory and linked together with the help of pointers.
- In linked list, size is no longer a problem since we do not need to define its size at the time of declaration. 
- List grows as per the program's demand and limited to the available memory space.

## imitations of using the Linked list -

- `Memory usage -` Each node of the linked list occupies two types of variables, i.e., one is a simple variable, and another one is the pointer variable.
- `Traversal` -If we have to access an element in the linked list, we cannot access it randomly, while in case of array we can randomly access it by index.
- `Reverse traversing` - Backtracking or reverse traversing is difficult in a linked list. In a doubly-linked list, it is easier but requires more memory to store the back pointer.

## `Operation On Linked List : `

- `Insertion` - This operation is performed to add an element into the list.
- `Deletion` - It is performed to delete an operation from the list.
- `Traversing` - It is performed to display the elements of the list.
- `Search` - It is performed to search an element from the list using the given key.

## Insertion In Linked List :

- `Insertion At Beginning :`
- `Insertion At End :`
- `Insertion At Given position :`
- `Insertion After Given Node :`
- `Insertion Before Given Node :`

-----------------------------------------------------------------------------------------------------------------------------------------------------
### Created And Coded By:
<a href="https://github.com/hacker-404-error"><img src="https://i.ibb.co/yYd2Xjb/In-Shot-20220309-143908060.png" alt="Avatar" style="border-radius: 50%; width:70px"></a>

<a href = "https://github.com/hacker-404-error">Pritam Das</a>

## 🔗 Feedback

If you have any feedback, please reach out to me at [![linkedin](https://img.shields.io/badge/linkedin-0A66C2?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/pritam-das-7489ab223/)
