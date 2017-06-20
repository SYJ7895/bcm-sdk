/*
 * $Id: ppe_cint.stg,v 1.6 Broadcom SDK $
 *
 *
 * $Copyright: (c) 2016 Broadcom.
 * Broadcom Proprietary and Confidential. All rights reserved.$
 * 
 *
 * g3p1_ppe_cint_data.c: Guadalupe2k V1.3 C-Interpreter functions
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by Asm3 tools.
 * Edits to this file will be lost when it is regenerated.
 */

int g3p1_ppe_cint_data_not_empty;
#include <sdk_config.h>
#if defined(INCLUDE_LIB_CINT)
#if defined(BCM_CALADAN3_SUPPORT) && defined(BCM_CALADAN3_G3P1_SUPPORT)

#include <cint_config.h>
#include <cint_types.h>
#include <cint_porting.h>
#include <sal/core/libc.h>

#include <soc/sbx/g3p1/g3p1_int.h>
#define UTG_MALLOC(x) sal_alloc((x), "utg");

CINT_FWRAPPER_CREATE_RP4(int, int, 0, 0, soc_sbx_g3p1_ppe_property_table_segment_get,
                         int, int, unit, 0, 0,
                         int, int, seg_id, 0, 0,
                         uint32, uint32, offset, 0, 0,
                         uint8*, uint8, data, 1, 0);
CINT_FWRAPPER_CREATE_RP4(int, int, 0, 0, soc_sbx_g3p1_ppe_property_table_segment_set,
                         int, int, unit, 0, 0,
                         int, int, seg_id, 0, 0,
                         uint32, uint32, offset, 0, 0,
                         uint8, uint8, data, 0, 0); 

 

/*
 * Entry  p2e
 */
CINT_FWRAPPER_CREATE_VP1(soc_sbx_g3p1_p2e_t_init, 
                         soc_sbx_g3p1_p2e_t*, soc_sbx_g3p1_p2e_t, e, 1, 0);
CINT_FWRAPPER_CREATE_RP1(int, int, 0, 0, soc_sbx_g3p1_p2e_size, int, int, unit, 0,0);
CINT_FWRAPPER_CREATE_RP3(int, int, 0, 0, soc_sbx_g3p1_p2e_get, 
                         int, int, unit, 0, 0, 
                         int, int, index, 0, 0, 
                         soc_sbx_g3p1_p2e_t*, soc_sbx_g3p1_p2e_t, e, 1, 0);
CINT_FWRAPPER_CREATE_RP3(int, int, 0, 0, soc_sbx_g3p1_p2e_set, 
                         int, int, unit, 0, 0, 
                         int, int, index, 0, 0, 
                         soc_sbx_g3p1_p2e_t*, soc_sbx_g3p1_p2e_t, e, 1, 0);


/*
 * Struct soc_sbx_g3p1_p2e_t
 */
 static void*
__cint_maddr__soc_sbx_g3p1_p2e_t(void* p, int mnum, cint_struct_type_t* parent)
{
    void* rv;
    soc_sbx_g3p1_p2e_t* s = (soc_sbx_g3p1_p2e_t*) p;

    switch (mnum) {
         case 0: rv = &(s->portid); break; 
         case 1: rv = &(s->state_num); break; 
         case 2: rv = &(s->lsmmatch); break; 
         case 3: rv = &(s->ipv4mc); break; 
         case 4: rv = &(s->pbb); break; 
         case 5: rv = &(s->twintpid); break; 
         case 6: rv = &(s->tpid); break; 
         case 7: rv = &(s->oamloop); break; 
         case 8: rv = &(s->provider); break; 
         case 9: rv = &(s->customer); break; 
         case 10: rv = &(s->hdrtype); break; 
         case 11: rv = &(s->timestamp); break; 
         case 12: rv = &(s->aggr_hash); break; 
         case 13: rv = &(s->mpls_hdrcompr); break; 
         case 14: rv = &(s->port); break; 
         case 15: rv = &(s->nativevid); break; 
         case 16: rv = &(s->defcfi); break; 
         case 17: rv = &(s->defpri); break; 
         case 18: rv = &(s->defstrip); break; 
         case 19: rv = &(s->pstrip); break; 
         case 20: rv = &(s->mim); break; 
         case 21: rv = &(s->mplstp); break; 
         case 22: rv = &(s->untaggedstrip); break; 
         case 23: rv = &(s->droptagged); break; 
         case 24: rv = &(s->dropuntagged); break; 
         case 25: rv = &(s->tc_1588); break; 
         case 26: rv = &(s->rep_data); break; 
         case 27: rv = &(s->ppe_variable); break; 
        default: rv = NULL; break;
    }

    return rv;
}
 
