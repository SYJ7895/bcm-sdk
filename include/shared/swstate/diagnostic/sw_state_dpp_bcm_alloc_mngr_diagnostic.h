/* $Id: $
 * 
 * $Copyright: (c) 2016 Broadcom.
 * Broadcom Proprietary and Confidential. All rights reserved.$
 * 
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 * search for 'sw_state_diagnostic_cbs_t' for the root of the struct
 */

#ifndef _SHR_SW_STATE_DPP_BCM_ALLOC_MNGR_DIAGNOSTIC_H_
#define _SHR_SW_STATE_DPP_BCM_ALLOC_MNGR_DIAGNOSTIC_H_

#ifdef BCM_WARM_BOOT_API_TEST
/********************************* diagnostic calbacks definitions *************************************/
/* this set of callbacks, are the callbacks used in the diagnostic calbacks struct 'sw_state_cbs_t' to */
/* access the data in 'sw_state_t'.                                                                */
/* the calbacks are inserted into the diagnostic struct by 'sw_state_diagnostic_cb_init'.                  */
/***************************************************************************************************/

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_alloc_mngr_dump */
typedef int (*sw_state_dpp_bcm_alloc_mngr_dump_cb)(
    int unit);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_alloc_mngr_fec_bank_groups_dump */
typedef int (*sw_state_dpp_bcm_alloc_mngr_fec_bank_groups_dump_cb)(
    int unit, int alloc_mngr_idx_0);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_alloc_mngr_resource_to_pool_map_dump */
typedef int (*sw_state_dpp_bcm_alloc_mngr_resource_to_pool_map_dump_cb)(
    int unit, int alloc_mngr_idx_0);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_alloc_mngr_template_to_pool_map_dump */
typedef int (*sw_state_dpp_bcm_alloc_mngr_template_to_pool_map_dump_cb)(
    int unit, int alloc_mngr_idx_0);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_alloc_mngr_egress_encap_dump */
typedef int (*sw_state_dpp_bcm_alloc_mngr_egress_encap_dump_cb)(
    int unit, int alloc_mngr_idx_0);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_alloc_mngr_egress_encap_egress_encap_banks_dump */
typedef int (*sw_state_dpp_bcm_alloc_mngr_egress_encap_egress_encap_banks_dump_cb)(
    int unit, int alloc_mngr_idx_0);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_alloc_mngr_egress_encap_egress_encap_count_dump */
typedef int (*sw_state_dpp_bcm_alloc_mngr_egress_encap_egress_encap_count_dump_cb)(
    int unit, int alloc_mngr_idx_0);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_alloc_mngr_egress_encap_init_dump */
typedef int (*sw_state_dpp_bcm_alloc_mngr_egress_encap_init_dump_cb)(
    int unit, int alloc_mngr_idx_0);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_alloc_mngr_ingress_lif_dump */
typedef int (*sw_state_dpp_bcm_alloc_mngr_ingress_lif_dump_cb)(
    int unit, int alloc_mngr_idx_0);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_alloc_mngr_ingress_lif_ingress_lif_banks_dump */
typedef int (*sw_state_dpp_bcm_alloc_mngr_ingress_lif_ingress_lif_banks_dump_cb)(
    int unit, int alloc_mngr_idx_0);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_alloc_mngr_ingress_lif_ingress_lif_count_dump */
typedef int (*sw_state_dpp_bcm_alloc_mngr_ingress_lif_ingress_lif_count_dump_cb)(
    int unit, int alloc_mngr_idx_0);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_alloc_mngr_ingress_lif_init_dump */
typedef int (*sw_state_dpp_bcm_alloc_mngr_ingress_lif_init_dump_cb)(
    int unit, int alloc_mngr_idx_0);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_alloc_mngr_sync_lif_dump */
typedef int (*sw_state_dpp_bcm_alloc_mngr_sync_lif_dump_cb)(
    int unit, int alloc_mngr_idx_0);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_alloc_mngr_sync_lif_sync_lif_banks_dump */
typedef int (*sw_state_dpp_bcm_alloc_mngr_sync_lif_sync_lif_banks_dump_cb)(
    int unit, int alloc_mngr_idx_0);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_alloc_mngr_sync_lif_init_dump */
typedef int (*sw_state_dpp_bcm_alloc_mngr_sync_lif_init_dump_cb)(
    int unit, int alloc_mngr_idx_0);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_alloc_mngr_egr_thresh_map_dump */
typedef int (*sw_state_dpp_bcm_alloc_mngr_egr_thresh_map_dump_cb)(
    int unit, int alloc_mngr_idx_0);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_alloc_mngr_egr_interface_unicast_thresh_map_dump */
typedef int (*sw_state_dpp_bcm_alloc_mngr_egr_interface_unicast_thresh_map_dump_cb)(
    int unit, int alloc_mngr_idx_0);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_alloc_mngr_egr_interface_multicast_thresh_map_dump */
typedef int (*sw_state_dpp_bcm_alloc_mngr_egr_interface_multicast_thresh_map_dump_cb)(
    int unit, int alloc_mngr_idx_0);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
