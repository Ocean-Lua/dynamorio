/* This file was generated by codec.py from codec.txt. */

#ifndef OPCODE_H
#define OPCODE_H 1

/* DR_API EXPORT TOFILE dr_ir_opcodes_aarch64.h */
/* DR_API EXPORT BEGIN */

/****************************************************************************
 * OPCODES
 */
/**
 * @file dr_ir_opcodes_aarch64.h
 * @brief Instruction opcode constants for AArch64.
 */
/** Opcode constants for use in the instr_t data structure. */
enum {
/*   0 */     OP_INVALID,  /* NULL, */ /**< INVALID opcode */
/*   1 */     OP_UNDECODED,  /* NULL, */ /**< UNDECODED opcode */
/*   2 */     OP_CONTD,    /* NULL, */ /**< CONTD opcode */
/*   3 */     OP_LABEL,    /* NULL, */ /**< LABEL opcode */

/*   4 */     OP_add,             /**< AArch64 add opcode.*/
/*   5 */     OP_adds,            /**< AArch64 adds opcode.*/
/*   6 */     OP_adr,             /**< AArch64 adr opcode.*/
/*   7 */     OP_adrp,            /**< AArch64 adrp opcode.*/
/*   8 */     OP_and,             /**< AArch64 and opcode.*/
/*   9 */     OP_ands,            /**< AArch64 ands opcode.*/
/*  10 */     OP_b,               /**< AArch64 b opcode.*/
/*  11 */     OP_bcond,           /**< AArch64 bcond opcode.*/
/*  12 */     OP_bic,             /**< AArch64 bic opcode.*/
/*  13 */     OP_bics,            /**< AArch64 bics opcode.*/
/*  14 */     OP_bl,              /**< AArch64 bl opcode.*/
/*  15 */     OP_blr,             /**< AArch64 blr opcode.*/
/*  16 */     OP_br,              /**< AArch64 br opcode.*/
/*  17 */     OP_brk,             /**< AArch64 brk opcode.*/
/*  18 */     OP_cbnz,            /**< AArch64 cbnz opcode.*/
/*  19 */     OP_cbz,             /**< AArch64 cbz opcode.*/
/*  20 */     OP_eon,             /**< AArch64 eon opcode.*/
/*  21 */     OP_eor,             /**< AArch64 eor opcode.*/
/*  22 */     OP_isb,             /**< AArch64 isb opcode.*/
/*  23 */     OP_ld1,             /**< AArch64 ld1 opcode.*/
/*  24 */     OP_ld1r,            /**< AArch64 ld1r opcode.*/
/*  25 */     OP_ld2,             /**< AArch64 ld2 opcode.*/
/*  26 */     OP_ld2r,            /**< AArch64 ld2r opcode.*/
/*  27 */     OP_ld3,             /**< AArch64 ld3 opcode.*/
/*  28 */     OP_ld3r,            /**< AArch64 ld3r opcode.*/
/*  29 */     OP_ld4,             /**< AArch64 ld4 opcode.*/
/*  30 */     OP_ld4r,            /**< AArch64 ld4r opcode.*/
/*  31 */     OP_ldar,            /**< AArch64 ldar opcode.*/
/*  32 */     OP_ldarb,           /**< AArch64 ldarb opcode.*/
/*  33 */     OP_ldarh,           /**< AArch64 ldarh opcode.*/
/*  34 */     OP_ldaxp,           /**< AArch64 ldaxp opcode.*/
/*  35 */     OP_ldaxr,           /**< AArch64 ldaxr opcode.*/
/*  36 */     OP_ldaxrb,          /**< AArch64 ldaxrb opcode.*/
/*  37 */     OP_ldaxrh,          /**< AArch64 ldaxrh opcode.*/
/*  38 */     OP_ldnp,            /**< AArch64 ldnp opcode.*/
/*  39 */     OP_ldp,             /**< AArch64 ldp opcode.*/
/*  40 */     OP_ldpsw,           /**< AArch64 ldpsw opcode.*/
/*  41 */     OP_ldr,             /**< AArch64 ldr opcode.*/
/*  42 */     OP_ldrb,            /**< AArch64 ldrb opcode.*/
/*  43 */     OP_ldrh,            /**< AArch64 ldrh opcode.*/
/*  44 */     OP_ldrsb,           /**< AArch64 ldrsb opcode.*/
/*  45 */     OP_ldrsh,           /**< AArch64 ldrsh opcode.*/
/*  46 */     OP_ldrsw,           /**< AArch64 ldrsw opcode.*/
/*  47 */     OP_ldtr,            /**< AArch64 ldtr opcode.*/
/*  48 */     OP_ldtrb,           /**< AArch64 ldtrb opcode.*/
/*  49 */     OP_ldtrh,           /**< AArch64 ldtrh opcode.*/
/*  50 */     OP_ldtrsb,          /**< AArch64 ldtrsb opcode.*/
/*  51 */     OP_ldtrsh,          /**< AArch64 ldtrsh opcode.*/
/*  52 */     OP_ldtrsw,          /**< AArch64 ldtrsw opcode.*/
/*  53 */     OP_ldur,            /**< AArch64 ldur opcode.*/
/*  54 */     OP_ldurb,           /**< AArch64 ldurb opcode.*/
/*  55 */     OP_ldurh,           /**< AArch64 ldurh opcode.*/
/*  56 */     OP_ldursb,          /**< AArch64 ldursb opcode.*/
/*  57 */     OP_ldursh,          /**< AArch64 ldursh opcode.*/
/*  58 */     OP_ldursw,          /**< AArch64 ldursw opcode.*/
/*  59 */     OP_ldxp,            /**< AArch64 ldxp opcode.*/
/*  60 */     OP_ldxr,            /**< AArch64 ldxr opcode.*/
/*  61 */     OP_ldxrb,           /**< AArch64 ldxrb opcode.*/
/*  62 */     OP_ldxrh,           /**< AArch64 ldxrh opcode.*/
/*  63 */     OP_movk,            /**< AArch64 movk opcode.*/
/*  64 */     OP_movn,            /**< AArch64 movn opcode.*/
/*  65 */     OP_movz,            /**< AArch64 movz opcode.*/
/*  66 */     OP_mrs,             /**< AArch64 mrs opcode.*/
/*  67 */     OP_msr,             /**< AArch64 msr opcode.*/
/*  68 */     OP_nop,             /**< AArch64 nop opcode.*/
/*  69 */     OP_orn,             /**< AArch64 orn opcode.*/
/*  70 */     OP_orr,             /**< AArch64 orr opcode.*/
/*  71 */     OP_prfm,            /**< AArch64 prfm opcode.*/
/*  72 */     OP_prfum,           /**< AArch64 prfum opcode.*/
/*  73 */     OP_ret,             /**< AArch64 ret opcode.*/
/*  74 */     OP_st1,             /**< AArch64 st1 opcode.*/
/*  75 */     OP_st2,             /**< AArch64 st2 opcode.*/
/*  76 */     OP_st3,             /**< AArch64 st3 opcode.*/
/*  77 */     OP_st4,             /**< AArch64 st4 opcode.*/
/*  78 */     OP_stlr,            /**< AArch64 stlr opcode.*/
/*  79 */     OP_stlrb,           /**< AArch64 stlrb opcode.*/
/*  80 */     OP_stlrh,           /**< AArch64 stlrh opcode.*/
/*  81 */     OP_stlxp,           /**< AArch64 stlxp opcode.*/
/*  82 */     OP_stlxr,           /**< AArch64 stlxr opcode.*/
/*  83 */     OP_stlxrb,          /**< AArch64 stlxrb opcode.*/
/*  84 */     OP_stlxrh,          /**< AArch64 stlxrh opcode.*/
/*  85 */     OP_stnp,            /**< AArch64 stnp opcode.*/
/*  86 */     OP_stp,             /**< AArch64 stp opcode.*/
/*  87 */     OP_str,             /**< AArch64 str opcode.*/
/*  88 */     OP_strb,            /**< AArch64 strb opcode.*/
/*  89 */     OP_strh,            /**< AArch64 strh opcode.*/
/*  90 */     OP_sttr,            /**< AArch64 sttr opcode.*/
/*  91 */     OP_sttrb,           /**< AArch64 sttrb opcode.*/
/*  92 */     OP_sttrh,           /**< AArch64 sttrh opcode.*/
/*  93 */     OP_stur,            /**< AArch64 stur opcode.*/
/*  94 */     OP_sturb,           /**< AArch64 sturb opcode.*/
/*  95 */     OP_sturh,           /**< AArch64 sturh opcode.*/
/*  96 */     OP_stxp,            /**< AArch64 stxp opcode.*/
/*  97 */     OP_stxr,            /**< AArch64 stxr opcode.*/
/*  98 */     OP_stxrb,           /**< AArch64 stxrb opcode.*/
/*  99 */     OP_stxrh,           /**< AArch64 stxrh opcode.*/
/* 100 */     OP_sub,             /**< AArch64 sub opcode.*/
/* 101 */     OP_subs,            /**< AArch64 subs opcode.*/
/* 102 */     OP_svc,             /**< AArch64 svc opcode.*/
/* 103 */     OP_sys,             /**< AArch64 sys opcode.*/
/* 104 */     OP_tbnz,            /**< AArch64 tbnz opcode.*/
/* 105 */     OP_tbz,             /**< AArch64 tbz opcode.*/

    OP_xx, /* placeholder for undecoded instructions */

    OP_AFTER_LAST,
    OP_FIRST = OP_LABEL + 1,      /**< First real opcode. */
    OP_LAST  = OP_AFTER_LAST - 1, /**< Last real opcode. */
};

/* alternative names */
#define OP_jmp       OP_b      /**< Platform-independent opcode name for jump. */
#define OP_jmp_short OP_b      /**< Platform-independent opcode name for short jump. */
#define OP_load      OP_ldr    /**< Platform-independent opcode name for load. */
#define OP_store     OP_str    /**< Platform-independent opcode name for store. */

/****************************************************************************/
/* DR_API EXPORT END */

#endif /* OPCODE_H */