/*
 * Struct soc_sbx_g3p1_p2e_t parameter description
 */
static cint_parameter_desc_t __cint_struct_members__soc_sbx_g3p1_p2e_t[] = 
{
    
     {
       "uint32",
       "portid",
       0,
       0
     },
    
     {
       "uint32",
       "state_num",
       0,
       0
     },
    
     {
       "uint32",
       "lsmmatch",
       0,
       0
     },
    
     {
       "uint32",
       "ipv4mc",
       0,
       0
     },
    
     {
       "uint32",
       "pbb",
       0,
       0
     },
    
     {
       "uint32",
       "twintpid",
       0,
       0
     },
    
     {
       "uint32",
       "tpid",
       0,
       0
     },
    
     {
       "uint32",
       "oamloop",
       0,
       0
     },
    
     {
       "uint32",
       "provider",
       0,
       0
     },
    
     {
       "uint32",
       "customer",
       0,
       0
     },
    
     {
       "uint32",
       "hdrtype",
       0,
       0
     },
    
     {
       "uint32",
       "timestamp",
       0,
       0
     },
    
     {
       "uint32",
       "aggr_hash",
       0,
       0
     },
    
     {
       "uint32",
       "mpls_hdrcompr",
       0,
       0
     },
    
     {
       "uint32",
       "port",
       0,
       0
     },
    
     {
       "uint32",
       "nativevid",
       0,
       0
     },
    
     {
       "uint32",
       "defcfi",
       0,
       0
     },
    
     {
       "uint32",
       "defpri",
       0,
       0
     },
    
     {
       "uint32",
       "defstrip",
       0,
       0
     },
    
     {
       "uint32",
       "pstrip",
       0,
       0
     },
    
     {
       "uint32",
       "mim",
       0,
       0
     },
    
     {
       "uint32",
       "mplstp",
       0,
       0
     },
    
     {
       "uint32",
       "untaggedstrip",
       0,
       0
     },
    
     {
       "uint32",
       "droptagged",
       0,
       0
     },
    
     {
       "uint32",
       "dropuntagged",
       0,
       0
     },
    
     {
       "uint32",
       "tc_1588",
       0,
       0
     },
    
     {
       "uint32",
       "rep_data",
       0,
       0
     },
    
     {
       "uint32",
       "ppe_variable",
       0,
       0
     },
    { NULL }
};
                                                                         

/*
 * Entry  ep2e
 */
CINT_FWRAPPER_CREATE_VP1(soc_sbx_g3p1_ep2e_t_init, 
                         soc_sbx_g3p1_ep2e_t*, soc_sbx_g3p1_ep2e_t, e, 1, 0);
CINT_FWRAPPER_CREATE_RP1(int, int, 0, 0, soc_sbx_g3p1_ep2e_size, int, int, unit, 0,0);
CINT_FWRAPPER_CREATE_RP3(int, int, 0, 0, soc_sbx_g3p1_ep2e_get, 
                         int, int, unit, 0, 0, 
                         int, int, index, 0, 0, 
                         soc_sbx_g3p1_ep2e_t*, soc_sbx_g3p1_ep2e_t, e, 1, 0);
