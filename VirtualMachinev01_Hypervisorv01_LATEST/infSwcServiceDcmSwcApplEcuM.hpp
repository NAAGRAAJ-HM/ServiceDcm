#pragma once
/******************************************************************************/
/* File   : infSwcServiceDcmSwcApplEcuM.h                                     */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "MemMap_SwcServiceDcm.hpp"
#include "Types_CfgSwcServiceDcm.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
extern FUNC(void, SWCSERVICEDCM_CODE) infSwcServiceDcmSwcApplEcuM_vInitFunction(
   P2CONST(Type_CfgSwcServiceDcm_st, SWCSERVICEDCM_VAR, SWCSERVICEDCM_CONST) ConfigPtr
);

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
