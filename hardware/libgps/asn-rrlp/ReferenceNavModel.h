/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../rrlp-components.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_ReferenceNavModel_H_
#define	_ReferenceNavModel_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ReferenceNavModel */
typedef struct ReferenceNavModel {
	long	 keplerToe;
	long	 keplerW;
	long	 keplerDeltaN;
	long	 keplerM0;
	long	 keplerOmegaDot;
	unsigned long	 keplerE;
	long	 keplerIDot;
	unsigned long	 keplerAPowerHalf;
	long	 keplerI0;
	long	 keplerOmega0;
	long	 keplerCrs;
	long	 keplerCis;
	long	 keplerCus;
	long	 keplerCrc;
	long	 keplerCic;
	long	 keplerCuc;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ReferenceNavModel_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_keplerE_7;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_keplerAPowerHalf_9;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_ReferenceNavModel;

#ifdef __cplusplus
}
#endif

#endif	/* _ReferenceNavModel_H_ */
#include <asn_internal.h>