CINT_FWRAPPER_CREATE_RP3(int, int, 0, 0, soc_sbx_g3p1_ep2e_set, 
                         int, int, unit, 0, 0, 
                         int, int, index, 0, 0, 
                         soc_sbx_g3p1_ep2e_t*, soc_sbx_g3p1_ep2e_t, e, 1, 0);


/*
 * Struct soc_sbx_g3p1_ep2e_t
 */
 static void*
__cint_maddr__soc_sbx_g3p1_ep2e_t(void* p, int mnum, cint_struct_type_t* parent)
{
    void* rv;
    soc_sbx_g3p1_ep2e_t* s = (soc_sbx_g3p1_ep2e_t*) p;

    switch (mnum) {
         case 0: rv = &(s->portid); break; 
         case 1: rv = &(s->state_num); break; 
         case 2: rv = &(s->lsmmatch); break; 
         case 3: rv = &(s->ipv4mc); break; 
         case 4: rv = &(s->pbb); break; 
         case 5: rv = &(s->twintpid); break; 
         case 6: rv = &(s->tpid); break; 
         case 7: rv = &(s->oamloop); break; 
         case 8: rv = &(s->provider); break; 
         case 9: rv = &(s->customer); break; 
         case 10: rv = &(s->hdrtype); break; 
         case 11: rv = &(s->timestamp); break; 
         case 12: rv = &(s->aggr_hash); break; 
         case 13: rv = &(s->mim); break; 
         case 14: rv = &(s->mpls_hdrcompr); break; 
         case 15: rv = &(s->port); break; 
         case 16: rv = &(s->pid); break; 
         case 17: rv = &(s->stpid0); break; 
         case 18: rv = &(s->stpid1); break; 
         case 19: rv = &(s->cep); break; 
         case 20: rv = &(s->keeperh); break; 
         case 21: rv = &(s->mirroridx); break; 
         case 22: rv = &(s->tc_1588); break; 
         case 23: rv = &(s->rep_data); break; 
         case 24: rv = &(s->ppe_variable); break; 
        default: rv = NULL; break;
    }

    return rv;
}
 
/*
 * Struct soc_sbx_g3p1_ep2e_t parameter description
 */
static cint_parameter_desc_t __cint_struct_members__soc_sbx_g3p1_ep2e_t[] = 
{
    
     {
       "uint32",
       "portid",
       0,
       0
     },
    
     {
       "uint32",
       "state_num",
       0,
       0
     },
    
     {
       "uint32",
       "lsmmatch",
       0,
       0
     },
    
     {
       "uint32",
       "ipv4mc",
       0,
       0
     },
    
     {
       "uint32",
       "pbb",
       0,
       0
     },
    
     {
       "uint32",
       "twintpid",
       0,
       0
     },
    
     {
       "uint32",
       "tpid",
       0,
       0
     },
    
     {
       "uint32",
       "oamloop",
       0,
       0
     },
    
     {
       "uint32",
       "provider",
       0,
       0
     },
    
     {
       "uint32",
       "customer",
       0,
       0
     },
    
     {
       "uint32",
       "hdrtype",
       0,
       0
     },
    
     {
       "uint32",
       "timestamp",
       0,
       0
     },
    
     {
       "uint32",
       "aggr_hash",
       0,
       0
     },
    
     {
       "uint32",
       "mim",
       0,
       0
     },
    
     {
       "uint32",
       "mpls_hdrcompr",
       0,
       0
     },
    
     {
       "uint32",
       "port",
       0,
       0
     },
    
     {
       "uint32",
       "pid",
       0,
       0
     },
    
     {
       "uint32",
       "stpid0",
       0,
       0
     },
    
     {
       "uint32",
       "stpid1",
       0,
       0
     },
    
     {
       "uint32",
       "cep",
       0,
       0
     },
    
     {
       "uint32",
       "keeperh",
       0,
       0
     },
    
     {
       "uint32",
       "mirroridx",
       0,
       0
     },
    
     {
       "uint32",
       "tc_1588",
       0,
       0
     },
    
     {
       "uint32",
       "rep_data",
       0,
       0
     },
    
     {
       "uint32",
       "ppe_variable",
       0,
       0
     },
    { NULL }
};
                                                                         

