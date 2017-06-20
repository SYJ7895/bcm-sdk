/* $Id: $
 * 
 * $Copyright: (c) 2016 Broadcom.
 * Broadcom Proprietary and Confidential. All rights reserved.$
 * 
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
*/
#ifndef _SHR_sw_state_dpp_soc_H_
#define _SHR_sw_state_dpp_soc_H_


#include <shared/swstate/layout/sw_state_dpp_soc_arad_layout.h>
#include <shared/swstate/layout/sw_state_dpp_soc_config_layout.h>
#include <shared/swstate/layout/sw_state_dpp_soc_jericho_layout.h>
#include <shared/swstate/layout/sw_state_dpp_soc_qax_layout.h>
#include <shared/swstate/layout/sw_state_dpp_soc_sand_layout.h>
#define SW_STATE_DPP_SOC_LAYOUT_NOF_MAX_LAYOUT_NODES (1 + SW_STATE_DPP_SOC_ARAD_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_SOC_JERICHO_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_SOC_QAX_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_SOC_SAND_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_SOC_CONFIG_LAYOUT_NOF_MAX_LAYOUT_NODES) 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
int sw_state_dpp_soc_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#endif /* _SHR_sw_state_dpp_soc_H_ */