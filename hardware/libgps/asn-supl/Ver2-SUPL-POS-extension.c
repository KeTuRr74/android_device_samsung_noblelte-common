/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ULP-Version-2-message-extensions"
 * 	found in "../ulp-version2-message-extensions.asn"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#include "Ver2-SUPL-POS-extension.h"

static asn_TYPE_member_t asn_MBR_Ver2_SUPL_POS_extension_1[] = {
	{ ATF_POINTER, 4, offsetof(struct Ver2_SUPL_POS_extension, utran_GPSReferenceTimeAssistance),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UTRAN_GPSReferenceTimeAssistance,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"utran-GPSReferenceTimeAssistance"
		},
	{ ATF_POINTER, 3, offsetof(struct Ver2_SUPL_POS_extension, utran_GPSReferenceTimeResult),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UTRAN_GPSReferenceTimeResult,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"utran-GPSReferenceTimeResult"
		},
	{ ATF_POINTER, 2, offsetof(struct Ver2_SUPL_POS_extension, utran_GANSSReferenceTimeAssistance),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UTRAN_GANSSReferenceTimeAssistance,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"utran-GANSSReferenceTimeAssistance"
		},
	{ ATF_POINTER, 1, offsetof(struct Ver2_SUPL_POS_extension, utran_GANSSReferenceTimeResult),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UTRAN_GANSSReferenceTimeResult,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"utran-GANSSReferenceTimeResult"
		},
};
static const int asn_MAP_Ver2_SUPL_POS_extension_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_Ver2_SUPL_POS_extension_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Ver2_SUPL_POS_extension_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* utran-GPSReferenceTimeAssistance */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* utran-GPSReferenceTimeResult */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* utran-GANSSReferenceTimeAssistance */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* utran-GANSSReferenceTimeResult */
};
static asn_SEQUENCE_specifics_t asn_SPC_Ver2_SUPL_POS_extension_specs_1 = {
	sizeof(struct Ver2_SUPL_POS_extension),
	offsetof(struct Ver2_SUPL_POS_extension, _asn_ctx),
	asn_MAP_Ver2_SUPL_POS_extension_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_Ver2_SUPL_POS_extension_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	3,	/* Start extensions */
	5	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_Ver2_SUPL_POS_extension = {
	"Ver2-SUPL-POS-extension",
	"Ver2-SUPL-POS-extension",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_Ver2_SUPL_POS_extension_tags_1,
	sizeof(asn_DEF_Ver2_SUPL_POS_extension_tags_1)
		/sizeof(asn_DEF_Ver2_SUPL_POS_extension_tags_1[0]), /* 1 */
	asn_DEF_Ver2_SUPL_POS_extension_tags_1,	/* Same as above */
	sizeof(asn_DEF_Ver2_SUPL_POS_extension_tags_1)
		/sizeof(asn_DEF_Ver2_SUPL_POS_extension_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_Ver2_SUPL_POS_extension_1,
	4,	/* Elements count */
	&asn_SPC_Ver2_SUPL_POS_extension_specs_1	/* Additional specs */
};