/*
 * Entry  tpid
 */
CINT_FWRAPPER_CREATE_VP1(soc_sbx_g3p1_tpid_t_init, 
                         soc_sbx_g3p1_tpid_t*, soc_sbx_g3p1_tpid_t, e, 1, 0);
CINT_FWRAPPER_CREATE_RP1(int, int, 0, 0, soc_sbx_g3p1_tpid_size, int, int, unit, 0,0);
CINT_FWRAPPER_CREATE_RP3(int, int, 0, 0, soc_sbx_g3p1_tpid_get, 
                         int, int, unit, 0, 0, 
                         int, int, index, 0, 0, 
                         soc_sbx_g3p1_tpid_t*, soc_sbx_g3p1_tpid_t, e, 1, 0);
CINT_FWRAPPER_CREATE_RP3(int, int, 0, 0, soc_sbx_g3p1_tpid_set, 
                         int, int, unit, 0, 0, 
                         int, int, index, 0, 0, 
                         soc_sbx_g3p1_tpid_t*, soc_sbx_g3p1_tpid_t, e, 1, 0);


/*
 * Struct soc_sbx_g3p1_tpid_t
 */
 static void*
__cint_maddr__soc_sbx_g3p1_tpid_t(void* p, int mnum, cint_struct_type_t* parent)
{
    void* rv;
    soc_sbx_g3p1_tpid_t* s = (soc_sbx_g3p1_tpid_t*) p;

    switch (mnum) {
         case 0: rv = &(s->tpid); break; 
        default: rv = NULL; break;
    }

    return rv;
}
 
/*
 * Struct soc_sbx_g3p1_tpid_t parameter description
 */
static cint_parameter_desc_t __cint_struct_members__soc_sbx_g3p1_tpid_t[] = 
{
    
     {
       "uint32",
       "tpid",
       0,
       0
     },
    { NULL }
};
                                                                         

/*
 * Entry  oam_rx
 */
CINT_FWRAPPER_CREATE_VP1(soc_sbx_g3p1_oam_rx_t_init, 
                         soc_sbx_g3p1_oam_rx_t*, soc_sbx_g3p1_oam_rx_t, e, 1, 0);
CINT_FWRAPPER_CREATE_RP1(int, int, 0, 0, soc_sbx_g3p1_oam_rx_size, int, int, unit, 0,0);
CINT_FWRAPPER_CREATE_RP3(int, int, 0, 0, soc_sbx_g3p1_oam_rx_get, 
                         int, int, unit, 0, 0, 
                         int, int, index, 0, 0, 
                         soc_sbx_g3p1_oam_rx_t*, soc_sbx_g3p1_oam_rx_t, e, 1, 0);
CINT_FWRAPPER_CREATE_RP3(int, int, 0, 0, soc_sbx_g3p1_oam_rx_set, 
                         int, int, unit, 0, 0, 
                         int, int, index, 0, 0, 
                         soc_sbx_g3p1_oam_rx_t*, soc_sbx_g3p1_oam_rx_t, e, 1, 0);


/*
 * Struct soc_sbx_g3p1_oam_rx_t
 */
 static void*
__cint_maddr__soc_sbx_g3p1_oam_rx_t(void* p, int mnum, cint_struct_type_t* parent)
{
    void* rv;
    soc_sbx_g3p1_oam_rx_t* s = (soc_sbx_g3p1_oam_rx_t*) p;

    switch (mnum) {
         case 0: rv = &(s->valid); break; 
        default: rv = NULL; break;
    }

    return rv;
}
 
