/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ULP-Components"
 * 	found in "../ulp-components.asn"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#include "SessionID.h"

static asn_TYPE_member_t asn_MBR_SessionID_1[] = {
	{ ATF_POINTER, 2, offsetof(struct SessionID, setSessionID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SetSessionID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"setSessionID"
		},
	{ ATF_POINTER, 1, offsetof(struct SessionID, slpSessionID),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SlpSessionID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"slpSessionID"
		},
};
static const int asn_MAP_SessionID_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_SessionID_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SessionID_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* setSessionID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* slpSessionID */
};
static asn_SEQUENCE_specifics_t asn_SPC_SessionID_specs_1 = {
	sizeof(struct SessionID),
	offsetof(struct SessionID, _asn_ctx),
	asn_MAP_SessionID_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_SessionID_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SessionID = {
	"SessionID",
	"SessionID",
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
	asn_DEF_SessionID_tags_1,
	sizeof(asn_DEF_SessionID_tags_1)
		/sizeof(asn_DEF_SessionID_tags_1[0]), /* 1 */
	asn_DEF_SessionID_tags_1,	/* Same as above */
	sizeof(asn_DEF_SessionID_tags_1)
		/sizeof(asn_DEF_SessionID_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SessionID_1,
	2,	/* Elements count */
	&asn_SPC_SessionID_specs_1	/* Additional specs */
};