#ifdef BCM_88470_A0
/* implemented by: sw_state_dpp_bcm_alloc_mngr_fec_is_cascaded_dump */
typedef int (*sw_state_dpp_bcm_alloc_mngr_fec_is_cascaded_dump_cb)(
    int unit, int alloc_mngr_idx_0);
#endif /* BCM_88470_A0*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

/*********************************** diagnostic calbacks struct ****************************************/
/* this set of structs, rooted at 'sw_state_cbs_t' define the diagnostic layer for the entire SW state.*/
/* use this tree to dump fields in the sw state rooted at 'sw_state_t'.              */
/* NOTE: 'sw_state_t' data should not be accessed directly.                                        */
/***************************************************************************************************/

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
typedef struct sw_state_dpp_bcm_alloc_mngr_fec_bank_groups_diagnostic_cbs_s {
    sw_state_dpp_bcm_alloc_mngr_fec_bank_groups_dump_cb dump;
} sw_state_dpp_bcm_alloc_mngr_fec_bank_groups_diagnostic_cbs_t;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
typedef struct sw_state_dpp_bcm_alloc_mngr_resource_to_pool_map_diagnostic_cbs_s {
    sw_state_dpp_bcm_alloc_mngr_resource_to_pool_map_dump_cb dump;
} sw_state_dpp_bcm_alloc_mngr_resource_to_pool_map_diagnostic_cbs_t;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
typedef struct sw_state_dpp_bcm_alloc_mngr_template_to_pool_map_diagnostic_cbs_s {
    sw_state_dpp_bcm_alloc_mngr_template_to_pool_map_dump_cb dump;
} sw_state_dpp_bcm_alloc_mngr_template_to_pool_map_diagnostic_cbs_t;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
typedef struct sw_state_dpp_bcm_alloc_mngr_egress_encap_egress_encap_banks_diagnostic_cbs_s {
    sw_state_dpp_bcm_alloc_mngr_egress_encap_egress_encap_banks_dump_cb dump;
} sw_state_dpp_bcm_alloc_mngr_egress_encap_egress_encap_banks_diagnostic_cbs_t;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
typedef struct sw_state_dpp_bcm_alloc_mngr_egress_encap_egress_encap_count_diagnostic_cbs_s {
    sw_state_dpp_bcm_alloc_mngr_egress_encap_egress_encap_count_dump_cb dump;
} sw_state_dpp_bcm_alloc_mngr_egress_encap_egress_encap_count_diagnostic_cbs_t;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
typedef struct sw_state_dpp_bcm_alloc_mngr_egress_encap_init_diagnostic_cbs_s {
    sw_state_dpp_bcm_alloc_mngr_egress_encap_init_dump_cb dump;
} sw_state_dpp_bcm_alloc_mngr_egress_encap_init_diagnostic_cbs_t;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
typedef struct sw_state_dpp_bcm_alloc_mngr_egress_encap_diagnostic_cbs_s {
    sw_state_dpp_bcm_alloc_mngr_egress_encap_dump_cb dump;
    sw_state_dpp_bcm_alloc_mngr_egress_encap_egress_encap_banks_diagnostic_cbs_t egress_encap_banks;
    sw_state_dpp_bcm_alloc_mngr_egress_encap_egress_encap_count_diagnostic_cbs_t egress_encap_count;
    sw_state_dpp_bcm_alloc_mngr_egress_encap_init_diagnostic_cbs_t init;
} sw_state_dpp_bcm_alloc_mngr_egress_encap_diagnostic_cbs_t;

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
typedef struct sw_state_dpp_bcm_alloc_mngr_ingress_lif_ingress_lif_banks_diagnostic_cbs_s {
    sw_state_dpp_bcm_alloc_mngr_ingress_lif_ingress_lif_banks_dump_cb dump;
} sw_state_dpp_bcm_alloc_mngr_ingress_lif_ingress_lif_banks_diagnostic_cbs_t;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
typedef struct sw_state_dpp_bcm_alloc_mngr_ingress_lif_ingress_lif_count_diagnostic_cbs_s {
    sw_state_dpp_bcm_alloc_mngr_ingress_lif_ingress_lif_count_dump_cb dump;
} sw_state_dpp_bcm_alloc_mngr_ingress_lif_ingress_lif_count_diagnostic_cbs_t;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
typedef struct sw_state_dpp_bcm_alloc_mngr_ingress_lif_init_diagnostic_cbs_s {
    sw_state_dpp_bcm_alloc_mngr_ingress_lif_init_dump_cb dump;
} sw_state_dpp_bcm_alloc_mngr_ingress_lif_init_diagnostic_cbs_t;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
typedef struct sw_state_dpp_bcm_alloc_mngr_ingress_lif_diagnostic_cbs_s {
    sw_state_dpp_bcm_alloc_mngr_ingress_lif_dump_cb dump;
    sw_state_dpp_bcm_alloc_mngr_ingress_lif_ingress_lif_banks_diagnostic_cbs_t ingress_lif_banks;
    sw_state_dpp_bcm_alloc_mngr_ingress_lif_ingress_lif_count_diagnostic_cbs_t ingress_lif_count;
    sw_state_dpp_bcm_alloc_mngr_ingress_lif_init_diagnostic_cbs_t init;
} sw_state_dpp_bcm_alloc_mngr_ingress_lif_diagnostic_cbs_t;

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
typedef struct sw_state_dpp_bcm_alloc_mngr_sync_lif_sync_lif_banks_diagnostic_cbs_s {
    sw_state_dpp_bcm_alloc_mngr_sync_lif_sync_lif_banks_dump_cb dump;
} sw_state_dpp_bcm_alloc_mngr_sync_lif_sync_lif_banks_diagnostic_cbs_t;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
typedef struct sw_state_dpp_bcm_alloc_mngr_sync_lif_init_diagnostic_cbs_s {
    sw_state_dpp_bcm_alloc_mngr_sync_lif_init_dump_cb dump;
} sw_state_dpp_bcm_alloc_mngr_sync_lif_init_diagnostic_cbs_t;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
typedef struct sw_state_dpp_bcm_alloc_mngr_sync_lif_diagnostic_cbs_s {
    sw_state_dpp_bcm_alloc_mngr_sync_lif_dump_cb dump;
    sw_state_dpp_bcm_alloc_mngr_sync_lif_sync_lif_banks_diagnostic_cbs_t sync_lif_banks;
    sw_state_dpp_bcm_alloc_mngr_sync_lif_init_diagnostic_cbs_t init;
} sw_state_dpp_bcm_alloc_mngr_sync_lif_diagnostic_cbs_t;

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
typedef struct sw_state_dpp_bcm_alloc_mngr_egr_thresh_map_diagnostic_cbs_s {
    sw_state_dpp_bcm_alloc_mngr_egr_thresh_map_dump_cb dump;
} sw_state_dpp_bcm_alloc_mngr_egr_thresh_map_diagnostic_cbs_t;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
typedef struct sw_state_dpp_bcm_alloc_mngr_egr_interface_unicast_thresh_map_diagnostic_cbs_s {
    sw_state_dpp_bcm_alloc_mngr_egr_interface_unicast_thresh_map_dump_cb dump;
} sw_state_dpp_bcm_alloc_mngr_egr_interface_unicast_thresh_map_diagnostic_cbs_t;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
typedef struct sw_state_dpp_bcm_alloc_mngr_egr_interface_multicast_thresh_map_diagnostic_cbs_s {
    sw_state_dpp_bcm_alloc_mngr_egr_interface_multicast_thresh_map_dump_cb dump;
} sw_state_dpp_bcm_alloc_mngr_egr_interface_multicast_thresh_map_diagnostic_cbs_t;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
#ifdef BCM_88470_A0
typedef struct sw_state_dpp_bcm_alloc_mngr_fec_is_cascaded_diagnostic_cbs_s {
#ifdef BCM_88470_A0
    sw_state_dpp_bcm_alloc_mngr_fec_is_cascaded_dump_cb dump;
#endif /* BCM_88470_A0*/ 
} sw_state_dpp_bcm_alloc_mngr_fec_is_cascaded_diagnostic_cbs_t;
#endif /* BCM_88470_A0*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
typedef struct sw_state_dpp_bcm_alloc_mngr_diagnostic_cbs_s {
#if defined(BCM_PETRA_SUPPORT)
    sw_state_dpp_bcm_alloc_mngr_dump_cb dump;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
    sw_state_dpp_bcm_alloc_mngr_fec_bank_groups_diagnostic_cbs_t fec_bank_groups;
    sw_state_dpp_bcm_alloc_mngr_resource_to_pool_map_diagnostic_cbs_t resource_to_pool_map;
    sw_state_dpp_bcm_alloc_mngr_template_to_pool_map_diagnostic_cbs_t template_to_pool_map;
    sw_state_dpp_bcm_alloc_mngr_egress_encap_diagnostic_cbs_t egress_encap;
    sw_state_dpp_bcm_alloc_mngr_ingress_lif_diagnostic_cbs_t ingress_lif;
    sw_state_dpp_bcm_alloc_mngr_sync_lif_diagnostic_cbs_t sync_lif;
    sw_state_dpp_bcm_alloc_mngr_egr_thresh_map_diagnostic_cbs_t egr_thresh_map;
    sw_state_dpp_bcm_alloc_mngr_egr_interface_unicast_thresh_map_diagnostic_cbs_t egr_interface_unicast_thresh_map;
    sw_state_dpp_bcm_alloc_mngr_egr_interface_multicast_thresh_map_diagnostic_cbs_t egr_interface_multicast_thresh_map;
#ifdef BCM_88470_A0
    sw_state_dpp_bcm_alloc_mngr_fec_is_cascaded_diagnostic_cbs_t fec_is_cascaded;
#endif /* BCM_88470_A0*/ 
} sw_state_dpp_bcm_alloc_mngr_diagnostic_cbs_t;

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

int sw_state_dpp_bcm_alloc_mngr_diagnostic_cb_init(int unit);

#endif /* BCM_WARM_BOOT_API_TEST */

#endif /* _SHR_SW_STATE_DPP_BCM_ALLOC_MNGR_DIAGNOSTIC_H_ */