/*
 * Struct soc_sbx_g3p1_oam_rx_t parameter description
 */
static cint_parameter_desc_t __cint_struct_members__soc_sbx_g3p1_oam_rx_t[] = 
{
    
     {
       "uint32",
       "valid",
       0,
       0
     },
    { NULL }
};
                                                                         

/*
 * Entry  oam_tx
 */
CINT_FWRAPPER_CREATE_VP1(soc_sbx_g3p1_oam_tx_t_init, 
                         soc_sbx_g3p1_oam_tx_t*, soc_sbx_g3p1_oam_tx_t, e, 1, 0);
CINT_FWRAPPER_CREATE_RP1(int, int, 0, 0, soc_sbx_g3p1_oam_tx_size, int, int, unit, 0,0);
CINT_FWRAPPER_CREATE_RP3(int, int, 0, 0, soc_sbx_g3p1_oam_tx_get, 
                         int, int, unit, 0, 0, 
                         int, int, index, 0, 0, 
                         soc_sbx_g3p1_oam_tx_t*, soc_sbx_g3p1_oam_tx_t, e, 1, 0);
CINT_FWRAPPER_CREATE_RP3(int, int, 0, 0, soc_sbx_g3p1_oam_tx_set, 
                         int, int, unit, 0, 0, 
                         int, int, index, 0, 0, 
                         soc_sbx_g3p1_oam_tx_t*, soc_sbx_g3p1_oam_tx_t, e, 1, 0);


/*
 * Struct soc_sbx_g3p1_oam_tx_t
 */
 static void*
__cint_maddr__soc_sbx_g3p1_oam_tx_t(void* p, int mnum, cint_struct_type_t* parent)
{
    void* rv;
    soc_sbx_g3p1_oam_tx_t* s = (soc_sbx_g3p1_oam_tx_t*) p;

    switch (mnum) {
         case 0: rv = &(s->valid); break; 
        default: rv = NULL; break;
    }

    return rv;
}
 
/*
 * Struct soc_sbx_g3p1_oam_tx_t parameter description
 */
static cint_parameter_desc_t __cint_struct_members__soc_sbx_g3p1_oam_tx_t[] = 
{
    
     {
       "uint32",
       "valid",
       0,
       0
     },
    { NULL }
};
                                                                         

/*
 * Entry  lsmac
 */
CINT_FWRAPPER_CREATE_VP1(soc_sbx_g3p1_lsmac_t_init, 
                         soc_sbx_g3p1_lsmac_t*, soc_sbx_g3p1_lsmac_t, e, 1, 0);
CINT_FWRAPPER_CREATE_RP1(int, int, 0, 0, soc_sbx_g3p1_lsmac_size, int, int, unit, 0,0);
CINT_FWRAPPER_CREATE_RP3(int, int, 0, 0, soc_sbx_g3p1_lsmac_get, 
                         int, int, unit, 0, 0, 
                         int, int, index, 0, 0, 
                         soc_sbx_g3p1_lsmac_t*, soc_sbx_g3p1_lsmac_t, e, 1, 0);
CINT_FWRAPPER_CREATE_RP3(int, int, 0, 0, soc_sbx_g3p1_lsmac_set, 
                         int, int, unit, 0, 0, 
                         int, int, index, 0, 0, 
                         soc_sbx_g3p1_lsmac_t*, soc_sbx_g3p1_lsmac_t, e, 1, 0);


/*
 * Struct soc_sbx_g3p1_lsmac_t
 */
 static void*
__cint_maddr__soc_sbx_g3p1_lsmac_t(void* p, int mnum, cint_struct_type_t* parent)
{
    void* rv;
    soc_sbx_g3p1_lsmac_t* s = (soc_sbx_g3p1_lsmac_t*) p;

    switch (mnum) {
         case 0: rv = &(s->portid); break; 
         case 1: rv = &(s->useport); break; 
         case 2: rv = &(s->mac); break; 
        default: rv = NULL; break;
    }

    return rv;
}
 
