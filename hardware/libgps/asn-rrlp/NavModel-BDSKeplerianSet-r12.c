/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../rrlp-components.asn"
 * 	`asn1c -gen-PER`
 */

#include "NavModel-BDSKeplerianSet-r12.h"

static int
bdsAPowerHalf_r12_4_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	/* Constraint check succeeded */
	return 0;
}

/*
 * This type is implemented using NativeInteger,
 * so here we adjust the DEF accordingly.
 */
static void
bdsAPowerHalf_r12_4_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeInteger.free_struct;
	td->print_struct   = asn_DEF_NativeInteger.print_struct;
	td->check_constraints = asn_DEF_NativeInteger.check_constraints;
	td->ber_decoder    = asn_DEF_NativeInteger.ber_decoder;
	td->der_encoder    = asn_DEF_NativeInteger.der_encoder;
	td->xer_decoder    = asn_DEF_NativeInteger.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeInteger.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeInteger.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeInteger.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeInteger.per_constraints;
	td->elements       = asn_DEF_NativeInteger.elements;
	td->elements_count = asn_DEF_NativeInteger.elements_count;
     /* td->specifics      = asn_DEF_NativeInteger.specifics;	// Defined explicitly */
}

static void
bdsAPowerHalf_r12_4_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	bdsAPowerHalf_r12_4_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
bdsAPowerHalf_r12_4_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	bdsAPowerHalf_r12_4_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
bdsAPowerHalf_r12_4_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	bdsAPowerHalf_r12_4_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
bdsAPowerHalf_r12_4_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	bdsAPowerHalf_r12_4_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
bdsAPowerHalf_r12_4_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	bdsAPowerHalf_r12_4_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
bdsAPowerHalf_r12_4_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	bdsAPowerHalf_r12_4_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
bdsAPowerHalf_r12_4_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	bdsAPowerHalf_r12_4_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
bdsAPowerHalf_r12_4_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	bdsAPowerHalf_r12_4_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
bdsE_r12_5_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	/* Constraint check succeeded */
	return 0;
}

/*
 * This type is implemented using NativeInteger,
 * so here we adjust the DEF accordingly.
 */
static void
bdsE_r12_5_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeInteger.free_struct;
	td->print_struct   = asn_DEF_NativeInteger.print_struct;
	td->check_constraints = asn_DEF_NativeInteger.check_constraints;
	td->ber_decoder    = asn_DEF_NativeInteger.ber_decoder;
	td->der_encoder    = asn_DEF_NativeInteger.der_encoder;
	td->xer_decoder    = asn_DEF_NativeInteger.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeInteger.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeInteger.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeInteger.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeInteger.per_constraints;
	td->elements       = asn_DEF_NativeInteger.elements;
	td->elements_count = asn_DEF_NativeInteger.elements_count;
     /* td->specifics      = asn_DEF_NativeInteger.specifics;	// Defined explicitly */
}

static void
bdsE_r12_5_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	bdsE_r12_5_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
bdsE_r12_5_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	bdsE_r12_5_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
bdsE_r12_5_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	bdsE_r12_5_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
bdsE_r12_5_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	bdsE_r12_5_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
bdsE_r12_5_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	bdsE_r12_5_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
bdsE_r12_5_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	bdsE_r12_5_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
bdsE_r12_5_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	bdsE_r12_5_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
bdsE_r12_5_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	bdsE_r12_5_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
memb_bdsURAI_r12_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 15)) {
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
memb_bdsToe_r12_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 131071)) {
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
memb_bdsAPowerHalf_r12_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	/* Constraint check succeeded */
	return 0;
}

static int
memb_bdsE_r12_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	/* Constraint check succeeded */
	return 0;
}

