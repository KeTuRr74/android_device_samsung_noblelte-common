/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../rrlp-components.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_GANSSPositionMethod_H_
#define	_GANSSPositionMethod_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "GANSSPositioningMethodTypes.h"
#include "GANSSSignals.h"
#include "SBASID.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* GANSSPositionMethod */
typedef struct GANSSPositionMethod {
	long	*ganssID	/* OPTIONAL */;
	GANSSPositioningMethodTypes_t	*gANSSPositioningMethodTypes	/* OPTIONAL */;
	GANSSSignals_t	 gANSSSignals;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	SBASID_t	*sbasID	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GANSSPositionMethod_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GANSSPositionMethod;

#ifdef __cplusplus
}
#endif

#endif	/* _GANSSPositionMethod_H_ */
#include <asn_internal.h>
