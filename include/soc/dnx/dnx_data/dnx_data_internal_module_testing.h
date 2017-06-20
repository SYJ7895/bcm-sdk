/** \file dnx_data_internal_module_testing.h
 * 
 * MODULE DEVICE DATA - DNX_DATA
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
#ifndef _DNX_DATA_INTERNAL_MODULE_TESTING_H_
/*{*/
#define _DNX_DATA_INTERNAL_MODULE_TESTING_H_
/*
 * INCLUDE FILES:
 * {
 */
#include <soc/dnx/dnx_data/dnx_data_internal.h>
#include <soc/dnx/dnx_data/dnx_data_module_testing.h>
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
 * TYPEDEFS:
 * {
 */
/**
 * \brief 
 * Submodule enum
 */
typedef enum
{
    dnx_data_module_testing_submodule_unsupported,
    dnx_data_module_testing_submodule_types,
    dnx_data_module_testing_submodule_property_methods,
    dnx_data_module_testing_submodule_dbal,

    /**
     * Must be last one!
     */
    dnx_data_module_testing_submodule_nof
} dnx_data_module_testing_submodule_e;

/*
 * }
 */

/*
 * SUBMODULE UNSUPPORTED:
 * {
 */
/*
 * Features
 */
/* Feature enum - placed in if header (should be exposed to component user */
/* Get Data */
/**
 * \brief get submodule feauture - disabled/enabled
 * 
 * \par DIRECT INPUT:
 *   \param [in] unit - Unit #
 *   \param [in] feature - feature to get (see enum defintion for more details
 * \par INDIRECT INPUT:
 *   device data - module global data
 * \par DIRECT OUTPUT:
 *     is_supported - returns 1 iff supported and 0 otherwise
 * \par INDIRECT OUTPUT:
 * \remark
 *   * None
 * \see
 *   * None
 */
int dnx_data_module_testing_unsupported_feature_get(
    int unit,
    dnx_data_module_testing_unsupported_feature_e feature);

/*
 * Defines
 */
/**
 * \brief 
 * Define enum
 */
typedef enum
{
    dnx_data_module_testing_unsupported_define_supported_def,
    dnx_data_module_testing_unsupported_define_unsupported_def,

    /**
     * Must be last one!
     */
    dnx_data_module_testing_unsupported_define_nof
} dnx_data_module_testing_unsupported_define_e;

/* Get Data */
/**
 * \brief returns define data of supported_def
 * Module - 'module_testing', Submodule - 'unsupported', data - 'supported_def'
 * supported define expected to return value
 * 
 * \par DIRECT INPUT:
 *   \param [in] unit - unit #
 * \par INDIRECT INPUT:
 *   _dnx_data[unit] - module global data
 * \par DIRECT OUTPUT:
 *     supported_def - the required data value
 * \par INDIRECT OUTPUT:
 * \remark
 *   * None
 * \see
 *   * None
 */
uint32 dnx_data_module_testing_unsupported_supported_def_get(
    int unit);

/**
 * \brief returns define data of unsupported_def
 * Module - 'module_testing', Submodule - 'unsupported', data - 'unsupported_def'
 * unsupported feature expected to return NULL
 * 
 * \par DIRECT INPUT:
 *   \param [in] unit - unit #
 * \par INDIRECT INPUT:
 *   _dnx_data[unit] - module global data
 * \par DIRECT OUTPUT:
 *     unsupported_def - the required data value
 * \par INDIRECT OUTPUT:
 * \remark
 *   * None
 * \see
 *   * None
 */
uint32 dnx_data_module_testing_unsupported_unsupported_def_get(
    int unit);

/*
 * Tables
 */
/**
 * \brief 
 * Table enum
 */
typedef enum
{
    dnx_data_module_testing_unsupported_table_supported_table,
    dnx_data_module_testing_unsupported_table_unsupported_table,

    /**
     * Must be last one!
     */
    dnx_data_module_testing_unsupported_table_nof
} dnx_data_module_testing_unsupported_table_e;

/* Get Data */
/**
 * \brief get table supported_table info
 * supported table expected to return the required struct
 * 
 * \par DIRECT INPUT:
 *   \param [in] unit - unit #
 * \par INDIRECT INPUT:
 *   _dnx_data[unit] - module global data
 * \par DIRECT OUTPUT:
 *     supported_table - returns the relevant entry values grouped in struct - see dnx_data_module_testing_unsupported_supported_table_t
 * \par INDIRECT OUTPUT:
 * \remark
 *   * None
 * \see
 *   * None
 */
const dnx_data_module_testing_unsupported_supported_table_t * dnx_data_module_testing_unsupported_supported_table_get(
    int unit);

/**
 * \brief get table unsupported_table info
 * usupported table expected to return NULL
 * 
 * \par DIRECT INPUT:
 *   \param [in] unit - unit #
 * \par INDIRECT INPUT:
 *   _dnx_data[unit] - module global data
 * \par DIRECT OUTPUT:
 *     unsupported_table - returns the relevant entry values grouped in struct - see dnx_data_module_testing_unsupported_unsupported_table_t
 * \par INDIRECT OUTPUT:
 * \remark
 *   * None
 * \see
 *   * None
 */
const dnx_data_module_testing_unsupported_unsupported_table_t * dnx_data_module_testing_unsupported_unsupported_table_get(
    int unit);

/* Get Value Str */
/**
 * \brief Get table value as string
 * Module - 'module_testing', Submodule - 'unsupported', table - 'supported_table'
 * supported table expected to return the required struct
 * 
 * \par DIRECT INPUT:
 *   \param [in] unit - Unit #
 *   \param [in] key0 - key #0 index - 0 if not used
 *   \param [in] key1 - key #1 index - 0 if not used
 *   \param [in] value_index - value index to get - the index is alligned with values array in table structure
 * \par INDIRECT INPUT:
 *   _dnx_data[unit] - module global data
 * \par DIRECT OUTPUT:
 *     err - See shr_error_e
 * \par INDIRECT OUTPUT:
 *   \param [out] buffer - buffer for the value
 * \remark
 *   * None
 * \see
 *   * None
 */
shr_error_e dnx_data_module_testing_unsupported_supported_table_entry_str_get(
    int unit,
    char *buffer,
    int key0,
    int key1,
    int value_index);

/**
 * \brief Get table value as string
 * Module - 'module_testing', Submodule - 'unsupported', table - 'unsupported_table'
 * usupported table expected to return NULL
 * 
 * \par DIRECT INPUT:
 *   \param [in] unit - Unit #
 *   \param [in] key0 - key #0 index - 0 if not used
 *   \param [in] key1 - key #1 index - 0 if not used
 *   \param [in] value_index - value index to get - the index is alligned with values array in table structure
 * \par INDIRECT INPUT:
 *   _dnx_data[unit] - module global data
 * \par DIRECT OUTPUT:
 *     err - See shr_error_e
 * \par INDIRECT OUTPUT:
 *   \param [out] buffer - buffer for the value
 * \remark
 *   * None
 * \see
 *   * None
 */
shr_error_e dnx_data_module_testing_unsupported_unsupported_table_entry_str_get(
    int unit,
    char *buffer,
    int key0,
    int key1,
    int value_index);

/*
 * SUBMODULE TYPES:
 * {
 */
/*
 * Features
 */
/* Feature enum - placed in if header (should be exposed to component user */
/* Get Data */
/**
 * \brief get submodule feauture - disabled/enabled
 * 
 * \par DIRECT INPUT:
 *   \param [in] unit - Unit #
 *   \param [in] feature - feature to get (see enum defintion for more details
 * \par INDIRECT INPUT:
 *   device data - module global data
 * \par DIRECT OUTPUT:
 *     is_supported - returns 1 iff supported and 0 otherwise
 * \par INDIRECT OUTPUT:
 * \remark
 *   * None
 * \see
 *   * None
 */
int dnx_data_module_testing_types_feature_get(
    int unit,
    dnx_data_module_testing_types_feature_e feature);

/*
 * Defines
 */
/**
 * \brief 
 * Define enum
 */
typedef enum
{

    /**
     * Must be last one!
     */
    dnx_data_module_testing_types_define_nof
} dnx_data_module_testing_types_define_e;

/* Get Data */
/*
 * Tables
 */
/**
 * \brief 
 * Table enum
 */
typedef enum
{
    dnx_data_module_testing_types_table_all,

    /**
     * Must be last one!
     */
    dnx_data_module_testing_types_table_nof
} dnx_data_module_testing_types_table_e;

/* Get Data */
/**
 * \brief get table all info
 * test all supported types
 * 
 * \par DIRECT INPUT:
 *   \param [in] unit - unit #
 * \par INDIRECT INPUT:
 *   _dnx_data[unit] - module global data
 * \par DIRECT OUTPUT:
 *     all - returns the relevant entry values grouped in struct - see dnx_data_module_testing_types_all_t
 * \par INDIRECT OUTPUT:
 * \remark
 *   * None
 * \see
 *   * None
 */
const dnx_data_module_testing_types_all_t * dnx_data_module_testing_types_all_get(
    int unit);

/* Get Value Str */
/**
 * \brief Get table value as string
 * Module - 'module_testing', Submodule - 'types', table - 'all'
 * test all supported types
 * 
 * \par DIRECT INPUT:
 *   \param [in] unit - Unit #
 *   \param [in] key0 - key #0 index - 0 if not used
 *   \param [in] key1 - key #1 index - 0 if not used
 *   \param [in] value_index - value index to get - the index is alligned with values array in table structure
 * \par INDIRECT INPUT:
 *   _dnx_data[unit] - module global data
 * \par DIRECT OUTPUT:
 *     err - See shr_error_e
 * \par INDIRECT OUTPUT:
 *   \param [out] buffer - buffer for the value
 * \remark
 *   * None
 * \see
 *   * None
 */
shr_error_e dnx_data_module_testing_types_all_entry_str_get(
    int unit,
    char *buffer,
    int key0,
    int key1,
    int value_index);

/*
 * SUBMODULE PROPERTY_METHODS:
 * {
 */
/*
 * Features
 */
/* Feature enum - placed in if header (should be exposed to component user */
/* Get Data */
/**
 * \brief get submodule feauture - disabled/enabled
 * 
 * \par DIRECT INPUT:
 *   \param [in] unit - Unit #
 *   \param [in] feature - feature to get (see enum defintion for more details
 * \par INDIRECT INPUT:
 *   device data - module global data
 * \par DIRECT OUTPUT:
 *     is_supported - returns 1 iff supported and 0 otherwise
 * \par INDIRECT OUTPUT:
 * \remark
 *   * None
 * \see
 *   * None
 */
int dnx_data_module_testing_property_methods_feature_get(
    int unit,
    dnx_data_module_testing_property_methods_feature_e feature);

/*
 * Defines
 */
/**
 * \brief 
 * Define enum
 */
typedef enum
{
    dnx_data_module_testing_property_methods_define_numeric_range,

    /**
     * Must be last one!
     */
    dnx_data_module_testing_property_methods_define_nof
} dnx_data_module_testing_property_methods_define_e;

/* Get Data */
/**
 * \brief returns numeric data of numeric_range
 * Module - 'module_testing', Submodule - 'property_methods', data - 'numeric_range'
 * test numeric range method
 * 
 * \par DIRECT INPUT:
 *   \param [in] unit - unit #
 * \par INDIRECT INPUT:
 *   _dnx_data[unit] - module global data
 * \par DIRECT OUTPUT:
 *     numeric_range - the required data value
 * \par INDIRECT OUTPUT:
 * \remark
 *   * None
 * \see
 *   * None
 */
uint32 dnx_data_module_testing_property_methods_numeric_range_get(
    int unit);

/*
 * Tables
 */
/**
 * \brief 
 * Table enum
 */
typedef enum
{
    dnx_data_module_testing_property_methods_table_enable,
    dnx_data_module_testing_property_methods_table_port_enable,
    dnx_data_module_testing_property_methods_table_suffix_enable,
    dnx_data_module_testing_property_methods_table_range,
    dnx_data_module_testing_property_methods_table_port_range,
    dnx_data_module_testing_property_methods_table_suffix_range,
    dnx_data_module_testing_property_methods_table_direct_map,
    dnx_data_module_testing_property_methods_table_port_direct_map,
    dnx_data_module_testing_property_methods_table_suffix_direct_map,
    dnx_data_module_testing_property_methods_table_custom,

    /**
     * Must be last one!
     */
    dnx_data_module_testing_property_methods_table_nof
} dnx_data_module_testing_property_methods_table_e;

/* Get Data */
/**
 * \brief get table enable info
 * test all supported types
 * 
 * \par DIRECT INPUT:
 *   \param [in] unit - unit #
 * \par INDIRECT INPUT:
 *   _dnx_data[unit] - module global data
 * \par DIRECT OUTPUT:
 *     enable - returns the relevant entry values grouped in struct - see dnx_data_module_testing_property_methods_enable_t
 * \par INDIRECT OUTPUT:
 * \remark
 *   * None
 * \see
 *   * None
 */
const dnx_data_module_testing_property_methods_enable_t * dnx_data_module_testing_property_methods_enable_get(
    int unit);

/**
 * \brief get table port_enable info
 * test all supported types
 * 
 * \par DIRECT INPUT:
 *   \param [in] unit - unit #
 *   \param [in] port - logical port
 * \par INDIRECT INPUT:
 *   _dnx_data[unit] - module global data
 * \par DIRECT OUTPUT:
 *     port_enable - returns the relevant entry values grouped in struct - see dnx_data_module_testing_property_methods_port_enable_t
 * \par INDIRECT OUTPUT:
 * \remark
 *   * None
 * \see
 *   * None
 */
const dnx_data_module_testing_property_methods_port_enable_t * dnx_data_module_testing_property_methods_port_enable_get(
    int unit,
    int port);

/**
 * \brief get table suffix_enable info
 * test all supported types
 * 
 * \par DIRECT INPUT:
 *   \param [in] unit - unit #
 *   \param [in] link - link id
 * \par INDIRECT INPUT:
 *   _dnx_data[unit] - module global data
 * \par DIRECT OUTPUT:
 *     suffix_enable - returns the relevant entry values grouped in struct - see dnx_data_module_testing_property_methods_suffix_enable_t
 * \par INDIRECT OUTPUT:
 * \remark
 *   * None
 * \see
 *   * None
 */
const dnx_data_module_testing_property_methods_suffix_enable_t * dnx_data_module_testing_property_methods_suffix_enable_get(
    int unit,
    int link);

/**
 * \brief get table range info
 * test prop range method types
 * 
 * \par DIRECT INPUT:
 *   \param [in] unit - unit #
 * \par INDIRECT INPUT:
 *   _dnx_data[unit] - module global data
 * \par DIRECT OUTPUT:
 *     range - returns the relevant entry values grouped in struct - see dnx_data_module_testing_property_methods_range_t
 * \par INDIRECT OUTPUT:
 * \remark
 *   * None
 * \see
 *   * None
 */
const dnx_data_module_testing_property_methods_range_t * dnx_data_module_testing_property_methods_range_get(
    int unit);

/**
 * \brief get table port_range info
 * test prop port range method types
 * 
 * \par DIRECT INPUT:
 *   \param [in] unit - unit #
 *   \param [in] port - logical port
 * \par INDIRECT INPUT:
 *   _dnx_data[unit] - module global data
 * \par DIRECT OUTPUT:
 *     port_range - returns the relevant entry values grouped in struct - see dnx_data_module_testing_property_methods_port_range_t
 * \par INDIRECT OUTPUT:
 * \remark
 *   * None
 * \see
 *   * None
 */
const dnx_data_module_testing_property_methods_port_range_t * dnx_data_module_testing_property_methods_port_range_get(
    int unit,
    int port);

/**
 * \brief get table suffix_range info
 * test prop suffix range method types
 * 
 * \par DIRECT INPUT:
 *   \param [in] unit - unit #
 *   \param [in] link - link id
 * \par INDIRECT INPUT:
 *   _dnx_data[unit] - module global data
 * \par DIRECT OUTPUT:
 *     suffix_range - returns the relevant entry values grouped in struct - see dnx_data_module_testing_property_methods_suffix_range_t
 * \par INDIRECT OUTPUT:
 * \remark
 *   * None
 * \see
 *   * None
 */
const dnx_data_module_testing_property_methods_suffix_range_t * dnx_data_module_testing_property_methods_suffix_range_get(
    int unit,
    int link);

/**
 * \brief get table direct_map info
 * test prop direct map method types
 * 
 * \par DIRECT INPUT:
 *   \param [in] unit - unit #
 * \par INDIRECT INPUT:
 *   _dnx_data[unit] - module global data
 * \par DIRECT OUTPUT:
 *     direct_map - returns the relevant entry values grouped in struct - see dnx_data_module_testing_property_methods_direct_map_t
 * \par INDIRECT OUTPUT:
 * \remark
 *   * None
 * \see
 *   * None
 */
const dnx_data_module_testing_property_methods_direct_map_t * dnx_data_module_testing_property_methods_direct_map_get(
    int unit);

/**
 * \brief get table port_direct_map info
 * test prop port direct map method types
 * 
 * \par DIRECT INPUT:
 *   \param [in] unit - unit #
 *   \param [in] port - logical port
 * \par INDIRECT INPUT:
 *   _dnx_data[unit] - module global data
 * \par DIRECT OUTPUT:
 *     port_direct_map - returns the relevant entry values grouped in struct - see dnx_data_module_testing_property_methods_port_direct_map_t
 * \par INDIRECT OUTPUT:
 * \remark
 *   * None
 * \see
 *   * None
 */
const dnx_data_module_testing_property_methods_port_direct_map_t * dnx_data_module_testing_property_methods_port_direct_map_get(
    int unit,
    int port);

/**
 * \brief get table suffix_direct_map info
 * test prop suffix direct map method types
 * 
 * \par DIRECT INPUT:
 *   \param [in] unit - unit #
 *   \param [in] link - link id
 * \par INDIRECT INPUT:
 *   _dnx_data[unit] - module global data
 * \par DIRECT OUTPUT:
 *     suffix_direct_map - returns the relevant entry values grouped in struct - see dnx_data_module_testing_property_methods_suffix_direct_map_t
 * \par INDIRECT OUTPUT:
 * \remark
 *   * None
 * \see
 *   * None
 */
const dnx_data_module_testing_property_methods_suffix_direct_map_t * dnx_data_module_testing_property_methods_suffix_direct_map_get(
    int unit,
    int link);

/**
 * \brief get table custom info
 * test prop custom method types
 * 
 * \par DIRECT INPUT:
 *   \param [in] unit - unit #
 *   \param [in] link - link id
 *   \param [in] pipe - pipe id
 * \par INDIRECT INPUT:
 *   _dnx_data[unit] - module global data
 * \par DIRECT OUTPUT:
 *     custom - returns the relevant entry values grouped in struct - see dnx_data_module_testing_property_methods_custom_t
 * \par INDIRECT OUTPUT:
 * \remark
 *   * None
 * \see
 *   * None
 */
const dnx_data_module_testing_property_methods_custom_t * dnx_data_module_testing_property_methods_custom_get(
    int unit,
    int link,
    int pipe);

/* Get Value Str */
/**
 * \brief Get table value as string
 * Module - 'module_testing', Submodule - 'property_methods', table - 'enable'
 * test all supported types
 * 
 * \par DIRECT INPUT:
 *   \param [in] unit - Unit #
 *   \param [in] key0 - key #0 index - 0 if not used
 *   \param [in] key1 - key #1 index - 0 if not used
 *   \param [in] value_index - value index to get - the index is alligned with values array in table structure
 * \par INDIRECT INPUT:
 *   _dnx_data[unit] - module global data
 * \par DIRECT OUTPUT:
 *     err - See shr_error_e
 * \par INDIRECT OUTPUT:
 *   \param [out] buffer - buffer for the value
 * \remark
 *   * None
 * \see
 *   * None
 */
shr_error_e dnx_data_module_testing_property_methods_enable_entry_str_get(
    int unit,
    char *buffer,
    int key0,
    int key1,
    int value_index);

/**
 * \brief Get table value as string
 * Module - 'module_testing', Submodule - 'property_methods', table - 'port_enable'
 * test all supported types
 * 
 * \par DIRECT INPUT:
 *   \param [in] unit - Unit #
 *   \param [in] key0 - key #0 index - 0 if not used
 *   \param [in] key1 - key #1 index - 0 if not used
 *   \param [in] value_index - value index to get - the index is alligned with values array in table structure
 * \par INDIRECT INPUT:
 *   _dnx_data[unit] - module global data
 * \par DIRECT OUTPUT:
 *     err - See shr_error_e
 * \par INDIRECT OUTPUT:
 *   \param [out] buffer - buffer for the value
 * \remark
 *   * None
 * \see
 *   * None
 */
shr_error_e dnx_data_module_testing_property_methods_port_enable_entry_str_get(
    int unit,
    char *buffer,
    int key0,
    int key1,
    int value_index);

/**
 * \brief Get table value as string
 * Module - 'module_testing', Submodule - 'property_methods', table - 'suffix_enable'
 * test all supported types
 * 
 * \par DIRECT INPUT:
 *   \param [in] unit - Unit #
 *   \param [in] key0 - key #0 index - 0 if not used
 *   \param [in] key1 - key #1 index - 0 if not used
 *   \param [in] value_index - value index to get - the index is alligned with values array in table structure
 * \par INDIRECT INPUT:
 *   _dnx_data[unit] - module global data
 * \par DIRECT OUTPUT:
 *     err - See shr_error_e
 * \par INDIRECT OUTPUT:
 *   \param [out] buffer - buffer for the value
 * \remark
 *   * None
 * \see
 *   * None
 */
shr_error_e dnx_data_module_testing_property_methods_suffix_enable_entry_str_get(
    int unit,
    char *buffer,
    int key0,
    int key1,
    int value_index);

/**
 * \brief Get table value as string
 * Module - 'module_testing', Submodule - 'property_methods', table - 'range'
 * test prop range method types
 * 
 * \par DIRECT INPUT:
 *   \param [in] unit - Unit #
 *   \param [in] key0 - key #0 index - 0 if not used
 *   \param [in] key1 - key #1 index - 0 if not used
 *   \param [in] value_index - value index to get - the index is alligned with values array in table structure
 * \par INDIRECT INPUT:
 *   _dnx_data[unit] - module global data
 * \par DIRECT OUTPUT:
 *     err - See shr_error_e
 * \par INDIRECT OUTPUT:
 *   \param [out] buffer - buffer for the value
 * \remark
 *   * None
 * \see
 *   * None
 */
shr_error_e dnx_data_module_testing_property_methods_range_entry_str_get(
    int unit,
    char *buffer,
    int key0,
    int key1,
    int value_index);

/**
 * \brief Get table value as string
 * Module - 'module_testing', Submodule - 'property_methods', table - 'port_range'
 * test prop port range method types
 * 
 * \par DIRECT INPUT:
 *   \param [in] unit - Unit #
 *   \param [in] key0 - key #0 index - 0 if not used
 *   \param [in] key1 - key #1 index - 0 if not used
 *   \param [in] value_index - value index to get - the index is alligned with values array in table structure
 * \par INDIRECT INPUT:
 *   _dnx_data[unit] - module global data
 * \par DIRECT OUTPUT:
 *     err - See shr_error_e
 * \par INDIRECT OUTPUT:
 *   \param [out] buffer - buffer for the value
 * \remark
 *   * None
 * \see
 *   * None
 */
shr_error_e dnx_data_module_testing_property_methods_port_range_entry_str_get(
    int unit,
    char *buffer,
    int key0,
    int key1,
    int value_index);

/**
 * \brief Get table value as string
 * Module - 'module_testing', Submodule - 'property_methods', table - 'suffix_range'
 * test prop suffix range method types
 * 
 * \par DIRECT INPUT:
 *   \param [in] unit - Unit #
 *   \param [in] key0 - key #0 index - 0 if not used
 *   \param [in] key1 - key #1 index - 0 if not used
 *   \param [in] value_index - value index to get - the index is alligned with values array in table structure
 * \par INDIRECT INPUT:
 *   _dnx_data[unit] - module global data
 * \par DIRECT OUTPUT:
 *     err - See shr_error_e
 * \par INDIRECT OUTPUT:
 *   \param [out] buffer - buffer for the value
 * \remark
 *   * None
 * \see
 *   * None
 */
shr_error_e dnx_data_module_testing_property_methods_suffix_range_entry_str_get(
    int unit,
    char *buffer,
    int key0,
    int key1,
    int value_index);

/**
 * \brief Get table value as string
 * Module - 'module_testing', Submodule - 'property_methods', table - 'direct_map'
 * test prop direct map method types
 * 
 * \par DIRECT INPUT:
 *   \param [in] unit - Unit #
 *   \param [in] key0 - key #0 index - 0 if not used
 *   \param [in] key1 - key #1 index - 0 if not used
 *   \param [in] value_index - value index to get - the index is alligned with values array in table structure
 * \par INDIRECT INPUT:
 *   _dnx_data[unit] - module global data
 * \par DIRECT OUTPUT:
 *     err - See shr_error_e
 * \par INDIRECT OUTPUT:
 *   \param [out] buffer - buffer for the value
 * \remark
 *   * None
 * \see
 *   * None
 */
shr_error_e dnx_data_module_testing_property_methods_direct_map_entry_str_get(
    int unit,
    char *buffer,
    int key0,
    int key1,
    int value_index);

/**
 * \brief Get table value as string
 * Module - 'module_testing', Submodule - 'property_methods', table - 'port_direct_map'
 * test prop port direct map method types
 * 
 * \par DIRECT INPUT:
 *   \param [in] unit - Unit #
 *   \param [in] key0 - key #0 index - 0 if not used
 *   \param [in] key1 - key #1 index - 0 if not used
 *   \param [in] value_index - value index to get - the index is alligned with values array in table structure
 * \par INDIRECT INPUT:
 *   _dnx_data[unit] - module global data
 * \par DIRECT OUTPUT:
 *     err - See shr_error_e
 * \par INDIRECT OUTPUT:
 *   \param [out] buffer - buffer for the value
 * \remark
 *   * None
 * \see
 *   * None
 */
shr_error_e dnx_data_module_testing_property_methods_port_direct_map_entry_str_get(
    int unit,
    char *buffer,
    int key0,
    int key1,
    int value_index);

/**
 * \brief Get table value as string
 * Module - 'module_testing', Submodule - 'property_methods', table - 'suffix_direct_map'
 * test prop suffix direct map method types
 * 
 * \par DIRECT INPUT:
 *   \param [in] unit - Unit #
 *   \param [in] key0 - key #0 index - 0 if not used
 *   \param [in] key1 - key #1 index - 0 if not used
 *   \param [in] value_index - value index to get - the index is alligned with values array in table structure
 * \par INDIRECT INPUT:
 *   _dnx_data[unit] - module global data
 * \par DIRECT OUTPUT:
 *     err - See shr_error_e
 * \par INDIRECT OUTPUT:
 *   \param [out] buffer - buffer for the value
 * \remark
 *   * None
 * \see
 *   * None
 */
shr_error_e dnx_data_module_testing_property_methods_suffix_direct_map_entry_str_get(
    int unit,
    char *buffer,
    int key0,
    int key1,
    int value_index);

/**
 * \brief Get table value as string
 * Module - 'module_testing', Submodule - 'property_methods', table - 'custom'
 * test prop custom method types
 * 
 * \par DIRECT INPUT:
 *   \param [in] unit - Unit #
 *   \param [in] key0 - key #0 index - 0 if not used
 *   \param [in] key1 - key #1 index - 0 if not used
 *   \param [in] value_index - value index to get - the index is alligned with values array in table structure
 * \par INDIRECT INPUT:
 *   _dnx_data[unit] - module global data
 * \par DIRECT OUTPUT:
 *     err - See shr_error_e
 * \par INDIRECT OUTPUT:
 *   \param [out] buffer - buffer for the value
 * \remark
 *   * None
 * \see
 *   * None
 */
shr_error_e dnx_data_module_testing_property_methods_custom_entry_str_get(
    int unit,
    char *buffer,
    int key0,
    int key1,
    int value_index);

/*
 * SUBMODULE DBAL:
 * {
 */
/*
 * Features
 */
/* Feature enum - placed in if header (should be exposed to component user */
/* Get Data */
/**
 * \brief get submodule feauture - disabled/enabled
 * 
 * \par DIRECT INPUT:
 *   \param [in] unit - Unit #
 *   \param [in] feature - feature to get (see enum defintion for more details
 * \par INDIRECT INPUT:
 *   device data - module global data
 * \par DIRECT OUTPUT:
 *     is_supported - returns 1 iff supported and 0 otherwise
 * \par INDIRECT OUTPUT:
 * \remark
 *   * None
 * \see
 *   * None
 */
int dnx_data_module_testing_dbal_feature_get(
    int unit,
    dnx_data_module_testing_dbal_feature_e feature);

/*
 * Defines
 */
/**
 * \brief 
 * Define enum
 */
typedef enum
{
    dnx_data_module_testing_dbal_define_vrf_field_size,

    /**
     * Must be last one!
     */
    dnx_data_module_testing_dbal_define_nof
} dnx_data_module_testing_dbal_define_e;

/* Get Data */
/**
 * \brief returns define data of vrf_field_size
 * Module - 'module_testing', Submodule - 'dbal', data - 'vrf_field_size'
 * field size test
 * 
 * \par DIRECT INPUT:
 *   \param [in] unit - unit #
 * \par INDIRECT INPUT:
 *   _dnx_data[unit] - module global data
 * \par DIRECT OUTPUT:
 *     vrf_field_size - the required data value
 * \par INDIRECT OUTPUT:
 * \remark
 *   * None
 * \see
 *   * None
 */
uint32 dnx_data_module_testing_dbal_vrf_field_size_get(
    int unit);

/*
 * Tables
 */
/**
 * \brief 
 * Table enum
 */
typedef enum
{
    dnx_data_module_testing_dbal_table_all,

    /**
     * Must be last one!
     */
    dnx_data_module_testing_dbal_table_nof
} dnx_data_module_testing_dbal_table_e;

/* Get Data */
/**
 * \brief get table all info
 * test all supported types
 * 
 * \par DIRECT INPUT:
 *   \param [in] unit - unit #
 * \par INDIRECT INPUT:
 *   _dnx_data[unit] - module global data
 * \par DIRECT OUTPUT:
 *     all - returns the relevant entry values grouped in struct - see dnx_data_module_testing_dbal_all_t
 * \par INDIRECT OUTPUT:
 * \remark
 *   * None
 * \see
 *   * None
 */
const dnx_data_module_testing_dbal_all_t * dnx_data_module_testing_dbal_all_get(
    int unit);

/* Get Value Str */
/**
 * \brief Get table value as string
 * Module - 'module_testing', Submodule - 'dbal', table - 'all'
 * test all supported types
 * 
 * \par DIRECT INPUT:
 *   \param [in] unit - Unit #
 *   \param [in] key0 - key #0 index - 0 if not used
 *   \param [in] key1 - key #1 index - 0 if not used
 *   \param [in] value_index - value index to get - the index is alligned with values array in table structure
 * \par INDIRECT INPUT:
 *   _dnx_data[unit] - module global data
 * \par DIRECT OUTPUT:
 *     err - See shr_error_e
 * \par INDIRECT OUTPUT:
 *   \param [out] buffer - buffer for the value
 * \remark
 *   * None
 * \see
 *   * None
 */
shr_error_e dnx_data_module_testing_dbal_all_entry_str_get(
    int unit,
    char *buffer,
    int key0,
    int key1,
    int value_index);

/*
 * FUNCTIONS:
 * {
 */
/**
 * \brief Init module
 * 
 * \par DIRECT INPUT:
 *   \param [in] unit - Unit #
 * \par INDIRECT INPUT:
 *   * None
 * \par DIRECT OUTPUT:
 *     rv - see 'shr_error_e
 * \par INDIRECT OUTPUT:
 *   \param [out] module_data - pointer to module data
 * \remark
 *   * None
 * \see
 *   * None
 */
shr_error_e dnx_data_module_testing_init(
    int unit,
    dnx_data_module_t *module_data);

/*
 * }
 */
/*}*/
#else     /*DNX_DATA_INTERNAL_MODULE_TESTING_H_*/
/*{*/
#ifndef DNX_DATA_INTERNAL
/*{*/
#error "dnx_data_internal_module_testing file might include any header files, therfore header files must not include it.\nAny include to dnx_data_internal_module_testing must be from 'c' file"
/*}*/
#endif /*DNX_DATA_INTERNAL*/
/*}*/
#endif /*_DNX_DATA_INTERNAL_MODULE_TESTING_H_*/
/* *INDENT-ON* */