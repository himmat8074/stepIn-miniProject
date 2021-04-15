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
    int bus_id[11] = {"1", "2","3","4","5","6","7","8" };
    char bus_name[11][101] = { "Valhalla Express",
        "Odin Express",
        "Thor Express",
        "Loki Express",
        "Freyr Express",
        "Freya Express",
        "Frig Express",
        "Balder Express"   
    };
    char bus_number[11][21] = { "VK2001",
    "VK2002", "VK2003", "VK2004", "VK2005", "VK2006", "VK2007", "VK2008" };
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
void display_busList(bus *); 
void view_seatStatus(int busNo);

void bookTicket(bus *);

void cancelBooking(); 
void viewAvailbleSeats();

#endif