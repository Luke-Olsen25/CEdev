/**
 * @file
 * @authors
 * Matt "MateoConLechuga" Waltz\n
 * Jacob "jacobly" Young
 * @brief TI token defines
 */

#ifndef TI_TOKENS_H
#define TI_TOKENS_H

#ifdef __cplusplus
extern "C" {
#endif

/** @defgroup one_byte_tokens One Bye Tokens
 *  One-byte tokens are one byte tokens.
 */

/** @defgroup matrix_tokens Matrix Tokens
 *  Matrix tokens are two-byte tokens prefixed by `OS_TOK_MATRIX`.
 */

/** @defgroup list_tokens List Tokens
 *  List tokens are two-byte tokens prefixed by `OS_TOK_LIST`.
 */

/** @defgroup equ_tokens Equation Tokens
 *  Equation tokens are two-byte tokens prefixed by `OS_TOK_EQU`.
 */

/** @defgroup pic_tokens Picture Tokens
 *  Picture tokens are two-byte tokens prefixed by `OS_TOK_PIC`.
 */

/** @defgroup gdb_tokens GDB Tokens
 *  GDB tokens are two-byte tokens prefixed by `OS_TOK_GDB`.
 */

/** @defgroup str_tokens String Tokens
 *  String tokens are two-byte tokens prefixed by `OS_TOK_STR`.
 */

/** @defgroup stats_tokens Statistics Tokens
 *  Statistics variables are two-byte tokens prefixed by `OS_TOK_STAT`.
 */

/** @defgroup sys_tokens Window/Finance System Tokens
 *  System Window/Finance tokens are two-byte tokens prefixed by `OS_TOK_SYS`.
 */

/** @defgroup graph_tokens Graph Tokens
 *  Graph two-byte tokens prefixed by `OS_TOK_GRAPH`.
 */

/** @defgroup two_byte_tokens General Two Byte Tokens
 *  General two-byte tokens starting with byte `OS_TOK_2BYTE`.
 */

/** @defgroup ext_two_byte_tokens Extended Two Byte Tokens
 *  Extended two-byte tokens starting with byte `OS_TOK_2BYTE_EXT`.
 */

/** \addtogroup one_byte_tokens
 *  @{
 */

/** ►DMS‎ */
#define OS_TOK_TO_DMS 0x01
/** ►Dec‎ */
#define OS_TOK_TO_DEC 0x02
/** ►Frac‎ */
#define OS_TOK_TO_FRAC 0x03
/** →‎ */
#define OS_TOK_STO 0x04
/** Boxplot‎ */
#define OS_TOK_BOXPLOT 0x05
/** [‎ */
#define OS_TOK_LEFT_BRACKET 0x06
/** ]‎ */
#define OS_TOK_RIGHT_BRACKET 0x07
/** {‎ */
#define OS_TOK_LEFT_BRACE 0x08
/** }‎ */
#define OS_TOK_RIGHT_BRACE 0x09
/** r‎ */
#define OS_TOK_FROM_RAD 0x0A
/** °‎ */
#define OS_TOK_FROM_DEG 0x0B
/** ⁻¹‎ */
#define OS_TOK_RECIPROCAL 0x0C
/** ²‎ */
#define OS_TOK_SQUARE 0x0D
/** T‎ */
#define OS_TOK_TRANSPOSE 0x0E
/** ³‎ */
#define OS_TOK_CUBE 0x0F
/** (‎ */
#define OS_TOK_LEFT_PAREN 0x10
/** )‎ */
#define OS_TOK_RIGHT_PAREN 0x11
/** round(‎ */
#define OS_TOK_ROUND 0x12
/** pxl-Test(‎ */
#define OS_TOK_PXL_TEST 0x13
/** augment(‎ */
#define OS_TOK_AUGMENT 0x14
/** rowSwap(‎ */
#define OS_TOK_ROW_SWAP 0x15
/** row+(‎ */
#define OS_TOK_ROW_ADD 0x16
/** *row(‎ */
#define OS_TOK_MULT_ROW 0x17
/** *row+(‎ */
#define OS_TOK_MULT_ROW_ADD 0x18
/** max(‎ */
#define OS_TOK_MAX 0x19
/** min(‎ */
#define OS_TOK_MIN 0x1A
/** R►Pr(‎ */
#define OS_TOK_R_TO_PR 0x1B
/** R►Pθ(‎ */
#define OS_TOK_R_TO_PTHETA 0x1C
/** P►Rx(‎ */
#define OS_TOK_P_TO_RX 0x1D
/** P►Ry‎ */
#define OS_TOK_P_TO_RY 0x1E
/** median(‎ */
#define OS_TOK_MEDIAN 0x1F
/** randM(‎ */
#define OS_TOK_RANDM 0x20
/** mean(‎ */
#define OS_TOK_MEAN 0x21
/** solve(‎ */
#define OS_TOK_SOLVE 0x22
/** seq(‎ */
#define OS_TOK_SEQ 0x23
/** fnInt(‎ */
#define OS_TOK_FNINT 0x24
/** nDeriv(‎ */
#define OS_TOK_NDERIV 0x25
//#define tEvalF              0x26
/** fMin(‎ */
#define OS_TOK_FMIN 0x27
/** fMax(‎ */
#define OS_TOK_FMAX 0x28
/** (space)‎ */
#define OS_TOK_SPACE 0x29
/** "‎ */
#define OS_TOK_DOUBLE_QUOTE 0x2A
/** ,‎ */
#define OS_TOK_COMMA 0x2B
/** 𝑖‎ */
#define OS_TOK_IMAGINARY 0x2C
/** !‎ */
#define OS_TOK_EXCLAIM 0x2D
/** CubicReg‎ */
#define OS_TOK_CUBIC_REG 0x2E
/** QuartReg‎ */
#define OS_TOK_QUART_REG 0x2F
/** 0‎ */
#define OS_TOK_0 0x30
/** 1‎ */
#define OS_TOK_1 0x31
/** 2‎ */
#define OS_TOK_2 0x32
/** 3‎ */
#define OS_TOK_3 0x33
/** 4‎ */
#define OS_TOK_4 0x34
/** 5‎ */
#define OS_TOK_5 0x35
/** 6‎ */
#define OS_TOK_6 0x36
/** 7‎ */
#define OS_TOK_7 0x37
/** 8‎ */
#define OS_TOK_8 0x38
/** 9‎ */
#define OS_TOK_9 0x39
/** ․‎ */
#define OS_TOK_DECIMAL_POINT 0x3A
/** ᴇ‎ */
#define OS_TOK_EXP_10 0x3B
/** or‎ */
#define OS_TOK_OR 0x3C
/** xor‎ */
#define OS_TOK_XOR 0x3D
/** :‎ */
#define OS_TOK_COLON 0x3E
/** (newline)‎ */
#define OS_TOK_NEWLINE 0x3F
/** and‎ */
#define OS_TOK_AND 0x40
/** A‎ */
#define OS_TOK_A 0x41
/** B‎ */
#define OS_TOK_B 0x42
/** C‎ */
#define OS_TOK_C 0x43
/** D‎ */
#define OS_TOK_D 0x44
/** E‎ */
#define OS_TOK_E 0x45
/** F‎ */
#define OS_TOK_F 0x46
/** G‎ */
#define OS_TOK_G 0x47
/** H‎ */
#define OS_TOK_H 0x48
/** I‎ */
#define OS_TOK_I 0x49
/** J‎ */
#define OS_TOK_J 0x4A
/** K‎ */
#define OS_TOK_K 0x4B
/** L‎ */
#define OS_TOK_L 0x4C
/** M‎ */
#define OS_TOK_M 0x4D
/** N‎ */
#define OS_TOK_N 0x4E
/** O‎ */
#define OS_TOK_O 0x4F
/** P‎ */
#define OS_TOK_P 0x50
/** Q‎ */
#define OS_TOK_Q 0x51
/** R‎ */
#define OS_TOK_R 0x52
/** S‎ */
#define OS_TOK_S 0x53
/** T‎ */
#define OS_TOK_T 0x54
/** U‎ */
#define OS_TOK_U 0x55
/** V‎ */
#define OS_TOK_V 0x56
/** W‎ */
#define OS_TOK_W 0x57
/** X‎ */
#define OS_TOK_X 0x58
/** Y‎ */
#define OS_TOK_Y 0x59
/** Z‎ */
#define OS_TOK_Z 0x5A
/** θ‎ */
#define OS_TOK_THETA 0x5B
/** prgm‎ */
#define OS_TOK_PRGM 0x5F

/** Radian‎ */
#define OS_TOK_RADIAN 0x64
/** Degree‎ */
#define OS_TOK_DEGREE 0x65
/** Normal‎ */
#define OS_TOK_NORMAL 0x66
/** Sci‎ */
#define OS_TOK_SCI 0x67
/** Eng‎ */
#define OS_TOK_ENG 0x68
/** Float‎ */
#define OS_TOK_FLOAT 0x69
/** =‎ */
#define OS_TOK_EQUAL 0x6A
/** \<‎ */
#define OS_TOK_LESS_THAN 0x6B
/** \>‎ */
#define OS_TOK_GREATER_THAN 0x6C
/** ≤‎ */
#define OS_TOK_LESS_THAN_EQUAL 0x6D
/** ≥‎ */
#define OS_TOK_GREATER_THAN_EQUAL 0x6E
/** ≠‎ */
#define OS_TOK_NOT_EQUAL 0x6F
/** +‎ */
#define OS_TOK_ADD 0x70
/** -‎ */
#define OS_TOK_SUBTRACT 0x71
/** Ans‎ */
#define OS_TOK_ANS 0x72
/** Fix‎ */
#define OS_TOK_FIX 0x73
/** Horiz‎ */
#define OS_TOK_HORIZ 0x74
/** Full‎ */
#define OS_TOK_FULL 0x75
/** Func‎ */
#define OS_TOK_FUNC 0x76
/** Param‎ */
#define OS_TOK_PARAM 0x77
/** Polar‎ */
#define OS_TOK_POLAR 0x78
/** Seq‎ */
#define OS_TOK_SEQM 0x79
/** IndpntAuto‎ */
#define OS_TOK_INDPNT_AUTO 0x7A
/** IndpntAsk‎ */
#define OS_TOK_INDPNT_ASK 0x7B
/** DependAuto‎ */
#define OS_TOK_DEPEND_AUTO 0x7C
/** DependAsk‎ */
#define OS_TOK_DEPEND_ASK 0x7D
/** ☐‎ */
#define OS_TOK_PLOT_BOX 0x7F
/** ➕‎ */
#define OS_TOK_PLOT_CROSS 0x80
/** •‎ */
#define OS_TOK_PLOT_DOT 0x81
/** *‎ */
#define OS_TOK_MULTIPLY 0x82
/** /‎ */
#define OS_TOK_DIVIDE 0x83
/** Trace‎ */
#define OS_TOK_TRACE 0x84
/** ClrDraw‎ */
#define OS_TOK_CLRDRAW 0x85
/** ZStandard‎ */
#define OS_TOK_ZSTANDARD 0x86
/** ZTrig‎ */
#define OS_TOK_ZTRIG 0x87
/** ZBox‎ */
#define OS_TOK_ZBOX 0x88
/** Zoom In‎ */
#define OS_TOK_ZIN 0x89
/** Zoom Out‎ */
#define OS_TOK_ZOUT 0x8A
/** ZSquare‎ */
#define OS_TOK_ZSQUARE 0x8B
/** ZInteger‎ */
#define OS_TOK_ZINT 0x8C
/** ZPrevious‎ */
#define OS_TOK_ZPREVIOUS 0x8D
/** ZDecimal‎ */
#define OS_TOK_ZDECIMAL 0x8E
/** ZStat‎ */
#define OS_TOK_ZSTAT 0x8F
/** ZoomRcl‎ */
#define OS_TOK_ZRCL 0x90
/** PrintScreen‎ */
#define OS_TOK_PRINT_SCREEN 0x91
/** ZoomSto‎ */
#define OS_TOK_ZSTO 0x92
/** Text(‎ */
#define OS_TOK_TEXT 0x93
/** nPr‎ */
#define OS_TOK_NPR 0x94
/** nCr‎ */
#define OS_TOK_NCR 0x95
/** FnOn‎ */
#define OS_TOK_FNON 0x96
/** FnOff‎ */
#define OS_TOK_FNOFF 0x97
/** StorePic‎ */
#define OS_TOK_STORE_PIC 0x98
/** RecallPic‎ */
#define OS_TOK_RECALL_PIC 0x99
/** StoreGDB‎ */
#define OS_TOK_STORE_GDB 0x9A
/** RecallGDB‎ */
#define OS_TOK_RECALL_GDB 0x9B
/** Line(‎ */
#define OS_TOK_LINE 0x9C
/** Vertical‎ */
#define OS_TOK_VERTICAL 0x9D
/** Pt-On(‎ */
#define OS_TOK_PT_ON 0x9E
/** Pt-Off(‎ */
#define OS_TOK_PT_OFF 0x9F
/** Pt-Change(‎ */
#define OS_TOK_PT_CHANGE 0xA0
/** Pxl-On(‎ */
#define OS_TOK_PXL_ON 0xA1
/** Pxl-Off(‎ */
#define OS_TOK_PXL_OFF 0xA2
/** Pxl-Change(‎ */
#define OS_TOK_PXL_CHANGE 0xA3
/** Shade(‎ */
#define OS_TOK_SHADE 0xA4
/** Circle(‎ */
#define OS_TOK_CIRCLE 0xA5
/** Horizontal‎ */
#define OS_TOK_HORIZONTAL 0xA6
/** Tangent(‎ */
#define OS_TOK_TANGENT 0xA7
/** DrawInv(‎ */
#define OS_TOK_DRAWINV 0xA8
/** DrawF(‎ */
#define OS_TOK_DRAWF 0xA9
/** rand‎ */
#define OS_TOK_RAND 0xAB
/** π‎ */
#define OS_TOK_PI 0xAC
/** getKey‎ */
#define OS_TOK_GETKEY 0xAD
/** '‎ */
#define OS_TOK_SINGLE_QUOTE 0xAE
/** ?‎ */
#define OS_TOK_QUESTION 0xAF
/** ⁻ (negative)‎ */
#define OS_TOK_NEGATIVE 0xB0
/** int(‎ */
#define OS_TOK_INT 0xB1
/** abs(‎ */
#define OS_TOK_ABS 0xB2
/** det(‎ */
#define OS_TOK_DET 0xB3
/** identity(‎ */
#define OS_TOK_IDENTITY 0xB4
/** dim(‎ */
#define OS_TOK_DIM 0xB5
/** sum(‎ */
#define OS_TOK_SUM 0xB6
/** prod(‎ */
#define OS_TOK_PROD 0xB7
/** not(‎ */
#define OS_TOK_NOT 0xB8
/** iPart(‎ */
#define OS_TOK_IPART 0xB9
/** fPart(‎ */
#define OS_TOK_FPART 0xBA
/** √(‎ */
#define OS_TOK_SQRT 0xBC
/** ³√(‎ */
#define OS_TOK_CUBE_ROOT 0xBD
/** ln(‎ */
#define OS_TOK_LN 0xBE
/** e^(‎ */
#define OS_TOK_EXP 0xBF
/** log(‎ */
#define OS_TOK_LOG 0xC0
/** 10^(‎ */
#define OS_TOK_INV_LOG 0xC1
/** sin(‎ */
#define OS_TOK_SIN 0xC2
/** sin⁻¹(‎ */
#define OS_TOK_INV_SIN 0xC3
/** cos(‎ */
#define OS_TOK_COS 0xC4
/** cos⁻¹(‎ */
#define OS_TOK_INV_COS 0xC5
/** tan(‎ */
#define OS_TOK_TAN 0xC6
/** tan⁻¹(‎ */
#define OS_TOK_INV_TAN 0xC7
/** sinh(‎ */
#define OS_TOK_SINH 0xC8
/** sinh⁻¹(‎ */
#define OS_TOK_INV_SINH 0xC9
/** cosh(‎ */
#define OS_TOK_COSH 0xCA
/** cosh⁻¹(‎ */
#define OS_TOK_INV_COSH 0xCB
/** tanh(‎ */
#define OS_TOK_TANH 0xCC
/** tanh⁻¹(‎ */
#define OS_TOK_INV_TANH 0xCD
/** If‎ */
#define OS_TOK_IF 0xCE
/** Then‎ */
#define OS_TOK_THEN 0xCF
/** Else‎ */
#define OS_TOK_ELSE 0xD0
/** While‎ */
#define OS_TOK_WHILE 0xD1
/** Repeat‎ */
#define OS_TOK_REPEAT 0xD2
/** For‎ */
#define OS_TOK_FOR 0xD3
/** End‎ */
#define OS_TOK_END 0xD4
/** Return‎ */
#define OS_TOK_RETURN 0xD5
/** Lbl‎ */
#define OS_TOK_LBL 0xD6
/** Goto‎ */
#define OS_TOK_GOTO 0xD7
/** Pause‎ */
#define OS_TOK_PAUSE 0xD8
/** Stop‎ */
#define OS_TOK_STOP 0xD9
/** IS\>‎ */
#define OS_TOK_IS_GREATER 0xDA
/** DS\>‎ */
#define OS_TOK_DS_LESS_THAN 0xDB
/** Input‎ */
#define OS_TOK_INPUT 0xDC
/** Prompt‎ */
#define OS_TOK_PROMPT 0xDD
/** Disp‎ */
#define OS_TOK_DISP 0xDE
/** DispGraph‎ */
#define OS_TOK_DISP_GRAPH 0xDF
/** Output‎ */
#define OS_TOK_OUTPUT 0xE0
/** ClrHome‎ */
#define OS_TOK_CLR_HOME 0xE1
/** Fill(‎ */
#define OS_TOK_FILL 0xE2
/** SortA(‎ */
#define OS_TOK_SORT_A 0xE3
/** SortD(‎ */
#define OS_TOK_SORT_D 0xE4
/** DispTable‎ */
#define OS_TOK_DISP_TABLE 0xE5
/** Menu(‎ */
#define OS_TOK_MENU 0xE6
/** Send(‎ */
#define OS_TOK_SEND 0xE7
/** Get(‎ */
#define OS_TOK_GET 0xE8
/** PlotsOn‎ */
#define OS_TOK_PLOTS_ON 0xE9
/** PlotsOff‎ */
#define OS_TOK_PLOTS_OFF 0xEA
/** ∟ (list designator)‎ */
#define OS_TOK_LIST_L 0xEB
/** Plot1(‎ */
#define OS_TOK_PLOT_1 0xEC
/** Plot2(‎ */
#define OS_TOK_PLOT_2 0xED
/** Plot3(‎ */
#define OS_TOK_PLOT_3 0xEE
/** ^‎ */
#define OS_TOK_POWER 0xF0
/** ×√‎ */
#define OS_TOK_X_ROOT 0xF1
/** 1-Var Stats‎ */
#define OS_TOK_1_VAR_STATS 0xF2
/** 2-Var Stats‎ */
#define OS_TOK_2_VAR_STATS 0xF3
/** LinReg(a+bx)‎ */
#define OS_TOK_LIN_REG_A_BX 0xF4
/** ExpReg‎ */
#define OS_TOK_EXP_REG 0xF5
/** LnReg‎ */
#define OS_TOK_LN_REG 0xF6
/** PwrReg‎ */
#define OS_TOK_PWR_REG 0xF7
/** Med-Med‎ */
#define OS_TOK_MED_MED 0xF8
/** QuadReg‎ */
#define OS_TOK_QUAD_REG 0xF9
/** ClrList‎ */
#define OS_TOK_CLR_LIST 0xFA
/** ClrTable‎ */
#define OS_TOK_CLR_TABLE 0xFB
/** Histogram‎ */
#define OS_TOK_HISTOGRAM 0xFC
/** xyLine‎ */
#define OS_TOK_XY_LINE 0xFD
/** Scatter‎ */
#define OS_TOK_SCATTER 0xFE
/** LinReg(ax+b)‎ */
#define OS_TOK_LIN_REG_AX_B 0xFF

/** @}*/

/** \addtogroup matrix_tokens
 *  @{
 */

/** First byte of Matrix tokens */
#define OS_TOK_MATRIX 0x5C
/** [A]‎ */
#define OS_TOK_MATRIX_MAT_A 0x00
/** [B]‎ */
#define OS_TOK_MATRIX_MAT_B 0x01
/** [C]‎ */
#define OS_TOK_MATRIX_MAT_C 0x02
/** [D]‎ */
#define OS_TOK_MATRIX_MAT_D 0x03
/** [E]‎ */
#define OS_TOK_MATRIX_MAT_E 0x04
/** [F]‎ */
#define OS_TOK_MATRIX_MAT_F 0x05
/** [G]‎ */
#define OS_TOK_MATRIX_MAT_G 0x06
/** [H]‎ */
#define OS_TOK_MATRIX_MAT_H 0x07
/** [I]‎ */
#define OS_TOK_MATRIX_MAT_I 0x08
/** [J]‎ */
#define OS_TOK_MATRIX_MAT_J 0x09

/** @}*/

/** \addtogroup list_tokens
 *  @{
 */

/** First byte of List tokens */
#define OS_TOK_LIST 0x5D
/** L1‎ */
#define OS_TOK_LIST_L1 0x00
/** L2‎ */
#define OS_TOK_LIST_L2 0x01
/** L3‎ */
#define OS_TOK_LIST_L3 0x02
/** L4‎ */
#define OS_TOK_LIST_L4 0x03
/** L5‎ */
#define OS_TOK_LIST_L5 0x04
/** L6‎ */
#define OS_TOK_LIST_L6 0x05

/** @}*/

/** \addtogroup equ_tokens
 *  @{
 */

/** First byte of Equation tokens */
#define OS_TOK_EQU 0x5E
/** Y1‎ */
#define OS_TOK_EQU_Y1 0x10
/** Y2‎ */
#define OS_TOK_EQU_Y2 0x11
/** Y3‎ */
#define OS_TOK_EQU_Y3 0x12
/** Y4‎ */
#define OS_TOK_EQU_Y4 0x13
/** Y5‎ */
#define OS_TOK_EQU_Y5 0x14
/** Y6‎ */
#define OS_TOK_EQU_Y6 0x15
/** Y7‎ */
#define OS_TOK_EQU_Y7 0x16
/** Y8‎ */
#define OS_TOK_EQU_Y8 0x17
/** Y9‎ */
#define OS_TOK_EQU_Y9 0x18
/** Y0‎ */
#define OS_TOK_EQU_Y0 0x19
/** X1T‎ */
#define OS_TOK_EQU_X1T 0x20
/** Y1T‎ */
#define OS_TOK_EQU_Y1T 0x21
/** X2T‎ */
#define OS_TOK_EQU_X2T 0x22
/** Y2T‎ */
#define OS_TOK_EQU_Y2T 0x23
/** X3T‎ */
#define OS_TOK_EQU_X3T 0x24
/** Y3T‎ */
#define OS_TOK_EQU_Y3T 0x25
/** X4T‎ */
#define OS_TOK_EQU_X4T 0x26
/** Y4T‎ */
#define OS_TOK_EQU_Y4T 0x27
/** X5T‎ */
#define OS_TOK_EQU_X5T 0x28
/** Y5T‎ */
#define OS_TOK_EQU_Y5T 0x29
/** X6T‎ */
#define OS_TOK_EQU_X6T 0x2A
/** Y6T‎ */
#define OS_TOK_EQU_Y6T 0x2B
/** R1‎ */
#define OS_TOK_EQU_R1T 0x40
/** R2‎ */
#define OS_TOK_EQU_R2T 0x41
/** R3‎ */
#define OS_TOK_EQU_R3T 0x42
/** R4‎ */
#define OS_TOK_EQU_R4T 0x43
/** R5‎ */
#define OS_TOK_EQU_R5T 0x44
/** R6‎ */
#define OS_TOK_EQU_R6T 0x45
/** u‎ */
#define OS_TOK_EQU_U 0x80
/** v‎ */
#define OS_TOK_EQU_V 0x81
/** w‎ */
#define OS_TOK_EQU_W 0x82

/** @}*/

/** \addtogroup pic_tokens
 *  @{
 */

/** First byte of Picture tokens */
#define OS_TOK_PIC 0x60
/** Pic1‎ */
#define OS_TOK_PIC1 0x00
/** Pic2‎ */
#define OS_TOK_PIC2 0x01
/** Pic3‎ */
#define OS_TOK_PIC3 0x02
/** Pic4‎ */
#define OS_TOK_PIC4 0x03
/** Pic5‎ */
#define OS_TOK_PIC5 0x04
/** Pic6‎ */
#define OS_TOK_PIC6 0x05
/** Pic7‎ */
#define OS_TOK_PIC7 0x06
/** Pic8‎ */
#define OS_TOK_PIC8 0x07
/** Pic9‎ */
#define OS_TOK_PIC9 0x08
/** Pic0‎ */
#define OS_TOK_PIC0 0x09

/** @}*/

/** \addtogroup gdb_tokens
 *  @{
 */

/** First byte of GDB tokens */
#define OS_TOK_GDB 0x61
/** GDB1‎ */
#define OS_TOK_GDB1 0x00
/** GDB2‎ */
#define OS_TOK_GDB2 0x01
/** GDB3‎ */
#define OS_TOK_GDB3 0x02
/** GDB4‎ */
#define OS_TOK_GDB4 0x03
/** GDB5‎ */
#define OS_TOK_GDB5 0x04
/** GDB6‎ */
#define OS_TOK_GDB6 0x05
/** GDB7‎ */
#define OS_TOK_GDB7 0x06
/** GDB8‎ */
#define OS_TOK_GDB8 0x07
/** GDB9‎ */
#define OS_TOK_GDB9 0x08
/** GDB0‎ */
#define OS_TOK_GDB0 0x09

/** @}*/

/** \addtogroup str_tokens
 *  @{
 */

/** First byte of String tokens */
#define OS_TOK_STR 0xAA
/** Str1‎ */
#define OS_TOK_STR1 0x00
/** Str2‎ */
#define OS_TOK_STR2 0x01
/** Str3‎ */
#define OS_TOK_STR3 0x02
/** Str4‎ */
#define OS_TOK_STR4 0x03
/** Str5‎ */
#define OS_TOK_STR5 0x04
/** Str6‎ */
#define OS_TOK_STR6 0x05
/** Str7‎ */
#define OS_TOK_STR7 0x06
/** Str8‎ */
#define OS_TOK_STR8 0x07
/** Str9‎ */
#define OS_TOK_STR9 0x08
/** Str0‎ */
#define OS_TOK_STR0 0x09

/** @}*/

/** \addtogroup stats_tokens
 *  @{
 */

/** First byte of Statistics tokens */
#define OS_TOK_STAT 0x62
/** RegEq‎ */
#define OS_TOK_STAT_REG_EQ 0x01
/** n‎ */
#define OS_TOK_STAT_N 0x02
/** x̄‎ */
#define OS_TOK_STAT_MEAN_X 0x03
/** Σx‎ */
#define OS_TOK_STAT_SUM_X 0x04
/** Σx²‎ */
#define OS_TOK_STAT_SUM_SQUARE_X 0x05
/** Sx‎ */
#define OS_TOK_STAT_STD_DEV_X 0x06
/** σx‎ */
#define OS_TOK_STAT_STD_DEV_POP_X 0x07
/** minX‎ */
#define OS_TOK_STAT_MIN_X 0x08
/** maxX‎ */
#define OS_TOK_STAT_MAX_X 0x09
/** min‎Y */
#define OS_TOK_STAT_MIN_Y 0x0A
/** max‎Y */
#define OS_TOK_STAT_MAX_Y 0x0B
/** ȳ‎ */
#define OS_TOK_STAT_MEAN_Y 0x0C
/** Σy‎ */
#define OS_TOK_STAT_SUM_Y 0x0D
/** Σy²‎ */
#define OS_TOK_STAT_SUM_SQUARE_Y 0x0E
/** Sy‎ */
#define OS_TOK_STAT_STD_DEV_Y 0x0F
/** σy‎ */
#define OS_TOK_STAT_STD_DEV_POP_Y 0x10
/** Σxy‎ */
#define OS_TOK_STAT_SUM_X_Y 0x11
/** r‎ */
#define OS_TOK_STAT_CORRELATION 0x12
/** Med‎ */
#define OS_TOK_STAT_MED 0x13
/** Q1‎ */
#define OS_TOK_STAT_Q1 0x14
/** Q3‎ */
#define OS_TOK_STAT_Q3 0x15
/** a‎ */
#define OS_TOK_STAT_A 0x16
/** b‎ */
#define OS_TOK_STAT_B 0x17
/** c‎ */
#define OS_TOK_STAT_C 0x18
/** d‎ */
#define OS_TOK_STAT_D 0x19
/** e‎ */
#define OS_TOK_STAT_E 0x1A
/** x1‎ */
#define OS_TOK_STAT_X1 0x1B
/** x2‎ */
#define OS_TOK_STAT_X2 0x1C
/** x3‎ */
#define OS_TOK_STAT_X3 0x1D
/** y1‎ */
#define OS_TOK_STAT_Y1 0x1E
/** y2‎ */
#define OS_TOK_STAT_Y2 0x1F
/** y3‎ */
#define OS_TOK_STAT_Y3 0x20
/** 𝒏‎ */
#define OS_TOK_STAT_RECURSION_N 0x21
/** p‎ */
#define OS_TOK_STAT_P 0x22
/** z‎ */
#define OS_TOK_STAT_Z 0x23
/** t‎ */
#define OS_TOK_STAT_T 0x24
/** χ²‎ */
#define OS_TOK_STAT_CHI 0x25
/** 𝐅‎ */
#define OS_TOK_STAT_F 0x26
/** df‎ */
#define OS_TOK_STAT_DF 0x27
/** p̂‎ */
#define OS_TOK_STAT_P_HAT 0x28
/** p̂₁‎ */
#define OS_TOK_STAT_P_HAT_1 0x29
/** p̂₂‎ */
#define OS_TOK_STAT_P_HAT_2 0x2A
/** x̄₁‎ */
#define OS_TOK_STAT_MEAN_X1 0x2B
/** Sx₁‎ */
#define OS_TOK_STAT_STD_DEV_X1 0x2C
/** n₁‎ */
#define OS_TOK_STAT_N1 0x2D
/** x̄₂‎ */
#define OS_TOK_STAT_MEAN_X2 0x2E
/** Sx₂‎ */
#define OS_TOK_STAT_STD_DEV_X2 0x2F
/** n₂‎ */
#define OS_TOK_STAT_N2 0x30
/** Sxp‎ */
#define OS_TOK_STAT_STD_DEV_XP 0x31
/** lower‎ */
#define OS_TOK_STAT_LOWER 0x32
/** upper‎ */
#define OS_TOK_STAT_UPPER 0x33
/** s‎ */
#define OS_TOK_STAT_S 0x34
/** r²‎ */
#define OS_TOK_STAT_SQUARE_R 0x35
/** R²‎ */
#define OS_TOK_STAT_SQUARE_BIG_R 0x36
/** Factor df‎ */
#define OS_TOK_STAT_FACTOR_DF 0x37
/** Factor SS‎ */
#define OS_TOK_STAT_FACTOR_SS 0x38
/** Factor MS‎ */
#define OS_TOK_STAT_FACTOR_MS 0x39
/** Error df‎ */
#define OS_TOK_STAT_ERROR_DF 0x3A
/** Error SS‎ */
#define OS_TOK_STAT_ERROR_SS 0x3B
/** Error MS‎ */
#define OS_TOK_STAT_ERROR_MS 0x3C

/** @}*/

/** \addtogroup window_tokens
 *  @{
 */

/** First byte of Window tokens */
#define OS_TOK_SYS 0x63
/** ZXscl‎ */
#define OS_TOK_SYS_ZXSCL 0x00
/** ZYscl‎ */
#define OS_TOK_SYS_ZYSCL 0x01
/** Xscl‎ */
#define OS_TOK_SYS_XSCL 0x02
/** Yscl‎ */
#define OS_TOK_SYS_YSCL 0x03
/** u(nMin)‎ */
#define OS_TOK_SYS_U_NMIN 0x04
/** v(nMin)‎ */
#define OS_TOK_SYS_V_NMIN 0x05
/** u(n-1)‎ */
#define OS_TOK_SYS_U_N_1 0x06
/** v(n-1)‎ */
#define OS_TOK_SYS_V_N_1 0x07
/** Zu(nMin)‎ */
#define OS_TOK_SYS_ZU_NMIN 0x08
/** Zv(nMin)‎ */
#define OS_TOK_SYS_ZV_NMIN 0x09
/** Xmin‎ */
#define OS_TOK_SYS_XMIN 0x0A
/** Xmax‎ */
#define OS_TOK_SYS_XMAX 0x0B
/** Ymin‎ */
#define OS_TOK_SYS_YMIN 0x0C
/** Ymax */
#define OS_TOK_SYS_YMAX 0x0D
/** Tmin‎ */
#define OS_TOK_SYS_TMIN 0x0E
/** Tmax‎ */
#define OS_TOK_SYS_TMAX 0x0F
/** θmin‎ */
#define OS_TOK_SYS_THETA_MIN 0x10
/** θmax‎ */
#define OS_TOK_SYS_THETA_MAX 0x11
/** ZXmin‎ */
#define OS_TOK_SYS_ZXMIN 0x12
/** ZXmax‎ */
#define OS_TOK_SYS_ZXMAX 0x13
/** ZYmin‎ */
#define OS_TOK_SYS_ZYMIN 0x14
/** ZYmax‎ */
#define OS_TOK_SYS_ZYMAX 0x15
/** Zθmin‎ */
#define OS_TOK_SYS_ZTHETA_MIN 0x16
/** Zθmax‎ */
#define OS_TOK_SYS_ZTHETA_MAX 0x17
/** ZTmin‎ */
#define OS_TOK_SYS_ZTMIN 0x18
/** ZTmax‎ */
#define OS_TOK_SYS_ZTMAX 0x19
/** TblStart‎ */
#define OS_TOK_SYS_TBL_START 0x1A
/** PlotStart‎ */
#define OS_TOK_SYS_PLOT_START 0x1B
/** ZPlotStart‎ */
#define OS_TOK_SYS_ZPLOT_START 0x1C
/** nMax‎ */
#define OS_TOK_SYS_NMAX 0x1D
/** ZnMax‎ */
#define OS_TOK_SYS_ZNMAX 0x1E
/** nMin‎ */
#define OS_TOK_SYS_NMIN 0x1F
/** ZnMin‎ */
#define OS_TOK_SYS_ZNMIN 0x20
/** ΔTbl‎ */
#define OS_TOK_SYS_TBL_STEP 0x21
/** Tstep‎ */
#define OS_TOK_SYS_T_STEP 0x22
/** θstep‎ */
#define OS_TOK_SYS_THETA_STEP 0x23
/** ZTstep‎ */
#define OS_TOK_SYS_ZT_STEP 0x24
/** Zθstep‎ */
#define OS_TOK_SYS_ZTHETA_STEP 0x25
/** ΔX‎ */
#define OS_TOK_SYS_DELTA_X 0x26
/** ΔY‎ */
#define OS_TOK_SYS_DELTA_Y 0x27
/** XFact‎ */
#define OS_TOK_SYS_XFACT 0x28
/** YFact‎ */
#define OS_TOK_SYS_YFACT 0x29
/** TblInput‎ */
#define OS_TOK_SYS_TBL_INPUT 0x2A
/** 𝐍‎ */
#define OS_TOK_SYS_N 0x2B
/** I%‎ */
#define OS_TOK_SYS_I 0x2C
/** PV‎ */
#define OS_TOK_SYS_PV 0x2D
/** PMT‎ */
#define OS_TOK_SYS_PMT 0x2E
/** FV‎ */
#define OS_TOK_SYS_FV 0x2F
/** P/Y‎ */
#define OS_TOK_SYS_PY 0x30
/** C/Y‎ */
#define OS_TOK_SYS_CY 0x31
/** w(nMin)‎ */
#define OS_TOK_SYS_W_NMIN 0x32
/** Zw(nMin)‎ */
#define OS_TOK_SYS_ZW_NMIN 0x33
/** PlotStep‎ */
#define OS_TOK_SYS_PLOT_STEP 0x34
/** ZPlotStep‎ */
#define OS_TOK_SYS_ZPLOT_STEP 0x35
/** Xres‎ */
#define OS_TOK_SYS_XRES 0x36
/** ZXres‎ */
#define OS_TOK_SYS_ZXRES 0x37
/** TraceStep‎ */
#define OS_TOK_SYS_TRACE_STEP 0x38

/** @}*/

/** \addtogroup graphx_tokens
 *  @{
 */

/** First byte of Graph tokens */
#define OS_TOK_GRAPH 0x7E
/** Sequential‎ */
#define OS_TOK_GRAPH_SEQUENTIAL 0x00
/** Simul‎ */
#define OS_TOK_GRAPH_SIMUL 0x01
/** PolarGC‎ */
#define OS_TOK_GRAPH_POLAR_GC 0x02
/** RectGC‎ */
#define OS_TOK_GRAPH_RECT_GC 0x03
/** CoordOn‎ */
#define OS_TOK_GRAPH_COORD_ON 0x04
/** CoordOff‎ */
#define OS_TOK_GRAPH_COORD_OFF 0x05
/** Connected‎ */
#define OS_TOK_GRAPH_CONNECTED 0x06
/** Dot‎ */
#define OS_TOK_GRAPH_DOT 0x07
/** Axeson‎ */
#define OS_TOK_GRAPH_AXES_ON 0x08
/** AxesOfff‎ */
#define OS_TOK_GRAPH_AXES_OFF 0x09
/** GridOn‎ */
#define OS_TOK_GRAPH_GRID_ON 0x0A
/** GridOff‎ */
#define OS_TOK_GRAPH_GRID_OFF 0x0B
/** LabelOn‎ */
#define OS_TOK_GRAPH_LABEL_ON 0x0C
/** LabelOff‎ */
#define OS_TOK_GRAPH_LABEL_OFF 0x0D
/** Web‎ */
#define OS_TOK_GRAPH_WEB 0x0E
/** Time‎ */
#define OS_TOK_GRAPH_TIME 0x0F
/** uvAxes‎ */
#define OS_TOK_GRAPH_UV_AXES 0x10
/** vwAxes‎ */
#define OS_TOK_GRAPH_VW_AXES 0x11
/** uwAxes‎ */
#define OS_TOK_GRAPH_UW_AXES 0x12

/** @}*/

/** \addtogroup two_byte_tokens
 *  @{
 */

/** First byte of 2-byte tokens */
#define OS_TOK_2BYTE 0xBB
/** npv(‎ */
#define OS_TOK_NPV 0x00
/** irr(‎ */
#define OS_TOK_IRR 0x01
/** bal(‎ */
#define OS_TOK_BAL 0x02
/** Σprn(‎ */
#define OS_TOK_SUM_PRN 0x03
/** Σint(‎ */
#define OS_TOK_SUM_INT 0x04
/** ►Nom(‎ */
#define OS_TOK_TO_NOM 0x05
/** ►Eff(‎ */
#define OS_TOK_TO_EFF 0x06
/** dbd(‎ */
#define OS_TOK_DBD 0x07
/** lcm(‎ */
#define OS_TOK_LCM 0x08
/** gcd(‎ */
#define OS_TOK_GCD 0x09
/** randInt(‎ */
#define OS_TOK_RAND_INT 0x0A
/** randBin(‎ */
#define OS_TOK_RAND_BIN 0x0B
/** sub(‎ */
#define OS_TOK_SUB 0x0C
/** stdDev(‎ */
#define OS_TOK_STD_DEV 0x0D
/** variance(‎ */
#define OS_TOK_VARIANCE 0x0E
/** inString(‎ */
#define OS_TOK_IN_STRING 0x0F
/** normalcdf(‎ */
#define OS_TOK_NORMAL_CDF 0x10
/** invNorm(‎ */
#define OS_TOK_INV_NORM 0x11
/** tcdf(‎ */
#define OS_TOK_T_CDF 0x12
/** χ²cdf(‎ */
#define OS_TOK_CHI_CDF 0x13
/** Fcdf(‎ */
#define OS_TOK_F_CDF 0x14
/** binompdf(‎ */
#define OS_TOK_BINOM_PDF 0x15
/** binomcdf(‎ */
#define OS_TOK_BINOM_CDF 0x16
/** poissonpdf(‎ */
#define OS_TOK_POISSON_PDF 0x17
/** poissoncdf(‎ */
#define OS_TOK_POISSON_CDF 0x18
/** geometpdf(‎ */
#define OS_TOK_GEOMET_PDF 0x19
/** geometcdf(‎ */
#define OS_TOK_GEOMET_CDF 0x1A
/** normalpdf(‎ */
#define OS_TOK_NORMAL_PDF 0x1B
/** tpdf(‎ */
#define OS_TOK_T_PDF 0x1C
/** χ²pdf(‎ */
#define OS_TOK_CHI_PDF 0x1D
/** Fpdf(‎ */
#define OS_TOK_F_PDF 0x1E
/** randNorm(‎ */
#define OS_TOK_RAND_NORM 0x1F
/** tvm_Pmt‎ */
#define OS_TOK_TVM_PMT 0x20
/** tvm_I%‎ */
#define OS_TOK_TVM_I 0x21
/** tvm_PV‎ */
#define OS_TOK_TVM_PV 0x22
/** tvm_N‎ */
#define OS_TOK_TVM_N 0x23
/** tvm_FV‎ */
#define OS_TOK_TVM_FV 0x24
/** conj(‎ */
#define OS_TOK_CONJ 0x25
/** real(‎ */
#define OS_TOK_REAL 0x26
/** imag(‎ */
#define OS_TOK_IMAG 0x27
/** angle(‎ */
#define OS_TOK_ANGLE 0x28
/** cumSum(‎ */
#define OS_TOK_CUM_SUM 0x29
/** expr(‎ */
#define OS_TOK_EXPR 0x2A
/** length(‎ */
#define OS_TOK_LENGTH 0x2B
/** ΔList(‎ */
#define OS_TOK_DELTA_LIST 0x2C
/** ref(‎ */
#define OS_TOK_REF 0x2D
/** rref(‎ */
#define OS_TOK_RREF 0x2E
/** ►Rect‎ */
#define OS_TOK_TO_RECT 0x2F
/** ►Polar‎ */
#define OS_TOK_TO_POLAR 0x30
/** e‎ */
#define OS_TOK_CONST_E 0x31
/** SinReg‎ */
#define OS_TOK_SIN_REG 0x32
/** Logistic‎ */
#define OS_TOK_LOGISTIC 0x33
/** LinRegTTest‎ */
#define OS_TOK_LIN_REF_T_TEST 0x34
/** ShadeNorm(‎ */
#define OS_TOK_SHADE_NORM 0x35
/** Shade_t(‎ */
#define OS_TOK_SHADE_T 0x36
/** Shadeχ²‎ */
#define OS_TOK_SHADE_CHI 0x37
/** ShadeF(‎ */
#define OS_TOK_SHADE_F 0x38
/** Matr►list(‎ */
#define OS_TOK_MATR_TO_LIST 0x39
/** List►matr(‎ */
#define OS_TOK_LIST_TO_MATR 0x3A
/** Z-Test(‎ */
#define OS_TOK_Z_TEST 0x3B
/** T-Test(‎ */
#define OS_TOK_T_TEST 0x3C
/** 2-SampZTest(‎ */
#define OS_TOK_2_SAMP_Z_TEST 0x3D
/** 1-PropZTest(‎ */
#define OS_TOK_1_PROP_Z_TEST 0x3E
/** 2-PropZTest(‎ */
#define OS_TOK_2_PROP_Z_TEST 0x3F
/** χ²-Test(‎ */
#define OS_TOK_CHI_TEST 0x40
/** ZInterval‎ */
#define OS_TOK_ZINTERVAL 0x41
/** 2-SampZInt(‎ */
#define OS_TOK_2_SAMP_Z_INT 0x42
/** 1-PropZInt(‎ */
#define OS_TOK_1_PROP_Z_INT 0x43
/** 2-PropZInt(‎ */
#define OS_TOK_2_PROP_Z_INT 0x44
/** GraphStyle(‎ */
#define OS_TOK_GRAPH_STYLE 0x45
/** 2-SampTTest‎ */
#define OS_TOK_2_SAMP_T_TEST 0x46
/** 2-SampFTest‎ */
#define OS_TOK_2_SAMP_F_TEST 0x47
/** TInterval‎ */
#define OS_TOK_2_T_INTERVAL 0x48
/** 2-SampInt‎ */
#define OS_TOK_2_SAMP_INT 0x49
/** SetUpEditor‎ */
#define OS_TOK_SETUP_EDITOR 0x4A
/** Pmt_End‎ */
#define OS_TOK_PMT_END 0x4B
/** Pmt_Bgn‎ */
#define OS_TOK_PMT_BEG 0x4C
/** Real‎ */
#define OS_TOK_REAL_MODE 0x4D
/** re^θi‎ */
#define OS_TOK_POLAR_MODE 0x4E
/** a+bi‎ */
#define OS_TOK_RECT_MODE 0x4F
/** ExprOn‎ */
#define OS_TOK_EXPR_ON 0x50
/** ExprOff‎ */
#define OS_TOK_EXPR_OFF 0x51
/** ClrAllLists‎ */
#define OS_TOK_CLR_ALL_LISTS 0x52
/** GetCalc(‎ */
#define OS_TOK_GET_CALC 0x53
/** DelVar‎ */
#define OS_TOK_DELVAR 0x54
/** Equ►String(‎ */
#define OS_TOK_EQU_TO_STRING 0x55
/** String►Equ(‎ */
#define OS_TOK_STRING_TO_EQU 0x56
/** Clear Entries‎ */
#define OS_TOK_CLEAR_ENTRIES 0x57
/** Select(‎ */
#define OS_TOK_SELECT 0x58
/** ANOVA(‎ */
#define OS_TOK_ANOVA 0x59
/** ModBoxplot‎ */
#define OS_TOK_MODBOXPLOT 0x5A
/** NormProbPlot‎ */
#define OS_TOK_NORMPROBPLOT 0x5B
/** G-T‎ */
#define OS_TOK_G_T 0x64
/** ZoomFit‎ */
#define OS_TOK_ZFIT 0x65
/** DiagnosticOn‎ */
#define OS_TOK_DIAGNOSTIC_ON 0x66
/** DiagnosticOff‎ */
#define OS_TOK_DIAGNOSTIC_OFF 0x67
/** ARCHIVE‎ */
#define OS_TOK_ARCHIVE 0x68
/** UnArchive‎ */
#define OS_TOK_UNARCHIVE 0x69
/** Asm(‎ */
#define OS_TOK_ASM 0x6A
/** AsmComp(‎ */
#define OS_TOK_ASM_COMP 0x6B
/** AsmPrgm‎ */
#define OS_TOK_ASM_PRGM 0x6C
/** AsmPrgmCmp (squished)‎ */
#define OS_TOK_ASM_PRGM_CMP 0x6D
/** Á‎ */
#define OS_TOK_A_ACUTE 0x6E
/** À‎ */
#define OS_TOK_A_GRAVE 0x6F
/** Â‎ */
#define OS_TOK_A_CARET 0x70
/** Ä‎ */
#define OS_TOK_A_DIERESIS 0x71
/** á‎ */
#define OS_TOK_SMALL_A_ACUTE 0x72
/** à‎ */
#define OS_TOK_SMALL_A_GRAVE 0x73
/** â‎ */
#define OS_TOK_SMALL_A_CARET 0x74
/** ä‎ */
#define OS_TOK_SMALL_A_DIERESIS 0x75
/** É‎ */
#define OS_TOK_E_ACUTE 0x76
/** È‎ */
#define OS_TOK_E_GRAVE 0x77
/** Ê‎ */
#define OS_TOK_E_CARET 0x78
/** Ë‎ */
#define OS_TOK_E_DIERESIS 0x79
/** é‎ */
#define OS_TOK_SMALL_E_ACUTE 0x7A
/** è‎ */
#define OS_TOK_SMALL_E_GRAVE 0x7B
/** ê‎ */
#define OS_TOK_SMALL_E_CARET 0x7C
/** ë‎ */
#define OS_TOK_SMALL_E_DIERESIS 0x7D
/** Ì‎ */
#define OS_TOK_I_GRAVE 0x7F
/** Î‎ */
#define OS_TOK_I_CARET 0x80
/** Ï‎ */
#define OS_TOK_I_DIERESIS 0x81
/** í‎ */
#define OS_TOK_SMALL_I_ACUTE 0x82
/** ì‎ */
#define OS_TOK_SMALL_I_GRAVE 0x83
/** î‎ */
#define OS_TOK_SMALL_I_CARET 0x84
/** ï‎ */
#define OS_TOK_SMALL_I_DIERESIS 0x85
/** Ó‎ */
#define OS_TOK_O_ACUTE 0x86
/** Ò‎ */
#define OS_TOK_O_GRAVE 0x87
/** Ô‎ */
#define OS_TOK_O_CARET 0x88
/** Ö‎ */
#define OS_TOK_O_DIERESIS 0x89
/** ó‎ */
#define OS_TOK_SMALL_O_ACUTE 0x8A
/** ò‎ */
#define OS_TOK_SMALL_O_GRAVE 0x8B
/** ô‎ */
#define OS_TOK_SMALL_O_CARET 0x8C
/** ö‎ */
#define OS_TOK_SMALL_O_DIERESIS 0x8D
/** Ú‎ */
#define OS_TOK_U_ACUTE 0x8E
/** Ù‎ */
#define OS_TOK_U_GRAVE 0x8F
/** Û‎ */
#define OS_TOK_U_CARET 0x90
/** Ü‎ */
#define OS_TOK_U_DIERESIS 0x91
/** ú‎ */
#define OS_TOK_SMALL_U_ACUTE 0x92
/** ù‎ */
#define OS_TOK_SMALL_U_GRAVE 0x93
/** û‎ */
#define OS_TOK_SMALL_U_CARET 0x94
/** ü‎ */
#define OS_TOK_SMALL_U_DIERESIS 0x95
/** Ç‎ */
#define OS_TOK_CEDILLA 0x96
/** ç‎ */
#define OS_TOK_SMALL_CEDILLA 0x97
/** Ñ‎ */
#define OS_TOK_N_TILDE 0x98
/** ñ‎ */
#define OS_TOK_SMALL_N_TILDE 0x99
/** ´‎ */
#define OS_TOK_ACCENT 0x9A
/** `‎ */
#define OS_TOK_GRAVE 0x9B
/** ¨‎ */
#define OS_TOK_DIERESIS 0x9C
/** ¿‎ */
#define OS_TOK_QUESTION_DOWN 0x9D
/** ¡‎ */
#define OS_TOK_EXCLAIM_DOWN 0x9E
/** α‎ */
#define OS_TOK_ALPHA 0x9F
/** β‎ */
#define OS_TOK_BETA 0xA0
/** γ‎ */
#define OS_TOK_GAMMA 0xA1
/** Δ‎ */
#define OS_TOK_DELTA 0xA2
/** δ‎ */
#define OS_TOK_SMALL_DELTA 0xA3
/** ε‎ */
#define OS_TOK_EPSILON 0xA4
/** λ‎ */
#define OS_TOK_LAMBDA 0xA5
/** μ‎ */
#define OS_TOK_MU 0xA6
/** π‎ */
#define OS_TOK_PI_SYM 0xA7
/** ρ‎ */
#define OS_TOK_RHO 0xA8
/** Σ‎ */
#define OS_TOK_SIGMA 0xA9
/** φ‎ */
#define OS_TOK_PHI 0xAB
/** Ω‎ */
#define OS_TOK_OMEGA 0xAC
/** p̂‎‎ */
#define OS_TOK_P_HAT 0xAD
/** χ‎ */
#define OS_TOK_CHI 0xAE
/** 𝐅‎ */
#define OS_TOK_STAT_F 0xAF
/** a‎ */
#define OS_TOK_SMALL_A 0xB0
/** b‎ */
#define OS_TOK_SMALL_B 0xB1
/** c‎ */
#define OS_TOK_SMALL_C 0xB2
/** d‎ */
#define OS_TOK_SMALL_D 0xB3
/** e‎ */
#define OS_TOK_SMALL_E 0xB4
/** f‎ */
#define OS_TOK_SMALL_F 0xB5
/** g‎ */
#define OS_TOK_SMALL_G 0xB6
/** h‎ */
#define OS_TOK_SMALL_H 0xB7
/** i‎ */
#define OS_TOK_SMALL_I 0xB8
/** j‎ */
#define OS_TOK_SMALL_J 0xB9
/** k‎ */
#define OS_TOK_SMALL_K 0xBA
/** l‎ */
#define OS_TOK_SMALL_L 0xBC
/** m‎ */
#define OS_TOK_SMALL_M 0xBD
/** n‎ */
#define OS_TOK_SMALL_N 0xBE
/** o‎ */
#define OS_TOK_SMALL_O 0xBF
/** p‎ */
#define OS_TOK_SMALL_P 0xC0
/** q‎ */
#define OS_TOK_SMALL_Q 0xC1
/** r‎ */
#define OS_TOK_SMALL_R 0xC2
/** s‎ */
#define OS_TOK_SMALL_S 0xC3
/** t‎ */
#define OS_TOK_SMALL_T 0xC4
/** u‎ */
#define OS_TOK_SMALL_U 0xC5
/** v‎ */
#define OS_TOK_SMALL_V 0xC6
/** w‎ */
#define OS_TOK_SMALL_W 0xC7
/** x‎ */
#define OS_TOK_SMALL_X 0xC8
/** y‎ */
#define OS_TOK_SMALL_Y 0xC9
/** z‎ */
#define OS_TOK_SMALL_Z 0xCA
/** σ‎ */
#define OS_TOK_SMALL_SIGMA 0xCB
/** τ‎ */
#define OS_TOK_TAU 0xCC
/** Í‎ */
#define OS_TOK_BIG_I_ACUTE 0xCD
/** GarbageCollect‎ */
#define OS_TOK_GARBAGE_COLLECT 0xCE
/** ~ */
#define OS_TOK_TILDE 0xCF
/** \@‎ */
#define OS_TOK_AT 0xD1
/** \#‎ */
#define OS_TOK_POUND_SYM 0xD2
/** \#‎ */
#define OS_TOK_HASHTAG 0xD2
/** $‎ */
#define OS_TOK_DOLLAR_SYM 0xD3
/** &‎ */
#define OS_TOK_AND_SYM 0xD4
/** `‎ */
#define OS_TOK_BACKTICK 0xD5
/** ;‎ */
#define OS_TOK_SEMICOLON 0xD6
/** \\‎ */
#define OS_TOK_BACKSLASH 0xD7
/** |‎ */
#define OS_TOK_PIPE 0xD8
/** _‎ */
#define OS_TOK_UNDERSCORE 0xD9
/** %‎ */
#define OS_TOK_PERCENT 0xDA
/** …‎ */
#define OS_TOK_ELLIPSIS 0xDB
/** ∠‎ */
#define OS_TOK_ANGLE_SYM 0xDC
/** ß‎ */
#define OS_TOK_ESZETT 0xDD
/** x‎ */
#define OS_TOK_MULTIPLY_SYM 0xDE
/** T‎ */
#define OS_TOK_TRANSPOSE_SYM 0xDF
/** ₀‎ */
#define OS_TOK_SUBSCRIPT_0 0xE0
/** ₁‎ */
#define OS_TOK_SUBSCRIPT_1 0xE1
/** ₂‎ */
#define OS_TOK_SUBSCRIPT_2 0xE2
/** ₃‎ */
#define OS_TOK_SUBSCRIPT_3 0xE3
/** ₄‎ */
#define OS_TOK_SUBSCRIPT_4 0xE4
/** ₅‎ */
#define OS_TOK_SUBSCRIPT_5 0xE5
/** ₆‎ */
#define OS_TOK_SUBSCRIPT_6 0xE6
/** ₇‎ */
#define OS_TOK_SUBSCRIPT_7 0xE7
/** ₈‎ */
#define OS_TOK_SUBSCRIPT_8 0xE8
/** ₉‎ */
#define OS_TOK_SUBSCRIPT_9 0xE9
/** ⏨‎ */
#define OS_TOK_SUBSCRIPT_10 0xEA
/** ←‎ */
#define OS_TOK_LEFT_ARROW 0xEB
/** →‎ */
#define OS_TOK_RIGHT_ARROW 0xEC
/** ↑‎ */
#define OS_TOK_UP_ARROW 0xED
/** ↓‎ */
#define OS_TOK_DOWN_ARROW 0xEE
/** x‎ */
#define OS_TOK_OTHER_X 0xF0
/** ∫‎ */
#define OS_TOK_INTEGRAL 0xF1
/** ⇑‎ */
#define OS_TOK_UP_ARROW_BOLD 0xF2
/** ⇓‎ */
#define OS_TOK_DOWN_ARROW_BOLD 0xF3
/** √‎ */
#define OS_TOK_SQRT_SYM 0xF4
/** =‎ */
#define OS_TOK_EQUAL_INVERTED 0xF5

/** @}*/

/** \addtogroup ext_two_byte_tokens
 *  @{
 */

/** First byte of extended 2-byte tokens */
#define OS_TOK_2BYTE_EXT 0xEF
/** setDate(‎ */
#define OS_TOK_SET_DATE 0x00
/** setTime(‎ */
#define OS_TOK_SET_TIME 0x01
/** checkTmr(‎ */
#define OS_TOK_CHECK_TMR 0x02
/** setDtFmt(‎ */
#define OS_TOK_SET_DT_FMT 0x03
/** setTmFmt(‎ */
#define OS_TOK_SET_TM_FMT 0x04
/** timeCnv(‎ */
#define OS_TOK_TIME_CNV 0x05
/** dayOfWk(‎ */
#define OS_TOK_DAY_OF_WK 0x06
/** getDtStr(‎ */
#define OS_TOK_GET_DT_STR 0x07
/** getTmStr(‎ */
#define OS_TOK_GET_TM_STR 0x08
/** getDate‎ */
#define OS_TOK_GET_DATE 0x09
/** getTime‎ */
#define OS_TOK_GET_TIME 0x0A
/** startTmr‎ */
#define OS_TOK_START_TMR 0x0B
/** getDtFmt‎ */
#define OS_TOK_GET_DT_FMT 0x0C
/** getTmFmt‎ */
#define OS_TOK_GET_TM_FMT 0x0D
/** isClockOn‎ */
#define OS_TOK_IS_CLOCK_ON 0x0E
/** ClockOff‎ */
#define OS_TOK_CLOCK_OFF 0x0F
/** ClockOn‎ */
#define OS_TOK_CLOCK_ON 0x10
/** OpenLib(‎ */
#define OS_TOK_OPEN_LIB 0x11
/** ExecLib(‎ */
#define OS_TOK_EXEC_LIB 0x12
/** invT(‎ */
#define OS_TOK_INV_T 0x13
/** χ²GOF-Test(‎ */
#define OS_TOK_CHI_SQUARED_TEST 0x14
/** LinRegTInt‎ */
#define OS_TOK_LIN_REG_TINT 0x15
/** Manual-Fit‎ */
#define OS_TOK_MANUAL_FIT 0x16
/** ZQuadrant1‎ */
#define OS_TOK_ZQUADRANT_1 0x17
/** ZFrac1/2‎ */
#define OS_TOK_ZFRAC_HALF 0x18
/** ZFrac1/3‎ */
#define OS_TOK_ZFRAC_THIRD 0x19
/** ZFrac1/4‎ */
#define OS_TOK_ZFRAC_FOURTH 0x1A
/** ZFrac1/5‎ */
#define OS_TOK_ZFRAC_FIFTH 0x1B
/** ZFrac1/8‎ */
#define OS_TOK_ZFRAC_EIGHTH 0x1C
/** ZFrac1/10‎ */
#define OS_TOK_ZFRAC_TENTH 0x1D
/** mathprintbox‎ */
#define OS_TOK_MATHPRINTBOX 0x1E
/** ►n/d◄►Un/d‎ */
#define OS_TOK_SWAP_IMPROPER 0x30
/** ►F◄►D‎ */
#define OS_TOK_SWAP_FRAC_DEC 0x31
/** remainder(‎ */
#define OS_TOK_REMAINDER 0x32
/** Σ(‎ */
#define OS_TOK_SIGMA_SUM 0x33
/** logBASE(‎ */
#define OS_TOK_LOG_BASE 0x34
/** randIntNoRep(‎ */
#define OS_TOK_RAND_INT_NO_REP 0x35
/** MATHPRINT‎ */
#define OS_TOK_MATHPRINT 0x36
/** CLASSIC‎ */
#define OS_TOK_CLASSIC 0x37
/** n/d‎ */
#define OS_TOK_N_D 0x38
/** Un/d‎ */
#define OS_TOK_UN_D 0x39
/** AUTO‎ */
#define OS_TOK_AUTO 0x3A
/** DEC‎ */
#define OS_TOK_DEC 0x3B
/** FRAC‎ */
#define OS_TOK_FRAC 0x3C
/** FRAC-APPROX‎ */
#define OS_TOK_FRAC_APPROX 0x3D
/** BLUE‎ */
#define OS_TOK_BLUE 0x41
/** RED‎ */
#define OS_TOK_RED 0x42
/** BLACK‎ */
#define OS_TOK_BLACK 0x43
/** MAGENTA‎ */
#define OS_TOK_MAGENTA 0x44
/** GREEN‎ */
#define OS_TOK_GREEN 0x45
/** ORANGE‎ */
#define OS_TOK_ORANGE 0x46
/** BROWN‎ */
#define OS_TOK_BROWN 0x47
/** NAVY‎ */
#define OS_TOK_NAVY 0x48
/** LTBLUE‎ */
#define OS_TOK_LTBLUE 0x49
/** YELLOW‎ */
#define OS_TOK_YELLOW 0x4A
/** WHITE‎ */
#define OS_TOK_WHITE 0x4B
/** LTGREY‎ */
#define OS_TOK_LTGREY 0x4C
/** MEDGREY‎ */
#define OS_TOK_MEDGREY 0x4D
/** GREY‎ */
#define OS_TOK_GREY 0x4E
/** DARKGREY‎ */
#define OS_TOK_DARKGREY 0x4F
/** Image1 */
#define OS_TOK_IMAGE_1 0x50
/** Image2 */
#define OS_TOK_IMAGE_2 0x51
/** Image3 */
#define OS_TOK_IMAGE_3 0x52
/** Image4 */
#define OS_TOK_IMAGE_4 0x53
/** Image5 */
#define OS_TOK_IMAGE_5 0x54
/** Image6 */
#define OS_TOK_IMAGE_6 0x55
/** Image7 */
#define OS_TOK_IMAGE_7 0x56
/** Image8 */
#define OS_TOK_IMAGE_8 0x57
/** Image9 */
#define OS_TOK_IMAGE_9 0x58
/** Image0 */
#define OS_TOK_IMAGE_0 0x59
/** Gridline‎ */
#define OS_TOK_GRIDLINE 0x5A
/** BackgroundOn‎ */
#define OS_TOK_BACKGROUND_ON 0x5B
/** BackgroundOff‎ */
#define OS_TOK_BACKGROUND_OFF 0x64
/** GraphColor(‎ */
#define OS_TOK_GRAPH_COLOR 0x65
/** TextColor(‎ */
#define OS_TOK_TEXT_COLOR 0x67
/** Asm84CPrgm‎ */
#define OS_TOK_ASM_84C_PRGM 0x68
/** Asm84CPrgmCmp (squished)‎ */
#define OS_TOK_ASM_84C_PRGM_CMP 0x69
/** DetectAsymOn‎ */
#define OS_TOK_DETECT_ASYM_ON 0x6A
/** DetectAsymOff‎ */
#define OS_TOK_DETECT_ASYM_OFF 0x6B
/** BorderColor‎ */
#define OS_TOK_BORDER_COLOR 0x6C
/** tinydotplot‎ */
#define OS_TOK_TINYDOTPLOT 0x73
/** Thin‎ */
#define OS_TOK_THIN 0x74
/** Dot-Thin‎ */
#define OS_TOK_DOT_THIN 0x75
/** Asm84CEPrgm‎ */
#define OS_TOK_ASM_84CE_PRGM 0x7A
/** Asm84CEPrgmCmp (squished)‎ */
#define OS_TOK_ASM_84CE_PRGM_CMP 0x7B
/** Quartiles Setting...‎ */
#define OS_TOK_QUARTILES_SETTING 0x81
/** u(n-2)‎ */
#define OS_TOK_U_N_SUB_2 0x82
/** v(n-2)‎ */
#define OS_TOK_V_N_SUB_2 0x83
/** w(n-2)‎ */
#define OS_TOK_W_N_SUB_2 0x84
/** u(n-1)‎ */
#define OS_TOK_U_N_SUB_1 0x85
/** v(n-1)‎ */
#define OS_TOK_V_N_SUB_1 0x86
/** w(n-1)‎ */
#define OS_TOK_W_N_SUB_1 0x87
/** u(n)‎ */
#define OS_TOK_U_N 0x88
/** v(n)‎ */
#define OS_TOK_V_N 0x89
/** w(n)‎ */
#define OS_TOK_W_N 0x8A
/** u(n+1)‎ */
#define OS_TOK_U_N_ADD_1 0x8B
/** v(n+1)‎ */
#define OS_TOK_V_N_ADD_1 0x8C
/** w(n+1)‎ */
#define OS_TOK_W_N_ADD_1 0x8D
/** SEQ(n)‎ */
#define OS_TOK_SEQ_N 0x8F
/** SEQ(n+1)‎ */
#define OS_TOK_SEQ_N_ADD_1 0x90
/** SEQ(n+2)‎ */
#define OS_TOK_SEQ_N_ADD_2 0x91
/** LEFT‎ */
#define OS_TOK_LEFT 0x92
/** CENTER‎ */
#define OS_TOK_CENTER 0x93
/** RIGHT‎ */
#define OS_TOK_RIGHT 0x94
/** invBinom(‎ */
#define OS_TOK_INV_BINOM 0x95
/** Wait‎ */
#define OS_TOK_WAIT 0x96
/** toString(‎ */
#define OS_TOK_TO_STRING 0x97
/** eval(‎ */
#define OS_TOK_EVAL 0x98
/** Execute Program‎ */
#define OS_TOK_EXECUTE_PROGRAM 0x9E
/** Undo Clear‎ */
#define OS_TOK_UNDO_CLEAR 0x9F
/** Insert Line Above‎ */
#define OS_TOK_INSERT_LINE_ABOVE 0xA0
/** Cut Line‎ */
#define OS_TOK_CUT_LINE 0xA1
/** Copy Line‎ */
#define OS_TOK_COPY_LINE 0xA2
/** Paste Line Below‎ */
#define OS_TOK_PASTE_LINE_BELOW 0xA3
/** Insert Comment Above‎ */
#define OS_TOK_INSERT_COMMENT_ABOVE 0xA4
/** Quit Editor‎ */
#define OS_TOK_QUIT_EDITOR 0xA5
/** piecewise(‎ */
#define OS_TOK_PIECEWISE 0xA6

/** @}*/

#ifdef __cplusplus
}
#endif

#endif
