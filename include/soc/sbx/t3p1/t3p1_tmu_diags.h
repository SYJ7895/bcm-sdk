/**
 *
 * $Id: tmu_diags_h.stg,v 1.6 Broadcom SDK $
 * $Copyright: (c) 2016 Broadcom.
 * Broadcom Proprietary and Confidential. All rights reserved.$
 * 
 *
 * t3p1_tmu_diags.h: Guadalupe2k V1.3 microcode diagnostics routines 
 *
 * This file provides the public interface to the Guadalupe2k V1.3
 * microcode.  Only explicitly documented elements (types  & functions)
 * are supported, external interfaces.  Other elements are exported only
 * for debugging convenience.
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 */


#ifndef _T3P1_TMU_DIAGS_H
#define _T3P1_TMU_DIAGS_H
#if defined(BCM_CALADAN3_SUPPORT) && defined(BCM_CALADAN3_T3P1_SUPPORT) 
#include <sal/types.h>
#include <soc/sbx/t3p1/t3p1_defs.h>
#include <soc/sbx/t3p1/t3p1_tmu.h>




/**
 * Print mac entry.
 *
 * @param[in]  unit chip unit number
 * @param[in]  e entry parameters
 */
extern void soc_sbx_t3p1_mac_print(int unit, soc_sbx_t3p1_mac_t *e);


/**
 * Print mac entry.
 *
 * @param[in]  unit chip unit number
 * @param[in]  e entry parameters
 */
extern void soc_sbx_t3p1_age2mac_print(int unit, soc_sbx_t3p1_age2mac_t *e);


/**
 * Print mac entry.
 *
 * @param[in]  unit chip unit number
 * @param[in]  e entry parameters
 */
extern void soc_sbx_t3p1_pvv2e_print(int unit, soc_sbx_t3p1_pvv2e_t *e);


/**
 * Print mac entry.
 *
 * @param[in]  unit chip unit number
 * @param[in]  e entry parameters
 */
extern void soc_sbx_t3p1_emlfilter_print(int unit, soc_sbx_t3p1_emlfilter_t *e);


/**
 * Print mac entry.
 *
 * @param[in]  unit chip unit number
 * @param[in]  e entry parameters
 */
extern void soc_sbx_t3p1_sample_dm1_print(int unit, soc_sbx_t3p1_sample_dm1_t *e);




/*
 * Utility method for updating values of overlapping fields
 */
int soc_sbx_t3p1_update_overlaps(int unit, int table, uint32 *e, char *name, int value);

/**
 * Diagnostic shell print.
 *
 * This function drives printing the state of microcode objects
 * (constants, globals, entries, memories and the memory map) based
 * on the supplied command line arguments.
 *
 * @param[in]  unit chip unit number
 * @param[in]  argc number of argument strings
 * @param[in]  argv pointer to array of argument strings
 */
extern int soc_sbx_t3p1_tmu_shell_print(int unit, int argc, char **argv);

/**
 * Diagnostic shell set.
 *
 * This function drives setting the state of microcode objects
 * (globals, entries, and memories) based
 * on the supplied command line arguments.
 *
 * @param[in]  unit chip unit number
 * @param[in]  argc number of argument strings
 * @param[in]  argv pointer to array of argument strings
 */
extern int soc_sbx_t3p1_tmu_shell_set(int unit, int argc, char **argv);

/**
 * Diagnostic shell delete.
 *
 * This function drives deleting microcode entries that support a 
 * delete operation based on the supplied command line arguments.
 *
 * @param[in]  unit chip unit number
 * @param[in]  argc number of argument strings
 * @param[in]  argv pointer to array of argument strings
 */
extern int soc_sbx_t3p1_tmu_shell_delete(int unit, int argc, char **argv);

/** Diagnostic shell set operation usage message */
extern char soc_sbx_t3p1_tmu_set_usage[];
/** Diagnostic shell print operation usage message */
extern char soc_sbx_t3p1_tmu_get_usage[];
/** Diagnostic shell delete operation usage message */
extern char soc_sbx_t3p1_tmu_delete_usage[];

#endif

#endif