/*
 * Struct soc_sbx_g3p1_lsmac_t parameter description
 */
static cint_parameter_desc_t __cint_struct_members__soc_sbx_g3p1_lsmac_t[] = 
{
    
     {
       "uint32",
       "portid",
       0,
       0
     },
    
     {
       "uint32",
       "useport",
       0,
       0
     },
    
     {
       "bcm_mac_t",
       "mac",
       0,
       0,
     },
    { NULL }
};
                                                                         

/*
 * Entry  l2cpmac
 */
CINT_FWRAPPER_CREATE_VP1(soc_sbx_g3p1_l2cpmac_t_init, 
                         soc_sbx_g3p1_l2cpmac_t*, soc_sbx_g3p1_l2cpmac_t, e, 1, 0);
CINT_FWRAPPER_CREATE_RP1(int, int, 0, 0, soc_sbx_g3p1_l2cpmac_size, int, int, unit, 0,0);
CINT_FWRAPPER_CREATE_RP3(int, int, 0, 0, soc_sbx_g3p1_l2cpmac_get, 
                         int, int, unit, 0, 0, 
                         int, int, index, 0, 0, 
                         soc_sbx_g3p1_l2cpmac_t*, soc_sbx_g3p1_l2cpmac_t, e, 1, 0);
CINT_FWRAPPER_CREATE_RP3(int, int, 0, 0, soc_sbx_g3p1_l2cpmac_set, 
                         int, int, unit, 0, 0, 
                         int, int, index, 0, 0, 
                         soc_sbx_g3p1_l2cpmac_t*, soc_sbx_g3p1_l2cpmac_t, e, 1, 0);


/*
 * Struct soc_sbx_g3p1_l2cpmac_t
 */
 static void*
__cint_maddr__soc_sbx_g3p1_l2cpmac_t(void* p, int mnum, cint_struct_type_t* parent)
{
    void* rv;
    soc_sbx_g3p1_l2cpmac_t* s = (soc_sbx_g3p1_l2cpmac_t*) p;

    switch (mnum) {
         case 0: rv = &(s->portid); break; 
         case 1: rv = &(s->useport); break; 
         case 2: rv = &(s->mac); break; 
        default: rv = NULL; break;
    }

    return rv;
}
 
/*
 * Struct soc_sbx_g3p1_l2cpmac_t parameter description
 */
static cint_parameter_desc_t __cint_struct_members__soc_sbx_g3p1_l2cpmac_t[] = 
{
    
     {
       "uint32",
       "portid",
       0,
       0
     },
    
     {
       "uint32",
       "useport",
       0,
       0
     },
    
     {
       "bcm_mac_t",
       "mac",
       0,
       0,
     },
    { NULL }
};
                                                                         

/*
 * Entry  elsmac
 */
CINT_FWRAPPER_CREATE_VP1(soc_sbx_g3p1_elsmac_t_init, 
                         soc_sbx_g3p1_elsmac_t*, soc_sbx_g3p1_elsmac_t, e, 1, 0);
CINT_FWRAPPER_CREATE_RP1(int, int, 0, 0, soc_sbx_g3p1_elsmac_size, int, int, unit, 0,0);
CINT_FWRAPPER_CREATE_RP3(int, int, 0, 0, soc_sbx_g3p1_elsmac_get, 
                         int, int, unit, 0, 0, 
                         int, int, index, 0, 0, 
                         soc_sbx_g3p1_elsmac_t*, soc_sbx_g3p1_elsmac_t, e, 1, 0);
