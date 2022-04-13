/*
         MEGN540 Mechatronics Lab
    Copyright (C) Andrew Petruska, 2021.
       apetruska [at] mines [dot] edu
          www.mechanical.mines.edu
*/

/*
    Copyright (c) 2021 Andrew Petruska at Colorado School of Mines

    Permission is hereby granted, free of charge, to any person obtaining a copy
    of this software and associated documentation files (the "Software"), to
   deal in the Software without restriction, including without limitation the
   rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
   sell copies of the Software, and to permit persons to whom the Software is
    furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included in
   all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
    AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
   FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
   IN THE SOFTWARE.

*/

/*
 * This file defines lab-spcific tasks for execution
 */

#ifndef MEGN540_LAB_TASKS_H
#define MEGN540_LAB_TASKS_H

#include "Task_Management.h"
#include "SerialIO.h"


// Create tasks that get initiated from USB messages
// These tasks need to be initialized with appropriate function pointers
// in the main lab function
Task_t task_restart;    ///<-- Lab 1: This flag indicates that the device received a restart command from the hoast. Default inactive.
// Task_t task_time_loop;  ///<-- Lab 2: Indicates if the system should report time to complete a loop.
// Task_t task_send_time;  ///<-- Lab 2: Indicates if the system should send the current time.


// Put your lab-specific task functionality and data_structures (if necessary) here so it is accessable to both
// message handeling and the Lab main loops. 
 
// Lab 1 Math Operations
void Multiply_And_Send(float value_left, float value_right );
void Divide_And_Send(float value_left, float value_right );
void Add_And_Send(float value_left, float value_right );
void Subtract_And_Send(float value_left, float value_right );


#endif