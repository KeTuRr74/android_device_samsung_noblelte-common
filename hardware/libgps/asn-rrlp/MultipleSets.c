/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../rrlp-components.asn"
 * 	`asn1c -gen-PER`
 */

#include "MultipleSets.h"

static int
memb_nbrOfSets_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 2 && value <= 3)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_nbrOfReferenceBTSs_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 3)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_nbrOfSets_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  2,  3 }	/* (2..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_nbrOfReferenceBTSs_constr_3 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  1,  3 }	/* (1..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_MultipleSets_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MultipleSets, nbrOfSets),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_nbrOfSets_constraint_1,
		&asn_PER_memb_nbrOfSets_constr_2,
		0,
		"nbrOfSets"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MultipleSets, nbrOfReferenceBTSs),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_nbrOfReferenceBTSs_constraint_1,
		&asn_PER_memb_nbrOfReferenceBTSs_constr_3,
		0,
		"nbrOfReferenceBTSs"
		},
	{ ATF_POINTER, 1, offsetof(struct MultipleSets, referenceRelation),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReferenceRelation,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"referenceRelation"
		},
};
static const int asn_MAP_MultipleSets_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_MultipleSets_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MultipleSets_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nbrOfSets */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* nbrOfReferenceBTSs */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* referenceRelation */
};
static asn_SEQUENCE_specifics_t asn_SPC_MultipleSets_specs_1 = {
	sizeof(struct MultipleSets),
	offsetof(struct MultipleSets, _asn_ctx),
	asn_MAP_MultipleSets_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_MultipleSets_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_MultipleSets = {
	"MultipleSets",
	"MultipleSets",
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
	asn_DEF_MultipleSets_tags_1,
	sizeof(asn_DEF_MultipleSets_tags_1)
		/sizeof(asn_DEF_MultipleSets_tags_1[0]), /* 1 */
	asn_DEF_MultipleSets_tags_1,	/* Same as above */
	sizeof(asn_DEF_MultipleSets_tags_1)
		/sizeof(asn_DEF_MultipleSets_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_MultipleSets_1,
	3,	/* Elements count */
	&asn_SPC_MultipleSets_specs_1	/* Additional specs */
};