CINT_FWRAPPER_CREATE_RP3(int, int, 0, 0, soc_sbx_g3p1_elsmac_set, 
                         int, int, unit, 0, 0, 
                         int, int, index, 0, 0, 
                         soc_sbx_g3p1_elsmac_t*, soc_sbx_g3p1_elsmac_t, e, 1, 0);


/*
 * Struct soc_sbx_g3p1_elsmac_t
 */
 static void*
__cint_maddr__soc_sbx_g3p1_elsmac_t(void* p, int mnum, cint_struct_type_t* parent)
{
    void* rv;
    soc_sbx_g3p1_elsmac_t* s = (soc_sbx_g3p1_elsmac_t*) p;

    switch (mnum) {
         case 0: rv = &(s->portid); break; 
         case 1: rv = &(s->useport); break; 
         case 2: rv = &(s->mac); break; 
        default: rv = NULL; break;
    }

    return rv;
}
 
/*
 * Struct soc_sbx_g3p1_elsmac_t parameter description
 */
static cint_parameter_desc_t __cint_struct_members__soc_sbx_g3p1_elsmac_t[] = 
{
    
     {
       "uint32",
       "portid",
       0,
       0
     },
    
     {
       "uint32",
       "useport",
       0,
       0
     },
    
     {
       "bcm_mac_t",
       "mac",
       0,
       0,
     },
    { NULL }
};
                                                                         
 
 
 
 
 
 
 
 

/*
 * Function table
 */
static cint_function_t __cint_g3p1_functions [] =
{
    CINT_FWRAPPER_ENTRY(soc_sbx_g3p1_p2e_t_init),
    CINT_FWRAPPER_ENTRY(soc_sbx_g3p1_p2e_size),
    CINT_FWRAPPER_ENTRY(soc_sbx_g3p1_p2e_get),
    CINT_FWRAPPER_ENTRY(soc_sbx_g3p1_p2e_set), CINT_FWRAPPER_ENTRY(soc_sbx_g3p1_ep2e_t_init),
    CINT_FWRAPPER_ENTRY(soc_sbx_g3p1_ep2e_size),
    CINT_FWRAPPER_ENTRY(soc_sbx_g3p1_ep2e_get),
    CINT_FWRAPPER_ENTRY(soc_sbx_g3p1_ep2e_set), CINT_FWRAPPER_ENTRY(soc_sbx_g3p1_tpid_t_init),
    CINT_FWRAPPER_ENTRY(soc_sbx_g3p1_tpid_size),
    CINT_FWRAPPER_ENTRY(soc_sbx_g3p1_tpid_get),
    CINT_FWRAPPER_ENTRY(soc_sbx_g3p1_tpid_set), CINT_FWRAPPER_ENTRY(soc_sbx_g3p1_oam_rx_t_init),
    CINT_FWRAPPER_ENTRY(soc_sbx_g3p1_oam_rx_size),
    CINT_FWRAPPER_ENTRY(soc_sbx_g3p1_oam_rx_get),
    CINT_FWRAPPER_ENTRY(soc_sbx_g3p1_oam_rx_set), CINT_FWRAPPER_ENTRY(soc_sbx_g3p1_oam_tx_t_init),
    CINT_FWRAPPER_ENTRY(soc_sbx_g3p1_oam_tx_size),
    CINT_FWRAPPER_ENTRY(soc_sbx_g3p1_oam_tx_get),
    CINT_FWRAPPER_ENTRY(soc_sbx_g3p1_oam_tx_set), CINT_FWRAPPER_ENTRY(soc_sbx_g3p1_lsmac_t_init),
    CINT_FWRAPPER_ENTRY(soc_sbx_g3p1_lsmac_size),
    CINT_FWRAPPER_ENTRY(soc_sbx_g3p1_lsmac_get),
    CINT_FWRAPPER_ENTRY(soc_sbx_g3p1_lsmac_set), CINT_FWRAPPER_ENTRY(soc_sbx_g3p1_l2cpmac_t_init),
    CINT_FWRAPPER_ENTRY(soc_sbx_g3p1_l2cpmac_size),
    CINT_FWRAPPER_ENTRY(soc_sbx_g3p1_l2cpmac_get),
    CINT_FWRAPPER_ENTRY(soc_sbx_g3p1_l2cpmac_set), CINT_FWRAPPER_ENTRY(soc_sbx_g3p1_elsmac_t_init),
    CINT_FWRAPPER_ENTRY(soc_sbx_g3p1_elsmac_size),
    CINT_FWRAPPER_ENTRY(soc_sbx_g3p1_elsmac_get),
    CINT_FWRAPPER_ENTRY(soc_sbx_g3p1_elsmac_set), 
    CINT_FWRAPPER_ENTRY(soc_sbx_g3p1_ppe_property_table_segment_get),
    CINT_FWRAPPER_ENTRY(soc_sbx_g3p1_ppe_property_table_segment_set), 
  { NULL }
};

