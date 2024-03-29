//========================================================================================
/*                                                                                      *
 *                                    include guards                                    *
 *                                                                                      */
//=======================================================================================
#ifndef _ADMIN_H
#define _ADMIN_H
//########################################################################################
//========================================================================================
/*                                                                                      *
 *                            import essential header files                             *
 *                                                                                      */
//========================================================================================
#include<stdio.h>
#include <string.h> 
//########################################################################################

//========================================================================================
/*                                                                                      *
 *                             import user defined functions                            *
 *                                                                                      */
//========================================================================================
#include "../Strutures/UserStruct.h"
#include "../Strutures/PropertyStrutures.h"
#include "../Strutures/SetStruct.h"
//########################################################################################

//========================================================================================
/*                                                                                      *
 *                                 function declartions                                 *
 *                                                                                      */
//=======================================================================================

/*
*@description  This function will add new admins
*@param username and password of the user to add
*@retuens 1 if the user is added 0 if error occured
*/
int AddUser(char username[],char password[]);

/*
*@description  This function will add new properties
*@param 1) A pointer pointing towards the struture which contains property details
*       2) A pointer pointing towards the set structure which contains all the prop details
*@retuens 1 if the property is added 0 if error occured
*/
int AddProperty(propStrut* propertyDetails);
//########################################################################################

#endif