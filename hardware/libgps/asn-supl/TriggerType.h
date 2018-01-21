/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "SUPL-TRIGGERED-START"
 * 	found in "../supl-triggered-start.asn"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_TriggerType_H_
#define	_TriggerType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TriggerType {
	TriggerType_periodic	= 0,
	TriggerType_areaEvent	= 1
	/*
	 * Enumeration is extensible
	 */
} e_TriggerType;

/* TriggerType */
typedef long	 TriggerType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TriggerType;
asn_struct_free_f TriggerType_free;
asn_struct_print_f TriggerType_print;
asn_constr_check_f TriggerType_constraint;
ber_type_decoder_f TriggerType_decode_ber;
der_type_encoder_f TriggerType_encode_der;
xer_type_decoder_f TriggerType_decode_xer;
xer_type_encoder_f TriggerType_encode_xer;
per_type_decoder_f TriggerType_decode_uper;
per_type_encoder_f TriggerType_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _TriggerType_H_ */
#include <asn_internal.h>
