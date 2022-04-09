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
#include <iostream>
using namespace std;
int main()
{
    int i, size;
    int arr[]={53, 99, -11, 5, 102};    //declaring and initializing array
    size=sizeof(arr)/sizeof(arr[0]);
    cout << "The array elements are: ";
    for(i=0;i<size;i++)
        cout << "\n" << "arr[" << i << "]= " << arr[i];
    return 0;
}
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
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a[100],n,i,min;
    cout<<"Enter the no of elements you want to enter :"<<endl;
    cin>>n;
    cout<<"Enter the elements :"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    min=a[0];

    for(i=0;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
     cout<<"Minimum Element Is: "<<min;
    getch();
    return 0;
}
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
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a[100],n,i,max;
    cout<<"Enter the no of elements you want to enter :"<<endl;
    cin>>n;
    cout<<"Enter the elements :"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    max=a[0];

    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
     cout<<"Maximum Element Is: "<<max;
    getch();
    return 0;
}
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

## `Insertion In Array`
Insert operation is to insert one or more data elements into an array. Based on the requirement, a new element can be added at the beginning, end, or any given index of array.
Insertion At Beginning : [![Open In Collab](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)]()
Insertion At End : [![Open In Collab](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)]()
Insertion At Position : [![Open In Collab](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)]()


## `Deletion From Array`
Deletion refers to removing an existing element from the array and re-organizing all elements of an array.

## `Search Operation`
You can perform a search for an array element based on its value or its index.

## `Update Operation`
Update operation refers to updating an existing element from the array at a given index.















### Created And Coded By:

<a href="https://github.com/hacker-404-error"><img src="https://i.ibb.co/yYd2Xjb/In-Shot-20220309-143908060.png" alt="Avatar" style="border-radius: 50%; width:70px"></a>

<a href = "https://github.com/hacker-404-error">Pritam Das</a>

## 🔗 Feedback

If you have any feedback, please reach out to me at [![linkedin](https://img.shields.io/badge/linkedin-0A66C2?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/pritam-das-7489ab223/)