/*
 * struct type table
 */ 
static cint_struct_type_t __cint_g3p1_structures [] = 
{
      {
        "soc_sbx_g3p1_p2e_t",
        sizeof(soc_sbx_g3p1_p2e_t),
        __cint_struct_members__soc_sbx_g3p1_p2e_t,
        __cint_maddr__soc_sbx_g3p1_p2e_t
      },
      {
        "soc_sbx_g3p1_ep2e_t",
        sizeof(soc_sbx_g3p1_ep2e_t),
        __cint_struct_members__soc_sbx_g3p1_ep2e_t,
        __cint_maddr__soc_sbx_g3p1_ep2e_t
      },
      {
        "soc_sbx_g3p1_tpid_t",
        sizeof(soc_sbx_g3p1_tpid_t),
        __cint_struct_members__soc_sbx_g3p1_tpid_t,
        __cint_maddr__soc_sbx_g3p1_tpid_t
      },
      {
        "soc_sbx_g3p1_oam_rx_t",
        sizeof(soc_sbx_g3p1_oam_rx_t),
        __cint_struct_members__soc_sbx_g3p1_oam_rx_t,
        __cint_maddr__soc_sbx_g3p1_oam_rx_t
      },
      {
        "soc_sbx_g3p1_oam_tx_t",
        sizeof(soc_sbx_g3p1_oam_tx_t),
        __cint_struct_members__soc_sbx_g3p1_oam_tx_t,
        __cint_maddr__soc_sbx_g3p1_oam_tx_t
      },
      {
        "soc_sbx_g3p1_lsmac_t",
        sizeof(soc_sbx_g3p1_lsmac_t),
        __cint_struct_members__soc_sbx_g3p1_lsmac_t,
        __cint_maddr__soc_sbx_g3p1_lsmac_t
      },
      {
        "soc_sbx_g3p1_l2cpmac_t",
        sizeof(soc_sbx_g3p1_l2cpmac_t),
        __cint_struct_members__soc_sbx_g3p1_l2cpmac_t,
        __cint_maddr__soc_sbx_g3p1_l2cpmac_t
      },
      {
        "soc_sbx_g3p1_elsmac_t",
        sizeof(soc_sbx_g3p1_elsmac_t),
        __cint_struct_members__soc_sbx_g3p1_elsmac_t,
        __cint_maddr__soc_sbx_g3p1_elsmac_t
      },
    { NULL }
};



static cint_constants_t __cint_g3p1_constants [] =
{
   { NULL }
};


/* 
 * CINT exported datastructure
 */ 
cint_data_t g3p1_ppe_cint_data =
{
    NULL,
    __cint_g3p1_functions,
    __cint_g3p1_structures,
    NULL,   /* __cint_g3p1_enums */
    NULL,   /* __cint_g3p1_typedefs */
    __cint_g3p1_constants,
    NULL,   /* __cint_g3p1_function_pointers */
};

#endif
#endif