static int
memb_bdsW_r12_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= (-2147483647L - 1) && value <= 2147483647)) {
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
memb_bdsDeltaN_r12_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -32768 && value <= 32767)) {
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
memb_bdsM0_r12_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= (-2147483647L - 1) && value <= 2147483647)) {
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
memb_bdsOmega0_r12_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= (-2147483647L - 1) && value <= 2147483647)) {
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
memb_bdsOmegaDot_r12_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -8388608 && value <= 8388607)) {
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
memb_bdsI0_r12_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= (-2147483647L - 1) && value <= 2147483647)) {
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
memb_bdsIDot_r12_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -8192 && value <= 8191)) {
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
memb_bdsCuc_r12_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -131072 && value <= 131071)) {
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
memb_bdsCus_r12_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -131072 && value <= 131071)) {
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
memb_bdsCrc_r12_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -131072 && value <= 131071)) {
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
memb_bdsCrs_r12_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -131072 && value <= 131071)) {
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
memb_bdsCic_r12_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -131072 && value <= 131071)) {
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
memb_bdsCis_r12_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -131072 && value <= 131071)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_bdsAPowerHalf_r12_constr_4 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 32, -1,  0,  4294967295 }	/* (0..4294967295) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_bdsE_r12_constr_5 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 32, -1,  0,  4294967295 }	/* (0..4294967295) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_bdsURAI_r12_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_bdsToe_r12_constr_3 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 17, -1,  0,  131071 }	/* (0..131071) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_bdsAPowerHalf_r12_constr_4 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 32, -1,  0,  4294967295 }	/* (0..4294967295) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_bdsE_r12_constr_5 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 32, -1,  0,  4294967295 }	/* (0..4294967295) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_bdsW_r12_constr_6 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 32, -1, (-2147483647L - 1),  2147483647 }	/* (-2147483648..2147483647) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_bdsDeltaN_r12_constr_7 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 16,  16, -32768,  32767 }	/* (-32768..32767) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_bdsM0_r12_constr_8 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 32, -1, (-2147483647L - 1),  2147483647 }	/* (-2147483648..2147483647) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_bdsOmega0_r12_constr_9 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 32, -1, (-2147483647L - 1),  2147483647 }	/* (-2147483648..2147483647) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_bdsOmegaDot_r12_constr_10 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 24, -1, -8388608,  8388607 }	/* (-8388608..8388607) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_bdsI0_r12_constr_11 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 32, -1, (-2147483647L - 1),  2147483647 }	/* (-2147483648..2147483647) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_bdsIDot_r12_constr_12 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 14,  14, -8192,  8191 }	/* (-8192..8191) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_bdsCuc_r12_constr_13 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 18, -1, -131072,  131071 }	/* (-131072..131071) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_bdsCus_r12_constr_14 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 18, -1, -131072,  131071 }	/* (-131072..131071) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_bdsCrc_r12_constr_15 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 18, -1, -131072,  131071 }	/* (-131072..131071) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_bdsCrs_r12_constr_16 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 18, -1, -131072,  131071 }	/* (-131072..131071) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_bdsCic_r12_constr_17 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 18, -1, -131072,  131071 }	/* (-131072..131071) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_bdsCis_r12_constr_18 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 18, -1, -131072,  131071 }	/* (-131072..131071) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_specifics_t asn_SPC_bdsAPowerHalf_r12_specs_4 = {
	0,	0,	0,	0,	0,
	0,	/* Native long size */
	1	/* Unsigned representation */
};
static const ber_tlv_tag_t asn_DEF_bdsAPowerHalf_r12_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (2 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_bdsAPowerHalf_r12_4 = {
	"bdsAPowerHalf-r12",
	"bdsAPowerHalf-r12",
	bdsAPowerHalf_r12_4_free,
	bdsAPowerHalf_r12_4_print,
	bdsAPowerHalf_r12_4_constraint,
	bdsAPowerHalf_r12_4_decode_ber,
	bdsAPowerHalf_r12_4_encode_der,
	bdsAPowerHalf_r12_4_decode_xer,
	bdsAPowerHalf_r12_4_encode_xer,
	bdsAPowerHalf_r12_4_decode_uper,
	bdsAPowerHalf_r12_4_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_bdsAPowerHalf_r12_tags_4,
	sizeof(asn_DEF_bdsAPowerHalf_r12_tags_4)
		/sizeof(asn_DEF_bdsAPowerHalf_r12_tags_4[0]) - 1, /* 1 */
	asn_DEF_bdsAPowerHalf_r12_tags_4,	/* Same as above */
	sizeof(asn_DEF_bdsAPowerHalf_r12_tags_4)
		/sizeof(asn_DEF_bdsAPowerHalf_r12_tags_4[0]), /* 2 */
	&asn_PER_type_bdsAPowerHalf_r12_constr_4,
	0, 0,	/* No members */
	&asn_SPC_bdsAPowerHalf_r12_specs_4	/* Additional specs */
};

static const asn_INTEGER_specifics_t asn_SPC_bdsE_r12_specs_5 = {
	0,	0,	0,	0,	0,
	0,	/* Native long size */
	1	/* Unsigned representation */
};
static const ber_tlv_tag_t asn_DEF_bdsE_r12_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (2 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_bdsE_r12_5 = {
	"bdsE-r12",
	"bdsE-r12",
	bdsE_r12_5_free,
	bdsE_r12_5_print,
	bdsE_r12_5_constraint,
	bdsE_r12_5_decode_ber,
	bdsE_r12_5_encode_der,
	bdsE_r12_5_decode_xer,
	bdsE_r12_5_encode_xer,
	bdsE_r12_5_decode_uper,
	bdsE_r12_5_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_bdsE_r12_tags_5,
	sizeof(asn_DEF_bdsE_r12_tags_5)
		/sizeof(asn_DEF_bdsE_r12_tags_5[0]) - 1, /* 1 */
	asn_DEF_bdsE_r12_tags_5,	/* Same as above */
	sizeof(asn_DEF_bdsE_r12_tags_5)
		/sizeof(asn_DEF_bdsE_r12_tags_5[0]), /* 2 */
	&asn_PER_type_bdsE_r12_constr_5,
	0, 0,	/* No members */
	&asn_SPC_bdsE_r12_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NavModel_BDSKeplerianSet_r12_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NavModel_BDSKeplerianSet_r12, bdsURAI_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_bdsURAI_r12_constraint_1,
		&asn_PER_memb_bdsURAI_r12_constr_2,
		0,
		"bdsURAI-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NavModel_BDSKeplerianSet_r12, bdsToe_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_bdsToe_r12_constraint_1,
		&asn_PER_memb_bdsToe_r12_constr_3,
		0,
		"bdsToe-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NavModel_BDSKeplerianSet_r12, bdsAPowerHalf_r12),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_bdsAPowerHalf_r12_4,
		memb_bdsAPowerHalf_r12_constraint_1,
		&asn_PER_memb_bdsAPowerHalf_r12_constr_4,
		0,
		"bdsAPowerHalf-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NavModel_BDSKeplerianSet_r12, bdsE_r12),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_bdsE_r12_5,
		memb_bdsE_r12_constraint_1,
		&asn_PER_memb_bdsE_r12_constr_5,
		0,
		"bdsE-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NavModel_BDSKeplerianSet_r12, bdsW_r12),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_bdsW_r12_constraint_1,
		&asn_PER_memb_bdsW_r12_constr_6,
		0,
		"bdsW-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NavModel_BDSKeplerianSet_r12, bdsDeltaN_r12),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_bdsDeltaN_r12_constraint_1,
		&asn_PER_memb_bdsDeltaN_r12_constr_7,
		0,
		"bdsDeltaN-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NavModel_BDSKeplerianSet_r12, bdsM0_r12),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_bdsM0_r12_constraint_1,
		&asn_PER_memb_bdsM0_r12_constr_8,
		0,
		"bdsM0-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NavModel_BDSKeplerianSet_r12, bdsOmega0_r12),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_bdsOmega0_r12_constraint_1,
		&asn_PER_memb_bdsOmega0_r12_constr_9,
		0,
		"bdsOmega0-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NavModel_BDSKeplerianSet_r12, bdsOmegaDot_r12),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_bdsOmegaDot_r12_constraint_1,
		&asn_PER_memb_bdsOmegaDot_r12_constr_10,
		0,
		"bdsOmegaDot-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NavModel_BDSKeplerianSet_r12, bdsI0_r12),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_bdsI0_r12_constraint_1,
		&asn_PER_memb_bdsI0_r12_constr_11,
		0,
		"bdsI0-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NavModel_BDSKeplerianSet_r12, bdsIDot_r12),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_bdsIDot_r12_constraint_1,
		&asn_PER_memb_bdsIDot_r12_constr_12,
		0,
		"bdsIDot-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NavModel_BDSKeplerianSet_r12, bdsCuc_r12),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_bdsCuc_r12_constraint_1,
		&asn_PER_memb_bdsCuc_r12_constr_13,
		0,
		"bdsCuc-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NavModel_BDSKeplerianSet_r12, bdsCus_r12),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_bdsCus_r12_constraint_1,
		&asn_PER_memb_bdsCus_r12_constr_14,
		0,
		"bdsCus-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NavModel_BDSKeplerianSet_r12, bdsCrc_r12),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_bdsCrc_r12_constraint_1,
		&asn_PER_memb_bdsCrc_r12_constr_15,
		0,
		"bdsCrc-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NavModel_BDSKeplerianSet_r12, bdsCrs_r12),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_bdsCrs_r12_constraint_1,
		&asn_PER_memb_bdsCrs_r12_constr_16,
		0,
		"bdsCrs-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NavModel_BDSKeplerianSet_r12, bdsCic_r12),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_bdsCic_r12_constraint_1,
		&asn_PER_memb_bdsCic_r12_constr_17,
		0,
		"bdsCic-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NavModel_BDSKeplerianSet_r12, bdsCis_r12),
		(ASN_TAG_CLASS_CONTEXT | (16 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_bdsCis_r12_constraint_1,
		&asn_PER_memb_bdsCis_r12_constr_18,
		0,
		"bdsCis-r12"
		},
};
static const ber_tlv_tag_t asn_DEF_NavModel_BDSKeplerianSet_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NavModel_BDSKeplerianSet_r12_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* bdsURAI-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* bdsToe-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* bdsAPowerHalf-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* bdsE-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* bdsW-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* bdsDeltaN-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* bdsM0-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* bdsOmega0-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* bdsOmegaDot-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* bdsI0-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* bdsIDot-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* bdsCuc-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* bdsCus-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* bdsCrc-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* bdsCrs-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0 }, /* bdsCic-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (16 << 2)), 16, 0, 0 } /* bdsCis-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NavModel_BDSKeplerianSet_r12_specs_1 = {
	sizeof(struct NavModel_BDSKeplerianSet_r12),
	offsetof(struct NavModel_BDSKeplerianSet_r12, _asn_ctx),
	asn_MAP_NavModel_BDSKeplerianSet_r12_tag2el_1,
	17,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_NavModel_BDSKeplerianSet_r12 = {
	"NavModel-BDSKeplerianSet-r12",
	"NavModel-BDSKeplerianSet-r12",
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
	asn_DEF_NavModel_BDSKeplerianSet_r12_tags_1,
	sizeof(asn_DEF_NavModel_BDSKeplerianSet_r12_tags_1)
		/sizeof(asn_DEF_NavModel_BDSKeplerianSet_r12_tags_1[0]), /* 1 */
	asn_DEF_NavModel_BDSKeplerianSet_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_NavModel_BDSKeplerianSet_r12_tags_1)
		/sizeof(asn_DEF_NavModel_BDSKeplerianSet_r12_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_NavModel_BDSKeplerianSet_r12_1,
	17,	/* Elements count */
	&asn_SPC_NavModel_BDSKeplerianSet_r12_specs_1	/* Additional specs */
};

