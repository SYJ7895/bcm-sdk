/** \file dnx_data_max_port.h
 * 
 * MODULE DATA MAX - 
 * Maintain max value (of all devices) per define
 * 
 * Device Data
 * SW component that maintains per device data
 * The data is static and won't be changed after device initialization.
 *     
 * Supported data types:
 *     - Define             - a 'uint32' number (a max value for all devices is maintained)
 *     - feature            - 1 bit per each feature (supported/not supported) - support soc properties 
 *     - table              - the data is accessed with keys and/or can maintain multiple values and/or set by soc property
 *     - numeric            - a 'uint32' number that support soc properties
 * 
 * User interface for DNX DATA component can be found in "dnx_data_if.h" and "dnx_data_if_#module#.h"
 * 
 * Adding the data is done via XMLs placed in "tools/autocoder/DeviceData/dnx/.." 
 * "How to" User Guide can be found in confluence. 
 *        
 *     
 * 
 * AUTO-GENERATED BY AUTOCODER!
 * DO NOT EDIT THIS FILE!
 */
/* *INDENT-OFF* */
/*
 * $Copyright: (c) 2016 Broadcom.
 * Broadcom Proprietary and Confidential. All rights reserved.$
 */
#ifndef _DNX_DATA_MAX_PORT_H_
/*{*/
#define _DNX_DATA_MAX_PORT_H_
/*
 * INCLUDE FILES:
 * {
 */
#include <soc/drv.h>
#include <sal/limits.h>
#include <shared/shrextend/shrextend_debug.h>
#include <shared/utilex/utilex_framework.h>
#include <bcm/port.h>
/*
 * }
 */

/*!
* \brief This file is only used by DNX (JR2 family). Including it by
* software that is not specific to DNX is an error.
*/
#ifndef BCM_DNX_SUPPORT
#error "This file is for use by DNX (JR2) family only!"
#endif

/*
 * MAX DEFINES:
 * {
 */
/*
 * }
 */

/*
 * MAX KEYS:
 * {
 */
/**
 * \brief
 * Max value for table ucode_port and key port
 */
#define DNX_DATA_MAX_PORT_GENERAL_UCODE_PORT_PORT (0)
#if (SOC_MAX_NUM_PORTS) > DNX_DATA_MAX_PORT_GENERAL_UCODE_PORT_PORT
    #undef DNX_DATA_MAX_PORT_GENERAL_UCODE_PORT_PORT
    #define DNX_DATA_MAX_PORT_GENERAL_UCODE_PORT_PORT (SOC_MAX_NUM_PORTS)
#endif

/*
 * }
 */
/*}*/
#endif /*_DNX_DATA_MAX_PORT_H_*/
/* *INDENT-ON* */