/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../rrlp-components.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_NavigationModel_H_
#define	_NavigationModel_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SeqOfNavModelElement.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NavigationModel */
typedef struct NavigationModel {
	SeqOfNavModelElement_t	 navModelList;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NavigationModel_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NavigationModel;

#ifdef __cplusplus
}
#endif

#endif	/* _NavigationModel_H_ */
#include <asn_internal.h>
