/**
 * @file prototype.h
 * @author Himmat Singh (https://github.com/himmat8074/stepIn-miniProject)
 * @brief 
 * @version 0.1
 * @date 2021-04-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _PROTYTPES_H
#define _PROTYTPES_H

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Error values
 * 
 */
typedef enum error_t{
    ERROR_NULL_PTR = -2,
    SUCCESS = 0,
    START_EXISTS=1,
    NO_HEAD_EXIST=2,
    DATE_INCORRECT=3,
    INVALID_NAME=4,
    ID_EXISTS=5
}error_t;

/**
 * @brief Structure containig details about bus
 * 
 */
typedef struct bus
{
    /* data */
    int bus_id;
    char bus_name[101];
    int bus_number;
}bus;

/**
 * @brief Structure containg details of user 
 * 
 */
typedef struct user
{
    char username[21];
    char passcode[21];
}user;

/**
 * @brief function declarations
 * 
 */
void displayLogin(); 
void display_signIn(user *);
void display_register(user *);
void display_mainMenu();

//continue working from here
void display_busList(); 
void bookTicket(); 
void cancelBooking(); 
void viewAvailbleSeats();

#endif