/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../rrlp-components.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_SeqOfGPSAcquisAssist_R12_Ext_H_
#define	_SeqOfGPSAcquisAssist_R12_Ext_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct GPSAcquisAssist_R12_Ext_Element;

/* SeqOfGPSAcquisAssist-R12-Ext */
typedef struct SeqOfGPSAcquisAssist_R12_Ext {
	A_SEQUENCE_OF(struct GPSAcquisAssist_R12_Ext_Element) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SeqOfGPSAcquisAssist_R12_Ext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SeqOfGPSAcquisAssist_R12_Ext;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "GPSAcquisAssist-R12-Ext-Element.h"

#endif	/* _SeqOfGPSAcquisAssist_R12_Ext_H_ */
#include <asn_internal.h>
