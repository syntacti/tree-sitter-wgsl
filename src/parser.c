#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 475
#define LARGE_STATE_COUNT 57
#define SYMBOL_COUNT 594
#define ALIAS_COUNT 0
#define TOKEN_COUNT 495
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum {
  sym_ident = 1,
  aux_sym_int_literal_token1 = 2,
  aux_sym_int_literal_token2 = 3,
  aux_sym_int_literal_token3 = 4,
  aux_sym_decimal_float_literal_token1 = 5,
  aux_sym_decimal_float_literal_token2 = 6,
  aux_sym_decimal_float_literal_token3 = 7,
  aux_sym_decimal_float_literal_token4 = 8,
  aux_sym_decimal_float_literal_token5 = 9,
  aux_sym_hex_float_literal_token1 = 10,
  aux_sym_hex_float_literal_token2 = 11,
  aux_sym_hex_float_literal_token3 = 12,
  anon_sym_read = 13,
  anon_sym_write = 14,
  anon_sym_read_write = 15,
  anon_sym_rgba8unorm = 16,
  anon_sym_rgba8snorm = 17,
  anon_sym_rgba8uint = 18,
  anon_sym_rgba8sint = 19,
  anon_sym_rgba16uint = 20,
  anon_sym_rgba16sint = 21,
  anon_sym_rgba16float = 22,
  anon_sym_r32uint = 23,
  anon_sym_r32sint = 24,
  anon_sym_r32float = 25,
  anon_sym_rg32uint = 26,
  anon_sym_rg32sint = 27,
  anon_sym_rg32float = 28,
  anon_sym_rgba32uint = 29,
  anon_sym_rgba32sint = 30,
  anon_sym_rgba32float = 31,
  sym_array = 32,
  sym_atomic = 33,
  sym_bool = 34,
  sym_float32 = 35,
  sym_float16 = 36,
  sym_int32 = 37,
  sym_mat2x2 = 38,
  sym_mat2x3 = 39,
  sym_mat2x4 = 40,
  sym_mat3x2 = 41,
  sym_mat3x3 = 42,
  sym_mat3x4 = 43,
  sym_mat4x2 = 44,
  sym_mat4x3 = 45,
  sym_mat4x4 = 46,
  sym_override = 47,
  sym_pointer = 48,
  sym_sampler = 49,
  sym_sampler_comparison = 50,
  sym_staticAssert = 51,
  sym_struct = 52,
  sym_texture_1d = 53,
  sym_texture_2d = 54,
  sym_texture_2d_array = 55,
  sym_texture_3d = 56,
  sym_texture_cube = 57,
  sym_texture_cube_array = 58,
  sym_texture_multisampled_2d = 59,
  sym_texture_storage_1d = 60,
  sym_texture_storage_2d = 61,
  sym_texture_storage_2d_array = 62,
  sym_texture_storage_3d = 63,
  sym_texture_depth_2d = 64,
  sym_texture_depth_2d_array = 65,
  sym_texture_depth_cube = 66,
  sym_texture_depth_cube_array = 67,
  sym_texture_depth_multisampled_2d = 68,
  sym_uint32 = 69,
  sym_vec2 = 70,
  sym_vec3 = 71,
  sym_vec4 = 72,
  sym_bitcast = 73,
  sym_break = 74,
  sym_case = 75,
  sym_const = 76,
  sym_continue = 77,
  sym_continuing = 78,
  sym_default = 79,
  sym_discard = 80,
  sym_else = 81,
  sym_enable = 82,
  sym_fallthrough = 83,
  sym_false = 84,
  sym_fn = 85,
  sym_for = 86,
  sym_function = 87,
  sym_if = 88,
  sym_let = 89,
  sym_loop = 90,
  sym_private = 91,
  sym_return = 92,
  sym_storage = 93,
  sym_switch = 94,
  sym_true = 95,
  sym_type = 96,
  sym_uniform = 97,
  sym_var = 98,
  sym_while = 99,
  sym_workgroup = 100,
  sym_and = 101,
  sym_and_and = 102,
  sym_arrow = 103,
  sym_attr = 104,
  sym_forward_slash = 105,
  sym_bang = 106,
  sym_bracket_left = 107,
  sym_bracket_right = 108,
  sym_brace_left = 109,
  sym_brace_right = 110,
  sym_colon = 111,
  sym_comma = 112,
  sym_equal = 113,
  sym_equal_equal = 114,
  sym_not_equal = 115,
  sym_greater_than = 116,
  sym_greater_than_equal = 117,
  sym_shift_right = 118,
  sym_less_than = 119,
  sym_less_than_equal = 120,
  sym_shift_left = 121,
  sym_modulo = 122,
  sym_minus = 123,
  sym_minus_minus = 124,
  sym_period = 125,
  sym_plus = 126,
  sym_plus_plus = 127,
  sym_or = 128,
  sym_or_or = 129,
  sym_paren_left = 130,
  sym_paren_right = 131,
  sym_semicolon = 132,
  sym_star = 133,
  sym_tilde = 134,
  sym_underscore = 135,
  sym_xor = 136,
  sym_plus_equal = 137,
  sym_minus_equal = 138,
  sym_times_equal = 139,
  sym_division_equal = 140,
  sym_modulo_equal = 141,
  sym_and_equal = 142,
  sym_or_equal = 143,
  sym_xor_equal = 144,
  sym_shift_right_equal = 145,
  sym_shift_left_equal = 146,
  anon_sym_AppendStructuredBuffer = 147,
  anon_sym_BlendState = 148,
  anon_sym_Buffer = 149,
  anon_sym_ByteAddressBuffer = 150,
  anon_sym_CompileShader = 151,
  anon_sym_ComputeShader = 152,
  anon_sym_ConsumeStructuredBuffer = 153,
  anon_sym_DepthStencilState = 154,
  anon_sym_DepthStencilView = 155,
  anon_sym_DomainShader = 156,
  anon_sym_GeometryShader = 157,
  anon_sym_Hullshader = 158,
  anon_sym_InputPatch = 159,
  anon_sym_LineStream = 160,
  anon_sym_NULL = 161,
  anon_sym_OutputPatch = 162,
  anon_sym_PixelShader = 163,
  anon_sym_PointStream = 164,
  anon_sym_RWBuffer = 165,
  anon_sym_RWByteAddressBuffer = 166,
  anon_sym_RWStructuredBuffer = 167,
  anon_sym_RWTexture1D = 168,
  anon_sym_RWTexture1DArray = 169,
  anon_sym_RWTexture2D = 170,
  anon_sym_RWTexture2DArray = 171,
  anon_sym_RWTexture3D = 172,
  anon_sym_RasterizerState = 173,
  anon_sym_RenderTargetView = 174,
  anon_sym_SamplerComparisonState = 175,
  anon_sym_SamplerState = 176,
  anon_sym_Self = 177,
  anon_sym_StructuredBuffer = 178,
  anon_sym_Texture1D = 179,
  anon_sym_Texture1DArray = 180,
  anon_sym_Texture2D = 181,
  anon_sym_Texture2DArray = 182,
  anon_sym_Texture2DMS = 183,
  anon_sym_Texture2DMSArray = 184,
  anon_sym_Texture3D = 185,
  anon_sym_TextureCube = 186,
  anon_sym_TextureCubeArray = 187,
  anon_sym_TriangleStream = 188,
  anon_sym_VertexShader = 189,
  anon_sym_abstract = 190,
  anon_sym_active = 191,
  anon_sym_alignas = 192,
  anon_sym_alignof = 193,
  anon_sym_as = 194,
  anon_sym_asm = 195,
  anon_sym_asm_fragment = 196,
  anon_sym_async = 197,
  anon_sym_atomic_uint = 198,
  anon_sym_attribute = 199,
  anon_sym_auto = 200,
  anon_sym_await = 201,
  anon_sym_become = 202,
  anon_sym_bf16 = 203,
  anon_sym_binding_array = 204,
  anon_sym_cast = 205,
  anon_sym_catch = 206,
  anon_sym_cbuffer = 207,
  anon_sym_char = 208,
  anon_sym_class = 209,
  anon_sym_co_await = 210,
  anon_sym_co_return = 211,
  anon_sym_co_yield = 212,
  anon_sym_coherent = 213,
  anon_sym_column_major = 214,
  anon_sym_common = 215,
  anon_sym_compile = 216,
  anon_sym_compile_fragment = 217,
  anon_sym_concept = 218,
  anon_sym_const_cast = 219,
  anon_sym_consteval = 220,
  anon_sym_constexpr = 221,
  anon_sym_constinit = 222,
  anon_sym_crate = 223,
  anon_sym_debugger = 224,
  anon_sym_decltype = 225,
  anon_sym_delete = 226,
  anon_sym_demote = 227,
  anon_sym_demote_to_helper = 228,
  anon_sym_do = 229,
  anon_sym_dword = 230,
  anon_sym_dynamic_cast = 231,
  anon_sym_enum = 232,
  anon_sym_explicit = 233,
  anon_sym_export = 234,
  anon_sym_extends = 235,
  anon_sym_extern = 236,
  anon_sym_external = 237,
  anon_sym_f64 = 238,
  anon_sym_filter = 239,
  anon_sym_final = 240,
  anon_sym_finally = 241,
  anon_sym_fixed = 242,
  anon_sym_friend = 243,
  anon_sym_from = 244,
  anon_sym_fvec2 = 245,
  anon_sym_fvec3 = 246,
  anon_sym_fvec4 = 247,
  anon_sym_fxgroup = 248,
  anon_sym_get = 249,
  anon_sym_goto = 250,
  anon_sym_groupshared = 251,
  anon_sym_handle = 252,
  anon_sym_highp = 253,
  anon_sym_hvec2 = 254,
  anon_sym_hvec3 = 255,
  anon_sym_hvec4 = 256,
  anon_sym_i16 = 257,
  anon_sym_i64 = 258,
  anon_sym_i8 = 259,
  anon_sym_iimage1D = 260,
  anon_sym_iimage1DArray = 261,
  anon_sym_iimage2D = 262,
  anon_sym_iimage2DArray = 263,
  anon_sym_iimage2DMS = 264,
  anon_sym_iimage2DMSArray = 265,
  anon_sym_iimage2DRect = 266,
  anon_sym_iimage3D = 267,
  anon_sym_iimageBuffer = 268,
  anon_sym_iimageCube = 269,
  anon_sym_iimageCubeArray = 270,
  anon_sym_image1D = 271,
  anon_sym_image1DArray = 272,
  anon_sym_image2D = 273,
  anon_sym_image2DArray = 274,
  anon_sym_image2DMS = 275,
  anon_sym_image2DMSArray = 276,
  anon_sym_image2DRect = 277,
  anon_sym_image3D = 278,
  anon_sym_imageBuffer = 279,
  anon_sym_imageCube = 280,
  anon_sym_imageCubeArray = 281,
  anon_sym_impl = 282,
  anon_sym_implements = 283,
  anon_sym_import = 284,
  anon_sym_inline = 285,
  anon_sym_inout = 286,
  anon_sym_instanceof = 287,
  anon_sym_interface = 288,
  anon_sym_invariant = 289,
  anon_sym_isampler1D = 290,
  anon_sym_isampler1DArray = 291,
  anon_sym_isampler2D = 292,
  anon_sym_isampler2DArray = 293,
  anon_sym_isampler2DMS = 294,
  anon_sym_isampler2DMSArray = 295,
  anon_sym_isampler2DRect = 296,
  anon_sym_isampler3D = 297,
  anon_sym_isamplerBuffer = 298,
  anon_sym_isamplerCube = 299,
  anon_sym_isamplerCubeArray = 300,
  anon_sym_isubpassInput = 301,
  anon_sym_isubpassInputMS = 302,
  anon_sym_itexture1D = 303,
  anon_sym_itexture1DArray = 304,
  anon_sym_itexture2D = 305,
  anon_sym_itexture2DArray = 306,
  anon_sym_itexture2DMS = 307,
  anon_sym_itexture2DMSArray = 308,
  anon_sym_itexture2DRect = 309,
  anon_sym_itexture3D = 310,
  anon_sym_itextureBuffer = 311,
  anon_sym_itextureCube = 312,
  anon_sym_itextureCubeArray = 313,
  anon_sym_layout = 314,
  anon_sym_line = 315,
  anon_sym_lineadj = 316,
  anon_sym_lowp = 317,
  anon_sym_macro = 318,
  anon_sym_macro_rules = 319,
  anon_sym_mat = 320,
  anon_sym_match = 321,
  anon_sym_matrix = 322,
  anon_sym_mediump = 323,
  anon_sym_meta = 324,
  anon_sym_mod = 325,
  anon_sym_module = 326,
  anon_sym_move = 327,
  anon_sym_mut = 328,
  anon_sym_mutable = 329,
  anon_sym_namespace = 330,
  anon_sym_new = 331,
  anon_sym_nil = 332,
  anon_sym_noexcept = 333,
  anon_sym_noinline = 334,
  anon_sym_nointerpolation = 335,
  anon_sym_noperspective = 336,
  anon_sym_null = 337,
  anon_sym_nullptr = 338,
  anon_sym_of = 339,
  anon_sym_operator = 340,
  anon_sym_package = 341,
  anon_sym_packoffset = 342,
  anon_sym_partition = 343,
  anon_sym_pass = 344,
  anon_sym_patch = 345,
  anon_sym_pixelfragment = 346,
  anon_sym_point = 347,
  anon_sym_precise = 348,
  anon_sym_precision = 349,
  anon_sym_premerge = 350,
  anon_sym_priv = 351,
  anon_sym_protected = 352,
  anon_sym_pub = 353,
  anon_sym_public = 354,
  anon_sym_readonly = 355,
  anon_sym_ref = 356,
  anon_sym_regardless = 357,
  anon_sym_register = 358,
  anon_sym_reinterpret_cast = 359,
  anon_sym_requires = 360,
  anon_sym_resource = 361,
  anon_sym_restrict = 362,
  anon_sym_row_major = 363,
  anon_sym_samper = 364,
  anon_sym_sampler1D = 365,
  anon_sym_sampler1DArray = 366,
  anon_sym_sampler1DArrayShadow = 367,
  anon_sym_sampler1DShadow = 368,
  anon_sym_sampler2D = 369,
  anon_sym_sampler2DArray = 370,
  anon_sym_sampler2DArrayShadow = 371,
  anon_sym_sampler2DMS = 372,
  anon_sym_sampler2DMSArray = 373,
  anon_sym_sampler2DRect = 374,
  anon_sym_sampler2DRectShadow = 375,
  anon_sym_sampler2DShadow = 376,
  anon_sym_sampler3D = 377,
  anon_sym_sampler3DRect = 378,
  anon_sym_samplerBuffer = 379,
  anon_sym_samplerCube = 380,
  anon_sym_samplerCubeArray = 381,
  anon_sym_samplerCubeArrayShadow = 382,
  anon_sym_samplerCubeShadow = 383,
  anon_sym_samplerShadow = 384,
  anon_sym_self = 385,
  anon_sym_set = 386,
  anon_sym_shared = 387,
  anon_sym_signed = 388,
  anon_sym_sizeof = 389,
  anon_sym_smooth = 390,
  anon_sym_snorm = 391,
  anon_sym_stateblock = 392,
  anon_sym_stateblock_state = 393,
  anon_sym_static = 394,
  anon_sym_static_assert = 395,
  anon_sym_static_cast = 396,
  anon_sym_std = 397,
  anon_sym_string = 398,
  anon_sym_subpassInput = 399,
  anon_sym_subpassInputMS = 400,
  anon_sym_subroutine = 401,
  anon_sym_super = 402,
  anon_sym_superp = 403,
  anon_sym_target = 404,
  anon_sym_tbuffer = 405,
  anon_sym_technique = 406,
  anon_sym_technique10 = 407,
  anon_sym_technique11 = 408,
  anon_sym_template = 409,
  anon_sym_texture1D = 410,
  anon_sym_texture1DArray = 411,
  anon_sym_texture2D = 412,
  anon_sym_texture2DArray = 413,
  anon_sym_texture2DMS = 414,
  anon_sym_texture2DMSArray = 415,
  anon_sym_texture2DRect = 416,
  anon_sym_texture3D = 417,
  anon_sym_textureBuffer = 418,
  anon_sym_textureCube = 419,
  anon_sym_textureCubeArray = 420,
  anon_sym_this = 421,
  anon_sym_thread_local = 422,
  anon_sym_throw = 423,
  anon_sym_trait = 424,
  anon_sym_triangle = 425,
  anon_sym_triangleadj = 426,
  anon_sym_try = 427,
  anon_sym_typedef = 428,
  anon_sym_typeid = 429,
  anon_sym_typename = 430,
  anon_sym_typeof = 431,
  anon_sym_u16 = 432,
  anon_sym_u64 = 433,
  anon_sym_u8 = 434,
  anon_sym_uimage1D = 435,
  anon_sym_uimage1DArray = 436,
  anon_sym_uimage2D = 437,
  anon_sym_uimage2DArray = 438,
  anon_sym_uimage2DMS = 439,
  anon_sym_uimage2DMSArray = 440,
  anon_sym_uimage2DRect = 441,
  anon_sym_uimage3D = 442,
  anon_sym_uimageBuffer = 443,
  anon_sym_uimageCube = 444,
  anon_sym_uimageCubeArray = 445,
  anon_sym_union = 446,
  anon_sym_unless = 447,
  anon_sym_unorm = 448,
  anon_sym_unsafe = 449,
  anon_sym_unsigned = 450,
  anon_sym_unsized = 451,
  anon_sym_usampler1D = 452,
  anon_sym_usampler1DArray = 453,
  anon_sym_usampler2D = 454,
  anon_sym_usampler2DArray = 455,
  anon_sym_usampler2DMS = 456,
  anon_sym_usampler2DMSArray = 457,
  anon_sym_usampler2DRect = 458,
  anon_sym_usampler3D = 459,
  anon_sym_usamplerBuffer = 460,
  anon_sym_usamplerCube = 461,
  anon_sym_usamplerCubeArray = 462,
  anon_sym_use = 463,
  anon_sym_using = 464,
  anon_sym_usubpassInput = 465,
  anon_sym_usubpassInputMS = 466,
  anon_sym_utexture1D = 467,
  anon_sym_utexture1DArray = 468,
  anon_sym_utexture2D = 469,
  anon_sym_utexture2DArray = 470,
  anon_sym_utexture2DMS = 471,
  anon_sym_utexture2DMSArray = 472,
  anon_sym_utexture2DRect = 473,
  anon_sym_utexture3D = 474,
  anon_sym_utextureBuffer = 475,
  anon_sym_utextureCube = 476,
  anon_sym_utextureCubeArray = 477,
  anon_sym_varying = 478,
  anon_sym_vec = 479,
  anon_sym_vector = 480,
  anon_sym_vertexfragment = 481,
  anon_sym_virtual = 482,
  anon_sym_void = 483,
  anon_sym_volatile = 484,
  anon_sym_wchar_t = 485,
  anon_sym_wgsl = 486,
  anon_sym_where = 487,
  anon_sym_with = 488,
  anon_sym_writeonly = 489,
  anon_sym_yield = 490,
  anon_sym_SLASH_SLASH = 491,
  aux_sym__comment_token1 = 492,
  sym__blankspace = 493,
  sym__block_comment = 494,
  sym_translation_unit = 495,
  sym_global_directive = 496,
  sym_bool_literal = 497,
  sym_int_literal = 498,
  sym_float_literal = 499,
  sym_decimal_float_literal = 500,
  sym_hex_float_literal = 501,
  sym_const_literal = 502,
  sym_attribute = 503,
  sym_literal_or_ident = 504,
  sym_array_type_decl = 505,
  sym_element_count_expression = 506,
  sym_struct_decl = 507,
  sym_struct_body_decl = 508,
  sym_struct_member = 509,
  sym_address_space = 510,
  sym_texture_sampler_types = 511,
  sym_sampler_type = 512,
  sym_sampled_texture_type = 513,
  sym_multisampled_texture_type = 514,
  sym_storage_texture_type = 515,
  sym_depth_texture_type = 516,
  sym_type_alias_decl = 517,
  sym_type_decl = 518,
  sym_type_decl_without_ident = 519,
  sym_vec_prefix = 520,
  sym_mat_prefix = 521,
  sym_variable_statement = 522,
  sym_variable_decl = 523,
  sym_variable_ident_decl = 524,
  sym_variable_qualifier = 525,
  sym_global_variable_decl = 526,
  sym_global_constant_decl = 527,
  sym_primary_expression = 528,
  sym_callable = 529,
  sym_paren_expression = 530,
  sym_argument_expression_list = 531,
  sym_postfix_expression = 532,
  sym_unary_expression = 533,
  sym_singular_expression = 534,
  sym_lhs_expression = 535,
  sym_core_lhs_expression = 536,
  sym_multiplicative_expression = 537,
  sym_additive_expression = 538,
  sym_shift_expression = 539,
  sym_relational_expression = 540,
  sym_short_circuit_and_expression = 541,
  sym_short_circuit_or_expression = 542,
  sym_binary_or_expression = 543,
  sym_binary_and_expression = 544,
  sym_binary_xor_expression = 545,
  sym_bitwise_expression = 546,
  sym_expression = 547,
  sym_compound_statement = 548,
  sym_assignment_statement = 549,
  sym_compound_assignment_operator = 550,
  sym_increment_statement = 551,
  sym_decrement_statement = 552,
  sym_if_statement = 553,
  sym_else_statement = 554,
  sym_switch_statement = 555,
  sym_switch_body = 556,
  sym_case_selectors = 557,
  sym_case_compound_statement = 558,
  sym_fallthrough_statement = 559,
  sym_loop_statement = 560,
  sym_for_statement = 561,
  sym_for_header = 562,
  sym_for_init = 563,
  sym_for_update = 564,
  sym_while_statement = 565,
  sym_break_statement = 566,
  sym_break_if_statement = 567,
  sym_continue_statement = 568,
  sym_continuing_statement = 569,
  sym_continuing_compound_statement = 570,
  sym_return_statement = 571,
  sym_func_call_statement = 572,
  sym_static_assert_statement = 573,
  sym_statement = 574,
  sym_function_decl = 575,
  sym_function_header = 576,
  sym_param_list = 577,
  sym_param = 578,
  sym_enable_directive = 579,
  sym_access_mode = 580,
  sym_texel_format = 581,
  sym__comment = 582,
  aux_sym_translation_unit_repeat1 = 583,
  aux_sym_translation_unit_repeat2 = 584,
  aux_sym_attribute_repeat1 = 585,
  aux_sym_struct_body_decl_repeat1 = 586,
  aux_sym_struct_member_repeat1 = 587,
  aux_sym_argument_expression_list_repeat1 = 588,
  aux_sym_lhs_expression_repeat1 = 589,
  aux_sym_compound_statement_repeat1 = 590,
  aux_sym_switch_statement_repeat1 = 591,
  aux_sym_case_selectors_repeat1 = 592,
  aux_sym_param_list_repeat1 = 593,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_ident] = "ident",
  [aux_sym_int_literal_token1] = "int_literal_token1",
  [aux_sym_int_literal_token2] = "int_literal_token2",
  [aux_sym_int_literal_token3] = "int_literal_token3",
  [aux_sym_decimal_float_literal_token1] = "decimal_float_literal_token1",
  [aux_sym_decimal_float_literal_token2] = "decimal_float_literal_token2",
  [aux_sym_decimal_float_literal_token3] = "decimal_float_literal_token3",
  [aux_sym_decimal_float_literal_token4] = "decimal_float_literal_token4",
  [aux_sym_decimal_float_literal_token5] = "decimal_float_literal_token5",
  [aux_sym_hex_float_literal_token1] = "hex_float_literal_token1",
  [aux_sym_hex_float_literal_token2] = "hex_float_literal_token2",
  [aux_sym_hex_float_literal_token3] = "hex_float_literal_token3",
  [anon_sym_read] = "read",
  [anon_sym_write] = "write",
  [anon_sym_read_write] = "read_write",
  [anon_sym_rgba8unorm] = "rgba8unorm",
  [anon_sym_rgba8snorm] = "rgba8snorm",
  [anon_sym_rgba8uint] = "rgba8uint",
  [anon_sym_rgba8sint] = "rgba8sint",
  [anon_sym_rgba16uint] = "rgba16uint",
  [anon_sym_rgba16sint] = "rgba16sint",
  [anon_sym_rgba16float] = "rgba16float",
  [anon_sym_r32uint] = "r32uint",
  [anon_sym_r32sint] = "r32sint",
  [anon_sym_r32float] = "r32float",
  [anon_sym_rg32uint] = "rg32uint",
  [anon_sym_rg32sint] = "rg32sint",
  [anon_sym_rg32float] = "rg32float",
  [anon_sym_rgba32uint] = "rgba32uint",
  [anon_sym_rgba32sint] = "rgba32sint",
  [anon_sym_rgba32float] = "rgba32float",
  [sym_array] = "array",
  [sym_atomic] = "atomic",
  [sym_bool] = "bool",
  [sym_float32] = "float32",
  [sym_float16] = "float16",
  [sym_int32] = "int32",
  [sym_mat2x2] = "mat2x2",
  [sym_mat2x3] = "mat2x3",
  [sym_mat2x4] = "mat2x4",
  [sym_mat3x2] = "mat3x2",
  [sym_mat3x3] = "mat3x3",
  [sym_mat3x4] = "mat3x4",
  [sym_mat4x2] = "mat4x2",
  [sym_mat4x3] = "mat4x3",
  [sym_mat4x4] = "mat4x4",
  [sym_override] = "override",
  [sym_pointer] = "pointer",
  [sym_sampler] = "sampler",
  [sym_sampler_comparison] = "sampler_comparison",
  [sym_staticAssert] = "staticAssert",
  [sym_struct] = "struct",
  [sym_texture_1d] = "texture_1d",
  [sym_texture_2d] = "texture_2d",
  [sym_texture_2d_array] = "texture_2d_array",
  [sym_texture_3d] = "texture_3d",
  [sym_texture_cube] = "texture_cube",
  [sym_texture_cube_array] = "texture_cube_array",
  [sym_texture_multisampled_2d] = "texture_multisampled_2d",
  [sym_texture_storage_1d] = "texture_storage_1d",
  [sym_texture_storage_2d] = "texture_storage_2d",
  [sym_texture_storage_2d_array] = "texture_storage_2d_array",
  [sym_texture_storage_3d] = "texture_storage_3d",
  [sym_texture_depth_2d] = "texture_depth_2d",
  [sym_texture_depth_2d_array] = "texture_depth_2d_array",
  [sym_texture_depth_cube] = "texture_depth_cube",
  [sym_texture_depth_cube_array] = "texture_depth_cube_array",
  [sym_texture_depth_multisampled_2d] = "texture_depth_multisampled_2d",
  [sym_uint32] = "uint32",
  [sym_vec2] = "vec2",
  [sym_vec3] = "vec3",
  [sym_vec4] = "vec4",
  [sym_bitcast] = "bitcast",
  [sym_break] = "break",
  [sym_case] = "case",
  [sym_const] = "const",
  [sym_continue] = "continue",
  [sym_continuing] = "continuing",
  [sym_default] = "default",
  [sym_discard] = "discard",
  [sym_else] = "else",
  [sym_enable] = "enable",
  [sym_fallthrough] = "fallthrough",
  [sym_false] = "false",
  [sym_fn] = "fn",
  [sym_for] = "for",
  [sym_function] = "function",
  [sym_if] = "if",
  [sym_let] = "let",
  [sym_loop] = "loop",
  [sym_private] = "private",
  [sym_return] = "return",
  [sym_storage] = "storage",
  [sym_switch] = "switch",
  [sym_true] = "true",
  [sym_type] = "type",
  [sym_uniform] = "uniform",
  [sym_var] = "var",
  [sym_while] = "while",
  [sym_workgroup] = "workgroup",
  [sym_and] = "and",
  [sym_and_and] = "and_and",
  [sym_arrow] = "arrow",
  [sym_attr] = "attr",
  [sym_forward_slash] = "forward_slash",
  [sym_bang] = "bang",
  [sym_bracket_left] = "bracket_left",
  [sym_bracket_right] = "bracket_right",
  [sym_brace_left] = "brace_left",
  [sym_brace_right] = "brace_right",
  [sym_colon] = "colon",
  [sym_comma] = "comma",
  [sym_equal] = "equal",
  [sym_equal_equal] = "equal_equal",
  [sym_not_equal] = "not_equal",
  [sym_greater_than] = "greater_than",
  [sym_greater_than_equal] = "greater_than_equal",
  [sym_shift_right] = "shift_right",
  [sym_less_than] = "less_than",
  [sym_less_than_equal] = "less_than_equal",
  [sym_shift_left] = "shift_left",
  [sym_modulo] = "modulo",
  [sym_minus] = "minus",
  [sym_minus_minus] = "minus_minus",
  [sym_period] = "period",
  [sym_plus] = "plus",
  [sym_plus_plus] = "plus_plus",
  [sym_or] = "or",
  [sym_or_or] = "or_or",
  [sym_paren_left] = "paren_left",
  [sym_paren_right] = "paren_right",
  [sym_semicolon] = "semicolon",
  [sym_star] = "star",
  [sym_tilde] = "tilde",
  [sym_underscore] = "underscore",
  [sym_xor] = "xor",
  [sym_plus_equal] = "plus_equal",
  [sym_minus_equal] = "minus_equal",
  [sym_times_equal] = "times_equal",
  [sym_division_equal] = "division_equal",
  [sym_modulo_equal] = "modulo_equal",
  [sym_and_equal] = "and_equal",
  [sym_or_equal] = "or_equal",
  [sym_xor_equal] = "xor_equal",
  [sym_shift_right_equal] = "shift_right_equal",
  [sym_shift_left_equal] = "shift_left_equal",
  [anon_sym_AppendStructuredBuffer] = "AppendStructuredBuffer",
  [anon_sym_BlendState] = "BlendState",
  [anon_sym_Buffer] = "Buffer",
  [anon_sym_ByteAddressBuffer] = "ByteAddressBuffer",
  [anon_sym_CompileShader] = "CompileShader",
  [anon_sym_ComputeShader] = "ComputeShader",
  [anon_sym_ConsumeStructuredBuffer] = "ConsumeStructuredBuffer",
  [anon_sym_DepthStencilState] = "DepthStencilState",
  [anon_sym_DepthStencilView] = "DepthStencilView",
  [anon_sym_DomainShader] = "DomainShader",
  [anon_sym_GeometryShader] = "GeometryShader",
  [anon_sym_Hullshader] = "Hullshader",
  [anon_sym_InputPatch] = "InputPatch",
  [anon_sym_LineStream] = "LineStream",
  [anon_sym_NULL] = "NULL",
  [anon_sym_OutputPatch] = "OutputPatch",
  [anon_sym_PixelShader] = "PixelShader",
  [anon_sym_PointStream] = "PointStream",
  [anon_sym_RWBuffer] = "RWBuffer",
  [anon_sym_RWByteAddressBuffer] = "RWByteAddressBuffer",
  [anon_sym_RWStructuredBuffer] = "RWStructuredBuffer",
  [anon_sym_RWTexture1D] = "RWTexture1D",
  [anon_sym_RWTexture1DArray] = "RWTexture1DArray",
  [anon_sym_RWTexture2D] = "RWTexture2D",
  [anon_sym_RWTexture2DArray] = "RWTexture2DArray",
  [anon_sym_RWTexture3D] = "RWTexture3D",
  [anon_sym_RasterizerState] = "RasterizerState",
  [anon_sym_RenderTargetView] = "RenderTargetView",
  [anon_sym_SamplerComparisonState] = "SamplerComparisonState",
  [anon_sym_SamplerState] = "SamplerState",
  [anon_sym_Self] = "Self",
  [anon_sym_StructuredBuffer] = "StructuredBuffer",
  [anon_sym_Texture1D] = "Texture1D",
  [anon_sym_Texture1DArray] = "Texture1DArray",
  [anon_sym_Texture2D] = "Texture2D",
  [anon_sym_Texture2DArray] = "Texture2DArray",
  [anon_sym_Texture2DMS] = "Texture2DMS",
  [anon_sym_Texture2DMSArray] = "Texture2DMSArray",
  [anon_sym_Texture3D] = "Texture3D",
  [anon_sym_TextureCube] = "TextureCube",
  [anon_sym_TextureCubeArray] = "TextureCubeArray",
  [anon_sym_TriangleStream] = "TriangleStream",
  [anon_sym_VertexShader] = "VertexShader",
  [anon_sym_abstract] = "abstract",
  [anon_sym_active] = "active",
  [anon_sym_alignas] = "alignas",
  [anon_sym_alignof] = "alignof",
  [anon_sym_as] = "as",
  [anon_sym_asm] = "asm",
  [anon_sym_asm_fragment] = "asm_fragment",
  [anon_sym_async] = "async",
  [anon_sym_atomic_uint] = "atomic_uint",
  [anon_sym_attribute] = "attribute",
  [anon_sym_auto] = "auto",
  [anon_sym_await] = "await",
  [anon_sym_become] = "become",
  [anon_sym_bf16] = "bf16",
  [anon_sym_binding_array] = "binding_array",
  [anon_sym_cast] = "cast",
  [anon_sym_catch] = "catch",
  [anon_sym_cbuffer] = "cbuffer",
  [anon_sym_char] = "char",
  [anon_sym_class] = "class",
  [anon_sym_co_await] = "co_await",
  [anon_sym_co_return] = "co_return",
  [anon_sym_co_yield] = "co_yield",
  [anon_sym_coherent] = "coherent",
  [anon_sym_column_major] = "column_major",
  [anon_sym_common] = "common",
  [anon_sym_compile] = "compile",
  [anon_sym_compile_fragment] = "compile_fragment",
  [anon_sym_concept] = "concept",
  [anon_sym_const_cast] = "const_cast",
  [anon_sym_consteval] = "consteval",
  [anon_sym_constexpr] = "constexpr",
  [anon_sym_constinit] = "constinit",
  [anon_sym_crate] = "crate",
  [anon_sym_debugger] = "debugger",
  [anon_sym_decltype] = "decltype",
  [anon_sym_delete] = "delete",
  [anon_sym_demote] = "demote",
  [anon_sym_demote_to_helper] = "demote_to_helper",
  [anon_sym_do] = "do",
  [anon_sym_dword] = "dword",
  [anon_sym_dynamic_cast] = "dynamic_cast",
  [anon_sym_enum] = "enum",
  [anon_sym_explicit] = "explicit",
  [anon_sym_export] = "export",
  [anon_sym_extends] = "extends",
  [anon_sym_extern] = "extern",
  [anon_sym_external] = "external",
  [anon_sym_f64] = "f64",
  [anon_sym_filter] = "filter",
  [anon_sym_final] = "final",
  [anon_sym_finally] = "finally",
  [anon_sym_fixed] = "fixed",
  [anon_sym_friend] = "friend",
  [anon_sym_from] = "from",
  [anon_sym_fvec2] = "fvec2",
  [anon_sym_fvec3] = "fvec3",
  [anon_sym_fvec4] = "fvec4",
  [anon_sym_fxgroup] = "fxgroup",
  [anon_sym_get] = "get",
  [anon_sym_goto] = "goto",
  [anon_sym_groupshared] = "groupshared",
  [anon_sym_handle] = "handle",
  [anon_sym_highp] = "highp",
  [anon_sym_hvec2] = "hvec2",
  [anon_sym_hvec3] = "hvec3",
  [anon_sym_hvec4] = "hvec4",
  [anon_sym_i16] = "i16",
  [anon_sym_i64] = "i64",
  [anon_sym_i8] = "i8",
  [anon_sym_iimage1D] = "iimage1D",
  [anon_sym_iimage1DArray] = "iimage1DArray",
  [anon_sym_iimage2D] = "iimage2D",
  [anon_sym_iimage2DArray] = "iimage2DArray",
  [anon_sym_iimage2DMS] = "iimage2DMS",
  [anon_sym_iimage2DMSArray] = "iimage2DMSArray",
  [anon_sym_iimage2DRect] = "iimage2DRect",
  [anon_sym_iimage3D] = "iimage3D",
  [anon_sym_iimageBuffer] = "iimageBuffer",
  [anon_sym_iimageCube] = "iimageCube",
  [anon_sym_iimageCubeArray] = "iimageCubeArray",
  [anon_sym_image1D] = "image1D",
  [anon_sym_image1DArray] = "image1DArray",
  [anon_sym_image2D] = "image2D",
  [anon_sym_image2DArray] = "image2DArray",
  [anon_sym_image2DMS] = "image2DMS",
  [anon_sym_image2DMSArray] = "image2DMSArray",
  [anon_sym_image2DRect] = "image2DRect",
  [anon_sym_image3D] = "image3D",
  [anon_sym_imageBuffer] = "imageBuffer",
  [anon_sym_imageCube] = "imageCube",
  [anon_sym_imageCubeArray] = "imageCubeArray",
  [anon_sym_impl] = "impl",
  [anon_sym_implements] = "implements",
  [anon_sym_import] = "import",
  [anon_sym_inline] = "inline",
  [anon_sym_inout] = "inout",
  [anon_sym_instanceof] = "instanceof",
  [anon_sym_interface] = "interface",
  [anon_sym_invariant] = "invariant",
  [anon_sym_isampler1D] = "isampler1D",
  [anon_sym_isampler1DArray] = "isampler1DArray",
  [anon_sym_isampler2D] = "isampler2D",
  [anon_sym_isampler2DArray] = "isampler2DArray",
  [anon_sym_isampler2DMS] = "isampler2DMS",
  [anon_sym_isampler2DMSArray] = "isampler2DMSArray",
  [anon_sym_isampler2DRect] = "isampler2DRect",
  [anon_sym_isampler3D] = "isampler3D",
  [anon_sym_isamplerBuffer] = "isamplerBuffer",
  [anon_sym_isamplerCube] = "isamplerCube",
  [anon_sym_isamplerCubeArray] = "isamplerCubeArray",
  [anon_sym_isubpassInput] = "isubpassInput",
  [anon_sym_isubpassInputMS] = "isubpassInputMS",
  [anon_sym_itexture1D] = "itexture1D",
  [anon_sym_itexture1DArray] = "itexture1DArray",
  [anon_sym_itexture2D] = "itexture2D",
  [anon_sym_itexture2DArray] = "itexture2DArray",
  [anon_sym_itexture2DMS] = "itexture2DMS",
  [anon_sym_itexture2DMSArray] = "itexture2DMSArray",
  [anon_sym_itexture2DRect] = "itexture2DRect",
  [anon_sym_itexture3D] = "itexture3D",
  [anon_sym_itextureBuffer] = "itextureBuffer",
  [anon_sym_itextureCube] = "itextureCube",
  [anon_sym_itextureCubeArray] = "itextureCubeArray",
  [anon_sym_layout] = "layout",
  [anon_sym_line] = "line",
  [anon_sym_lineadj] = "lineadj",
  [anon_sym_lowp] = "lowp",
  [anon_sym_macro] = "macro",
  [anon_sym_macro_rules] = "macro_rules",
  [anon_sym_mat] = "mat",
  [anon_sym_match] = "match",
  [anon_sym_matrix] = "matrix",
  [anon_sym_mediump] = "mediump",
  [anon_sym_meta] = "meta",
  [anon_sym_mod] = "mod",
  [anon_sym_module] = "module",
  [anon_sym_move] = "move",
  [anon_sym_mut] = "mut",
  [anon_sym_mutable] = "mutable",
  [anon_sym_namespace] = "namespace",
  [anon_sym_new] = "new",
  [anon_sym_nil] = "nil",
  [anon_sym_noexcept] = "noexcept",
  [anon_sym_noinline] = "noinline",
  [anon_sym_nointerpolation] = "nointerpolation",
  [anon_sym_noperspective] = "noperspective",
  [anon_sym_null] = "null",
  [anon_sym_nullptr] = "nullptr",
  [anon_sym_of] = "of",
  [anon_sym_operator] = "operator",
  [anon_sym_package] = "package",
  [anon_sym_packoffset] = "packoffset",
  [anon_sym_partition] = "partition",
  [anon_sym_pass] = "pass",
  [anon_sym_patch] = "patch",
  [anon_sym_pixelfragment] = "pixelfragment",
  [anon_sym_point] = "point",
  [anon_sym_precise] = "precise",
  [anon_sym_precision] = "precision",
  [anon_sym_premerge] = "premerge",
  [anon_sym_priv] = "priv",
  [anon_sym_protected] = "protected",
  [anon_sym_pub] = "pub",
  [anon_sym_public] = "public",
  [anon_sym_readonly] = "readonly",
  [anon_sym_ref] = "ref",
  [anon_sym_regardless] = "regardless",
  [anon_sym_register] = "register",
  [anon_sym_reinterpret_cast] = "reinterpret_cast",
  [anon_sym_requires] = "requires",
  [anon_sym_resource] = "resource",
  [anon_sym_restrict] = "restrict",
  [anon_sym_row_major] = "row_major",
  [anon_sym_samper] = "samper",
  [anon_sym_sampler1D] = "sampler1D",
  [anon_sym_sampler1DArray] = "sampler1DArray",
  [anon_sym_sampler1DArrayShadow] = "sampler1DArrayShadow",
  [anon_sym_sampler1DShadow] = "sampler1DShadow",
  [anon_sym_sampler2D] = "sampler2D",
  [anon_sym_sampler2DArray] = "sampler2DArray",
  [anon_sym_sampler2DArrayShadow] = "sampler2DArrayShadow",
  [anon_sym_sampler2DMS] = "sampler2DMS",
  [anon_sym_sampler2DMSArray] = "sampler2DMSArray",
  [anon_sym_sampler2DRect] = "sampler2DRect",
  [anon_sym_sampler2DRectShadow] = "sampler2DRectShadow",
  [anon_sym_sampler2DShadow] = "sampler2DShadow",
  [anon_sym_sampler3D] = "sampler3D",
  [anon_sym_sampler3DRect] = "sampler3DRect",
  [anon_sym_samplerBuffer] = "samplerBuffer",
  [anon_sym_samplerCube] = "samplerCube",
  [anon_sym_samplerCubeArray] = "samplerCubeArray",
  [anon_sym_samplerCubeArrayShadow] = "samplerCubeArrayShadow",
  [anon_sym_samplerCubeShadow] = "samplerCubeShadow",
  [anon_sym_samplerShadow] = "samplerShadow",
  [anon_sym_self] = "self",
  [anon_sym_set] = "set",
  [anon_sym_shared] = "shared",
  [anon_sym_signed] = "signed",
  [anon_sym_sizeof] = "sizeof",
  [anon_sym_smooth] = "smooth",
  [anon_sym_snorm] = "snorm",
  [anon_sym_stateblock] = "stateblock",
  [anon_sym_stateblock_state] = "stateblock_state",
  [anon_sym_static] = "static",
  [anon_sym_static_assert] = "static_assert",
  [anon_sym_static_cast] = "static_cast",
  [anon_sym_std] = "std",
  [anon_sym_string] = "string",
  [anon_sym_subpassInput] = "subpassInput",
  [anon_sym_subpassInputMS] = "subpassInputMS",
  [anon_sym_subroutine] = "subroutine",
  [anon_sym_super] = "super",
  [anon_sym_superp] = "superp",
  [anon_sym_target] = "target",
  [anon_sym_tbuffer] = "tbuffer",
  [anon_sym_technique] = "technique",
  [anon_sym_technique10] = "technique10",
  [anon_sym_technique11] = "technique11",
  [anon_sym_template] = "template",
  [anon_sym_texture1D] = "texture1D",
  [anon_sym_texture1DArray] = "texture1DArray",
  [anon_sym_texture2D] = "texture2D",
  [anon_sym_texture2DArray] = "texture2DArray",
  [anon_sym_texture2DMS] = "texture2DMS",
  [anon_sym_texture2DMSArray] = "texture2DMSArray",
  [anon_sym_texture2DRect] = "texture2DRect",
  [anon_sym_texture3D] = "texture3D",
  [anon_sym_textureBuffer] = "textureBuffer",
  [anon_sym_textureCube] = "textureCube",
  [anon_sym_textureCubeArray] = "textureCubeArray",
  [anon_sym_this] = "this",
  [anon_sym_thread_local] = "thread_local",
  [anon_sym_throw] = "throw",
  [anon_sym_trait] = "trait",
  [anon_sym_triangle] = "triangle",
  [anon_sym_triangleadj] = "triangleadj",
  [anon_sym_try] = "try",
  [anon_sym_typedef] = "typedef",
  [anon_sym_typeid] = "typeid",
  [anon_sym_typename] = "typename",
  [anon_sym_typeof] = "typeof",
  [anon_sym_u16] = "u16",
  [anon_sym_u64] = "u64",
  [anon_sym_u8] = "u8",
  [anon_sym_uimage1D] = "uimage1D",
  [anon_sym_uimage1DArray] = "uimage1DArray",
  [anon_sym_uimage2D] = "uimage2D",
  [anon_sym_uimage2DArray] = "uimage2DArray",
  [anon_sym_uimage2DMS] = "uimage2DMS",
  [anon_sym_uimage2DMSArray] = "uimage2DMSArray",
  [anon_sym_uimage2DRect] = "uimage2DRect",
  [anon_sym_uimage3D] = "uimage3D",
  [anon_sym_uimageBuffer] = "uimageBuffer",
  [anon_sym_uimageCube] = "uimageCube",
  [anon_sym_uimageCubeArray] = "uimageCubeArray",
  [anon_sym_union] = "union",
  [anon_sym_unless] = "unless",
  [anon_sym_unorm] = "unorm",
  [anon_sym_unsafe] = "unsafe",
  [anon_sym_unsigned] = "unsigned",
  [anon_sym_unsized] = "unsized",
  [anon_sym_usampler1D] = "usampler1D",
  [anon_sym_usampler1DArray] = "usampler1DArray",
  [anon_sym_usampler2D] = "usampler2D",
  [anon_sym_usampler2DArray] = "usampler2DArray",
  [anon_sym_usampler2DMS] = "usampler2DMS",
  [anon_sym_usampler2DMSArray] = "usampler2DMSArray",
  [anon_sym_usampler2DRect] = "usampler2DRect",
  [anon_sym_usampler3D] = "usampler3D",
  [anon_sym_usamplerBuffer] = "usamplerBuffer",
  [anon_sym_usamplerCube] = "usamplerCube",
  [anon_sym_usamplerCubeArray] = "usamplerCubeArray",
  [anon_sym_use] = "use",
  [anon_sym_using] = "using",
  [anon_sym_usubpassInput] = "usubpassInput",
  [anon_sym_usubpassInputMS] = "usubpassInputMS",
  [anon_sym_utexture1D] = "utexture1D",
  [anon_sym_utexture1DArray] = "utexture1DArray",
  [anon_sym_utexture2D] = "utexture2D",
  [anon_sym_utexture2DArray] = "utexture2DArray",
  [anon_sym_utexture2DMS] = "utexture2DMS",
  [anon_sym_utexture2DMSArray] = "utexture2DMSArray",
  [anon_sym_utexture2DRect] = "utexture2DRect",
  [anon_sym_utexture3D] = "utexture3D",
  [anon_sym_utextureBuffer] = "utextureBuffer",
  [anon_sym_utextureCube] = "utextureCube",
  [anon_sym_utextureCubeArray] = "utextureCubeArray",
  [anon_sym_varying] = "varying",
  [anon_sym_vec] = "vec",
  [anon_sym_vector] = "vector",
  [anon_sym_vertexfragment] = "vertexfragment",
  [anon_sym_virtual] = "virtual",
  [anon_sym_void] = "void",
  [anon_sym_volatile] = "volatile",
  [anon_sym_wchar_t] = "wchar_t",
  [anon_sym_wgsl] = "wgsl",
  [anon_sym_where] = "where",
  [anon_sym_with] = "with",
  [anon_sym_writeonly] = "writeonly",
  [anon_sym_yield] = "yield",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym__comment_token1] = "_comment_token1",
  [sym__blankspace] = "_blankspace",
  [sym__block_comment] = "_block_comment",
  [sym_translation_unit] = "translation_unit",
  [sym_global_directive] = "global_directive",
  [sym_bool_literal] = "bool_literal",
  [sym_int_literal] = "int_literal",
  [sym_float_literal] = "float_literal",
  [sym_decimal_float_literal] = "decimal_float_literal",
  [sym_hex_float_literal] = "hex_float_literal",
  [sym_const_literal] = "const_literal",
  [sym_attribute] = "attribute",
  [sym_literal_or_ident] = "literal_or_ident",
  [sym_array_type_decl] = "array_type_decl",
  [sym_element_count_expression] = "element_count_expression",
  [sym_struct_decl] = "struct_decl",
  [sym_struct_body_decl] = "struct_body_decl",
  [sym_struct_member] = "struct_member",
  [sym_address_space] = "address_space",
  [sym_texture_sampler_types] = "texture_sampler_types",
  [sym_sampler_type] = "sampler_type",
  [sym_sampled_texture_type] = "sampled_texture_type",
  [sym_multisampled_texture_type] = "multisampled_texture_type",
  [sym_storage_texture_type] = "storage_texture_type",
  [sym_depth_texture_type] = "depth_texture_type",
  [sym_type_alias_decl] = "type_alias_decl",
  [sym_type_decl] = "type_decl",
  [sym_type_decl_without_ident] = "type_decl_without_ident",
  [sym_vec_prefix] = "vec_prefix",
  [sym_mat_prefix] = "mat_prefix",
  [sym_variable_statement] = "variable_statement",
  [sym_variable_decl] = "variable_decl",
  [sym_variable_ident_decl] = "variable_ident_decl",
  [sym_variable_qualifier] = "variable_qualifier",
  [sym_global_variable_decl] = "global_variable_decl",
  [sym_global_constant_decl] = "global_constant_decl",
  [sym_primary_expression] = "primary_expression",
  [sym_callable] = "callable",
  [sym_paren_expression] = "paren_expression",
  [sym_argument_expression_list] = "argument_expression_list",
  [sym_postfix_expression] = "postfix_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_singular_expression] = "singular_expression",
  [sym_lhs_expression] = "lhs_expression",
  [sym_core_lhs_expression] = "core_lhs_expression",
  [sym_multiplicative_expression] = "multiplicative_expression",
  [sym_additive_expression] = "additive_expression",
  [sym_shift_expression] = "shift_expression",
  [sym_relational_expression] = "relational_expression",
  [sym_short_circuit_and_expression] = "short_circuit_and_expression",
  [sym_short_circuit_or_expression] = "short_circuit_or_expression",
  [sym_binary_or_expression] = "binary_or_expression",
  [sym_binary_and_expression] = "binary_and_expression",
  [sym_binary_xor_expression] = "binary_xor_expression",
  [sym_bitwise_expression] = "bitwise_expression",
  [sym_expression] = "expression",
  [sym_compound_statement] = "compound_statement",
  [sym_assignment_statement] = "assignment_statement",
  [sym_compound_assignment_operator] = "compound_assignment_operator",
  [sym_increment_statement] = "increment_statement",
  [sym_decrement_statement] = "decrement_statement",
  [sym_if_statement] = "if_statement",
  [sym_else_statement] = "else_statement",
  [sym_switch_statement] = "switch_statement",
  [sym_switch_body] = "switch_body",
  [sym_case_selectors] = "case_selectors",
  [sym_case_compound_statement] = "case_compound_statement",
  [sym_fallthrough_statement] = "fallthrough_statement",
  [sym_loop_statement] = "loop_statement",
  [sym_for_statement] = "for_statement",
  [sym_for_header] = "for_header",
  [sym_for_init] = "for_init",
  [sym_for_update] = "for_update",
  [sym_while_statement] = "while_statement",
  [sym_break_statement] = "break_statement",
  [sym_break_if_statement] = "break_if_statement",
  [sym_continue_statement] = "continue_statement",
  [sym_continuing_statement] = "continuing_statement",
  [sym_continuing_compound_statement] = "continuing_compound_statement",
  [sym_return_statement] = "return_statement",
  [sym_func_call_statement] = "func_call_statement",
  [sym_static_assert_statement] = "static_assert_statement",
  [sym_statement] = "statement",
  [sym_function_decl] = "function_decl",
  [sym_function_header] = "function_header",
  [sym_param_list] = "param_list",
  [sym_param] = "param",
  [sym_enable_directive] = "enable_directive",
  [sym_access_mode] = "access_mode",
  [sym_texel_format] = "texel_format",
  [sym__comment] = "_comment",
  [aux_sym_translation_unit_repeat1] = "translation_unit_repeat1",
  [aux_sym_translation_unit_repeat2] = "translation_unit_repeat2",
  [aux_sym_attribute_repeat1] = "attribute_repeat1",
  [aux_sym_struct_body_decl_repeat1] = "struct_body_decl_repeat1",
  [aux_sym_struct_member_repeat1] = "struct_member_repeat1",
  [aux_sym_argument_expression_list_repeat1] = "argument_expression_list_repeat1",
  [aux_sym_lhs_expression_repeat1] = "lhs_expression_repeat1",
  [aux_sym_compound_statement_repeat1] = "compound_statement_repeat1",
  [aux_sym_switch_statement_repeat1] = "switch_statement_repeat1",
  [aux_sym_case_selectors_repeat1] = "case_selectors_repeat1",
  [aux_sym_param_list_repeat1] = "param_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_ident] = sym_ident,
  [aux_sym_int_literal_token1] = aux_sym_int_literal_token1,
  [aux_sym_int_literal_token2] = aux_sym_int_literal_token2,
  [aux_sym_int_literal_token3] = aux_sym_int_literal_token3,
  [aux_sym_decimal_float_literal_token1] = aux_sym_decimal_float_literal_token1,
  [aux_sym_decimal_float_literal_token2] = aux_sym_decimal_float_literal_token2,
  [aux_sym_decimal_float_literal_token3] = aux_sym_decimal_float_literal_token3,
  [aux_sym_decimal_float_literal_token4] = aux_sym_decimal_float_literal_token4,
  [aux_sym_decimal_float_literal_token5] = aux_sym_decimal_float_literal_token5,
  [aux_sym_hex_float_literal_token1] = aux_sym_hex_float_literal_token1,
  [aux_sym_hex_float_literal_token2] = aux_sym_hex_float_literal_token2,
  [aux_sym_hex_float_literal_token3] = aux_sym_hex_float_literal_token3,
  [anon_sym_read] = anon_sym_read,
  [anon_sym_write] = anon_sym_write,
  [anon_sym_read_write] = anon_sym_read_write,
  [anon_sym_rgba8unorm] = anon_sym_rgba8unorm,
  [anon_sym_rgba8snorm] = anon_sym_rgba8snorm,
  [anon_sym_rgba8uint] = anon_sym_rgba8uint,
  [anon_sym_rgba8sint] = anon_sym_rgba8sint,
  [anon_sym_rgba16uint] = anon_sym_rgba16uint,
  [anon_sym_rgba16sint] = anon_sym_rgba16sint,
  [anon_sym_rgba16float] = anon_sym_rgba16float,
  [anon_sym_r32uint] = anon_sym_r32uint,
  [anon_sym_r32sint] = anon_sym_r32sint,
  [anon_sym_r32float] = anon_sym_r32float,
  [anon_sym_rg32uint] = anon_sym_rg32uint,
  [anon_sym_rg32sint] = anon_sym_rg32sint,
  [anon_sym_rg32float] = anon_sym_rg32float,
  [anon_sym_rgba32uint] = anon_sym_rgba32uint,
  [anon_sym_rgba32sint] = anon_sym_rgba32sint,
  [anon_sym_rgba32float] = anon_sym_rgba32float,
  [sym_array] = sym_array,
  [sym_atomic] = sym_atomic,
  [sym_bool] = sym_bool,
  [sym_float32] = sym_float32,
  [sym_float16] = sym_float16,
  [sym_int32] = sym_int32,
  [sym_mat2x2] = sym_mat2x2,
  [sym_mat2x3] = sym_mat2x3,
  [sym_mat2x4] = sym_mat2x4,
  [sym_mat3x2] = sym_mat3x2,
  [sym_mat3x3] = sym_mat3x3,
  [sym_mat3x4] = sym_mat3x4,
  [sym_mat4x2] = sym_mat4x2,
  [sym_mat4x3] = sym_mat4x3,
  [sym_mat4x4] = sym_mat4x4,
  [sym_override] = sym_override,
  [sym_pointer] = sym_pointer,
  [sym_sampler] = sym_sampler,
  [sym_sampler_comparison] = sym_sampler_comparison,
  [sym_staticAssert] = sym_staticAssert,
  [sym_struct] = sym_struct,
  [sym_texture_1d] = sym_texture_1d,
  [sym_texture_2d] = sym_texture_2d,
  [sym_texture_2d_array] = sym_texture_2d_array,
  [sym_texture_3d] = sym_texture_3d,
  [sym_texture_cube] = sym_texture_cube,
  [sym_texture_cube_array] = sym_texture_cube_array,
  [sym_texture_multisampled_2d] = sym_texture_multisampled_2d,
  [sym_texture_storage_1d] = sym_texture_storage_1d,
  [sym_texture_storage_2d] = sym_texture_storage_2d,
  [sym_texture_storage_2d_array] = sym_texture_storage_2d_array,
  [sym_texture_storage_3d] = sym_texture_storage_3d,
  [sym_texture_depth_2d] = sym_texture_depth_2d,
  [sym_texture_depth_2d_array] = sym_texture_depth_2d_array,
  [sym_texture_depth_cube] = sym_texture_depth_cube,
  [sym_texture_depth_cube_array] = sym_texture_depth_cube_array,
  [sym_texture_depth_multisampled_2d] = sym_texture_depth_multisampled_2d,
  [sym_uint32] = sym_uint32,
  [sym_vec2] = sym_vec2,
  [sym_vec3] = sym_vec3,
  [sym_vec4] = sym_vec4,
  [sym_bitcast] = sym_bitcast,
  [sym_break] = sym_break,
  [sym_case] = sym_case,
  [sym_const] = sym_const,
  [sym_continue] = sym_continue,
  [sym_continuing] = sym_continuing,
  [sym_default] = sym_default,
  [sym_discard] = sym_discard,
  [sym_else] = sym_else,
  [sym_enable] = sym_enable,
  [sym_fallthrough] = sym_fallthrough,
  [sym_false] = sym_false,
  [sym_fn] = sym_fn,
  [sym_for] = sym_for,
  [sym_function] = sym_function,
  [sym_if] = sym_if,
  [sym_let] = sym_let,
  [sym_loop] = sym_loop,
  [sym_private] = sym_private,
  [sym_return] = sym_return,
  [sym_storage] = sym_storage,
  [sym_switch] = sym_switch,
  [sym_true] = sym_true,
  [sym_type] = sym_type,
  [sym_uniform] = sym_uniform,
  [sym_var] = sym_var,
  [sym_while] = sym_while,
  [sym_workgroup] = sym_workgroup,
  [sym_and] = sym_and,
  [sym_and_and] = sym_and_and,
  [sym_arrow] = sym_arrow,
  [sym_attr] = sym_attr,
  [sym_forward_slash] = sym_forward_slash,
  [sym_bang] = sym_bang,
  [sym_bracket_left] = sym_bracket_left,
  [sym_bracket_right] = sym_bracket_right,
  [sym_brace_left] = sym_brace_left,
  [sym_brace_right] = sym_brace_right,
  [sym_colon] = sym_colon,
  [sym_comma] = sym_comma,
  [sym_equal] = sym_equal,
  [sym_equal_equal] = sym_equal_equal,
  [sym_not_equal] = sym_not_equal,
  [sym_greater_than] = sym_greater_than,
  [sym_greater_than_equal] = sym_greater_than_equal,
  [sym_shift_right] = sym_shift_right,
  [sym_less_than] = sym_less_than,
  [sym_less_than_equal] = sym_less_than_equal,
  [sym_shift_left] = sym_shift_left,
  [sym_modulo] = sym_modulo,
  [sym_minus] = sym_minus,
  [sym_minus_minus] = sym_minus_minus,
  [sym_period] = sym_period,
  [sym_plus] = sym_plus,
  [sym_plus_plus] = sym_plus_plus,
  [sym_or] = sym_or,
  [sym_or_or] = sym_or_or,
  [sym_paren_left] = sym_paren_left,
  [sym_paren_right] = sym_paren_right,
  [sym_semicolon] = sym_semicolon,
  [sym_star] = sym_star,
  [sym_tilde] = sym_tilde,
  [sym_underscore] = sym_underscore,
  [sym_xor] = sym_xor,
  [sym_plus_equal] = sym_plus_equal,
  [sym_minus_equal] = sym_minus_equal,
  [sym_times_equal] = sym_times_equal,
  [sym_division_equal] = sym_division_equal,
  [sym_modulo_equal] = sym_modulo_equal,
  [sym_and_equal] = sym_and_equal,
  [sym_or_equal] = sym_or_equal,
  [sym_xor_equal] = sym_xor_equal,
  [sym_shift_right_equal] = sym_shift_right_equal,
  [sym_shift_left_equal] = sym_shift_left_equal,
  [anon_sym_AppendStructuredBuffer] = anon_sym_AppendStructuredBuffer,
  [anon_sym_BlendState] = anon_sym_BlendState,
  [anon_sym_Buffer] = anon_sym_Buffer,
  [anon_sym_ByteAddressBuffer] = anon_sym_ByteAddressBuffer,
  [anon_sym_CompileShader] = anon_sym_CompileShader,
  [anon_sym_ComputeShader] = anon_sym_ComputeShader,
  [anon_sym_ConsumeStructuredBuffer] = anon_sym_ConsumeStructuredBuffer,
  [anon_sym_DepthStencilState] = anon_sym_DepthStencilState,
  [anon_sym_DepthStencilView] = anon_sym_DepthStencilView,
  [anon_sym_DomainShader] = anon_sym_DomainShader,
  [anon_sym_GeometryShader] = anon_sym_GeometryShader,
  [anon_sym_Hullshader] = anon_sym_Hullshader,
  [anon_sym_InputPatch] = anon_sym_InputPatch,
  [anon_sym_LineStream] = anon_sym_LineStream,
  [anon_sym_NULL] = anon_sym_NULL,
  [anon_sym_OutputPatch] = anon_sym_OutputPatch,
  [anon_sym_PixelShader] = anon_sym_PixelShader,
  [anon_sym_PointStream] = anon_sym_PointStream,
  [anon_sym_RWBuffer] = anon_sym_RWBuffer,
  [anon_sym_RWByteAddressBuffer] = anon_sym_RWByteAddressBuffer,
  [anon_sym_RWStructuredBuffer] = anon_sym_RWStructuredBuffer,
  [anon_sym_RWTexture1D] = anon_sym_RWTexture1D,
  [anon_sym_RWTexture1DArray] = anon_sym_RWTexture1DArray,
  [anon_sym_RWTexture2D] = anon_sym_RWTexture2D,
  [anon_sym_RWTexture2DArray] = anon_sym_RWTexture2DArray,
  [anon_sym_RWTexture3D] = anon_sym_RWTexture3D,
  [anon_sym_RasterizerState] = anon_sym_RasterizerState,
  [anon_sym_RenderTargetView] = anon_sym_RenderTargetView,
  [anon_sym_SamplerComparisonState] = anon_sym_SamplerComparisonState,
  [anon_sym_SamplerState] = anon_sym_SamplerState,
  [anon_sym_Self] = anon_sym_Self,
  [anon_sym_StructuredBuffer] = anon_sym_StructuredBuffer,
  [anon_sym_Texture1D] = anon_sym_Texture1D,
  [anon_sym_Texture1DArray] = anon_sym_Texture1DArray,
  [anon_sym_Texture2D] = anon_sym_Texture2D,
  [anon_sym_Texture2DArray] = anon_sym_Texture2DArray,
  [anon_sym_Texture2DMS] = anon_sym_Texture2DMS,
  [anon_sym_Texture2DMSArray] = anon_sym_Texture2DMSArray,
  [anon_sym_Texture3D] = anon_sym_Texture3D,
  [anon_sym_TextureCube] = anon_sym_TextureCube,
  [anon_sym_TextureCubeArray] = anon_sym_TextureCubeArray,
  [anon_sym_TriangleStream] = anon_sym_TriangleStream,
  [anon_sym_VertexShader] = anon_sym_VertexShader,
  [anon_sym_abstract] = anon_sym_abstract,
  [anon_sym_active] = anon_sym_active,
  [anon_sym_alignas] = anon_sym_alignas,
  [anon_sym_alignof] = anon_sym_alignof,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_asm] = anon_sym_asm,
  [anon_sym_asm_fragment] = anon_sym_asm_fragment,
  [anon_sym_async] = anon_sym_async,
  [anon_sym_atomic_uint] = anon_sym_atomic_uint,
  [anon_sym_attribute] = anon_sym_attribute,
  [anon_sym_auto] = anon_sym_auto,
  [anon_sym_await] = anon_sym_await,
  [anon_sym_become] = anon_sym_become,
  [anon_sym_bf16] = anon_sym_bf16,
  [anon_sym_binding_array] = anon_sym_binding_array,
  [anon_sym_cast] = anon_sym_cast,
  [anon_sym_catch] = anon_sym_catch,
  [anon_sym_cbuffer] = anon_sym_cbuffer,
  [anon_sym_char] = anon_sym_char,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_co_await] = anon_sym_co_await,
  [anon_sym_co_return] = anon_sym_co_return,
  [anon_sym_co_yield] = anon_sym_co_yield,
  [anon_sym_coherent] = anon_sym_coherent,
  [anon_sym_column_major] = anon_sym_column_major,
  [anon_sym_common] = anon_sym_common,
  [anon_sym_compile] = anon_sym_compile,
  [anon_sym_compile_fragment] = anon_sym_compile_fragment,
  [anon_sym_concept] = anon_sym_concept,
  [anon_sym_const_cast] = anon_sym_const_cast,
  [anon_sym_consteval] = anon_sym_consteval,
  [anon_sym_constexpr] = anon_sym_constexpr,
  [anon_sym_constinit] = anon_sym_constinit,
  [anon_sym_crate] = anon_sym_crate,
  [anon_sym_debugger] = anon_sym_debugger,
  [anon_sym_decltype] = anon_sym_decltype,
  [anon_sym_delete] = anon_sym_delete,
  [anon_sym_demote] = anon_sym_demote,
  [anon_sym_demote_to_helper] = anon_sym_demote_to_helper,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_dword] = anon_sym_dword,
  [anon_sym_dynamic_cast] = anon_sym_dynamic_cast,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_explicit] = anon_sym_explicit,
  [anon_sym_export] = anon_sym_export,
  [anon_sym_extends] = anon_sym_extends,
  [anon_sym_extern] = anon_sym_extern,
  [anon_sym_external] = anon_sym_external,
  [anon_sym_f64] = anon_sym_f64,
  [anon_sym_filter] = anon_sym_filter,
  [anon_sym_final] = anon_sym_final,
  [anon_sym_finally] = anon_sym_finally,
  [anon_sym_fixed] = anon_sym_fixed,
  [anon_sym_friend] = anon_sym_friend,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_fvec2] = anon_sym_fvec2,
  [anon_sym_fvec3] = anon_sym_fvec3,
  [anon_sym_fvec4] = anon_sym_fvec4,
  [anon_sym_fxgroup] = anon_sym_fxgroup,
  [anon_sym_get] = anon_sym_get,
  [anon_sym_goto] = anon_sym_goto,
  [anon_sym_groupshared] = anon_sym_groupshared,
  [anon_sym_handle] = anon_sym_handle,
  [anon_sym_highp] = anon_sym_highp,
  [anon_sym_hvec2] = anon_sym_hvec2,
  [anon_sym_hvec3] = anon_sym_hvec3,
  [anon_sym_hvec4] = anon_sym_hvec4,
  [anon_sym_i16] = anon_sym_i16,
  [anon_sym_i64] = anon_sym_i64,
  [anon_sym_i8] = anon_sym_i8,
  [anon_sym_iimage1D] = anon_sym_iimage1D,
  [anon_sym_iimage1DArray] = anon_sym_iimage1DArray,
  [anon_sym_iimage2D] = anon_sym_iimage2D,
  [anon_sym_iimage2DArray] = anon_sym_iimage2DArray,
  [anon_sym_iimage2DMS] = anon_sym_iimage2DMS,
  [anon_sym_iimage2DMSArray] = anon_sym_iimage2DMSArray,
  [anon_sym_iimage2DRect] = anon_sym_iimage2DRect,
  [anon_sym_iimage3D] = anon_sym_iimage3D,
  [anon_sym_iimageBuffer] = anon_sym_iimageBuffer,
  [anon_sym_iimageCube] = anon_sym_iimageCube,
  [anon_sym_iimageCubeArray] = anon_sym_iimageCubeArray,
  [anon_sym_image1D] = anon_sym_image1D,
  [anon_sym_image1DArray] = anon_sym_image1DArray,
  [anon_sym_image2D] = anon_sym_image2D,
  [anon_sym_image2DArray] = anon_sym_image2DArray,
  [anon_sym_image2DMS] = anon_sym_image2DMS,
  [anon_sym_image2DMSArray] = anon_sym_image2DMSArray,
  [anon_sym_image2DRect] = anon_sym_image2DRect,
  [anon_sym_image3D] = anon_sym_image3D,
  [anon_sym_imageBuffer] = anon_sym_imageBuffer,
  [anon_sym_imageCube] = anon_sym_imageCube,
  [anon_sym_imageCubeArray] = anon_sym_imageCubeArray,
  [anon_sym_impl] = anon_sym_impl,
  [anon_sym_implements] = anon_sym_implements,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_inline] = anon_sym_inline,
  [anon_sym_inout] = anon_sym_inout,
  [anon_sym_instanceof] = anon_sym_instanceof,
  [anon_sym_interface] = anon_sym_interface,
  [anon_sym_invariant] = anon_sym_invariant,
  [anon_sym_isampler1D] = anon_sym_isampler1D,
  [anon_sym_isampler1DArray] = anon_sym_isampler1DArray,
  [anon_sym_isampler2D] = anon_sym_isampler2D,
  [anon_sym_isampler2DArray] = anon_sym_isampler2DArray,
  [anon_sym_isampler2DMS] = anon_sym_isampler2DMS,
  [anon_sym_isampler2DMSArray] = anon_sym_isampler2DMSArray,
  [anon_sym_isampler2DRect] = anon_sym_isampler2DRect,
  [anon_sym_isampler3D] = anon_sym_isampler3D,
  [anon_sym_isamplerBuffer] = anon_sym_isamplerBuffer,
  [anon_sym_isamplerCube] = anon_sym_isamplerCube,
  [anon_sym_isamplerCubeArray] = anon_sym_isamplerCubeArray,
  [anon_sym_isubpassInput] = anon_sym_isubpassInput,
  [anon_sym_isubpassInputMS] = anon_sym_isubpassInputMS,
  [anon_sym_itexture1D] = anon_sym_itexture1D,
  [anon_sym_itexture1DArray] = anon_sym_itexture1DArray,
  [anon_sym_itexture2D] = anon_sym_itexture2D,
  [anon_sym_itexture2DArray] = anon_sym_itexture2DArray,
  [anon_sym_itexture2DMS] = anon_sym_itexture2DMS,
  [anon_sym_itexture2DMSArray] = anon_sym_itexture2DMSArray,
  [anon_sym_itexture2DRect] = anon_sym_itexture2DRect,
  [anon_sym_itexture3D] = anon_sym_itexture3D,
  [anon_sym_itextureBuffer] = anon_sym_itextureBuffer,
  [anon_sym_itextureCube] = anon_sym_itextureCube,
  [anon_sym_itextureCubeArray] = anon_sym_itextureCubeArray,
  [anon_sym_layout] = anon_sym_layout,
  [anon_sym_line] = anon_sym_line,
  [anon_sym_lineadj] = anon_sym_lineadj,
  [anon_sym_lowp] = anon_sym_lowp,
  [anon_sym_macro] = anon_sym_macro,
  [anon_sym_macro_rules] = anon_sym_macro_rules,
  [anon_sym_mat] = anon_sym_mat,
  [anon_sym_match] = anon_sym_match,
  [anon_sym_matrix] = anon_sym_matrix,
  [anon_sym_mediump] = anon_sym_mediump,
  [anon_sym_meta] = anon_sym_meta,
  [anon_sym_mod] = anon_sym_mod,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_move] = anon_sym_move,
  [anon_sym_mut] = anon_sym_mut,
  [anon_sym_mutable] = anon_sym_mutable,
  [anon_sym_namespace] = anon_sym_namespace,
  [anon_sym_new] = anon_sym_new,
  [anon_sym_nil] = anon_sym_nil,
  [anon_sym_noexcept] = anon_sym_noexcept,
  [anon_sym_noinline] = anon_sym_noinline,
  [anon_sym_nointerpolation] = anon_sym_nointerpolation,
  [anon_sym_noperspective] = anon_sym_noperspective,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_nullptr] = anon_sym_nullptr,
  [anon_sym_of] = anon_sym_of,
  [anon_sym_operator] = anon_sym_operator,
  [anon_sym_package] = anon_sym_package,
  [anon_sym_packoffset] = anon_sym_packoffset,
  [anon_sym_partition] = anon_sym_partition,
  [anon_sym_pass] = anon_sym_pass,
  [anon_sym_patch] = anon_sym_patch,
  [anon_sym_pixelfragment] = anon_sym_pixelfragment,
  [anon_sym_point] = anon_sym_point,
  [anon_sym_precise] = anon_sym_precise,
  [anon_sym_precision] = anon_sym_precision,
  [anon_sym_premerge] = anon_sym_premerge,
  [anon_sym_priv] = anon_sym_priv,
  [anon_sym_protected] = anon_sym_protected,
  [anon_sym_pub] = anon_sym_pub,
  [anon_sym_public] = anon_sym_public,
  [anon_sym_readonly] = anon_sym_readonly,
  [anon_sym_ref] = anon_sym_ref,
  [anon_sym_regardless] = anon_sym_regardless,
  [anon_sym_register] = anon_sym_register,
  [anon_sym_reinterpret_cast] = anon_sym_reinterpret_cast,
  [anon_sym_requires] = anon_sym_requires,
  [anon_sym_resource] = anon_sym_resource,
  [anon_sym_restrict] = anon_sym_restrict,
  [anon_sym_row_major] = anon_sym_row_major,
  [anon_sym_samper] = anon_sym_samper,
  [anon_sym_sampler1D] = anon_sym_sampler1D,
  [anon_sym_sampler1DArray] = anon_sym_sampler1DArray,
  [anon_sym_sampler1DArrayShadow] = anon_sym_sampler1DArrayShadow,
  [anon_sym_sampler1DShadow] = anon_sym_sampler1DShadow,
  [anon_sym_sampler2D] = anon_sym_sampler2D,
  [anon_sym_sampler2DArray] = anon_sym_sampler2DArray,
  [anon_sym_sampler2DArrayShadow] = anon_sym_sampler2DArrayShadow,
  [anon_sym_sampler2DMS] = anon_sym_sampler2DMS,
  [anon_sym_sampler2DMSArray] = anon_sym_sampler2DMSArray,
  [anon_sym_sampler2DRect] = anon_sym_sampler2DRect,
  [anon_sym_sampler2DRectShadow] = anon_sym_sampler2DRectShadow,
  [anon_sym_sampler2DShadow] = anon_sym_sampler2DShadow,
  [anon_sym_sampler3D] = anon_sym_sampler3D,
  [anon_sym_sampler3DRect] = anon_sym_sampler3DRect,
  [anon_sym_samplerBuffer] = anon_sym_samplerBuffer,
  [anon_sym_samplerCube] = anon_sym_samplerCube,
  [anon_sym_samplerCubeArray] = anon_sym_samplerCubeArray,
  [anon_sym_samplerCubeArrayShadow] = anon_sym_samplerCubeArrayShadow,
  [anon_sym_samplerCubeShadow] = anon_sym_samplerCubeShadow,
  [anon_sym_samplerShadow] = anon_sym_samplerShadow,
  [anon_sym_self] = anon_sym_self,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_shared] = anon_sym_shared,
  [anon_sym_signed] = anon_sym_signed,
  [anon_sym_sizeof] = anon_sym_sizeof,
  [anon_sym_smooth] = anon_sym_smooth,
  [anon_sym_snorm] = anon_sym_snorm,
  [anon_sym_stateblock] = anon_sym_stateblock,
  [anon_sym_stateblock_state] = anon_sym_stateblock_state,
  [anon_sym_static] = anon_sym_static,
  [anon_sym_static_assert] = anon_sym_static_assert,
  [anon_sym_static_cast] = anon_sym_static_cast,
  [anon_sym_std] = anon_sym_std,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_subpassInput] = anon_sym_subpassInput,
  [anon_sym_subpassInputMS] = anon_sym_subpassInputMS,
  [anon_sym_subroutine] = anon_sym_subroutine,
  [anon_sym_super] = anon_sym_super,
  [anon_sym_superp] = anon_sym_superp,
  [anon_sym_target] = anon_sym_target,
  [anon_sym_tbuffer] = anon_sym_tbuffer,
  [anon_sym_technique] = anon_sym_technique,
  [anon_sym_technique10] = anon_sym_technique10,
  [anon_sym_technique11] = anon_sym_technique11,
  [anon_sym_template] = anon_sym_template,
  [anon_sym_texture1D] = anon_sym_texture1D,
  [anon_sym_texture1DArray] = anon_sym_texture1DArray,
  [anon_sym_texture2D] = anon_sym_texture2D,
  [anon_sym_texture2DArray] = anon_sym_texture2DArray,
  [anon_sym_texture2DMS] = anon_sym_texture2DMS,
  [anon_sym_texture2DMSArray] = anon_sym_texture2DMSArray,
  [anon_sym_texture2DRect] = anon_sym_texture2DRect,
  [anon_sym_texture3D] = anon_sym_texture3D,
  [anon_sym_textureBuffer] = anon_sym_textureBuffer,
  [anon_sym_textureCube] = anon_sym_textureCube,
  [anon_sym_textureCubeArray] = anon_sym_textureCubeArray,
  [anon_sym_this] = anon_sym_this,
  [anon_sym_thread_local] = anon_sym_thread_local,
  [anon_sym_throw] = anon_sym_throw,
  [anon_sym_trait] = anon_sym_trait,
  [anon_sym_triangle] = anon_sym_triangle,
  [anon_sym_triangleadj] = anon_sym_triangleadj,
  [anon_sym_try] = anon_sym_try,
  [anon_sym_typedef] = anon_sym_typedef,
  [anon_sym_typeid] = anon_sym_typeid,
  [anon_sym_typename] = anon_sym_typename,
  [anon_sym_typeof] = anon_sym_typeof,
  [anon_sym_u16] = anon_sym_u16,
  [anon_sym_u64] = anon_sym_u64,
  [anon_sym_u8] = anon_sym_u8,
  [anon_sym_uimage1D] = anon_sym_uimage1D,
  [anon_sym_uimage1DArray] = anon_sym_uimage1DArray,
  [anon_sym_uimage2D] = anon_sym_uimage2D,
  [anon_sym_uimage2DArray] = anon_sym_uimage2DArray,
  [anon_sym_uimage2DMS] = anon_sym_uimage2DMS,
  [anon_sym_uimage2DMSArray] = anon_sym_uimage2DMSArray,
  [anon_sym_uimage2DRect] = anon_sym_uimage2DRect,
  [anon_sym_uimage3D] = anon_sym_uimage3D,
  [anon_sym_uimageBuffer] = anon_sym_uimageBuffer,
  [anon_sym_uimageCube] = anon_sym_uimageCube,
  [anon_sym_uimageCubeArray] = anon_sym_uimageCubeArray,
  [anon_sym_union] = anon_sym_union,
  [anon_sym_unless] = anon_sym_unless,
  [anon_sym_unorm] = anon_sym_unorm,
  [anon_sym_unsafe] = anon_sym_unsafe,
  [anon_sym_unsigned] = anon_sym_unsigned,
  [anon_sym_unsized] = anon_sym_unsized,
  [anon_sym_usampler1D] = anon_sym_usampler1D,
  [anon_sym_usampler1DArray] = anon_sym_usampler1DArray,
  [anon_sym_usampler2D] = anon_sym_usampler2D,
  [anon_sym_usampler2DArray] = anon_sym_usampler2DArray,
  [anon_sym_usampler2DMS] = anon_sym_usampler2DMS,
  [anon_sym_usampler2DMSArray] = anon_sym_usampler2DMSArray,
  [anon_sym_usampler2DRect] = anon_sym_usampler2DRect,
  [anon_sym_usampler3D] = anon_sym_usampler3D,
  [anon_sym_usamplerBuffer] = anon_sym_usamplerBuffer,
  [anon_sym_usamplerCube] = anon_sym_usamplerCube,
  [anon_sym_usamplerCubeArray] = anon_sym_usamplerCubeArray,
  [anon_sym_use] = anon_sym_use,
  [anon_sym_using] = anon_sym_using,
  [anon_sym_usubpassInput] = anon_sym_usubpassInput,
  [anon_sym_usubpassInputMS] = anon_sym_usubpassInputMS,
  [anon_sym_utexture1D] = anon_sym_utexture1D,
  [anon_sym_utexture1DArray] = anon_sym_utexture1DArray,
  [anon_sym_utexture2D] = anon_sym_utexture2D,
  [anon_sym_utexture2DArray] = anon_sym_utexture2DArray,
  [anon_sym_utexture2DMS] = anon_sym_utexture2DMS,
  [anon_sym_utexture2DMSArray] = anon_sym_utexture2DMSArray,
  [anon_sym_utexture2DRect] = anon_sym_utexture2DRect,
  [anon_sym_utexture3D] = anon_sym_utexture3D,
  [anon_sym_utextureBuffer] = anon_sym_utextureBuffer,
  [anon_sym_utextureCube] = anon_sym_utextureCube,
  [anon_sym_utextureCubeArray] = anon_sym_utextureCubeArray,
  [anon_sym_varying] = anon_sym_varying,
  [anon_sym_vec] = anon_sym_vec,
  [anon_sym_vector] = anon_sym_vector,
  [anon_sym_vertexfragment] = anon_sym_vertexfragment,
  [anon_sym_virtual] = anon_sym_virtual,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_volatile] = anon_sym_volatile,
  [anon_sym_wchar_t] = anon_sym_wchar_t,
  [anon_sym_wgsl] = anon_sym_wgsl,
  [anon_sym_where] = anon_sym_where,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_writeonly] = anon_sym_writeonly,
  [anon_sym_yield] = anon_sym_yield,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym__comment_token1] = aux_sym__comment_token1,
  [sym__blankspace] = sym__blankspace,
  [sym__block_comment] = sym__block_comment,
  [sym_translation_unit] = sym_translation_unit,
  [sym_global_directive] = sym_global_directive,
  [sym_bool_literal] = sym_bool_literal,
  [sym_int_literal] = sym_int_literal,
  [sym_float_literal] = sym_float_literal,
  [sym_decimal_float_literal] = sym_decimal_float_literal,
  [sym_hex_float_literal] = sym_hex_float_literal,
  [sym_const_literal] = sym_const_literal,
  [sym_attribute] = sym_attribute,
  [sym_literal_or_ident] = sym_literal_or_ident,
  [sym_array_type_decl] = sym_array_type_decl,
  [sym_element_count_expression] = sym_element_count_expression,
  [sym_struct_decl] = sym_struct_decl,
  [sym_struct_body_decl] = sym_struct_body_decl,
  [sym_struct_member] = sym_struct_member,
  [sym_address_space] = sym_address_space,
  [sym_texture_sampler_types] = sym_texture_sampler_types,
  [sym_sampler_type] = sym_sampler_type,
  [sym_sampled_texture_type] = sym_sampled_texture_type,
  [sym_multisampled_texture_type] = sym_multisampled_texture_type,
  [sym_storage_texture_type] = sym_storage_texture_type,
  [sym_depth_texture_type] = sym_depth_texture_type,
  [sym_type_alias_decl] = sym_type_alias_decl,
  [sym_type_decl] = sym_type_decl,
  [sym_type_decl_without_ident] = sym_type_decl_without_ident,
  [sym_vec_prefix] = sym_vec_prefix,
  [sym_mat_prefix] = sym_mat_prefix,
  [sym_variable_statement] = sym_variable_statement,
  [sym_variable_decl] = sym_variable_decl,
  [sym_variable_ident_decl] = sym_variable_ident_decl,
  [sym_variable_qualifier] = sym_variable_qualifier,
  [sym_global_variable_decl] = sym_global_variable_decl,
  [sym_global_constant_decl] = sym_global_constant_decl,
  [sym_primary_expression] = sym_primary_expression,
  [sym_callable] = sym_callable,
  [sym_paren_expression] = sym_paren_expression,
  [sym_argument_expression_list] = sym_argument_expression_list,
  [sym_postfix_expression] = sym_postfix_expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_singular_expression] = sym_singular_expression,
  [sym_lhs_expression] = sym_lhs_expression,
  [sym_core_lhs_expression] = sym_core_lhs_expression,
  [sym_multiplicative_expression] = sym_multiplicative_expression,
  [sym_additive_expression] = sym_additive_expression,
  [sym_shift_expression] = sym_shift_expression,
  [sym_relational_expression] = sym_relational_expression,
  [sym_short_circuit_and_expression] = sym_short_circuit_and_expression,
  [sym_short_circuit_or_expression] = sym_short_circuit_or_expression,
  [sym_binary_or_expression] = sym_binary_or_expression,
  [sym_binary_and_expression] = sym_binary_and_expression,
  [sym_binary_xor_expression] = sym_binary_xor_expression,
  [sym_bitwise_expression] = sym_bitwise_expression,
  [sym_expression] = sym_expression,
  [sym_compound_statement] = sym_compound_statement,
  [sym_assignment_statement] = sym_assignment_statement,
  [sym_compound_assignment_operator] = sym_compound_assignment_operator,
  [sym_increment_statement] = sym_increment_statement,
  [sym_decrement_statement] = sym_decrement_statement,
  [sym_if_statement] = sym_if_statement,
  [sym_else_statement] = sym_else_statement,
  [sym_switch_statement] = sym_switch_statement,
  [sym_switch_body] = sym_switch_body,
  [sym_case_selectors] = sym_case_selectors,
  [sym_case_compound_statement] = sym_case_compound_statement,
  [sym_fallthrough_statement] = sym_fallthrough_statement,
  [sym_loop_statement] = sym_loop_statement,
  [sym_for_statement] = sym_for_statement,
  [sym_for_header] = sym_for_header,
  [sym_for_init] = sym_for_init,
  [sym_for_update] = sym_for_update,
  [sym_while_statement] = sym_while_statement,
  [sym_break_statement] = sym_break_statement,
  [sym_break_if_statement] = sym_break_if_statement,
  [sym_continue_statement] = sym_continue_statement,
  [sym_continuing_statement] = sym_continuing_statement,
  [sym_continuing_compound_statement] = sym_continuing_compound_statement,
  [sym_return_statement] = sym_return_statement,
  [sym_func_call_statement] = sym_func_call_statement,
  [sym_static_assert_statement] = sym_static_assert_statement,
  [sym_statement] = sym_statement,
  [sym_function_decl] = sym_function_decl,
  [sym_function_header] = sym_function_header,
  [sym_param_list] = sym_param_list,
  [sym_param] = sym_param,
  [sym_enable_directive] = sym_enable_directive,
  [sym_access_mode] = sym_access_mode,
  [sym_texel_format] = sym_texel_format,
  [sym__comment] = sym__comment,
  [aux_sym_translation_unit_repeat1] = aux_sym_translation_unit_repeat1,
  [aux_sym_translation_unit_repeat2] = aux_sym_translation_unit_repeat2,
  [aux_sym_attribute_repeat1] = aux_sym_attribute_repeat1,
  [aux_sym_struct_body_decl_repeat1] = aux_sym_struct_body_decl_repeat1,
  [aux_sym_struct_member_repeat1] = aux_sym_struct_member_repeat1,
  [aux_sym_argument_expression_list_repeat1] = aux_sym_argument_expression_list_repeat1,
  [aux_sym_lhs_expression_repeat1] = aux_sym_lhs_expression_repeat1,
  [aux_sym_compound_statement_repeat1] = aux_sym_compound_statement_repeat1,
  [aux_sym_switch_statement_repeat1] = aux_sym_switch_statement_repeat1,
  [aux_sym_case_selectors_repeat1] = aux_sym_case_selectors_repeat1,
  [aux_sym_param_list_repeat1] = aux_sym_param_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_int_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_int_literal_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_int_literal_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_decimal_float_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_decimal_float_literal_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_decimal_float_literal_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_decimal_float_literal_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_decimal_float_literal_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hex_float_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hex_float_literal_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hex_float_literal_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_read] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_write] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_read_write] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rgba8unorm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rgba8snorm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rgba8uint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rgba8sint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rgba16uint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rgba16sint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rgba16float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_r32uint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_r32sint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_r32float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rg32uint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rg32sint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rg32float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rgba32uint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rgba32sint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rgba32float] = {
    .visible = true,
    .named = false,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_atomic] = {
    .visible = true,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_float32] = {
    .visible = true,
    .named = true,
  },
  [sym_float16] = {
    .visible = true,
    .named = true,
  },
  [sym_int32] = {
    .visible = true,
    .named = true,
  },
  [sym_mat2x2] = {
    .visible = true,
    .named = true,
  },
  [sym_mat2x3] = {
    .visible = true,
    .named = true,
  },
  [sym_mat2x4] = {
    .visible = true,
    .named = true,
  },
  [sym_mat3x2] = {
    .visible = true,
    .named = true,
  },
  [sym_mat3x3] = {
    .visible = true,
    .named = true,
  },
  [sym_mat3x4] = {
    .visible = true,
    .named = true,
  },
  [sym_mat4x2] = {
    .visible = true,
    .named = true,
  },
  [sym_mat4x3] = {
    .visible = true,
    .named = true,
  },
  [sym_mat4x4] = {
    .visible = true,
    .named = true,
  },
  [sym_override] = {
    .visible = true,
    .named = true,
  },
  [sym_pointer] = {
    .visible = true,
    .named = true,
  },
  [sym_sampler] = {
    .visible = true,
    .named = true,
  },
  [sym_sampler_comparison] = {
    .visible = true,
    .named = true,
  },
  [sym_staticAssert] = {
    .visible = true,
    .named = true,
  },
  [sym_struct] = {
    .visible = true,
    .named = true,
  },
  [sym_texture_1d] = {
    .visible = true,
    .named = true,
  },
  [sym_texture_2d] = {
    .visible = true,
    .named = true,
  },
  [sym_texture_2d_array] = {
    .visible = true,
    .named = true,
  },
  [sym_texture_3d] = {
    .visible = true,
    .named = true,
  },
  [sym_texture_cube] = {
    .visible = true,
    .named = true,
  },
  [sym_texture_cube_array] = {
    .visible = true,
    .named = true,
  },
  [sym_texture_multisampled_2d] = {
    .visible = true,
    .named = true,
  },
  [sym_texture_storage_1d] = {
    .visible = true,
    .named = true,
  },
  [sym_texture_storage_2d] = {
    .visible = true,
    .named = true,
  },
  [sym_texture_storage_2d_array] = {
    .visible = true,
    .named = true,
  },
  [sym_texture_storage_3d] = {
    .visible = true,
    .named = true,
  },
  [sym_texture_depth_2d] = {
    .visible = true,
    .named = true,
  },
  [sym_texture_depth_2d_array] = {
    .visible = true,
    .named = true,
  },
  [sym_texture_depth_cube] = {
    .visible = true,
    .named = true,
  },
  [sym_texture_depth_cube_array] = {
    .visible = true,
    .named = true,
  },
  [sym_texture_depth_multisampled_2d] = {
    .visible = true,
    .named = true,
  },
  [sym_uint32] = {
    .visible = true,
    .named = true,
  },
  [sym_vec2] = {
    .visible = true,
    .named = true,
  },
  [sym_vec3] = {
    .visible = true,
    .named = true,
  },
  [sym_vec4] = {
    .visible = true,
    .named = true,
  },
  [sym_bitcast] = {
    .visible = true,
    .named = true,
  },
  [sym_break] = {
    .visible = true,
    .named = true,
  },
  [sym_case] = {
    .visible = true,
    .named = true,
  },
  [sym_const] = {
    .visible = true,
    .named = true,
  },
  [sym_continue] = {
    .visible = true,
    .named = true,
  },
  [sym_continuing] = {
    .visible = true,
    .named = true,
  },
  [sym_default] = {
    .visible = true,
    .named = true,
  },
  [sym_discard] = {
    .visible = true,
    .named = true,
  },
  [sym_else] = {
    .visible = true,
    .named = true,
  },
  [sym_enable] = {
    .visible = true,
    .named = true,
  },
  [sym_fallthrough] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_fn] = {
    .visible = true,
    .named = true,
  },
  [sym_for] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_if] = {
    .visible = true,
    .named = true,
  },
  [sym_let] = {
    .visible = true,
    .named = true,
  },
  [sym_loop] = {
    .visible = true,
    .named = true,
  },
  [sym_private] = {
    .visible = true,
    .named = true,
  },
  [sym_return] = {
    .visible = true,
    .named = true,
  },
  [sym_storage] = {
    .visible = true,
    .named = true,
  },
  [sym_switch] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_uniform] = {
    .visible = true,
    .named = true,
  },
  [sym_var] = {
    .visible = true,
    .named = true,
  },
  [sym_while] = {
    .visible = true,
    .named = true,
  },
  [sym_workgroup] = {
    .visible = true,
    .named = true,
  },
  [sym_and] = {
    .visible = true,
    .named = true,
  },
  [sym_and_and] = {
    .visible = true,
    .named = true,
  },
  [sym_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_attr] = {
    .visible = true,
    .named = true,
  },
  [sym_forward_slash] = {
    .visible = true,
    .named = true,
  },
  [sym_bang] = {
    .visible = true,
    .named = true,
  },
  [sym_bracket_left] = {
    .visible = true,
    .named = true,
  },
  [sym_bracket_right] = {
    .visible = true,
    .named = true,
  },
  [sym_brace_left] = {
    .visible = true,
    .named = true,
  },
  [sym_brace_right] = {
    .visible = true,
    .named = true,
  },
  [sym_colon] = {
    .visible = true,
    .named = true,
  },
  [sym_comma] = {
    .visible = true,
    .named = true,
  },
  [sym_equal] = {
    .visible = true,
    .named = true,
  },
  [sym_equal_equal] = {
    .visible = true,
    .named = true,
  },
  [sym_not_equal] = {
    .visible = true,
    .named = true,
  },
  [sym_greater_than] = {
    .visible = true,
    .named = true,
  },
  [sym_greater_than_equal] = {
    .visible = true,
    .named = true,
  },
  [sym_shift_right] = {
    .visible = true,
    .named = true,
  },
  [sym_less_than] = {
    .visible = true,
    .named = true,
  },
  [sym_less_than_equal] = {
    .visible = true,
    .named = true,
  },
  [sym_shift_left] = {
    .visible = true,
    .named = true,
  },
  [sym_modulo] = {
    .visible = true,
    .named = true,
  },
  [sym_minus] = {
    .visible = true,
    .named = true,
  },
  [sym_minus_minus] = {
    .visible = true,
    .named = true,
  },
  [sym_period] = {
    .visible = true,
    .named = true,
  },
  [sym_plus] = {
    .visible = true,
    .named = true,
  },
  [sym_plus_plus] = {
    .visible = true,
    .named = true,
  },
  [sym_or] = {
    .visible = true,
    .named = true,
  },
  [sym_or_or] = {
    .visible = true,
    .named = true,
  },
  [sym_paren_left] = {
    .visible = true,
    .named = true,
  },
  [sym_paren_right] = {
    .visible = true,
    .named = true,
  },
  [sym_semicolon] = {
    .visible = true,
    .named = true,
  },
  [sym_star] = {
    .visible = true,
    .named = true,
  },
  [sym_tilde] = {
    .visible = true,
    .named = true,
  },
  [sym_underscore] = {
    .visible = true,
    .named = true,
  },
  [sym_xor] = {
    .visible = true,
    .named = true,
  },
  [sym_plus_equal] = {
    .visible = true,
    .named = true,
  },
  [sym_minus_equal] = {
    .visible = true,
    .named = true,
  },
  [sym_times_equal] = {
    .visible = true,
    .named = true,
  },
  [sym_division_equal] = {
    .visible = true,
    .named = true,
  },
  [sym_modulo_equal] = {
    .visible = true,
    .named = true,
  },
  [sym_and_equal] = {
    .visible = true,
    .named = true,
  },
  [sym_or_equal] = {
    .visible = true,
    .named = true,
  },
  [sym_xor_equal] = {
    .visible = true,
    .named = true,
  },
  [sym_shift_right_equal] = {
    .visible = true,
    .named = true,
  },
  [sym_shift_left_equal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AppendStructuredBuffer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BlendState] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Buffer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ByteAddressBuffer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CompileShader] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ComputeShader] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ConsumeStructuredBuffer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DepthStencilState] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DepthStencilView] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DomainShader] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GeometryShader] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Hullshader] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_InputPatch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LineStream] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NULL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OutputPatch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PixelShader] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PointStream] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RWBuffer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RWByteAddressBuffer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RWStructuredBuffer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RWTexture1D] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RWTexture1DArray] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RWTexture2D] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RWTexture2DArray] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RWTexture3D] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RasterizerState] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RenderTargetView] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SamplerComparisonState] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SamplerState] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Self] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_StructuredBuffer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Texture1D] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Texture1DArray] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Texture2D] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Texture2DArray] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Texture2DMS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Texture2DMSArray] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Texture3D] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TextureCube] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TextureCubeArray] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TriangleStream] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VertexShader] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_abstract] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_active] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alignas] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alignof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_asm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_asm_fragment] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_async] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_atomic_uint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_attribute] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_auto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_await] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_become] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bf16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_binding_array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cast] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_catch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cbuffer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_char] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_co_await] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_co_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_co_yield] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_coherent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_column_major] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_common] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_compile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_compile_fragment] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_concept] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const_cast] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_consteval] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_constexpr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_constinit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_crate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_debugger] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_decltype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_delete] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_demote] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_demote_to_helper] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dynamic_cast] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_explicit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_export] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extends] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extern] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_external] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_filter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_final] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_finally] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fixed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_friend] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fvec2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fvec3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fvec4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fxgroup] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_get] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_goto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_groupshared] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_handle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_highp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hvec2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hvec3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hvec4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iimage1D] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iimage1DArray] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iimage2D] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iimage2DArray] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iimage2DMS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iimage2DMSArray] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iimage2DRect] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iimage3D] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iimageBuffer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iimageCube] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iimageCubeArray] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_image1D] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_image1DArray] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_image2D] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_image2DArray] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_image2DMS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_image2DMSArray] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_image2DRect] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_image3D] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_imageBuffer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_imageCube] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_imageCubeArray] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_impl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_implements] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_instanceof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_interface] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_invariant] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isampler1D] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isampler1DArray] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isampler2D] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isampler2DArray] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isampler2DMS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isampler2DMSArray] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isampler2DRect] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isampler3D] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isamplerBuffer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isamplerCube] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isamplerCubeArray] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isubpassInput] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isubpassInputMS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_itexture1D] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_itexture1DArray] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_itexture2D] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_itexture2DArray] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_itexture2DMS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_itexture2DMSArray] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_itexture2DRect] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_itexture3D] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_itextureBuffer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_itextureCube] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_itextureCubeArray] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_layout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_line] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lineadj] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lowp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_macro] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_macro_rules] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_match] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_matrix] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mediump] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_meta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mod] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_move] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mut] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mutable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_namespace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_new] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nil] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_noexcept] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_noinline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nointerpolation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_noperspective] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nullptr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_of] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_operator] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_package] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_packoffset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_partition] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pass] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_patch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pixelfragment] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_point] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_precise] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_precision] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_premerge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_priv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_protected] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pub] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_public] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_readonly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ref] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_regardless] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_register] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reinterpret_cast] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_requires] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_resource] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_restrict] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_row_major] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_samper] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sampler1D] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sampler1DArray] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sampler1DArrayShadow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sampler1DShadow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sampler2D] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sampler2DArray] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sampler2DArrayShadow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sampler2DMS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sampler2DMSArray] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sampler2DRect] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sampler2DRectShadow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sampler2DShadow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sampler3D] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sampler3DRect] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_samplerBuffer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_samplerCube] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_samplerCubeArray] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_samplerCubeArrayShadow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_samplerCubeShadow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_samplerShadow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_self] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shared] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_signed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sizeof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_smooth] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_snorm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stateblock] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stateblock_state] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_static] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_static_assert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_static_cast] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_std] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_subpassInput] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_subpassInputMS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_subroutine] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_super] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_superp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_target] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tbuffer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_technique] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_technique10] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_technique11] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_template] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_texture1D] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_texture1DArray] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_texture2D] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_texture2DArray] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_texture2DMS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_texture2DMSArray] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_texture2DRect] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_texture3D] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_textureBuffer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_textureCube] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_textureCubeArray] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_this] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_thread_local] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_throw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trait] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_triangle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_triangleadj] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_try] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_typedef] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_typeid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_typename] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_typeof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uimage1D] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uimage1DArray] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uimage2D] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uimage2DArray] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uimage2DMS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uimage2DMSArray] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uimage2DRect] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uimage3D] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uimageBuffer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uimageCube] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uimageCubeArray] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_union] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unless] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unorm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unsafe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unsigned] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unsized] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_usampler1D] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_usampler1DArray] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_usampler2D] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_usampler2DArray] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_usampler2DMS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_usampler2DMSArray] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_usampler2DRect] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_usampler3D] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_usamplerBuffer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_usamplerCube] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_usamplerCubeArray] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_use] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_using] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_usubpassInput] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_usubpassInputMS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_utexture1D] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_utexture1DArray] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_utexture2D] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_utexture2DArray] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_utexture2DMS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_utexture2DMSArray] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_utexture2DRect] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_utexture3D] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_utextureBuffer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_utextureCube] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_utextureCubeArray] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_varying] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vector] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vertexfragment] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_virtual] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_void] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_volatile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wchar_t] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wgsl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_where] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_writeonly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yield] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__blankspace] = {
    .visible = false,
    .named = true,
  },
  [sym__block_comment] = {
    .visible = false,
    .named = true,
  },
  [sym_translation_unit] = {
    .visible = true,
    .named = true,
  },
  [sym_global_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_bool_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_int_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_float_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal_float_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_float_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_const_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_literal_or_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_array_type_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_element_count_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_body_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_member] = {
    .visible = true,
    .named = true,
  },
  [sym_address_space] = {
    .visible = true,
    .named = true,
  },
  [sym_texture_sampler_types] = {
    .visible = true,
    .named = true,
  },
  [sym_sampler_type] = {
    .visible = true,
    .named = true,
  },
  [sym_sampled_texture_type] = {
    .visible = true,
    .named = true,
  },
  [sym_multisampled_texture_type] = {
    .visible = true,
    .named = true,
  },
  [sym_storage_texture_type] = {
    .visible = true,
    .named = true,
  },
  [sym_depth_texture_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type_alias_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_type_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_type_decl_without_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_vec_prefix] = {
    .visible = true,
    .named = true,
  },
  [sym_mat_prefix] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_ident_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_qualifier] = {
    .visible = true,
    .named = true,
  },
  [sym_global_variable_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_global_constant_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_primary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_callable] = {
    .visible = true,
    .named = true,
  },
  [sym_paren_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_expression_list] = {
    .visible = true,
    .named = true,
  },
  [sym_postfix_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_singular_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_lhs_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_core_lhs_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_multiplicative_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_additive_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_shift_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_relational_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_short_circuit_and_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_short_circuit_or_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_or_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_and_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_xor_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_bitwise_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_compound_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_compound_assignment_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_increment_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_decrement_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_else_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_switch_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_switch_body] = {
    .visible = true,
    .named = true,
  },
  [sym_case_selectors] = {
    .visible = true,
    .named = true,
  },
  [sym_case_compound_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_fallthrough_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_loop_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_for_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_for_header] = {
    .visible = true,
    .named = true,
  },
  [sym_for_init] = {
    .visible = true,
    .named = true,
  },
  [sym_for_update] = {
    .visible = true,
    .named = true,
  },
  [sym_while_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_break_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_break_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_continue_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_continuing_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_continuing_compound_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_func_call_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_static_assert_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_function_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_function_header] = {
    .visible = true,
    .named = true,
  },
  [sym_param_list] = {
    .visible = true,
    .named = true,
  },
  [sym_param] = {
    .visible = true,
    .named = true,
  },
  [sym_enable_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_access_mode] = {
    .visible = true,
    .named = true,
  },
  [sym_texel_format] = {
    .visible = true,
    .named = true,
  },
  [sym__comment] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_translation_unit_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_translation_unit_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attribute_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_body_decl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_member_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_expression_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_lhs_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_compound_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_switch_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_case_selectors_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_param_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_ident_character_set_1(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 931
            ? (c < 748
              ? (c < 192
                ? (c < 170
                  ? (c < 'a'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= 'z')
                  : (c <= 170 || (c < 186
                    ? c == 181
                    : c <= 186)))
                : (c <= 214 || (c < 710
                  ? (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))))
              : (c <= 748 || (c < 895
                ? (c < 886
                  ? (c < 880
                    ? c == 750
                    : c <= 884)
                  : (c <= 887 || (c >= 891 && c <= 893)))
                : (c <= 895 || (c < 908
                  ? (c < 904
                    ? c == 902
                    : c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))))))
            : (c <= 1013 || (c < 1649
              ? (c < 1376
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || c == 1369))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_ident_character_set_2(int32_t c) {
  return (c < 43616
    ? (c < 3782
      ? (c < 2748
        ? (c < 2045
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'a' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 891
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)))))))))
          : (c <= 2045 || (c < 2558
            ? (c < 2451
              ? (c < 2200
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)))
                : (c <= 2273 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)
                  : (c <= 2435 || (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)))))
              : (c <= 2472 || (c < 2507
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)))
                : (c <= 2510 || (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c < 2556
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2556)))))))
            : (c <= 2558 || (c < 2635
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)))))
              : (c <= 2637 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))))))))))
        : (c <= 2757 || (c < 3168
          ? (c < 2958
            ? (c < 2866
              ? (c < 2809
                ? (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))
                : (c <= 2815 || (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))))
              : (c <= 2867 || (c < 2908
                ? (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)))
                : (c <= 2909 || (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))))))
            : (c <= 2960 || (c < 3031
              ? (c < 2984
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))
                : (c <= 2986 || (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))))
              : (c <= 3031 || (c < 3132
                ? (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)
                  : (c <= 3158 || (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)))))))))
          : (c <= 3171 || (c < 3450
            ? (c < 3293
              ? (c < 3242
                ? (c < 3205
                  ? (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))
                : (c <= 3251 || (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)))))
              : (c <= 3294 || (c < 3346
                ? (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)))
                : (c <= 3396 || (c < 3412
                  ? (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)
                  : (c <= 3415 || (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)))))))
            : (c <= 3455 || (c < 3570
              ? (c < 3520
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)
                  : (c <= 3505 || (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)))
                : (c <= 3526 || (c < 3542
                  ? (c < 3535
                    ? c == 3530
                    : c <= 3540)
                  : (c <= 3542 || (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)))))
              : (c <= 3571 || (c < 3718
                ? (c < 3664
                  ? (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)
                  : (c <= 3673 || (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)))
                : (c <= 3722 || (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))))))))))
      : (c <= 3782 || (c < 8025
        ? (c < 5888
          ? (c < 4688
            ? (c < 3953
              ? (c < 3872
                ? (c < 3804
                  ? (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)
                  : (c <= 3807 || (c < 3864
                    ? c == 3840
                    : c <= 3865)))
                : (c <= 3881 || (c < 3897
                  ? (c < 3895
                    ? c == 3893
                    : c <= 3895)
                  : (c <= 3897 || (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)))))
              : (c <= 3972 || (c < 4256
                ? (c < 4038
                  ? (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)
                  : (c <= 4038 || (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))))))
            : (c <= 4694 || (c < 4882
              ? (c < 4786
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))))
              : (c <= 4885 || (c < 5112
                ? (c < 4969
                  ? (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)
                  : (c <= 4977 || (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)))))))))
          : (c <= 5909 || (c < 6688
            ? (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)))
                : (c <= 6099 || (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6109)
                  : (c <= 6121 || (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)))))
              : (c <= 6264 || (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))))
            : (c <= 6750 || (c < 7232
              ? (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)))))
              : (c <= 7241 || (c < 7380
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)))
                : (c <= 7418 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)))))))))))
        : (c <= 8025 || (c < 11720
          ? (c < 8458
            ? (c < 8178
              ? (c < 8126
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)))
                : (c <= 8126 || (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))))
              : (c <= 8180 || (c < 8336
                ? (c < 8276
                  ? (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)
                  : (c <= 8276 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8421
                  ? (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)
                  : (c <= 8432 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))))))
            : (c <= 8467 || (c < 11499
              ? (c < 8490
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || (c < 8488
                    ? c == 8486
                    : c <= 8488)))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)))))
              : (c <= 11507 || (c < 11647
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))))))))
          : (c <= 11726 || (c < 42623
            ? (c < 12540
              ? (c < 12337
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)))
                : (c <= 12341 || (c < 12441
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12442 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))))
              : (c <= 12543 || (c < 19968
                ? (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)))
                : (c <= 42124 || (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)))))))
            : (c <= 42737 || (c < 43232
              ? (c < 42965
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)))
                : (c <= 42969 || (c < 43072
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43123 || (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)))))
              : (c <= 43255 || (c < 43471
                ? (c < 43312
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43309)
                  : (c <= 43347 || (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))))))))))
    : (c <= 43638 || (c < 71453
      ? (c < 67639
        ? (c < 65345
          ? (c < 64312
            ? (c < 43888
              ? (c < 43785
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)))))
              : (c <= 44010 || (c < 63744
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)))))))
            : (c <= 64316 || (c < 65075
              ? (c < 64612
                ? (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)))))
              : (c <= 65076 || (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65101 && c <= 65103)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65296
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65305 || (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)))))))))
          : (c <= 65370 || (c < 66513
            ? (c < 65664
              ? (c < 65536
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)))))
              : (c <= 65786 || (c < 66304
                ? (c < 66176
                  ? (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)
                  : (c <= 66204 || (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)
                  : (c <= 66461 || (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)))))))
            : (c <= 66517 || (c < 66979
              ? (c < 66864
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)))
                : (c <= 66915 || (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)))))
              : (c <= 66993 || (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || (c < 67594
                    ? c == 67592
                    : c <= 67637)))))))))))
        : (c <= 67640 || (c < 69956
          ? (c < 68448
            ? (c < 68101
              ? (c < 67828
                ? (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)))
                : (c <= 67829 || (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)))))
              : (c <= 68102 || (c < 68192
                ? (c < 68121
                  ? (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)))
                : (c <= 68220 || (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))))))
            : (c <= 68466 || (c < 69424
              ? (c < 68912
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))
                : (c <= 68921 || (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))))
              : (c <= 69456 || (c < 69759
                ? (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)
                  : (c <= 69622 || (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)))
                : (c <= 69818 || (c < 69872
                  ? (c < 69840
                    ? c == 69826
                    : c <= 69864)
                  : (c <= 69881 || (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)))))))))
          : (c <= 69959 || (c < 70459
            ? (c < 70282
              ? (c < 70108
                ? (c < 70016
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70003)
                    : c <= 70006)
                  : (c <= 70084 || (c < 70094
                    ? (c >= 70089 && c <= 70092)
                    : c <= 70106)))
                : (c <= 70108 || (c < 70206
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70199)
                  : (c <= 70206 || (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)))))
              : (c <= 70285 || (c < 70405
                ? (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70378 || (c < 70400
                    ? (c >= 70384 && c <= 70393)
                    : c <= 70403)))
                : (c <= 70412 || (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))))))
            : (c <= 70468 || (c < 70855
              ? (c < 70502
                ? (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || (c < 70493
                    ? c == 70487
                    : c <= 70499)))
                : (c <= 70508 || (c < 70736
                  ? (c < 70656
                    ? (c >= 70512 && c <= 70516)
                    : c <= 70730)
                  : (c <= 70745 || (c < 70784
                    ? (c >= 70750 && c <= 70753)
                    : c <= 70853)))))
              : (c <= 70855 || (c < 71236
                ? (c < 71096
                  ? (c < 71040
                    ? (c >= 70864 && c <= 70873)
                    : c <= 71093)
                  : (c <= 71104 || (c < 71168
                    ? (c >= 71128 && c <= 71133)
                    : c <= 71232)))
                : (c <= 71236 || (c < 71360
                  ? (c < 71296
                    ? (c >= 71248 && c <= 71257)
                    : c <= 71352)
                  : (c <= 71369 || (c >= 71424 && c <= 71450)))))))))))))
      : (c <= 71467 || (c < 119973
        ? (c < 77824
          ? (c < 72760
            ? (c < 72016
              ? (c < 71945
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71472 && c <= 71481)
                    : c <= 71494)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))))
              : (c <= 72025 || (c < 72263
                ? (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72254)))
                : (c <= 72263 || (c < 72368
                  ? (c < 72349
                    ? (c >= 72272 && c <= 72345)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)))))))
            : (c <= 72768 || (c < 73056
              ? (c < 72968
                ? (c < 72850
                  ? (c < 72818
                    ? (c >= 72784 && c <= 72793)
                    : c <= 72847)
                  : (c <= 72871 || (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73020
                  ? (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)
                  : (c <= 73021 || (c < 73040
                    ? (c >= 73023 && c <= 73031)
                    : c <= 73049)))))
              : (c <= 73061 || (c < 73440
                ? (c < 73104
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73102)
                  : (c <= 73105 || (c < 73120
                    ? (c >= 73107 && c <= 73112)
                    : c <= 73129)))
                : (c <= 73462 || (c < 74752
                  ? (c < 73728
                    ? c == 73648
                    : c <= 74649)
                  : (c <= 74862 || (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)))))))))
          : (c <= 78894 || (c < 110576
            ? (c < 93027
              ? (c < 92864
                ? (c < 92736
                  ? (c < 92160
                    ? (c >= 82944 && c <= 83526)
                    : c <= 92728)
                  : (c <= 92766 || (c < 92784
                    ? (c >= 92768 && c <= 92777)
                    : c <= 92862)))
                : (c <= 92873 || (c < 92928
                  ? (c < 92912
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92916)
                  : (c <= 92982 || (c < 93008
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93017)))))
              : (c <= 93047 || (c < 94176
                ? (c < 93952
                  ? (c < 93760
                    ? (c >= 93053 && c <= 93071)
                    : c <= 93823)
                  : (c <= 94026 || (c < 94095
                    ? (c >= 94031 && c <= 94087)
                    : c <= 94111)))
                : (c <= 94177 || (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))))))
            : (c <= 110579 || (c < 118528
              ? (c < 110960
                ? (c < 110592
                  ? (c < 110589
                    ? (c >= 110581 && c <= 110587)
                    : c <= 110590)
                  : (c <= 110882 || (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)))
                : (c <= 111355 || (c < 113792
                  ? (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)
                  : (c <= 113800 || (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)))))
              : (c <= 118573 || (c < 119210
                ? (c < 119149
                  ? (c < 119141
                    ? (c >= 118576 && c <= 118598)
                    : c <= 119145)
                  : (c <= 119154 || (c < 119173
                    ? (c >= 119163 && c <= 119170)
                    : c <= 119179)))
                : (c <= 119213 || (c < 119894
                  ? (c < 119808
                    ? (c >= 119362 && c <= 119364)
                    : c <= 119892)
                  : (c <= 119964 || (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(40);
      if (lookahead == '!') ADVANCE(75);
      if (lookahead == '%') ADVANCE(99);
      if (lookahead == '&') ADVANCE(67);
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '*') ADVANCE(116);
      if (lookahead == '+') ADVANCE(106);
      if (lookahead == ',') ADVANCE(81);
      if (lookahead == '-') ADVANCE(101);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == '/') ADVANCE(73);
      if (lookahead == '0') ADVANCE(44);
      if (lookahead == ':') ADVANCE(80);
      if (lookahead == ';') ADVANCE(114);
      if (lookahead == '<') ADVANCE(92);
      if (lookahead == '=') ADVANCE(83);
      if (lookahead == '>') ADVANCE(88);
      if (lookahead == '@') ADVANCE(71);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(77);
      if (lookahead == '^') ADVANCE(120);
      if (lookahead == '_') ADVANCE(118);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == '|') ADVANCE(109);
      if (lookahead == '}') ADVANCE(79);
      if (lookahead == '~') ADVANCE(117);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 133 ||
          lookahead == 8206 ||
          lookahead == 8207 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(137);
      if (sym_ident_character_set_1(lookahead)) ADVANCE(131);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == '&') ADVANCE(66);
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '*') ADVANCE(115);
      if (lookahead == '+') ADVANCE(105);
      if (lookahead == ',') ADVANCE(81);
      if (lookahead == '-') ADVANCE(100);
      if (lookahead == '.') ADVANCE(103);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(80);
      if (lookahead == ';') ADVANCE(114);
      if (lookahead == '<') ADVANCE(93);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '>') ADVANCE(88);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(77);
      if (lookahead == '^') ADVANCE(119);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == '|') ADVANCE(110);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 133 ||
          lookahead == 8206 ||
          lookahead == 8207 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(137);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '*') ADVANCE(115);
      if (lookahead == '+') ADVANCE(105);
      if (lookahead == ',') ADVANCE(81);
      if (lookahead == '-') ADVANCE(100);
      if (lookahead == '.') ADVANCE(103);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(80);
      if (lookahead == ';') ADVANCE(114);
      if (lookahead == '<') ADVANCE(94);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '>') ADVANCE(87);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(77);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == '|') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 133 ||
          lookahead == 8206 ||
          lookahead == 8207 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(137);
      END_STATE();
    case 3:
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == '&') ADVANCE(65);
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '*') ADVANCE(115);
      if (lookahead == '+') ADVANCE(105);
      if (lookahead == ',') ADVANCE(81);
      if (lookahead == '-') ADVANCE(100);
      if (lookahead == '.') ADVANCE(103);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(80);
      if (lookahead == ';') ADVANCE(114);
      if (lookahead == '>') ADVANCE(86);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(77);
      if (lookahead == '^') ADVANCE(119);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == '|') ADVANCE(108);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 133 ||
          lookahead == 8206 ||
          lookahead == 8207 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(137);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(15);
      if (lookahead == '&') ADVANCE(68);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '+') ADVANCE(7);
      if (lookahead == ',') ADVANCE(81);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '.') ADVANCE(103);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ':') ADVANCE(80);
      if (lookahead == ';') ADVANCE(114);
      if (lookahead == '<') ADVANCE(13);
      if (lookahead == '=') ADVANCE(82);
      if (lookahead == '>') ADVANCE(23);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(77);
      if (lookahead == '^') ADVANCE(19);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == '|') ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 133 ||
          lookahead == 8206 ||
          lookahead == 8207 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(137);
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(15);
      if (lookahead == '&') ADVANCE(16);
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '+') ADVANCE(7);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(103);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '<') ADVANCE(13);
      if (lookahead == '=') ADVANCE(82);
      if (lookahead == '>') ADVANCE(23);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == '^') ADVANCE(19);
      if (lookahead == '|') ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 133 ||
          lookahead == 8206 ||
          lookahead == 8207 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(137);
      END_STATE();
    case 6:
      if (lookahead == '&') ADVANCE(69);
      END_STATE();
    case 7:
      if (lookahead == '+') ADVANCE(107);
      if (lookahead == '=') ADVANCE(121);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(102);
      if (lookahead == '=') ADVANCE(122);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(102);
      if (lookahead == '=') ADVANCE(122);
      if (lookahead == '>') ADVANCE(70);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == '=') ADVANCE(124);
      END_STATE();
    case 13:
      if (lookahead == '<') ADVANCE(21);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(85);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(125);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(126);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(123);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(84);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(128);
      END_STATE();
    case 20:
      if (lookahead == '=') ADVANCE(127);
      END_STATE();
    case 21:
      if (lookahead == '=') ADVANCE(130);
      END_STATE();
    case 22:
      if (lookahead == '=') ADVANCE(129);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == '|') ADVANCE(111);
      END_STATE();
    case 25:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 26:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 27:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 28:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 29:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 30:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      END_STATE();
    case 39:
      if (eof) ADVANCE(40);
      if (lookahead == '!') ADVANCE(74);
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == '&') ADVANCE(65);
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '*') ADVANCE(115);
      if (lookahead == '+') ADVANCE(105);
      if (lookahead == ',') ADVANCE(81);
      if (lookahead == '-') ADVANCE(100);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == '0') ADVANCE(44);
      if (lookahead == ':') ADVANCE(80);
      if (lookahead == ';') ADVANCE(114);
      if (lookahead == '<') ADVANCE(91);
      if (lookahead == '=') ADVANCE(82);
      if (lookahead == '>') ADVANCE(86);
      if (lookahead == '@') ADVANCE(71);
      if (lookahead == ']') ADVANCE(77);
      if (lookahead == '^') ADVANCE(119);
      if (lookahead == '_') ADVANCE(118);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == '}') ADVANCE(79);
      if (lookahead == '~') ADVANCE(117);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 133 ||
          lookahead == 8206 ||
          lookahead == 8207 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(137);
      if (sym_ident_character_set_1(lookahead)) ADVANCE(131);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_int_literal_token1);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_int_literal_token1);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(28);
      if (lookahead == 'i' ||
          lookahead == 'u') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_int_literal_token2);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_int_literal_token2);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(25);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(11);
      if (lookahead == 'f' ||
          lookahead == 'h') ADVANCE(55);
      if (lookahead == 'i' ||
          lookahead == 'u') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_int_literal_token3);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_int_literal_token3);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(25);
      if (lookahead == 'f' ||
          lookahead == 'h') ADVANCE(56);
      if (lookahead == 'i' ||
          lookahead == 'u') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_decimal_float_literal_token1);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_decimal_float_literal_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(26);
      if (lookahead == 'f' ||
          lookahead == 'h') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_decimal_float_literal_token1);
      if (lookahead == 'f' ||
          lookahead == 'h') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_decimal_float_literal_token2);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_decimal_float_literal_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      if (lookahead == 'f' ||
          lookahead == 'h') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_decimal_float_literal_token2);
      if (lookahead == 'f' ||
          lookahead == 'h') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_decimal_float_literal_token3);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_decimal_float_literal_token3);
      if (lookahead == 'f' ||
          lookahead == 'h') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_decimal_float_literal_token4);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_decimal_float_literal_token5);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_hex_float_literal_token1);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_hex_float_literal_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_hex_float_literal_token1);
      if (lookahead == 'f' ||
          lookahead == 'h') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_hex_float_literal_token2);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_hex_float_literal_token2);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_hex_float_literal_token2);
      if (lookahead == 'f' ||
          lookahead == 'h') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_hex_float_literal_token3);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_hex_float_literal_token3);
      if (lookahead == 'f' ||
          lookahead == 'h') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_and);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_and);
      if (lookahead == '&') ADVANCE(69);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_and);
      if (lookahead == '&') ADVANCE(69);
      if (lookahead == '=') ADVANCE(126);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_and);
      if (lookahead == '=') ADVANCE(126);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_and_and);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_arrow);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_attr);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_forward_slash);
      if (lookahead == '/') ADVANCE(132);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_forward_slash);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == '=') ADVANCE(124);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_bang);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_bang);
      if (lookahead == '=') ADVANCE(85);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_bracket_left);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_bracket_right);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_brace_left);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_brace_right);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_equal);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_equal);
      if (lookahead == '=') ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_equal_equal);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_not_equal);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_greater_than);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_greater_than);
      if (lookahead == '=') ADVANCE(89);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_greater_than);
      if (lookahead == '=') ADVANCE(89);
      if (lookahead == '>') ADVANCE(90);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_greater_than_equal);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_shift_right);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_less_than);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_less_than);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == '=') ADVANCE(95);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_less_than);
      if (lookahead == '<') ADVANCE(96);
      if (lookahead == '=') ADVANCE(95);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_less_than);
      if (lookahead == '=') ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_less_than_equal);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_shift_left);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_shift_left);
      if (lookahead == '=') ADVANCE(130);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_modulo);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_modulo);
      if (lookahead == '=') ADVANCE(125);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_minus);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_minus);
      if (lookahead == '=') ADVANCE(122);
      if (lookahead == '>') ADVANCE(70);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_minus_minus);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_period);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_period);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_plus);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_plus);
      if (lookahead == '+') ADVANCE(107);
      if (lookahead == '=') ADVANCE(121);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_plus_plus);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_or);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_or);
      if (lookahead == '=') ADVANCE(127);
      if (lookahead == '|') ADVANCE(111);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_or);
      if (lookahead == '|') ADVANCE(111);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_or_or);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_paren_left);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_paren_right);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_semicolon);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_star);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_star);
      if (lookahead == '=') ADVANCE(123);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_tilde);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_underscore);
      if (sym_ident_character_set_2(lookahead)) ADVANCE(131);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_xor);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_xor);
      if (lookahead == '=') ADVANCE(128);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_plus_equal);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_minus_equal);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_times_equal);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_division_equal);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_modulo_equal);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_and_equal);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_or_equal);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_xor_equal);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_shift_right_equal);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_shift_left_equal);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_ident);
      if (sym_ident_character_set_2(lookahead)) ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(136);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym__comment_token1);
      if (lookahead == '\n') ADVANCE(137);
      if (lookahead == '/') ADVANCE(135);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 133 ||
          lookahead == 8206 ||
          lookahead == 8207 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(136);
      if (lookahead != 0) ADVANCE(136);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym__comment_token1);
      if (lookahead == '/') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(136);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym__comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__blankspace);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'A') ADVANCE(1);
      if (lookahead == 'B') ADVANCE(2);
      if (lookahead == 'C') ADVANCE(3);
      if (lookahead == 'D') ADVANCE(4);
      if (lookahead == 'G') ADVANCE(5);
      if (lookahead == 'H') ADVANCE(6);
      if (lookahead == 'I') ADVANCE(7);
      if (lookahead == 'L') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(9);
      if (lookahead == 'O') ADVANCE(10);
      if (lookahead == 'P') ADVANCE(11);
      if (lookahead == 'R') ADVANCE(12);
      if (lookahead == 'S') ADVANCE(13);
      if (lookahead == 'T') ADVANCE(14);
      if (lookahead == 'V') ADVANCE(15);
      if (lookahead == 'a') ADVANCE(16);
      if (lookahead == 'b') ADVANCE(17);
      if (lookahead == 'c') ADVANCE(18);
      if (lookahead == 'd') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(20);
      if (lookahead == 'f') ADVANCE(21);
      if (lookahead == 'g') ADVANCE(22);
      if (lookahead == 'h') ADVANCE(23);
      if (lookahead == 'i') ADVANCE(24);
      if (lookahead == 'l') ADVANCE(25);
      if (lookahead == 'm') ADVANCE(26);
      if (lookahead == 'n') ADVANCE(27);
      if (lookahead == 'o') ADVANCE(28);
      if (lookahead == 'p') ADVANCE(29);
      if (lookahead == 'r') ADVANCE(30);
      if (lookahead == 's') ADVANCE(31);
      if (lookahead == 't') ADVANCE(32);
      if (lookahead == 'u') ADVANCE(33);
      if (lookahead == 'v') ADVANCE(34);
      if (lookahead == 'w') ADVANCE(35);
      if (lookahead == 'y') ADVANCE(36);
      END_STATE();
    case 1:
      if (lookahead == 'p') ADVANCE(37);
      END_STATE();
    case 2:
      if (lookahead == 'l') ADVANCE(38);
      if (lookahead == 'u') ADVANCE(39);
      if (lookahead == 'y') ADVANCE(40);
      END_STATE();
    case 3:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(42);
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 6:
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 7:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 8:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 9:
      if (lookahead == 'U') ADVANCE(48);
      END_STATE();
    case 10:
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 11:
      if (lookahead == 'i') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 12:
      if (lookahead == 'W') ADVANCE(52);
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'e') ADVANCE(56);
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(58);
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 16:
      if (lookahead == 'b') ADVANCE(61);
      if (lookahead == 'c') ADVANCE(62);
      if (lookahead == 'l') ADVANCE(63);
      if (lookahead == 'r') ADVANCE(64);
      if (lookahead == 's') ADVANCE(65);
      if (lookahead == 't') ADVANCE(66);
      if (lookahead == 'u') ADVANCE(67);
      if (lookahead == 'w') ADVANCE(68);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(69);
      if (lookahead == 'f') ADVANCE(70);
      if (lookahead == 'i') ADVANCE(71);
      if (lookahead == 'o') ADVANCE(72);
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(74);
      if (lookahead == 'b') ADVANCE(75);
      if (lookahead == 'h') ADVANCE(76);
      if (lookahead == 'l') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(78);
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(80);
      if (lookahead == 'i') ADVANCE(81);
      if (lookahead == 'o') ADVANCE(82);
      if (lookahead == 'w') ADVANCE(83);
      if (lookahead == 'y') ADVANCE(84);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(85);
      if (lookahead == 'n') ADVANCE(86);
      if (lookahead == 'x') ADVANCE(87);
      END_STATE();
    case 21:
      if (lookahead == '1') ADVANCE(88);
      if (lookahead == '3') ADVANCE(89);
      if (lookahead == '6') ADVANCE(90);
      if (lookahead == 'a') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(92);
      if (lookahead == 'n') ADVANCE(93);
      if (lookahead == 'o') ADVANCE(94);
      if (lookahead == 'r') ADVANCE(95);
      if (lookahead == 'u') ADVANCE(96);
      if (lookahead == 'v') ADVANCE(97);
      if (lookahead == 'x') ADVANCE(98);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(99);
      if (lookahead == 'o') ADVANCE(100);
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(102);
      if (lookahead == 'i') ADVANCE(103);
      if (lookahead == 'v') ADVANCE(104);
      END_STATE();
    case 24:
      if (lookahead == '1') ADVANCE(105);
      if (lookahead == '3') ADVANCE(106);
      if (lookahead == '6') ADVANCE(107);
      if (lookahead == '8') ADVANCE(108);
      if (lookahead == 'f') ADVANCE(109);
      if (lookahead == 'i') ADVANCE(110);
      if (lookahead == 'm') ADVANCE(111);
      if (lookahead == 'n') ADVANCE(112);
      if (lookahead == 's') ADVANCE(113);
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(115);
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead == 'i') ADVANCE(117);
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(119);
      if (lookahead == 'e') ADVANCE(120);
      if (lookahead == 'o') ADVANCE(121);
      if (lookahead == 'u') ADVANCE(122);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(123);
      if (lookahead == 'e') ADVANCE(124);
      if (lookahead == 'i') ADVANCE(125);
      if (lookahead == 'o') ADVANCE(126);
      if (lookahead == 'u') ADVANCE(127);
      END_STATE();
    case 28:
      if (lookahead == 'f') ADVANCE(128);
      if (lookahead == 'p') ADVANCE(129);
      if (lookahead == 'v') ADVANCE(130);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(131);
      if (lookahead == 'i') ADVANCE(132);
      if (lookahead == 'o') ADVANCE(133);
      if (lookahead == 'r') ADVANCE(134);
      if (lookahead == 't') ADVANCE(135);
      if (lookahead == 'u') ADVANCE(136);
      END_STATE();
    case 30:
      if (lookahead == '3') ADVANCE(137);
      if (lookahead == 'e') ADVANCE(138);
      if (lookahead == 'g') ADVANCE(139);
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(142);
      if (lookahead == 'h') ADVANCE(143);
      if (lookahead == 'i') ADVANCE(144);
      if (lookahead == 'm') ADVANCE(145);
      if (lookahead == 'n') ADVANCE(146);
      if (lookahead == 't') ADVANCE(147);
      if (lookahead == 'u') ADVANCE(148);
      if (lookahead == 'w') ADVANCE(149);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(150);
      if (lookahead == 'b') ADVANCE(151);
      if (lookahead == 'e') ADVANCE(152);
      if (lookahead == 'h') ADVANCE(153);
      if (lookahead == 'r') ADVANCE(154);
      if (lookahead == 'y') ADVANCE(155);
      END_STATE();
    case 33:
      if (lookahead == '1') ADVANCE(156);
      if (lookahead == '3') ADVANCE(157);
      if (lookahead == '6') ADVANCE(158);
      if (lookahead == '8') ADVANCE(159);
      if (lookahead == 'i') ADVANCE(160);
      if (lookahead == 'n') ADVANCE(161);
      if (lookahead == 's') ADVANCE(162);
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(164);
      if (lookahead == 'e') ADVANCE(165);
      if (lookahead == 'i') ADVANCE(166);
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(168);
      if (lookahead == 'g') ADVANCE(169);
      if (lookahead == 'h') ADVANCE(170);
      if (lookahead == 'i') ADVANCE(171);
      if (lookahead == 'o') ADVANCE(172);
      if (lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(174);
      END_STATE();
    case 37:
      if (lookahead == 'p') ADVANCE(175);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 39:
      if (lookahead == 'f') ADVANCE(177);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(178);
      END_STATE();
    case 41:
      if (lookahead == 'm') ADVANCE(179);
      if (lookahead == 'n') ADVANCE(180);
      END_STATE();
    case 42:
      if (lookahead == 'p') ADVANCE(181);
      END_STATE();
    case 43:
      if (lookahead == 'm') ADVANCE(182);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(183);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(184);
      END_STATE();
    case 46:
      if (lookahead == 'p') ADVANCE(185);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(186);
      END_STATE();
    case 48:
      if (lookahead == 'L') ADVANCE(187);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(188);
      END_STATE();
    case 50:
      if (lookahead == 'x') ADVANCE(189);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(190);
      END_STATE();
    case 52:
      if (lookahead == 'B') ADVANCE(191);
      if (lookahead == 'S') ADVANCE(192);
      if (lookahead == 'T') ADVANCE(193);
      END_STATE();
    case 53:
      if (lookahead == 's') ADVANCE(194);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(195);
      END_STATE();
    case 55:
      if (lookahead == 'm') ADVANCE(196);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(197);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 58:
      if (lookahead == 'x') ADVANCE(199);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(202);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(204);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == 'm') ADVANCE(206);
      if (lookahead == 'y') ADVANCE(207);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(208);
      if (lookahead == 't') ADVANCE(209);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(210);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(211);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(212);
      END_STATE();
    case 70:
      if (lookahead == '1') ADVANCE(213);
      END_STATE();
    case 71:
      if (lookahead == 'n') ADVANCE(214);
      if (lookahead == 't') ADVANCE(215);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(216);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 74:
      if (lookahead == 's') ADVANCE(218);
      if (lookahead == 't') ADVANCE(219);
      END_STATE();
    case 75:
      if (lookahead == 'u') ADVANCE(220);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(221);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(222);
      END_STATE();
    case 78:
      if (lookahead == '_') ADVANCE(223);
      if (lookahead == 'h') ADVANCE(224);
      if (lookahead == 'l') ADVANCE(225);
      if (lookahead == 'm') ADVANCE(226);
      if (lookahead == 'n') ADVANCE(227);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(228);
      END_STATE();
    case 80:
      if (lookahead == 'b') ADVANCE(229);
      if (lookahead == 'c') ADVANCE(230);
      if (lookahead == 'f') ADVANCE(231);
      if (lookahead == 'l') ADVANCE(232);
      if (lookahead == 'm') ADVANCE(233);
      END_STATE();
    case 81:
      if (lookahead == 's') ADVANCE(234);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 83:
      if (lookahead == 'o') ADVANCE(235);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(236);
      END_STATE();
    case 85:
      if (lookahead == 's') ADVANCE(237);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(238);
      if (lookahead == 'u') ADVANCE(239);
      END_STATE();
    case 87:
      if (lookahead == 'p') ADVANCE(240);
      if (lookahead == 't') ADVANCE(241);
      END_STATE();
    case 88:
      if (lookahead == '6') ADVANCE(242);
      END_STATE();
    case 89:
      if (lookahead == '2') ADVANCE(243);
      END_STATE();
    case 90:
      if (lookahead == '4') ADVANCE(244);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(245);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(246);
      if (lookahead == 'n') ADVANCE(247);
      if (lookahead == 'x') ADVANCE(248);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_fn);
      END_STATE();
    case 94:
      if (lookahead == 'r') ADVANCE(249);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(250);
      if (lookahead == 'o') ADVANCE(251);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(252);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 98:
      if (lookahead == 'g') ADVANCE(254);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(255);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(256);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(257);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(258);
      END_STATE();
    case 103:
      if (lookahead == 'g') ADVANCE(259);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 105:
      if (lookahead == '6') ADVANCE(261);
      END_STATE();
    case 106:
      if (lookahead == '2') ADVANCE(262);
      END_STATE();
    case 107:
      if (lookahead == '4') ADVANCE(263);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_if);
      END_STATE();
    case 110:
      if (lookahead == 'm') ADVANCE(264);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(265);
      if (lookahead == 'p') ADVANCE(266);
      END_STATE();
    case 112:
      if (lookahead == 'l') ADVANCE(267);
      if (lookahead == 'o') ADVANCE(268);
      if (lookahead == 's') ADVANCE(269);
      if (lookahead == 't') ADVANCE(270);
      if (lookahead == 'v') ADVANCE(271);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(272);
      if (lookahead == 'u') ADVANCE(273);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 115:
      if (lookahead == 'y') ADVANCE(275);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(276);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(277);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(278);
      if (lookahead == 'w') ADVANCE(279);
      END_STATE();
    case 119:
      if (lookahead == 'c') ADVANCE(280);
      if (lookahead == 't') ADVANCE(281);
      END_STATE();
    case 120:
      if (lookahead == 'd') ADVANCE(282);
      if (lookahead == 't') ADVANCE(283);
      END_STATE();
    case 121:
      if (lookahead == 'd') ADVANCE(284);
      if (lookahead == 'v') ADVANCE(285);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(286);
      END_STATE();
    case 123:
      if (lookahead == 'm') ADVANCE(287);
      END_STATE();
    case 124:
      if (lookahead == 'w') ADVANCE(288);
      END_STATE();
    case 125:
      if (lookahead == 'l') ADVANCE(289);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(290);
      if (lookahead == 'i') ADVANCE(291);
      if (lookahead == 'p') ADVANCE(292);
      END_STATE();
    case 127:
      if (lookahead == 'l') ADVANCE(293);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(294);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 131:
      if (lookahead == 'c') ADVANCE(296);
      if (lookahead == 'r') ADVANCE(297);
      if (lookahead == 's') ADVANCE(298);
      if (lookahead == 't') ADVANCE(299);
      END_STATE();
    case 132:
      if (lookahead == 'x') ADVANCE(300);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(301);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(302);
      if (lookahead == 'i') ADVANCE(303);
      if (lookahead == 'o') ADVANCE(304);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(305);
      END_STATE();
    case 136:
      if (lookahead == 'b') ADVANCE(306);
      END_STATE();
    case 137:
      if (lookahead == '2') ADVANCE(307);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(308);
      if (lookahead == 'f') ADVANCE(309);
      if (lookahead == 'g') ADVANCE(310);
      if (lookahead == 'i') ADVANCE(311);
      if (lookahead == 'q') ADVANCE(312);
      if (lookahead == 's') ADVANCE(313);
      if (lookahead == 't') ADVANCE(314);
      END_STATE();
    case 139:
      if (lookahead == '3') ADVANCE(315);
      if (lookahead == 'b') ADVANCE(316);
      END_STATE();
    case 140:
      if (lookahead == 'w') ADVANCE(317);
      END_STATE();
    case 141:
      if (lookahead == 'm') ADVANCE(318);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(319);
      if (lookahead == 't') ADVANCE(320);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(321);
      END_STATE();
    case 144:
      if (lookahead == 'g') ADVANCE(322);
      if (lookahead == 'z') ADVANCE(323);
      END_STATE();
    case 145:
      if (lookahead == 'o') ADVANCE(324);
      END_STATE();
    case 146:
      if (lookahead == 'o') ADVANCE(325);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(326);
      if (lookahead == 'd') ADVANCE(327);
      if (lookahead == 'o') ADVANCE(328);
      if (lookahead == 'r') ADVANCE(329);
      END_STATE();
    case 148:
      if (lookahead == 'b') ADVANCE(330);
      if (lookahead == 'p') ADVANCE(331);
      END_STATE();
    case 149:
      if (lookahead == 'i') ADVANCE(332);
      END_STATE();
    case 150:
      if (lookahead == 'r') ADVANCE(333);
      END_STATE();
    case 151:
      if (lookahead == 'u') ADVANCE(334);
      END_STATE();
    case 152:
      if (lookahead == 'c') ADVANCE(335);
      if (lookahead == 'm') ADVANCE(336);
      if (lookahead == 'x') ADVANCE(337);
      END_STATE();
    case 153:
      if (lookahead == 'i') ADVANCE(338);
      if (lookahead == 'r') ADVANCE(339);
      END_STATE();
    case 154:
      if (lookahead == 'a') ADVANCE(340);
      if (lookahead == 'i') ADVANCE(341);
      if (lookahead == 'u') ADVANCE(342);
      if (lookahead == 'y') ADVANCE(343);
      END_STATE();
    case 155:
      if (lookahead == 'p') ADVANCE(344);
      END_STATE();
    case 156:
      if (lookahead == '6') ADVANCE(345);
      END_STATE();
    case 157:
      if (lookahead == '2') ADVANCE(346);
      END_STATE();
    case 158:
      if (lookahead == '4') ADVANCE(347);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 160:
      if (lookahead == 'm') ADVANCE(348);
      END_STATE();
    case 161:
      if (lookahead == 'i') ADVANCE(349);
      if (lookahead == 'l') ADVANCE(350);
      if (lookahead == 'o') ADVANCE(351);
      if (lookahead == 's') ADVANCE(352);
      END_STATE();
    case 162:
      if (lookahead == 'a') ADVANCE(353);
      if (lookahead == 'e') ADVANCE(354);
      if (lookahead == 'i') ADVANCE(355);
      if (lookahead == 'u') ADVANCE(356);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(357);
      END_STATE();
    case 164:
      if (lookahead == 'r') ADVANCE(358);
      END_STATE();
    case 165:
      if (lookahead == 'c') ADVANCE(359);
      if (lookahead == 'r') ADVANCE(360);
      END_STATE();
    case 166:
      if (lookahead == 'r') ADVANCE(361);
      END_STATE();
    case 167:
      if (lookahead == 'i') ADVANCE(362);
      if (lookahead == 'l') ADVANCE(363);
      END_STATE();
    case 168:
      if (lookahead == 'h') ADVANCE(364);
      END_STATE();
    case 169:
      if (lookahead == 's') ADVANCE(365);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(366);
      if (lookahead == 'i') ADVANCE(367);
      END_STATE();
    case 171:
      if (lookahead == 't') ADVANCE(368);
      END_STATE();
    case 172:
      if (lookahead == 'r') ADVANCE(369);
      END_STATE();
    case 173:
      if (lookahead == 'i') ADVANCE(370);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(371);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(372);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(373);
      END_STATE();
    case 177:
      if (lookahead == 'f') ADVANCE(374);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(375);
      END_STATE();
    case 179:
      if (lookahead == 'p') ADVANCE(376);
      END_STATE();
    case 180:
      if (lookahead == 's') ADVANCE(377);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(378);
      END_STATE();
    case 182:
      if (lookahead == 'a') ADVANCE(379);
      END_STATE();
    case 183:
      if (lookahead == 'm') ADVANCE(380);
      END_STATE();
    case 184:
      if (lookahead == 'l') ADVANCE(381);
      END_STATE();
    case 185:
      if (lookahead == 'u') ADVANCE(382);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(383);
      END_STATE();
    case 187:
      if (lookahead == 'L') ADVANCE(384);
      END_STATE();
    case 188:
      if (lookahead == 'p') ADVANCE(385);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(386);
      END_STATE();
    case 190:
      if (lookahead == 'n') ADVANCE(387);
      END_STATE();
    case 191:
      if (lookahead == 'u') ADVANCE(388);
      if (lookahead == 'y') ADVANCE(389);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(390);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(391);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(392);
      END_STATE();
    case 195:
      if (lookahead == 'd') ADVANCE(393);
      END_STATE();
    case 196:
      if (lookahead == 'p') ADVANCE(394);
      END_STATE();
    case 197:
      if (lookahead == 'f') ADVANCE(395);
      END_STATE();
    case 198:
      if (lookahead == 'u') ADVANCE(396);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(397);
      END_STATE();
    case 200:
      if (lookahead == 'a') ADVANCE(398);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(399);
      END_STATE();
    case 202:
      if (lookahead == 't') ADVANCE(400);
      END_STATE();
    case 203:
      if (lookahead == 'i') ADVANCE(401);
      END_STATE();
    case 204:
      if (lookahead == 'g') ADVANCE(402);
      END_STATE();
    case 205:
      if (lookahead == 'a') ADVANCE(403);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_asm);
      if (lookahead == '_') ADVANCE(404);
      END_STATE();
    case 207:
      if (lookahead == 'n') ADVANCE(405);
      END_STATE();
    case 208:
      if (lookahead == 'm') ADVANCE(406);
      END_STATE();
    case 209:
      if (lookahead == 'r') ADVANCE(407);
      END_STATE();
    case 210:
      if (lookahead == 'o') ADVANCE(408);
      END_STATE();
    case 211:
      if (lookahead == 'i') ADVANCE(409);
      END_STATE();
    case 212:
      if (lookahead == 'o') ADVANCE(410);
      END_STATE();
    case 213:
      if (lookahead == '6') ADVANCE(411);
      END_STATE();
    case 214:
      if (lookahead == 'd') ADVANCE(412);
      END_STATE();
    case 215:
      if (lookahead == 'c') ADVANCE(413);
      END_STATE();
    case 216:
      if (lookahead == 'l') ADVANCE(414);
      END_STATE();
    case 217:
      if (lookahead == 'a') ADVANCE(415);
      END_STATE();
    case 218:
      if (lookahead == 'e') ADVANCE(416);
      if (lookahead == 't') ADVANCE(417);
      END_STATE();
    case 219:
      if (lookahead == 'c') ADVANCE(418);
      END_STATE();
    case 220:
      if (lookahead == 'f') ADVANCE(419);
      END_STATE();
    case 221:
      if (lookahead == 'r') ADVANCE(420);
      END_STATE();
    case 222:
      if (lookahead == 's') ADVANCE(421);
      END_STATE();
    case 223:
      if (lookahead == 'a') ADVANCE(422);
      if (lookahead == 'r') ADVANCE(423);
      if (lookahead == 'y') ADVANCE(424);
      END_STATE();
    case 224:
      if (lookahead == 'e') ADVANCE(425);
      END_STATE();
    case 225:
      if (lookahead == 'u') ADVANCE(426);
      END_STATE();
    case 226:
      if (lookahead == 'm') ADVANCE(427);
      if (lookahead == 'p') ADVANCE(428);
      END_STATE();
    case 227:
      if (lookahead == 'c') ADVANCE(429);
      if (lookahead == 's') ADVANCE(430);
      if (lookahead == 't') ADVANCE(431);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(432);
      END_STATE();
    case 229:
      if (lookahead == 'u') ADVANCE(433);
      END_STATE();
    case 230:
      if (lookahead == 'l') ADVANCE(434);
      END_STATE();
    case 231:
      if (lookahead == 'a') ADVANCE(435);
      END_STATE();
    case 232:
      if (lookahead == 'e') ADVANCE(436);
      END_STATE();
    case 233:
      if (lookahead == 'o') ADVANCE(437);
      END_STATE();
    case 234:
      if (lookahead == 'c') ADVANCE(438);
      END_STATE();
    case 235:
      if (lookahead == 'r') ADVANCE(439);
      END_STATE();
    case 236:
      if (lookahead == 'a') ADVANCE(440);
      END_STATE();
    case 237:
      if (lookahead == 'e') ADVANCE(441);
      END_STATE();
    case 238:
      if (lookahead == 'b') ADVANCE(442);
      END_STATE();
    case 239:
      if (lookahead == 'm') ADVANCE(443);
      END_STATE();
    case 240:
      if (lookahead == 'l') ADVANCE(444);
      if (lookahead == 'o') ADVANCE(445);
      END_STATE();
    case 241:
      if (lookahead == 'e') ADVANCE(446);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_float16);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_float32);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_f64);
      END_STATE();
    case 245:
      if (lookahead == 'l') ADVANCE(447);
      if (lookahead == 's') ADVANCE(448);
      END_STATE();
    case 246:
      if (lookahead == 't') ADVANCE(449);
      END_STATE();
    case 247:
      if (lookahead == 'a') ADVANCE(450);
      END_STATE();
    case 248:
      if (lookahead == 'e') ADVANCE(451);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_for);
      END_STATE();
    case 250:
      if (lookahead == 'e') ADVANCE(452);
      END_STATE();
    case 251:
      if (lookahead == 'm') ADVANCE(453);
      END_STATE();
    case 252:
      if (lookahead == 'c') ADVANCE(454);
      END_STATE();
    case 253:
      if (lookahead == 'c') ADVANCE(455);
      END_STATE();
    case 254:
      if (lookahead == 'r') ADVANCE(456);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 256:
      if (lookahead == 'o') ADVANCE(457);
      END_STATE();
    case 257:
      if (lookahead == 'u') ADVANCE(458);
      END_STATE();
    case 258:
      if (lookahead == 'd') ADVANCE(459);
      END_STATE();
    case 259:
      if (lookahead == 'h') ADVANCE(460);
      END_STATE();
    case 260:
      if (lookahead == 'c') ADVANCE(461);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_int32);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 264:
      if (lookahead == 'a') ADVANCE(462);
      END_STATE();
    case 265:
      if (lookahead == 'g') ADVANCE(463);
      END_STATE();
    case 266:
      if (lookahead == 'l') ADVANCE(464);
      if (lookahead == 'o') ADVANCE(465);
      END_STATE();
    case 267:
      if (lookahead == 'i') ADVANCE(466);
      END_STATE();
    case 268:
      if (lookahead == 'u') ADVANCE(467);
      END_STATE();
    case 269:
      if (lookahead == 't') ADVANCE(468);
      END_STATE();
    case 270:
      if (lookahead == 'e') ADVANCE(469);
      END_STATE();
    case 271:
      if (lookahead == 'a') ADVANCE(470);
      END_STATE();
    case 272:
      if (lookahead == 'm') ADVANCE(471);
      END_STATE();
    case 273:
      if (lookahead == 'b') ADVANCE(472);
      END_STATE();
    case 274:
      if (lookahead == 'x') ADVANCE(473);
      END_STATE();
    case 275:
      if (lookahead == 'o') ADVANCE(474);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_let);
      END_STATE();
    case 277:
      if (lookahead == 'e') ADVANCE(475);
      END_STATE();
    case 278:
      if (lookahead == 'p') ADVANCE(476);
      END_STATE();
    case 279:
      if (lookahead == 'p') ADVANCE(477);
      END_STATE();
    case 280:
      if (lookahead == 'r') ADVANCE(478);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_mat);
      if (lookahead == '2') ADVANCE(479);
      if (lookahead == '3') ADVANCE(480);
      if (lookahead == '4') ADVANCE(481);
      if (lookahead == 'c') ADVANCE(482);
      if (lookahead == 'r') ADVANCE(483);
      END_STATE();
    case 282:
      if (lookahead == 'i') ADVANCE(484);
      END_STATE();
    case 283:
      if (lookahead == 'a') ADVANCE(485);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_mod);
      if (lookahead == 'u') ADVANCE(486);
      END_STATE();
    case 285:
      if (lookahead == 'e') ADVANCE(487);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_mut);
      if (lookahead == 'a') ADVANCE(488);
      END_STATE();
    case 287:
      if (lookahead == 'e') ADVANCE(489);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_nil);
      END_STATE();
    case 290:
      if (lookahead == 'x') ADVANCE(490);
      END_STATE();
    case 291:
      if (lookahead == 'n') ADVANCE(491);
      END_STATE();
    case 292:
      if (lookahead == 'e') ADVANCE(492);
      END_STATE();
    case 293:
      if (lookahead == 'l') ADVANCE(493);
      END_STATE();
    case 294:
      if (lookahead == 'r') ADVANCE(494);
      END_STATE();
    case 295:
      if (lookahead == 'r') ADVANCE(495);
      END_STATE();
    case 296:
      if (lookahead == 'k') ADVANCE(496);
      END_STATE();
    case 297:
      if (lookahead == 't') ADVANCE(497);
      END_STATE();
    case 298:
      if (lookahead == 's') ADVANCE(498);
      END_STATE();
    case 299:
      if (lookahead == 'c') ADVANCE(499);
      END_STATE();
    case 300:
      if (lookahead == 'e') ADVANCE(500);
      END_STATE();
    case 301:
      if (lookahead == 'n') ADVANCE(501);
      END_STATE();
    case 302:
      if (lookahead == 'c') ADVANCE(502);
      if (lookahead == 'm') ADVANCE(503);
      END_STATE();
    case 303:
      if (lookahead == 'v') ADVANCE(504);
      END_STATE();
    case 304:
      if (lookahead == 't') ADVANCE(505);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_pointer);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_pub);
      if (lookahead == 'l') ADVANCE(506);
      END_STATE();
    case 307:
      if (lookahead == 'f') ADVANCE(507);
      if (lookahead == 's') ADVANCE(508);
      if (lookahead == 'u') ADVANCE(509);
      END_STATE();
    case 308:
      if (lookahead == 'd') ADVANCE(510);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 310:
      if (lookahead == 'a') ADVANCE(511);
      if (lookahead == 'i') ADVANCE(512);
      END_STATE();
    case 311:
      if (lookahead == 'n') ADVANCE(513);
      END_STATE();
    case 312:
      if (lookahead == 'u') ADVANCE(514);
      END_STATE();
    case 313:
      if (lookahead == 'o') ADVANCE(515);
      if (lookahead == 't') ADVANCE(516);
      END_STATE();
    case 314:
      if (lookahead == 'u') ADVANCE(517);
      END_STATE();
    case 315:
      if (lookahead == '2') ADVANCE(518);
      END_STATE();
    case 316:
      if (lookahead == 'a') ADVANCE(519);
      END_STATE();
    case 317:
      if (lookahead == '_') ADVANCE(520);
      END_STATE();
    case 318:
      if (lookahead == 'p') ADVANCE(521);
      END_STATE();
    case 319:
      if (lookahead == 'f') ADVANCE(522);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 321:
      if (lookahead == 'r') ADVANCE(523);
      END_STATE();
    case 322:
      if (lookahead == 'n') ADVANCE(524);
      END_STATE();
    case 323:
      if (lookahead == 'e') ADVANCE(525);
      END_STATE();
    case 324:
      if (lookahead == 'o') ADVANCE(526);
      END_STATE();
    case 325:
      if (lookahead == 'r') ADVANCE(527);
      END_STATE();
    case 326:
      if (lookahead == 't') ADVANCE(528);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_std);
      END_STATE();
    case 328:
      if (lookahead == 'r') ADVANCE(529);
      END_STATE();
    case 329:
      if (lookahead == 'i') ADVANCE(530);
      if (lookahead == 'u') ADVANCE(531);
      END_STATE();
    case 330:
      if (lookahead == 'p') ADVANCE(532);
      if (lookahead == 'r') ADVANCE(533);
      END_STATE();
    case 331:
      if (lookahead == 'e') ADVANCE(534);
      END_STATE();
    case 332:
      if (lookahead == 't') ADVANCE(535);
      END_STATE();
    case 333:
      if (lookahead == 'g') ADVANCE(536);
      END_STATE();
    case 334:
      if (lookahead == 'f') ADVANCE(537);
      END_STATE();
    case 335:
      if (lookahead == 'h') ADVANCE(538);
      END_STATE();
    case 336:
      if (lookahead == 'p') ADVANCE(539);
      END_STATE();
    case 337:
      if (lookahead == 't') ADVANCE(540);
      END_STATE();
    case 338:
      if (lookahead == 's') ADVANCE(541);
      END_STATE();
    case 339:
      if (lookahead == 'e') ADVANCE(542);
      if (lookahead == 'o') ADVANCE(543);
      END_STATE();
    case 340:
      if (lookahead == 'i') ADVANCE(544);
      END_STATE();
    case 341:
      if (lookahead == 'a') ADVANCE(545);
      END_STATE();
    case 342:
      if (lookahead == 'e') ADVANCE(546);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_try);
      END_STATE();
    case 344:
      if (lookahead == 'e') ADVANCE(547);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_uint32);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 348:
      if (lookahead == 'a') ADVANCE(548);
      END_STATE();
    case 349:
      if (lookahead == 'f') ADVANCE(549);
      if (lookahead == 'o') ADVANCE(550);
      END_STATE();
    case 350:
      if (lookahead == 'e') ADVANCE(551);
      END_STATE();
    case 351:
      if (lookahead == 'r') ADVANCE(552);
      END_STATE();
    case 352:
      if (lookahead == 'a') ADVANCE(553);
      if (lookahead == 'i') ADVANCE(554);
      END_STATE();
    case 353:
      if (lookahead == 'm') ADVANCE(555);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 355:
      if (lookahead == 'n') ADVANCE(556);
      END_STATE();
    case 356:
      if (lookahead == 'b') ADVANCE(557);
      END_STATE();
    case 357:
      if (lookahead == 'x') ADVANCE(558);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'y') ADVANCE(559);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_vec);
      if (lookahead == '2') ADVANCE(560);
      if (lookahead == '3') ADVANCE(561);
      if (lookahead == '4') ADVANCE(562);
      if (lookahead == 't') ADVANCE(563);
      END_STATE();
    case 360:
      if (lookahead == 't') ADVANCE(564);
      END_STATE();
    case 361:
      if (lookahead == 't') ADVANCE(565);
      END_STATE();
    case 362:
      if (lookahead == 'd') ADVANCE(566);
      END_STATE();
    case 363:
      if (lookahead == 'a') ADVANCE(567);
      END_STATE();
    case 364:
      if (lookahead == 'a') ADVANCE(568);
      END_STATE();
    case 365:
      if (lookahead == 'l') ADVANCE(569);
      END_STATE();
    case 366:
      if (lookahead == 'r') ADVANCE(570);
      END_STATE();
    case 367:
      if (lookahead == 'l') ADVANCE(571);
      END_STATE();
    case 368:
      if (lookahead == 'h') ADVANCE(572);
      END_STATE();
    case 369:
      if (lookahead == 'k') ADVANCE(573);
      END_STATE();
    case 370:
      if (lookahead == 't') ADVANCE(574);
      END_STATE();
    case 371:
      if (lookahead == 'l') ADVANCE(575);
      END_STATE();
    case 372:
      if (lookahead == 'n') ADVANCE(576);
      END_STATE();
    case 373:
      if (lookahead == 'd') ADVANCE(577);
      END_STATE();
    case 374:
      if (lookahead == 'e') ADVANCE(578);
      END_STATE();
    case 375:
      if (lookahead == 'A') ADVANCE(579);
      END_STATE();
    case 376:
      if (lookahead == 'i') ADVANCE(580);
      if (lookahead == 'u') ADVANCE(581);
      END_STATE();
    case 377:
      if (lookahead == 'u') ADVANCE(582);
      END_STATE();
    case 378:
      if (lookahead == 'h') ADVANCE(583);
      END_STATE();
    case 379:
      if (lookahead == 'i') ADVANCE(584);
      END_STATE();
    case 380:
      if (lookahead == 'e') ADVANCE(585);
      END_STATE();
    case 381:
      if (lookahead == 's') ADVANCE(586);
      END_STATE();
    case 382:
      if (lookahead == 't') ADVANCE(587);
      END_STATE();
    case 383:
      if (lookahead == 'S') ADVANCE(588);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_NULL);
      END_STATE();
    case 385:
      if (lookahead == 'u') ADVANCE(589);
      END_STATE();
    case 386:
      if (lookahead == 'l') ADVANCE(590);
      END_STATE();
    case 387:
      if (lookahead == 't') ADVANCE(591);
      END_STATE();
    case 388:
      if (lookahead == 'f') ADVANCE(592);
      END_STATE();
    case 389:
      if (lookahead == 't') ADVANCE(593);
      END_STATE();
    case 390:
      if (lookahead == 'r') ADVANCE(594);
      END_STATE();
    case 391:
      if (lookahead == 'x') ADVANCE(595);
      END_STATE();
    case 392:
      if (lookahead == 'e') ADVANCE(596);
      END_STATE();
    case 393:
      if (lookahead == 'e') ADVANCE(597);
      END_STATE();
    case 394:
      if (lookahead == 'l') ADVANCE(598);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_Self);
      END_STATE();
    case 396:
      if (lookahead == 'c') ADVANCE(599);
      END_STATE();
    case 397:
      if (lookahead == 'u') ADVANCE(600);
      END_STATE();
    case 398:
      if (lookahead == 'n') ADVANCE(601);
      END_STATE();
    case 399:
      if (lookahead == 'e') ADVANCE(602);
      END_STATE();
    case 400:
      if (lookahead == 'r') ADVANCE(603);
      END_STATE();
    case 401:
      if (lookahead == 'v') ADVANCE(604);
      END_STATE();
    case 402:
      if (lookahead == 'n') ADVANCE(605);
      END_STATE();
    case 403:
      if (lookahead == 'y') ADVANCE(606);
      END_STATE();
    case 404:
      if (lookahead == 'f') ADVANCE(607);
      END_STATE();
    case 405:
      if (lookahead == 'c') ADVANCE(608);
      END_STATE();
    case 406:
      if (lookahead == 'i') ADVANCE(609);
      END_STATE();
    case 407:
      if (lookahead == 'i') ADVANCE(610);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_auto);
      END_STATE();
    case 409:
      if (lookahead == 't') ADVANCE(611);
      END_STATE();
    case 410:
      if (lookahead == 'm') ADVANCE(612);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_bf16);
      END_STATE();
    case 412:
      if (lookahead == 'i') ADVANCE(613);
      END_STATE();
    case 413:
      if (lookahead == 'a') ADVANCE(614);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_bool);
      END_STATE();
    case 415:
      if (lookahead == 'k') ADVANCE(615);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_case);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_cast);
      END_STATE();
    case 418:
      if (lookahead == 'h') ADVANCE(616);
      END_STATE();
    case 419:
      if (lookahead == 'f') ADVANCE(617);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 421:
      if (lookahead == 's') ADVANCE(618);
      END_STATE();
    case 422:
      if (lookahead == 'w') ADVANCE(619);
      END_STATE();
    case 423:
      if (lookahead == 'e') ADVANCE(620);
      END_STATE();
    case 424:
      if (lookahead == 'i') ADVANCE(621);
      END_STATE();
    case 425:
      if (lookahead == 'r') ADVANCE(622);
      END_STATE();
    case 426:
      if (lookahead == 'm') ADVANCE(623);
      END_STATE();
    case 427:
      if (lookahead == 'o') ADVANCE(624);
      END_STATE();
    case 428:
      if (lookahead == 'i') ADVANCE(625);
      END_STATE();
    case 429:
      if (lookahead == 'e') ADVANCE(626);
      END_STATE();
    case 430:
      if (lookahead == 't') ADVANCE(627);
      END_STATE();
    case 431:
      if (lookahead == 'i') ADVANCE(628);
      END_STATE();
    case 432:
      if (lookahead == 'e') ADVANCE(629);
      END_STATE();
    case 433:
      if (lookahead == 'g') ADVANCE(630);
      END_STATE();
    case 434:
      if (lookahead == 't') ADVANCE(631);
      END_STATE();
    case 435:
      if (lookahead == 'u') ADVANCE(632);
      END_STATE();
    case 436:
      if (lookahead == 't') ADVANCE(633);
      END_STATE();
    case 437:
      if (lookahead == 't') ADVANCE(634);
      END_STATE();
    case 438:
      if (lookahead == 'a') ADVANCE(635);
      END_STATE();
    case 439:
      if (lookahead == 'd') ADVANCE(636);
      END_STATE();
    case 440:
      if (lookahead == 'm') ADVANCE(637);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_else);
      END_STATE();
    case 442:
      if (lookahead == 'l') ADVANCE(638);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 444:
      if (lookahead == 'i') ADVANCE(639);
      END_STATE();
    case 445:
      if (lookahead == 'r') ADVANCE(640);
      END_STATE();
    case 446:
      if (lookahead == 'n') ADVANCE(641);
      if (lookahead == 'r') ADVANCE(642);
      END_STATE();
    case 447:
      if (lookahead == 't') ADVANCE(643);
      END_STATE();
    case 448:
      if (lookahead == 'e') ADVANCE(644);
      END_STATE();
    case 449:
      if (lookahead == 'e') ADVANCE(645);
      END_STATE();
    case 450:
      if (lookahead == 'l') ADVANCE(646);
      END_STATE();
    case 451:
      if (lookahead == 'd') ADVANCE(647);
      END_STATE();
    case 452:
      if (lookahead == 'n') ADVANCE(648);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 454:
      if (lookahead == 't') ADVANCE(649);
      END_STATE();
    case 455:
      if (lookahead == '2') ADVANCE(650);
      if (lookahead == '3') ADVANCE(651);
      if (lookahead == '4') ADVANCE(652);
      END_STATE();
    case 456:
      if (lookahead == 'o') ADVANCE(653);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_goto);
      END_STATE();
    case 458:
      if (lookahead == 'p') ADVANCE(654);
      END_STATE();
    case 459:
      if (lookahead == 'l') ADVANCE(655);
      END_STATE();
    case 460:
      if (lookahead == 'p') ADVANCE(656);
      END_STATE();
    case 461:
      if (lookahead == '2') ADVANCE(657);
      if (lookahead == '3') ADVANCE(658);
      if (lookahead == '4') ADVANCE(659);
      END_STATE();
    case 462:
      if (lookahead == 'g') ADVANCE(660);
      END_STATE();
    case 463:
      if (lookahead == 'e') ADVANCE(661);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_impl);
      if (lookahead == 'e') ADVANCE(662);
      END_STATE();
    case 465:
      if (lookahead == 'r') ADVANCE(663);
      END_STATE();
    case 466:
      if (lookahead == 'n') ADVANCE(664);
      END_STATE();
    case 467:
      if (lookahead == 't') ADVANCE(665);
      END_STATE();
    case 468:
      if (lookahead == 'a') ADVANCE(666);
      END_STATE();
    case 469:
      if (lookahead == 'r') ADVANCE(667);
      END_STATE();
    case 470:
      if (lookahead == 'r') ADVANCE(668);
      END_STATE();
    case 471:
      if (lookahead == 'p') ADVANCE(669);
      END_STATE();
    case 472:
      if (lookahead == 'p') ADVANCE(670);
      END_STATE();
    case 473:
      if (lookahead == 't') ADVANCE(671);
      END_STATE();
    case 474:
      if (lookahead == 'u') ADVANCE(672);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_line);
      if (lookahead == 'a') ADVANCE(673);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_loop);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_lowp);
      END_STATE();
    case 478:
      if (lookahead == 'o') ADVANCE(674);
      END_STATE();
    case 479:
      if (lookahead == 'x') ADVANCE(675);
      END_STATE();
    case 480:
      if (lookahead == 'x') ADVANCE(676);
      END_STATE();
    case 481:
      if (lookahead == 'x') ADVANCE(677);
      END_STATE();
    case 482:
      if (lookahead == 'h') ADVANCE(678);
      END_STATE();
    case 483:
      if (lookahead == 'i') ADVANCE(679);
      END_STATE();
    case 484:
      if (lookahead == 'u') ADVANCE(680);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_meta);
      END_STATE();
    case 486:
      if (lookahead == 'l') ADVANCE(681);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_move);
      END_STATE();
    case 488:
      if (lookahead == 'b') ADVANCE(682);
      END_STATE();
    case 489:
      if (lookahead == 's') ADVANCE(683);
      END_STATE();
    case 490:
      if (lookahead == 'c') ADVANCE(684);
      END_STATE();
    case 491:
      if (lookahead == 'l') ADVANCE(685);
      if (lookahead == 't') ADVANCE(686);
      END_STATE();
    case 492:
      if (lookahead == 'r') ADVANCE(687);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_null);
      if (lookahead == 'p') ADVANCE(688);
      END_STATE();
    case 494:
      if (lookahead == 'a') ADVANCE(689);
      END_STATE();
    case 495:
      if (lookahead == 'r') ADVANCE(690);
      END_STATE();
    case 496:
      if (lookahead == 'a') ADVANCE(691);
      if (lookahead == 'o') ADVANCE(692);
      END_STATE();
    case 497:
      if (lookahead == 'i') ADVANCE(693);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_pass);
      END_STATE();
    case 499:
      if (lookahead == 'h') ADVANCE(694);
      END_STATE();
    case 500:
      if (lookahead == 'l') ADVANCE(695);
      END_STATE();
    case 501:
      if (lookahead == 't') ADVANCE(696);
      END_STATE();
    case 502:
      if (lookahead == 'i') ADVANCE(697);
      END_STATE();
    case 503:
      if (lookahead == 'e') ADVANCE(698);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_priv);
      if (lookahead == 'a') ADVANCE(699);
      END_STATE();
    case 505:
      if (lookahead == 'e') ADVANCE(700);
      END_STATE();
    case 506:
      if (lookahead == 'i') ADVANCE(701);
      END_STATE();
    case 507:
      if (lookahead == 'l') ADVANCE(702);
      END_STATE();
    case 508:
      if (lookahead == 'i') ADVANCE(703);
      END_STATE();
    case 509:
      if (lookahead == 'i') ADVANCE(704);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_read);
      if (lookahead == '_') ADVANCE(705);
      if (lookahead == 'o') ADVANCE(706);
      END_STATE();
    case 511:
      if (lookahead == 'r') ADVANCE(707);
      END_STATE();
    case 512:
      if (lookahead == 's') ADVANCE(708);
      END_STATE();
    case 513:
      if (lookahead == 't') ADVANCE(709);
      END_STATE();
    case 514:
      if (lookahead == 'i') ADVANCE(710);
      END_STATE();
    case 515:
      if (lookahead == 'u') ADVANCE(711);
      END_STATE();
    case 516:
      if (lookahead == 'r') ADVANCE(712);
      END_STATE();
    case 517:
      if (lookahead == 'r') ADVANCE(713);
      END_STATE();
    case 518:
      if (lookahead == 'f') ADVANCE(714);
      if (lookahead == 's') ADVANCE(715);
      if (lookahead == 'u') ADVANCE(716);
      END_STATE();
    case 519:
      if (lookahead == '1') ADVANCE(717);
      if (lookahead == '3') ADVANCE(718);
      if (lookahead == '8') ADVANCE(719);
      END_STATE();
    case 520:
      if (lookahead == 'm') ADVANCE(720);
      END_STATE();
    case 521:
      if (lookahead == 'e') ADVANCE(721);
      if (lookahead == 'l') ADVANCE(722);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_self);
      END_STATE();
    case 523:
      if (lookahead == 'e') ADVANCE(723);
      END_STATE();
    case 524:
      if (lookahead == 'e') ADVANCE(724);
      END_STATE();
    case 525:
      if (lookahead == 'o') ADVANCE(725);
      END_STATE();
    case 526:
      if (lookahead == 't') ADVANCE(726);
      END_STATE();
    case 527:
      if (lookahead == 'm') ADVANCE(727);
      END_STATE();
    case 528:
      if (lookahead == 'e') ADVANCE(728);
      if (lookahead == 'i') ADVANCE(729);
      END_STATE();
    case 529:
      if (lookahead == 'a') ADVANCE(730);
      END_STATE();
    case 530:
      if (lookahead == 'n') ADVANCE(731);
      END_STATE();
    case 531:
      if (lookahead == 'c') ADVANCE(732);
      END_STATE();
    case 532:
      if (lookahead == 'a') ADVANCE(733);
      END_STATE();
    case 533:
      if (lookahead == 'o') ADVANCE(734);
      END_STATE();
    case 534:
      if (lookahead == 'r') ADVANCE(735);
      END_STATE();
    case 535:
      if (lookahead == 'c') ADVANCE(736);
      END_STATE();
    case 536:
      if (lookahead == 'e') ADVANCE(737);
      END_STATE();
    case 537:
      if (lookahead == 'f') ADVANCE(738);
      END_STATE();
    case 538:
      if (lookahead == 'n') ADVANCE(739);
      END_STATE();
    case 539:
      if (lookahead == 'l') ADVANCE(740);
      END_STATE();
    case 540:
      if (lookahead == 'u') ADVANCE(741);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_this);
      END_STATE();
    case 542:
      if (lookahead == 'a') ADVANCE(742);
      END_STATE();
    case 543:
      if (lookahead == 'w') ADVANCE(743);
      END_STATE();
    case 544:
      if (lookahead == 't') ADVANCE(744);
      END_STATE();
    case 545:
      if (lookahead == 'n') ADVANCE(745);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_type);
      if (lookahead == 'd') ADVANCE(746);
      if (lookahead == 'i') ADVANCE(747);
      if (lookahead == 'n') ADVANCE(748);
      if (lookahead == 'o') ADVANCE(749);
      END_STATE();
    case 548:
      if (lookahead == 'g') ADVANCE(750);
      END_STATE();
    case 549:
      if (lookahead == 'o') ADVANCE(751);
      END_STATE();
    case 550:
      if (lookahead == 'n') ADVANCE(752);
      END_STATE();
    case 551:
      if (lookahead == 's') ADVANCE(753);
      END_STATE();
    case 552:
      if (lookahead == 'm') ADVANCE(754);
      END_STATE();
    case 553:
      if (lookahead == 'f') ADVANCE(755);
      END_STATE();
    case 554:
      if (lookahead == 'g') ADVANCE(756);
      if (lookahead == 'z') ADVANCE(757);
      END_STATE();
    case 555:
      if (lookahead == 'p') ADVANCE(758);
      END_STATE();
    case 556:
      if (lookahead == 'g') ADVANCE(759);
      END_STATE();
    case 557:
      if (lookahead == 'p') ADVANCE(760);
      END_STATE();
    case 558:
      if (lookahead == 't') ADVANCE(761);
      END_STATE();
    case 559:
      if (lookahead == 'i') ADVANCE(762);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_vec2);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_vec3);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_vec4);
      END_STATE();
    case 563:
      if (lookahead == 'o') ADVANCE(763);
      END_STATE();
    case 564:
      if (lookahead == 'e') ADVANCE(764);
      END_STATE();
    case 565:
      if (lookahead == 'u') ADVANCE(765);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 567:
      if (lookahead == 't') ADVANCE(766);
      END_STATE();
    case 568:
      if (lookahead == 'r') ADVANCE(767);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_wgsl);
      END_STATE();
    case 570:
      if (lookahead == 'e') ADVANCE(768);
      END_STATE();
    case 571:
      if (lookahead == 'e') ADVANCE(769);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 573:
      if (lookahead == 'g') ADVANCE(770);
      END_STATE();
    case 574:
      if (lookahead == 'e') ADVANCE(771);
      END_STATE();
    case 575:
      if (lookahead == 'd') ADVANCE(772);
      END_STATE();
    case 576:
      if (lookahead == 'd') ADVANCE(773);
      END_STATE();
    case 577:
      if (lookahead == 'S') ADVANCE(774);
      END_STATE();
    case 578:
      if (lookahead == 'r') ADVANCE(775);
      END_STATE();
    case 579:
      if (lookahead == 'd') ADVANCE(776);
      END_STATE();
    case 580:
      if (lookahead == 'l') ADVANCE(777);
      END_STATE();
    case 581:
      if (lookahead == 't') ADVANCE(778);
      END_STATE();
    case 582:
      if (lookahead == 'm') ADVANCE(779);
      END_STATE();
    case 583:
      if (lookahead == 'S') ADVANCE(780);
      END_STATE();
    case 584:
      if (lookahead == 'n') ADVANCE(781);
      END_STATE();
    case 585:
      if (lookahead == 't') ADVANCE(782);
      END_STATE();
    case 586:
      if (lookahead == 'h') ADVANCE(783);
      END_STATE();
    case 587:
      if (lookahead == 'P') ADVANCE(784);
      END_STATE();
    case 588:
      if (lookahead == 't') ADVANCE(785);
      END_STATE();
    case 589:
      if (lookahead == 't') ADVANCE(786);
      END_STATE();
    case 590:
      if (lookahead == 'S') ADVANCE(787);
      END_STATE();
    case 591:
      if (lookahead == 'S') ADVANCE(788);
      END_STATE();
    case 592:
      if (lookahead == 'f') ADVANCE(789);
      END_STATE();
    case 593:
      if (lookahead == 'e') ADVANCE(790);
      END_STATE();
    case 594:
      if (lookahead == 'u') ADVANCE(791);
      END_STATE();
    case 595:
      if (lookahead == 't') ADVANCE(792);
      END_STATE();
    case 596:
      if (lookahead == 'r') ADVANCE(793);
      END_STATE();
    case 597:
      if (lookahead == 'r') ADVANCE(794);
      END_STATE();
    case 598:
      if (lookahead == 'e') ADVANCE(795);
      END_STATE();
    case 599:
      if (lookahead == 't') ADVANCE(796);
      END_STATE();
    case 600:
      if (lookahead == 'r') ADVANCE(797);
      END_STATE();
    case 601:
      if (lookahead == 'g') ADVANCE(798);
      END_STATE();
    case 602:
      if (lookahead == 'x') ADVANCE(799);
      END_STATE();
    case 603:
      if (lookahead == 'a') ADVANCE(800);
      END_STATE();
    case 604:
      if (lookahead == 'e') ADVANCE(801);
      END_STATE();
    case 605:
      if (lookahead == 'a') ADVANCE(802);
      if (lookahead == 'o') ADVANCE(803);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_array);
      END_STATE();
    case 607:
      if (lookahead == 'r') ADVANCE(804);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_async);
      END_STATE();
    case 609:
      if (lookahead == 'c') ADVANCE(805);
      END_STATE();
    case 610:
      if (lookahead == 'b') ADVANCE(806);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_await);
      END_STATE();
    case 612:
      if (lookahead == 'e') ADVANCE(807);
      END_STATE();
    case 613:
      if (lookahead == 'n') ADVANCE(808);
      END_STATE();
    case 614:
      if (lookahead == 's') ADVANCE(809);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_break);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_catch);
      END_STATE();
    case 617:
      if (lookahead == 'e') ADVANCE(810);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 619:
      if (lookahead == 'a') ADVANCE(811);
      END_STATE();
    case 620:
      if (lookahead == 't') ADVANCE(812);
      END_STATE();
    case 621:
      if (lookahead == 'e') ADVANCE(813);
      END_STATE();
    case 622:
      if (lookahead == 'e') ADVANCE(814);
      END_STATE();
    case 623:
      if (lookahead == 'n') ADVANCE(815);
      END_STATE();
    case 624:
      if (lookahead == 'n') ADVANCE(816);
      END_STATE();
    case 625:
      if (lookahead == 'l') ADVANCE(817);
      END_STATE();
    case 626:
      if (lookahead == 'p') ADVANCE(818);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_const);
      if (lookahead == '_') ADVANCE(819);
      if (lookahead == 'e') ADVANCE(820);
      if (lookahead == 'i') ADVANCE(821);
      END_STATE();
    case 628:
      if (lookahead == 'n') ADVANCE(822);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_crate);
      END_STATE();
    case 630:
      if (lookahead == 'g') ADVANCE(823);
      END_STATE();
    case 631:
      if (lookahead == 'y') ADVANCE(824);
      END_STATE();
    case 632:
      if (lookahead == 'l') ADVANCE(825);
      END_STATE();
    case 633:
      if (lookahead == 'e') ADVANCE(826);
      END_STATE();
    case 634:
      if (lookahead == 'e') ADVANCE(827);
      END_STATE();
    case 635:
      if (lookahead == 'r') ADVANCE(828);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_dword);
      END_STATE();
    case 637:
      if (lookahead == 'i') ADVANCE(829);
      END_STATE();
    case 638:
      if (lookahead == 'e') ADVANCE(830);
      END_STATE();
    case 639:
      if (lookahead == 'c') ADVANCE(831);
      END_STATE();
    case 640:
      if (lookahead == 't') ADVANCE(832);
      END_STATE();
    case 641:
      if (lookahead == 'd') ADVANCE(833);
      END_STATE();
    case 642:
      if (lookahead == 'n') ADVANCE(834);
      END_STATE();
    case 643:
      if (lookahead == 'h') ADVANCE(835);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 645:
      if (lookahead == 'r') ADVANCE(836);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_final);
      if (lookahead == 'l') ADVANCE(837);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_fixed);
      END_STATE();
    case 648:
      if (lookahead == 'd') ADVANCE(838);
      END_STATE();
    case 649:
      if (lookahead == 'i') ADVANCE(839);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_fvec2);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_fvec3);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_fvec4);
      END_STATE();
    case 653:
      if (lookahead == 'u') ADVANCE(840);
      END_STATE();
    case 654:
      if (lookahead == 's') ADVANCE(841);
      END_STATE();
    case 655:
      if (lookahead == 'e') ADVANCE(842);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_highp);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_hvec2);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_hvec3);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_hvec4);
      END_STATE();
    case 660:
      if (lookahead == 'e') ADVANCE(843);
      END_STATE();
    case 661:
      if (lookahead == '1') ADVANCE(844);
      if (lookahead == '2') ADVANCE(845);
      if (lookahead == '3') ADVANCE(846);
      if (lookahead == 'B') ADVANCE(847);
      if (lookahead == 'C') ADVANCE(848);
      END_STATE();
    case 662:
      if (lookahead == 'm') ADVANCE(849);
      END_STATE();
    case 663:
      if (lookahead == 't') ADVANCE(850);
      END_STATE();
    case 664:
      if (lookahead == 'e') ADVANCE(851);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_inout);
      END_STATE();
    case 666:
      if (lookahead == 'n') ADVANCE(852);
      END_STATE();
    case 667:
      if (lookahead == 'f') ADVANCE(853);
      END_STATE();
    case 668:
      if (lookahead == 'i') ADVANCE(854);
      END_STATE();
    case 669:
      if (lookahead == 'l') ADVANCE(855);
      END_STATE();
    case 670:
      if (lookahead == 'a') ADVANCE(856);
      END_STATE();
    case 671:
      if (lookahead == 'u') ADVANCE(857);
      END_STATE();
    case 672:
      if (lookahead == 't') ADVANCE(858);
      END_STATE();
    case 673:
      if (lookahead == 'd') ADVANCE(859);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_macro);
      if (lookahead == '_') ADVANCE(860);
      END_STATE();
    case 675:
      if (lookahead == '2') ADVANCE(861);
      if (lookahead == '3') ADVANCE(862);
      if (lookahead == '4') ADVANCE(863);
      END_STATE();
    case 676:
      if (lookahead == '2') ADVANCE(864);
      if (lookahead == '3') ADVANCE(865);
      if (lookahead == '4') ADVANCE(866);
      END_STATE();
    case 677:
      if (lookahead == '2') ADVANCE(867);
      if (lookahead == '3') ADVANCE(868);
      if (lookahead == '4') ADVANCE(869);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 679:
      if (lookahead == 'x') ADVANCE(870);
      END_STATE();
    case 680:
      if (lookahead == 'm') ADVANCE(871);
      END_STATE();
    case 681:
      if (lookahead == 'e') ADVANCE(872);
      END_STATE();
    case 682:
      if (lookahead == 'l') ADVANCE(873);
      END_STATE();
    case 683:
      if (lookahead == 'p') ADVANCE(874);
      END_STATE();
    case 684:
      if (lookahead == 'e') ADVANCE(875);
      END_STATE();
    case 685:
      if (lookahead == 'i') ADVANCE(876);
      END_STATE();
    case 686:
      if (lookahead == 'e') ADVANCE(877);
      END_STATE();
    case 687:
      if (lookahead == 's') ADVANCE(878);
      END_STATE();
    case 688:
      if (lookahead == 't') ADVANCE(879);
      END_STATE();
    case 689:
      if (lookahead == 't') ADVANCE(880);
      END_STATE();
    case 690:
      if (lookahead == 'i') ADVANCE(881);
      END_STATE();
    case 691:
      if (lookahead == 'g') ADVANCE(882);
      END_STATE();
    case 692:
      if (lookahead == 'f') ADVANCE(883);
      END_STATE();
    case 693:
      if (lookahead == 't') ADVANCE(884);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_patch);
      END_STATE();
    case 695:
      if (lookahead == 'f') ADVANCE(885);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_point);
      END_STATE();
    case 697:
      if (lookahead == 's') ADVANCE(886);
      END_STATE();
    case 698:
      if (lookahead == 'r') ADVANCE(887);
      END_STATE();
    case 699:
      if (lookahead == 't') ADVANCE(888);
      END_STATE();
    case 700:
      if (lookahead == 'c') ADVANCE(889);
      END_STATE();
    case 701:
      if (lookahead == 'c') ADVANCE(890);
      END_STATE();
    case 702:
      if (lookahead == 'o') ADVANCE(891);
      END_STATE();
    case 703:
      if (lookahead == 'n') ADVANCE(892);
      END_STATE();
    case 704:
      if (lookahead == 'n') ADVANCE(893);
      END_STATE();
    case 705:
      if (lookahead == 'w') ADVANCE(894);
      END_STATE();
    case 706:
      if (lookahead == 'n') ADVANCE(895);
      END_STATE();
    case 707:
      if (lookahead == 'd') ADVANCE(896);
      END_STATE();
    case 708:
      if (lookahead == 't') ADVANCE(897);
      END_STATE();
    case 709:
      if (lookahead == 'e') ADVANCE(898);
      END_STATE();
    case 710:
      if (lookahead == 'r') ADVANCE(899);
      END_STATE();
    case 711:
      if (lookahead == 'r') ADVANCE(900);
      END_STATE();
    case 712:
      if (lookahead == 'i') ADVANCE(901);
      END_STATE();
    case 713:
      if (lookahead == 'n') ADVANCE(902);
      END_STATE();
    case 714:
      if (lookahead == 'l') ADVANCE(903);
      END_STATE();
    case 715:
      if (lookahead == 'i') ADVANCE(904);
      END_STATE();
    case 716:
      if (lookahead == 'i') ADVANCE(905);
      END_STATE();
    case 717:
      if (lookahead == '6') ADVANCE(906);
      END_STATE();
    case 718:
      if (lookahead == '2') ADVANCE(907);
      END_STATE();
    case 719:
      if (lookahead == 's') ADVANCE(908);
      if (lookahead == 'u') ADVANCE(909);
      END_STATE();
    case 720:
      if (lookahead == 'a') ADVANCE(910);
      END_STATE();
    case 721:
      if (lookahead == 'r') ADVANCE(911);
      END_STATE();
    case 722:
      if (lookahead == 'e') ADVANCE(912);
      END_STATE();
    case 723:
      if (lookahead == 'd') ADVANCE(913);
      END_STATE();
    case 724:
      if (lookahead == 'd') ADVANCE(914);
      END_STATE();
    case 725:
      if (lookahead == 'f') ADVANCE(915);
      END_STATE();
    case 726:
      if (lookahead == 'h') ADVANCE(916);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_snorm);
      END_STATE();
    case 728:
      if (lookahead == 'b') ADVANCE(917);
      END_STATE();
    case 729:
      if (lookahead == 'c') ADVANCE(918);
      END_STATE();
    case 730:
      if (lookahead == 'g') ADVANCE(919);
      END_STATE();
    case 731:
      if (lookahead == 'g') ADVANCE(920);
      END_STATE();
    case 732:
      if (lookahead == 't') ADVANCE(921);
      END_STATE();
    case 733:
      if (lookahead == 's') ADVANCE(922);
      END_STATE();
    case 734:
      if (lookahead == 'u') ADVANCE(923);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_super);
      if (lookahead == 'p') ADVANCE(924);
      END_STATE();
    case 736:
      if (lookahead == 'h') ADVANCE(925);
      END_STATE();
    case 737:
      if (lookahead == 't') ADVANCE(926);
      END_STATE();
    case 738:
      if (lookahead == 'e') ADVANCE(927);
      END_STATE();
    case 739:
      if (lookahead == 'i') ADVANCE(928);
      END_STATE();
    case 740:
      if (lookahead == 'a') ADVANCE(929);
      END_STATE();
    case 741:
      if (lookahead == 'r') ADVANCE(930);
      END_STATE();
    case 742:
      if (lookahead == 'd') ADVANCE(931);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_throw);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_trait);
      END_STATE();
    case 745:
      if (lookahead == 'g') ADVANCE(932);
      END_STATE();
    case 746:
      if (lookahead == 'e') ADVANCE(933);
      END_STATE();
    case 747:
      if (lookahead == 'd') ADVANCE(934);
      END_STATE();
    case 748:
      if (lookahead == 'a') ADVANCE(935);
      END_STATE();
    case 749:
      if (lookahead == 'f') ADVANCE(936);
      END_STATE();
    case 750:
      if (lookahead == 'e') ADVANCE(937);
      END_STATE();
    case 751:
      if (lookahead == 'r') ADVANCE(938);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 753:
      if (lookahead == 's') ADVANCE(939);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_unorm);
      END_STATE();
    case 755:
      if (lookahead == 'e') ADVANCE(940);
      END_STATE();
    case 756:
      if (lookahead == 'n') ADVANCE(941);
      END_STATE();
    case 757:
      if (lookahead == 'e') ADVANCE(942);
      END_STATE();
    case 758:
      if (lookahead == 'l') ADVANCE(943);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 760:
      if (lookahead == 'a') ADVANCE(944);
      END_STATE();
    case 761:
      if (lookahead == 'u') ADVANCE(945);
      END_STATE();
    case 762:
      if (lookahead == 'n') ADVANCE(946);
      END_STATE();
    case 763:
      if (lookahead == 'r') ADVANCE(947);
      END_STATE();
    case 764:
      if (lookahead == 'x') ADVANCE(948);
      END_STATE();
    case 765:
      if (lookahead == 'a') ADVANCE(949);
      END_STATE();
    case 766:
      if (lookahead == 'i') ADVANCE(950);
      END_STATE();
    case 767:
      if (lookahead == '_') ADVANCE(951);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_while);
      END_STATE();
    case 770:
      if (lookahead == 'r') ADVANCE(952);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_write);
      if (lookahead == 'o') ADVANCE(953);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(anon_sym_yield);
      END_STATE();
    case 773:
      if (lookahead == 'S') ADVANCE(954);
      END_STATE();
    case 774:
      if (lookahead == 't') ADVANCE(955);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(anon_sym_Buffer);
      END_STATE();
    case 776:
      if (lookahead == 'd') ADVANCE(956);
      END_STATE();
    case 777:
      if (lookahead == 'e') ADVANCE(957);
      END_STATE();
    case 778:
      if (lookahead == 'e') ADVANCE(958);
      END_STATE();
    case 779:
      if (lookahead == 'e') ADVANCE(959);
      END_STATE();
    case 780:
      if (lookahead == 't') ADVANCE(960);
      END_STATE();
    case 781:
      if (lookahead == 'S') ADVANCE(961);
      END_STATE();
    case 782:
      if (lookahead == 'r') ADVANCE(962);
      END_STATE();
    case 783:
      if (lookahead == 'a') ADVANCE(963);
      END_STATE();
    case 784:
      if (lookahead == 'a') ADVANCE(964);
      END_STATE();
    case 785:
      if (lookahead == 'r') ADVANCE(965);
      END_STATE();
    case 786:
      if (lookahead == 'P') ADVANCE(966);
      END_STATE();
    case 787:
      if (lookahead == 'h') ADVANCE(967);
      END_STATE();
    case 788:
      if (lookahead == 't') ADVANCE(968);
      END_STATE();
    case 789:
      if (lookahead == 'e') ADVANCE(969);
      END_STATE();
    case 790:
      if (lookahead == 'A') ADVANCE(970);
      END_STATE();
    case 791:
      if (lookahead == 'c') ADVANCE(971);
      END_STATE();
    case 792:
      if (lookahead == 'u') ADVANCE(972);
      END_STATE();
    case 793:
      if (lookahead == 'i') ADVANCE(973);
      END_STATE();
    case 794:
      if (lookahead == 'T') ADVANCE(974);
      END_STATE();
    case 795:
      if (lookahead == 'r') ADVANCE(975);
      END_STATE();
    case 796:
      if (lookahead == 'u') ADVANCE(976);
      END_STATE();
    case 797:
      if (lookahead == 'e') ADVANCE(977);
      END_STATE();
    case 798:
      if (lookahead == 'l') ADVANCE(978);
      END_STATE();
    case 799:
      if (lookahead == 'S') ADVANCE(979);
      END_STATE();
    case 800:
      if (lookahead == 'c') ADVANCE(980);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(anon_sym_active);
      END_STATE();
    case 802:
      if (lookahead == 's') ADVANCE(981);
      END_STATE();
    case 803:
      if (lookahead == 'f') ADVANCE(982);
      END_STATE();
    case 804:
      if (lookahead == 'a') ADVANCE(983);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_atomic);
      if (lookahead == '_') ADVANCE(984);
      END_STATE();
    case 806:
      if (lookahead == 'u') ADVANCE(985);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(anon_sym_become);
      END_STATE();
    case 808:
      if (lookahead == 'g') ADVANCE(986);
      END_STATE();
    case 809:
      if (lookahead == 't') ADVANCE(987);
      END_STATE();
    case 810:
      if (lookahead == 'r') ADVANCE(988);
      END_STATE();
    case 811:
      if (lookahead == 'i') ADVANCE(989);
      END_STATE();
    case 812:
      if (lookahead == 'u') ADVANCE(990);
      END_STATE();
    case 813:
      if (lookahead == 'l') ADVANCE(991);
      END_STATE();
    case 814:
      if (lookahead == 'n') ADVANCE(992);
      END_STATE();
    case 815:
      if (lookahead == '_') ADVANCE(993);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(anon_sym_common);
      END_STATE();
    case 817:
      if (lookahead == 'e') ADVANCE(994);
      END_STATE();
    case 818:
      if (lookahead == 't') ADVANCE(995);
      END_STATE();
    case 819:
      if (lookahead == 'c') ADVANCE(996);
      END_STATE();
    case 820:
      if (lookahead == 'v') ADVANCE(997);
      if (lookahead == 'x') ADVANCE(998);
      END_STATE();
    case 821:
      if (lookahead == 'n') ADVANCE(999);
      END_STATE();
    case 822:
      if (lookahead == 'u') ADVANCE(1000);
      END_STATE();
    case 823:
      if (lookahead == 'e') ADVANCE(1001);
      END_STATE();
    case 824:
      if (lookahead == 'p') ADVANCE(1002);
      END_STATE();
    case 825:
      if (lookahead == 't') ADVANCE(1003);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(anon_sym_demote);
      if (lookahead == '_') ADVANCE(1004);
      END_STATE();
    case 828:
      if (lookahead == 'd') ADVANCE(1005);
      END_STATE();
    case 829:
      if (lookahead == 'c') ADVANCE(1006);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_enable);
      END_STATE();
    case 831:
      if (lookahead == 'i') ADVANCE(1007);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 833:
      if (lookahead == 's') ADVANCE(1008);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(anon_sym_extern);
      if (lookahead == 'a') ADVANCE(1009);
      END_STATE();
    case 835:
      if (lookahead == 'r') ADVANCE(1010);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(anon_sym_filter);
      END_STATE();
    case 837:
      if (lookahead == 'y') ADVANCE(1011);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(anon_sym_friend);
      END_STATE();
    case 839:
      if (lookahead == 'o') ADVANCE(1012);
      END_STATE();
    case 840:
      if (lookahead == 'p') ADVANCE(1013);
      END_STATE();
    case 841:
      if (lookahead == 'h') ADVANCE(1014);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(anon_sym_handle);
      END_STATE();
    case 843:
      if (lookahead == '1') ADVANCE(1015);
      if (lookahead == '2') ADVANCE(1016);
      if (lookahead == '3') ADVANCE(1017);
      if (lookahead == 'B') ADVANCE(1018);
      if (lookahead == 'C') ADVANCE(1019);
      END_STATE();
    case 844:
      if (lookahead == 'D') ADVANCE(1020);
      END_STATE();
    case 845:
      if (lookahead == 'D') ADVANCE(1021);
      END_STATE();
    case 846:
      if (lookahead == 'D') ADVANCE(1022);
      END_STATE();
    case 847:
      if (lookahead == 'u') ADVANCE(1023);
      END_STATE();
    case 848:
      if (lookahead == 'u') ADVANCE(1024);
      END_STATE();
    case 849:
      if (lookahead == 'e') ADVANCE(1025);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(anon_sym_inline);
      END_STATE();
    case 852:
      if (lookahead == 'c') ADVANCE(1026);
      END_STATE();
    case 853:
      if (lookahead == 'a') ADVANCE(1027);
      END_STATE();
    case 854:
      if (lookahead == 'a') ADVANCE(1028);
      END_STATE();
    case 855:
      if (lookahead == 'e') ADVANCE(1029);
      END_STATE();
    case 856:
      if (lookahead == 's') ADVANCE(1030);
      END_STATE();
    case 857:
      if (lookahead == 'r') ADVANCE(1031);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(anon_sym_layout);
      END_STATE();
    case 859:
      if (lookahead == 'j') ADVANCE(1032);
      END_STATE();
    case 860:
      if (lookahead == 'r') ADVANCE(1033);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_mat2x2);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_mat2x3);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_mat2x4);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_mat3x2);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_mat3x3);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_mat3x4);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_mat4x2);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_mat4x3);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_mat4x4);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(anon_sym_matrix);
      END_STATE();
    case 871:
      if (lookahead == 'p') ADVANCE(1034);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 873:
      if (lookahead == 'e') ADVANCE(1035);
      END_STATE();
    case 874:
      if (lookahead == 'a') ADVANCE(1036);
      END_STATE();
    case 875:
      if (lookahead == 'p') ADVANCE(1037);
      END_STATE();
    case 876:
      if (lookahead == 'n') ADVANCE(1038);
      END_STATE();
    case 877:
      if (lookahead == 'r') ADVANCE(1039);
      END_STATE();
    case 878:
      if (lookahead == 'p') ADVANCE(1040);
      END_STATE();
    case 879:
      if (lookahead == 'r') ADVANCE(1041);
      END_STATE();
    case 880:
      if (lookahead == 'o') ADVANCE(1042);
      END_STATE();
    case 881:
      if (lookahead == 'd') ADVANCE(1043);
      END_STATE();
    case 882:
      if (lookahead == 'e') ADVANCE(1044);
      END_STATE();
    case 883:
      if (lookahead == 'f') ADVANCE(1045);
      END_STATE();
    case 884:
      if (lookahead == 'i') ADVANCE(1046);
      END_STATE();
    case 885:
      if (lookahead == 'r') ADVANCE(1047);
      END_STATE();
    case 886:
      if (lookahead == 'e') ADVANCE(1048);
      if (lookahead == 'i') ADVANCE(1049);
      END_STATE();
    case 887:
      if (lookahead == 'g') ADVANCE(1050);
      END_STATE();
    case 888:
      if (lookahead == 'e') ADVANCE(1051);
      END_STATE();
    case 889:
      if (lookahead == 't') ADVANCE(1052);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 891:
      if (lookahead == 'a') ADVANCE(1053);
      END_STATE();
    case 892:
      if (lookahead == 't') ADVANCE(1054);
      END_STATE();
    case 893:
      if (lookahead == 't') ADVANCE(1055);
      END_STATE();
    case 894:
      if (lookahead == 'r') ADVANCE(1056);
      END_STATE();
    case 895:
      if (lookahead == 'l') ADVANCE(1057);
      END_STATE();
    case 896:
      if (lookahead == 'l') ADVANCE(1058);
      END_STATE();
    case 897:
      if (lookahead == 'e') ADVANCE(1059);
      END_STATE();
    case 898:
      if (lookahead == 'r') ADVANCE(1060);
      END_STATE();
    case 899:
      if (lookahead == 'e') ADVANCE(1061);
      END_STATE();
    case 900:
      if (lookahead == 'c') ADVANCE(1062);
      END_STATE();
    case 901:
      if (lookahead == 'c') ADVANCE(1063);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_return);
      END_STATE();
    case 903:
      if (lookahead == 'o') ADVANCE(1064);
      END_STATE();
    case 904:
      if (lookahead == 'n') ADVANCE(1065);
      END_STATE();
    case 905:
      if (lookahead == 'n') ADVANCE(1066);
      END_STATE();
    case 906:
      if (lookahead == 'f') ADVANCE(1067);
      if (lookahead == 's') ADVANCE(1068);
      if (lookahead == 'u') ADVANCE(1069);
      END_STATE();
    case 907:
      if (lookahead == 'f') ADVANCE(1070);
      if (lookahead == 's') ADVANCE(1071);
      if (lookahead == 'u') ADVANCE(1072);
      END_STATE();
    case 908:
      if (lookahead == 'i') ADVANCE(1073);
      if (lookahead == 'n') ADVANCE(1074);
      END_STATE();
    case 909:
      if (lookahead == 'i') ADVANCE(1075);
      if (lookahead == 'n') ADVANCE(1076);
      END_STATE();
    case 910:
      if (lookahead == 'j') ADVANCE(1077);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(anon_sym_samper);
      END_STATE();
    case 912:
      if (lookahead == 'r') ADVANCE(1078);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(anon_sym_shared);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(anon_sym_signed);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(anon_sym_sizeof);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(anon_sym_smooth);
      END_STATE();
    case 917:
      if (lookahead == 'l') ADVANCE(1079);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(anon_sym_static);
      if (lookahead == 'A') ADVANCE(1080);
      if (lookahead == '_') ADVANCE(1081);
      END_STATE();
    case 919:
      if (lookahead == 'e') ADVANCE(1082);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_struct);
      END_STATE();
    case 922:
      if (lookahead == 's') ADVANCE(1083);
      END_STATE();
    case 923:
      if (lookahead == 't') ADVANCE(1084);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(anon_sym_superp);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_switch);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(anon_sym_target);
      END_STATE();
    case 927:
      if (lookahead == 'r') ADVANCE(1085);
      END_STATE();
    case 928:
      if (lookahead == 'q') ADVANCE(1086);
      END_STATE();
    case 929:
      if (lookahead == 't') ADVANCE(1087);
      END_STATE();
    case 930:
      if (lookahead == 'e') ADVANCE(1088);
      END_STATE();
    case 931:
      if (lookahead == '_') ADVANCE(1089);
      END_STATE();
    case 932:
      if (lookahead == 'l') ADVANCE(1090);
      END_STATE();
    case 933:
      if (lookahead == 'f') ADVANCE(1091);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(anon_sym_typeid);
      END_STATE();
    case 935:
      if (lookahead == 'm') ADVANCE(1092);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(anon_sym_typeof);
      END_STATE();
    case 937:
      if (lookahead == '1') ADVANCE(1093);
      if (lookahead == '2') ADVANCE(1094);
      if (lookahead == '3') ADVANCE(1095);
      if (lookahead == 'B') ADVANCE(1096);
      if (lookahead == 'C') ADVANCE(1097);
      END_STATE();
    case 938:
      if (lookahead == 'm') ADVANCE(1098);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(anon_sym_unsafe);
      END_STATE();
    case 941:
      if (lookahead == 'e') ADVANCE(1099);
      END_STATE();
    case 942:
      if (lookahead == 'd') ADVANCE(1100);
      END_STATE();
    case 943:
      if (lookahead == 'e') ADVANCE(1101);
      END_STATE();
    case 944:
      if (lookahead == 's') ADVANCE(1102);
      END_STATE();
    case 945:
      if (lookahead == 'r') ADVANCE(1103);
      END_STATE();
    case 946:
      if (lookahead == 'g') ADVANCE(1104);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(anon_sym_vector);
      END_STATE();
    case 948:
      if (lookahead == 'f') ADVANCE(1105);
      END_STATE();
    case 949:
      if (lookahead == 'l') ADVANCE(1106);
      END_STATE();
    case 950:
      if (lookahead == 'l') ADVANCE(1107);
      END_STATE();
    case 951:
      if (lookahead == 't') ADVANCE(1108);
      END_STATE();
    case 952:
      if (lookahead == 'o') ADVANCE(1109);
      END_STATE();
    case 953:
      if (lookahead == 'n') ADVANCE(1110);
      END_STATE();
    case 954:
      if (lookahead == 't') ADVANCE(1111);
      END_STATE();
    case 955:
      if (lookahead == 'a') ADVANCE(1112);
      END_STATE();
    case 956:
      if (lookahead == 'r') ADVANCE(1113);
      END_STATE();
    case 957:
      if (lookahead == 'S') ADVANCE(1114);
      END_STATE();
    case 958:
      if (lookahead == 'S') ADVANCE(1115);
      END_STATE();
    case 959:
      if (lookahead == 'S') ADVANCE(1116);
      END_STATE();
    case 960:
      if (lookahead == 'e') ADVANCE(1117);
      END_STATE();
    case 961:
      if (lookahead == 'h') ADVANCE(1118);
      END_STATE();
    case 962:
      if (lookahead == 'y') ADVANCE(1119);
      END_STATE();
    case 963:
      if (lookahead == 'd') ADVANCE(1120);
      END_STATE();
    case 964:
      if (lookahead == 't') ADVANCE(1121);
      END_STATE();
    case 965:
      if (lookahead == 'e') ADVANCE(1122);
      END_STATE();
    case 966:
      if (lookahead == 'a') ADVANCE(1123);
      END_STATE();
    case 967:
      if (lookahead == 'a') ADVANCE(1124);
      END_STATE();
    case 968:
      if (lookahead == 'r') ADVANCE(1125);
      END_STATE();
    case 969:
      if (lookahead == 'r') ADVANCE(1126);
      END_STATE();
    case 970:
      if (lookahead == 'd') ADVANCE(1127);
      END_STATE();
    case 971:
      if (lookahead == 't') ADVANCE(1128);
      END_STATE();
    case 972:
      if (lookahead == 'r') ADVANCE(1129);
      END_STATE();
    case 973:
      if (lookahead == 'z') ADVANCE(1130);
      END_STATE();
    case 974:
      if (lookahead == 'a') ADVANCE(1131);
      END_STATE();
    case 975:
      if (lookahead == 'C') ADVANCE(1132);
      if (lookahead == 'S') ADVANCE(1133);
      END_STATE();
    case 976:
      if (lookahead == 'r') ADVANCE(1134);
      END_STATE();
    case 977:
      if (lookahead == '1') ADVANCE(1135);
      if (lookahead == '2') ADVANCE(1136);
      if (lookahead == '3') ADVANCE(1137);
      if (lookahead == 'C') ADVANCE(1138);
      END_STATE();
    case 978:
      if (lookahead == 'e') ADVANCE(1139);
      END_STATE();
    case 979:
      if (lookahead == 'h') ADVANCE(1140);
      END_STATE();
    case 980:
      if (lookahead == 't') ADVANCE(1141);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(anon_sym_alignas);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(anon_sym_alignof);
      END_STATE();
    case 983:
      if (lookahead == 'g') ADVANCE(1142);
      END_STATE();
    case 984:
      if (lookahead == 'u') ADVANCE(1143);
      END_STATE();
    case 985:
      if (lookahead == 't') ADVANCE(1144);
      END_STATE();
    case 986:
      if (lookahead == '_') ADVANCE(1145);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_bitcast);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(anon_sym_cbuffer);
      END_STATE();
    case 989:
      if (lookahead == 't') ADVANCE(1146);
      END_STATE();
    case 990:
      if (lookahead == 'r') ADVANCE(1147);
      END_STATE();
    case 991:
      if (lookahead == 'd') ADVANCE(1148);
      END_STATE();
    case 992:
      if (lookahead == 't') ADVANCE(1149);
      END_STATE();
    case 993:
      if (lookahead == 'm') ADVANCE(1150);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(anon_sym_compile);
      if (lookahead == '_') ADVANCE(1151);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(anon_sym_concept);
      END_STATE();
    case 996:
      if (lookahead == 'a') ADVANCE(1152);
      END_STATE();
    case 997:
      if (lookahead == 'a') ADVANCE(1153);
      END_STATE();
    case 998:
      if (lookahead == 'p') ADVANCE(1154);
      END_STATE();
    case 999:
      if (lookahead == 'i') ADVANCE(1155);
      END_STATE();
    case 1000:
      if (lookahead == 'e') ADVANCE(1156);
      if (lookahead == 'i') ADVANCE(1157);
      END_STATE();
    case 1001:
      if (lookahead == 'r') ADVANCE(1158);
      END_STATE();
    case 1002:
      if (lookahead == 'e') ADVANCE(1159);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym_default);
      END_STATE();
    case 1004:
      if (lookahead == 't') ADVANCE(1160);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym_discard);
      END_STATE();
    case 1006:
      if (lookahead == '_') ADVANCE(1161);
      END_STATE();
    case 1007:
      if (lookahead == 't') ADVANCE(1162);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 1009:
      if (lookahead == 'l') ADVANCE(1163);
      END_STATE();
    case 1010:
      if (lookahead == 'o') ADVANCE(1164);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(anon_sym_finally);
      END_STATE();
    case 1012:
      if (lookahead == 'n') ADVANCE(1165);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(anon_sym_fxgroup);
      END_STATE();
    case 1014:
      if (lookahead == 'a') ADVANCE(1166);
      END_STATE();
    case 1015:
      if (lookahead == 'D') ADVANCE(1167);
      END_STATE();
    case 1016:
      if (lookahead == 'D') ADVANCE(1168);
      END_STATE();
    case 1017:
      if (lookahead == 'D') ADVANCE(1169);
      END_STATE();
    case 1018:
      if (lookahead == 'u') ADVANCE(1170);
      END_STATE();
    case 1019:
      if (lookahead == 'u') ADVANCE(1171);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(anon_sym_image1D);
      if (lookahead == 'A') ADVANCE(1172);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(anon_sym_image2D);
      if (lookahead == 'A') ADVANCE(1173);
      if (lookahead == 'M') ADVANCE(1174);
      if (lookahead == 'R') ADVANCE(1175);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(anon_sym_image3D);
      END_STATE();
    case 1023:
      if (lookahead == 'f') ADVANCE(1176);
      END_STATE();
    case 1024:
      if (lookahead == 'b') ADVANCE(1177);
      END_STATE();
    case 1025:
      if (lookahead == 'n') ADVANCE(1178);
      END_STATE();
    case 1026:
      if (lookahead == 'e') ADVANCE(1179);
      END_STATE();
    case 1027:
      if (lookahead == 'c') ADVANCE(1180);
      END_STATE();
    case 1028:
      if (lookahead == 'n') ADVANCE(1181);
      END_STATE();
    case 1029:
      if (lookahead == 'r') ADVANCE(1182);
      END_STATE();
    case 1030:
      if (lookahead == 's') ADVANCE(1183);
      END_STATE();
    case 1031:
      if (lookahead == 'e') ADVANCE(1184);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(anon_sym_lineadj);
      END_STATE();
    case 1033:
      if (lookahead == 'u') ADVANCE(1185);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(anon_sym_mediump);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(anon_sym_mutable);
      END_STATE();
    case 1036:
      if (lookahead == 'c') ADVANCE(1186);
      END_STATE();
    case 1037:
      if (lookahead == 't') ADVANCE(1187);
      END_STATE();
    case 1038:
      if (lookahead == 'e') ADVANCE(1188);
      END_STATE();
    case 1039:
      if (lookahead == 'p') ADVANCE(1189);
      END_STATE();
    case 1040:
      if (lookahead == 'e') ADVANCE(1190);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(anon_sym_nullptr);
      END_STATE();
    case 1042:
      if (lookahead == 'r') ADVANCE(1191);
      END_STATE();
    case 1043:
      if (lookahead == 'e') ADVANCE(1192);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 1045:
      if (lookahead == 's') ADVANCE(1193);
      END_STATE();
    case 1046:
      if (lookahead == 'o') ADVANCE(1194);
      END_STATE();
    case 1047:
      if (lookahead == 'a') ADVANCE(1195);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(anon_sym_precise);
      END_STATE();
    case 1049:
      if (lookahead == 'o') ADVANCE(1196);
      END_STATE();
    case 1050:
      if (lookahead == 'e') ADVANCE(1197);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym_private);
      END_STATE();
    case 1052:
      if (lookahead == 'e') ADVANCE(1198);
      END_STATE();
    case 1053:
      if (lookahead == 't') ADVANCE(1199);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(anon_sym_r32sint);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(anon_sym_r32uint);
      END_STATE();
    case 1056:
      if (lookahead == 'i') ADVANCE(1200);
      END_STATE();
    case 1057:
      if (lookahead == 'y') ADVANCE(1201);
      END_STATE();
    case 1058:
      if (lookahead == 'e') ADVANCE(1202);
      END_STATE();
    case 1059:
      if (lookahead == 'r') ADVANCE(1203);
      END_STATE();
    case 1060:
      if (lookahead == 'p') ADVANCE(1204);
      END_STATE();
    case 1061:
      if (lookahead == 's') ADVANCE(1205);
      END_STATE();
    case 1062:
      if (lookahead == 'e') ADVANCE(1206);
      END_STATE();
    case 1063:
      if (lookahead == 't') ADVANCE(1207);
      END_STATE();
    case 1064:
      if (lookahead == 'a') ADVANCE(1208);
      END_STATE();
    case 1065:
      if (lookahead == 't') ADVANCE(1209);
      END_STATE();
    case 1066:
      if (lookahead == 't') ADVANCE(1210);
      END_STATE();
    case 1067:
      if (lookahead == 'l') ADVANCE(1211);
      END_STATE();
    case 1068:
      if (lookahead == 'i') ADVANCE(1212);
      END_STATE();
    case 1069:
      if (lookahead == 'i') ADVANCE(1213);
      END_STATE();
    case 1070:
      if (lookahead == 'l') ADVANCE(1214);
      END_STATE();
    case 1071:
      if (lookahead == 'i') ADVANCE(1215);
      END_STATE();
    case 1072:
      if (lookahead == 'i') ADVANCE(1216);
      END_STATE();
    case 1073:
      if (lookahead == 'n') ADVANCE(1217);
      END_STATE();
    case 1074:
      if (lookahead == 'o') ADVANCE(1218);
      END_STATE();
    case 1075:
      if (lookahead == 'n') ADVANCE(1219);
      END_STATE();
    case 1076:
      if (lookahead == 'o') ADVANCE(1220);
      END_STATE();
    case 1077:
      if (lookahead == 'o') ADVANCE(1221);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(sym_sampler);
      if (lookahead == '1') ADVANCE(1222);
      if (lookahead == '2') ADVANCE(1223);
      if (lookahead == '3') ADVANCE(1224);
      if (lookahead == 'B') ADVANCE(1225);
      if (lookahead == 'C') ADVANCE(1226);
      if (lookahead == 'S') ADVANCE(1227);
      if (lookahead == '_') ADVANCE(1228);
      END_STATE();
    case 1079:
      if (lookahead == 'o') ADVANCE(1229);
      END_STATE();
    case 1080:
      if (lookahead == 's') ADVANCE(1230);
      END_STATE();
    case 1081:
      if (lookahead == 'a') ADVANCE(1231);
      if (lookahead == 'c') ADVANCE(1232);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(sym_storage);
      END_STATE();
    case 1083:
      if (lookahead == 'I') ADVANCE(1233);
      END_STATE();
    case 1084:
      if (lookahead == 'i') ADVANCE(1234);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(anon_sym_tbuffer);
      END_STATE();
    case 1086:
      if (lookahead == 'u') ADVANCE(1235);
      END_STATE();
    case 1087:
      if (lookahead == 'e') ADVANCE(1236);
      END_STATE();
    case 1088:
      if (lookahead == '1') ADVANCE(1237);
      if (lookahead == '2') ADVANCE(1238);
      if (lookahead == '3') ADVANCE(1239);
      if (lookahead == 'B') ADVANCE(1240);
      if (lookahead == 'C') ADVANCE(1241);
      if (lookahead == '_') ADVANCE(1242);
      END_STATE();
    case 1089:
      if (lookahead == 'l') ADVANCE(1243);
      END_STATE();
    case 1090:
      if (lookahead == 'e') ADVANCE(1244);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(anon_sym_typedef);
      END_STATE();
    case 1092:
      if (lookahead == 'e') ADVANCE(1245);
      END_STATE();
    case 1093:
      if (lookahead == 'D') ADVANCE(1246);
      END_STATE();
    case 1094:
      if (lookahead == 'D') ADVANCE(1247);
      END_STATE();
    case 1095:
      if (lookahead == 'D') ADVANCE(1248);
      END_STATE();
    case 1096:
      if (lookahead == 'u') ADVANCE(1249);
      END_STATE();
    case 1097:
      if (lookahead == 'u') ADVANCE(1250);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(sym_uniform);
      END_STATE();
    case 1099:
      if (lookahead == 'd') ADVANCE(1251);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(anon_sym_unsized);
      END_STATE();
    case 1101:
      if (lookahead == 'r') ADVANCE(1252);
      END_STATE();
    case 1102:
      if (lookahead == 's') ADVANCE(1253);
      END_STATE();
    case 1103:
      if (lookahead == 'e') ADVANCE(1254);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(anon_sym_varying);
      END_STATE();
    case 1105:
      if (lookahead == 'r') ADVANCE(1255);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(anon_sym_virtual);
      END_STATE();
    case 1107:
      if (lookahead == 'e') ADVANCE(1256);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(anon_sym_wchar_t);
      END_STATE();
    case 1109:
      if (lookahead == 'u') ADVANCE(1257);
      END_STATE();
    case 1110:
      if (lookahead == 'l') ADVANCE(1258);
      END_STATE();
    case 1111:
      if (lookahead == 'r') ADVANCE(1259);
      END_STATE();
    case 1112:
      if (lookahead == 't') ADVANCE(1260);
      END_STATE();
    case 1113:
      if (lookahead == 'e') ADVANCE(1261);
      END_STATE();
    case 1114:
      if (lookahead == 'h') ADVANCE(1262);
      END_STATE();
    case 1115:
      if (lookahead == 'h') ADVANCE(1263);
      END_STATE();
    case 1116:
      if (lookahead == 't') ADVANCE(1264);
      END_STATE();
    case 1117:
      if (lookahead == 'n') ADVANCE(1265);
      END_STATE();
    case 1118:
      if (lookahead == 'a') ADVANCE(1266);
      END_STATE();
    case 1119:
      if (lookahead == 'S') ADVANCE(1267);
      END_STATE();
    case 1120:
      if (lookahead == 'e') ADVANCE(1268);
      END_STATE();
    case 1121:
      if (lookahead == 'c') ADVANCE(1269);
      END_STATE();
    case 1122:
      if (lookahead == 'a') ADVANCE(1270);
      END_STATE();
    case 1123:
      if (lookahead == 't') ADVANCE(1271);
      END_STATE();
    case 1124:
      if (lookahead == 'd') ADVANCE(1272);
      END_STATE();
    case 1125:
      if (lookahead == 'e') ADVANCE(1273);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(anon_sym_RWBuffer);
      END_STATE();
    case 1127:
      if (lookahead == 'd') ADVANCE(1274);
      END_STATE();
    case 1128:
      if (lookahead == 'u') ADVANCE(1275);
      END_STATE();
    case 1129:
      if (lookahead == 'e') ADVANCE(1276);
      END_STATE();
    case 1130:
      if (lookahead == 'e') ADVANCE(1277);
      END_STATE();
    case 1131:
      if (lookahead == 'r') ADVANCE(1278);
      END_STATE();
    case 1132:
      if (lookahead == 'o') ADVANCE(1279);
      END_STATE();
    case 1133:
      if (lookahead == 't') ADVANCE(1280);
      END_STATE();
    case 1134:
      if (lookahead == 'e') ADVANCE(1281);
      END_STATE();
    case 1135:
      if (lookahead == 'D') ADVANCE(1282);
      END_STATE();
    case 1136:
      if (lookahead == 'D') ADVANCE(1283);
      END_STATE();
    case 1137:
      if (lookahead == 'D') ADVANCE(1284);
      END_STATE();
    case 1138:
      if (lookahead == 'u') ADVANCE(1285);
      END_STATE();
    case 1139:
      if (lookahead == 'S') ADVANCE(1286);
      END_STATE();
    case 1140:
      if (lookahead == 'a') ADVANCE(1287);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 1142:
      if (lookahead == 'm') ADVANCE(1288);
      END_STATE();
    case 1143:
      if (lookahead == 'i') ADVANCE(1289);
      END_STATE();
    case 1144:
      if (lookahead == 'e') ADVANCE(1290);
      END_STATE();
    case 1145:
      if (lookahead == 'a') ADVANCE(1291);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(anon_sym_co_await);
      END_STATE();
    case 1147:
      if (lookahead == 'n') ADVANCE(1292);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(anon_sym_co_yield);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(anon_sym_coherent);
      END_STATE();
    case 1150:
      if (lookahead == 'a') ADVANCE(1293);
      END_STATE();
    case 1151:
      if (lookahead == 'f') ADVANCE(1294);
      END_STATE();
    case 1152:
      if (lookahead == 's') ADVANCE(1295);
      END_STATE();
    case 1153:
      if (lookahead == 'l') ADVANCE(1296);
      END_STATE();
    case 1154:
      if (lookahead == 'r') ADVANCE(1297);
      END_STATE();
    case 1155:
      if (lookahead == 't') ADVANCE(1298);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(sym_continue);
      END_STATE();
    case 1157:
      if (lookahead == 'n') ADVANCE(1299);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(anon_sym_debugger);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(anon_sym_decltype);
      END_STATE();
    case 1160:
      if (lookahead == 'o') ADVANCE(1300);
      END_STATE();
    case 1161:
      if (lookahead == 'c') ADVANCE(1301);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(anon_sym_explicit);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(anon_sym_external);
      END_STATE();
    case 1164:
      if (lookahead == 'u') ADVANCE(1302);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(sym_function);
      END_STATE();
    case 1166:
      if (lookahead == 'r') ADVANCE(1303);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(anon_sym_iimage1D);
      if (lookahead == 'A') ADVANCE(1304);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(anon_sym_iimage2D);
      if (lookahead == 'A') ADVANCE(1305);
      if (lookahead == 'M') ADVANCE(1306);
      if (lookahead == 'R') ADVANCE(1307);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(anon_sym_iimage3D);
      END_STATE();
    case 1170:
      if (lookahead == 'f') ADVANCE(1308);
      END_STATE();
    case 1171:
      if (lookahead == 'b') ADVANCE(1309);
      END_STATE();
    case 1172:
      if (lookahead == 'r') ADVANCE(1310);
      END_STATE();
    case 1173:
      if (lookahead == 'r') ADVANCE(1311);
      END_STATE();
    case 1174:
      if (lookahead == 'S') ADVANCE(1312);
      END_STATE();
    case 1175:
      if (lookahead == 'e') ADVANCE(1313);
      END_STATE();
    case 1176:
      if (lookahead == 'f') ADVANCE(1314);
      END_STATE();
    case 1177:
      if (lookahead == 'e') ADVANCE(1315);
      END_STATE();
    case 1178:
      if (lookahead == 't') ADVANCE(1316);
      END_STATE();
    case 1179:
      if (lookahead == 'o') ADVANCE(1317);
      END_STATE();
    case 1180:
      if (lookahead == 'e') ADVANCE(1318);
      END_STATE();
    case 1181:
      if (lookahead == 't') ADVANCE(1319);
      END_STATE();
    case 1182:
      if (lookahead == '1') ADVANCE(1320);
      if (lookahead == '2') ADVANCE(1321);
      if (lookahead == '3') ADVANCE(1322);
      if (lookahead == 'B') ADVANCE(1323);
      if (lookahead == 'C') ADVANCE(1324);
      END_STATE();
    case 1183:
      if (lookahead == 'I') ADVANCE(1325);
      END_STATE();
    case 1184:
      if (lookahead == '1') ADVANCE(1326);
      if (lookahead == '2') ADVANCE(1327);
      if (lookahead == '3') ADVANCE(1328);
      if (lookahead == 'B') ADVANCE(1329);
      if (lookahead == 'C') ADVANCE(1330);
      END_STATE();
    case 1185:
      if (lookahead == 'l') ADVANCE(1331);
      END_STATE();
    case 1186:
      if (lookahead == 'e') ADVANCE(1332);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(anon_sym_noexcept);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(anon_sym_noinline);
      END_STATE();
    case 1189:
      if (lookahead == 'o') ADVANCE(1333);
      END_STATE();
    case 1190:
      if (lookahead == 'c') ADVANCE(1334);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(anon_sym_operator);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(sym_override);
      END_STATE();
    case 1193:
      if (lookahead == 'e') ADVANCE(1335);
      END_STATE();
    case 1194:
      if (lookahead == 'n') ADVANCE(1336);
      END_STATE();
    case 1195:
      if (lookahead == 'g') ADVANCE(1337);
      END_STATE();
    case 1196:
      if (lookahead == 'n') ADVANCE(1338);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(anon_sym_premerge);
      END_STATE();
    case 1198:
      if (lookahead == 'd') ADVANCE(1339);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(anon_sym_r32float);
      END_STATE();
    case 1200:
      if (lookahead == 't') ADVANCE(1340);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(anon_sym_readonly);
      END_STATE();
    case 1202:
      if (lookahead == 's') ADVANCE(1341);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(anon_sym_register);
      END_STATE();
    case 1204:
      if (lookahead == 'r') ADVANCE(1342);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(anon_sym_requires);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(anon_sym_resource);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(anon_sym_restrict);
      END_STATE();
    case 1208:
      if (lookahead == 't') ADVANCE(1343);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(anon_sym_rg32sint);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(anon_sym_rg32uint);
      END_STATE();
    case 1211:
      if (lookahead == 'o') ADVANCE(1344);
      END_STATE();
    case 1212:
      if (lookahead == 'n') ADVANCE(1345);
      END_STATE();
    case 1213:
      if (lookahead == 'n') ADVANCE(1346);
      END_STATE();
    case 1214:
      if (lookahead == 'o') ADVANCE(1347);
      END_STATE();
    case 1215:
      if (lookahead == 'n') ADVANCE(1348);
      END_STATE();
    case 1216:
      if (lookahead == 'n') ADVANCE(1349);
      END_STATE();
    case 1217:
      if (lookahead == 't') ADVANCE(1350);
      END_STATE();
    case 1218:
      if (lookahead == 'r') ADVANCE(1351);
      END_STATE();
    case 1219:
      if (lookahead == 't') ADVANCE(1352);
      END_STATE();
    case 1220:
      if (lookahead == 'r') ADVANCE(1353);
      END_STATE();
    case 1221:
      if (lookahead == 'r') ADVANCE(1354);
      END_STATE();
    case 1222:
      if (lookahead == 'D') ADVANCE(1355);
      END_STATE();
    case 1223:
      if (lookahead == 'D') ADVANCE(1356);
      END_STATE();
    case 1224:
      if (lookahead == 'D') ADVANCE(1357);
      END_STATE();
    case 1225:
      if (lookahead == 'u') ADVANCE(1358);
      END_STATE();
    case 1226:
      if (lookahead == 'u') ADVANCE(1359);
      END_STATE();
    case 1227:
      if (lookahead == 'h') ADVANCE(1360);
      END_STATE();
    case 1228:
      if (lookahead == 'c') ADVANCE(1361);
      END_STATE();
    case 1229:
      if (lookahead == 'c') ADVANCE(1362);
      END_STATE();
    case 1230:
      if (lookahead == 's') ADVANCE(1363);
      END_STATE();
    case 1231:
      if (lookahead == 's') ADVANCE(1364);
      END_STATE();
    case 1232:
      if (lookahead == 'a') ADVANCE(1365);
      END_STATE();
    case 1233:
      if (lookahead == 'n') ADVANCE(1366);
      END_STATE();
    case 1234:
      if (lookahead == 'n') ADVANCE(1367);
      END_STATE();
    case 1235:
      if (lookahead == 'e') ADVANCE(1368);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(anon_sym_template);
      END_STATE();
    case 1237:
      if (lookahead == 'D') ADVANCE(1369);
      END_STATE();
    case 1238:
      if (lookahead == 'D') ADVANCE(1370);
      END_STATE();
    case 1239:
      if (lookahead == 'D') ADVANCE(1371);
      END_STATE();
    case 1240:
      if (lookahead == 'u') ADVANCE(1372);
      END_STATE();
    case 1241:
      if (lookahead == 'u') ADVANCE(1373);
      END_STATE();
    case 1242:
      if (lookahead == '1') ADVANCE(1374);
      if (lookahead == '2') ADVANCE(1375);
      if (lookahead == '3') ADVANCE(1376);
      if (lookahead == 'c') ADVANCE(1377);
      if (lookahead == 'd') ADVANCE(1378);
      if (lookahead == 'm') ADVANCE(1379);
      if (lookahead == 's') ADVANCE(1380);
      END_STATE();
    case 1243:
      if (lookahead == 'o') ADVANCE(1381);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(anon_sym_triangle);
      if (lookahead == 'a') ADVANCE(1382);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(anon_sym_typename);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(anon_sym_uimage1D);
      if (lookahead == 'A') ADVANCE(1383);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(anon_sym_uimage2D);
      if (lookahead == 'A') ADVANCE(1384);
      if (lookahead == 'M') ADVANCE(1385);
      if (lookahead == 'R') ADVANCE(1386);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(anon_sym_uimage3D);
      END_STATE();
    case 1249:
      if (lookahead == 'f') ADVANCE(1387);
      END_STATE();
    case 1250:
      if (lookahead == 'b') ADVANCE(1388);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(anon_sym_unsigned);
      END_STATE();
    case 1252:
      if (lookahead == '1') ADVANCE(1389);
      if (lookahead == '2') ADVANCE(1390);
      if (lookahead == '3') ADVANCE(1391);
      if (lookahead == 'B') ADVANCE(1392);
      if (lookahead == 'C') ADVANCE(1393);
      END_STATE();
    case 1253:
      if (lookahead == 'I') ADVANCE(1394);
      END_STATE();
    case 1254:
      if (lookahead == '1') ADVANCE(1395);
      if (lookahead == '2') ADVANCE(1396);
      if (lookahead == '3') ADVANCE(1397);
      if (lookahead == 'B') ADVANCE(1398);
      if (lookahead == 'C') ADVANCE(1399);
      END_STATE();
    case 1255:
      if (lookahead == 'a') ADVANCE(1400);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(anon_sym_volatile);
      END_STATE();
    case 1257:
      if (lookahead == 'p') ADVANCE(1401);
      END_STATE();
    case 1258:
      if (lookahead == 'y') ADVANCE(1402);
      END_STATE();
    case 1259:
      if (lookahead == 'u') ADVANCE(1403);
      END_STATE();
    case 1260:
      if (lookahead == 'e') ADVANCE(1404);
      END_STATE();
    case 1261:
      if (lookahead == 's') ADVANCE(1405);
      END_STATE();
    case 1262:
      if (lookahead == 'a') ADVANCE(1406);
      END_STATE();
    case 1263:
      if (lookahead == 'a') ADVANCE(1407);
      END_STATE();
    case 1264:
      if (lookahead == 'r') ADVANCE(1408);
      END_STATE();
    case 1265:
      if (lookahead == 'c') ADVANCE(1409);
      END_STATE();
    case 1266:
      if (lookahead == 'd') ADVANCE(1410);
      END_STATE();
    case 1267:
      if (lookahead == 'h') ADVANCE(1411);
      END_STATE();
    case 1268:
      if (lookahead == 'r') ADVANCE(1412);
      END_STATE();
    case 1269:
      if (lookahead == 'h') ADVANCE(1413);
      END_STATE();
    case 1270:
      if (lookahead == 'm') ADVANCE(1414);
      END_STATE();
    case 1271:
      if (lookahead == 'c') ADVANCE(1415);
      END_STATE();
    case 1272:
      if (lookahead == 'e') ADVANCE(1416);
      END_STATE();
    case 1273:
      if (lookahead == 'a') ADVANCE(1417);
      END_STATE();
    case 1274:
      if (lookahead == 'r') ADVANCE(1418);
      END_STATE();
    case 1275:
      if (lookahead == 'r') ADVANCE(1419);
      END_STATE();
    case 1276:
      if (lookahead == '1') ADVANCE(1420);
      if (lookahead == '2') ADVANCE(1421);
      if (lookahead == '3') ADVANCE(1422);
      END_STATE();
    case 1277:
      if (lookahead == 'r') ADVANCE(1423);
      END_STATE();
    case 1278:
      if (lookahead == 'g') ADVANCE(1424);
      END_STATE();
    case 1279:
      if (lookahead == 'm') ADVANCE(1425);
      END_STATE();
    case 1280:
      if (lookahead == 'a') ADVANCE(1426);
      END_STATE();
    case 1281:
      if (lookahead == 'd') ADVANCE(1427);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(anon_sym_Texture1D);
      if (lookahead == 'A') ADVANCE(1428);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(anon_sym_Texture2D);
      if (lookahead == 'A') ADVANCE(1429);
      if (lookahead == 'M') ADVANCE(1430);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(anon_sym_Texture3D);
      END_STATE();
    case 1285:
      if (lookahead == 'b') ADVANCE(1431);
      END_STATE();
    case 1286:
      if (lookahead == 't') ADVANCE(1432);
      END_STATE();
    case 1287:
      if (lookahead == 'd') ADVANCE(1433);
      END_STATE();
    case 1288:
      if (lookahead == 'e') ADVANCE(1434);
      END_STATE();
    case 1289:
      if (lookahead == 'n') ADVANCE(1435);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(anon_sym_attribute);
      END_STATE();
    case 1291:
      if (lookahead == 'r') ADVANCE(1436);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(anon_sym_co_return);
      END_STATE();
    case 1293:
      if (lookahead == 'j') ADVANCE(1437);
      END_STATE();
    case 1294:
      if (lookahead == 'r') ADVANCE(1438);
      END_STATE();
    case 1295:
      if (lookahead == 't') ADVANCE(1439);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(anon_sym_consteval);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(anon_sym_constexpr);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(anon_sym_constinit);
      END_STATE();
    case 1299:
      if (lookahead == 'g') ADVANCE(1440);
      END_STATE();
    case 1300:
      if (lookahead == '_') ADVANCE(1441);
      END_STATE();
    case 1301:
      if (lookahead == 'a') ADVANCE(1442);
      END_STATE();
    case 1302:
      if (lookahead == 'g') ADVANCE(1443);
      END_STATE();
    case 1303:
      if (lookahead == 'e') ADVANCE(1444);
      END_STATE();
    case 1304:
      if (lookahead == 'r') ADVANCE(1445);
      END_STATE();
    case 1305:
      if (lookahead == 'r') ADVANCE(1446);
      END_STATE();
    case 1306:
      if (lookahead == 'S') ADVANCE(1447);
      END_STATE();
    case 1307:
      if (lookahead == 'e') ADVANCE(1448);
      END_STATE();
    case 1308:
      if (lookahead == 'f') ADVANCE(1449);
      END_STATE();
    case 1309:
      if (lookahead == 'e') ADVANCE(1450);
      END_STATE();
    case 1310:
      if (lookahead == 'r') ADVANCE(1451);
      END_STATE();
    case 1311:
      if (lookahead == 'r') ADVANCE(1452);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(anon_sym_image2DMS);
      if (lookahead == 'A') ADVANCE(1453);
      END_STATE();
    case 1313:
      if (lookahead == 'c') ADVANCE(1454);
      END_STATE();
    case 1314:
      if (lookahead == 'e') ADVANCE(1455);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(anon_sym_imageCube);
      if (lookahead == 'A') ADVANCE(1456);
      END_STATE();
    case 1316:
      if (lookahead == 's') ADVANCE(1457);
      END_STATE();
    case 1317:
      if (lookahead == 'f') ADVANCE(1458);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(anon_sym_invariant);
      END_STATE();
    case 1320:
      if (lookahead == 'D') ADVANCE(1459);
      END_STATE();
    case 1321:
      if (lookahead == 'D') ADVANCE(1460);
      END_STATE();
    case 1322:
      if (lookahead == 'D') ADVANCE(1461);
      END_STATE();
    case 1323:
      if (lookahead == 'u') ADVANCE(1462);
      END_STATE();
    case 1324:
      if (lookahead == 'u') ADVANCE(1463);
      END_STATE();
    case 1325:
      if (lookahead == 'n') ADVANCE(1464);
      END_STATE();
    case 1326:
      if (lookahead == 'D') ADVANCE(1465);
      END_STATE();
    case 1327:
      if (lookahead == 'D') ADVANCE(1466);
      END_STATE();
    case 1328:
      if (lookahead == 'D') ADVANCE(1467);
      END_STATE();
    case 1329:
      if (lookahead == 'u') ADVANCE(1468);
      END_STATE();
    case 1330:
      if (lookahead == 'u') ADVANCE(1469);
      END_STATE();
    case 1331:
      if (lookahead == 'e') ADVANCE(1470);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(anon_sym_namespace);
      END_STATE();
    case 1333:
      if (lookahead == 'l') ADVANCE(1471);
      END_STATE();
    case 1334:
      if (lookahead == 't') ADVANCE(1472);
      END_STATE();
    case 1335:
      if (lookahead == 't') ADVANCE(1473);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(anon_sym_partition);
      END_STATE();
    case 1337:
      if (lookahead == 'm') ADVANCE(1474);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(anon_sym_precision);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 1340:
      if (lookahead == 'e') ADVANCE(1475);
      END_STATE();
    case 1341:
      if (lookahead == 's') ADVANCE(1476);
      END_STATE();
    case 1342:
      if (lookahead == 'e') ADVANCE(1477);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(anon_sym_rg32float);
      END_STATE();
    case 1344:
      if (lookahead == 'a') ADVANCE(1478);
      END_STATE();
    case 1345:
      if (lookahead == 't') ADVANCE(1479);
      END_STATE();
    case 1346:
      if (lookahead == 't') ADVANCE(1480);
      END_STATE();
    case 1347:
      if (lookahead == 'a') ADVANCE(1481);
      END_STATE();
    case 1348:
      if (lookahead == 't') ADVANCE(1482);
      END_STATE();
    case 1349:
      if (lookahead == 't') ADVANCE(1483);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(anon_sym_rgba8sint);
      END_STATE();
    case 1351:
      if (lookahead == 'm') ADVANCE(1484);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(anon_sym_rgba8uint);
      END_STATE();
    case 1353:
      if (lookahead == 'm') ADVANCE(1485);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(anon_sym_row_major);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(anon_sym_sampler1D);
      if (lookahead == 'A') ADVANCE(1486);
      if (lookahead == 'S') ADVANCE(1487);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(anon_sym_sampler2D);
      if (lookahead == 'A') ADVANCE(1488);
      if (lookahead == 'M') ADVANCE(1489);
      if (lookahead == 'R') ADVANCE(1490);
      if (lookahead == 'S') ADVANCE(1491);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(anon_sym_sampler3D);
      if (lookahead == 'R') ADVANCE(1492);
      END_STATE();
    case 1358:
      if (lookahead == 'f') ADVANCE(1493);
      END_STATE();
    case 1359:
      if (lookahead == 'b') ADVANCE(1494);
      END_STATE();
    case 1360:
      if (lookahead == 'a') ADVANCE(1495);
      END_STATE();
    case 1361:
      if (lookahead == 'o') ADVANCE(1496);
      END_STATE();
    case 1362:
      if (lookahead == 'k') ADVANCE(1497);
      END_STATE();
    case 1363:
      if (lookahead == 'e') ADVANCE(1498);
      END_STATE();
    case 1364:
      if (lookahead == 's') ADVANCE(1499);
      END_STATE();
    case 1365:
      if (lookahead == 's') ADVANCE(1500);
      END_STATE();
    case 1366:
      if (lookahead == 'p') ADVANCE(1501);
      END_STATE();
    case 1367:
      if (lookahead == 'e') ADVANCE(1502);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(anon_sym_technique);
      if (lookahead == '1') ADVANCE(1503);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(anon_sym_texture1D);
      if (lookahead == 'A') ADVANCE(1504);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(anon_sym_texture2D);
      if (lookahead == 'A') ADVANCE(1505);
      if (lookahead == 'M') ADVANCE(1506);
      if (lookahead == 'R') ADVANCE(1507);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(anon_sym_texture3D);
      END_STATE();
    case 1372:
      if (lookahead == 'f') ADVANCE(1508);
      END_STATE();
    case 1373:
      if (lookahead == 'b') ADVANCE(1509);
      END_STATE();
    case 1374:
      if (lookahead == 'd') ADVANCE(1510);
      END_STATE();
    case 1375:
      if (lookahead == 'd') ADVANCE(1511);
      END_STATE();
    case 1376:
      if (lookahead == 'd') ADVANCE(1512);
      END_STATE();
    case 1377:
      if (lookahead == 'u') ADVANCE(1513);
      END_STATE();
    case 1378:
      if (lookahead == 'e') ADVANCE(1514);
      END_STATE();
    case 1379:
      if (lookahead == 'u') ADVANCE(1515);
      END_STATE();
    case 1380:
      if (lookahead == 't') ADVANCE(1516);
      END_STATE();
    case 1381:
      if (lookahead == 'c') ADVANCE(1517);
      END_STATE();
    case 1382:
      if (lookahead == 'd') ADVANCE(1518);
      END_STATE();
    case 1383:
      if (lookahead == 'r') ADVANCE(1519);
      END_STATE();
    case 1384:
      if (lookahead == 'r') ADVANCE(1520);
      END_STATE();
    case 1385:
      if (lookahead == 'S') ADVANCE(1521);
      END_STATE();
    case 1386:
      if (lookahead == 'e') ADVANCE(1522);
      END_STATE();
    case 1387:
      if (lookahead == 'f') ADVANCE(1523);
      END_STATE();
    case 1388:
      if (lookahead == 'e') ADVANCE(1524);
      END_STATE();
    case 1389:
      if (lookahead == 'D') ADVANCE(1525);
      END_STATE();
    case 1390:
      if (lookahead == 'D') ADVANCE(1526);
      END_STATE();
    case 1391:
      if (lookahead == 'D') ADVANCE(1527);
      END_STATE();
    case 1392:
      if (lookahead == 'u') ADVANCE(1528);
      END_STATE();
    case 1393:
      if (lookahead == 'u') ADVANCE(1529);
      END_STATE();
    case 1394:
      if (lookahead == 'n') ADVANCE(1530);
      END_STATE();
    case 1395:
      if (lookahead == 'D') ADVANCE(1531);
      END_STATE();
    case 1396:
      if (lookahead == 'D') ADVANCE(1532);
      END_STATE();
    case 1397:
      if (lookahead == 'D') ADVANCE(1533);
      END_STATE();
    case 1398:
      if (lookahead == 'u') ADVANCE(1534);
      END_STATE();
    case 1399:
      if (lookahead == 'u') ADVANCE(1535);
      END_STATE();
    case 1400:
      if (lookahead == 'g') ADVANCE(1536);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(sym_workgroup);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(anon_sym_writeonly);
      END_STATE();
    case 1403:
      if (lookahead == 'c') ADVANCE(1537);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(anon_sym_BlendState);
      END_STATE();
    case 1405:
      if (lookahead == 's') ADVANCE(1538);
      END_STATE();
    case 1406:
      if (lookahead == 'd') ADVANCE(1539);
      END_STATE();
    case 1407:
      if (lookahead == 'd') ADVANCE(1540);
      END_STATE();
    case 1408:
      if (lookahead == 'u') ADVANCE(1541);
      END_STATE();
    case 1409:
      if (lookahead == 'i') ADVANCE(1542);
      END_STATE();
    case 1410:
      if (lookahead == 'e') ADVANCE(1543);
      END_STATE();
    case 1411:
      if (lookahead == 'a') ADVANCE(1544);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(anon_sym_Hullshader);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(anon_sym_InputPatch);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(anon_sym_LineStream);
      END_STATE();
    case 1415:
      if (lookahead == 'h') ADVANCE(1545);
      END_STATE();
    case 1416:
      if (lookahead == 'r') ADVANCE(1546);
      END_STATE();
    case 1417:
      if (lookahead == 'm') ADVANCE(1547);
      END_STATE();
    case 1418:
      if (lookahead == 'e') ADVANCE(1548);
      END_STATE();
    case 1419:
      if (lookahead == 'e') ADVANCE(1549);
      END_STATE();
    case 1420:
      if (lookahead == 'D') ADVANCE(1550);
      END_STATE();
    case 1421:
      if (lookahead == 'D') ADVANCE(1551);
      END_STATE();
    case 1422:
      if (lookahead == 'D') ADVANCE(1552);
      END_STATE();
    case 1423:
      if (lookahead == 'S') ADVANCE(1553);
      END_STATE();
    case 1424:
      if (lookahead == 'e') ADVANCE(1554);
      END_STATE();
    case 1425:
      if (lookahead == 'p') ADVANCE(1555);
      END_STATE();
    case 1426:
      if (lookahead == 't') ADVANCE(1556);
      END_STATE();
    case 1427:
      if (lookahead == 'B') ADVANCE(1557);
      END_STATE();
    case 1428:
      if (lookahead == 'r') ADVANCE(1558);
      END_STATE();
    case 1429:
      if (lookahead == 'r') ADVANCE(1559);
      END_STATE();
    case 1430:
      if (lookahead == 'S') ADVANCE(1560);
      END_STATE();
    case 1431:
      if (lookahead == 'e') ADVANCE(1561);
      END_STATE();
    case 1432:
      if (lookahead == 'r') ADVANCE(1562);
      END_STATE();
    case 1433:
      if (lookahead == 'e') ADVANCE(1563);
      END_STATE();
    case 1434:
      if (lookahead == 'n') ADVANCE(1564);
      END_STATE();
    case 1435:
      if (lookahead == 't') ADVANCE(1565);
      END_STATE();
    case 1436:
      if (lookahead == 'r') ADVANCE(1566);
      END_STATE();
    case 1437:
      if (lookahead == 'o') ADVANCE(1567);
      END_STATE();
    case 1438:
      if (lookahead == 'a') ADVANCE(1568);
      END_STATE();
    case 1439:
      ACCEPT_TOKEN(anon_sym_const_cast);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(sym_continuing);
      END_STATE();
    case 1441:
      if (lookahead == 'h') ADVANCE(1569);
      END_STATE();
    case 1442:
      if (lookahead == 's') ADVANCE(1570);
      END_STATE();
    case 1443:
      if (lookahead == 'h') ADVANCE(1571);
      END_STATE();
    case 1444:
      if (lookahead == 'd') ADVANCE(1572);
      END_STATE();
    case 1445:
      if (lookahead == 'r') ADVANCE(1573);
      END_STATE();
    case 1446:
      if (lookahead == 'r') ADVANCE(1574);
      END_STATE();
    case 1447:
      ACCEPT_TOKEN(anon_sym_iimage2DMS);
      if (lookahead == 'A') ADVANCE(1575);
      END_STATE();
    case 1448:
      if (lookahead == 'c') ADVANCE(1576);
      END_STATE();
    case 1449:
      if (lookahead == 'e') ADVANCE(1577);
      END_STATE();
    case 1450:
      ACCEPT_TOKEN(anon_sym_iimageCube);
      if (lookahead == 'A') ADVANCE(1578);
      END_STATE();
    case 1451:
      if (lookahead == 'a') ADVANCE(1579);
      END_STATE();
    case 1452:
      if (lookahead == 'a') ADVANCE(1580);
      END_STATE();
    case 1453:
      if (lookahead == 'r') ADVANCE(1581);
      END_STATE();
    case 1454:
      if (lookahead == 't') ADVANCE(1582);
      END_STATE();
    case 1455:
      if (lookahead == 'r') ADVANCE(1583);
      END_STATE();
    case 1456:
      if (lookahead == 'r') ADVANCE(1584);
      END_STATE();
    case 1457:
      ACCEPT_TOKEN(anon_sym_implements);
      END_STATE();
    case 1458:
      ACCEPT_TOKEN(anon_sym_instanceof);
      END_STATE();
    case 1459:
      ACCEPT_TOKEN(anon_sym_isampler1D);
      if (lookahead == 'A') ADVANCE(1585);
      END_STATE();
    case 1460:
      ACCEPT_TOKEN(anon_sym_isampler2D);
      if (lookahead == 'A') ADVANCE(1586);
      if (lookahead == 'M') ADVANCE(1587);
      if (lookahead == 'R') ADVANCE(1588);
      END_STATE();
    case 1461:
      ACCEPT_TOKEN(anon_sym_isampler3D);
      END_STATE();
    case 1462:
      if (lookahead == 'f') ADVANCE(1589);
      END_STATE();
    case 1463:
      if (lookahead == 'b') ADVANCE(1590);
      END_STATE();
    case 1464:
      if (lookahead == 'p') ADVANCE(1591);
      END_STATE();
    case 1465:
      ACCEPT_TOKEN(anon_sym_itexture1D);
      if (lookahead == 'A') ADVANCE(1592);
      END_STATE();
    case 1466:
      ACCEPT_TOKEN(anon_sym_itexture2D);
      if (lookahead == 'A') ADVANCE(1593);
      if (lookahead == 'M') ADVANCE(1594);
      if (lookahead == 'R') ADVANCE(1595);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(anon_sym_itexture3D);
      END_STATE();
    case 1468:
      if (lookahead == 'f') ADVANCE(1596);
      END_STATE();
    case 1469:
      if (lookahead == 'b') ADVANCE(1597);
      END_STATE();
    case 1470:
      if (lookahead == 's') ADVANCE(1598);
      END_STATE();
    case 1471:
      if (lookahead == 'a') ADVANCE(1599);
      END_STATE();
    case 1472:
      if (lookahead == 'i') ADVANCE(1600);
      END_STATE();
    case 1473:
      ACCEPT_TOKEN(anon_sym_packoffset);
      END_STATE();
    case 1474:
      if (lookahead == 'e') ADVANCE(1601);
      END_STATE();
    case 1475:
      ACCEPT_TOKEN(anon_sym_read_write);
      END_STATE();
    case 1476:
      ACCEPT_TOKEN(anon_sym_regardless);
      END_STATE();
    case 1477:
      if (lookahead == 't') ADVANCE(1602);
      END_STATE();
    case 1478:
      if (lookahead == 't') ADVANCE(1603);
      END_STATE();
    case 1479:
      ACCEPT_TOKEN(anon_sym_rgba16sint);
      END_STATE();
    case 1480:
      ACCEPT_TOKEN(anon_sym_rgba16uint);
      END_STATE();
    case 1481:
      if (lookahead == 't') ADVANCE(1604);
      END_STATE();
    case 1482:
      ACCEPT_TOKEN(anon_sym_rgba32sint);
      END_STATE();
    case 1483:
      ACCEPT_TOKEN(anon_sym_rgba32uint);
      END_STATE();
    case 1484:
      ACCEPT_TOKEN(anon_sym_rgba8snorm);
      END_STATE();
    case 1485:
      ACCEPT_TOKEN(anon_sym_rgba8unorm);
      END_STATE();
    case 1486:
      if (lookahead == 'r') ADVANCE(1605);
      END_STATE();
    case 1487:
      if (lookahead == 'h') ADVANCE(1606);
      END_STATE();
    case 1488:
      if (lookahead == 'r') ADVANCE(1607);
      END_STATE();
    case 1489:
      if (lookahead == 'S') ADVANCE(1608);
      END_STATE();
    case 1490:
      if (lookahead == 'e') ADVANCE(1609);
      END_STATE();
    case 1491:
      if (lookahead == 'h') ADVANCE(1610);
      END_STATE();
    case 1492:
      if (lookahead == 'e') ADVANCE(1611);
      END_STATE();
    case 1493:
      if (lookahead == 'f') ADVANCE(1612);
      END_STATE();
    case 1494:
      if (lookahead == 'e') ADVANCE(1613);
      END_STATE();
    case 1495:
      if (lookahead == 'd') ADVANCE(1614);
      END_STATE();
    case 1496:
      if (lookahead == 'm') ADVANCE(1615);
      END_STATE();
    case 1497:
      ACCEPT_TOKEN(anon_sym_stateblock);
      if (lookahead == '_') ADVANCE(1616);
      END_STATE();
    case 1498:
      if (lookahead == 'r') ADVANCE(1617);
      END_STATE();
    case 1499:
      if (lookahead == 'e') ADVANCE(1618);
      END_STATE();
    case 1500:
      if (lookahead == 't') ADVANCE(1619);
      END_STATE();
    case 1501:
      if (lookahead == 'u') ADVANCE(1620);
      END_STATE();
    case 1502:
      ACCEPT_TOKEN(anon_sym_subroutine);
      END_STATE();
    case 1503:
      if (lookahead == '0') ADVANCE(1621);
      if (lookahead == '1') ADVANCE(1622);
      END_STATE();
    case 1504:
      if (lookahead == 'r') ADVANCE(1623);
      END_STATE();
    case 1505:
      if (lookahead == 'r') ADVANCE(1624);
      END_STATE();
    case 1506:
      if (lookahead == 'S') ADVANCE(1625);
      END_STATE();
    case 1507:
      if (lookahead == 'e') ADVANCE(1626);
      END_STATE();
    case 1508:
      if (lookahead == 'f') ADVANCE(1627);
      END_STATE();
    case 1509:
      if (lookahead == 'e') ADVANCE(1628);
      END_STATE();
    case 1510:
      ACCEPT_TOKEN(sym_texture_1d);
      END_STATE();
    case 1511:
      ACCEPT_TOKEN(sym_texture_2d);
      if (lookahead == '_') ADVANCE(1629);
      END_STATE();
    case 1512:
      ACCEPT_TOKEN(sym_texture_3d);
      END_STATE();
    case 1513:
      if (lookahead == 'b') ADVANCE(1630);
      END_STATE();
    case 1514:
      if (lookahead == 'p') ADVANCE(1631);
      END_STATE();
    case 1515:
      if (lookahead == 'l') ADVANCE(1632);
      END_STATE();
    case 1516:
      if (lookahead == 'o') ADVANCE(1633);
      END_STATE();
    case 1517:
      if (lookahead == 'a') ADVANCE(1634);
      END_STATE();
    case 1518:
      if (lookahead == 'j') ADVANCE(1635);
      END_STATE();
    case 1519:
      if (lookahead == 'r') ADVANCE(1636);
      END_STATE();
    case 1520:
      if (lookahead == 'r') ADVANCE(1637);
      END_STATE();
    case 1521:
      ACCEPT_TOKEN(anon_sym_uimage2DMS);
      if (lookahead == 'A') ADVANCE(1638);
      END_STATE();
    case 1522:
      if (lookahead == 'c') ADVANCE(1639);
      END_STATE();
    case 1523:
      if (lookahead == 'e') ADVANCE(1640);
      END_STATE();
    case 1524:
      ACCEPT_TOKEN(anon_sym_uimageCube);
      if (lookahead == 'A') ADVANCE(1641);
      END_STATE();
    case 1525:
      ACCEPT_TOKEN(anon_sym_usampler1D);
      if (lookahead == 'A') ADVANCE(1642);
      END_STATE();
    case 1526:
      ACCEPT_TOKEN(anon_sym_usampler2D);
      if (lookahead == 'A') ADVANCE(1643);
      if (lookahead == 'M') ADVANCE(1644);
      if (lookahead == 'R') ADVANCE(1645);
      END_STATE();
    case 1527:
      ACCEPT_TOKEN(anon_sym_usampler3D);
      END_STATE();
    case 1528:
      if (lookahead == 'f') ADVANCE(1646);
      END_STATE();
    case 1529:
      if (lookahead == 'b') ADVANCE(1647);
      END_STATE();
    case 1530:
      if (lookahead == 'p') ADVANCE(1648);
      END_STATE();
    case 1531:
      ACCEPT_TOKEN(anon_sym_utexture1D);
      if (lookahead == 'A') ADVANCE(1649);
      END_STATE();
    case 1532:
      ACCEPT_TOKEN(anon_sym_utexture2D);
      if (lookahead == 'A') ADVANCE(1650);
      if (lookahead == 'M') ADVANCE(1651);
      if (lookahead == 'R') ADVANCE(1652);
      END_STATE();
    case 1533:
      ACCEPT_TOKEN(anon_sym_utexture3D);
      END_STATE();
    case 1534:
      if (lookahead == 'f') ADVANCE(1653);
      END_STATE();
    case 1535:
      if (lookahead == 'b') ADVANCE(1654);
      END_STATE();
    case 1536:
      if (lookahead == 'm') ADVANCE(1655);
      END_STATE();
    case 1537:
      if (lookahead == 't') ADVANCE(1656);
      END_STATE();
    case 1538:
      if (lookahead == 'B') ADVANCE(1657);
      END_STATE();
    case 1539:
      if (lookahead == 'e') ADVANCE(1658);
      END_STATE();
    case 1540:
      if (lookahead == 'e') ADVANCE(1659);
      END_STATE();
    case 1541:
      if (lookahead == 'c') ADVANCE(1660);
      END_STATE();
    case 1542:
      if (lookahead == 'l') ADVANCE(1661);
      END_STATE();
    case 1543:
      if (lookahead == 'r') ADVANCE(1662);
      END_STATE();
    case 1544:
      if (lookahead == 'd') ADVANCE(1663);
      END_STATE();
    case 1545:
      ACCEPT_TOKEN(anon_sym_OutputPatch);
      END_STATE();
    case 1546:
      ACCEPT_TOKEN(anon_sym_PixelShader);
      END_STATE();
    case 1547:
      ACCEPT_TOKEN(anon_sym_PointStream);
      END_STATE();
    case 1548:
      if (lookahead == 's') ADVANCE(1664);
      END_STATE();
    case 1549:
      if (lookahead == 'd') ADVANCE(1665);
      END_STATE();
    case 1550:
      ACCEPT_TOKEN(anon_sym_RWTexture1D);
      if (lookahead == 'A') ADVANCE(1666);
      END_STATE();
    case 1551:
      ACCEPT_TOKEN(anon_sym_RWTexture2D);
      if (lookahead == 'A') ADVANCE(1667);
      END_STATE();
    case 1552:
      ACCEPT_TOKEN(anon_sym_RWTexture3D);
      END_STATE();
    case 1553:
      if (lookahead == 't') ADVANCE(1668);
      END_STATE();
    case 1554:
      if (lookahead == 't') ADVANCE(1669);
      END_STATE();
    case 1555:
      if (lookahead == 'a') ADVANCE(1670);
      END_STATE();
    case 1556:
      if (lookahead == 'e') ADVANCE(1671);
      END_STATE();
    case 1557:
      if (lookahead == 'u') ADVANCE(1672);
      END_STATE();
    case 1558:
      if (lookahead == 'r') ADVANCE(1673);
      END_STATE();
    case 1559:
      if (lookahead == 'r') ADVANCE(1674);
      END_STATE();
    case 1560:
      ACCEPT_TOKEN(anon_sym_Texture2DMS);
      if (lookahead == 'A') ADVANCE(1675);
      END_STATE();
    case 1561:
      ACCEPT_TOKEN(anon_sym_TextureCube);
      if (lookahead == 'A') ADVANCE(1676);
      END_STATE();
    case 1562:
      if (lookahead == 'e') ADVANCE(1677);
      END_STATE();
    case 1563:
      if (lookahead == 'r') ADVANCE(1678);
      END_STATE();
    case 1564:
      if (lookahead == 't') ADVANCE(1679);
      END_STATE();
    case 1565:
      ACCEPT_TOKEN(anon_sym_atomic_uint);
      END_STATE();
    case 1566:
      if (lookahead == 'a') ADVANCE(1680);
      END_STATE();
    case 1567:
      if (lookahead == 'r') ADVANCE(1681);
      END_STATE();
    case 1568:
      if (lookahead == 'g') ADVANCE(1682);
      END_STATE();
    case 1569:
      if (lookahead == 'e') ADVANCE(1683);
      END_STATE();
    case 1570:
      if (lookahead == 't') ADVANCE(1684);
      END_STATE();
    case 1571:
      ACCEPT_TOKEN(sym_fallthrough);
      END_STATE();
    case 1572:
      ACCEPT_TOKEN(anon_sym_groupshared);
      END_STATE();
    case 1573:
      if (lookahead == 'a') ADVANCE(1685);
      END_STATE();
    case 1574:
      if (lookahead == 'a') ADVANCE(1686);
      END_STATE();
    case 1575:
      if (lookahead == 'r') ADVANCE(1687);
      END_STATE();
    case 1576:
      if (lookahead == 't') ADVANCE(1688);
      END_STATE();
    case 1577:
      if (lookahead == 'r') ADVANCE(1689);
      END_STATE();
    case 1578:
      if (lookahead == 'r') ADVANCE(1690);
      END_STATE();
    case 1579:
      if (lookahead == 'y') ADVANCE(1691);
      END_STATE();
    case 1580:
      if (lookahead == 'y') ADVANCE(1692);
      END_STATE();
    case 1581:
      if (lookahead == 'r') ADVANCE(1693);
      END_STATE();
    case 1582:
      ACCEPT_TOKEN(anon_sym_image2DRect);
      END_STATE();
    case 1583:
      ACCEPT_TOKEN(anon_sym_imageBuffer);
      END_STATE();
    case 1584:
      if (lookahead == 'r') ADVANCE(1694);
      END_STATE();
    case 1585:
      if (lookahead == 'r') ADVANCE(1695);
      END_STATE();
    case 1586:
      if (lookahead == 'r') ADVANCE(1696);
      END_STATE();
    case 1587:
      if (lookahead == 'S') ADVANCE(1697);
      END_STATE();
    case 1588:
      if (lookahead == 'e') ADVANCE(1698);
      END_STATE();
    case 1589:
      if (lookahead == 'f') ADVANCE(1699);
      END_STATE();
    case 1590:
      if (lookahead == 'e') ADVANCE(1700);
      END_STATE();
    case 1591:
      if (lookahead == 'u') ADVANCE(1701);
      END_STATE();
    case 1592:
      if (lookahead == 'r') ADVANCE(1702);
      END_STATE();
    case 1593:
      if (lookahead == 'r') ADVANCE(1703);
      END_STATE();
    case 1594:
      if (lookahead == 'S') ADVANCE(1704);
      END_STATE();
    case 1595:
      if (lookahead == 'e') ADVANCE(1705);
      END_STATE();
    case 1596:
      if (lookahead == 'f') ADVANCE(1706);
      END_STATE();
    case 1597:
      if (lookahead == 'e') ADVANCE(1707);
      END_STATE();
    case 1598:
      ACCEPT_TOKEN(anon_sym_macro_rules);
      END_STATE();
    case 1599:
      if (lookahead == 't') ADVANCE(1708);
      END_STATE();
    case 1600:
      if (lookahead == 'v') ADVANCE(1709);
      END_STATE();
    case 1601:
      if (lookahead == 'n') ADVANCE(1710);
      END_STATE();
    case 1602:
      if (lookahead == '_') ADVANCE(1711);
      END_STATE();
    case 1603:
      ACCEPT_TOKEN(anon_sym_rgba16float);
      END_STATE();
    case 1604:
      ACCEPT_TOKEN(anon_sym_rgba32float);
      END_STATE();
    case 1605:
      if (lookahead == 'r') ADVANCE(1712);
      END_STATE();
    case 1606:
      if (lookahead == 'a') ADVANCE(1713);
      END_STATE();
    case 1607:
      if (lookahead == 'r') ADVANCE(1714);
      END_STATE();
    case 1608:
      ACCEPT_TOKEN(anon_sym_sampler2DMS);
      if (lookahead == 'A') ADVANCE(1715);
      END_STATE();
    case 1609:
      if (lookahead == 'c') ADVANCE(1716);
      END_STATE();
    case 1610:
      if (lookahead == 'a') ADVANCE(1717);
      END_STATE();
    case 1611:
      if (lookahead == 'c') ADVANCE(1718);
      END_STATE();
    case 1612:
      if (lookahead == 'e') ADVANCE(1719);
      END_STATE();
    case 1613:
      ACCEPT_TOKEN(anon_sym_samplerCube);
      if (lookahead == 'A') ADVANCE(1720);
      if (lookahead == 'S') ADVANCE(1721);
      END_STATE();
    case 1614:
      if (lookahead == 'o') ADVANCE(1722);
      END_STATE();
    case 1615:
      if (lookahead == 'p') ADVANCE(1723);
      END_STATE();
    case 1616:
      if (lookahead == 's') ADVANCE(1724);
      END_STATE();
    case 1617:
      if (lookahead == 't') ADVANCE(1725);
      END_STATE();
    case 1618:
      if (lookahead == 'r') ADVANCE(1726);
      END_STATE();
    case 1619:
      ACCEPT_TOKEN(anon_sym_static_cast);
      END_STATE();
    case 1620:
      if (lookahead == 't') ADVANCE(1727);
      END_STATE();
    case 1621:
      ACCEPT_TOKEN(anon_sym_technique10);
      END_STATE();
    case 1622:
      ACCEPT_TOKEN(anon_sym_technique11);
      END_STATE();
    case 1623:
      if (lookahead == 'r') ADVANCE(1728);
      END_STATE();
    case 1624:
      if (lookahead == 'r') ADVANCE(1729);
      END_STATE();
    case 1625:
      ACCEPT_TOKEN(anon_sym_texture2DMS);
      if (lookahead == 'A') ADVANCE(1730);
      END_STATE();
    case 1626:
      if (lookahead == 'c') ADVANCE(1731);
      END_STATE();
    case 1627:
      if (lookahead == 'e') ADVANCE(1732);
      END_STATE();
    case 1628:
      ACCEPT_TOKEN(anon_sym_textureCube);
      if (lookahead == 'A') ADVANCE(1733);
      END_STATE();
    case 1629:
      if (lookahead == 'a') ADVANCE(1734);
      END_STATE();
    case 1630:
      if (lookahead == 'e') ADVANCE(1735);
      END_STATE();
    case 1631:
      if (lookahead == 't') ADVANCE(1736);
      END_STATE();
    case 1632:
      if (lookahead == 't') ADVANCE(1737);
      END_STATE();
    case 1633:
      if (lookahead == 'r') ADVANCE(1738);
      END_STATE();
    case 1634:
      if (lookahead == 'l') ADVANCE(1739);
      END_STATE();
    case 1635:
      ACCEPT_TOKEN(anon_sym_triangleadj);
      END_STATE();
    case 1636:
      if (lookahead == 'a') ADVANCE(1740);
      END_STATE();
    case 1637:
      if (lookahead == 'a') ADVANCE(1741);
      END_STATE();
    case 1638:
      if (lookahead == 'r') ADVANCE(1742);
      END_STATE();
    case 1639:
      if (lookahead == 't') ADVANCE(1743);
      END_STATE();
    case 1640:
      if (lookahead == 'r') ADVANCE(1744);
      END_STATE();
    case 1641:
      if (lookahead == 'r') ADVANCE(1745);
      END_STATE();
    case 1642:
      if (lookahead == 'r') ADVANCE(1746);
      END_STATE();
    case 1643:
      if (lookahead == 'r') ADVANCE(1747);
      END_STATE();
    case 1644:
      if (lookahead == 'S') ADVANCE(1748);
      END_STATE();
    case 1645:
      if (lookahead == 'e') ADVANCE(1749);
      END_STATE();
    case 1646:
      if (lookahead == 'f') ADVANCE(1750);
      END_STATE();
    case 1647:
      if (lookahead == 'e') ADVANCE(1751);
      END_STATE();
    case 1648:
      if (lookahead == 'u') ADVANCE(1752);
      END_STATE();
    case 1649:
      if (lookahead == 'r') ADVANCE(1753);
      END_STATE();
    case 1650:
      if (lookahead == 'r') ADVANCE(1754);
      END_STATE();
    case 1651:
      if (lookahead == 'S') ADVANCE(1755);
      END_STATE();
    case 1652:
      if (lookahead == 'e') ADVANCE(1756);
      END_STATE();
    case 1653:
      if (lookahead == 'f') ADVANCE(1757);
      END_STATE();
    case 1654:
      if (lookahead == 'e') ADVANCE(1758);
      END_STATE();
    case 1655:
      if (lookahead == 'e') ADVANCE(1759);
      END_STATE();
    case 1656:
      if (lookahead == 'u') ADVANCE(1760);
      END_STATE();
    case 1657:
      if (lookahead == 'u') ADVANCE(1761);
      END_STATE();
    case 1658:
      if (lookahead == 'r') ADVANCE(1762);
      END_STATE();
    case 1659:
      if (lookahead == 'r') ADVANCE(1763);
      END_STATE();
    case 1660:
      if (lookahead == 't') ADVANCE(1764);
      END_STATE();
    case 1661:
      if (lookahead == 'S') ADVANCE(1765);
      if (lookahead == 'V') ADVANCE(1766);
      END_STATE();
    case 1662:
      ACCEPT_TOKEN(anon_sym_DomainShader);
      END_STATE();
    case 1663:
      if (lookahead == 'e') ADVANCE(1767);
      END_STATE();
    case 1664:
      if (lookahead == 's') ADVANCE(1768);
      END_STATE();
    case 1665:
      if (lookahead == 'B') ADVANCE(1769);
      END_STATE();
    case 1666:
      if (lookahead == 'r') ADVANCE(1770);
      END_STATE();
    case 1667:
      if (lookahead == 'r') ADVANCE(1771);
      END_STATE();
    case 1668:
      if (lookahead == 'a') ADVANCE(1772);
      END_STATE();
    case 1669:
      if (lookahead == 'V') ADVANCE(1773);
      END_STATE();
    case 1670:
      if (lookahead == 'r') ADVANCE(1774);
      END_STATE();
    case 1671:
      ACCEPT_TOKEN(anon_sym_SamplerState);
      END_STATE();
    case 1672:
      if (lookahead == 'f') ADVANCE(1775);
      END_STATE();
    case 1673:
      if (lookahead == 'a') ADVANCE(1776);
      END_STATE();
    case 1674:
      if (lookahead == 'a') ADVANCE(1777);
      END_STATE();
    case 1675:
      if (lookahead == 'r') ADVANCE(1778);
      END_STATE();
    case 1676:
      if (lookahead == 'r') ADVANCE(1779);
      END_STATE();
    case 1677:
      if (lookahead == 'a') ADVANCE(1780);
      END_STATE();
    case 1678:
      ACCEPT_TOKEN(anon_sym_VertexShader);
      END_STATE();
    case 1679:
      ACCEPT_TOKEN(anon_sym_asm_fragment);
      END_STATE();
    case 1680:
      if (lookahead == 'y') ADVANCE(1781);
      END_STATE();
    case 1681:
      ACCEPT_TOKEN(anon_sym_column_major);
      END_STATE();
    case 1682:
      if (lookahead == 'm') ADVANCE(1782);
      END_STATE();
    case 1683:
      if (lookahead == 'l') ADVANCE(1783);
      END_STATE();
    case 1684:
      ACCEPT_TOKEN(anon_sym_dynamic_cast);
      END_STATE();
    case 1685:
      if (lookahead == 'y') ADVANCE(1784);
      END_STATE();
    case 1686:
      if (lookahead == 'y') ADVANCE(1785);
      END_STATE();
    case 1687:
      if (lookahead == 'r') ADVANCE(1786);
      END_STATE();
    case 1688:
      ACCEPT_TOKEN(anon_sym_iimage2DRect);
      END_STATE();
    case 1689:
      ACCEPT_TOKEN(anon_sym_iimageBuffer);
      END_STATE();
    case 1690:
      if (lookahead == 'r') ADVANCE(1787);
      END_STATE();
    case 1691:
      ACCEPT_TOKEN(anon_sym_image1DArray);
      END_STATE();
    case 1692:
      ACCEPT_TOKEN(anon_sym_image2DArray);
      END_STATE();
    case 1693:
      if (lookahead == 'a') ADVANCE(1788);
      END_STATE();
    case 1694:
      if (lookahead == 'a') ADVANCE(1789);
      END_STATE();
    case 1695:
      if (lookahead == 'r') ADVANCE(1790);
      END_STATE();
    case 1696:
      if (lookahead == 'r') ADVANCE(1791);
      END_STATE();
    case 1697:
      ACCEPT_TOKEN(anon_sym_isampler2DMS);
      if (lookahead == 'A') ADVANCE(1792);
      END_STATE();
    case 1698:
      if (lookahead == 'c') ADVANCE(1793);
      END_STATE();
    case 1699:
      if (lookahead == 'e') ADVANCE(1794);
      END_STATE();
    case 1700:
      ACCEPT_TOKEN(anon_sym_isamplerCube);
      if (lookahead == 'A') ADVANCE(1795);
      END_STATE();
    case 1701:
      if (lookahead == 't') ADVANCE(1796);
      END_STATE();
    case 1702:
      if (lookahead == 'r') ADVANCE(1797);
      END_STATE();
    case 1703:
      if (lookahead == 'r') ADVANCE(1798);
      END_STATE();
    case 1704:
      ACCEPT_TOKEN(anon_sym_itexture2DMS);
      if (lookahead == 'A') ADVANCE(1799);
      END_STATE();
    case 1705:
      if (lookahead == 'c') ADVANCE(1800);
      END_STATE();
    case 1706:
      if (lookahead == 'e') ADVANCE(1801);
      END_STATE();
    case 1707:
      ACCEPT_TOKEN(anon_sym_itextureCube);
      if (lookahead == 'A') ADVANCE(1802);
      END_STATE();
    case 1708:
      if (lookahead == 'i') ADVANCE(1803);
      END_STATE();
    case 1709:
      if (lookahead == 'e') ADVANCE(1804);
      END_STATE();
    case 1710:
      if (lookahead == 't') ADVANCE(1805);
      END_STATE();
    case 1711:
      if (lookahead == 'c') ADVANCE(1806);
      END_STATE();
    case 1712:
      if (lookahead == 'a') ADVANCE(1807);
      END_STATE();
    case 1713:
      if (lookahead == 'd') ADVANCE(1808);
      END_STATE();
    case 1714:
      if (lookahead == 'a') ADVANCE(1809);
      END_STATE();
    case 1715:
      if (lookahead == 'r') ADVANCE(1810);
      END_STATE();
    case 1716:
      if (lookahead == 't') ADVANCE(1811);
      END_STATE();
    case 1717:
      if (lookahead == 'd') ADVANCE(1812);
      END_STATE();
    case 1718:
      if (lookahead == 't') ADVANCE(1813);
      END_STATE();
    case 1719:
      if (lookahead == 'r') ADVANCE(1814);
      END_STATE();
    case 1720:
      if (lookahead == 'r') ADVANCE(1815);
      END_STATE();
    case 1721:
      if (lookahead == 'h') ADVANCE(1816);
      END_STATE();
    case 1722:
      if (lookahead == 'w') ADVANCE(1817);
      END_STATE();
    case 1723:
      if (lookahead == 'a') ADVANCE(1818);
      END_STATE();
    case 1724:
      if (lookahead == 't') ADVANCE(1819);
      END_STATE();
    case 1725:
      ACCEPT_TOKEN(sym_staticAssert);
      END_STATE();
    case 1726:
      if (lookahead == 't') ADVANCE(1820);
      END_STATE();
    case 1727:
      ACCEPT_TOKEN(anon_sym_subpassInput);
      if (lookahead == 'M') ADVANCE(1821);
      END_STATE();
    case 1728:
      if (lookahead == 'a') ADVANCE(1822);
      END_STATE();
    case 1729:
      if (lookahead == 'a') ADVANCE(1823);
      END_STATE();
    case 1730:
      if (lookahead == 'r') ADVANCE(1824);
      END_STATE();
    case 1731:
      if (lookahead == 't') ADVANCE(1825);
      END_STATE();
    case 1732:
      if (lookahead == 'r') ADVANCE(1826);
      END_STATE();
    case 1733:
      if (lookahead == 'r') ADVANCE(1827);
      END_STATE();
    case 1734:
      if (lookahead == 'r') ADVANCE(1828);
      END_STATE();
    case 1735:
      ACCEPT_TOKEN(sym_texture_cube);
      if (lookahead == '_') ADVANCE(1829);
      END_STATE();
    case 1736:
      if (lookahead == 'h') ADVANCE(1830);
      END_STATE();
    case 1737:
      if (lookahead == 'i') ADVANCE(1831);
      END_STATE();
    case 1738:
      if (lookahead == 'a') ADVANCE(1832);
      END_STATE();
    case 1739:
      ACCEPT_TOKEN(anon_sym_thread_local);
      END_STATE();
    case 1740:
      if (lookahead == 'y') ADVANCE(1833);
      END_STATE();
    case 1741:
      if (lookahead == 'y') ADVANCE(1834);
      END_STATE();
    case 1742:
      if (lookahead == 'r') ADVANCE(1835);
      END_STATE();
    case 1743:
      ACCEPT_TOKEN(anon_sym_uimage2DRect);
      END_STATE();
    case 1744:
      ACCEPT_TOKEN(anon_sym_uimageBuffer);
      END_STATE();
    case 1745:
      if (lookahead == 'r') ADVANCE(1836);
      END_STATE();
    case 1746:
      if (lookahead == 'r') ADVANCE(1837);
      END_STATE();
    case 1747:
      if (lookahead == 'r') ADVANCE(1838);
      END_STATE();
    case 1748:
      ACCEPT_TOKEN(anon_sym_usampler2DMS);
      if (lookahead == 'A') ADVANCE(1839);
      END_STATE();
    case 1749:
      if (lookahead == 'c') ADVANCE(1840);
      END_STATE();
    case 1750:
      if (lookahead == 'e') ADVANCE(1841);
      END_STATE();
    case 1751:
      ACCEPT_TOKEN(anon_sym_usamplerCube);
      if (lookahead == 'A') ADVANCE(1842);
      END_STATE();
    case 1752:
      if (lookahead == 't') ADVANCE(1843);
      END_STATE();
    case 1753:
      if (lookahead == 'r') ADVANCE(1844);
      END_STATE();
    case 1754:
      if (lookahead == 'r') ADVANCE(1845);
      END_STATE();
    case 1755:
      ACCEPT_TOKEN(anon_sym_utexture2DMS);
      if (lookahead == 'A') ADVANCE(1846);
      END_STATE();
    case 1756:
      if (lookahead == 'c') ADVANCE(1847);
      END_STATE();
    case 1757:
      if (lookahead == 'e') ADVANCE(1848);
      END_STATE();
    case 1758:
      ACCEPT_TOKEN(anon_sym_utextureCube);
      if (lookahead == 'A') ADVANCE(1849);
      END_STATE();
    case 1759:
      if (lookahead == 'n') ADVANCE(1850);
      END_STATE();
    case 1760:
      if (lookahead == 'r') ADVANCE(1851);
      END_STATE();
    case 1761:
      if (lookahead == 'f') ADVANCE(1852);
      END_STATE();
    case 1762:
      ACCEPT_TOKEN(anon_sym_CompileShader);
      END_STATE();
    case 1763:
      ACCEPT_TOKEN(anon_sym_ComputeShader);
      END_STATE();
    case 1764:
      if (lookahead == 'u') ADVANCE(1853);
      END_STATE();
    case 1765:
      if (lookahead == 't') ADVANCE(1854);
      END_STATE();
    case 1766:
      if (lookahead == 'i') ADVANCE(1855);
      END_STATE();
    case 1767:
      if (lookahead == 'r') ADVANCE(1856);
      END_STATE();
    case 1768:
      if (lookahead == 'B') ADVANCE(1857);
      END_STATE();
    case 1769:
      if (lookahead == 'u') ADVANCE(1858);
      END_STATE();
    case 1770:
      if (lookahead == 'r') ADVANCE(1859);
      END_STATE();
    case 1771:
      if (lookahead == 'r') ADVANCE(1860);
      END_STATE();
    case 1772:
      if (lookahead == 't') ADVANCE(1861);
      END_STATE();
    case 1773:
      if (lookahead == 'i') ADVANCE(1862);
      END_STATE();
    case 1774:
      if (lookahead == 'i') ADVANCE(1863);
      END_STATE();
    case 1775:
      if (lookahead == 'f') ADVANCE(1864);
      END_STATE();
    case 1776:
      if (lookahead == 'y') ADVANCE(1865);
      END_STATE();
    case 1777:
      if (lookahead == 'y') ADVANCE(1866);
      END_STATE();
    case 1778:
      if (lookahead == 'r') ADVANCE(1867);
      END_STATE();
    case 1779:
      if (lookahead == 'r') ADVANCE(1868);
      END_STATE();
    case 1780:
      if (lookahead == 'm') ADVANCE(1869);
      END_STATE();
    case 1781:
      ACCEPT_TOKEN(anon_sym_binding_array);
      END_STATE();
    case 1782:
      if (lookahead == 'e') ADVANCE(1870);
      END_STATE();
    case 1783:
      if (lookahead == 'p') ADVANCE(1871);
      END_STATE();
    case 1784:
      ACCEPT_TOKEN(anon_sym_iimage1DArray);
      END_STATE();
    case 1785:
      ACCEPT_TOKEN(anon_sym_iimage2DArray);
      END_STATE();
    case 1786:
      if (lookahead == 'a') ADVANCE(1872);
      END_STATE();
    case 1787:
      if (lookahead == 'a') ADVANCE(1873);
      END_STATE();
    case 1788:
      if (lookahead == 'y') ADVANCE(1874);
      END_STATE();
    case 1789:
      if (lookahead == 'y') ADVANCE(1875);
      END_STATE();
    case 1790:
      if (lookahead == 'a') ADVANCE(1876);
      END_STATE();
    case 1791:
      if (lookahead == 'a') ADVANCE(1877);
      END_STATE();
    case 1792:
      if (lookahead == 'r') ADVANCE(1878);
      END_STATE();
    case 1793:
      if (lookahead == 't') ADVANCE(1879);
      END_STATE();
    case 1794:
      if (lookahead == 'r') ADVANCE(1880);
      END_STATE();
    case 1795:
      if (lookahead == 'r') ADVANCE(1881);
      END_STATE();
    case 1796:
      ACCEPT_TOKEN(anon_sym_isubpassInput);
      if (lookahead == 'M') ADVANCE(1882);
      END_STATE();
    case 1797:
      if (lookahead == 'a') ADVANCE(1883);
      END_STATE();
    case 1798:
      if (lookahead == 'a') ADVANCE(1884);
      END_STATE();
    case 1799:
      if (lookahead == 'r') ADVANCE(1885);
      END_STATE();
    case 1800:
      if (lookahead == 't') ADVANCE(1886);
      END_STATE();
    case 1801:
      if (lookahead == 'r') ADVANCE(1887);
      END_STATE();
    case 1802:
      if (lookahead == 'r') ADVANCE(1888);
      END_STATE();
    case 1803:
      if (lookahead == 'o') ADVANCE(1889);
      END_STATE();
    case 1804:
      ACCEPT_TOKEN(anon_sym_noperspective);
      END_STATE();
    case 1805:
      ACCEPT_TOKEN(anon_sym_pixelfragment);
      END_STATE();
    case 1806:
      if (lookahead == 'a') ADVANCE(1890);
      END_STATE();
    case 1807:
      if (lookahead == 'y') ADVANCE(1891);
      END_STATE();
    case 1808:
      if (lookahead == 'o') ADVANCE(1892);
      END_STATE();
    case 1809:
      if (lookahead == 'y') ADVANCE(1893);
      END_STATE();
    case 1810:
      if (lookahead == 'r') ADVANCE(1894);
      END_STATE();
    case 1811:
      ACCEPT_TOKEN(anon_sym_sampler2DRect);
      if (lookahead == 'S') ADVANCE(1895);
      END_STATE();
    case 1812:
      if (lookahead == 'o') ADVANCE(1896);
      END_STATE();
    case 1813:
      ACCEPT_TOKEN(anon_sym_sampler3DRect);
      END_STATE();
    case 1814:
      ACCEPT_TOKEN(anon_sym_samplerBuffer);
      END_STATE();
    case 1815:
      if (lookahead == 'r') ADVANCE(1897);
      END_STATE();
    case 1816:
      if (lookahead == 'a') ADVANCE(1898);
      END_STATE();
    case 1817:
      ACCEPT_TOKEN(anon_sym_samplerShadow);
      END_STATE();
    case 1818:
      if (lookahead == 'r') ADVANCE(1899);
      END_STATE();
    case 1819:
      if (lookahead == 'a') ADVANCE(1900);
      END_STATE();
    case 1820:
      ACCEPT_TOKEN(anon_sym_static_assert);
      END_STATE();
    case 1821:
      if (lookahead == 'S') ADVANCE(1901);
      END_STATE();
    case 1822:
      if (lookahead == 'y') ADVANCE(1902);
      END_STATE();
    case 1823:
      if (lookahead == 'y') ADVANCE(1903);
      END_STATE();
    case 1824:
      if (lookahead == 'r') ADVANCE(1904);
      END_STATE();
    case 1825:
      ACCEPT_TOKEN(anon_sym_texture2DRect);
      END_STATE();
    case 1826:
      ACCEPT_TOKEN(anon_sym_textureBuffer);
      END_STATE();
    case 1827:
      if (lookahead == 'r') ADVANCE(1905);
      END_STATE();
    case 1828:
      if (lookahead == 'r') ADVANCE(1906);
      END_STATE();
    case 1829:
      if (lookahead == 'a') ADVANCE(1907);
      END_STATE();
    case 1830:
      if (lookahead == '_') ADVANCE(1908);
      END_STATE();
    case 1831:
      if (lookahead == 's') ADVANCE(1909);
      END_STATE();
    case 1832:
      if (lookahead == 'g') ADVANCE(1910);
      END_STATE();
    case 1833:
      ACCEPT_TOKEN(anon_sym_uimage1DArray);
      END_STATE();
    case 1834:
      ACCEPT_TOKEN(anon_sym_uimage2DArray);
      END_STATE();
    case 1835:
      if (lookahead == 'a') ADVANCE(1911);
      END_STATE();
    case 1836:
      if (lookahead == 'a') ADVANCE(1912);
      END_STATE();
    case 1837:
      if (lookahead == 'a') ADVANCE(1913);
      END_STATE();
    case 1838:
      if (lookahead == 'a') ADVANCE(1914);
      END_STATE();
    case 1839:
      if (lookahead == 'r') ADVANCE(1915);
      END_STATE();
    case 1840:
      if (lookahead == 't') ADVANCE(1916);
      END_STATE();
    case 1841:
      if (lookahead == 'r') ADVANCE(1917);
      END_STATE();
    case 1842:
      if (lookahead == 'r') ADVANCE(1918);
      END_STATE();
    case 1843:
      ACCEPT_TOKEN(anon_sym_usubpassInput);
      if (lookahead == 'M') ADVANCE(1919);
      END_STATE();
    case 1844:
      if (lookahead == 'a') ADVANCE(1920);
      END_STATE();
    case 1845:
      if (lookahead == 'a') ADVANCE(1921);
      END_STATE();
    case 1846:
      if (lookahead == 'r') ADVANCE(1922);
      END_STATE();
    case 1847:
      if (lookahead == 't') ADVANCE(1923);
      END_STATE();
    case 1848:
      if (lookahead == 'r') ADVANCE(1924);
      END_STATE();
    case 1849:
      if (lookahead == 'r') ADVANCE(1925);
      END_STATE();
    case 1850:
      if (lookahead == 't') ADVANCE(1926);
      END_STATE();
    case 1851:
      if (lookahead == 'e') ADVANCE(1927);
      END_STATE();
    case 1852:
      if (lookahead == 'f') ADVANCE(1928);
      END_STATE();
    case 1853:
      if (lookahead == 'r') ADVANCE(1929);
      END_STATE();
    case 1854:
      if (lookahead == 'a') ADVANCE(1930);
      END_STATE();
    case 1855:
      if (lookahead == 'e') ADVANCE(1931);
      END_STATE();
    case 1856:
      ACCEPT_TOKEN(anon_sym_GeometryShader);
      END_STATE();
    case 1857:
      if (lookahead == 'u') ADVANCE(1932);
      END_STATE();
    case 1858:
      if (lookahead == 'f') ADVANCE(1933);
      END_STATE();
    case 1859:
      if (lookahead == 'a') ADVANCE(1934);
      END_STATE();
    case 1860:
      if (lookahead == 'a') ADVANCE(1935);
      END_STATE();
    case 1861:
      if (lookahead == 'e') ADVANCE(1936);
      END_STATE();
    case 1862:
      if (lookahead == 'e') ADVANCE(1937);
      END_STATE();
    case 1863:
      if (lookahead == 's') ADVANCE(1938);
      END_STATE();
    case 1864:
      if (lookahead == 'e') ADVANCE(1939);
      END_STATE();
    case 1865:
      ACCEPT_TOKEN(anon_sym_Texture1DArray);
      END_STATE();
    case 1866:
      ACCEPT_TOKEN(anon_sym_Texture2DArray);
      END_STATE();
    case 1867:
      if (lookahead == 'a') ADVANCE(1940);
      END_STATE();
    case 1868:
      if (lookahead == 'a') ADVANCE(1941);
      END_STATE();
    case 1869:
      ACCEPT_TOKEN(anon_sym_TriangleStream);
      END_STATE();
    case 1870:
      if (lookahead == 'n') ADVANCE(1942);
      END_STATE();
    case 1871:
      if (lookahead == 'e') ADVANCE(1943);
      END_STATE();
    case 1872:
      if (lookahead == 'y') ADVANCE(1944);
      END_STATE();
    case 1873:
      if (lookahead == 'y') ADVANCE(1945);
      END_STATE();
    case 1874:
      ACCEPT_TOKEN(anon_sym_image2DMSArray);
      END_STATE();
    case 1875:
      ACCEPT_TOKEN(anon_sym_imageCubeArray);
      END_STATE();
    case 1876:
      if (lookahead == 'y') ADVANCE(1946);
      END_STATE();
    case 1877:
      if (lookahead == 'y') ADVANCE(1947);
      END_STATE();
    case 1878:
      if (lookahead == 'r') ADVANCE(1948);
      END_STATE();
    case 1879:
      ACCEPT_TOKEN(anon_sym_isampler2DRect);
      END_STATE();
    case 1880:
      ACCEPT_TOKEN(anon_sym_isamplerBuffer);
      END_STATE();
    case 1881:
      if (lookahead == 'r') ADVANCE(1949);
      END_STATE();
    case 1882:
      if (lookahead == 'S') ADVANCE(1950);
      END_STATE();
    case 1883:
      if (lookahead == 'y') ADVANCE(1951);
      END_STATE();
    case 1884:
      if (lookahead == 'y') ADVANCE(1952);
      END_STATE();
    case 1885:
      if (lookahead == 'r') ADVANCE(1953);
      END_STATE();
    case 1886:
      ACCEPT_TOKEN(anon_sym_itexture2DRect);
      END_STATE();
    case 1887:
      ACCEPT_TOKEN(anon_sym_itextureBuffer);
      END_STATE();
    case 1888:
      if (lookahead == 'r') ADVANCE(1954);
      END_STATE();
    case 1889:
      if (lookahead == 'n') ADVANCE(1955);
      END_STATE();
    case 1890:
      if (lookahead == 's') ADVANCE(1956);
      END_STATE();
    case 1891:
      ACCEPT_TOKEN(anon_sym_sampler1DArray);
      if (lookahead == 'S') ADVANCE(1957);
      END_STATE();
    case 1892:
      if (lookahead == 'w') ADVANCE(1958);
      END_STATE();
    case 1893:
      ACCEPT_TOKEN(anon_sym_sampler2DArray);
      if (lookahead == 'S') ADVANCE(1959);
      END_STATE();
    case 1894:
      if (lookahead == 'a') ADVANCE(1960);
      END_STATE();
    case 1895:
      if (lookahead == 'h') ADVANCE(1961);
      END_STATE();
    case 1896:
      if (lookahead == 'w') ADVANCE(1962);
      END_STATE();
    case 1897:
      if (lookahead == 'a') ADVANCE(1963);
      END_STATE();
    case 1898:
      if (lookahead == 'd') ADVANCE(1964);
      END_STATE();
    case 1899:
      if (lookahead == 'i') ADVANCE(1965);
      END_STATE();
    case 1900:
      if (lookahead == 't') ADVANCE(1966);
      END_STATE();
    case 1901:
      ACCEPT_TOKEN(anon_sym_subpassInputMS);
      END_STATE();
    case 1902:
      ACCEPT_TOKEN(anon_sym_texture1DArray);
      END_STATE();
    case 1903:
      ACCEPT_TOKEN(anon_sym_texture2DArray);
      END_STATE();
    case 1904:
      if (lookahead == 'a') ADVANCE(1967);
      END_STATE();
    case 1905:
      if (lookahead == 'a') ADVANCE(1968);
      END_STATE();
    case 1906:
      if (lookahead == 'a') ADVANCE(1969);
      END_STATE();
    case 1907:
      if (lookahead == 'r') ADVANCE(1970);
      END_STATE();
    case 1908:
      if (lookahead == '2') ADVANCE(1971);
      if (lookahead == 'c') ADVANCE(1972);
      if (lookahead == 'm') ADVANCE(1973);
      END_STATE();
    case 1909:
      if (lookahead == 'a') ADVANCE(1974);
      END_STATE();
    case 1910:
      if (lookahead == 'e') ADVANCE(1975);
      END_STATE();
    case 1911:
      if (lookahead == 'y') ADVANCE(1976);
      END_STATE();
    case 1912:
      if (lookahead == 'y') ADVANCE(1977);
      END_STATE();
    case 1913:
      if (lookahead == 'y') ADVANCE(1978);
      END_STATE();
    case 1914:
      if (lookahead == 'y') ADVANCE(1979);
      END_STATE();
    case 1915:
      if (lookahead == 'r') ADVANCE(1980);
      END_STATE();
    case 1916:
      ACCEPT_TOKEN(anon_sym_usampler2DRect);
      END_STATE();
    case 1917:
      ACCEPT_TOKEN(anon_sym_usamplerBuffer);
      END_STATE();
    case 1918:
      if (lookahead == 'r') ADVANCE(1981);
      END_STATE();
    case 1919:
      if (lookahead == 'S') ADVANCE(1982);
      END_STATE();
    case 1920:
      if (lookahead == 'y') ADVANCE(1983);
      END_STATE();
    case 1921:
      if (lookahead == 'y') ADVANCE(1984);
      END_STATE();
    case 1922:
      if (lookahead == 'r') ADVANCE(1985);
      END_STATE();
    case 1923:
      ACCEPT_TOKEN(anon_sym_utexture2DRect);
      END_STATE();
    case 1924:
      ACCEPT_TOKEN(anon_sym_utextureBuffer);
      END_STATE();
    case 1925:
      if (lookahead == 'r') ADVANCE(1986);
      END_STATE();
    case 1926:
      ACCEPT_TOKEN(anon_sym_vertexfragment);
      END_STATE();
    case 1927:
      if (lookahead == 'd') ADVANCE(1987);
      END_STATE();
    case 1928:
      if (lookahead == 'e') ADVANCE(1988);
      END_STATE();
    case 1929:
      if (lookahead == 'e') ADVANCE(1989);
      END_STATE();
    case 1930:
      if (lookahead == 't') ADVANCE(1990);
      END_STATE();
    case 1931:
      if (lookahead == 'w') ADVANCE(1991);
      END_STATE();
    case 1932:
      if (lookahead == 'f') ADVANCE(1992);
      END_STATE();
    case 1933:
      if (lookahead == 'f') ADVANCE(1993);
      END_STATE();
    case 1934:
      if (lookahead == 'y') ADVANCE(1994);
      END_STATE();
    case 1935:
      if (lookahead == 'y') ADVANCE(1995);
      END_STATE();
    case 1936:
      ACCEPT_TOKEN(anon_sym_RasterizerState);
      END_STATE();
    case 1937:
      if (lookahead == 'w') ADVANCE(1996);
      END_STATE();
    case 1938:
      if (lookahead == 'o') ADVANCE(1997);
      END_STATE();
    case 1939:
      if (lookahead == 'r') ADVANCE(1998);
      END_STATE();
    case 1940:
      if (lookahead == 'y') ADVANCE(1999);
      END_STATE();
    case 1941:
      if (lookahead == 'y') ADVANCE(2000);
      END_STATE();
    case 1942:
      if (lookahead == 't') ADVANCE(2001);
      END_STATE();
    case 1943:
      if (lookahead == 'r') ADVANCE(2002);
      END_STATE();
    case 1944:
      ACCEPT_TOKEN(anon_sym_iimage2DMSArray);
      END_STATE();
    case 1945:
      ACCEPT_TOKEN(anon_sym_iimageCubeArray);
      END_STATE();
    case 1946:
      ACCEPT_TOKEN(anon_sym_isampler1DArray);
      END_STATE();
    case 1947:
      ACCEPT_TOKEN(anon_sym_isampler2DArray);
      END_STATE();
    case 1948:
      if (lookahead == 'a') ADVANCE(2003);
      END_STATE();
    case 1949:
      if (lookahead == 'a') ADVANCE(2004);
      END_STATE();
    case 1950:
      ACCEPT_TOKEN(anon_sym_isubpassInputMS);
      END_STATE();
    case 1951:
      ACCEPT_TOKEN(anon_sym_itexture1DArray);
      END_STATE();
    case 1952:
      ACCEPT_TOKEN(anon_sym_itexture2DArray);
      END_STATE();
    case 1953:
      if (lookahead == 'a') ADVANCE(2005);
      END_STATE();
    case 1954:
      if (lookahead == 'a') ADVANCE(2006);
      END_STATE();
    case 1955:
      ACCEPT_TOKEN(anon_sym_nointerpolation);
      END_STATE();
    case 1956:
      if (lookahead == 't') ADVANCE(2007);
      END_STATE();
    case 1957:
      if (lookahead == 'h') ADVANCE(2008);
      END_STATE();
    case 1958:
      ACCEPT_TOKEN(anon_sym_sampler1DShadow);
      END_STATE();
    case 1959:
      if (lookahead == 'h') ADVANCE(2009);
      END_STATE();
    case 1960:
      if (lookahead == 'y') ADVANCE(2010);
      END_STATE();
    case 1961:
      if (lookahead == 'a') ADVANCE(2011);
      END_STATE();
    case 1962:
      ACCEPT_TOKEN(anon_sym_sampler2DShadow);
      END_STATE();
    case 1963:
      if (lookahead == 'y') ADVANCE(2012);
      END_STATE();
    case 1964:
      if (lookahead == 'o') ADVANCE(2013);
      END_STATE();
    case 1965:
      if (lookahead == 's') ADVANCE(2014);
      END_STATE();
    case 1966:
      if (lookahead == 'e') ADVANCE(2015);
      END_STATE();
    case 1967:
      if (lookahead == 'y') ADVANCE(2016);
      END_STATE();
    case 1968:
      if (lookahead == 'y') ADVANCE(2017);
      END_STATE();
    case 1969:
      if (lookahead == 'y') ADVANCE(2018);
      END_STATE();
    case 1970:
      if (lookahead == 'r') ADVANCE(2019);
      END_STATE();
    case 1971:
      if (lookahead == 'd') ADVANCE(2020);
      END_STATE();
    case 1972:
      if (lookahead == 'u') ADVANCE(2021);
      END_STATE();
    case 1973:
      if (lookahead == 'u') ADVANCE(2022);
      END_STATE();
    case 1974:
      if (lookahead == 'm') ADVANCE(2023);
      END_STATE();
    case 1975:
      if (lookahead == '_') ADVANCE(2024);
      END_STATE();
    case 1976:
      ACCEPT_TOKEN(anon_sym_uimage2DMSArray);
      END_STATE();
    case 1977:
      ACCEPT_TOKEN(anon_sym_uimageCubeArray);
      END_STATE();
    case 1978:
      ACCEPT_TOKEN(anon_sym_usampler1DArray);
      END_STATE();
    case 1979:
      ACCEPT_TOKEN(anon_sym_usampler2DArray);
      END_STATE();
    case 1980:
      if (lookahead == 'a') ADVANCE(2025);
      END_STATE();
    case 1981:
      if (lookahead == 'a') ADVANCE(2026);
      END_STATE();
    case 1982:
      ACCEPT_TOKEN(anon_sym_usubpassInputMS);
      END_STATE();
    case 1983:
      ACCEPT_TOKEN(anon_sym_utexture1DArray);
      END_STATE();
    case 1984:
      ACCEPT_TOKEN(anon_sym_utexture2DArray);
      END_STATE();
    case 1985:
      if (lookahead == 'a') ADVANCE(2027);
      END_STATE();
    case 1986:
      if (lookahead == 'a') ADVANCE(2028);
      END_STATE();
    case 1987:
      if (lookahead == 'B') ADVANCE(2029);
      END_STATE();
    case 1988:
      if (lookahead == 'r') ADVANCE(2030);
      END_STATE();
    case 1989:
      if (lookahead == 'd') ADVANCE(2031);
      END_STATE();
    case 1990:
      if (lookahead == 'e') ADVANCE(2032);
      END_STATE();
    case 1991:
      ACCEPT_TOKEN(anon_sym_DepthStencilView);
      END_STATE();
    case 1992:
      if (lookahead == 'f') ADVANCE(2033);
      END_STATE();
    case 1993:
      if (lookahead == 'e') ADVANCE(2034);
      END_STATE();
    case 1994:
      ACCEPT_TOKEN(anon_sym_RWTexture1DArray);
      END_STATE();
    case 1995:
      ACCEPT_TOKEN(anon_sym_RWTexture2DArray);
      END_STATE();
    case 1996:
      ACCEPT_TOKEN(anon_sym_RenderTargetView);
      END_STATE();
    case 1997:
      if (lookahead == 'n') ADVANCE(2035);
      END_STATE();
    case 1998:
      ACCEPT_TOKEN(anon_sym_StructuredBuffer);
      END_STATE();
    case 1999:
      ACCEPT_TOKEN(anon_sym_Texture2DMSArray);
      END_STATE();
    case 2000:
      ACCEPT_TOKEN(anon_sym_TextureCubeArray);
      END_STATE();
    case 2001:
      ACCEPT_TOKEN(anon_sym_compile_fragment);
      END_STATE();
    case 2002:
      ACCEPT_TOKEN(anon_sym_demote_to_helper);
      END_STATE();
    case 2003:
      if (lookahead == 'y') ADVANCE(2036);
      END_STATE();
    case 2004:
      if (lookahead == 'y') ADVANCE(2037);
      END_STATE();
    case 2005:
      if (lookahead == 'y') ADVANCE(2038);
      END_STATE();
    case 2006:
      if (lookahead == 'y') ADVANCE(2039);
      END_STATE();
    case 2007:
      ACCEPT_TOKEN(anon_sym_reinterpret_cast);
      END_STATE();
    case 2008:
      if (lookahead == 'a') ADVANCE(2040);
      END_STATE();
    case 2009:
      if (lookahead == 'a') ADVANCE(2041);
      END_STATE();
    case 2010:
      ACCEPT_TOKEN(anon_sym_sampler2DMSArray);
      END_STATE();
    case 2011:
      if (lookahead == 'd') ADVANCE(2042);
      END_STATE();
    case 2012:
      ACCEPT_TOKEN(anon_sym_samplerCubeArray);
      if (lookahead == 'S') ADVANCE(2043);
      END_STATE();
    case 2013:
      if (lookahead == 'w') ADVANCE(2044);
      END_STATE();
    case 2014:
      if (lookahead == 'o') ADVANCE(2045);
      END_STATE();
    case 2015:
      ACCEPT_TOKEN(anon_sym_stateblock_state);
      END_STATE();
    case 2016:
      ACCEPT_TOKEN(anon_sym_texture2DMSArray);
      END_STATE();
    case 2017:
      ACCEPT_TOKEN(anon_sym_textureCubeArray);
      END_STATE();
    case 2018:
      ACCEPT_TOKEN(sym_texture_2d_array);
      END_STATE();
    case 2019:
      if (lookahead == 'a') ADVANCE(2046);
      END_STATE();
    case 2020:
      ACCEPT_TOKEN(sym_texture_depth_2d);
      if (lookahead == '_') ADVANCE(2047);
      END_STATE();
    case 2021:
      if (lookahead == 'b') ADVANCE(2048);
      END_STATE();
    case 2022:
      if (lookahead == 'l') ADVANCE(2049);
      END_STATE();
    case 2023:
      if (lookahead == 'p') ADVANCE(2050);
      END_STATE();
    case 2024:
      if (lookahead == '1') ADVANCE(2051);
      if (lookahead == '2') ADVANCE(2052);
      if (lookahead == '3') ADVANCE(2053);
      END_STATE();
    case 2025:
      if (lookahead == 'y') ADVANCE(2054);
      END_STATE();
    case 2026:
      if (lookahead == 'y') ADVANCE(2055);
      END_STATE();
    case 2027:
      if (lookahead == 'y') ADVANCE(2056);
      END_STATE();
    case 2028:
      if (lookahead == 'y') ADVANCE(2057);
      END_STATE();
    case 2029:
      if (lookahead == 'u') ADVANCE(2058);
      END_STATE();
    case 2030:
      ACCEPT_TOKEN(anon_sym_ByteAddressBuffer);
      END_STATE();
    case 2031:
      if (lookahead == 'B') ADVANCE(2059);
      END_STATE();
    case 2032:
      ACCEPT_TOKEN(anon_sym_DepthStencilState);
      END_STATE();
    case 2033:
      if (lookahead == 'e') ADVANCE(2060);
      END_STATE();
    case 2034:
      if (lookahead == 'r') ADVANCE(2061);
      END_STATE();
    case 2035:
      if (lookahead == 'S') ADVANCE(2062);
      END_STATE();
    case 2036:
      ACCEPT_TOKEN(anon_sym_isampler2DMSArray);
      END_STATE();
    case 2037:
      ACCEPT_TOKEN(anon_sym_isamplerCubeArray);
      END_STATE();
    case 2038:
      ACCEPT_TOKEN(anon_sym_itexture2DMSArray);
      END_STATE();
    case 2039:
      ACCEPT_TOKEN(anon_sym_itextureCubeArray);
      END_STATE();
    case 2040:
      if (lookahead == 'd') ADVANCE(2063);
      END_STATE();
    case 2041:
      if (lookahead == 'd') ADVANCE(2064);
      END_STATE();
    case 2042:
      if (lookahead == 'o') ADVANCE(2065);
      END_STATE();
    case 2043:
      if (lookahead == 'h') ADVANCE(2066);
      END_STATE();
    case 2044:
      ACCEPT_TOKEN(anon_sym_samplerCubeShadow);
      END_STATE();
    case 2045:
      if (lookahead == 'n') ADVANCE(2067);
      END_STATE();
    case 2046:
      if (lookahead == 'y') ADVANCE(2068);
      END_STATE();
    case 2047:
      if (lookahead == 'a') ADVANCE(2069);
      END_STATE();
    case 2048:
      if (lookahead == 'e') ADVANCE(2070);
      END_STATE();
    case 2049:
      if (lookahead == 't') ADVANCE(2071);
      END_STATE();
    case 2050:
      if (lookahead == 'l') ADVANCE(2072);
      END_STATE();
    case 2051:
      if (lookahead == 'd') ADVANCE(2073);
      END_STATE();
    case 2052:
      if (lookahead == 'd') ADVANCE(2074);
      END_STATE();
    case 2053:
      if (lookahead == 'd') ADVANCE(2075);
      END_STATE();
    case 2054:
      ACCEPT_TOKEN(anon_sym_usampler2DMSArray);
      END_STATE();
    case 2055:
      ACCEPT_TOKEN(anon_sym_usamplerCubeArray);
      END_STATE();
    case 2056:
      ACCEPT_TOKEN(anon_sym_utexture2DMSArray);
      END_STATE();
    case 2057:
      ACCEPT_TOKEN(anon_sym_utextureCubeArray);
      END_STATE();
    case 2058:
      if (lookahead == 'f') ADVANCE(2076);
      END_STATE();
    case 2059:
      if (lookahead == 'u') ADVANCE(2077);
      END_STATE();
    case 2060:
      if (lookahead == 'r') ADVANCE(2078);
      END_STATE();
    case 2061:
      ACCEPT_TOKEN(anon_sym_RWStructuredBuffer);
      END_STATE();
    case 2062:
      if (lookahead == 't') ADVANCE(2079);
      END_STATE();
    case 2063:
      if (lookahead == 'o') ADVANCE(2080);
      END_STATE();
    case 2064:
      if (lookahead == 'o') ADVANCE(2081);
      END_STATE();
    case 2065:
      if (lookahead == 'w') ADVANCE(2082);
      END_STATE();
    case 2066:
      if (lookahead == 'a') ADVANCE(2083);
      END_STATE();
    case 2067:
      ACCEPT_TOKEN(sym_sampler_comparison);
      END_STATE();
    case 2068:
      ACCEPT_TOKEN(sym_texture_cube_array);
      END_STATE();
    case 2069:
      if (lookahead == 'r') ADVANCE(2084);
      END_STATE();
    case 2070:
      ACCEPT_TOKEN(sym_texture_depth_cube);
      if (lookahead == '_') ADVANCE(2085);
      END_STATE();
    case 2071:
      if (lookahead == 'i') ADVANCE(2086);
      END_STATE();
    case 2072:
      if (lookahead == 'e') ADVANCE(2087);
      END_STATE();
    case 2073:
      ACCEPT_TOKEN(sym_texture_storage_1d);
      END_STATE();
    case 2074:
      ACCEPT_TOKEN(sym_texture_storage_2d);
      if (lookahead == '_') ADVANCE(2088);
      END_STATE();
    case 2075:
      ACCEPT_TOKEN(sym_texture_storage_3d);
      END_STATE();
    case 2076:
      if (lookahead == 'f') ADVANCE(2089);
      END_STATE();
    case 2077:
      if (lookahead == 'f') ADVANCE(2090);
      END_STATE();
    case 2078:
      ACCEPT_TOKEN(anon_sym_RWByteAddressBuffer);
      END_STATE();
    case 2079:
      if (lookahead == 'a') ADVANCE(2091);
      END_STATE();
    case 2080:
      if (lookahead == 'w') ADVANCE(2092);
      END_STATE();
    case 2081:
      if (lookahead == 'w') ADVANCE(2093);
      END_STATE();
    case 2082:
      ACCEPT_TOKEN(anon_sym_sampler2DRectShadow);
      END_STATE();
    case 2083:
      if (lookahead == 'd') ADVANCE(2094);
      END_STATE();
    case 2084:
      if (lookahead == 'r') ADVANCE(2095);
      END_STATE();
    case 2085:
      if (lookahead == 'a') ADVANCE(2096);
      END_STATE();
    case 2086:
      if (lookahead == 's') ADVANCE(2097);
      END_STATE();
    case 2087:
      if (lookahead == 'd') ADVANCE(2098);
      END_STATE();
    case 2088:
      if (lookahead == 'a') ADVANCE(2099);
      END_STATE();
    case 2089:
      if (lookahead == 'e') ADVANCE(2100);
      END_STATE();
    case 2090:
      if (lookahead == 'f') ADVANCE(2101);
      END_STATE();
    case 2091:
      if (lookahead == 't') ADVANCE(2102);
      END_STATE();
    case 2092:
      ACCEPT_TOKEN(anon_sym_sampler1DArrayShadow);
      END_STATE();
    case 2093:
      ACCEPT_TOKEN(anon_sym_sampler2DArrayShadow);
      END_STATE();
    case 2094:
      if (lookahead == 'o') ADVANCE(2103);
      END_STATE();
    case 2095:
      if (lookahead == 'a') ADVANCE(2104);
      END_STATE();
    case 2096:
      if (lookahead == 'r') ADVANCE(2105);
      END_STATE();
    case 2097:
      if (lookahead == 'a') ADVANCE(2106);
      END_STATE();
    case 2098:
      if (lookahead == '_') ADVANCE(2107);
      END_STATE();
    case 2099:
      if (lookahead == 'r') ADVANCE(2108);
      END_STATE();
    case 2100:
      if (lookahead == 'r') ADVANCE(2109);
      END_STATE();
    case 2101:
      if (lookahead == 'e') ADVANCE(2110);
      END_STATE();
    case 2102:
      if (lookahead == 'e') ADVANCE(2111);
      END_STATE();
    case 2103:
      if (lookahead == 'w') ADVANCE(2112);
      END_STATE();
    case 2104:
      if (lookahead == 'y') ADVANCE(2113);
      END_STATE();
    case 2105:
      if (lookahead == 'r') ADVANCE(2114);
      END_STATE();
    case 2106:
      if (lookahead == 'm') ADVANCE(2115);
      END_STATE();
    case 2107:
      if (lookahead == '2') ADVANCE(2116);
      END_STATE();
    case 2108:
      if (lookahead == 'r') ADVANCE(2117);
      END_STATE();
    case 2109:
      ACCEPT_TOKEN(anon_sym_AppendStructuredBuffer);
      END_STATE();
    case 2110:
      if (lookahead == 'r') ADVANCE(2118);
      END_STATE();
    case 2111:
      ACCEPT_TOKEN(anon_sym_SamplerComparisonState);
      END_STATE();
    case 2112:
      ACCEPT_TOKEN(anon_sym_samplerCubeArrayShadow);
      END_STATE();
    case 2113:
      ACCEPT_TOKEN(sym_texture_depth_2d_array);
      END_STATE();
    case 2114:
      if (lookahead == 'a') ADVANCE(2119);
      END_STATE();
    case 2115:
      if (lookahead == 'p') ADVANCE(2120);
      END_STATE();
    case 2116:
      if (lookahead == 'd') ADVANCE(2121);
      END_STATE();
    case 2117:
      if (lookahead == 'a') ADVANCE(2122);
      END_STATE();
    case 2118:
      ACCEPT_TOKEN(anon_sym_ConsumeStructuredBuffer);
      END_STATE();
    case 2119:
      if (lookahead == 'y') ADVANCE(2123);
      END_STATE();
    case 2120:
      if (lookahead == 'l') ADVANCE(2124);
      END_STATE();
    case 2121:
      ACCEPT_TOKEN(sym_texture_multisampled_2d);
      END_STATE();
    case 2122:
      if (lookahead == 'y') ADVANCE(2125);
      END_STATE();
    case 2123:
      ACCEPT_TOKEN(sym_texture_depth_cube_array);
      END_STATE();
    case 2124:
      if (lookahead == 'e') ADVANCE(2126);
      END_STATE();
    case 2125:
      ACCEPT_TOKEN(sym_texture_storage_2d_array);
      END_STATE();
    case 2126:
      if (lookahead == 'd') ADVANCE(2127);
      END_STATE();
    case 2127:
      if (lookahead == '_') ADVANCE(2128);
      END_STATE();
    case 2128:
      if (lookahead == '2') ADVANCE(2129);
      END_STATE();
    case 2129:
      if (lookahead == 'd') ADVANCE(2130);
      END_STATE();
    case 2130:
      ACCEPT_TOKEN(sym_texture_depth_multisampled_2d);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 1},
  [2] = {.lex_state = 39, .external_lex_state = 1},
  [3] = {.lex_state = 39, .external_lex_state = 1},
  [4] = {.lex_state = 39, .external_lex_state = 1},
  [5] = {.lex_state = 39, .external_lex_state = 1},
  [6] = {.lex_state = 39, .external_lex_state = 1},
  [7] = {.lex_state = 39, .external_lex_state = 1},
  [8] = {.lex_state = 39, .external_lex_state = 1},
  [9] = {.lex_state = 39, .external_lex_state = 1},
  [10] = {.lex_state = 39, .external_lex_state = 1},
  [11] = {.lex_state = 39, .external_lex_state = 1},
  [12] = {.lex_state = 39, .external_lex_state = 1},
  [13] = {.lex_state = 39, .external_lex_state = 1},
  [14] = {.lex_state = 39, .external_lex_state = 1},
  [15] = {.lex_state = 39, .external_lex_state = 1},
  [16] = {.lex_state = 39, .external_lex_state = 1},
  [17] = {.lex_state = 39, .external_lex_state = 1},
  [18] = {.lex_state = 39, .external_lex_state = 1},
  [19] = {.lex_state = 39, .external_lex_state = 1},
  [20] = {.lex_state = 39, .external_lex_state = 1},
  [21] = {.lex_state = 39, .external_lex_state = 1},
  [22] = {.lex_state = 39, .external_lex_state = 1},
  [23] = {.lex_state = 39, .external_lex_state = 1},
  [24] = {.lex_state = 39, .external_lex_state = 1},
  [25] = {.lex_state = 39, .external_lex_state = 1},
  [26] = {.lex_state = 39, .external_lex_state = 1},
  [27] = {.lex_state = 39, .external_lex_state = 1},
  [28] = {.lex_state = 39, .external_lex_state = 1},
  [29] = {.lex_state = 39, .external_lex_state = 1},
  [30] = {.lex_state = 39, .external_lex_state = 1},
  [31] = {.lex_state = 39, .external_lex_state = 1},
  [32] = {.lex_state = 39, .external_lex_state = 1},
  [33] = {.lex_state = 39, .external_lex_state = 1},
  [34] = {.lex_state = 39, .external_lex_state = 1},
  [35] = {.lex_state = 39, .external_lex_state = 1},
  [36] = {.lex_state = 39, .external_lex_state = 1},
  [37] = {.lex_state = 39, .external_lex_state = 1},
  [38] = {.lex_state = 39, .external_lex_state = 1},
  [39] = {.lex_state = 39, .external_lex_state = 1},
  [40] = {.lex_state = 39, .external_lex_state = 1},
  [41] = {.lex_state = 39, .external_lex_state = 1},
  [42] = {.lex_state = 39, .external_lex_state = 1},
  [43] = {.lex_state = 39, .external_lex_state = 1},
  [44] = {.lex_state = 39, .external_lex_state = 1},
  [45] = {.lex_state = 39, .external_lex_state = 1},
  [46] = {.lex_state = 39, .external_lex_state = 1},
  [47] = {.lex_state = 39, .external_lex_state = 1},
  [48] = {.lex_state = 39, .external_lex_state = 1},
  [49] = {.lex_state = 39, .external_lex_state = 1},
  [50] = {.lex_state = 39, .external_lex_state = 1},
  [51] = {.lex_state = 39, .external_lex_state = 1},
  [52] = {.lex_state = 39, .external_lex_state = 1},
  [53] = {.lex_state = 39, .external_lex_state = 1},
  [54] = {.lex_state = 39, .external_lex_state = 1},
  [55] = {.lex_state = 39, .external_lex_state = 1},
  [56] = {.lex_state = 39, .external_lex_state = 1},
  [57] = {.lex_state = 39, .external_lex_state = 1},
  [58] = {.lex_state = 39, .external_lex_state = 1},
  [59] = {.lex_state = 39, .external_lex_state = 1},
  [60] = {.lex_state = 39, .external_lex_state = 1},
  [61] = {.lex_state = 39, .external_lex_state = 1},
  [62] = {.lex_state = 39, .external_lex_state = 1},
  [63] = {.lex_state = 39, .external_lex_state = 1},
  [64] = {.lex_state = 39, .external_lex_state = 1},
  [65] = {.lex_state = 0, .external_lex_state = 1},
  [66] = {.lex_state = 0, .external_lex_state = 1},
  [67] = {.lex_state = 0, .external_lex_state = 1},
  [68] = {.lex_state = 0, .external_lex_state = 1},
  [69] = {.lex_state = 0, .external_lex_state = 1},
  [70] = {.lex_state = 0, .external_lex_state = 1},
  [71] = {.lex_state = 0, .external_lex_state = 1},
  [72] = {.lex_state = 0, .external_lex_state = 1},
  [73] = {.lex_state = 0, .external_lex_state = 1},
  [74] = {.lex_state = 0, .external_lex_state = 1},
  [75] = {.lex_state = 0, .external_lex_state = 1},
  [76] = {.lex_state = 0, .external_lex_state = 1},
  [77] = {.lex_state = 0, .external_lex_state = 1},
  [78] = {.lex_state = 0, .external_lex_state = 1},
  [79] = {.lex_state = 39, .external_lex_state = 1},
  [80] = {.lex_state = 0, .external_lex_state = 1},
  [81] = {.lex_state = 39, .external_lex_state = 1},
  [82] = {.lex_state = 39, .external_lex_state = 1},
  [83] = {.lex_state = 39, .external_lex_state = 1},
  [84] = {.lex_state = 39, .external_lex_state = 1},
  [85] = {.lex_state = 39, .external_lex_state = 1},
  [86] = {.lex_state = 0, .external_lex_state = 1},
  [87] = {.lex_state = 0, .external_lex_state = 1},
  [88] = {.lex_state = 0, .external_lex_state = 1},
  [89] = {.lex_state = 39, .external_lex_state = 1},
  [90] = {.lex_state = 0, .external_lex_state = 1},
  [91] = {.lex_state = 39, .external_lex_state = 1},
  [92] = {.lex_state = 39, .external_lex_state = 1},
  [93] = {.lex_state = 39, .external_lex_state = 1},
  [94] = {.lex_state = 39, .external_lex_state = 1},
  [95] = {.lex_state = 1, .external_lex_state = 1},
  [96] = {.lex_state = 1, .external_lex_state = 1},
  [97] = {.lex_state = 1, .external_lex_state = 1},
  [98] = {.lex_state = 1, .external_lex_state = 1},
  [99] = {.lex_state = 1, .external_lex_state = 1},
  [100] = {.lex_state = 1, .external_lex_state = 1},
  [101] = {.lex_state = 1, .external_lex_state = 1},
  [102] = {.lex_state = 1, .external_lex_state = 1},
  [103] = {.lex_state = 1, .external_lex_state = 1},
  [104] = {.lex_state = 1, .external_lex_state = 1},
  [105] = {.lex_state = 1, .external_lex_state = 1},
  [106] = {.lex_state = 1, .external_lex_state = 1},
  [107] = {.lex_state = 1, .external_lex_state = 1},
  [108] = {.lex_state = 1, .external_lex_state = 1},
  [109] = {.lex_state = 1, .external_lex_state = 1},
  [110] = {.lex_state = 1, .external_lex_state = 1},
  [111] = {.lex_state = 1, .external_lex_state = 1},
  [112] = {.lex_state = 1, .external_lex_state = 1},
  [113] = {.lex_state = 0, .external_lex_state = 1},
  [114] = {.lex_state = 1, .external_lex_state = 1},
  [115] = {.lex_state = 1, .external_lex_state = 1},
  [116] = {.lex_state = 39, .external_lex_state = 1},
  [117] = {.lex_state = 1, .external_lex_state = 1},
  [118] = {.lex_state = 1, .external_lex_state = 1},
  [119] = {.lex_state = 1, .external_lex_state = 1},
  [120] = {.lex_state = 1, .external_lex_state = 1},
  [121] = {.lex_state = 39, .external_lex_state = 1},
  [122] = {.lex_state = 4, .external_lex_state = 1},
  [123] = {.lex_state = 39, .external_lex_state = 1},
  [124] = {.lex_state = 4, .external_lex_state = 1},
  [125] = {.lex_state = 39, .external_lex_state = 1},
  [126] = {.lex_state = 39, .external_lex_state = 1},
  [127] = {.lex_state = 39, .external_lex_state = 1},
  [128] = {.lex_state = 39, .external_lex_state = 1},
  [129] = {.lex_state = 39, .external_lex_state = 1},
  [130] = {.lex_state = 39, .external_lex_state = 1},
  [131] = {.lex_state = 39, .external_lex_state = 1},
  [132] = {.lex_state = 39, .external_lex_state = 1},
  [133] = {.lex_state = 39, .external_lex_state = 1},
  [134] = {.lex_state = 2, .external_lex_state = 1},
  [135] = {.lex_state = 2, .external_lex_state = 1},
  [136] = {.lex_state = 2, .external_lex_state = 1},
  [137] = {.lex_state = 2, .external_lex_state = 1},
  [138] = {.lex_state = 2, .external_lex_state = 1},
  [139] = {.lex_state = 2, .external_lex_state = 1},
  [140] = {.lex_state = 2, .external_lex_state = 1},
  [141] = {.lex_state = 0, .external_lex_state = 1},
  [142] = {.lex_state = 2, .external_lex_state = 1},
  [143] = {.lex_state = 2, .external_lex_state = 1},
  [144] = {.lex_state = 2, .external_lex_state = 1},
  [145] = {.lex_state = 2, .external_lex_state = 1},
  [146] = {.lex_state = 2, .external_lex_state = 1},
  [147] = {.lex_state = 2, .external_lex_state = 1},
  [148] = {.lex_state = 2, .external_lex_state = 1},
  [149] = {.lex_state = 2, .external_lex_state = 1},
  [150] = {.lex_state = 2, .external_lex_state = 1},
  [151] = {.lex_state = 2, .external_lex_state = 1},
  [152] = {.lex_state = 0, .external_lex_state = 1},
  [153] = {.lex_state = 1, .external_lex_state = 1},
  [154] = {.lex_state = 2, .external_lex_state = 1},
  [155] = {.lex_state = 0, .external_lex_state = 1},
  [156] = {.lex_state = 4, .external_lex_state = 1},
  [157] = {.lex_state = 39, .external_lex_state = 1},
  [158] = {.lex_state = 4, .external_lex_state = 1},
  [159] = {.lex_state = 2, .external_lex_state = 1},
  [160] = {.lex_state = 2, .external_lex_state = 1},
  [161] = {.lex_state = 2, .external_lex_state = 1},
  [162] = {.lex_state = 2, .external_lex_state = 1},
  [163] = {.lex_state = 2, .external_lex_state = 1},
  [164] = {.lex_state = 2, .external_lex_state = 1},
  [165] = {.lex_state = 2, .external_lex_state = 1},
  [166] = {.lex_state = 2, .external_lex_state = 1},
  [167] = {.lex_state = 2, .external_lex_state = 1},
  [168] = {.lex_state = 39, .external_lex_state = 1},
  [169] = {.lex_state = 39, .external_lex_state = 1},
  [170] = {.lex_state = 3, .external_lex_state = 1},
  [171] = {.lex_state = 39, .external_lex_state = 1},
  [172] = {.lex_state = 3, .external_lex_state = 1},
  [173] = {.lex_state = 3, .external_lex_state = 1},
  [174] = {.lex_state = 3, .external_lex_state = 1},
  [175] = {.lex_state = 3, .external_lex_state = 1},
  [176] = {.lex_state = 3, .external_lex_state = 1},
  [177] = {.lex_state = 3, .external_lex_state = 1},
  [178] = {.lex_state = 3, .external_lex_state = 1},
  [179] = {.lex_state = 0, .external_lex_state = 1},
  [180] = {.lex_state = 3, .external_lex_state = 1},
  [181] = {.lex_state = 3, .external_lex_state = 1},
  [182] = {.lex_state = 3, .external_lex_state = 1},
  [183] = {.lex_state = 3, .external_lex_state = 1},
  [184] = {.lex_state = 3, .external_lex_state = 1},
  [185] = {.lex_state = 5, .external_lex_state = 1},
  [186] = {.lex_state = 3, .external_lex_state = 1},
  [187] = {.lex_state = 3, .external_lex_state = 1},
  [188] = {.lex_state = 5, .external_lex_state = 1},
  [189] = {.lex_state = 2, .external_lex_state = 1},
  [190] = {.lex_state = 5, .external_lex_state = 1},
  [191] = {.lex_state = 5, .external_lex_state = 1},
  [192] = {.lex_state = 5, .external_lex_state = 1},
  [193] = {.lex_state = 39, .external_lex_state = 1},
  [194] = {.lex_state = 1, .external_lex_state = 1},
  [195] = {.lex_state = 39, .external_lex_state = 1},
  [196] = {.lex_state = 39, .external_lex_state = 1},
  [197] = {.lex_state = 5, .external_lex_state = 1},
  [198] = {.lex_state = 2, .external_lex_state = 1},
  [199] = {.lex_state = 0, .external_lex_state = 1},
  [200] = {.lex_state = 2, .external_lex_state = 1},
  [201] = {.lex_state = 5, .external_lex_state = 1},
  [202] = {.lex_state = 5, .external_lex_state = 1},
  [203] = {.lex_state = 39, .external_lex_state = 1},
  [204] = {.lex_state = 39, .external_lex_state = 1},
  [205] = {.lex_state = 39, .external_lex_state = 1},
  [206] = {.lex_state = 1, .external_lex_state = 1},
  [207] = {.lex_state = 39, .external_lex_state = 1},
  [208] = {.lex_state = 1, .external_lex_state = 1},
  [209] = {.lex_state = 39, .external_lex_state = 1},
  [210] = {.lex_state = 39, .external_lex_state = 1},
  [211] = {.lex_state = 3, .external_lex_state = 1},
  [212] = {.lex_state = 3, .external_lex_state = 1},
  [213] = {.lex_state = 3, .external_lex_state = 1},
  [214] = {.lex_state = 0, .external_lex_state = 1},
  [215] = {.lex_state = 0, .external_lex_state = 1},
  [216] = {.lex_state = 0, .external_lex_state = 1},
  [217] = {.lex_state = 0, .external_lex_state = 1},
  [218] = {.lex_state = 0, .external_lex_state = 1},
  [219] = {.lex_state = 1, .external_lex_state = 1},
  [220] = {.lex_state = 0, .external_lex_state = 1},
  [221] = {.lex_state = 3, .external_lex_state = 1},
  [222] = {.lex_state = 0, .external_lex_state = 1},
  [223] = {.lex_state = 0, .external_lex_state = 1},
  [224] = {.lex_state = 0, .external_lex_state = 1},
  [225] = {.lex_state = 0, .external_lex_state = 1},
  [226] = {.lex_state = 0, .external_lex_state = 1},
  [227] = {.lex_state = 39, .external_lex_state = 1},
  [228] = {.lex_state = 39, .external_lex_state = 1},
  [229] = {.lex_state = 39, .external_lex_state = 1},
  [230] = {.lex_state = 0, .external_lex_state = 1},
  [231] = {.lex_state = 39, .external_lex_state = 1},
  [232] = {.lex_state = 39, .external_lex_state = 1},
  [233] = {.lex_state = 39, .external_lex_state = 1},
  [234] = {.lex_state = 0, .external_lex_state = 1},
  [235] = {.lex_state = 39, .external_lex_state = 1},
  [236] = {.lex_state = 39, .external_lex_state = 1},
  [237] = {.lex_state = 39, .external_lex_state = 1},
  [238] = {.lex_state = 39, .external_lex_state = 1},
  [239] = {.lex_state = 39, .external_lex_state = 1},
  [240] = {.lex_state = 0, .external_lex_state = 1},
  [241] = {.lex_state = 39, .external_lex_state = 1},
  [242] = {.lex_state = 39, .external_lex_state = 1},
  [243] = {.lex_state = 39, .external_lex_state = 1},
  [244] = {.lex_state = 0, .external_lex_state = 1},
  [245] = {.lex_state = 39, .external_lex_state = 1},
  [246] = {.lex_state = 39, .external_lex_state = 1},
  [247] = {.lex_state = 39, .external_lex_state = 1},
  [248] = {.lex_state = 0, .external_lex_state = 1},
  [249] = {.lex_state = 39, .external_lex_state = 1},
  [250] = {.lex_state = 0, .external_lex_state = 1},
  [251] = {.lex_state = 0, .external_lex_state = 1},
  [252] = {.lex_state = 0, .external_lex_state = 1},
  [253] = {.lex_state = 39, .external_lex_state = 1},
  [254] = {.lex_state = 0, .external_lex_state = 1},
  [255] = {.lex_state = 0, .external_lex_state = 1},
  [256] = {.lex_state = 0, .external_lex_state = 1},
  [257] = {.lex_state = 0, .external_lex_state = 1},
  [258] = {.lex_state = 39, .external_lex_state = 1},
  [259] = {.lex_state = 39, .external_lex_state = 1},
  [260] = {.lex_state = 39, .external_lex_state = 1},
  [261] = {.lex_state = 0, .external_lex_state = 1},
  [262] = {.lex_state = 39, .external_lex_state = 1},
  [263] = {.lex_state = 39, .external_lex_state = 1},
  [264] = {.lex_state = 39, .external_lex_state = 1},
  [265] = {.lex_state = 0, .external_lex_state = 1},
  [266] = {.lex_state = 0, .external_lex_state = 1},
  [267] = {.lex_state = 0, .external_lex_state = 1},
  [268] = {.lex_state = 39, .external_lex_state = 1},
  [269] = {.lex_state = 0, .external_lex_state = 1},
  [270] = {.lex_state = 0, .external_lex_state = 1},
  [271] = {.lex_state = 0, .external_lex_state = 1},
  [272] = {.lex_state = 39, .external_lex_state = 1},
  [273] = {.lex_state = 0, .external_lex_state = 1},
  [274] = {.lex_state = 0, .external_lex_state = 1},
  [275] = {.lex_state = 39, .external_lex_state = 1},
  [276] = {.lex_state = 0, .external_lex_state = 1},
  [277] = {.lex_state = 0, .external_lex_state = 1},
  [278] = {.lex_state = 0, .external_lex_state = 1},
  [279] = {.lex_state = 0, .external_lex_state = 1},
  [280] = {.lex_state = 39, .external_lex_state = 1},
  [281] = {.lex_state = 0, .external_lex_state = 1},
  [282] = {.lex_state = 1, .external_lex_state = 1},
  [283] = {.lex_state = 1, .external_lex_state = 1},
  [284] = {.lex_state = 0, .external_lex_state = 1},
  [285] = {.lex_state = 0, .external_lex_state = 1},
  [286] = {.lex_state = 0, .external_lex_state = 1},
  [287] = {.lex_state = 0, .external_lex_state = 1},
  [288] = {.lex_state = 0, .external_lex_state = 1},
  [289] = {.lex_state = 0, .external_lex_state = 1},
  [290] = {.lex_state = 39, .external_lex_state = 1},
  [291] = {.lex_state = 0, .external_lex_state = 1},
  [292] = {.lex_state = 0, .external_lex_state = 1},
  [293] = {.lex_state = 0, .external_lex_state = 1},
  [294] = {.lex_state = 39, .external_lex_state = 1},
  [295] = {.lex_state = 39, .external_lex_state = 1},
  [296] = {.lex_state = 39, .external_lex_state = 1},
  [297] = {.lex_state = 0, .external_lex_state = 1},
  [298] = {.lex_state = 39, .external_lex_state = 1},
  [299] = {.lex_state = 0, .external_lex_state = 1},
  [300] = {.lex_state = 0, .external_lex_state = 1},
  [301] = {.lex_state = 0, .external_lex_state = 1},
  [302] = {.lex_state = 0, .external_lex_state = 1},
  [303] = {.lex_state = 39, .external_lex_state = 1},
  [304] = {.lex_state = 0, .external_lex_state = 1},
  [305] = {.lex_state = 0, .external_lex_state = 1},
  [306] = {.lex_state = 0, .external_lex_state = 1},
  [307] = {.lex_state = 39, .external_lex_state = 1},
  [308] = {.lex_state = 0, .external_lex_state = 1},
  [309] = {.lex_state = 0, .external_lex_state = 1},
  [310] = {.lex_state = 0, .external_lex_state = 1},
  [311] = {.lex_state = 0, .external_lex_state = 1},
  [312] = {.lex_state = 0, .external_lex_state = 1},
  [313] = {.lex_state = 0, .external_lex_state = 1},
  [314] = {.lex_state = 39, .external_lex_state = 1},
  [315] = {.lex_state = 39, .external_lex_state = 1},
  [316] = {.lex_state = 0, .external_lex_state = 1},
  [317] = {.lex_state = 0, .external_lex_state = 1},
  [318] = {.lex_state = 0, .external_lex_state = 1},
  [319] = {.lex_state = 0, .external_lex_state = 1},
  [320] = {.lex_state = 39, .external_lex_state = 1},
  [321] = {.lex_state = 0, .external_lex_state = 1},
  [322] = {.lex_state = 0, .external_lex_state = 1},
  [323] = {.lex_state = 0, .external_lex_state = 1},
  [324] = {.lex_state = 39, .external_lex_state = 1},
  [325] = {.lex_state = 0, .external_lex_state = 1},
  [326] = {.lex_state = 0, .external_lex_state = 1},
  [327] = {.lex_state = 4, .external_lex_state = 1},
  [328] = {.lex_state = 0, .external_lex_state = 1},
  [329] = {.lex_state = 39, .external_lex_state = 1},
  [330] = {.lex_state = 0, .external_lex_state = 1},
  [331] = {.lex_state = 0, .external_lex_state = 1},
  [332] = {.lex_state = 0, .external_lex_state = 1},
  [333] = {.lex_state = 0, .external_lex_state = 1},
  [334] = {.lex_state = 0, .external_lex_state = 1},
  [335] = {.lex_state = 39, .external_lex_state = 1},
  [336] = {.lex_state = 39, .external_lex_state = 1},
  [337] = {.lex_state = 0, .external_lex_state = 1},
  [338] = {.lex_state = 0, .external_lex_state = 1},
  [339] = {.lex_state = 0, .external_lex_state = 1},
  [340] = {.lex_state = 39, .external_lex_state = 1},
  [341] = {.lex_state = 0, .external_lex_state = 1},
  [342] = {.lex_state = 0, .external_lex_state = 1},
  [343] = {.lex_state = 0, .external_lex_state = 1},
  [344] = {.lex_state = 0, .external_lex_state = 1},
  [345] = {.lex_state = 39, .external_lex_state = 1},
  [346] = {.lex_state = 0, .external_lex_state = 1},
  [347] = {.lex_state = 0, .external_lex_state = 1},
  [348] = {.lex_state = 39, .external_lex_state = 1},
  [349] = {.lex_state = 0, .external_lex_state = 1},
  [350] = {.lex_state = 4, .external_lex_state = 1},
  [351] = {.lex_state = 39, .external_lex_state = 1},
  [352] = {.lex_state = 0, .external_lex_state = 1},
  [353] = {.lex_state = 0, .external_lex_state = 1},
  [354] = {.lex_state = 0, .external_lex_state = 1},
  [355] = {.lex_state = 0, .external_lex_state = 1},
  [356] = {.lex_state = 39, .external_lex_state = 1},
  [357] = {.lex_state = 0, .external_lex_state = 1},
  [358] = {.lex_state = 0, .external_lex_state = 1},
  [359] = {.lex_state = 0, .external_lex_state = 1},
  [360] = {.lex_state = 39, .external_lex_state = 1},
  [361] = {.lex_state = 0, .external_lex_state = 1},
  [362] = {.lex_state = 0, .external_lex_state = 1},
  [363] = {.lex_state = 0, .external_lex_state = 1},
  [364] = {.lex_state = 39, .external_lex_state = 1},
  [365] = {.lex_state = 0, .external_lex_state = 1},
  [366] = {.lex_state = 39, .external_lex_state = 1},
  [367] = {.lex_state = 39, .external_lex_state = 1},
  [368] = {.lex_state = 0, .external_lex_state = 1},
  [369] = {.lex_state = 39, .external_lex_state = 1},
  [370] = {.lex_state = 0, .external_lex_state = 1},
  [371] = {.lex_state = 0, .external_lex_state = 1},
  [372] = {.lex_state = 0, .external_lex_state = 1},
  [373] = {.lex_state = 39, .external_lex_state = 1},
  [374] = {.lex_state = 0, .external_lex_state = 1},
  [375] = {.lex_state = 0, .external_lex_state = 1},
  [376] = {.lex_state = 0, .external_lex_state = 1},
  [377] = {.lex_state = 0, .external_lex_state = 1},
  [378] = {.lex_state = 0, .external_lex_state = 1},
  [379] = {.lex_state = 39, .external_lex_state = 1},
  [380] = {.lex_state = 0, .external_lex_state = 1},
  [381] = {.lex_state = 0, .external_lex_state = 1},
  [382] = {.lex_state = 134, .external_lex_state = 1},
  [383] = {.lex_state = 0, .external_lex_state = 1},
  [384] = {.lex_state = 0, .external_lex_state = 1},
  [385] = {.lex_state = 0, .external_lex_state = 1},
  [386] = {.lex_state = 0, .external_lex_state = 1},
  [387] = {.lex_state = 0, .external_lex_state = 1},
  [388] = {.lex_state = 0, .external_lex_state = 1},
  [389] = {.lex_state = 0, .external_lex_state = 1},
  [390] = {.lex_state = 0, .external_lex_state = 1},
  [391] = {.lex_state = 0, .external_lex_state = 1},
  [392] = {.lex_state = 0, .external_lex_state = 1},
  [393] = {.lex_state = 0, .external_lex_state = 1},
  [394] = {.lex_state = 0, .external_lex_state = 1},
  [395] = {.lex_state = 39, .external_lex_state = 1},
  [396] = {.lex_state = 0, .external_lex_state = 1},
  [397] = {.lex_state = 0, .external_lex_state = 1},
  [398] = {.lex_state = 0, .external_lex_state = 1},
  [399] = {.lex_state = 0, .external_lex_state = 1},
  [400] = {.lex_state = 0, .external_lex_state = 1},
  [401] = {.lex_state = 0, .external_lex_state = 1},
  [402] = {.lex_state = 0, .external_lex_state = 1},
  [403] = {.lex_state = 0, .external_lex_state = 1},
  [404] = {.lex_state = 0, .external_lex_state = 1},
  [405] = {.lex_state = 0, .external_lex_state = 1},
  [406] = {.lex_state = 39, .external_lex_state = 1},
  [407] = {.lex_state = 0, .external_lex_state = 1},
  [408] = {.lex_state = 0, .external_lex_state = 1},
  [409] = {.lex_state = 39, .external_lex_state = 1},
  [410] = {.lex_state = 0, .external_lex_state = 1},
  [411] = {.lex_state = 39, .external_lex_state = 1},
  [412] = {.lex_state = 0, .external_lex_state = 1},
  [413] = {.lex_state = 0, .external_lex_state = 1},
  [414] = {.lex_state = 39, .external_lex_state = 1},
  [415] = {.lex_state = 0, .external_lex_state = 1},
  [416] = {.lex_state = 39, .external_lex_state = 1},
  [417] = {.lex_state = 39, .external_lex_state = 1},
  [418] = {.lex_state = 0, .external_lex_state = 1},
  [419] = {.lex_state = 0, .external_lex_state = 1},
  [420] = {.lex_state = 0, .external_lex_state = 1},
  [421] = {.lex_state = 0, .external_lex_state = 1},
  [422] = {.lex_state = 0, .external_lex_state = 1},
  [423] = {.lex_state = 39, .external_lex_state = 1},
  [424] = {.lex_state = 39, .external_lex_state = 1},
  [425] = {.lex_state = 39, .external_lex_state = 1},
  [426] = {.lex_state = 0, .external_lex_state = 1},
  [427] = {.lex_state = 0, .external_lex_state = 1},
  [428] = {.lex_state = 39, .external_lex_state = 1},
  [429] = {.lex_state = 39, .external_lex_state = 1},
  [430] = {.lex_state = 39, .external_lex_state = 1},
  [431] = {.lex_state = 39, .external_lex_state = 1},
  [432] = {.lex_state = 0, .external_lex_state = 1},
  [433] = {.lex_state = 0, .external_lex_state = 1},
  [434] = {.lex_state = 39, .external_lex_state = 1},
  [435] = {.lex_state = 39, .external_lex_state = 1},
  [436] = {.lex_state = 0, .external_lex_state = 1},
  [437] = {.lex_state = 0, .external_lex_state = 1},
  [438] = {.lex_state = 0, .external_lex_state = 1},
  [439] = {.lex_state = 0, .external_lex_state = 1},
  [440] = {.lex_state = 0, .external_lex_state = 1},
  [441] = {.lex_state = 0, .external_lex_state = 1},
  [442] = {.lex_state = 39, .external_lex_state = 1},
  [443] = {.lex_state = 0, .external_lex_state = 1},
  [444] = {.lex_state = 39, .external_lex_state = 1},
  [445] = {.lex_state = 0, .external_lex_state = 1},
  [446] = {.lex_state = 0, .external_lex_state = 1},
  [447] = {.lex_state = 0, .external_lex_state = 1},
  [448] = {.lex_state = 0, .external_lex_state = 1},
  [449] = {.lex_state = 0, .external_lex_state = 1},
  [450] = {.lex_state = 39, .external_lex_state = 1},
  [451] = {.lex_state = 39, .external_lex_state = 1},
  [452] = {.lex_state = 39, .external_lex_state = 1},
  [453] = {.lex_state = 0, .external_lex_state = 1},
  [454] = {.lex_state = 0, .external_lex_state = 1},
  [455] = {.lex_state = 0, .external_lex_state = 1},
  [456] = {.lex_state = 0, .external_lex_state = 1},
  [457] = {.lex_state = 0, .external_lex_state = 1},
  [458] = {.lex_state = 0, .external_lex_state = 1},
  [459] = {.lex_state = 39, .external_lex_state = 1},
  [460] = {.lex_state = 0, .external_lex_state = 1},
  [461] = {.lex_state = 0, .external_lex_state = 1},
  [462] = {.lex_state = 0, .external_lex_state = 1},
  [463] = {.lex_state = 0, .external_lex_state = 1},
  [464] = {.lex_state = 39, .external_lex_state = 1},
  [465] = {.lex_state = 0, .external_lex_state = 1},
  [466] = {.lex_state = 0, .external_lex_state = 1},
  [467] = {.lex_state = 0, .external_lex_state = 1},
  [468] = {.lex_state = 0, .external_lex_state = 1},
  [469] = {.lex_state = 0, .external_lex_state = 1},
  [470] = {.lex_state = 39, .external_lex_state = 1},
  [471] = {.lex_state = 39, .external_lex_state = 1},
  [472] = {.lex_state = 39, .external_lex_state = 1},
  [473] = {.lex_state = 39, .external_lex_state = 1},
  [474] = {(TSStateId)(-1)},
};

enum {
  ts_external_token__block_comment = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__block_comment] = sym__block_comment,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__block_comment] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym__comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_ident] = ACTIONS(1),
    [aux_sym_int_literal_token1] = ACTIONS(1),
    [aux_sym_int_literal_token2] = ACTIONS(1),
    [aux_sym_int_literal_token3] = ACTIONS(1),
    [aux_sym_decimal_float_literal_token1] = ACTIONS(1),
    [aux_sym_decimal_float_literal_token2] = ACTIONS(1),
    [aux_sym_decimal_float_literal_token3] = ACTIONS(1),
    [aux_sym_decimal_float_literal_token4] = ACTIONS(1),
    [aux_sym_decimal_float_literal_token5] = ACTIONS(1),
    [aux_sym_hex_float_literal_token1] = ACTIONS(1),
    [aux_sym_hex_float_literal_token2] = ACTIONS(1),
    [aux_sym_hex_float_literal_token3] = ACTIONS(1),
    [anon_sym_read] = ACTIONS(1),
    [anon_sym_write] = ACTIONS(1),
    [anon_sym_read_write] = ACTIONS(1),
    [anon_sym_rgba8unorm] = ACTIONS(1),
    [anon_sym_rgba8snorm] = ACTIONS(1),
    [anon_sym_rgba8uint] = ACTIONS(1),
    [anon_sym_rgba8sint] = ACTIONS(1),
    [anon_sym_rgba16uint] = ACTIONS(1),
    [anon_sym_rgba16sint] = ACTIONS(1),
    [anon_sym_rgba16float] = ACTIONS(1),
    [anon_sym_r32uint] = ACTIONS(1),
    [anon_sym_r32sint] = ACTIONS(1),
    [anon_sym_r32float] = ACTIONS(1),
    [anon_sym_rg32uint] = ACTIONS(1),
    [anon_sym_rg32sint] = ACTIONS(1),
    [anon_sym_rg32float] = ACTIONS(1),
    [anon_sym_rgba32uint] = ACTIONS(1),
    [anon_sym_rgba32sint] = ACTIONS(1),
    [anon_sym_rgba32float] = ACTIONS(1),
    [sym_array] = ACTIONS(1),
    [sym_atomic] = ACTIONS(1),
    [sym_bool] = ACTIONS(1),
    [sym_float32] = ACTIONS(1),
    [sym_float16] = ACTIONS(1),
    [sym_int32] = ACTIONS(1),
    [sym_mat2x2] = ACTIONS(1),
    [sym_mat2x3] = ACTIONS(1),
    [sym_mat2x4] = ACTIONS(1),
    [sym_mat3x2] = ACTIONS(1),
    [sym_mat3x3] = ACTIONS(1),
    [sym_mat3x4] = ACTIONS(1),
    [sym_mat4x2] = ACTIONS(1),
    [sym_mat4x3] = ACTIONS(1),
    [sym_mat4x4] = ACTIONS(1),
    [sym_override] = ACTIONS(1),
    [sym_pointer] = ACTIONS(1),
    [sym_sampler] = ACTIONS(1),
    [sym_sampler_comparison] = ACTIONS(1),
    [sym_staticAssert] = ACTIONS(1),
    [sym_struct] = ACTIONS(1),
    [sym_texture_1d] = ACTIONS(1),
    [sym_texture_2d] = ACTIONS(1),
    [sym_texture_2d_array] = ACTIONS(1),
    [sym_texture_3d] = ACTIONS(1),
    [sym_texture_cube] = ACTIONS(1),
    [sym_texture_cube_array] = ACTIONS(1),
    [sym_texture_multisampled_2d] = ACTIONS(1),
    [sym_texture_storage_1d] = ACTIONS(1),
    [sym_texture_storage_2d] = ACTIONS(1),
    [sym_texture_storage_2d_array] = ACTIONS(1),
    [sym_texture_storage_3d] = ACTIONS(1),
    [sym_texture_depth_2d] = ACTIONS(1),
    [sym_texture_depth_2d_array] = ACTIONS(1),
    [sym_texture_depth_cube] = ACTIONS(1),
    [sym_texture_depth_cube_array] = ACTIONS(1),
    [sym_texture_depth_multisampled_2d] = ACTIONS(1),
    [sym_uint32] = ACTIONS(1),
    [sym_vec2] = ACTIONS(1),
    [sym_vec3] = ACTIONS(1),
    [sym_vec4] = ACTIONS(1),
    [sym_bitcast] = ACTIONS(1),
    [sym_break] = ACTIONS(1),
    [sym_case] = ACTIONS(1),
    [sym_const] = ACTIONS(1),
    [sym_continue] = ACTIONS(1),
    [sym_continuing] = ACTIONS(1),
    [sym_default] = ACTIONS(1),
    [sym_discard] = ACTIONS(1),
    [sym_else] = ACTIONS(1),
    [sym_enable] = ACTIONS(1),
    [sym_fallthrough] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_fn] = ACTIONS(1),
    [sym_for] = ACTIONS(1),
    [sym_function] = ACTIONS(1),
    [sym_if] = ACTIONS(1),
    [sym_let] = ACTIONS(1),
    [sym_loop] = ACTIONS(1),
    [sym_private] = ACTIONS(1),
    [sym_return] = ACTIONS(1),
    [sym_storage] = ACTIONS(1),
    [sym_switch] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_type] = ACTIONS(1),
    [sym_uniform] = ACTIONS(1),
    [sym_var] = ACTIONS(1),
    [sym_while] = ACTIONS(1),
    [sym_workgroup] = ACTIONS(1),
    [sym_and] = ACTIONS(1),
    [sym_and_and] = ACTIONS(1),
    [sym_arrow] = ACTIONS(1),
    [sym_attr] = ACTIONS(1),
    [sym_forward_slash] = ACTIONS(1),
    [sym_bang] = ACTIONS(1),
    [sym_bracket_left] = ACTIONS(1),
    [sym_bracket_right] = ACTIONS(1),
    [sym_brace_left] = ACTIONS(1),
    [sym_brace_right] = ACTIONS(1),
    [sym_colon] = ACTIONS(1),
    [sym_comma] = ACTIONS(1),
    [sym_equal] = ACTIONS(1),
    [sym_equal_equal] = ACTIONS(1),
    [sym_not_equal] = ACTIONS(1),
    [sym_greater_than] = ACTIONS(1),
    [sym_greater_than_equal] = ACTIONS(1),
    [sym_shift_right] = ACTIONS(1),
    [sym_less_than] = ACTIONS(1),
    [sym_less_than_equal] = ACTIONS(1),
    [sym_shift_left] = ACTIONS(1),
    [sym_modulo] = ACTIONS(1),
    [sym_minus] = ACTIONS(1),
    [sym_period] = ACTIONS(1),
    [sym_plus] = ACTIONS(1),
    [sym_plus_plus] = ACTIONS(1),
    [sym_or] = ACTIONS(1),
    [sym_or_or] = ACTIONS(1),
    [sym_paren_left] = ACTIONS(1),
    [sym_paren_right] = ACTIONS(1),
    [sym_semicolon] = ACTIONS(1),
    [sym_star] = ACTIONS(1),
    [sym_tilde] = ACTIONS(1),
    [sym_underscore] = ACTIONS(1),
    [sym_xor] = ACTIONS(1),
    [sym_plus_equal] = ACTIONS(1),
    [sym_minus_equal] = ACTIONS(1),
    [sym_times_equal] = ACTIONS(1),
    [sym_division_equal] = ACTIONS(1),
    [sym_modulo_equal] = ACTIONS(1),
    [sym_and_equal] = ACTIONS(1),
    [sym_or_equal] = ACTIONS(1),
    [sym_xor_equal] = ACTIONS(1),
    [sym_shift_left_equal] = ACTIONS(1),
    [anon_sym_AppendStructuredBuffer] = ACTIONS(1),
    [anon_sym_BlendState] = ACTIONS(1),
    [anon_sym_Buffer] = ACTIONS(1),
    [anon_sym_ByteAddressBuffer] = ACTIONS(1),
    [anon_sym_CompileShader] = ACTIONS(1),
    [anon_sym_ComputeShader] = ACTIONS(1),
    [anon_sym_ConsumeStructuredBuffer] = ACTIONS(1),
    [anon_sym_DepthStencilState] = ACTIONS(1),
    [anon_sym_DepthStencilView] = ACTIONS(1),
    [anon_sym_DomainShader] = ACTIONS(1),
    [anon_sym_GeometryShader] = ACTIONS(1),
    [anon_sym_Hullshader] = ACTIONS(1),
    [anon_sym_InputPatch] = ACTIONS(1),
    [anon_sym_LineStream] = ACTIONS(1),
    [anon_sym_NULL] = ACTIONS(1),
    [anon_sym_OutputPatch] = ACTIONS(1),
    [anon_sym_PixelShader] = ACTIONS(1),
    [anon_sym_PointStream] = ACTIONS(1),
    [anon_sym_RWBuffer] = ACTIONS(1),
    [anon_sym_RWByteAddressBuffer] = ACTIONS(1),
    [anon_sym_RWStructuredBuffer] = ACTIONS(1),
    [anon_sym_RWTexture1D] = ACTIONS(1),
    [anon_sym_RWTexture1DArray] = ACTIONS(1),
    [anon_sym_RWTexture2D] = ACTIONS(1),
    [anon_sym_RWTexture2DArray] = ACTIONS(1),
    [anon_sym_RWTexture3D] = ACTIONS(1),
    [anon_sym_RasterizerState] = ACTIONS(1),
    [anon_sym_RenderTargetView] = ACTIONS(1),
    [anon_sym_SamplerComparisonState] = ACTIONS(1),
    [anon_sym_SamplerState] = ACTIONS(1),
    [anon_sym_Self] = ACTIONS(1),
    [anon_sym_StructuredBuffer] = ACTIONS(1),
    [anon_sym_Texture1D] = ACTIONS(1),
    [anon_sym_Texture1DArray] = ACTIONS(1),
    [anon_sym_Texture2D] = ACTIONS(1),
    [anon_sym_Texture2DArray] = ACTIONS(1),
    [anon_sym_Texture2DMS] = ACTIONS(1),
    [anon_sym_Texture2DMSArray] = ACTIONS(1),
    [anon_sym_Texture3D] = ACTIONS(1),
    [anon_sym_TextureCube] = ACTIONS(1),
    [anon_sym_TextureCubeArray] = ACTIONS(1),
    [anon_sym_TriangleStream] = ACTIONS(1),
    [anon_sym_VertexShader] = ACTIONS(1),
    [anon_sym_abstract] = ACTIONS(1),
    [anon_sym_active] = ACTIONS(1),
    [anon_sym_alignas] = ACTIONS(1),
    [anon_sym_alignof] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_asm] = ACTIONS(1),
    [anon_sym_asm_fragment] = ACTIONS(1),
    [anon_sym_async] = ACTIONS(1),
    [anon_sym_atomic_uint] = ACTIONS(1),
    [anon_sym_attribute] = ACTIONS(1),
    [anon_sym_auto] = ACTIONS(1),
    [anon_sym_await] = ACTIONS(1),
    [anon_sym_become] = ACTIONS(1),
    [anon_sym_bf16] = ACTIONS(1),
    [anon_sym_binding_array] = ACTIONS(1),
    [anon_sym_cast] = ACTIONS(1),
    [anon_sym_catch] = ACTIONS(1),
    [anon_sym_cbuffer] = ACTIONS(1),
    [anon_sym_char] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_co_await] = ACTIONS(1),
    [anon_sym_co_return] = ACTIONS(1),
    [anon_sym_co_yield] = ACTIONS(1),
    [anon_sym_coherent] = ACTIONS(1),
    [anon_sym_column_major] = ACTIONS(1),
    [anon_sym_common] = ACTIONS(1),
    [anon_sym_compile] = ACTIONS(1),
    [anon_sym_compile_fragment] = ACTIONS(1),
    [anon_sym_concept] = ACTIONS(1),
    [anon_sym_const_cast] = ACTIONS(1),
    [anon_sym_consteval] = ACTIONS(1),
    [anon_sym_constexpr] = ACTIONS(1),
    [anon_sym_constinit] = ACTIONS(1),
    [anon_sym_crate] = ACTIONS(1),
    [anon_sym_debugger] = ACTIONS(1),
    [anon_sym_decltype] = ACTIONS(1),
    [anon_sym_delete] = ACTIONS(1),
    [anon_sym_demote] = ACTIONS(1),
    [anon_sym_demote_to_helper] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_dword] = ACTIONS(1),
    [anon_sym_dynamic_cast] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_explicit] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
    [anon_sym_extends] = ACTIONS(1),
    [anon_sym_extern] = ACTIONS(1),
    [anon_sym_external] = ACTIONS(1),
    [anon_sym_f64] = ACTIONS(1),
    [anon_sym_filter] = ACTIONS(1),
    [anon_sym_final] = ACTIONS(1),
    [anon_sym_finally] = ACTIONS(1),
    [anon_sym_fixed] = ACTIONS(1),
    [anon_sym_friend] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_fvec2] = ACTIONS(1),
    [anon_sym_fvec3] = ACTIONS(1),
    [anon_sym_fvec4] = ACTIONS(1),
    [anon_sym_fxgroup] = ACTIONS(1),
    [anon_sym_get] = ACTIONS(1),
    [anon_sym_goto] = ACTIONS(1),
    [anon_sym_groupshared] = ACTIONS(1),
    [anon_sym_handle] = ACTIONS(1),
    [anon_sym_highp] = ACTIONS(1),
    [anon_sym_hvec2] = ACTIONS(1),
    [anon_sym_hvec3] = ACTIONS(1),
    [anon_sym_hvec4] = ACTIONS(1),
    [anon_sym_i16] = ACTIONS(1),
    [anon_sym_i64] = ACTIONS(1),
    [anon_sym_i8] = ACTIONS(1),
    [anon_sym_iimage1D] = ACTIONS(1),
    [anon_sym_iimage1DArray] = ACTIONS(1),
    [anon_sym_iimage2D] = ACTIONS(1),
    [anon_sym_iimage2DArray] = ACTIONS(1),
    [anon_sym_iimage2DMS] = ACTIONS(1),
    [anon_sym_iimage2DMSArray] = ACTIONS(1),
    [anon_sym_iimage2DRect] = ACTIONS(1),
    [anon_sym_iimage3D] = ACTIONS(1),
    [anon_sym_iimageBuffer] = ACTIONS(1),
    [anon_sym_iimageCube] = ACTIONS(1),
    [anon_sym_iimageCubeArray] = ACTIONS(1),
    [anon_sym_image1D] = ACTIONS(1),
    [anon_sym_image1DArray] = ACTIONS(1),
    [anon_sym_image2D] = ACTIONS(1),
    [anon_sym_image2DArray] = ACTIONS(1),
    [anon_sym_image2DMS] = ACTIONS(1),
    [anon_sym_image2DMSArray] = ACTIONS(1),
    [anon_sym_image2DRect] = ACTIONS(1),
    [anon_sym_image3D] = ACTIONS(1),
    [anon_sym_imageBuffer] = ACTIONS(1),
    [anon_sym_imageCube] = ACTIONS(1),
    [anon_sym_imageCubeArray] = ACTIONS(1),
    [anon_sym_impl] = ACTIONS(1),
    [anon_sym_implements] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_inline] = ACTIONS(1),
    [anon_sym_inout] = ACTIONS(1),
    [anon_sym_instanceof] = ACTIONS(1),
    [anon_sym_interface] = ACTIONS(1),
    [anon_sym_invariant] = ACTIONS(1),
    [anon_sym_isampler1D] = ACTIONS(1),
    [anon_sym_isampler1DArray] = ACTIONS(1),
    [anon_sym_isampler2D] = ACTIONS(1),
    [anon_sym_isampler2DArray] = ACTIONS(1),
    [anon_sym_isampler2DMS] = ACTIONS(1),
    [anon_sym_isampler2DMSArray] = ACTIONS(1),
    [anon_sym_isampler2DRect] = ACTIONS(1),
    [anon_sym_isampler3D] = ACTIONS(1),
    [anon_sym_isamplerBuffer] = ACTIONS(1),
    [anon_sym_isamplerCube] = ACTIONS(1),
    [anon_sym_isamplerCubeArray] = ACTIONS(1),
    [anon_sym_isubpassInput] = ACTIONS(1),
    [anon_sym_isubpassInputMS] = ACTIONS(1),
    [anon_sym_itexture1D] = ACTIONS(1),
    [anon_sym_itexture1DArray] = ACTIONS(1),
    [anon_sym_itexture2D] = ACTIONS(1),
    [anon_sym_itexture2DArray] = ACTIONS(1),
    [anon_sym_itexture2DMS] = ACTIONS(1),
    [anon_sym_itexture2DMSArray] = ACTIONS(1),
    [anon_sym_itexture2DRect] = ACTIONS(1),
    [anon_sym_itexture3D] = ACTIONS(1),
    [anon_sym_itextureBuffer] = ACTIONS(1),
    [anon_sym_itextureCube] = ACTIONS(1),
    [anon_sym_itextureCubeArray] = ACTIONS(1),
    [anon_sym_layout] = ACTIONS(1),
    [anon_sym_line] = ACTIONS(1),
    [anon_sym_lineadj] = ACTIONS(1),
    [anon_sym_lowp] = ACTIONS(1),
    [anon_sym_macro] = ACTIONS(1),
    [anon_sym_macro_rules] = ACTIONS(1),
    [anon_sym_mat] = ACTIONS(1),
    [anon_sym_match] = ACTIONS(1),
    [anon_sym_matrix] = ACTIONS(1),
    [anon_sym_mediump] = ACTIONS(1),
    [anon_sym_meta] = ACTIONS(1),
    [anon_sym_mod] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_move] = ACTIONS(1),
    [anon_sym_mut] = ACTIONS(1),
    [anon_sym_mutable] = ACTIONS(1),
    [anon_sym_namespace] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_nil] = ACTIONS(1),
    [anon_sym_noexcept] = ACTIONS(1),
    [anon_sym_noinline] = ACTIONS(1),
    [anon_sym_nointerpolation] = ACTIONS(1),
    [anon_sym_noperspective] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_nullptr] = ACTIONS(1),
    [anon_sym_of] = ACTIONS(1),
    [anon_sym_operator] = ACTIONS(1),
    [anon_sym_package] = ACTIONS(1),
    [anon_sym_packoffset] = ACTIONS(1),
    [anon_sym_partition] = ACTIONS(1),
    [anon_sym_pass] = ACTIONS(1),
    [anon_sym_patch] = ACTIONS(1),
    [anon_sym_pixelfragment] = ACTIONS(1),
    [anon_sym_point] = ACTIONS(1),
    [anon_sym_precise] = ACTIONS(1),
    [anon_sym_precision] = ACTIONS(1),
    [anon_sym_premerge] = ACTIONS(1),
    [anon_sym_priv] = ACTIONS(1),
    [anon_sym_protected] = ACTIONS(1),
    [anon_sym_pub] = ACTIONS(1),
    [anon_sym_public] = ACTIONS(1),
    [anon_sym_readonly] = ACTIONS(1),
    [anon_sym_ref] = ACTIONS(1),
    [anon_sym_regardless] = ACTIONS(1),
    [anon_sym_register] = ACTIONS(1),
    [anon_sym_reinterpret_cast] = ACTIONS(1),
    [anon_sym_requires] = ACTIONS(1),
    [anon_sym_resource] = ACTIONS(1),
    [anon_sym_restrict] = ACTIONS(1),
    [anon_sym_row_major] = ACTIONS(1),
    [anon_sym_samper] = ACTIONS(1),
    [anon_sym_sampler1D] = ACTIONS(1),
    [anon_sym_sampler1DArray] = ACTIONS(1),
    [anon_sym_sampler1DArrayShadow] = ACTIONS(1),
    [anon_sym_sampler1DShadow] = ACTIONS(1),
    [anon_sym_sampler2D] = ACTIONS(1),
    [anon_sym_sampler2DArray] = ACTIONS(1),
    [anon_sym_sampler2DArrayShadow] = ACTIONS(1),
    [anon_sym_sampler2DMS] = ACTIONS(1),
    [anon_sym_sampler2DMSArray] = ACTIONS(1),
    [anon_sym_sampler2DRect] = ACTIONS(1),
    [anon_sym_sampler2DRectShadow] = ACTIONS(1),
    [anon_sym_sampler2DShadow] = ACTIONS(1),
    [anon_sym_sampler3D] = ACTIONS(1),
    [anon_sym_sampler3DRect] = ACTIONS(1),
    [anon_sym_samplerBuffer] = ACTIONS(1),
    [anon_sym_samplerCube] = ACTIONS(1),
    [anon_sym_samplerCubeArray] = ACTIONS(1),
    [anon_sym_samplerCubeArrayShadow] = ACTIONS(1),
    [anon_sym_samplerCubeShadow] = ACTIONS(1),
    [anon_sym_samplerShadow] = ACTIONS(1),
    [anon_sym_self] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_shared] = ACTIONS(1),
    [anon_sym_signed] = ACTIONS(1),
    [anon_sym_sizeof] = ACTIONS(1),
    [anon_sym_smooth] = ACTIONS(1),
    [anon_sym_snorm] = ACTIONS(1),
    [anon_sym_stateblock] = ACTIONS(1),
    [anon_sym_stateblock_state] = ACTIONS(1),
    [anon_sym_static] = ACTIONS(1),
    [anon_sym_static_assert] = ACTIONS(1),
    [anon_sym_static_cast] = ACTIONS(1),
    [anon_sym_std] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_subpassInput] = ACTIONS(1),
    [anon_sym_subpassInputMS] = ACTIONS(1),
    [anon_sym_subroutine] = ACTIONS(1),
    [anon_sym_super] = ACTIONS(1),
    [anon_sym_superp] = ACTIONS(1),
    [anon_sym_target] = ACTIONS(1),
    [anon_sym_tbuffer] = ACTIONS(1),
    [anon_sym_technique] = ACTIONS(1),
    [anon_sym_technique10] = ACTIONS(1),
    [anon_sym_technique11] = ACTIONS(1),
    [anon_sym_template] = ACTIONS(1),
    [anon_sym_texture1D] = ACTIONS(1),
    [anon_sym_texture1DArray] = ACTIONS(1),
    [anon_sym_texture2D] = ACTIONS(1),
    [anon_sym_texture2DArray] = ACTIONS(1),
    [anon_sym_texture2DMS] = ACTIONS(1),
    [anon_sym_texture2DMSArray] = ACTIONS(1),
    [anon_sym_texture2DRect] = ACTIONS(1),
    [anon_sym_texture3D] = ACTIONS(1),
    [anon_sym_textureBuffer] = ACTIONS(1),
    [anon_sym_textureCube] = ACTIONS(1),
    [anon_sym_textureCubeArray] = ACTIONS(1),
    [anon_sym_this] = ACTIONS(1),
    [anon_sym_thread_local] = ACTIONS(1),
    [anon_sym_throw] = ACTIONS(1),
    [anon_sym_trait] = ACTIONS(1),
    [anon_sym_triangle] = ACTIONS(1),
    [anon_sym_triangleadj] = ACTIONS(1),
    [anon_sym_try] = ACTIONS(1),
    [anon_sym_typedef] = ACTIONS(1),
    [anon_sym_typeid] = ACTIONS(1),
    [anon_sym_typename] = ACTIONS(1),
    [anon_sym_typeof] = ACTIONS(1),
    [anon_sym_u16] = ACTIONS(1),
    [anon_sym_u64] = ACTIONS(1),
    [anon_sym_u8] = ACTIONS(1),
    [anon_sym_uimage1D] = ACTIONS(1),
    [anon_sym_uimage1DArray] = ACTIONS(1),
    [anon_sym_uimage2D] = ACTIONS(1),
    [anon_sym_uimage2DArray] = ACTIONS(1),
    [anon_sym_uimage2DMS] = ACTIONS(1),
    [anon_sym_uimage2DMSArray] = ACTIONS(1),
    [anon_sym_uimage2DRect] = ACTIONS(1),
    [anon_sym_uimage3D] = ACTIONS(1),
    [anon_sym_uimageBuffer] = ACTIONS(1),
    [anon_sym_uimageCube] = ACTIONS(1),
    [anon_sym_uimageCubeArray] = ACTIONS(1),
    [anon_sym_union] = ACTIONS(1),
    [anon_sym_unless] = ACTIONS(1),
    [anon_sym_unorm] = ACTIONS(1),
    [anon_sym_unsafe] = ACTIONS(1),
    [anon_sym_unsigned] = ACTIONS(1),
    [anon_sym_unsized] = ACTIONS(1),
    [anon_sym_usampler1D] = ACTIONS(1),
    [anon_sym_usampler1DArray] = ACTIONS(1),
    [anon_sym_usampler2D] = ACTIONS(1),
    [anon_sym_usampler2DArray] = ACTIONS(1),
    [anon_sym_usampler2DMS] = ACTIONS(1),
    [anon_sym_usampler2DMSArray] = ACTIONS(1),
    [anon_sym_usampler2DRect] = ACTIONS(1),
    [anon_sym_usampler3D] = ACTIONS(1),
    [anon_sym_usamplerBuffer] = ACTIONS(1),
    [anon_sym_usamplerCube] = ACTIONS(1),
    [anon_sym_usamplerCubeArray] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_using] = ACTIONS(1),
    [anon_sym_usubpassInput] = ACTIONS(1),
    [anon_sym_usubpassInputMS] = ACTIONS(1),
    [anon_sym_utexture1D] = ACTIONS(1),
    [anon_sym_utexture1DArray] = ACTIONS(1),
    [anon_sym_utexture2D] = ACTIONS(1),
    [anon_sym_utexture2DArray] = ACTIONS(1),
    [anon_sym_utexture2DMS] = ACTIONS(1),
    [anon_sym_utexture2DMSArray] = ACTIONS(1),
    [anon_sym_utexture2DRect] = ACTIONS(1),
    [anon_sym_utexture3D] = ACTIONS(1),
    [anon_sym_utextureBuffer] = ACTIONS(1),
    [anon_sym_utextureCube] = ACTIONS(1),
    [anon_sym_utextureCubeArray] = ACTIONS(1),
    [anon_sym_varying] = ACTIONS(1),
    [anon_sym_vec] = ACTIONS(1),
    [anon_sym_vector] = ACTIONS(1),
    [anon_sym_vertexfragment] = ACTIONS(1),
    [anon_sym_virtual] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_volatile] = ACTIONS(1),
    [anon_sym_wchar_t] = ACTIONS(1),
    [anon_sym_wgsl] = ACTIONS(1),
    [anon_sym_where] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_writeonly] = ACTIONS(1),
    [anon_sym_yield] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym__blankspace] = ACTIONS(5),
    [sym__block_comment] = ACTIONS(5),
  },
  [1] = {
    [sym_translation_unit] = STATE(461),
    [sym_global_directive] = STATE(216),
    [sym_attribute] = STATE(88),
    [sym_struct_decl] = STATE(222),
    [sym_type_alias_decl] = STATE(460),
    [sym_variable_decl] = STATE(356),
    [sym_global_variable_decl] = STATE(460),
    [sym_global_constant_decl] = STATE(460),
    [sym_static_assert_statement] = STATE(460),
    [sym_function_decl] = STATE(222),
    [sym_function_header] = STATE(354),
    [sym_enable_directive] = STATE(214),
    [sym__comment] = STATE(1),
    [aux_sym_translation_unit_repeat1] = STATE(113),
    [aux_sym_translation_unit_repeat2] = STATE(141),
    [aux_sym_struct_member_repeat1] = STATE(244),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_override] = ACTIONS(9),
    [sym_staticAssert] = ACTIONS(11),
    [sym_struct] = ACTIONS(13),
    [sym_const] = ACTIONS(15),
    [sym_enable] = ACTIONS(17),
    [sym_fn] = ACTIONS(19),
    [sym_type] = ACTIONS(21),
    [sym_var] = ACTIONS(23),
    [sym_attr] = ACTIONS(25),
    [sym_semicolon] = ACTIONS(27),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym__blankspace] = ACTIONS(5),
    [sym__block_comment] = ACTIONS(5),
  },
  [2] = {
    [sym_bool_literal] = STATE(108),
    [sym_int_literal] = STATE(108),
    [sym_float_literal] = STATE(108),
    [sym_decimal_float_literal] = STATE(110),
    [sym_hex_float_literal] = STATE(110),
    [sym_const_literal] = STATE(111),
    [sym_array_type_decl] = STATE(243),
    [sym_texture_sampler_types] = STATE(243),
    [sym_sampler_type] = STATE(233),
    [sym_sampled_texture_type] = STATE(424),
    [sym_multisampled_texture_type] = STATE(424),
    [sym_storage_texture_type] = STATE(423),
    [sym_depth_texture_type] = STATE(233),
    [sym_type_decl_without_ident] = STATE(422),
    [sym_vec_prefix] = STATE(314),
    [sym_mat_prefix] = STATE(314),
    [sym_primary_expression] = STATE(98),
    [sym_callable] = STATE(312),
    [sym_paren_expression] = STATE(111),
    [sym_unary_expression] = STATE(114),
    [sym_singular_expression] = STATE(118),
    [sym_multiplicative_expression] = STATE(164),
    [sym_additive_expression] = STATE(189),
    [sym_shift_expression] = STATE(200),
    [sym_relational_expression] = STATE(240),
    [sym_short_circuit_and_expression] = STATE(419),
    [sym_short_circuit_or_expression] = STATE(418),
    [sym_binary_or_expression] = STATE(417),
    [sym_binary_and_expression] = STATE(416),
    [sym_binary_xor_expression] = STATE(414),
    [sym_bitwise_expression] = STATE(257),
    [sym_expression] = STATE(349),
    [sym__comment] = STATE(2),
    [aux_sym_argument_expression_list_repeat1] = STATE(11),
    [sym_ident] = ACTIONS(29),
    [aux_sym_int_literal_token1] = ACTIONS(31),
    [aux_sym_int_literal_token2] = ACTIONS(31),
    [aux_sym_int_literal_token3] = ACTIONS(31),
    [aux_sym_decimal_float_literal_token1] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token2] = ACTIONS(35),
    [aux_sym_decimal_float_literal_token3] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token4] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token5] = ACTIONS(33),
    [aux_sym_hex_float_literal_token1] = ACTIONS(37),
    [aux_sym_hex_float_literal_token2] = ACTIONS(39),
    [aux_sym_hex_float_literal_token3] = ACTIONS(37),
    [sym_array] = ACTIONS(41),
    [sym_atomic] = ACTIONS(43),
    [sym_bool] = ACTIONS(45),
    [sym_float32] = ACTIONS(45),
    [sym_float16] = ACTIONS(45),
    [sym_int32] = ACTIONS(45),
    [sym_mat2x2] = ACTIONS(47),
    [sym_mat2x3] = ACTIONS(47),
    [sym_mat2x4] = ACTIONS(47),
    [sym_mat3x2] = ACTIONS(47),
    [sym_mat3x3] = ACTIONS(47),
    [sym_mat3x4] = ACTIONS(47),
    [sym_mat4x2] = ACTIONS(47),
    [sym_mat4x3] = ACTIONS(47),
    [sym_mat4x4] = ACTIONS(47),
    [sym_pointer] = ACTIONS(49),
    [sym_sampler] = ACTIONS(51),
    [sym_sampler_comparison] = ACTIONS(51),
    [sym_texture_1d] = ACTIONS(53),
    [sym_texture_2d] = ACTIONS(53),
    [sym_texture_2d_array] = ACTIONS(53),
    [sym_texture_3d] = ACTIONS(53),
    [sym_texture_cube] = ACTIONS(53),
    [sym_texture_cube_array] = ACTIONS(53),
    [sym_texture_multisampled_2d] = ACTIONS(55),
    [sym_texture_storage_1d] = ACTIONS(57),
    [sym_texture_storage_2d] = ACTIONS(57),
    [sym_texture_storage_2d_array] = ACTIONS(57),
    [sym_texture_storage_3d] = ACTIONS(57),
    [sym_texture_depth_2d] = ACTIONS(59),
    [sym_texture_depth_2d_array] = ACTIONS(59),
    [sym_texture_depth_cube] = ACTIONS(59),
    [sym_texture_depth_cube_array] = ACTIONS(59),
    [sym_texture_depth_multisampled_2d] = ACTIONS(59),
    [sym_uint32] = ACTIONS(45),
    [sym_vec2] = ACTIONS(61),
    [sym_vec3] = ACTIONS(61),
    [sym_vec4] = ACTIONS(61),
    [sym_bitcast] = ACTIONS(63),
    [sym_false] = ACTIONS(65),
    [sym_true] = ACTIONS(65),
    [sym_and] = ACTIONS(67),
    [sym_bang] = ACTIONS(67),
    [sym_minus] = ACTIONS(67),
    [sym_paren_left] = ACTIONS(69),
    [sym_paren_right] = ACTIONS(71),
    [sym_star] = ACTIONS(67),
    [sym_tilde] = ACTIONS(67),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym__blankspace] = ACTIONS(5),
    [sym__block_comment] = ACTIONS(5),
  },
  [3] = {
    [sym_bool_literal] = STATE(108),
    [sym_int_literal] = STATE(108),
    [sym_float_literal] = STATE(108),
    [sym_decimal_float_literal] = STATE(110),
    [sym_hex_float_literal] = STATE(110),
    [sym_const_literal] = STATE(111),
    [sym_array_type_decl] = STATE(243),
    [sym_texture_sampler_types] = STATE(243),
    [sym_sampler_type] = STATE(233),
    [sym_sampled_texture_type] = STATE(424),
    [sym_multisampled_texture_type] = STATE(424),
    [sym_storage_texture_type] = STATE(423),
    [sym_depth_texture_type] = STATE(233),
    [sym_type_decl_without_ident] = STATE(422),
    [sym_vec_prefix] = STATE(314),
    [sym_mat_prefix] = STATE(314),
    [sym_primary_expression] = STATE(98),
    [sym_callable] = STATE(312),
    [sym_paren_expression] = STATE(111),
    [sym_unary_expression] = STATE(114),
    [sym_singular_expression] = STATE(118),
    [sym_multiplicative_expression] = STATE(164),
    [sym_additive_expression] = STATE(189),
    [sym_shift_expression] = STATE(200),
    [sym_relational_expression] = STATE(240),
    [sym_short_circuit_and_expression] = STATE(419),
    [sym_short_circuit_or_expression] = STATE(418),
    [sym_binary_or_expression] = STATE(417),
    [sym_binary_and_expression] = STATE(416),
    [sym_binary_xor_expression] = STATE(414),
    [sym_bitwise_expression] = STATE(257),
    [sym_expression] = STATE(355),
    [sym__comment] = STATE(3),
    [aux_sym_argument_expression_list_repeat1] = STATE(12),
    [sym_ident] = ACTIONS(29),
    [aux_sym_int_literal_token1] = ACTIONS(31),
    [aux_sym_int_literal_token2] = ACTIONS(31),
    [aux_sym_int_literal_token3] = ACTIONS(31),
    [aux_sym_decimal_float_literal_token1] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token2] = ACTIONS(35),
    [aux_sym_decimal_float_literal_token3] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token4] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token5] = ACTIONS(33),
    [aux_sym_hex_float_literal_token1] = ACTIONS(37),
    [aux_sym_hex_float_literal_token2] = ACTIONS(39),
    [aux_sym_hex_float_literal_token3] = ACTIONS(37),
    [sym_array] = ACTIONS(41),
    [sym_atomic] = ACTIONS(43),
    [sym_bool] = ACTIONS(45),
    [sym_float32] = ACTIONS(45),
    [sym_float16] = ACTIONS(45),
    [sym_int32] = ACTIONS(45),
    [sym_mat2x2] = ACTIONS(47),
    [sym_mat2x3] = ACTIONS(47),
    [sym_mat2x4] = ACTIONS(47),
    [sym_mat3x2] = ACTIONS(47),
    [sym_mat3x3] = ACTIONS(47),
    [sym_mat3x4] = ACTIONS(47),
    [sym_mat4x2] = ACTIONS(47),
    [sym_mat4x3] = ACTIONS(47),
    [sym_mat4x4] = ACTIONS(47),
    [sym_pointer] = ACTIONS(49),
    [sym_sampler] = ACTIONS(51),
    [sym_sampler_comparison] = ACTIONS(51),
    [sym_texture_1d] = ACTIONS(53),
    [sym_texture_2d] = ACTIONS(53),
    [sym_texture_2d_array] = ACTIONS(53),
    [sym_texture_3d] = ACTIONS(53),
    [sym_texture_cube] = ACTIONS(53),
    [sym_texture_cube_array] = ACTIONS(53),
    [sym_texture_multisampled_2d] = ACTIONS(55),
    [sym_texture_storage_1d] = ACTIONS(57),
    [sym_texture_storage_2d] = ACTIONS(57),
    [sym_texture_storage_2d_array] = ACTIONS(57),
    [sym_texture_storage_3d] = ACTIONS(57),
    [sym_texture_depth_2d] = ACTIONS(59),
    [sym_texture_depth_2d_array] = ACTIONS(59),
    [sym_texture_depth_cube] = ACTIONS(59),
    [sym_texture_depth_cube_array] = ACTIONS(59),
    [sym_texture_depth_multisampled_2d] = ACTIONS(59),
    [sym_uint32] = ACTIONS(45),
    [sym_vec2] = ACTIONS(61),
    [sym_vec3] = ACTIONS(61),
    [sym_vec4] = ACTIONS(61),
    [sym_bitcast] = ACTIONS(63),
    [sym_false] = ACTIONS(65),
    [sym_true] = ACTIONS(65),
    [sym_and] = ACTIONS(67),
    [sym_bang] = ACTIONS(67),
    [sym_minus] = ACTIONS(67),
    [sym_paren_left] = ACTIONS(69),
    [sym_paren_right] = ACTIONS(73),
    [sym_star] = ACTIONS(67),
    [sym_tilde] = ACTIONS(67),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym__blankspace] = ACTIONS(5),
    [sym__block_comment] = ACTIONS(5),
  },
  [4] = {
    [sym_bool_literal] = STATE(108),
    [sym_int_literal] = STATE(108),
    [sym_float_literal] = STATE(108),
    [sym_decimal_float_literal] = STATE(110),
    [sym_hex_float_literal] = STATE(110),
    [sym_const_literal] = STATE(111),
    [sym_array_type_decl] = STATE(243),
    [sym_texture_sampler_types] = STATE(243),
    [sym_sampler_type] = STATE(233),
    [sym_sampled_texture_type] = STATE(424),
    [sym_multisampled_texture_type] = STATE(424),
    [sym_storage_texture_type] = STATE(423),
    [sym_depth_texture_type] = STATE(233),
    [sym_type_decl_without_ident] = STATE(422),
    [sym_vec_prefix] = STATE(314),
    [sym_mat_prefix] = STATE(314),
    [sym_primary_expression] = STATE(98),
    [sym_callable] = STATE(312),
    [sym_paren_expression] = STATE(111),
    [sym_unary_expression] = STATE(114),
    [sym_singular_expression] = STATE(118),
    [sym_multiplicative_expression] = STATE(164),
    [sym_additive_expression] = STATE(189),
    [sym_shift_expression] = STATE(200),
    [sym_relational_expression] = STATE(240),
    [sym_short_circuit_and_expression] = STATE(419),
    [sym_short_circuit_or_expression] = STATE(418),
    [sym_binary_or_expression] = STATE(417),
    [sym_binary_and_expression] = STATE(416),
    [sym_binary_xor_expression] = STATE(414),
    [sym_bitwise_expression] = STATE(257),
    [sym_expression] = STATE(284),
    [sym__comment] = STATE(4),
    [sym_ident] = ACTIONS(29),
    [aux_sym_int_literal_token1] = ACTIONS(31),
    [aux_sym_int_literal_token2] = ACTIONS(31),
    [aux_sym_int_literal_token3] = ACTIONS(31),
    [aux_sym_decimal_float_literal_token1] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token2] = ACTIONS(35),
    [aux_sym_decimal_float_literal_token3] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token4] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token5] = ACTIONS(33),
    [aux_sym_hex_float_literal_token1] = ACTIONS(37),
    [aux_sym_hex_float_literal_token2] = ACTIONS(39),
    [aux_sym_hex_float_literal_token3] = ACTIONS(37),
    [sym_array] = ACTIONS(41),
    [sym_atomic] = ACTIONS(43),
    [sym_bool] = ACTIONS(45),
    [sym_float32] = ACTIONS(45),
    [sym_float16] = ACTIONS(45),
    [sym_int32] = ACTIONS(45),
    [sym_mat2x2] = ACTIONS(47),
    [sym_mat2x3] = ACTIONS(47),
    [sym_mat2x4] = ACTIONS(47),
    [sym_mat3x2] = ACTIONS(47),
    [sym_mat3x3] = ACTIONS(47),
    [sym_mat3x4] = ACTIONS(47),
    [sym_mat4x2] = ACTIONS(47),
    [sym_mat4x3] = ACTIONS(47),
    [sym_mat4x4] = ACTIONS(47),
    [sym_pointer] = ACTIONS(49),
    [sym_sampler] = ACTIONS(51),
    [sym_sampler_comparison] = ACTIONS(51),
    [sym_texture_1d] = ACTIONS(53),
    [sym_texture_2d] = ACTIONS(53),
    [sym_texture_2d_array] = ACTIONS(53),
    [sym_texture_3d] = ACTIONS(53),
    [sym_texture_cube] = ACTIONS(53),
    [sym_texture_cube_array] = ACTIONS(53),
    [sym_texture_multisampled_2d] = ACTIONS(55),
    [sym_texture_storage_1d] = ACTIONS(57),
    [sym_texture_storage_2d] = ACTIONS(57),
    [sym_texture_storage_2d_array] = ACTIONS(57),
    [sym_texture_storage_3d] = ACTIONS(57),
    [sym_texture_depth_2d] = ACTIONS(59),
    [sym_texture_depth_2d_array] = ACTIONS(59),
    [sym_texture_depth_cube] = ACTIONS(59),
    [sym_texture_depth_cube_array] = ACTIONS(59),
    [sym_texture_depth_multisampled_2d] = ACTIONS(59),
    [sym_uint32] = ACTIONS(45),
    [sym_vec2] = ACTIONS(61),
    [sym_vec3] = ACTIONS(61),
    [sym_vec4] = ACTIONS(61),
    [sym_bitcast] = ACTIONS(63),
    [sym_false] = ACTIONS(65),
    [sym_true] = ACTIONS(65),
    [sym_and] = ACTIONS(67),
    [sym_bang] = ACTIONS(67),
    [sym_brace_left] = ACTIONS(75),
    [sym_colon] = ACTIONS(75),
    [sym_minus] = ACTIONS(67),
    [sym_paren_left] = ACTIONS(69),
    [sym_star] = ACTIONS(67),
    [sym_tilde] = ACTIONS(67),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym__blankspace] = ACTIONS(5),
    [sym__block_comment] = ACTIONS(5),
  },
  [5] = {
    [sym_bool_literal] = STATE(108),
    [sym_int_literal] = STATE(108),
    [sym_float_literal] = STATE(108),
    [sym_decimal_float_literal] = STATE(110),
    [sym_hex_float_literal] = STATE(110),
    [sym_const_literal] = STATE(111),
    [sym_array_type_decl] = STATE(243),
    [sym_texture_sampler_types] = STATE(243),
    [sym_sampler_type] = STATE(233),
    [sym_sampled_texture_type] = STATE(424),
    [sym_multisampled_texture_type] = STATE(424),
    [sym_storage_texture_type] = STATE(423),
    [sym_depth_texture_type] = STATE(233),
    [sym_type_decl_without_ident] = STATE(422),
    [sym_vec_prefix] = STATE(314),
    [sym_mat_prefix] = STATE(314),
    [sym_primary_expression] = STATE(98),
    [sym_callable] = STATE(312),
    [sym_paren_expression] = STATE(111),
    [sym_unary_expression] = STATE(114),
    [sym_singular_expression] = STATE(118),
    [sym_multiplicative_expression] = STATE(164),
    [sym_additive_expression] = STATE(189),
    [sym_shift_expression] = STATE(200),
    [sym_relational_expression] = STATE(240),
    [sym_short_circuit_and_expression] = STATE(419),
    [sym_short_circuit_or_expression] = STATE(418),
    [sym_binary_or_expression] = STATE(417),
    [sym_binary_and_expression] = STATE(416),
    [sym_binary_xor_expression] = STATE(414),
    [sym_bitwise_expression] = STATE(257),
    [sym_expression] = STATE(332),
    [sym__comment] = STATE(5),
    [aux_sym_argument_expression_list_repeat1] = STATE(13),
    [sym_ident] = ACTIONS(29),
    [aux_sym_int_literal_token1] = ACTIONS(31),
    [aux_sym_int_literal_token2] = ACTIONS(31),
    [aux_sym_int_literal_token3] = ACTIONS(31),
    [aux_sym_decimal_float_literal_token1] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token2] = ACTIONS(35),
    [aux_sym_decimal_float_literal_token3] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token4] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token5] = ACTIONS(33),
    [aux_sym_hex_float_literal_token1] = ACTIONS(37),
    [aux_sym_hex_float_literal_token2] = ACTIONS(39),
    [aux_sym_hex_float_literal_token3] = ACTIONS(37),
    [sym_array] = ACTIONS(41),
    [sym_atomic] = ACTIONS(43),
    [sym_bool] = ACTIONS(45),
    [sym_float32] = ACTIONS(45),
    [sym_float16] = ACTIONS(45),
    [sym_int32] = ACTIONS(45),
    [sym_mat2x2] = ACTIONS(47),
    [sym_mat2x3] = ACTIONS(47),
    [sym_mat2x4] = ACTIONS(47),
    [sym_mat3x2] = ACTIONS(47),
    [sym_mat3x3] = ACTIONS(47),
    [sym_mat3x4] = ACTIONS(47),
    [sym_mat4x2] = ACTIONS(47),
    [sym_mat4x3] = ACTIONS(47),
    [sym_mat4x4] = ACTIONS(47),
    [sym_pointer] = ACTIONS(49),
    [sym_sampler] = ACTIONS(51),
    [sym_sampler_comparison] = ACTIONS(51),
    [sym_texture_1d] = ACTIONS(53),
    [sym_texture_2d] = ACTIONS(53),
    [sym_texture_2d_array] = ACTIONS(53),
    [sym_texture_3d] = ACTIONS(53),
    [sym_texture_cube] = ACTIONS(53),
    [sym_texture_cube_array] = ACTIONS(53),
    [sym_texture_multisampled_2d] = ACTIONS(55),
    [sym_texture_storage_1d] = ACTIONS(57),
    [sym_texture_storage_2d] = ACTIONS(57),
    [sym_texture_storage_2d_array] = ACTIONS(57),
    [sym_texture_storage_3d] = ACTIONS(57),
    [sym_texture_depth_2d] = ACTIONS(59),
    [sym_texture_depth_2d_array] = ACTIONS(59),
    [sym_texture_depth_cube] = ACTIONS(59),
    [sym_texture_depth_cube_array] = ACTIONS(59),
    [sym_texture_depth_multisampled_2d] = ACTIONS(59),
    [sym_uint32] = ACTIONS(45),
    [sym_vec2] = ACTIONS(61),
    [sym_vec3] = ACTIONS(61),
    [sym_vec4] = ACTIONS(61),
    [sym_bitcast] = ACTIONS(63),
    [sym_false] = ACTIONS(65),
    [sym_true] = ACTIONS(65),
    [sym_and] = ACTIONS(67),
    [sym_bang] = ACTIONS(67),
    [sym_minus] = ACTIONS(67),
    [sym_paren_left] = ACTIONS(69),
    [sym_paren_right] = ACTIONS(77),
    [sym_star] = ACTIONS(67),
    [sym_tilde] = ACTIONS(67),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym__blankspace] = ACTIONS(5),
    [sym__block_comment] = ACTIONS(5),
  },
  [6] = {
    [sym_bool_literal] = STATE(108),
    [sym_int_literal] = STATE(108),
    [sym_float_literal] = STATE(108),
    [sym_decimal_float_literal] = STATE(110),
    [sym_hex_float_literal] = STATE(110),
    [sym_const_literal] = STATE(111),
    [sym_array_type_decl] = STATE(243),
    [sym_texture_sampler_types] = STATE(243),
    [sym_sampler_type] = STATE(233),
    [sym_sampled_texture_type] = STATE(424),
    [sym_multisampled_texture_type] = STATE(424),
    [sym_storage_texture_type] = STATE(423),
    [sym_depth_texture_type] = STATE(233),
    [sym_type_decl_without_ident] = STATE(422),
    [sym_vec_prefix] = STATE(314),
    [sym_mat_prefix] = STATE(314),
    [sym_primary_expression] = STATE(98),
    [sym_callable] = STATE(312),
    [sym_paren_expression] = STATE(111),
    [sym_unary_expression] = STATE(114),
    [sym_singular_expression] = STATE(118),
    [sym_multiplicative_expression] = STATE(164),
    [sym_additive_expression] = STATE(189),
    [sym_shift_expression] = STATE(200),
    [sym_relational_expression] = STATE(240),
    [sym_short_circuit_and_expression] = STATE(419),
    [sym_short_circuit_or_expression] = STATE(418),
    [sym_binary_or_expression] = STATE(417),
    [sym_binary_and_expression] = STATE(416),
    [sym_binary_xor_expression] = STATE(414),
    [sym_bitwise_expression] = STATE(257),
    [sym_expression] = STATE(284),
    [sym__comment] = STATE(6),
    [sym_ident] = ACTIONS(29),
    [aux_sym_int_literal_token1] = ACTIONS(31),
    [aux_sym_int_literal_token2] = ACTIONS(31),
    [aux_sym_int_literal_token3] = ACTIONS(31),
    [aux_sym_decimal_float_literal_token1] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token2] = ACTIONS(35),
    [aux_sym_decimal_float_literal_token3] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token4] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token5] = ACTIONS(33),
    [aux_sym_hex_float_literal_token1] = ACTIONS(37),
    [aux_sym_hex_float_literal_token2] = ACTIONS(39),
    [aux_sym_hex_float_literal_token3] = ACTIONS(37),
    [sym_array] = ACTIONS(41),
    [sym_atomic] = ACTIONS(43),
    [sym_bool] = ACTIONS(45),
    [sym_float32] = ACTIONS(45),
    [sym_float16] = ACTIONS(45),
    [sym_int32] = ACTIONS(45),
    [sym_mat2x2] = ACTIONS(47),
    [sym_mat2x3] = ACTIONS(47),
    [sym_mat2x4] = ACTIONS(47),
    [sym_mat3x2] = ACTIONS(47),
    [sym_mat3x3] = ACTIONS(47),
    [sym_mat3x4] = ACTIONS(47),
    [sym_mat4x2] = ACTIONS(47),
    [sym_mat4x3] = ACTIONS(47),
    [sym_mat4x4] = ACTIONS(47),
    [sym_pointer] = ACTIONS(49),
    [sym_sampler] = ACTIONS(51),
    [sym_sampler_comparison] = ACTIONS(51),
    [sym_texture_1d] = ACTIONS(53),
    [sym_texture_2d] = ACTIONS(53),
    [sym_texture_2d_array] = ACTIONS(53),
    [sym_texture_3d] = ACTIONS(53),
    [sym_texture_cube] = ACTIONS(53),
    [sym_texture_cube_array] = ACTIONS(53),
    [sym_texture_multisampled_2d] = ACTIONS(55),
    [sym_texture_storage_1d] = ACTIONS(57),
    [sym_texture_storage_2d] = ACTIONS(57),
    [sym_texture_storage_2d_array] = ACTIONS(57),
    [sym_texture_storage_3d] = ACTIONS(57),
    [sym_texture_depth_2d] = ACTIONS(59),
    [sym_texture_depth_2d_array] = ACTIONS(59),
    [sym_texture_depth_cube] = ACTIONS(59),
    [sym_texture_depth_cube_array] = ACTIONS(59),
    [sym_texture_depth_multisampled_2d] = ACTIONS(59),
    [sym_uint32] = ACTIONS(45),
    [sym_vec2] = ACTIONS(61),
    [sym_vec3] = ACTIONS(61),
    [sym_vec4] = ACTIONS(61),
    [sym_bitcast] = ACTIONS(63),
    [sym_false] = ACTIONS(65),
    [sym_true] = ACTIONS(65),
    [sym_and] = ACTIONS(67),
    [sym_bang] = ACTIONS(67),
    [sym_brace_left] = ACTIONS(79),
    [sym_colon] = ACTIONS(79),
    [sym_minus] = ACTIONS(67),
    [sym_paren_left] = ACTIONS(69),
    [sym_star] = ACTIONS(67),
    [sym_tilde] = ACTIONS(67),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym__blankspace] = ACTIONS(5),
    [sym__block_comment] = ACTIONS(5),
  },
  [7] = {
    [sym_bool_literal] = STATE(108),
    [sym_int_literal] = STATE(108),
    [sym_float_literal] = STATE(108),
    [sym_decimal_float_literal] = STATE(110),
    [sym_hex_float_literal] = STATE(110),
    [sym_const_literal] = STATE(111),
    [sym_array_type_decl] = STATE(243),
    [sym_texture_sampler_types] = STATE(243),
    [sym_sampler_type] = STATE(233),
    [sym_sampled_texture_type] = STATE(424),
    [sym_multisampled_texture_type] = STATE(424),
    [sym_storage_texture_type] = STATE(423),
    [sym_depth_texture_type] = STATE(233),
    [sym_type_decl_without_ident] = STATE(422),
    [sym_vec_prefix] = STATE(314),
    [sym_mat_prefix] = STATE(314),
    [sym_primary_expression] = STATE(98),
    [sym_callable] = STATE(312),
    [sym_paren_expression] = STATE(111),
    [sym_unary_expression] = STATE(114),
    [sym_singular_expression] = STATE(118),
    [sym_multiplicative_expression] = STATE(164),
    [sym_additive_expression] = STATE(189),
    [sym_shift_expression] = STATE(200),
    [sym_relational_expression] = STATE(240),
    [sym_short_circuit_and_expression] = STATE(419),
    [sym_short_circuit_or_expression] = STATE(418),
    [sym_binary_or_expression] = STATE(417),
    [sym_binary_and_expression] = STATE(416),
    [sym_binary_xor_expression] = STATE(414),
    [sym_bitwise_expression] = STATE(257),
    [sym_expression] = STATE(273),
    [sym_case_selectors] = STATE(287),
    [sym__comment] = STATE(7),
    [sym_ident] = ACTIONS(29),
    [aux_sym_int_literal_token1] = ACTIONS(31),
    [aux_sym_int_literal_token2] = ACTIONS(31),
    [aux_sym_int_literal_token3] = ACTIONS(31),
    [aux_sym_decimal_float_literal_token1] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token2] = ACTIONS(35),
    [aux_sym_decimal_float_literal_token3] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token4] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token5] = ACTIONS(33),
    [aux_sym_hex_float_literal_token1] = ACTIONS(37),
    [aux_sym_hex_float_literal_token2] = ACTIONS(39),
    [aux_sym_hex_float_literal_token3] = ACTIONS(37),
    [sym_array] = ACTIONS(41),
    [sym_atomic] = ACTIONS(43),
    [sym_bool] = ACTIONS(45),
    [sym_float32] = ACTIONS(45),
    [sym_float16] = ACTIONS(45),
    [sym_int32] = ACTIONS(45),
    [sym_mat2x2] = ACTIONS(47),
    [sym_mat2x3] = ACTIONS(47),
    [sym_mat2x4] = ACTIONS(47),
    [sym_mat3x2] = ACTIONS(47),
    [sym_mat3x3] = ACTIONS(47),
    [sym_mat3x4] = ACTIONS(47),
    [sym_mat4x2] = ACTIONS(47),
    [sym_mat4x3] = ACTIONS(47),
    [sym_mat4x4] = ACTIONS(47),
    [sym_pointer] = ACTIONS(49),
    [sym_sampler] = ACTIONS(51),
    [sym_sampler_comparison] = ACTIONS(51),
    [sym_texture_1d] = ACTIONS(53),
    [sym_texture_2d] = ACTIONS(53),
    [sym_texture_2d_array] = ACTIONS(53),
    [sym_texture_3d] = ACTIONS(53),
    [sym_texture_cube] = ACTIONS(53),
    [sym_texture_cube_array] = ACTIONS(53),
    [sym_texture_multisampled_2d] = ACTIONS(55),
    [sym_texture_storage_1d] = ACTIONS(57),
    [sym_texture_storage_2d] = ACTIONS(57),
    [sym_texture_storage_2d_array] = ACTIONS(57),
    [sym_texture_storage_3d] = ACTIONS(57),
    [sym_texture_depth_2d] = ACTIONS(59),
    [sym_texture_depth_2d_array] = ACTIONS(59),
    [sym_texture_depth_cube] = ACTIONS(59),
    [sym_texture_depth_cube_array] = ACTIONS(59),
    [sym_texture_depth_multisampled_2d] = ACTIONS(59),
    [sym_uint32] = ACTIONS(45),
    [sym_vec2] = ACTIONS(61),
    [sym_vec3] = ACTIONS(61),
    [sym_vec4] = ACTIONS(61),
    [sym_bitcast] = ACTIONS(63),
    [sym_false] = ACTIONS(65),
    [sym_true] = ACTIONS(65),
    [sym_and] = ACTIONS(67),
    [sym_bang] = ACTIONS(67),
    [sym_minus] = ACTIONS(67),
    [sym_paren_left] = ACTIONS(69),
    [sym_star] = ACTIONS(67),
    [sym_tilde] = ACTIONS(67),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym__blankspace] = ACTIONS(5),
    [sym__block_comment] = ACTIONS(5),
  },
  [8] = {
    [sym_bool_literal] = STATE(108),
    [sym_int_literal] = STATE(108),
    [sym_float_literal] = STATE(108),
    [sym_decimal_float_literal] = STATE(110),
    [sym_hex_float_literal] = STATE(110),
    [sym_const_literal] = STATE(111),
    [sym_array_type_decl] = STATE(243),
    [sym_texture_sampler_types] = STATE(243),
    [sym_sampler_type] = STATE(233),
    [sym_sampled_texture_type] = STATE(424),
    [sym_multisampled_texture_type] = STATE(424),
    [sym_storage_texture_type] = STATE(423),
    [sym_depth_texture_type] = STATE(233),
    [sym_type_decl_without_ident] = STATE(422),
    [sym_vec_prefix] = STATE(314),
    [sym_mat_prefix] = STATE(314),
    [sym_primary_expression] = STATE(98),
    [sym_callable] = STATE(312),
    [sym_paren_expression] = STATE(111),
    [sym_unary_expression] = STATE(114),
    [sym_singular_expression] = STATE(118),
    [sym_multiplicative_expression] = STATE(164),
    [sym_additive_expression] = STATE(189),
    [sym_shift_expression] = STATE(200),
    [sym_relational_expression] = STATE(240),
    [sym_short_circuit_and_expression] = STATE(419),
    [sym_short_circuit_or_expression] = STATE(418),
    [sym_binary_or_expression] = STATE(417),
    [sym_binary_and_expression] = STATE(416),
    [sym_binary_xor_expression] = STATE(414),
    [sym_bitwise_expression] = STATE(257),
    [sym_expression] = STATE(401),
    [sym__comment] = STATE(8),
    [sym_ident] = ACTIONS(29),
    [aux_sym_int_literal_token1] = ACTIONS(31),
    [aux_sym_int_literal_token2] = ACTIONS(31),
    [aux_sym_int_literal_token3] = ACTIONS(31),
    [aux_sym_decimal_float_literal_token1] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token2] = ACTIONS(35),
    [aux_sym_decimal_float_literal_token3] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token4] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token5] = ACTIONS(33),
    [aux_sym_hex_float_literal_token1] = ACTIONS(37),
    [aux_sym_hex_float_literal_token2] = ACTIONS(39),
    [aux_sym_hex_float_literal_token3] = ACTIONS(37),
    [sym_array] = ACTIONS(41),
    [sym_atomic] = ACTIONS(43),
    [sym_bool] = ACTIONS(45),
    [sym_float32] = ACTIONS(45),
    [sym_float16] = ACTIONS(45),
    [sym_int32] = ACTIONS(45),
    [sym_mat2x2] = ACTIONS(47),
    [sym_mat2x3] = ACTIONS(47),
    [sym_mat2x4] = ACTIONS(47),
    [sym_mat3x2] = ACTIONS(47),
    [sym_mat3x3] = ACTIONS(47),
    [sym_mat3x4] = ACTIONS(47),
    [sym_mat4x2] = ACTIONS(47),
    [sym_mat4x3] = ACTIONS(47),
    [sym_mat4x4] = ACTIONS(47),
    [sym_pointer] = ACTIONS(49),
    [sym_sampler] = ACTIONS(51),
    [sym_sampler_comparison] = ACTIONS(51),
    [sym_texture_1d] = ACTIONS(53),
    [sym_texture_2d] = ACTIONS(53),
    [sym_texture_2d_array] = ACTIONS(53),
    [sym_texture_3d] = ACTIONS(53),
    [sym_texture_cube] = ACTIONS(53),
    [sym_texture_cube_array] = ACTIONS(53),
    [sym_texture_multisampled_2d] = ACTIONS(55),
    [sym_texture_storage_1d] = ACTIONS(57),
    [sym_texture_storage_2d] = ACTIONS(57),
    [sym_texture_storage_2d_array] = ACTIONS(57),
    [sym_texture_storage_3d] = ACTIONS(57),
    [sym_texture_depth_2d] = ACTIONS(59),
    [sym_texture_depth_2d_array] = ACTIONS(59),
    [sym_texture_depth_cube] = ACTIONS(59),
    [sym_texture_depth_cube_array] = ACTIONS(59),
    [sym_texture_depth_multisampled_2d] = ACTIONS(59),
    [sym_uint32] = ACTIONS(45),
    [sym_vec2] = ACTIONS(61),
    [sym_vec3] = ACTIONS(61),
    [sym_vec4] = ACTIONS(61),
    [sym_bitcast] = ACTIONS(63),
    [sym_false] = ACTIONS(65),
    [sym_true] = ACTIONS(65),
    [sym_and] = ACTIONS(67),
    [sym_bang] = ACTIONS(67),
    [sym_minus] = ACTIONS(67),
    [sym_paren_left] = ACTIONS(69),
    [sym_semicolon] = ACTIONS(81),
    [sym_star] = ACTIONS(67),
    [sym_tilde] = ACTIONS(67),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym__blankspace] = ACTIONS(5),
    [sym__block_comment] = ACTIONS(5),
  },
  [9] = {
    [sym_bool_literal] = STATE(108),
    [sym_int_literal] = STATE(108),
    [sym_float_literal] = STATE(108),
    [sym_decimal_float_literal] = STATE(110),
    [sym_hex_float_literal] = STATE(110),
    [sym_const_literal] = STATE(111),
    [sym_array_type_decl] = STATE(243),
    [sym_texture_sampler_types] = STATE(243),
    [sym_sampler_type] = STATE(233),
    [sym_sampled_texture_type] = STATE(424),
    [sym_multisampled_texture_type] = STATE(424),
    [sym_storage_texture_type] = STATE(423),
    [sym_depth_texture_type] = STATE(233),
    [sym_type_decl_without_ident] = STATE(422),
    [sym_vec_prefix] = STATE(314),
    [sym_mat_prefix] = STATE(314),
    [sym_primary_expression] = STATE(98),
    [sym_callable] = STATE(312),
    [sym_paren_expression] = STATE(111),
    [sym_unary_expression] = STATE(114),
    [sym_singular_expression] = STATE(118),
    [sym_multiplicative_expression] = STATE(164),
    [sym_additive_expression] = STATE(189),
    [sym_shift_expression] = STATE(200),
    [sym_relational_expression] = STATE(240),
    [sym_short_circuit_and_expression] = STATE(419),
    [sym_short_circuit_or_expression] = STATE(418),
    [sym_binary_or_expression] = STATE(417),
    [sym_binary_and_expression] = STATE(416),
    [sym_binary_xor_expression] = STATE(414),
    [sym_bitwise_expression] = STATE(257),
    [sym_expression] = STATE(448),
    [sym__comment] = STATE(9),
    [aux_sym_argument_expression_list_repeat1] = STATE(9),
    [sym_ident] = ACTIONS(83),
    [aux_sym_int_literal_token1] = ACTIONS(86),
    [aux_sym_int_literal_token2] = ACTIONS(86),
    [aux_sym_int_literal_token3] = ACTIONS(86),
    [aux_sym_decimal_float_literal_token1] = ACTIONS(89),
    [aux_sym_decimal_float_literal_token2] = ACTIONS(92),
    [aux_sym_decimal_float_literal_token3] = ACTIONS(89),
    [aux_sym_decimal_float_literal_token4] = ACTIONS(89),
    [aux_sym_decimal_float_literal_token5] = ACTIONS(89),
    [aux_sym_hex_float_literal_token1] = ACTIONS(95),
    [aux_sym_hex_float_literal_token2] = ACTIONS(98),
    [aux_sym_hex_float_literal_token3] = ACTIONS(95),
    [sym_array] = ACTIONS(101),
    [sym_atomic] = ACTIONS(104),
    [sym_bool] = ACTIONS(107),
    [sym_float32] = ACTIONS(107),
    [sym_float16] = ACTIONS(107),
    [sym_int32] = ACTIONS(107),
    [sym_mat2x2] = ACTIONS(110),
    [sym_mat2x3] = ACTIONS(110),
    [sym_mat2x4] = ACTIONS(110),
    [sym_mat3x2] = ACTIONS(110),
    [sym_mat3x3] = ACTIONS(110),
    [sym_mat3x4] = ACTIONS(110),
    [sym_mat4x2] = ACTIONS(110),
    [sym_mat4x3] = ACTIONS(110),
    [sym_mat4x4] = ACTIONS(110),
    [sym_pointer] = ACTIONS(113),
    [sym_sampler] = ACTIONS(116),
    [sym_sampler_comparison] = ACTIONS(116),
    [sym_texture_1d] = ACTIONS(119),
    [sym_texture_2d] = ACTIONS(119),
    [sym_texture_2d_array] = ACTIONS(119),
    [sym_texture_3d] = ACTIONS(119),
    [sym_texture_cube] = ACTIONS(119),
    [sym_texture_cube_array] = ACTIONS(119),
    [sym_texture_multisampled_2d] = ACTIONS(122),
    [sym_texture_storage_1d] = ACTIONS(125),
    [sym_texture_storage_2d] = ACTIONS(125),
    [sym_texture_storage_2d_array] = ACTIONS(125),
    [sym_texture_storage_3d] = ACTIONS(125),
    [sym_texture_depth_2d] = ACTIONS(128),
    [sym_texture_depth_2d_array] = ACTIONS(128),
    [sym_texture_depth_cube] = ACTIONS(128),
    [sym_texture_depth_cube_array] = ACTIONS(128),
    [sym_texture_depth_multisampled_2d] = ACTIONS(128),
    [sym_uint32] = ACTIONS(107),
    [sym_vec2] = ACTIONS(131),
    [sym_vec3] = ACTIONS(131),
    [sym_vec4] = ACTIONS(131),
    [sym_bitcast] = ACTIONS(134),
    [sym_false] = ACTIONS(137),
    [sym_true] = ACTIONS(137),
    [sym_and] = ACTIONS(140),
    [sym_bang] = ACTIONS(140),
    [sym_minus] = ACTIONS(140),
    [sym_paren_left] = ACTIONS(143),
    [sym_star] = ACTIONS(140),
    [sym_tilde] = ACTIONS(140),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym__blankspace] = ACTIONS(5),
    [sym__block_comment] = ACTIONS(5),
  },
  [10] = {
    [sym_bool_literal] = STATE(108),
    [sym_int_literal] = STATE(108),
    [sym_float_literal] = STATE(108),
    [sym_decimal_float_literal] = STATE(110),
    [sym_hex_float_literal] = STATE(110),
    [sym_const_literal] = STATE(111),
    [sym_array_type_decl] = STATE(243),
    [sym_texture_sampler_types] = STATE(243),
    [sym_sampler_type] = STATE(233),
    [sym_sampled_texture_type] = STATE(424),
    [sym_multisampled_texture_type] = STATE(424),
    [sym_storage_texture_type] = STATE(423),
    [sym_depth_texture_type] = STATE(233),
    [sym_type_decl_without_ident] = STATE(422),
    [sym_vec_prefix] = STATE(314),
    [sym_mat_prefix] = STATE(314),
    [sym_primary_expression] = STATE(98),
    [sym_callable] = STATE(312),
    [sym_paren_expression] = STATE(111),
    [sym_unary_expression] = STATE(114),
    [sym_singular_expression] = STATE(118),
    [sym_multiplicative_expression] = STATE(164),
    [sym_additive_expression] = STATE(189),
    [sym_shift_expression] = STATE(200),
    [sym_relational_expression] = STATE(240),
    [sym_short_circuit_and_expression] = STATE(419),
    [sym_short_circuit_or_expression] = STATE(418),
    [sym_binary_or_expression] = STATE(417),
    [sym_binary_and_expression] = STATE(416),
    [sym_binary_xor_expression] = STATE(414),
    [sym_bitwise_expression] = STATE(257),
    [sym_expression] = STATE(413),
    [sym__comment] = STATE(10),
    [sym_ident] = ACTIONS(29),
    [aux_sym_int_literal_token1] = ACTIONS(31),
    [aux_sym_int_literal_token2] = ACTIONS(31),
    [aux_sym_int_literal_token3] = ACTIONS(31),
    [aux_sym_decimal_float_literal_token1] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token2] = ACTIONS(35),
    [aux_sym_decimal_float_literal_token3] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token4] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token5] = ACTIONS(33),
    [aux_sym_hex_float_literal_token1] = ACTIONS(37),
    [aux_sym_hex_float_literal_token2] = ACTIONS(39),
    [aux_sym_hex_float_literal_token3] = ACTIONS(37),
    [sym_array] = ACTIONS(41),
    [sym_atomic] = ACTIONS(43),
    [sym_bool] = ACTIONS(45),
    [sym_float32] = ACTIONS(45),
    [sym_float16] = ACTIONS(45),
    [sym_int32] = ACTIONS(45),
    [sym_mat2x2] = ACTIONS(47),
    [sym_mat2x3] = ACTIONS(47),
    [sym_mat2x4] = ACTIONS(47),
    [sym_mat3x2] = ACTIONS(47),
    [sym_mat3x3] = ACTIONS(47),
    [sym_mat3x4] = ACTIONS(47),
    [sym_mat4x2] = ACTIONS(47),
    [sym_mat4x3] = ACTIONS(47),
    [sym_mat4x4] = ACTIONS(47),
    [sym_pointer] = ACTIONS(49),
    [sym_sampler] = ACTIONS(51),
    [sym_sampler_comparison] = ACTIONS(51),
    [sym_texture_1d] = ACTIONS(53),
    [sym_texture_2d] = ACTIONS(53),
    [sym_texture_2d_array] = ACTIONS(53),
    [sym_texture_3d] = ACTIONS(53),
    [sym_texture_cube] = ACTIONS(53),
    [sym_texture_cube_array] = ACTIONS(53),
    [sym_texture_multisampled_2d] = ACTIONS(55),
    [sym_texture_storage_1d] = ACTIONS(57),
    [sym_texture_storage_2d] = ACTIONS(57),
    [sym_texture_storage_2d_array] = ACTIONS(57),
    [sym_texture_storage_3d] = ACTIONS(57),
    [sym_texture_depth_2d] = ACTIONS(59),
    [sym_texture_depth_2d_array] = ACTIONS(59),
    [sym_texture_depth_cube] = ACTIONS(59),
    [sym_texture_depth_cube_array] = ACTIONS(59),
    [sym_texture_depth_multisampled_2d] = ACTIONS(59),
    [sym_uint32] = ACTIONS(45),
    [sym_vec2] = ACTIONS(61),
    [sym_vec3] = ACTIONS(61),
    [sym_vec4] = ACTIONS(61),
    [sym_bitcast] = ACTIONS(63),
    [sym_false] = ACTIONS(65),
    [sym_true] = ACTIONS(65),
    [sym_and] = ACTIONS(67),
    [sym_bang] = ACTIONS(67),
    [sym_minus] = ACTIONS(67),
    [sym_paren_left] = ACTIONS(69),
    [sym_semicolon] = ACTIONS(146),
    [sym_star] = ACTIONS(67),
    [sym_tilde] = ACTIONS(67),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym__blankspace] = ACTIONS(5),
    [sym__block_comment] = ACTIONS(5),
  },
  [11] = {
    [sym_bool_literal] = STATE(108),
    [sym_int_literal] = STATE(108),
    [sym_float_literal] = STATE(108),
    [sym_decimal_float_literal] = STATE(110),
    [sym_hex_float_literal] = STATE(110),
    [sym_const_literal] = STATE(111),
    [sym_array_type_decl] = STATE(243),
    [sym_texture_sampler_types] = STATE(243),
    [sym_sampler_type] = STATE(233),
    [sym_sampled_texture_type] = STATE(424),
    [sym_multisampled_texture_type] = STATE(424),
    [sym_storage_texture_type] = STATE(423),
    [sym_depth_texture_type] = STATE(233),
    [sym_type_decl_without_ident] = STATE(422),
    [sym_vec_prefix] = STATE(314),
    [sym_mat_prefix] = STATE(314),
    [sym_primary_expression] = STATE(98),
    [sym_callable] = STATE(312),
    [sym_paren_expression] = STATE(111),
    [sym_unary_expression] = STATE(114),
    [sym_singular_expression] = STATE(118),
    [sym_multiplicative_expression] = STATE(164),
    [sym_additive_expression] = STATE(189),
    [sym_shift_expression] = STATE(200),
    [sym_relational_expression] = STATE(240),
    [sym_short_circuit_and_expression] = STATE(419),
    [sym_short_circuit_or_expression] = STATE(418),
    [sym_binary_or_expression] = STATE(417),
    [sym_binary_and_expression] = STATE(416),
    [sym_binary_xor_expression] = STATE(414),
    [sym_bitwise_expression] = STATE(257),
    [sym_expression] = STATE(353),
    [sym__comment] = STATE(11),
    [aux_sym_argument_expression_list_repeat1] = STATE(9),
    [sym_ident] = ACTIONS(29),
    [aux_sym_int_literal_token1] = ACTIONS(31),
    [aux_sym_int_literal_token2] = ACTIONS(31),
    [aux_sym_int_literal_token3] = ACTIONS(31),
    [aux_sym_decimal_float_literal_token1] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token2] = ACTIONS(35),
    [aux_sym_decimal_float_literal_token3] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token4] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token5] = ACTIONS(33),
    [aux_sym_hex_float_literal_token1] = ACTIONS(37),
    [aux_sym_hex_float_literal_token2] = ACTIONS(39),
    [aux_sym_hex_float_literal_token3] = ACTIONS(37),
    [sym_array] = ACTIONS(41),
    [sym_atomic] = ACTIONS(43),
    [sym_bool] = ACTIONS(45),
    [sym_float32] = ACTIONS(45),
    [sym_float16] = ACTIONS(45),
    [sym_int32] = ACTIONS(45),
    [sym_mat2x2] = ACTIONS(47),
    [sym_mat2x3] = ACTIONS(47),
    [sym_mat2x4] = ACTIONS(47),
    [sym_mat3x2] = ACTIONS(47),
    [sym_mat3x3] = ACTIONS(47),
    [sym_mat3x4] = ACTIONS(47),
    [sym_mat4x2] = ACTIONS(47),
    [sym_mat4x3] = ACTIONS(47),
    [sym_mat4x4] = ACTIONS(47),
    [sym_pointer] = ACTIONS(49),
    [sym_sampler] = ACTIONS(51),
    [sym_sampler_comparison] = ACTIONS(51),
    [sym_texture_1d] = ACTIONS(53),
    [sym_texture_2d] = ACTIONS(53),
    [sym_texture_2d_array] = ACTIONS(53),
    [sym_texture_3d] = ACTIONS(53),
    [sym_texture_cube] = ACTIONS(53),
    [sym_texture_cube_array] = ACTIONS(53),
    [sym_texture_multisampled_2d] = ACTIONS(55),
    [sym_texture_storage_1d] = ACTIONS(57),
    [sym_texture_storage_2d] = ACTIONS(57),
    [sym_texture_storage_2d_array] = ACTIONS(57),
    [sym_texture_storage_3d] = ACTIONS(57),
    [sym_texture_depth_2d] = ACTIONS(59),
    [sym_texture_depth_2d_array] = ACTIONS(59),
    [sym_texture_depth_cube] = ACTIONS(59),
    [sym_texture_depth_cube_array] = ACTIONS(59),
    [sym_texture_depth_multisampled_2d] = ACTIONS(59),
    [sym_uint32] = ACTIONS(45),
    [sym_vec2] = ACTIONS(61),
    [sym_vec3] = ACTIONS(61),
    [sym_vec4] = ACTIONS(61),
    [sym_bitcast] = ACTIONS(63),
    [sym_false] = ACTIONS(65),
    [sym_true] = ACTIONS(65),
    [sym_and] = ACTIONS(67),
    [sym_bang] = ACTIONS(67),
    [sym_minus] = ACTIONS(67),
    [sym_paren_left] = ACTIONS(69),
    [sym_star] = ACTIONS(67),
    [sym_tilde] = ACTIONS(67),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym__blankspace] = ACTIONS(5),
    [sym__block_comment] = ACTIONS(5),
  },
  [12] = {
    [sym_bool_literal] = STATE(108),
    [sym_int_literal] = STATE(108),
    [sym_float_literal] = STATE(108),
    [sym_decimal_float_literal] = STATE(110),
    [sym_hex_float_literal] = STATE(110),
    [sym_const_literal] = STATE(111),
    [sym_array_type_decl] = STATE(243),
    [sym_texture_sampler_types] = STATE(243),
    [sym_sampler_type] = STATE(233),
    [sym_sampled_texture_type] = STATE(424),
    [sym_multisampled_texture_type] = STATE(424),
    [sym_storage_texture_type] = STATE(423),
    [sym_depth_texture_type] = STATE(233),
    [sym_type_decl_without_ident] = STATE(422),
    [sym_vec_prefix] = STATE(314),
    [sym_mat_prefix] = STATE(314),
    [sym_primary_expression] = STATE(98),
    [sym_callable] = STATE(312),
    [sym_paren_expression] = STATE(111),
    [sym_unary_expression] = STATE(114),
    [sym_singular_expression] = STATE(118),
    [sym_multiplicative_expression] = STATE(164),
    [sym_additive_expression] = STATE(189),
    [sym_shift_expression] = STATE(200),
    [sym_relational_expression] = STATE(240),
    [sym_short_circuit_and_expression] = STATE(419),
    [sym_short_circuit_or_expression] = STATE(418),
    [sym_binary_or_expression] = STATE(417),
    [sym_binary_and_expression] = STATE(416),
    [sym_binary_xor_expression] = STATE(414),
    [sym_bitwise_expression] = STATE(257),
    [sym_expression] = STATE(342),
    [sym__comment] = STATE(12),
    [aux_sym_argument_expression_list_repeat1] = STATE(9),
    [sym_ident] = ACTIONS(29),
    [aux_sym_int_literal_token1] = ACTIONS(31),
    [aux_sym_int_literal_token2] = ACTIONS(31),
    [aux_sym_int_literal_token3] = ACTIONS(31),
    [aux_sym_decimal_float_literal_token1] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token2] = ACTIONS(35),
    [aux_sym_decimal_float_literal_token3] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token4] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token5] = ACTIONS(33),
    [aux_sym_hex_float_literal_token1] = ACTIONS(37),
    [aux_sym_hex_float_literal_token2] = ACTIONS(39),
    [aux_sym_hex_float_literal_token3] = ACTIONS(37),
    [sym_array] = ACTIONS(41),
    [sym_atomic] = ACTIONS(43),
    [sym_bool] = ACTIONS(45),
    [sym_float32] = ACTIONS(45),
    [sym_float16] = ACTIONS(45),
    [sym_int32] = ACTIONS(45),
    [sym_mat2x2] = ACTIONS(47),
    [sym_mat2x3] = ACTIONS(47),
    [sym_mat2x4] = ACTIONS(47),
    [sym_mat3x2] = ACTIONS(47),
    [sym_mat3x3] = ACTIONS(47),
    [sym_mat3x4] = ACTIONS(47),
    [sym_mat4x2] = ACTIONS(47),
    [sym_mat4x3] = ACTIONS(47),
    [sym_mat4x4] = ACTIONS(47),
    [sym_pointer] = ACTIONS(49),
    [sym_sampler] = ACTIONS(51),
    [sym_sampler_comparison] = ACTIONS(51),
    [sym_texture_1d] = ACTIONS(53),
    [sym_texture_2d] = ACTIONS(53),
    [sym_texture_2d_array] = ACTIONS(53),
    [sym_texture_3d] = ACTIONS(53),
    [sym_texture_cube] = ACTIONS(53),
    [sym_texture_cube_array] = ACTIONS(53),
    [sym_texture_multisampled_2d] = ACTIONS(55),
    [sym_texture_storage_1d] = ACTIONS(57),
    [sym_texture_storage_2d] = ACTIONS(57),
    [sym_texture_storage_2d_array] = ACTIONS(57),
    [sym_texture_storage_3d] = ACTIONS(57),
    [sym_texture_depth_2d] = ACTIONS(59),
    [sym_texture_depth_2d_array] = ACTIONS(59),
    [sym_texture_depth_cube] = ACTIONS(59),
    [sym_texture_depth_cube_array] = ACTIONS(59),
    [sym_texture_depth_multisampled_2d] = ACTIONS(59),
    [sym_uint32] = ACTIONS(45),
    [sym_vec2] = ACTIONS(61),
    [sym_vec3] = ACTIONS(61),
    [sym_vec4] = ACTIONS(61),
    [sym_bitcast] = ACTIONS(63),
    [sym_false] = ACTIONS(65),
    [sym_true] = ACTIONS(65),
    [sym_and] = ACTIONS(67),
    [sym_bang] = ACTIONS(67),
    [sym_minus] = ACTIONS(67),
    [sym_paren_left] = ACTIONS(69),
    [sym_star] = ACTIONS(67),
    [sym_tilde] = ACTIONS(67),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym__blankspace] = ACTIONS(5),
    [sym__block_comment] = ACTIONS(5),
  },
  [13] = {
    [sym_bool_literal] = STATE(108),
    [sym_int_literal] = STATE(108),
    [sym_float_literal] = STATE(108),
    [sym_decimal_float_literal] = STATE(110),
    [sym_hex_float_literal] = STATE(110),
    [sym_const_literal] = STATE(111),
    [sym_array_type_decl] = STATE(243),
    [sym_texture_sampler_types] = STATE(243),
    [sym_sampler_type] = STATE(233),
    [sym_sampled_texture_type] = STATE(424),
    [sym_multisampled_texture_type] = STATE(424),
    [sym_storage_texture_type] = STATE(423),
    [sym_depth_texture_type] = STATE(233),
    [sym_type_decl_without_ident] = STATE(422),
    [sym_vec_prefix] = STATE(314),
    [sym_mat_prefix] = STATE(314),
    [sym_primary_expression] = STATE(98),
    [sym_callable] = STATE(312),
    [sym_paren_expression] = STATE(111),
    [sym_unary_expression] = STATE(114),
    [sym_singular_expression] = STATE(118),
    [sym_multiplicative_expression] = STATE(164),
    [sym_additive_expression] = STATE(189),
    [sym_shift_expression] = STATE(200),
    [sym_relational_expression] = STATE(240),
    [sym_short_circuit_and_expression] = STATE(419),
    [sym_short_circuit_or_expression] = STATE(418),
    [sym_binary_or_expression] = STATE(417),
    [sym_binary_and_expression] = STATE(416),
    [sym_binary_xor_expression] = STATE(414),
    [sym_bitwise_expression] = STATE(257),
    [sym_expression] = STATE(337),
    [sym__comment] = STATE(13),
    [aux_sym_argument_expression_list_repeat1] = STATE(9),
    [sym_ident] = ACTIONS(29),
    [aux_sym_int_literal_token1] = ACTIONS(31),
    [aux_sym_int_literal_token2] = ACTIONS(31),
    [aux_sym_int_literal_token3] = ACTIONS(31),
    [aux_sym_decimal_float_literal_token1] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token2] = ACTIONS(35),
    [aux_sym_decimal_float_literal_token3] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token4] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token5] = ACTIONS(33),
    [aux_sym_hex_float_literal_token1] = ACTIONS(37),
    [aux_sym_hex_float_literal_token2] = ACTIONS(39),
    [aux_sym_hex_float_literal_token3] = ACTIONS(37),
    [sym_array] = ACTIONS(41),
    [sym_atomic] = ACTIONS(43),
    [sym_bool] = ACTIONS(45),
    [sym_float32] = ACTIONS(45),
    [sym_float16] = ACTIONS(45),
    [sym_int32] = ACTIONS(45),
    [sym_mat2x2] = ACTIONS(47),
    [sym_mat2x3] = ACTIONS(47),
    [sym_mat2x4] = ACTIONS(47),
    [sym_mat3x2] = ACTIONS(47),
    [sym_mat3x3] = ACTIONS(47),
    [sym_mat3x4] = ACTIONS(47),
    [sym_mat4x2] = ACTIONS(47),
    [sym_mat4x3] = ACTIONS(47),
    [sym_mat4x4] = ACTIONS(47),
    [sym_pointer] = ACTIONS(49),
    [sym_sampler] = ACTIONS(51),
    [sym_sampler_comparison] = ACTIONS(51),
    [sym_texture_1d] = ACTIONS(53),
    [sym_texture_2d] = ACTIONS(53),
    [sym_texture_2d_array] = ACTIONS(53),
    [sym_texture_3d] = ACTIONS(53),
    [sym_texture_cube] = ACTIONS(53),
    [sym_texture_cube_array] = ACTIONS(53),
    [sym_texture_multisampled_2d] = ACTIONS(55),
    [sym_texture_storage_1d] = ACTIONS(57),
    [sym_texture_storage_2d] = ACTIONS(57),
    [sym_texture_storage_2d_array] = ACTIONS(57),
    [sym_texture_storage_3d] = ACTIONS(57),
    [sym_texture_depth_2d] = ACTIONS(59),
    [sym_texture_depth_2d_array] = ACTIONS(59),
    [sym_texture_depth_cube] = ACTIONS(59),
    [sym_texture_depth_cube_array] = ACTIONS(59),
    [sym_texture_depth_multisampled_2d] = ACTIONS(59),
    [sym_uint32] = ACTIONS(45),
    [sym_vec2] = ACTIONS(61),
    [sym_vec3] = ACTIONS(61),
    [sym_vec4] = ACTIONS(61),
    [sym_bitcast] = ACTIONS(63),
    [sym_false] = ACTIONS(65),
    [sym_true] = ACTIONS(65),
    [sym_and] = ACTIONS(67),
    [sym_bang] = ACTIONS(67),
    [sym_minus] = ACTIONS(67),
    [sym_paren_left] = ACTIONS(69),
    [sym_star] = ACTIONS(67),
    [sym_tilde] = ACTIONS(67),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym__blankspace] = ACTIONS(5),
    [sym__block_comment] = ACTIONS(5),
  },
  [14] = {
    [sym_bool_literal] = STATE(108),
    [sym_int_literal] = STATE(108),
    [sym_float_literal] = STATE(108),
    [sym_decimal_float_literal] = STATE(110),
    [sym_hex_float_literal] = STATE(110),
    [sym_const_literal] = STATE(111),
    [sym_array_type_decl] = STATE(243),
    [sym_texture_sampler_types] = STATE(243),
    [sym_sampler_type] = STATE(233),
    [sym_sampled_texture_type] = STATE(424),
    [sym_multisampled_texture_type] = STATE(424),
    [sym_storage_texture_type] = STATE(423),
    [sym_depth_texture_type] = STATE(233),
    [sym_type_decl_without_ident] = STATE(422),
    [sym_vec_prefix] = STATE(314),
    [sym_mat_prefix] = STATE(314),
    [sym_primary_expression] = STATE(98),
    [sym_callable] = STATE(312),
    [sym_paren_expression] = STATE(111),
    [sym_unary_expression] = STATE(114),
    [sym_singular_expression] = STATE(118),
    [sym_multiplicative_expression] = STATE(164),
    [sym_additive_expression] = STATE(189),
    [sym_shift_expression] = STATE(200),
    [sym_relational_expression] = STATE(240),
    [sym_short_circuit_and_expression] = STATE(419),
    [sym_short_circuit_or_expression] = STATE(418),
    [sym_binary_or_expression] = STATE(417),
    [sym_binary_and_expression] = STATE(416),
    [sym_binary_xor_expression] = STATE(414),
    [sym_bitwise_expression] = STATE(257),
    [sym_expression] = STATE(427),
    [sym__comment] = STATE(14),
    [sym_ident] = ACTIONS(29),
    [aux_sym_int_literal_token1] = ACTIONS(31),
    [aux_sym_int_literal_token2] = ACTIONS(31),
    [aux_sym_int_literal_token3] = ACTIONS(31),
    [aux_sym_decimal_float_literal_token1] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token2] = ACTIONS(35),
    [aux_sym_decimal_float_literal_token3] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token4] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token5] = ACTIONS(33),
    [aux_sym_hex_float_literal_token1] = ACTIONS(37),
    [aux_sym_hex_float_literal_token2] = ACTIONS(39),
    [aux_sym_hex_float_literal_token3] = ACTIONS(37),
    [sym_array] = ACTIONS(41),
    [sym_atomic] = ACTIONS(43),
    [sym_bool] = ACTIONS(45),
    [sym_float32] = ACTIONS(45),
    [sym_float16] = ACTIONS(45),
    [sym_int32] = ACTIONS(45),
    [sym_mat2x2] = ACTIONS(47),
    [sym_mat2x3] = ACTIONS(47),
    [sym_mat2x4] = ACTIONS(47),
    [sym_mat3x2] = ACTIONS(47),
    [sym_mat3x3] = ACTIONS(47),
    [sym_mat3x4] = ACTIONS(47),
    [sym_mat4x2] = ACTIONS(47),
    [sym_mat4x3] = ACTIONS(47),
    [sym_mat4x4] = ACTIONS(47),
    [sym_pointer] = ACTIONS(49),
    [sym_sampler] = ACTIONS(51),
    [sym_sampler_comparison] = ACTIONS(51),
    [sym_texture_1d] = ACTIONS(53),
    [sym_texture_2d] = ACTIONS(53),
    [sym_texture_2d_array] = ACTIONS(53),
    [sym_texture_3d] = ACTIONS(53),
    [sym_texture_cube] = ACTIONS(53),
    [sym_texture_cube_array] = ACTIONS(53),
    [sym_texture_multisampled_2d] = ACTIONS(55),
    [sym_texture_storage_1d] = ACTIONS(57),
    [sym_texture_storage_2d] = ACTIONS(57),
    [sym_texture_storage_2d_array] = ACTIONS(57),
    [sym_texture_storage_3d] = ACTIONS(57),
    [sym_texture_depth_2d] = ACTIONS(59),
    [sym_texture_depth_2d_array] = ACTIONS(59),
    [sym_texture_depth_cube] = ACTIONS(59),
    [sym_texture_depth_cube_array] = ACTIONS(59),
    [sym_texture_depth_multisampled_2d] = ACTIONS(59),
    [sym_uint32] = ACTIONS(45),
    [sym_vec2] = ACTIONS(61),
    [sym_vec3] = ACTIONS(61),
    [sym_vec4] = ACTIONS(61),
    [sym_bitcast] = ACTIONS(63),
    [sym_false] = ACTIONS(65),
    [sym_true] = ACTIONS(65),
    [sym_and] = ACTIONS(67),
    [sym_bang] = ACTIONS(67),
    [sym_minus] = ACTIONS(67),
    [sym_paren_left] = ACTIONS(69),
    [sym_semicolon] = ACTIONS(148),
    [sym_star] = ACTIONS(67),
    [sym_tilde] = ACTIONS(67),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym__blankspace] = ACTIONS(5),
    [sym__block_comment] = ACTIONS(5),
  },
  [15] = {
    [sym_bool_literal] = STATE(108),
    [sym_int_literal] = STATE(108),
    [sym_float_literal] = STATE(108),
    [sym_decimal_float_literal] = STATE(110),
    [sym_hex_float_literal] = STATE(110),
    [sym_const_literal] = STATE(111),
    [sym_array_type_decl] = STATE(243),
    [sym_texture_sampler_types] = STATE(243),
    [sym_sampler_type] = STATE(233),
    [sym_sampled_texture_type] = STATE(424),
    [sym_multisampled_texture_type] = STATE(424),
    [sym_storage_texture_type] = STATE(423),
    [sym_depth_texture_type] = STATE(233),
    [sym_type_decl_without_ident] = STATE(422),
    [sym_vec_prefix] = STATE(314),
    [sym_mat_prefix] = STATE(314),
    [sym_primary_expression] = STATE(98),
    [sym_callable] = STATE(312),
    [sym_paren_expression] = STATE(111),
    [sym_unary_expression] = STATE(114),
    [sym_singular_expression] = STATE(118),
    [sym_multiplicative_expression] = STATE(164),
    [sym_additive_expression] = STATE(189),
    [sym_shift_expression] = STATE(200),
    [sym_relational_expression] = STATE(240),
    [sym_short_circuit_and_expression] = STATE(419),
    [sym_short_circuit_or_expression] = STATE(418),
    [sym_binary_or_expression] = STATE(417),
    [sym_binary_and_expression] = STATE(416),
    [sym_binary_xor_expression] = STATE(414),
    [sym_bitwise_expression] = STATE(257),
    [sym_expression] = STATE(306),
    [sym__comment] = STATE(15),
    [sym_ident] = ACTIONS(29),
    [aux_sym_int_literal_token1] = ACTIONS(31),
    [aux_sym_int_literal_token2] = ACTIONS(31),
    [aux_sym_int_literal_token3] = ACTIONS(31),
    [aux_sym_decimal_float_literal_token1] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token2] = ACTIONS(35),
    [aux_sym_decimal_float_literal_token3] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token4] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token5] = ACTIONS(33),
    [aux_sym_hex_float_literal_token1] = ACTIONS(37),
    [aux_sym_hex_float_literal_token2] = ACTIONS(39),
    [aux_sym_hex_float_literal_token3] = ACTIONS(37),
    [sym_array] = ACTIONS(41),
    [sym_atomic] = ACTIONS(43),
    [sym_bool] = ACTIONS(45),
    [sym_float32] = ACTIONS(45),
    [sym_float16] = ACTIONS(45),
    [sym_int32] = ACTIONS(45),
    [sym_mat2x2] = ACTIONS(47),
    [sym_mat2x3] = ACTIONS(47),
    [sym_mat2x4] = ACTIONS(47),
    [sym_mat3x2] = ACTIONS(47),
    [sym_mat3x3] = ACTIONS(47),
    [sym_mat3x4] = ACTIONS(47),
    [sym_mat4x2] = ACTIONS(47),
    [sym_mat4x3] = ACTIONS(47),
    [sym_mat4x4] = ACTIONS(47),
    [sym_pointer] = ACTIONS(49),
    [sym_sampler] = ACTIONS(51),
    [sym_sampler_comparison] = ACTIONS(51),
    [sym_texture_1d] = ACTIONS(53),
    [sym_texture_2d] = ACTIONS(53),
    [sym_texture_2d_array] = ACTIONS(53),
    [sym_texture_3d] = ACTIONS(53),
    [sym_texture_cube] = ACTIONS(53),
    [sym_texture_cube_array] = ACTIONS(53),
    [sym_texture_multisampled_2d] = ACTIONS(55),
    [sym_texture_storage_1d] = ACTIONS(57),
    [sym_texture_storage_2d] = ACTIONS(57),
    [sym_texture_storage_2d_array] = ACTIONS(57),
    [sym_texture_storage_3d] = ACTIONS(57),
    [sym_texture_depth_2d] = ACTIONS(59),
    [sym_texture_depth_2d_array] = ACTIONS(59),
    [sym_texture_depth_cube] = ACTIONS(59),
    [sym_texture_depth_cube_array] = ACTIONS(59),
    [sym_texture_depth_multisampled_2d] = ACTIONS(59),
    [sym_uint32] = ACTIONS(45),
    [sym_vec2] = ACTIONS(61),
    [sym_vec3] = ACTIONS(61),
    [sym_vec4] = ACTIONS(61),
    [sym_bitcast] = ACTIONS(63),
    [sym_false] = ACTIONS(65),
    [sym_true] = ACTIONS(65),
    [sym_and] = ACTIONS(67),
    [sym_bang] = ACTIONS(67),
    [sym_minus] = ACTIONS(67),
    [sym_paren_left] = ACTIONS(69),
    [sym_star] = ACTIONS(67),
    [sym_tilde] = ACTIONS(67),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym__blankspace] = ACTIONS(5),
    [sym__block_comment] = ACTIONS(5),
  },
  [16] = {
    [sym_bool_literal] = STATE(108),
    [sym_int_literal] = STATE(108),
    [sym_float_literal] = STATE(108),
    [sym_decimal_float_literal] = STATE(110),
    [sym_hex_float_literal] = STATE(110),
    [sym_const_literal] = STATE(111),
    [sym_array_type_decl] = STATE(243),
    [sym_texture_sampler_types] = STATE(243),
    [sym_sampler_type] = STATE(233),
    [sym_sampled_texture_type] = STATE(424),
    [sym_multisampled_texture_type] = STATE(424),
    [sym_storage_texture_type] = STATE(423),
    [sym_depth_texture_type] = STATE(233),
    [sym_type_decl_without_ident] = STATE(422),
    [sym_vec_prefix] = STATE(314),
    [sym_mat_prefix] = STATE(314),
    [sym_primary_expression] = STATE(98),
    [sym_callable] = STATE(312),
    [sym_paren_expression] = STATE(111),
    [sym_unary_expression] = STATE(114),
    [sym_singular_expression] = STATE(118),
    [sym_multiplicative_expression] = STATE(164),
    [sym_additive_expression] = STATE(189),
    [sym_shift_expression] = STATE(200),
    [sym_relational_expression] = STATE(240),
    [sym_short_circuit_and_expression] = STATE(419),
    [sym_short_circuit_or_expression] = STATE(418),
    [sym_binary_or_expression] = STATE(417),
    [sym_binary_and_expression] = STATE(416),
    [sym_binary_xor_expression] = STATE(414),
    [sym_bitwise_expression] = STATE(257),
    [sym_expression] = STATE(456),
    [sym__comment] = STATE(16),
    [sym_ident] = ACTIONS(29),
    [aux_sym_int_literal_token1] = ACTIONS(31),
    [aux_sym_int_literal_token2] = ACTIONS(31),
    [aux_sym_int_literal_token3] = ACTIONS(31),
    [aux_sym_decimal_float_literal_token1] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token2] = ACTIONS(35),
    [aux_sym_decimal_float_literal_token3] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token4] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token5] = ACTIONS(33),
    [aux_sym_hex_float_literal_token1] = ACTIONS(37),
    [aux_sym_hex_float_literal_token2] = ACTIONS(39),
    [aux_sym_hex_float_literal_token3] = ACTIONS(37),
    [sym_array] = ACTIONS(41),
    [sym_atomic] = ACTIONS(43),
    [sym_bool] = ACTIONS(45),
    [sym_float32] = ACTIONS(45),
    [sym_float16] = ACTIONS(45),
    [sym_int32] = ACTIONS(45),
    [sym_mat2x2] = ACTIONS(47),
    [sym_mat2x3] = ACTIONS(47),
    [sym_mat2x4] = ACTIONS(47),
    [sym_mat3x2] = ACTIONS(47),
    [sym_mat3x3] = ACTIONS(47),
    [sym_mat3x4] = ACTIONS(47),
    [sym_mat4x2] = ACTIONS(47),
    [sym_mat4x3] = ACTIONS(47),
    [sym_mat4x4] = ACTIONS(47),
    [sym_pointer] = ACTIONS(49),
    [sym_sampler] = ACTIONS(51),
    [sym_sampler_comparison] = ACTIONS(51),
    [sym_texture_1d] = ACTIONS(53),
    [sym_texture_2d] = ACTIONS(53),
    [sym_texture_2d_array] = ACTIONS(53),
    [sym_texture_3d] = ACTIONS(53),
    [sym_texture_cube] = ACTIONS(53),
    [sym_texture_cube_array] = ACTIONS(53),
    [sym_texture_multisampled_2d] = ACTIONS(55),
    [sym_texture_storage_1d] = ACTIONS(57),
    [sym_texture_storage_2d] = ACTIONS(57),
    [sym_texture_storage_2d_array] = ACTIONS(57),
    [sym_texture_storage_3d] = ACTIONS(57),
    [sym_texture_depth_2d] = ACTIONS(59),
    [sym_texture_depth_2d_array] = ACTIONS(59),
    [sym_texture_depth_cube] = ACTIONS(59),
    [sym_texture_depth_cube_array] = ACTIONS(59),
    [sym_texture_depth_multisampled_2d] = ACTIONS(59),
    [sym_uint32] = ACTIONS(45),
    [sym_vec2] = ACTIONS(61),
    [sym_vec3] = ACTIONS(61),
    [sym_vec4] = ACTIONS(61),
    [sym_bitcast] = ACTIONS(63),
    [sym_false] = ACTIONS(65),
    [sym_true] = ACTIONS(65),
    [sym_and] = ACTIONS(67),
    [sym_bang] = ACTIONS(67),
    [sym_minus] = ACTIONS(67),
    [sym_paren_left] = ACTIONS(69),
    [sym_star] = ACTIONS(67),
    [sym_tilde] = ACTIONS(67),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym__blankspace] = ACTIONS(5),
    [sym__block_comment] = ACTIONS(5),
  },
  [17] = {
    [sym_bool_literal] = STATE(108),
    [sym_int_literal] = STATE(108),
    [sym_float_literal] = STATE(108),
    [sym_decimal_float_literal] = STATE(110),
    [sym_hex_float_literal] = STATE(110),
    [sym_const_literal] = STATE(111),
    [sym_array_type_decl] = STATE(243),
    [sym_texture_sampler_types] = STATE(243),
    [sym_sampler_type] = STATE(233),
    [sym_sampled_texture_type] = STATE(424),
    [sym_multisampled_texture_type] = STATE(424),
    [sym_storage_texture_type] = STATE(423),
    [sym_depth_texture_type] = STATE(233),
    [sym_type_decl_without_ident] = STATE(422),
    [sym_vec_prefix] = STATE(314),
    [sym_mat_prefix] = STATE(314),
    [sym_primary_expression] = STATE(98),
    [sym_callable] = STATE(312),
    [sym_paren_expression] = STATE(111),
    [sym_unary_expression] = STATE(114),
    [sym_singular_expression] = STATE(118),
    [sym_multiplicative_expression] = STATE(164),
    [sym_additive_expression] = STATE(189),
    [sym_shift_expression] = STATE(200),
    [sym_relational_expression] = STATE(240),
    [sym_short_circuit_and_expression] = STATE(419),
    [sym_short_circuit_or_expression] = STATE(418),
    [sym_binary_or_expression] = STATE(417),
    [sym_binary_and_expression] = STATE(416),
    [sym_binary_xor_expression] = STATE(414),
    [sym_bitwise_expression] = STATE(257),
    [sym_expression] = STATE(449),
    [sym__comment] = STATE(17),
    [sym_ident] = ACTIONS(29),
    [aux_sym_int_literal_token1] = ACTIONS(31),
    [aux_sym_int_literal_token2] = ACTIONS(31),
    [aux_sym_int_literal_token3] = ACTIONS(31),
    [aux_sym_decimal_float_literal_token1] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token2] = ACTIONS(35),
    [aux_sym_decimal_float_literal_token3] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token4] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token5] = ACTIONS(33),
    [aux_sym_hex_float_literal_token1] = ACTIONS(37),
    [aux_sym_hex_float_literal_token2] = ACTIONS(39),
    [aux_sym_hex_float_literal_token3] = ACTIONS(37),
    [sym_array] = ACTIONS(41),
    [sym_atomic] = ACTIONS(43),
    [sym_bool] = ACTIONS(45),
    [sym_float32] = ACTIONS(45),
    [sym_float16] = ACTIONS(45),
    [sym_int32] = ACTIONS(45),
    [sym_mat2x2] = ACTIONS(47),
    [sym_mat2x3] = ACTIONS(47),
    [sym_mat2x4] = ACTIONS(47),
    [sym_mat3x2] = ACTIONS(47),
    [sym_mat3x3] = ACTIONS(47),
    [sym_mat3x4] = ACTIONS(47),
    [sym_mat4x2] = ACTIONS(47),
    [sym_mat4x3] = ACTIONS(47),
    [sym_mat4x4] = ACTIONS(47),
    [sym_pointer] = ACTIONS(49),
    [sym_sampler] = ACTIONS(51),
    [sym_sampler_comparison] = ACTIONS(51),
    [sym_texture_1d] = ACTIONS(53),
    [sym_texture_2d] = ACTIONS(53),
    [sym_texture_2d_array] = ACTIONS(53),
    [sym_texture_3d] = ACTIONS(53),
    [sym_texture_cube] = ACTIONS(53),
    [sym_texture_cube_array] = ACTIONS(53),
    [sym_texture_multisampled_2d] = ACTIONS(55),
    [sym_texture_storage_1d] = ACTIONS(57),
    [sym_texture_storage_2d] = ACTIONS(57),
    [sym_texture_storage_2d_array] = ACTIONS(57),
    [sym_texture_storage_3d] = ACTIONS(57),
    [sym_texture_depth_2d] = ACTIONS(59),
    [sym_texture_depth_2d_array] = ACTIONS(59),
    [sym_texture_depth_cube] = ACTIONS(59),
    [sym_texture_depth_cube_array] = ACTIONS(59),
    [sym_texture_depth_multisampled_2d] = ACTIONS(59),
    [sym_uint32] = ACTIONS(45),
    [sym_vec2] = ACTIONS(61),
    [sym_vec3] = ACTIONS(61),
    [sym_vec4] = ACTIONS(61),
    [sym_bitcast] = ACTIONS(63),
    [sym_false] = ACTIONS(65),
    [sym_true] = ACTIONS(65),
    [sym_and] = ACTIONS(67),
    [sym_bang] = ACTIONS(67),
    [sym_minus] = ACTIONS(67),
    [sym_paren_left] = ACTIONS(69),
    [sym_star] = ACTIONS(67),
    [sym_tilde] = ACTIONS(67),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym__blankspace] = ACTIONS(5),
    [sym__block_comment] = ACTIONS(5),
  },
  [18] = {
    [sym_bool_literal] = STATE(108),
    [sym_int_literal] = STATE(108),
    [sym_float_literal] = STATE(108),
    [sym_decimal_float_literal] = STATE(110),
    [sym_hex_float_literal] = STATE(110),
    [sym_const_literal] = STATE(111),
    [sym_array_type_decl] = STATE(243),
    [sym_texture_sampler_types] = STATE(243),
    [sym_sampler_type] = STATE(233),
    [sym_sampled_texture_type] = STATE(424),
    [sym_multisampled_texture_type] = STATE(424),
    [sym_storage_texture_type] = STATE(423),
    [sym_depth_texture_type] = STATE(233),
    [sym_type_decl_without_ident] = STATE(422),
    [sym_vec_prefix] = STATE(314),
    [sym_mat_prefix] = STATE(314),
    [sym_primary_expression] = STATE(98),
    [sym_callable] = STATE(312),
    [sym_paren_expression] = STATE(111),
    [sym_unary_expression] = STATE(114),
    [sym_singular_expression] = STATE(118),
    [sym_multiplicative_expression] = STATE(164),
    [sym_additive_expression] = STATE(189),
    [sym_shift_expression] = STATE(200),
    [sym_relational_expression] = STATE(240),
    [sym_short_circuit_and_expression] = STATE(419),
    [sym_short_circuit_or_expression] = STATE(418),
    [sym_binary_or_expression] = STATE(417),
    [sym_binary_and_expression] = STATE(416),
    [sym_binary_xor_expression] = STATE(414),
    [sym_bitwise_expression] = STATE(257),
    [sym_expression] = STATE(446),
    [sym__comment] = STATE(18),
    [sym_ident] = ACTIONS(29),
    [aux_sym_int_literal_token1] = ACTIONS(31),
    [aux_sym_int_literal_token2] = ACTIONS(31),
    [aux_sym_int_literal_token3] = ACTIONS(31),
    [aux_sym_decimal_float_literal_token1] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token2] = ACTIONS(35),
    [aux_sym_decimal_float_literal_token3] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token4] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token5] = ACTIONS(33),
    [aux_sym_hex_float_literal_token1] = ACTIONS(37),
    [aux_sym_hex_float_literal_token2] = ACTIONS(39),
    [aux_sym_hex_float_literal_token3] = ACTIONS(37),
    [sym_array] = ACTIONS(41),
    [sym_atomic] = ACTIONS(43),
    [sym_bool] = ACTIONS(45),
    [sym_float32] = ACTIONS(45),
    [sym_float16] = ACTIONS(45),
    [sym_int32] = ACTIONS(45),
    [sym_mat2x2] = ACTIONS(47),
    [sym_mat2x3] = ACTIONS(47),
    [sym_mat2x4] = ACTIONS(47),
    [sym_mat3x2] = ACTIONS(47),
    [sym_mat3x3] = ACTIONS(47),
    [sym_mat3x4] = ACTIONS(47),
    [sym_mat4x2] = ACTIONS(47),
    [sym_mat4x3] = ACTIONS(47),
    [sym_mat4x4] = ACTIONS(47),
    [sym_pointer] = ACTIONS(49),
    [sym_sampler] = ACTIONS(51),
    [sym_sampler_comparison] = ACTIONS(51),
    [sym_texture_1d] = ACTIONS(53),
    [sym_texture_2d] = ACTIONS(53),
    [sym_texture_2d_array] = ACTIONS(53),
    [sym_texture_3d] = ACTIONS(53),
    [sym_texture_cube] = ACTIONS(53),
    [sym_texture_cube_array] = ACTIONS(53),
    [sym_texture_multisampled_2d] = ACTIONS(55),
    [sym_texture_storage_1d] = ACTIONS(57),
    [sym_texture_storage_2d] = ACTIONS(57),
    [sym_texture_storage_2d_array] = ACTIONS(57),
    [sym_texture_storage_3d] = ACTIONS(57),
    [sym_texture_depth_2d] = ACTIONS(59),
    [sym_texture_depth_2d_array] = ACTIONS(59),
    [sym_texture_depth_cube] = ACTIONS(59),
    [sym_texture_depth_cube_array] = ACTIONS(59),
    [sym_texture_depth_multisampled_2d] = ACTIONS(59),
    [sym_uint32] = ACTIONS(45),
    [sym_vec2] = ACTIONS(61),
    [sym_vec3] = ACTIONS(61),
    [sym_vec4] = ACTIONS(61),
    [sym_bitcast] = ACTIONS(63),
    [sym_false] = ACTIONS(65),
    [sym_true] = ACTIONS(65),
    [sym_and] = ACTIONS(67),
    [sym_bang] = ACTIONS(67),
    [sym_minus] = ACTIONS(67),
    [sym_paren_left] = ACTIONS(69),
    [sym_star] = ACTIONS(67),
    [sym_tilde] = ACTIONS(67),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym__blankspace] = ACTIONS(5),
    [sym__block_comment] = ACTIONS(5),
  },
  [19] = {
    [sym_bool_literal] = STATE(108),
    [sym_int_literal] = STATE(108),
    [sym_float_literal] = STATE(108),
    [sym_decimal_float_literal] = STATE(110),
    [sym_hex_float_literal] = STATE(110),
    [sym_const_literal] = STATE(111),
    [sym_array_type_decl] = STATE(243),
    [sym_texture_sampler_types] = STATE(243),
    [sym_sampler_type] = STATE(233),
    [sym_sampled_texture_type] = STATE(424),
    [sym_multisampled_texture_type] = STATE(424),
    [sym_storage_texture_type] = STATE(423),
    [sym_depth_texture_type] = STATE(233),
    [sym_type_decl_without_ident] = STATE(422),
    [sym_vec_prefix] = STATE(314),
    [sym_mat_prefix] = STATE(314),
    [sym_primary_expression] = STATE(98),
    [sym_callable] = STATE(312),
    [sym_paren_expression] = STATE(111),
    [sym_unary_expression] = STATE(114),
    [sym_singular_expression] = STATE(118),
    [sym_multiplicative_expression] = STATE(164),
    [sym_additive_expression] = STATE(189),
    [sym_shift_expression] = STATE(200),
    [sym_relational_expression] = STATE(240),
    [sym_short_circuit_and_expression] = STATE(419),
    [sym_short_circuit_or_expression] = STATE(418),
    [sym_binary_or_expression] = STATE(417),
    [sym_binary_and_expression] = STATE(416),
    [sym_binary_xor_expression] = STATE(414),
    [sym_bitwise_expression] = STATE(257),
    [sym_expression] = STATE(284),
    [sym__comment] = STATE(19),
    [sym_ident] = ACTIONS(29),
    [aux_sym_int_literal_token1] = ACTIONS(31),
    [aux_sym_int_literal_token2] = ACTIONS(31),
    [aux_sym_int_literal_token3] = ACTIONS(31),
    [aux_sym_decimal_float_literal_token1] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token2] = ACTIONS(35),
    [aux_sym_decimal_float_literal_token3] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token4] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token5] = ACTIONS(33),
    [aux_sym_hex_float_literal_token1] = ACTIONS(37),
    [aux_sym_hex_float_literal_token2] = ACTIONS(39),
    [aux_sym_hex_float_literal_token3] = ACTIONS(37),
    [sym_array] = ACTIONS(41),
    [sym_atomic] = ACTIONS(43),
    [sym_bool] = ACTIONS(45),
    [sym_float32] = ACTIONS(45),
    [sym_float16] = ACTIONS(45),
    [sym_int32] = ACTIONS(45),
    [sym_mat2x2] = ACTIONS(47),
    [sym_mat2x3] = ACTIONS(47),
    [sym_mat2x4] = ACTIONS(47),
    [sym_mat3x2] = ACTIONS(47),
    [sym_mat3x3] = ACTIONS(47),
    [sym_mat3x4] = ACTIONS(47),
    [sym_mat4x2] = ACTIONS(47),
    [sym_mat4x3] = ACTIONS(47),
    [sym_mat4x4] = ACTIONS(47),
    [sym_pointer] = ACTIONS(49),
    [sym_sampler] = ACTIONS(51),
    [sym_sampler_comparison] = ACTIONS(51),
    [sym_texture_1d] = ACTIONS(53),
    [sym_texture_2d] = ACTIONS(53),
    [sym_texture_2d_array] = ACTIONS(53),
    [sym_texture_3d] = ACTIONS(53),
    [sym_texture_cube] = ACTIONS(53),
    [sym_texture_cube_array] = ACTIONS(53),
    [sym_texture_multisampled_2d] = ACTIONS(55),
    [sym_texture_storage_1d] = ACTIONS(57),
    [sym_texture_storage_2d] = ACTIONS(57),
    [sym_texture_storage_2d_array] = ACTIONS(57),
    [sym_texture_storage_3d] = ACTIONS(57),
    [sym_texture_depth_2d] = ACTIONS(59),
    [sym_texture_depth_2d_array] = ACTIONS(59),
    [sym_texture_depth_cube] = ACTIONS(59),
    [sym_texture_depth_cube_array] = ACTIONS(59),
    [sym_texture_depth_multisampled_2d] = ACTIONS(59),
    [sym_uint32] = ACTIONS(45),
    [sym_vec2] = ACTIONS(61),
    [sym_vec3] = ACTIONS(61),
    [sym_vec4] = ACTIONS(61),
    [sym_bitcast] = ACTIONS(63),
    [sym_false] = ACTIONS(65),
    [sym_true] = ACTIONS(65),
    [sym_and] = ACTIONS(67),
    [sym_bang] = ACTIONS(67),
    [sym_minus] = ACTIONS(67),
    [sym_paren_left] = ACTIONS(69),
    [sym_star] = ACTIONS(67),
    [sym_tilde] = ACTIONS(67),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym__blankspace] = ACTIONS(5),
    [sym__block_comment] = ACTIONS(5),
  },
  [20] = {
    [sym_bool_literal] = STATE(108),
    [sym_int_literal] = STATE(108),
    [sym_float_literal] = STATE(108),
    [sym_decimal_float_literal] = STATE(110),
    [sym_hex_float_literal] = STATE(110),
    [sym_const_literal] = STATE(111),
    [sym_array_type_decl] = STATE(243),
    [sym_texture_sampler_types] = STATE(243),
    [sym_sampler_type] = STATE(233),
    [sym_sampled_texture_type] = STATE(424),
    [sym_multisampled_texture_type] = STATE(424),
    [sym_storage_texture_type] = STATE(423),
    [sym_depth_texture_type] = STATE(233),
    [sym_type_decl_without_ident] = STATE(422),
    [sym_vec_prefix] = STATE(314),
    [sym_mat_prefix] = STATE(314),
    [sym_primary_expression] = STATE(98),
    [sym_callable] = STATE(312),
    [sym_paren_expression] = STATE(111),
    [sym_unary_expression] = STATE(114),
    [sym_singular_expression] = STATE(118),
    [sym_multiplicative_expression] = STATE(164),
    [sym_additive_expression] = STATE(189),
    [sym_shift_expression] = STATE(200),
    [sym_relational_expression] = STATE(240),
    [sym_short_circuit_and_expression] = STATE(419),
    [sym_short_circuit_or_expression] = STATE(418),
    [sym_binary_or_expression] = STATE(417),
    [sym_binary_and_expression] = STATE(416),
    [sym_binary_xor_expression] = STATE(414),
    [sym_bitwise_expression] = STATE(257),
    [sym_expression] = STATE(390),
    [sym__comment] = STATE(20),
    [sym_ident] = ACTIONS(29),
    [aux_sym_int_literal_token1] = ACTIONS(31),
    [aux_sym_int_literal_token2] = ACTIONS(31),
    [aux_sym_int_literal_token3] = ACTIONS(31),
    [aux_sym_decimal_float_literal_token1] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token2] = ACTIONS(35),
    [aux_sym_decimal_float_literal_token3] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token4] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token5] = ACTIONS(33),
    [aux_sym_hex_float_literal_token1] = ACTIONS(37),
    [aux_sym_hex_float_literal_token2] = ACTIONS(39),
    [aux_sym_hex_float_literal_token3] = ACTIONS(37),
    [sym_array] = ACTIONS(41),
    [sym_atomic] = ACTIONS(43),
    [sym_bool] = ACTIONS(45),
    [sym_float32] = ACTIONS(45),
    [sym_float16] = ACTIONS(45),
    [sym_int32] = ACTIONS(45),
    [sym_mat2x2] = ACTIONS(47),
    [sym_mat2x3] = ACTIONS(47),
    [sym_mat2x4] = ACTIONS(47),
    [sym_mat3x2] = ACTIONS(47),
    [sym_mat3x3] = ACTIONS(47),
    [sym_mat3x4] = ACTIONS(47),
    [sym_mat4x2] = ACTIONS(47),
    [sym_mat4x3] = ACTIONS(47),
    [sym_mat4x4] = ACTIONS(47),
    [sym_pointer] = ACTIONS(49),
    [sym_sampler] = ACTIONS(51),
    [sym_sampler_comparison] = ACTIONS(51),
    [sym_texture_1d] = ACTIONS(53),
    [sym_texture_2d] = ACTIONS(53),
    [sym_texture_2d_array] = ACTIONS(53),
    [sym_texture_3d] = ACTIONS(53),
    [sym_texture_cube] = ACTIONS(53),
    [sym_texture_cube_array] = ACTIONS(53),
    [sym_texture_multisampled_2d] = ACTIONS(55),
    [sym_texture_storage_1d] = ACTIONS(57),
    [sym_texture_storage_2d] = ACTIONS(57),
    [sym_texture_storage_2d_array] = ACTIONS(57),
    [sym_texture_storage_3d] = ACTIONS(57),
    [sym_texture_depth_2d] = ACTIONS(59),
    [sym_texture_depth_2d_array] = ACTIONS(59),
    [sym_texture_depth_cube] = ACTIONS(59),
    [sym_texture_depth_cube_array] = ACTIONS(59),
    [sym_texture_depth_multisampled_2d] = ACTIONS(59),
    [sym_uint32] = ACTIONS(45),
    [sym_vec2] = ACTIONS(61),
    [sym_vec3] = ACTIONS(61),
    [sym_vec4] = ACTIONS(61),
    [sym_bitcast] = ACTIONS(63),
    [sym_false] = ACTIONS(65),
    [sym_true] = ACTIONS(65),
    [sym_and] = ACTIONS(67),
    [sym_bang] = ACTIONS(67),
    [sym_minus] = ACTIONS(67),
    [sym_paren_left] = ACTIONS(69),
    [sym_star] = ACTIONS(67),
    [sym_tilde] = ACTIONS(67),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym__blankspace] = ACTIONS(5),
    [sym__block_comment] = ACTIONS(5),
  },
  [21] = {
    [sym_bool_literal] = STATE(108),
    [sym_int_literal] = STATE(108),
    [sym_float_literal] = STATE(108),
    [sym_decimal_float_literal] = STATE(110),
    [sym_hex_float_literal] = STATE(110),
    [sym_const_literal] = STATE(111),
    [sym_array_type_decl] = STATE(243),
    [sym_texture_sampler_types] = STATE(243),
    [sym_sampler_type] = STATE(233),
    [sym_sampled_texture_type] = STATE(424),
    [sym_multisampled_texture_type] = STATE(424),
    [sym_storage_texture_type] = STATE(423),
    [sym_depth_texture_type] = STATE(233),
    [sym_type_decl_without_ident] = STATE(422),
    [sym_vec_prefix] = STATE(314),
    [sym_mat_prefix] = STATE(314),
    [sym_primary_expression] = STATE(98),
    [sym_callable] = STATE(312),
    [sym_paren_expression] = STATE(111),
    [sym_unary_expression] = STATE(114),
    [sym_singular_expression] = STATE(118),
    [sym_multiplicative_expression] = STATE(164),
    [sym_additive_expression] = STATE(189),
    [sym_shift_expression] = STATE(200),
    [sym_relational_expression] = STATE(240),
    [sym_short_circuit_and_expression] = STATE(419),
    [sym_short_circuit_or_expression] = STATE(418),
    [sym_binary_or_expression] = STATE(417),
    [sym_binary_and_expression] = STATE(416),
    [sym_binary_xor_expression] = STATE(414),
    [sym_bitwise_expression] = STATE(257),
    [sym_expression] = STATE(438),
    [sym__comment] = STATE(21),
    [sym_ident] = ACTIONS(29),
    [aux_sym_int_literal_token1] = ACTIONS(31),
    [aux_sym_int_literal_token2] = ACTIONS(31),
    [aux_sym_int_literal_token3] = ACTIONS(31),
    [aux_sym_decimal_float_literal_token1] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token2] = ACTIONS(35),
    [aux_sym_decimal_float_literal_token3] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token4] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token5] = ACTIONS(33),
    [aux_sym_hex_float_literal_token1] = ACTIONS(37),
    [aux_sym_hex_float_literal_token2] = ACTIONS(39),
    [aux_sym_hex_float_literal_token3] = ACTIONS(37),
    [sym_array] = ACTIONS(41),
    [sym_atomic] = ACTIONS(43),
    [sym_bool] = ACTIONS(45),
    [sym_float32] = ACTIONS(45),
    [sym_float16] = ACTIONS(45),
    [sym_int32] = ACTIONS(45),
    [sym_mat2x2] = ACTIONS(47),
    [sym_mat2x3] = ACTIONS(47),
    [sym_mat2x4] = ACTIONS(47),
    [sym_mat3x2] = ACTIONS(47),
    [sym_mat3x3] = ACTIONS(47),
    [sym_mat3x4] = ACTIONS(47),
    [sym_mat4x2] = ACTIONS(47),
    [sym_mat4x3] = ACTIONS(47),
    [sym_mat4x4] = ACTIONS(47),
    [sym_pointer] = ACTIONS(49),
    [sym_sampler] = ACTIONS(51),
    [sym_sampler_comparison] = ACTIONS(51),
    [sym_texture_1d] = ACTIONS(53),
    [sym_texture_2d] = ACTIONS(53),
    [sym_texture_2d_array] = ACTIONS(53),
    [sym_texture_3d] = ACTIONS(53),
    [sym_texture_cube] = ACTIONS(53),
    [sym_texture_cube_array] = ACTIONS(53),
    [sym_texture_multisampled_2d] = ACTIONS(55),
    [sym_texture_storage_1d] = ACTIONS(57),
    [sym_texture_storage_2d] = ACTIONS(57),
    [sym_texture_storage_2d_array] = ACTIONS(57),
    [sym_texture_storage_3d] = ACTIONS(57),
    [sym_texture_depth_2d] = ACTIONS(59),
    [sym_texture_depth_2d_array] = ACTIONS(59),
    [sym_texture_depth_cube] = ACTIONS(59),
    [sym_texture_depth_cube_array] = ACTIONS(59),
    [sym_texture_depth_multisampled_2d] = ACTIONS(59),
    [sym_uint32] = ACTIONS(45),
    [sym_vec2] = ACTIONS(61),
    [sym_vec3] = ACTIONS(61),
    [sym_vec4] = ACTIONS(61),
    [sym_bitcast] = ACTIONS(63),
    [sym_false] = ACTIONS(65),
    [sym_true] = ACTIONS(65),
    [sym_and] = ACTIONS(67),
    [sym_bang] = ACTIONS(67),
    [sym_minus] = ACTIONS(67),
    [sym_paren_left] = ACTIONS(69),
    [sym_star] = ACTIONS(67),
    [sym_tilde] = ACTIONS(67),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym__blankspace] = ACTIONS(5),
    [sym__block_comment] = ACTIONS(5),
  },
  [22] = {
    [sym_bool_literal] = STATE(108),
    [sym_int_literal] = STATE(108),
    [sym_float_literal] = STATE(108),
    [sym_decimal_float_literal] = STATE(110),
    [sym_hex_float_literal] = STATE(110),
    [sym_const_literal] = STATE(111),
    [sym_array_type_decl] = STATE(243),
    [sym_texture_sampler_types] = STATE(243),
    [sym_sampler_type] = STATE(233),
    [sym_sampled_texture_type] = STATE(424),
    [sym_multisampled_texture_type] = STATE(424),
    [sym_storage_texture_type] = STATE(423),
    [sym_depth_texture_type] = STATE(233),
    [sym_type_decl_without_ident] = STATE(422),
    [sym_vec_prefix] = STATE(314),
    [sym_mat_prefix] = STATE(314),
    [sym_primary_expression] = STATE(98),
    [sym_callable] = STATE(312),
    [sym_paren_expression] = STATE(111),
    [sym_unary_expression] = STATE(114),
    [sym_singular_expression] = STATE(118),
    [sym_multiplicative_expression] = STATE(164),
    [sym_additive_expression] = STATE(189),
    [sym_shift_expression] = STATE(200),
    [sym_relational_expression] = STATE(240),
    [sym_short_circuit_and_expression] = STATE(419),
    [sym_short_circuit_or_expression] = STATE(418),
    [sym_binary_or_expression] = STATE(417),
    [sym_binary_and_expression] = STATE(416),
    [sym_binary_xor_expression] = STATE(414),
    [sym_bitwise_expression] = STATE(257),
    [sym_expression] = STATE(432),
    [sym__comment] = STATE(22),
    [sym_ident] = ACTIONS(29),
    [aux_sym_int_literal_token1] = ACTIONS(31),
    [aux_sym_int_literal_token2] = ACTIONS(31),
    [aux_sym_int_literal_token3] = ACTIONS(31),
    [aux_sym_decimal_float_literal_token1] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token2] = ACTIONS(35),
    [aux_sym_decimal_float_literal_token3] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token4] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token5] = ACTIONS(33),
    [aux_sym_hex_float_literal_token1] = ACTIONS(37),
    [aux_sym_hex_float_literal_token2] = ACTIONS(39),
    [aux_sym_hex_float_literal_token3] = ACTIONS(37),
    [sym_array] = ACTIONS(41),
    [sym_atomic] = ACTIONS(43),
    [sym_bool] = ACTIONS(45),
    [sym_float32] = ACTIONS(45),
    [sym_float16] = ACTIONS(45),
    [sym_int32] = ACTIONS(45),
    [sym_mat2x2] = ACTIONS(47),
    [sym_mat2x3] = ACTIONS(47),
    [sym_mat2x4] = ACTIONS(47),
    [sym_mat3x2] = ACTIONS(47),
    [sym_mat3x3] = ACTIONS(47),
    [sym_mat3x4] = ACTIONS(47),
    [sym_mat4x2] = ACTIONS(47),
    [sym_mat4x3] = ACTIONS(47),
    [sym_mat4x4] = ACTIONS(47),
    [sym_pointer] = ACTIONS(49),
    [sym_sampler] = ACTIONS(51),
    [sym_sampler_comparison] = ACTIONS(51),
    [sym_texture_1d] = ACTIONS(53),
    [sym_texture_2d] = ACTIONS(53),
    [sym_texture_2d_array] = ACTIONS(53),
    [sym_texture_3d] = ACTIONS(53),
    [sym_texture_cube] = ACTIONS(53),
    [sym_texture_cube_array] = ACTIONS(53),
    [sym_texture_multisampled_2d] = ACTIONS(55),
    [sym_texture_storage_1d] = ACTIONS(57),
    [sym_texture_storage_2d] = ACTIONS(57),
    [sym_texture_storage_2d_array] = ACTIONS(57),
    [sym_texture_storage_3d] = ACTIONS(57),
    [sym_texture_depth_2d] = ACTIONS(59),
    [sym_texture_depth_2d_array] = ACTIONS(59),
    [sym_texture_depth_cube] = ACTIONS(59),
    [sym_texture_depth_cube_array] = ACTIONS(59),
    [sym_texture_depth_multisampled_2d] = ACTIONS(59),
    [sym_uint32] = ACTIONS(45),
    [sym_vec2] = ACTIONS(61),
    [sym_vec3] = ACTIONS(61),
    [sym_vec4] = ACTIONS(61),
    [sym_bitcast] = ACTIONS(63),
    [sym_false] = ACTIONS(65),
    [sym_true] = ACTIONS(65),
    [sym_and] = ACTIONS(67),
    [sym_bang] = ACTIONS(67),
    [sym_minus] = ACTIONS(67),
    [sym_paren_left] = ACTIONS(69),
    [sym_star] = ACTIONS(67),
    [sym_tilde] = ACTIONS(67),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym__blankspace] = ACTIONS(5),
    [sym__block_comment] = ACTIONS(5),
  },
  [23] = {
    [sym_bool_literal] = STATE(108),
    [sym_int_literal] = STATE(108),
    [sym_float_literal] = STATE(108),
    [sym_decimal_float_literal] = STATE(110),
    [sym_hex_float_literal] = STATE(110),
    [sym_const_literal] = STATE(111),
    [sym_array_type_decl] = STATE(243),
    [sym_texture_sampler_types] = STATE(243),
    [sym_sampler_type] = STATE(233),
    [sym_sampled_texture_type] = STATE(424),
    [sym_multisampled_texture_type] = STATE(424),
    [sym_storage_texture_type] = STATE(423),
    [sym_depth_texture_type] = STATE(233),
    [sym_type_decl_without_ident] = STATE(422),
    [sym_vec_prefix] = STATE(314),
    [sym_mat_prefix] = STATE(314),
    [sym_primary_expression] = STATE(98),
    [sym_callable] = STATE(312),
    [sym_paren_expression] = STATE(111),
    [sym_unary_expression] = STATE(114),
    [sym_singular_expression] = STATE(118),
    [sym_multiplicative_expression] = STATE(164),
    [sym_additive_expression] = STATE(189),
    [sym_shift_expression] = STATE(200),
    [sym_relational_expression] = STATE(240),
    [sym_short_circuit_and_expression] = STATE(419),
    [sym_short_circuit_or_expression] = STATE(418),
    [sym_binary_or_expression] = STATE(417),
    [sym_binary_and_expression] = STATE(416),
    [sym_binary_xor_expression] = STATE(414),
    [sym_bitwise_expression] = STATE(257),
    [sym_expression] = STATE(371),
    [sym__comment] = STATE(23),
    [sym_ident] = ACTIONS(29),
    [aux_sym_int_literal_token1] = ACTIONS(31),
    [aux_sym_int_literal_token2] = ACTIONS(31),
    [aux_sym_int_literal_token3] = ACTIONS(31),
    [aux_sym_decimal_float_literal_token1] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token2] = ACTIONS(35),
    [aux_sym_decimal_float_literal_token3] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token4] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token5] = ACTIONS(33),
    [aux_sym_hex_float_literal_token1] = ACTIONS(37),
    [aux_sym_hex_float_literal_token2] = ACTIONS(39),
    [aux_sym_hex_float_literal_token3] = ACTIONS(37),
    [sym_array] = ACTIONS(41),
    [sym_atomic] = ACTIONS(43),
    [sym_bool] = ACTIONS(45),
    [sym_float32] = ACTIONS(45),
    [sym_float16] = ACTIONS(45),
    [sym_int32] = ACTIONS(45),
    [sym_mat2x2] = ACTIONS(47),
    [sym_mat2x3] = ACTIONS(47),
    [sym_mat2x4] = ACTIONS(47),
    [sym_mat3x2] = ACTIONS(47),
    [sym_mat3x3] = ACTIONS(47),
    [sym_mat3x4] = ACTIONS(47),
    [sym_mat4x2] = ACTIONS(47),
    [sym_mat4x3] = ACTIONS(47),
    [sym_mat4x4] = ACTIONS(47),
    [sym_pointer] = ACTIONS(49),
    [sym_sampler] = ACTIONS(51),
    [sym_sampler_comparison] = ACTIONS(51),
    [sym_texture_1d] = ACTIONS(53),
    [sym_texture_2d] = ACTIONS(53),
    [sym_texture_2d_array] = ACTIONS(53),
    [sym_texture_3d] = ACTIONS(53),
    [sym_texture_cube] = ACTIONS(53),
    [sym_texture_cube_array] = ACTIONS(53),
    [sym_texture_multisampled_2d] = ACTIONS(55),
    [sym_texture_storage_1d] = ACTIONS(57),
    [sym_texture_storage_2d] = ACTIONS(57),
    [sym_texture_storage_2d_array] = ACTIONS(57),
    [sym_texture_storage_3d] = ACTIONS(57),
    [sym_texture_depth_2d] = ACTIONS(59),
    [sym_texture_depth_2d_array] = ACTIONS(59),
    [sym_texture_depth_cube] = ACTIONS(59),
    [sym_texture_depth_cube_array] = ACTIONS(59),
    [sym_texture_depth_multisampled_2d] = ACTIONS(59),
    [sym_uint32] = ACTIONS(45),
    [sym_vec2] = ACTIONS(61),
    [sym_vec3] = ACTIONS(61),
    [sym_vec4] = ACTIONS(61),
    [sym_bitcast] = ACTIONS(63),
    [sym_false] = ACTIONS(65),
    [sym_true] = ACTIONS(65),
    [sym_and] = ACTIONS(67),
    [sym_bang] = ACTIONS(67),
    [sym_minus] = ACTIONS(67),
    [sym_paren_left] = ACTIONS(69),
    [sym_star] = ACTIONS(67),
    [sym_tilde] = ACTIONS(67),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym__blankspace] = ACTIONS(5),
    [sym__block_comment] = ACTIONS(5),
  },
  [24] = {
    [sym_bool_literal] = STATE(108),
    [sym_int_literal] = STATE(108),
    [sym_float_literal] = STATE(108),
    [sym_decimal_float_literal] = STATE(110),
    [sym_hex_float_literal] = STATE(110),
    [sym_const_literal] = STATE(111),
    [sym_array_type_decl] = STATE(243),
    [sym_texture_sampler_types] = STATE(243),
    [sym_sampler_type] = STATE(233),
    [sym_sampled_texture_type] = STATE(424),
    [sym_multisampled_texture_type] = STATE(424),
    [sym_storage_texture_type] = STATE(423),
    [sym_depth_texture_type] = STATE(233),
    [sym_type_decl_without_ident] = STATE(422),
    [sym_vec_prefix] = STATE(314),
    [sym_mat_prefix] = STATE(314),
    [sym_primary_expression] = STATE(98),
    [sym_callable] = STATE(312),
    [sym_paren_expression] = STATE(111),
    [sym_unary_expression] = STATE(114),
    [sym_singular_expression] = STATE(118),
    [sym_multiplicative_expression] = STATE(164),
    [sym_additive_expression] = STATE(189),
    [sym_shift_expression] = STATE(200),
    [sym_relational_expression] = STATE(240),
    [sym_short_circuit_and_expression] = STATE(419),
    [sym_short_circuit_or_expression] = STATE(418),
    [sym_binary_or_expression] = STATE(417),
    [sym_binary_and_expression] = STATE(416),
    [sym_binary_xor_expression] = STATE(414),
    [sym_bitwise_expression] = STATE(257),
    [sym_expression] = STATE(441),
    [sym__comment] = STATE(24),
    [sym_ident] = ACTIONS(29),
    [aux_sym_int_literal_token1] = ACTIONS(31),
    [aux_sym_int_literal_token2] = ACTIONS(31),
    [aux_sym_int_literal_token3] = ACTIONS(31),
    [aux_sym_decimal_float_literal_token1] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token2] = ACTIONS(35),
    [aux_sym_decimal_float_literal_token3] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token4] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token5] = ACTIONS(33),
    [aux_sym_hex_float_literal_token1] = ACTIONS(37),
    [aux_sym_hex_float_literal_token2] = ACTIONS(39),
    [aux_sym_hex_float_literal_token3] = ACTIONS(37),
    [sym_array] = ACTIONS(41),
    [sym_atomic] = ACTIONS(43),
    [sym_bool] = ACTIONS(45),
    [sym_float32] = ACTIONS(45),
    [sym_float16] = ACTIONS(45),
    [sym_int32] = ACTIONS(45),
    [sym_mat2x2] = ACTIONS(47),
    [sym_mat2x3] = ACTIONS(47),
    [sym_mat2x4] = ACTIONS(47),
    [sym_mat3x2] = ACTIONS(47),
    [sym_mat3x3] = ACTIONS(47),
    [sym_mat3x4] = ACTIONS(47),
    [sym_mat4x2] = ACTIONS(47),
    [sym_mat4x3] = ACTIONS(47),
    [sym_mat4x4] = ACTIONS(47),
    [sym_pointer] = ACTIONS(49),
    [sym_sampler] = ACTIONS(51),
    [sym_sampler_comparison] = ACTIONS(51),
    [sym_texture_1d] = ACTIONS(53),
    [sym_texture_2d] = ACTIONS(53),
    [sym_texture_2d_array] = ACTIONS(53),
    [sym_texture_3d] = ACTIONS(53),
    [sym_texture_cube] = ACTIONS(53),
    [sym_texture_cube_array] = ACTIONS(53),
    [sym_texture_multisampled_2d] = ACTIONS(55),
    [sym_texture_storage_1d] = ACTIONS(57),
    [sym_texture_storage_2d] = ACTIONS(57),
    [sym_texture_storage_2d_array] = ACTIONS(57),
    [sym_texture_storage_3d] = ACTIONS(57),
    [sym_texture_depth_2d] = ACTIONS(59),
    [sym_texture_depth_2d_array] = ACTIONS(59),
    [sym_texture_depth_cube] = ACTIONS(59),
    [sym_texture_depth_cube_array] = ACTIONS(59),
    [sym_texture_depth_multisampled_2d] = ACTIONS(59),
    [sym_uint32] = ACTIONS(45),
    [sym_vec2] = ACTIONS(61),
    [sym_vec3] = ACTIONS(61),
    [sym_vec4] = ACTIONS(61),
    [sym_bitcast] = ACTIONS(63),
    [sym_false] = ACTIONS(65),
    [sym_true] = ACTIONS(65),
    [sym_and] = ACTIONS(67),
    [sym_bang] = ACTIONS(67),
    [sym_minus] = ACTIONS(67),
    [sym_paren_left] = ACTIONS(69),
    [sym_star] = ACTIONS(67),
    [sym_tilde] = ACTIONS(67),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym__blankspace] = ACTIONS(5),
    [sym__block_comment] = ACTIONS(5),
  },
  [25] = {
    [sym_bool_literal] = STATE(108),
    [sym_int_literal] = STATE(108),
    [sym_float_literal] = STATE(108),
    [sym_decimal_float_literal] = STATE(110),
    [sym_hex_float_literal] = STATE(110),
    [sym_const_literal] = STATE(111),
    [sym_array_type_decl] = STATE(243),
    [sym_texture_sampler_types] = STATE(243),
    [sym_sampler_type] = STATE(233),
    [sym_sampled_texture_type] = STATE(424),
    [sym_multisampled_texture_type] = STATE(424),
    [sym_storage_texture_type] = STATE(423),
    [sym_depth_texture_type] = STATE(233),
    [sym_type_decl_without_ident] = STATE(422),
    [sym_vec_prefix] = STATE(314),
    [sym_mat_prefix] = STATE(314),
    [sym_primary_expression] = STATE(98),
    [sym_callable] = STATE(312),
    [sym_paren_expression] = STATE(111),
    [sym_unary_expression] = STATE(114),
    [sym_singular_expression] = STATE(118),
    [sym_multiplicative_expression] = STATE(164),
    [sym_additive_expression] = STATE(189),
    [sym_shift_expression] = STATE(200),
    [sym_relational_expression] = STATE(240),
    [sym_short_circuit_and_expression] = STATE(419),
    [sym_short_circuit_or_expression] = STATE(418),
    [sym_binary_or_expression] = STATE(417),
    [sym_binary_and_expression] = STATE(416),
    [sym_binary_xor_expression] = STATE(414),
    [sym_bitwise_expression] = STATE(257),
    [sym_expression] = STATE(412),
    [sym__comment] = STATE(25),
    [sym_ident] = ACTIONS(29),
    [aux_sym_int_literal_token1] = ACTIONS(31),
    [aux_sym_int_literal_token2] = ACTIONS(31),
    [aux_sym_int_literal_token3] = ACTIONS(31),
    [aux_sym_decimal_float_literal_token1] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token2] = ACTIONS(35),
    [aux_sym_decimal_float_literal_token3] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token4] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token5] = ACTIONS(33),
    [aux_sym_hex_float_literal_token1] = ACTIONS(37),
    [aux_sym_hex_float_literal_token2] = ACTIONS(39),
    [aux_sym_hex_float_literal_token3] = ACTIONS(37),
    [sym_array] = ACTIONS(41),
    [sym_atomic] = ACTIONS(43),
    [sym_bool] = ACTIONS(45),
    [sym_float32] = ACTIONS(45),
    [sym_float16] = ACTIONS(45),
    [sym_int32] = ACTIONS(45),
    [sym_mat2x2] = ACTIONS(47),
    [sym_mat2x3] = ACTIONS(47),
    [sym_mat2x4] = ACTIONS(47),
    [sym_mat3x2] = ACTIONS(47),
    [sym_mat3x3] = ACTIONS(47),
    [sym_mat3x4] = ACTIONS(47),
    [sym_mat4x2] = ACTIONS(47),
    [sym_mat4x3] = ACTIONS(47),
    [sym_mat4x4] = ACTIONS(47),
    [sym_pointer] = ACTIONS(49),
    [sym_sampler] = ACTIONS(51),
    [sym_sampler_comparison] = ACTIONS(51),
    [sym_texture_1d] = ACTIONS(53),
    [sym_texture_2d] = ACTIONS(53),
    [sym_texture_2d_array] = ACTIONS(53),
    [sym_texture_3d] = ACTIONS(53),
    [sym_texture_cube] = ACTIONS(53),
    [sym_texture_cube_array] = ACTIONS(53),
    [sym_texture_multisampled_2d] = ACTIONS(55),
    [sym_texture_storage_1d] = ACTIONS(57),
    [sym_texture_storage_2d] = ACTIONS(57),
    [sym_texture_storage_2d_array] = ACTIONS(57),
    [sym_texture_storage_3d] = ACTIONS(57),
    [sym_texture_depth_2d] = ACTIONS(59),
    [sym_texture_depth_2d_array] = ACTIONS(59),
    [sym_texture_depth_cube] = ACTIONS(59),
    [sym_texture_depth_cube_array] = ACTIONS(59),
    [sym_texture_depth_multisampled_2d] = ACTIONS(59),
    [sym_uint32] = ACTIONS(45),
    [sym_vec2] = ACTIONS(61),
    [sym_vec3] = ACTIONS(61),
    [sym_vec4] = ACTIONS(61),
    [sym_bitcast] = ACTIONS(63),
    [sym_false] = ACTIONS(65),
    [sym_true] = ACTIONS(65),
    [sym_and] = ACTIONS(67),
    [sym_bang] = ACTIONS(67),
    [sym_minus] = ACTIONS(67),
    [sym_paren_left] = ACTIONS(69),
    [sym_star] = ACTIONS(67),
    [sym_tilde] = ACTIONS(67),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym__blankspace] = ACTIONS(5),
    [sym__block_comment] = ACTIONS(5),
  },
  [26] = {
    [sym_bool_literal] = STATE(108),
    [sym_int_literal] = STATE(108),
    [sym_float_literal] = STATE(108),
    [sym_decimal_float_literal] = STATE(110),
    [sym_hex_float_literal] = STATE(110),
    [sym_const_literal] = STATE(111),
    [sym_array_type_decl] = STATE(243),
    [sym_texture_sampler_types] = STATE(243),
    [sym_sampler_type] = STATE(233),
    [sym_sampled_texture_type] = STATE(424),
    [sym_multisampled_texture_type] = STATE(424),
    [sym_storage_texture_type] = STATE(423),
    [sym_depth_texture_type] = STATE(233),
    [sym_type_decl_without_ident] = STATE(422),
    [sym_vec_prefix] = STATE(314),
    [sym_mat_prefix] = STATE(314),
    [sym_primary_expression] = STATE(98),
    [sym_callable] = STATE(312),
    [sym_paren_expression] = STATE(111),
    [sym_unary_expression] = STATE(114),
    [sym_singular_expression] = STATE(118),
    [sym_multiplicative_expression] = STATE(164),
    [sym_additive_expression] = STATE(189),
    [sym_shift_expression] = STATE(200),
    [sym_relational_expression] = STATE(240),
    [sym_short_circuit_and_expression] = STATE(419),
    [sym_short_circuit_or_expression] = STATE(418),
    [sym_binary_or_expression] = STATE(417),
    [sym_binary_and_expression] = STATE(416),
    [sym_binary_xor_expression] = STATE(414),
    [sym_bitwise_expression] = STATE(257),
    [sym_expression] = STATE(436),
    [sym__comment] = STATE(26),
    [sym_ident] = ACTIONS(29),
    [aux_sym_int_literal_token1] = ACTIONS(31),
    [aux_sym_int_literal_token2] = ACTIONS(31),
    [aux_sym_int_literal_token3] = ACTIONS(31),
    [aux_sym_decimal_float_literal_token1] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token2] = ACTIONS(35),
    [aux_sym_decimal_float_literal_token3] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token4] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token5] = ACTIONS(33),
    [aux_sym_hex_float_literal_token1] = ACTIONS(37),
    [aux_sym_hex_float_literal_token2] = ACTIONS(39),
    [aux_sym_hex_float_literal_token3] = ACTIONS(37),
    [sym_array] = ACTIONS(41),
    [sym_atomic] = ACTIONS(43),
    [sym_bool] = ACTIONS(45),
    [sym_float32] = ACTIONS(45),
    [sym_float16] = ACTIONS(45),
    [sym_int32] = ACTIONS(45),
    [sym_mat2x2] = ACTIONS(47),
    [sym_mat2x3] = ACTIONS(47),
    [sym_mat2x4] = ACTIONS(47),
    [sym_mat3x2] = ACTIONS(47),
    [sym_mat3x3] = ACTIONS(47),
    [sym_mat3x4] = ACTIONS(47),
    [sym_mat4x2] = ACTIONS(47),
    [sym_mat4x3] = ACTIONS(47),
    [sym_mat4x4] = ACTIONS(47),
    [sym_pointer] = ACTIONS(49),
    [sym_sampler] = ACTIONS(51),
    [sym_sampler_comparison] = ACTIONS(51),
    [sym_texture_1d] = ACTIONS(53),
    [sym_texture_2d] = ACTIONS(53),
    [sym_texture_2d_array] = ACTIONS(53),
    [sym_texture_3d] = ACTIONS(53),
    [sym_texture_cube] = ACTIONS(53),
    [sym_texture_cube_array] = ACTIONS(53),
    [sym_texture_multisampled_2d] = ACTIONS(55),
    [sym_texture_storage_1d] = ACTIONS(57),
    [sym_texture_storage_2d] = ACTIONS(57),
    [sym_texture_storage_2d_array] = ACTIONS(57),
    [sym_texture_storage_3d] = ACTIONS(57),
    [sym_texture_depth_2d] = ACTIONS(59),
    [sym_texture_depth_2d_array] = ACTIONS(59),
    [sym_texture_depth_cube] = ACTIONS(59),
    [sym_texture_depth_cube_array] = ACTIONS(59),
    [sym_texture_depth_multisampled_2d] = ACTIONS(59),
    [sym_uint32] = ACTIONS(45),
    [sym_vec2] = ACTIONS(61),
    [sym_vec3] = ACTIONS(61),
    [sym_vec4] = ACTIONS(61),
    [sym_bitcast] = ACTIONS(63),
    [sym_false] = ACTIONS(65),
    [sym_true] = ACTIONS(65),
    [sym_and] = ACTIONS(67),
    [sym_bang] = ACTIONS(67),
    [sym_minus] = ACTIONS(67),
    [sym_paren_left] = ACTIONS(69),
    [sym_star] = ACTIONS(67),
    [sym_tilde] = ACTIONS(67),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym__blankspace] = ACTIONS(5),
    [sym__block_comment] = ACTIONS(5),
  },
  [27] = {
    [sym_bool_literal] = STATE(108),
    [sym_int_literal] = STATE(108),
    [sym_float_literal] = STATE(108),
    [sym_decimal_float_literal] = STATE(110),
    [sym_hex_float_literal] = STATE(110),
    [sym_const_literal] = STATE(111),
    [sym_array_type_decl] = STATE(243),
    [sym_texture_sampler_types] = STATE(243),
    [sym_sampler_type] = STATE(233),
    [sym_sampled_texture_type] = STATE(424),
    [sym_multisampled_texture_type] = STATE(424),
    [sym_storage_texture_type] = STATE(423),
    [sym_depth_texture_type] = STATE(233),
    [sym_type_decl_without_ident] = STATE(422),
    [sym_vec_prefix] = STATE(314),
    [sym_mat_prefix] = STATE(314),
    [sym_primary_expression] = STATE(98),
    [sym_callable] = STATE(312),
    [sym_paren_expression] = STATE(111),
    [sym_unary_expression] = STATE(114),
    [sym_singular_expression] = STATE(118),
    [sym_multiplicative_expression] = STATE(164),
    [sym_additive_expression] = STATE(189),
    [sym_shift_expression] = STATE(200),
    [sym_relational_expression] = STATE(240),
    [sym_short_circuit_and_expression] = STATE(419),
    [sym_short_circuit_or_expression] = STATE(418),
    [sym_binary_or_expression] = STATE(417),
    [sym_binary_and_expression] = STATE(416),
    [sym_binary_xor_expression] = STATE(414),
    [sym_bitwise_expression] = STATE(257),
    [sym_expression] = STATE(357),
    [sym__comment] = STATE(27),
    [sym_ident] = ACTIONS(29),
    [aux_sym_int_literal_token1] = ACTIONS(31),
    [aux_sym_int_literal_token2] = ACTIONS(31),
    [aux_sym_int_literal_token3] = ACTIONS(31),
    [aux_sym_decimal_float_literal_token1] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token2] = ACTIONS(35),
    [aux_sym_decimal_float_literal_token3] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token4] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token5] = ACTIONS(33),
    [aux_sym_hex_float_literal_token1] = ACTIONS(37),
    [aux_sym_hex_float_literal_token2] = ACTIONS(39),
    [aux_sym_hex_float_literal_token3] = ACTIONS(37),
    [sym_array] = ACTIONS(41),
    [sym_atomic] = ACTIONS(43),
    [sym_bool] = ACTIONS(45),
    [sym_float32] = ACTIONS(45),
    [sym_float16] = ACTIONS(45),
    [sym_int32] = ACTIONS(45),
    [sym_mat2x2] = ACTIONS(47),
    [sym_mat2x3] = ACTIONS(47),
    [sym_mat2x4] = ACTIONS(47),
    [sym_mat3x2] = ACTIONS(47),
    [sym_mat3x3] = ACTIONS(47),
    [sym_mat3x4] = ACTIONS(47),
    [sym_mat4x2] = ACTIONS(47),
    [sym_mat4x3] = ACTIONS(47),
    [sym_mat4x4] = ACTIONS(47),
    [sym_pointer] = ACTIONS(49),
    [sym_sampler] = ACTIONS(51),
    [sym_sampler_comparison] = ACTIONS(51),
    [sym_texture_1d] = ACTIONS(53),
    [sym_texture_2d] = ACTIONS(53),
    [sym_texture_2d_array] = ACTIONS(53),
    [sym_texture_3d] = ACTIONS(53),
    [sym_texture_cube] = ACTIONS(53),
    [sym_texture_cube_array] = ACTIONS(53),
    [sym_texture_multisampled_2d] = ACTIONS(55),
    [sym_texture_storage_1d] = ACTIONS(57),
    [sym_texture_storage_2d] = ACTIONS(57),
    [sym_texture_storage_2d_array] = ACTIONS(57),
    [sym_texture_storage_3d] = ACTIONS(57),
    [sym_texture_depth_2d] = ACTIONS(59),
    [sym_texture_depth_2d_array] = ACTIONS(59),
    [sym_texture_depth_cube] = ACTIONS(59),
    [sym_texture_depth_cube_array] = ACTIONS(59),
    [sym_texture_depth_multisampled_2d] = ACTIONS(59),
    [sym_uint32] = ACTIONS(45),
    [sym_vec2] = ACTIONS(61),
    [sym_vec3] = ACTIONS(61),
    [sym_vec4] = ACTIONS(61),
    [sym_bitcast] = ACTIONS(63),
    [sym_false] = ACTIONS(65),
    [sym_true] = ACTIONS(65),
    [sym_and] = ACTIONS(67),
    [sym_bang] = ACTIONS(67),
    [sym_minus] = ACTIONS(67),
    [sym_paren_left] = ACTIONS(69),
    [sym_star] = ACTIONS(67),
    [sym_tilde] = ACTIONS(67),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym__blankspace] = ACTIONS(5),
    [sym__block_comment] = ACTIONS(5),
  },
  [28] = {
    [sym_bool_literal] = STATE(108),
    [sym_int_literal] = STATE(108),
    [sym_float_literal] = STATE(108),
    [sym_decimal_float_literal] = STATE(110),
    [sym_hex_float_literal] = STATE(110),
    [sym_const_literal] = STATE(111),
    [sym_array_type_decl] = STATE(243),
    [sym_texture_sampler_types] = STATE(243),
    [sym_sampler_type] = STATE(233),
    [sym_sampled_texture_type] = STATE(424),
    [sym_multisampled_texture_type] = STATE(424),
    [sym_storage_texture_type] = STATE(423),
    [sym_depth_texture_type] = STATE(233),
    [sym_type_decl_without_ident] = STATE(422),
    [sym_vec_prefix] = STATE(314),
    [sym_mat_prefix] = STATE(314),
    [sym_primary_expression] = STATE(98),
    [sym_callable] = STATE(312),
    [sym_paren_expression] = STATE(111),
    [sym_unary_expression] = STATE(114),
    [sym_singular_expression] = STATE(118),
    [sym_multiplicative_expression] = STATE(164),
    [sym_additive_expression] = STATE(189),
    [sym_shift_expression] = STATE(200),
    [sym_relational_expression] = STATE(240),
    [sym_short_circuit_and_expression] = STATE(419),
    [sym_short_circuit_or_expression] = STATE(418),
    [sym_binary_or_expression] = STATE(417),
    [sym_binary_and_expression] = STATE(416),
    [sym_binary_xor_expression] = STATE(414),
    [sym_bitwise_expression] = STATE(257),
    [sym_expression] = STATE(455),
    [sym__comment] = STATE(28),
    [sym_ident] = ACTIONS(29),
    [aux_sym_int_literal_token1] = ACTIONS(31),
    [aux_sym_int_literal_token2] = ACTIONS(31),
    [aux_sym_int_literal_token3] = ACTIONS(31),
    [aux_sym_decimal_float_literal_token1] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token2] = ACTIONS(35),
    [aux_sym_decimal_float_literal_token3] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token4] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token5] = ACTIONS(33),
    [aux_sym_hex_float_literal_token1] = ACTIONS(37),
    [aux_sym_hex_float_literal_token2] = ACTIONS(39),
    [aux_sym_hex_float_literal_token3] = ACTIONS(37),
    [sym_array] = ACTIONS(41),
    [sym_atomic] = ACTIONS(43),
    [sym_bool] = ACTIONS(45),
    [sym_float32] = ACTIONS(45),
    [sym_float16] = ACTIONS(45),
    [sym_int32] = ACTIONS(45),
    [sym_mat2x2] = ACTIONS(47),
    [sym_mat2x3] = ACTIONS(47),
    [sym_mat2x4] = ACTIONS(47),
    [sym_mat3x2] = ACTIONS(47),
    [sym_mat3x3] = ACTIONS(47),
    [sym_mat3x4] = ACTIONS(47),
    [sym_mat4x2] = ACTIONS(47),
    [sym_mat4x3] = ACTIONS(47),
    [sym_mat4x4] = ACTIONS(47),
    [sym_pointer] = ACTIONS(49),
    [sym_sampler] = ACTIONS(51),
    [sym_sampler_comparison] = ACTIONS(51),
    [sym_texture_1d] = ACTIONS(53),
    [sym_texture_2d] = ACTIONS(53),
    [sym_texture_2d_array] = ACTIONS(53),
    [sym_texture_3d] = ACTIONS(53),
    [sym_texture_cube] = ACTIONS(53),
    [sym_texture_cube_array] = ACTIONS(53),
    [sym_texture_multisampled_2d] = ACTIONS(55),
    [sym_texture_storage_1d] = ACTIONS(57),
    [sym_texture_storage_2d] = ACTIONS(57),
    [sym_texture_storage_2d_array] = ACTIONS(57),
    [sym_texture_storage_3d] = ACTIONS(57),
    [sym_texture_depth_2d] = ACTIONS(59),
    [sym_texture_depth_2d_array] = ACTIONS(59),
    [sym_texture_depth_cube] = ACTIONS(59),
    [sym_texture_depth_cube_array] = ACTIONS(59),
    [sym_texture_depth_multisampled_2d] = ACTIONS(59),
    [sym_uint32] = ACTIONS(45),
    [sym_vec2] = ACTIONS(61),
    [sym_vec3] = ACTIONS(61),
    [sym_vec4] = ACTIONS(61),
    [sym_bitcast] = ACTIONS(63),
    [sym_false] = ACTIONS(65),
    [sym_true] = ACTIONS(65),
    [sym_and] = ACTIONS(67),
    [sym_bang] = ACTIONS(67),
    [sym_minus] = ACTIONS(67),
    [sym_paren_left] = ACTIONS(69),
    [sym_star] = ACTIONS(67),
    [sym_tilde] = ACTIONS(67),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym__blankspace] = ACTIONS(5),
    [sym__block_comment] = ACTIONS(5),
  },
  [29] = {
    [sym_bool_literal] = STATE(108),
    [sym_int_literal] = STATE(108),
    [sym_float_literal] = STATE(108),
    [sym_decimal_float_literal] = STATE(110),
    [sym_hex_float_literal] = STATE(110),
    [sym_const_literal] = STATE(111),
    [sym_array_type_decl] = STATE(243),
    [sym_texture_sampler_types] = STATE(243),
    [sym_sampler_type] = STATE(233),
    [sym_sampled_texture_type] = STATE(424),
    [sym_multisampled_texture_type] = STATE(424),
    [sym_storage_texture_type] = STATE(423),
    [sym_depth_texture_type] = STATE(233),
    [sym_type_decl_without_ident] = STATE(422),
    [sym_vec_prefix] = STATE(314),
    [sym_mat_prefix] = STATE(314),
    [sym_primary_expression] = STATE(98),
    [sym_callable] = STATE(312),
    [sym_paren_expression] = STATE(111),
    [sym_unary_expression] = STATE(114),
    [sym_singular_expression] = STATE(118),
    [sym_multiplicative_expression] = STATE(164),
    [sym_additive_expression] = STATE(189),
    [sym_shift_expression] = STATE(200),
    [sym_relational_expression] = STATE(240),
    [sym_short_circuit_and_expression] = STATE(419),
    [sym_short_circuit_or_expression] = STATE(418),
    [sym_binary_or_expression] = STATE(417),
    [sym_binary_and_expression] = STATE(416),
    [sym_binary_xor_expression] = STATE(414),
    [sym_bitwise_expression] = STATE(257),
    [sym_expression] = STATE(374),
    [sym__comment] = STATE(29),
    [sym_ident] = ACTIONS(29),
    [aux_sym_int_literal_token1] = ACTIONS(31),
    [aux_sym_int_literal_token2] = ACTIONS(31),
    [aux_sym_int_literal_token3] = ACTIONS(31),
    [aux_sym_decimal_float_literal_token1] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token2] = ACTIONS(35),
    [aux_sym_decimal_float_literal_token3] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token4] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token5] = ACTIONS(33),
    [aux_sym_hex_float_literal_token1] = ACTIONS(37),
    [aux_sym_hex_float_literal_token2] = ACTIONS(39),
    [aux_sym_hex_float_literal_token3] = ACTIONS(37),
    [sym_array] = ACTIONS(41),
    [sym_atomic] = ACTIONS(43),
    [sym_bool] = ACTIONS(45),
    [sym_float32] = ACTIONS(45),
    [sym_float16] = ACTIONS(45),
    [sym_int32] = ACTIONS(45),
    [sym_mat2x2] = ACTIONS(47),
    [sym_mat2x3] = ACTIONS(47),
    [sym_mat2x4] = ACTIONS(47),
    [sym_mat3x2] = ACTIONS(47),
    [sym_mat3x3] = ACTIONS(47),
    [sym_mat3x4] = ACTIONS(47),
    [sym_mat4x2] = ACTIONS(47),
    [sym_mat4x3] = ACTIONS(47),
    [sym_mat4x4] = ACTIONS(47),
    [sym_pointer] = ACTIONS(49),
    [sym_sampler] = ACTIONS(51),
    [sym_sampler_comparison] = ACTIONS(51),
    [sym_texture_1d] = ACTIONS(53),
    [sym_texture_2d] = ACTIONS(53),
    [sym_texture_2d_array] = ACTIONS(53),
    [sym_texture_3d] = ACTIONS(53),
    [sym_texture_cube] = ACTIONS(53),
    [sym_texture_cube_array] = ACTIONS(53),
    [sym_texture_multisampled_2d] = ACTIONS(55),
    [sym_texture_storage_1d] = ACTIONS(57),
    [sym_texture_storage_2d] = ACTIONS(57),
    [sym_texture_storage_2d_array] = ACTIONS(57),
    [sym_texture_storage_3d] = ACTIONS(57),
    [sym_texture_depth_2d] = ACTIONS(59),
    [sym_texture_depth_2d_array] = ACTIONS(59),
    [sym_texture_depth_cube] = ACTIONS(59),
    [sym_texture_depth_cube_array] = ACTIONS(59),
    [sym_texture_depth_multisampled_2d] = ACTIONS(59),
    [sym_uint32] = ACTIONS(45),
    [sym_vec2] = ACTIONS(61),
    [sym_vec3] = ACTIONS(61),
    [sym_vec4] = ACTIONS(61),
    [sym_bitcast] = ACTIONS(63),
    [sym_false] = ACTIONS(65),
    [sym_true] = ACTIONS(65),
    [sym_and] = ACTIONS(67),
    [sym_bang] = ACTIONS(67),
    [sym_minus] = ACTIONS(67),
    [sym_paren_left] = ACTIONS(69),
    [sym_star] = ACTIONS(67),
    [sym_tilde] = ACTIONS(67),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym__blankspace] = ACTIONS(5),
    [sym__block_comment] = ACTIONS(5),
  },
  [30] = {
    [sym_bool_literal] = STATE(108),
    [sym_int_literal] = STATE(108),
    [sym_float_literal] = STATE(108),
    [sym_decimal_float_literal] = STATE(110),
    [sym_hex_float_literal] = STATE(110),
    [sym_const_literal] = STATE(111),
    [sym_array_type_decl] = STATE(243),
    [sym_texture_sampler_types] = STATE(243),
    [sym_sampler_type] = STATE(233),
    [sym_sampled_texture_type] = STATE(424),
    [sym_multisampled_texture_type] = STATE(424),
    [sym_storage_texture_type] = STATE(423),
    [sym_depth_texture_type] = STATE(233),
    [sym_type_decl_without_ident] = STATE(422),
    [sym_vec_prefix] = STATE(314),
    [sym_mat_prefix] = STATE(314),
    [sym_primary_expression] = STATE(98),
    [sym_callable] = STATE(312),
    [sym_paren_expression] = STATE(111),
    [sym_unary_expression] = STATE(114),
    [sym_singular_expression] = STATE(118),
    [sym_multiplicative_expression] = STATE(164),
    [sym_additive_expression] = STATE(189),
    [sym_shift_expression] = STATE(200),
    [sym_relational_expression] = STATE(240),
    [sym_short_circuit_and_expression] = STATE(419),
    [sym_short_circuit_or_expression] = STATE(418),
    [sym_binary_or_expression] = STATE(417),
    [sym_binary_and_expression] = STATE(416),
    [sym_binary_xor_expression] = STATE(414),
    [sym_bitwise_expression] = STATE(257),
    [sym_expression] = STATE(334),
    [sym__comment] = STATE(30),
    [sym_ident] = ACTIONS(29),
    [aux_sym_int_literal_token1] = ACTIONS(31),
    [aux_sym_int_literal_token2] = ACTIONS(31),
    [aux_sym_int_literal_token3] = ACTIONS(31),
    [aux_sym_decimal_float_literal_token1] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token2] = ACTIONS(35),
    [aux_sym_decimal_float_literal_token3] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token4] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token5] = ACTIONS(33),
    [aux_sym_hex_float_literal_token1] = ACTIONS(37),
    [aux_sym_hex_float_literal_token2] = ACTIONS(39),
    [aux_sym_hex_float_literal_token3] = ACTIONS(37),
    [sym_array] = ACTIONS(41),
    [sym_atomic] = ACTIONS(43),
    [sym_bool] = ACTIONS(45),
    [sym_float32] = ACTIONS(45),
    [sym_float16] = ACTIONS(45),
    [sym_int32] = ACTIONS(45),
    [sym_mat2x2] = ACTIONS(47),
    [sym_mat2x3] = ACTIONS(47),
    [sym_mat2x4] = ACTIONS(47),
    [sym_mat3x2] = ACTIONS(47),
    [sym_mat3x3] = ACTIONS(47),
    [sym_mat3x4] = ACTIONS(47),
    [sym_mat4x2] = ACTIONS(47),
    [sym_mat4x3] = ACTIONS(47),
    [sym_mat4x4] = ACTIONS(47),
    [sym_pointer] = ACTIONS(49),
    [sym_sampler] = ACTIONS(51),
    [sym_sampler_comparison] = ACTIONS(51),
    [sym_texture_1d] = ACTIONS(53),
    [sym_texture_2d] = ACTIONS(53),
    [sym_texture_2d_array] = ACTIONS(53),
    [sym_texture_3d] = ACTIONS(53),
    [sym_texture_cube] = ACTIONS(53),
    [sym_texture_cube_array] = ACTIONS(53),
    [sym_texture_multisampled_2d] = ACTIONS(55),
    [sym_texture_storage_1d] = ACTIONS(57),
    [sym_texture_storage_2d] = ACTIONS(57),
    [sym_texture_storage_2d_array] = ACTIONS(57),
    [sym_texture_storage_3d] = ACTIONS(57),
    [sym_texture_depth_2d] = ACTIONS(59),
    [sym_texture_depth_2d_array] = ACTIONS(59),
    [sym_texture_depth_cube] = ACTIONS(59),
    [sym_texture_depth_cube_array] = ACTIONS(59),
    [sym_texture_depth_multisampled_2d] = ACTIONS(59),
    [sym_uint32] = ACTIONS(45),
    [sym_vec2] = ACTIONS(61),
    [sym_vec3] = ACTIONS(61),
    [sym_vec4] = ACTIONS(61),
    [sym_bitcast] = ACTIONS(63),
    [sym_false] = ACTIONS(65),
    [sym_true] = ACTIONS(65),
    [sym_and] = ACTIONS(67),
    [sym_bang] = ACTIONS(67),
    [sym_minus] = ACTIONS(67),
    [sym_paren_left] = ACTIONS(69),
    [sym_star] = ACTIONS(67),
    [sym_tilde] = ACTIONS(67),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym__blankspace] = ACTIONS(5),
    [sym__block_comment] = ACTIONS(5),
  },
  [31] = {
    [sym_bool_literal] = STATE(108),
    [sym_int_literal] = STATE(108),
    [sym_float_literal] = STATE(108),
    [sym_decimal_float_literal] = STATE(110),
    [sym_hex_float_literal] = STATE(110),
    [sym_const_literal] = STATE(111),
    [sym_array_type_decl] = STATE(243),
    [sym_texture_sampler_types] = STATE(243),
    [sym_sampler_type] = STATE(233),
    [sym_sampled_texture_type] = STATE(424),
    [sym_multisampled_texture_type] = STATE(424),
    [sym_storage_texture_type] = STATE(423),
    [sym_depth_texture_type] = STATE(233),
    [sym_type_decl_without_ident] = STATE(422),
    [sym_vec_prefix] = STATE(314),
    [sym_mat_prefix] = STATE(314),
    [sym_primary_expression] = STATE(98),
    [sym_callable] = STATE(312),
    [sym_paren_expression] = STATE(111),
    [sym_unary_expression] = STATE(114),
    [sym_singular_expression] = STATE(118),
    [sym_multiplicative_expression] = STATE(164),
    [sym_additive_expression] = STATE(189),
    [sym_shift_expression] = STATE(200),
    [sym_relational_expression] = STATE(240),
    [sym_short_circuit_and_expression] = STATE(419),
    [sym_short_circuit_or_expression] = STATE(418),
    [sym_binary_or_expression] = STATE(417),
    [sym_binary_and_expression] = STATE(416),
    [sym_binary_xor_expression] = STATE(414),
    [sym_bitwise_expression] = STATE(257),
    [sym_expression] = STATE(415),
    [sym__comment] = STATE(31),
    [sym_ident] = ACTIONS(29),
    [aux_sym_int_literal_token1] = ACTIONS(31),
    [aux_sym_int_literal_token2] = ACTIONS(31),
    [aux_sym_int_literal_token3] = ACTIONS(31),
    [aux_sym_decimal_float_literal_token1] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token2] = ACTIONS(35),
    [aux_sym_decimal_float_literal_token3] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token4] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token5] = ACTIONS(33),
    [aux_sym_hex_float_literal_token1] = ACTIONS(37),
    [aux_sym_hex_float_literal_token2] = ACTIONS(39),
    [aux_sym_hex_float_literal_token3] = ACTIONS(37),
    [sym_array] = ACTIONS(41),
    [sym_atomic] = ACTIONS(43),
    [sym_bool] = ACTIONS(45),
    [sym_float32] = ACTIONS(45),
    [sym_float16] = ACTIONS(45),
    [sym_int32] = ACTIONS(45),
    [sym_mat2x2] = ACTIONS(47),
    [sym_mat2x3] = ACTIONS(47),
    [sym_mat2x4] = ACTIONS(47),
    [sym_mat3x2] = ACTIONS(47),
    [sym_mat3x3] = ACTIONS(47),
    [sym_mat3x4] = ACTIONS(47),
    [sym_mat4x2] = ACTIONS(47),
    [sym_mat4x3] = ACTIONS(47),
    [sym_mat4x4] = ACTIONS(47),
    [sym_pointer] = ACTIONS(49),
    [sym_sampler] = ACTIONS(51),
    [sym_sampler_comparison] = ACTIONS(51),
    [sym_texture_1d] = ACTIONS(53),
    [sym_texture_2d] = ACTIONS(53),
    [sym_texture_2d_array] = ACTIONS(53),
    [sym_texture_3d] = ACTIONS(53),
    [sym_texture_cube] = ACTIONS(53),
    [sym_texture_cube_array] = ACTIONS(53),
    [sym_texture_multisampled_2d] = ACTIONS(55),
    [sym_texture_storage_1d] = ACTIONS(57),
    [sym_texture_storage_2d] = ACTIONS(57),
    [sym_texture_storage_2d_array] = ACTIONS(57),
    [sym_texture_storage_3d] = ACTIONS(57),
    [sym_texture_depth_2d] = ACTIONS(59),
    [sym_texture_depth_2d_array] = ACTIONS(59),
    [sym_texture_depth_cube] = ACTIONS(59),
    [sym_texture_depth_cube_array] = ACTIONS(59),
    [sym_texture_depth_multisampled_2d] = ACTIONS(59),
    [sym_uint32] = ACTIONS(45),
    [sym_vec2] = ACTIONS(61),
    [sym_vec3] = ACTIONS(61),
    [sym_vec4] = ACTIONS(61),
    [sym_bitcast] = ACTIONS(63),
    [sym_false] = ACTIONS(65),
    [sym_true] = ACTIONS(65),
    [sym_and] = ACTIONS(67),
    [sym_bang] = ACTIONS(67),
    [sym_minus] = ACTIONS(67),
    [sym_paren_left] = ACTIONS(69),
    [sym_star] = ACTIONS(67),
    [sym_tilde] = ACTIONS(67),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym__blankspace] = ACTIONS(5),
    [sym__block_comment] = ACTIONS(5),
  },
  [32] = {
    [sym_bool_literal] = STATE(108),
    [sym_int_literal] = STATE(108),
    [sym_float_literal] = STATE(108),
    [sym_decimal_float_literal] = STATE(110),
    [sym_hex_float_literal] = STATE(110),
    [sym_const_literal] = STATE(111),
    [sym_array_type_decl] = STATE(243),
    [sym_texture_sampler_types] = STATE(243),
    [sym_sampler_type] = STATE(233),
    [sym_sampled_texture_type] = STATE(424),
    [sym_multisampled_texture_type] = STATE(424),
    [sym_storage_texture_type] = STATE(423),
    [sym_depth_texture_type] = STATE(233),
    [sym_type_decl_without_ident] = STATE(422),
    [sym_vec_prefix] = STATE(314),
    [sym_mat_prefix] = STATE(314),
    [sym_primary_expression] = STATE(98),
    [sym_callable] = STATE(312),
    [sym_paren_expression] = STATE(111),
    [sym_unary_expression] = STATE(114),
    [sym_singular_expression] = STATE(118),
    [sym_multiplicative_expression] = STATE(164),
    [sym_additive_expression] = STATE(189),
    [sym_shift_expression] = STATE(200),
    [sym_relational_expression] = STATE(240),
    [sym_short_circuit_and_expression] = STATE(419),
    [sym_short_circuit_or_expression] = STATE(418),
    [sym_binary_or_expression] = STATE(417),
    [sym_binary_and_expression] = STATE(416),
    [sym_binary_xor_expression] = STATE(414),
    [sym_bitwise_expression] = STATE(257),
    [sym_expression] = STATE(453),
    [sym__comment] = STATE(32),
    [sym_ident] = ACTIONS(29),
    [aux_sym_int_literal_token1] = ACTIONS(31),
    [aux_sym_int_literal_token2] = ACTIONS(31),
    [aux_sym_int_literal_token3] = ACTIONS(31),
    [aux_sym_decimal_float_literal_token1] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token2] = ACTIONS(35),
    [aux_sym_decimal_float_literal_token3] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token4] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token5] = ACTIONS(33),
    [aux_sym_hex_float_literal_token1] = ACTIONS(37),
    [aux_sym_hex_float_literal_token2] = ACTIONS(39),
    [aux_sym_hex_float_literal_token3] = ACTIONS(37),
    [sym_array] = ACTIONS(41),
    [sym_atomic] = ACTIONS(43),
    [sym_bool] = ACTIONS(45),
    [sym_float32] = ACTIONS(45),
    [sym_float16] = ACTIONS(45),
    [sym_int32] = ACTIONS(45),
    [sym_mat2x2] = ACTIONS(47),
    [sym_mat2x3] = ACTIONS(47),
    [sym_mat2x4] = ACTIONS(47),
    [sym_mat3x2] = ACTIONS(47),
    [sym_mat3x3] = ACTIONS(47),
    [sym_mat3x4] = ACTIONS(47),
    [sym_mat4x2] = ACTIONS(47),
    [sym_mat4x3] = ACTIONS(47),
    [sym_mat4x4] = ACTIONS(47),
    [sym_pointer] = ACTIONS(49),
    [sym_sampler] = ACTIONS(51),
    [sym_sampler_comparison] = ACTIONS(51),
    [sym_texture_1d] = ACTIONS(53),
    [sym_texture_2d] = ACTIONS(53),
    [sym_texture_2d_array] = ACTIONS(53),
    [sym_texture_3d] = ACTIONS(53),
    [sym_texture_cube] = ACTIONS(53),
    [sym_texture_cube_array] = ACTIONS(53),
    [sym_texture_multisampled_2d] = ACTIONS(55),
    [sym_texture_storage_1d] = ACTIONS(57),
    [sym_texture_storage_2d] = ACTIONS(57),
    [sym_texture_storage_2d_array] = ACTIONS(57),
    [sym_texture_storage_3d] = ACTIONS(57),
    [sym_texture_depth_2d] = ACTIONS(59),
    [sym_texture_depth_2d_array] = ACTIONS(59),
    [sym_texture_depth_cube] = ACTIONS(59),
    [sym_texture_depth_cube_array] = ACTIONS(59),
    [sym_texture_depth_multisampled_2d] = ACTIONS(59),
    [sym_uint32] = ACTIONS(45),
    [sym_vec2] = ACTIONS(61),
    [sym_vec3] = ACTIONS(61),
    [sym_vec4] = ACTIONS(61),
    [sym_bitcast] = ACTIONS(63),
    [sym_false] = ACTIONS(65),
    [sym_true] = ACTIONS(65),
    [sym_and] = ACTIONS(67),
    [sym_bang] = ACTIONS(67),
    [sym_minus] = ACTIONS(67),
    [sym_paren_left] = ACTIONS(69),
    [sym_star] = ACTIONS(67),
    [sym_tilde] = ACTIONS(67),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym__blankspace] = ACTIONS(5),
    [sym__block_comment] = ACTIONS(5),
  },
  [33] = {
    [sym_bool_literal] = STATE(108),
    [sym_int_literal] = STATE(108),
    [sym_float_literal] = STATE(108),
    [sym_decimal_float_literal] = STATE(110),
    [sym_hex_float_literal] = STATE(110),
    [sym_const_literal] = STATE(111),
    [sym_array_type_decl] = STATE(243),
    [sym_texture_sampler_types] = STATE(243),
    [sym_sampler_type] = STATE(233),
    [sym_sampled_texture_type] = STATE(424),
    [sym_multisampled_texture_type] = STATE(424),
    [sym_storage_texture_type] = STATE(423),
    [sym_depth_texture_type] = STATE(233),
    [sym_type_decl_without_ident] = STATE(422),
    [sym_vec_prefix] = STATE(314),
    [sym_mat_prefix] = STATE(314),
    [sym_primary_expression] = STATE(98),
    [sym_callable] = STATE(312),
    [sym_paren_expression] = STATE(111),
    [sym_unary_expression] = STATE(114),
    [sym_singular_expression] = STATE(118),
    [sym_multiplicative_expression] = STATE(164),
    [sym_additive_expression] = STATE(189),
    [sym_shift_expression] = STATE(200),
    [sym_relational_expression] = STATE(240),
    [sym_short_circuit_and_expression] = STATE(419),
    [sym_short_circuit_or_expression] = STATE(418),
    [sym_binary_or_expression] = STATE(417),
    [sym_binary_and_expression] = STATE(416),
    [sym_binary_xor_expression] = STATE(414),
    [sym_bitwise_expression] = STATE(257),
    [sym_expression] = STATE(378),
    [sym__comment] = STATE(33),
    [sym_ident] = ACTIONS(29),
    [aux_sym_int_literal_token1] = ACTIONS(31),
    [aux_sym_int_literal_token2] = ACTIONS(31),
    [aux_sym_int_literal_token3] = ACTIONS(31),
    [aux_sym_decimal_float_literal_token1] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token2] = ACTIONS(35),
    [aux_sym_decimal_float_literal_token3] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token4] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token5] = ACTIONS(33),
    [aux_sym_hex_float_literal_token1] = ACTIONS(37),
    [aux_sym_hex_float_literal_token2] = ACTIONS(39),
    [aux_sym_hex_float_literal_token3] = ACTIONS(37),
    [sym_array] = ACTIONS(41),
    [sym_atomic] = ACTIONS(43),
    [sym_bool] = ACTIONS(45),
    [sym_float32] = ACTIONS(45),
    [sym_float16] = ACTIONS(45),
    [sym_int32] = ACTIONS(45),
    [sym_mat2x2] = ACTIONS(47),
    [sym_mat2x3] = ACTIONS(47),
    [sym_mat2x4] = ACTIONS(47),
    [sym_mat3x2] = ACTIONS(47),
    [sym_mat3x3] = ACTIONS(47),
    [sym_mat3x4] = ACTIONS(47),
    [sym_mat4x2] = ACTIONS(47),
    [sym_mat4x3] = ACTIONS(47),
    [sym_mat4x4] = ACTIONS(47),
    [sym_pointer] = ACTIONS(49),
    [sym_sampler] = ACTIONS(51),
    [sym_sampler_comparison] = ACTIONS(51),
    [sym_texture_1d] = ACTIONS(53),
    [sym_texture_2d] = ACTIONS(53),
    [sym_texture_2d_array] = ACTIONS(53),
    [sym_texture_3d] = ACTIONS(53),
    [sym_texture_cube] = ACTIONS(53),
    [sym_texture_cube_array] = ACTIONS(53),
    [sym_texture_multisampled_2d] = ACTIONS(55),
    [sym_texture_storage_1d] = ACTIONS(57),
    [sym_texture_storage_2d] = ACTIONS(57),
    [sym_texture_storage_2d_array] = ACTIONS(57),
    [sym_texture_storage_3d] = ACTIONS(57),
    [sym_texture_depth_2d] = ACTIONS(59),
    [sym_texture_depth_2d_array] = ACTIONS(59),
    [sym_texture_depth_cube] = ACTIONS(59),
    [sym_texture_depth_cube_array] = ACTIONS(59),
    [sym_texture_depth_multisampled_2d] = ACTIONS(59),
    [sym_uint32] = ACTIONS(45),
    [sym_vec2] = ACTIONS(61),
    [sym_vec3] = ACTIONS(61),
    [sym_vec4] = ACTIONS(61),
    [sym_bitcast] = ACTIONS(63),
    [sym_false] = ACTIONS(65),
    [sym_true] = ACTIONS(65),
    [sym_and] = ACTIONS(67),
    [sym_bang] = ACTIONS(67),
    [sym_minus] = ACTIONS(67),
    [sym_paren_left] = ACTIONS(69),
    [sym_star] = ACTIONS(67),
    [sym_tilde] = ACTIONS(67),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym__blankspace] = ACTIONS(5),
    [sym__block_comment] = ACTIONS(5),
  },
  [34] = {
    [sym_bool_literal] = STATE(108),
    [sym_int_literal] = STATE(108),
    [sym_float_literal] = STATE(108),
    [sym_decimal_float_literal] = STATE(110),
    [sym_hex_float_literal] = STATE(110),
    [sym_const_literal] = STATE(111),
    [sym_array_type_decl] = STATE(243),
    [sym_texture_sampler_types] = STATE(243),
    [sym_sampler_type] = STATE(233),
    [sym_sampled_texture_type] = STATE(424),
    [sym_multisampled_texture_type] = STATE(424),
    [sym_storage_texture_type] = STATE(423),
    [sym_depth_texture_type] = STATE(233),
    [sym_type_decl_without_ident] = STATE(422),
    [sym_vec_prefix] = STATE(314),
    [sym_mat_prefix] = STATE(314),
    [sym_primary_expression] = STATE(98),
    [sym_callable] = STATE(312),
    [sym_paren_expression] = STATE(111),
    [sym_unary_expression] = STATE(114),
    [sym_singular_expression] = STATE(118),
    [sym_multiplicative_expression] = STATE(164),
    [sym_additive_expression] = STATE(189),
    [sym_shift_expression] = STATE(200),
    [sym_relational_expression] = STATE(240),
    [sym_short_circuit_and_expression] = STATE(419),
    [sym_short_circuit_or_expression] = STATE(418),
    [sym_binary_or_expression] = STATE(417),
    [sym_binary_and_expression] = STATE(416),
    [sym_binary_xor_expression] = STATE(414),
    [sym_bitwise_expression] = STATE(257),
    [sym_expression] = STATE(397),
    [sym__comment] = STATE(34),
    [sym_ident] = ACTIONS(29),
    [aux_sym_int_literal_token1] = ACTIONS(31),
    [aux_sym_int_literal_token2] = ACTIONS(31),
    [aux_sym_int_literal_token3] = ACTIONS(31),
    [aux_sym_decimal_float_literal_token1] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token2] = ACTIONS(35),
    [aux_sym_decimal_float_literal_token3] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token4] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token5] = ACTIONS(33),
    [aux_sym_hex_float_literal_token1] = ACTIONS(37),
    [aux_sym_hex_float_literal_token2] = ACTIONS(39),
    [aux_sym_hex_float_literal_token3] = ACTIONS(37),
    [sym_array] = ACTIONS(41),
    [sym_atomic] = ACTIONS(43),
    [sym_bool] = ACTIONS(45),
    [sym_float32] = ACTIONS(45),
    [sym_float16] = ACTIONS(45),
    [sym_int32] = ACTIONS(45),
    [sym_mat2x2] = ACTIONS(47),
    [sym_mat2x3] = ACTIONS(47),
    [sym_mat2x4] = ACTIONS(47),
    [sym_mat3x2] = ACTIONS(47),
    [sym_mat3x3] = ACTIONS(47),
    [sym_mat3x4] = ACTIONS(47),
    [sym_mat4x2] = ACTIONS(47),
    [sym_mat4x3] = ACTIONS(47),
    [sym_mat4x4] = ACTIONS(47),
    [sym_pointer] = ACTIONS(49),
    [sym_sampler] = ACTIONS(51),
    [sym_sampler_comparison] = ACTIONS(51),
    [sym_texture_1d] = ACTIONS(53),
    [sym_texture_2d] = ACTIONS(53),
    [sym_texture_2d_array] = ACTIONS(53),
    [sym_texture_3d] = ACTIONS(53),
    [sym_texture_cube] = ACTIONS(53),
    [sym_texture_cube_array] = ACTIONS(53),
    [sym_texture_multisampled_2d] = ACTIONS(55),
    [sym_texture_storage_1d] = ACTIONS(57),
    [sym_texture_storage_2d] = ACTIONS(57),
    [sym_texture_storage_2d_array] = ACTIONS(57),
    [sym_texture_storage_3d] = ACTIONS(57),
    [sym_texture_depth_2d] = ACTIONS(59),
    [sym_texture_depth_2d_array] = ACTIONS(59),
    [sym_texture_depth_cube] = ACTIONS(59),
    [sym_texture_depth_cube_array] = ACTIONS(59),
    [sym_texture_depth_multisampled_2d] = ACTIONS(59),
    [sym_uint32] = ACTIONS(45),
    [sym_vec2] = ACTIONS(61),
    [sym_vec3] = ACTIONS(61),
    [sym_vec4] = ACTIONS(61),
    [sym_bitcast] = ACTIONS(63),
    [sym_false] = ACTIONS(65),
    [sym_true] = ACTIONS(65),
    [sym_and] = ACTIONS(67),
    [sym_bang] = ACTIONS(67),
    [sym_minus] = ACTIONS(67),
    [sym_paren_left] = ACTIONS(69),
    [sym_star] = ACTIONS(67),
    [sym_tilde] = ACTIONS(67),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym__blankspace] = ACTIONS(5),
    [sym__block_comment] = ACTIONS(5),
  },
  [35] = {
    [sym_bool_literal] = STATE(187),
    [sym_int_literal] = STATE(187),
    [sym_float_literal] = STATE(187),
    [sym_decimal_float_literal] = STATE(183),
    [sym_hex_float_literal] = STATE(183),
    [sym_const_literal] = STATE(182),
    [sym_array_type_decl] = STATE(243),
    [sym_element_count_expression] = STATE(452),
    [sym_texture_sampler_types] = STATE(243),
    [sym_sampler_type] = STATE(233),
    [sym_sampled_texture_type] = STATE(424),
    [sym_multisampled_texture_type] = STATE(424),
    [sym_storage_texture_type] = STATE(423),
    [sym_depth_texture_type] = STATE(233),
    [sym_type_decl_without_ident] = STATE(422),
    [sym_vec_prefix] = STATE(314),
    [sym_mat_prefix] = STATE(314),
    [sym_primary_expression] = STATE(212),
    [sym_callable] = STATE(341),
    [sym_paren_expression] = STATE(182),
    [sym_unary_expression] = STATE(229),
    [sym_singular_expression] = STATE(193),
    [sym_multiplicative_expression] = STATE(258),
    [sym_additive_expression] = STATE(294),
    [sym_binary_or_expression] = STATE(430),
    [sym_binary_and_expression] = STATE(472),
    [sym_binary_xor_expression] = STATE(431),
    [sym_bitwise_expression] = STATE(451),
    [sym__comment] = STATE(35),
    [sym_ident] = ACTIONS(150),
    [aux_sym_int_literal_token1] = ACTIONS(152),
    [aux_sym_int_literal_token2] = ACTIONS(152),
    [aux_sym_int_literal_token3] = ACTIONS(152),
    [aux_sym_decimal_float_literal_token1] = ACTIONS(154),
    [aux_sym_decimal_float_literal_token2] = ACTIONS(156),
    [aux_sym_decimal_float_literal_token3] = ACTIONS(154),
    [aux_sym_decimal_float_literal_token4] = ACTIONS(154),
    [aux_sym_decimal_float_literal_token5] = ACTIONS(154),
    [aux_sym_hex_float_literal_token1] = ACTIONS(158),
    [aux_sym_hex_float_literal_token2] = ACTIONS(160),
    [aux_sym_hex_float_literal_token3] = ACTIONS(158),
    [sym_array] = ACTIONS(41),
    [sym_atomic] = ACTIONS(43),
    [sym_bool] = ACTIONS(45),
    [sym_float32] = ACTIONS(45),
    [sym_float16] = ACTIONS(45),
    [sym_int32] = ACTIONS(45),
    [sym_mat2x2] = ACTIONS(47),
    [sym_mat2x3] = ACTIONS(47),
    [sym_mat2x4] = ACTIONS(47),
    [sym_mat3x2] = ACTIONS(47),
    [sym_mat3x3] = ACTIONS(47),
    [sym_mat3x4] = ACTIONS(47),
    [sym_mat4x2] = ACTIONS(47),
    [sym_mat4x3] = ACTIONS(47),
    [sym_mat4x4] = ACTIONS(47),
    [sym_pointer] = ACTIONS(49),
    [sym_sampler] = ACTIONS(51),
    [sym_sampler_comparison] = ACTIONS(51),
    [sym_texture_1d] = ACTIONS(53),
    [sym_texture_2d] = ACTIONS(53),
    [sym_texture_2d_array] = ACTIONS(53),
    [sym_texture_3d] = ACTIONS(53),
    [sym_texture_cube] = ACTIONS(53),
    [sym_texture_cube_array] = ACTIONS(53),
    [sym_texture_multisampled_2d] = ACTIONS(55),
    [sym_texture_storage_1d] = ACTIONS(57),
    [sym_texture_storage_2d] = ACTIONS(57),
    [sym_texture_storage_2d_array] = ACTIONS(57),
    [sym_texture_storage_3d] = ACTIONS(57),
    [sym_texture_depth_2d] = ACTIONS(59),
    [sym_texture_depth_2d_array] = ACTIONS(59),
    [sym_texture_depth_cube] = ACTIONS(59),
    [sym_texture_depth_cube_array] = ACTIONS(59),
    [sym_texture_depth_multisampled_2d] = ACTIONS(59),
    [sym_uint32] = ACTIONS(45),
    [sym_vec2] = ACTIONS(61),
    [sym_vec3] = ACTIONS(61),
    [sym_vec4] = ACTIONS(61),
    [sym_bitcast] = ACTIONS(162),
    [sym_false] = ACTIONS(164),
    [sym_true] = ACTIONS(164),
    [sym_and] = ACTIONS(166),
    [sym_bang] = ACTIONS(166),
    [sym_minus] = ACTIONS(166),
    [sym_paren_left] = ACTIONS(168),
    [sym_star] = ACTIONS(166),
    [sym_tilde] = ACTIONS(166),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym__blankspace] = ACTIONS(5),
    [sym__block_comment] = ACTIONS(5),
  },
  [36] = {
    [sym_bool_literal] = STATE(108),
    [sym_int_literal] = STATE(108),
    [sym_float_literal] = STATE(108),
    [sym_decimal_float_literal] = STATE(110),
    [sym_hex_float_literal] = STATE(110),
    [sym_const_literal] = STATE(111),
    [sym_array_type_decl] = STATE(243),
    [sym_texture_sampler_types] = STATE(243),
    [sym_sampler_type] = STATE(233),
    [sym_sampled_texture_type] = STATE(424),
    [sym_multisampled_texture_type] = STATE(424),
    [sym_storage_texture_type] = STATE(423),
    [sym_depth_texture_type] = STATE(233),
    [sym_type_decl_without_ident] = STATE(422),
    [sym_vec_prefix] = STATE(314),
    [sym_mat_prefix] = STATE(314),
    [sym_primary_expression] = STATE(98),
    [sym_callable] = STATE(312),
    [sym_paren_expression] = STATE(111),
    [sym_unary_expression] = STATE(153),
    [sym_singular_expression] = STATE(118),
    [sym_multiplicative_expression] = STATE(164),
    [sym_additive_expression] = STATE(189),
    [sym_shift_expression] = STATE(200),
    [sym_relational_expression] = STATE(256),
    [sym__comment] = STATE(36),
    [sym_ident] = ACTIONS(29),
    [aux_sym_int_literal_token1] = ACTIONS(31),
    [aux_sym_int_literal_token2] = ACTIONS(31),
    [aux_sym_int_literal_token3] = ACTIONS(31),
    [aux_sym_decimal_float_literal_token1] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token2] = ACTIONS(35),
    [aux_sym_decimal_float_literal_token3] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token4] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token5] = ACTIONS(33),
    [aux_sym_hex_float_literal_token1] = ACTIONS(37),
    [aux_sym_hex_float_literal_token2] = ACTIONS(39),
    [aux_sym_hex_float_literal_token3] = ACTIONS(37),
    [sym_array] = ACTIONS(41),
    [sym_atomic] = ACTIONS(43),
    [sym_bool] = ACTIONS(45),
    [sym_float32] = ACTIONS(45),
    [sym_float16] = ACTIONS(45),
    [sym_int32] = ACTIONS(45),
    [sym_mat2x2] = ACTIONS(47),
    [sym_mat2x3] = ACTIONS(47),
    [sym_mat2x4] = ACTIONS(47),
    [sym_mat3x2] = ACTIONS(47),
    [sym_mat3x3] = ACTIONS(47),
    [sym_mat3x4] = ACTIONS(47),
    [sym_mat4x2] = ACTIONS(47),
    [sym_mat4x3] = ACTIONS(47),
    [sym_mat4x4] = ACTIONS(47),
    [sym_pointer] = ACTIONS(49),
    [sym_sampler] = ACTIONS(51),
    [sym_sampler_comparison] = ACTIONS(51),
    [sym_texture_1d] = ACTIONS(53),
    [sym_texture_2d] = ACTIONS(53),
    [sym_texture_2d_array] = ACTIONS(53),
    [sym_texture_3d] = ACTIONS(53),
    [sym_texture_cube] = ACTIONS(53),
    [sym_texture_cube_array] = ACTIONS(53),
    [sym_texture_multisampled_2d] = ACTIONS(55),
    [sym_texture_storage_1d] = ACTIONS(57),
    [sym_texture_storage_2d] = ACTIONS(57),
    [sym_texture_storage_2d_array] = ACTIONS(57),
    [sym_texture_storage_3d] = ACTIONS(57),
    [sym_texture_depth_2d] = ACTIONS(59),
    [sym_texture_depth_2d_array] = ACTIONS(59),
    [sym_texture_depth_cube] = ACTIONS(59),
    [sym_texture_depth_cube_array] = ACTIONS(59),
    [sym_texture_depth_multisampled_2d] = ACTIONS(59),
    [sym_uint32] = ACTIONS(45),
    [sym_vec2] = ACTIONS(61),
    [sym_vec3] = ACTIONS(61),
    [sym_vec4] = ACTIONS(61),
    [sym_bitcast] = ACTIONS(63),
    [sym_false] = ACTIONS(65),
    [sym_true] = ACTIONS(65),
    [sym_and] = ACTIONS(67),
    [sym_bang] = ACTIONS(67),
    [sym_minus] = ACTIONS(67),
    [sym_paren_left] = ACTIONS(69),
    [sym_star] = ACTIONS(67),
    [sym_tilde] = ACTIONS(67),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym__blankspace] = ACTIONS(5),
    [sym__block_comment] = ACTIONS(5),
  },
  [37] = {
    [sym_bool_literal] = STATE(108),
    [sym_int_literal] = STATE(108),
    [sym_float_literal] = STATE(108),
    [sym_decimal_float_literal] = STATE(110),
    [sym_hex_float_literal] = STATE(110),
    [sym_const_literal] = STATE(111),
    [sym_array_type_decl] = STATE(243),
    [sym_texture_sampler_types] = STATE(243),
    [sym_sampler_type] = STATE(233),
    [sym_sampled_texture_type] = STATE(424),
    [sym_multisampled_texture_type] = STATE(424),
    [sym_storage_texture_type] = STATE(423),
    [sym_depth_texture_type] = STATE(233),
    [sym_type_decl_without_ident] = STATE(422),
    [sym_vec_prefix] = STATE(314),
    [sym_mat_prefix] = STATE(314),
    [sym_primary_expression] = STATE(98),
    [sym_callable] = STATE(312),
    [sym_paren_expression] = STATE(111),
    [sym_unary_expression] = STATE(153),
    [sym_singular_expression] = STATE(118),
    [sym_multiplicative_expression] = STATE(164),
    [sym_additive_expression] = STATE(189),
    [sym_shift_expression] = STATE(200),
    [sym_relational_expression] = STATE(250),
    [sym__comment] = STATE(37),
    [sym_ident] = ACTIONS(29),
    [aux_sym_int_literal_token1] = ACTIONS(31),
    [aux_sym_int_literal_token2] = ACTIONS(31),
    [aux_sym_int_literal_token3] = ACTIONS(31),
    [aux_sym_decimal_float_literal_token1] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token2] = ACTIONS(35),
    [aux_sym_decimal_float_literal_token3] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token4] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token5] = ACTIONS(33),
    [aux_sym_hex_float_literal_token1] = ACTIONS(37),
    [aux_sym_hex_float_literal_token2] = ACTIONS(39),
    [aux_sym_hex_float_literal_token3] = ACTIONS(37),
    [sym_array] = ACTIONS(41),
    [sym_atomic] = ACTIONS(43),
    [sym_bool] = ACTIONS(45),
    [sym_float32] = ACTIONS(45),
    [sym_float16] = ACTIONS(45),
    [sym_int32] = ACTIONS(45),
    [sym_mat2x2] = ACTIONS(47),
    [sym_mat2x3] = ACTIONS(47),
    [sym_mat2x4] = ACTIONS(47),
    [sym_mat3x2] = ACTIONS(47),
    [sym_mat3x3] = ACTIONS(47),
    [sym_mat3x4] = ACTIONS(47),
    [sym_mat4x2] = ACTIONS(47),
    [sym_mat4x3] = ACTIONS(47),
    [sym_mat4x4] = ACTIONS(47),
    [sym_pointer] = ACTIONS(49),
    [sym_sampler] = ACTIONS(51),
    [sym_sampler_comparison] = ACTIONS(51),
    [sym_texture_1d] = ACTIONS(53),
    [sym_texture_2d] = ACTIONS(53),
    [sym_texture_2d_array] = ACTIONS(53),
    [sym_texture_3d] = ACTIONS(53),
    [sym_texture_cube] = ACTIONS(53),
    [sym_texture_cube_array] = ACTIONS(53),
    [sym_texture_multisampled_2d] = ACTIONS(55),
    [sym_texture_storage_1d] = ACTIONS(57),
    [sym_texture_storage_2d] = ACTIONS(57),
    [sym_texture_storage_2d_array] = ACTIONS(57),
    [sym_texture_storage_3d] = ACTIONS(57),
    [sym_texture_depth_2d] = ACTIONS(59),
    [sym_texture_depth_2d_array] = ACTIONS(59),
    [sym_texture_depth_cube] = ACTIONS(59),
    [sym_texture_depth_cube_array] = ACTIONS(59),
    [sym_texture_depth_multisampled_2d] = ACTIONS(59),
    [sym_uint32] = ACTIONS(45),
    [sym_vec2] = ACTIONS(61),
    [sym_vec3] = ACTIONS(61),
    [sym_vec4] = ACTIONS(61),
    [sym_bitcast] = ACTIONS(63),
    [sym_false] = ACTIONS(65),
    [sym_true] = ACTIONS(65),
    [sym_and] = ACTIONS(67),
    [sym_bang] = ACTIONS(67),
    [sym_minus] = ACTIONS(67),
    [sym_paren_left] = ACTIONS(69),
    [sym_star] = ACTIONS(67),
    [sym_tilde] = ACTIONS(67),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym__blankspace] = ACTIONS(5),
    [sym__block_comment] = ACTIONS(5),
  },
  [38] = {
    [sym_bool_literal] = STATE(108),
    [sym_int_literal] = STATE(108),
    [sym_float_literal] = STATE(108),
    [sym_decimal_float_literal] = STATE(110),
    [sym_hex_float_literal] = STATE(110),
    [sym_const_literal] = STATE(111),
    [sym_array_type_decl] = STATE(243),
    [sym_texture_sampler_types] = STATE(243),
    [sym_sampler_type] = STATE(233),
    [sym_sampled_texture_type] = STATE(424),
    [sym_multisampled_texture_type] = STATE(424),
    [sym_storage_texture_type] = STATE(423),
    [sym_depth_texture_type] = STATE(233),
    [sym_type_decl_without_ident] = STATE(422),
    [sym_vec_prefix] = STATE(314),
    [sym_mat_prefix] = STATE(314),
    [sym_primary_expression] = STATE(98),
    [sym_callable] = STATE(312),
    [sym_paren_expression] = STATE(111),
    [sym_unary_expression] = STATE(194),
    [sym_singular_expression] = STATE(118),
    [sym_multiplicative_expression] = STATE(206),
    [sym_additive_expression] = STATE(219),
    [sym_shift_expression] = STATE(234),
    [sym__comment] = STATE(38),
    [sym_ident] = ACTIONS(29),
    [aux_sym_int_literal_token1] = ACTIONS(31),
    [aux_sym_int_literal_token2] = ACTIONS(31),
    [aux_sym_int_literal_token3] = ACTIONS(31),
    [aux_sym_decimal_float_literal_token1] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token2] = ACTIONS(35),
    [aux_sym_decimal_float_literal_token3] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token4] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token5] = ACTIONS(33),
    [aux_sym_hex_float_literal_token1] = ACTIONS(37),
    [aux_sym_hex_float_literal_token2] = ACTIONS(39),
    [aux_sym_hex_float_literal_token3] = ACTIONS(37),
    [sym_array] = ACTIONS(41),
    [sym_atomic] = ACTIONS(43),
    [sym_bool] = ACTIONS(45),
    [sym_float32] = ACTIONS(45),
    [sym_float16] = ACTIONS(45),
    [sym_int32] = ACTIONS(45),
    [sym_mat2x2] = ACTIONS(47),
    [sym_mat2x3] = ACTIONS(47),
    [sym_mat2x4] = ACTIONS(47),
    [sym_mat3x2] = ACTIONS(47),
    [sym_mat3x3] = ACTIONS(47),
    [sym_mat3x4] = ACTIONS(47),
    [sym_mat4x2] = ACTIONS(47),
    [sym_mat4x3] = ACTIONS(47),
    [sym_mat4x4] = ACTIONS(47),
    [sym_pointer] = ACTIONS(49),
    [sym_sampler] = ACTIONS(51),
    [sym_sampler_comparison] = ACTIONS(51),
    [sym_texture_1d] = ACTIONS(53),
    [sym_texture_2d] = ACTIONS(53),
    [sym_texture_2d_array] = ACTIONS(53),
    [sym_texture_3d] = ACTIONS(53),
    [sym_texture_cube] = ACTIONS(53),
    [sym_texture_cube_array] = ACTIONS(53),
    [sym_texture_multisampled_2d] = ACTIONS(55),
    [sym_texture_storage_1d] = ACTIONS(57),
    [sym_texture_storage_2d] = ACTIONS(57),
    [sym_texture_storage_2d_array] = ACTIONS(57),
    [sym_texture_storage_3d] = ACTIONS(57),
    [sym_texture_depth_2d] = ACTIONS(59),
    [sym_texture_depth_2d_array] = ACTIONS(59),
    [sym_texture_depth_cube] = ACTIONS(59),
    [sym_texture_depth_cube_array] = ACTIONS(59),
    [sym_texture_depth_multisampled_2d] = ACTIONS(59),
    [sym_uint32] = ACTIONS(45),
    [sym_vec2] = ACTIONS(61),
    [sym_vec3] = ACTIONS(61),
    [sym_vec4] = ACTIONS(61),
    [sym_bitcast] = ACTIONS(63),
    [sym_false] = ACTIONS(65),
    [sym_true] = ACTIONS(65),
    [sym_and] = ACTIONS(67),
    [sym_bang] = ACTIONS(67),
    [sym_minus] = ACTIONS(67),
    [sym_paren_left] = ACTIONS(69),
    [sym_star] = ACTIONS(67),
    [sym_tilde] = ACTIONS(67),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym__blankspace] = ACTIONS(5),
    [sym__block_comment] = ACTIONS(5),
  },
  [39] = {
    [sym_bool_literal] = STATE(108),
    [sym_int_literal] = STATE(108),
    [sym_float_literal] = STATE(108),
    [sym_decimal_float_literal] = STATE(110),
    [sym_hex_float_literal] = STATE(110),
    [sym_const_literal] = STATE(111),
    [sym_array_type_decl] = STATE(243),
    [sym_texture_sampler_types] = STATE(243),
    [sym_sampler_type] = STATE(233),
    [sym_sampled_texture_type] = STATE(424),
    [sym_multisampled_texture_type] = STATE(424),
    [sym_storage_texture_type] = STATE(423),
    [sym_depth_texture_type] = STATE(233),
    [sym_type_decl_without_ident] = STATE(422),
    [sym_vec_prefix] = STATE(314),
    [sym_mat_prefix] = STATE(314),
    [sym_primary_expression] = STATE(98),
    [sym_callable] = STATE(312),
    [sym_paren_expression] = STATE(111),
    [sym_unary_expression] = STATE(165),
    [sym_singular_expression] = STATE(118),
    [sym_multiplicative_expression] = STATE(208),
    [sym__comment] = STATE(39),
    [sym_ident] = ACTIONS(29),
    [aux_sym_int_literal_token1] = ACTIONS(31),
    [aux_sym_int_literal_token2] = ACTIONS(31),
    [aux_sym_int_literal_token3] = ACTIONS(31),
    [aux_sym_decimal_float_literal_token1] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token2] = ACTIONS(35),
    [aux_sym_decimal_float_literal_token3] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token4] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token5] = ACTIONS(33),
    [aux_sym_hex_float_literal_token1] = ACTIONS(37),
    [aux_sym_hex_float_literal_token2] = ACTIONS(39),
    [aux_sym_hex_float_literal_token3] = ACTIONS(37),
    [sym_array] = ACTIONS(41),
    [sym_atomic] = ACTIONS(43),
    [sym_bool] = ACTIONS(45),
    [sym_float32] = ACTIONS(45),
    [sym_float16] = ACTIONS(45),
    [sym_int32] = ACTIONS(45),
    [sym_mat2x2] = ACTIONS(47),
    [sym_mat2x3] = ACTIONS(47),
    [sym_mat2x4] = ACTIONS(47),
    [sym_mat3x2] = ACTIONS(47),
    [sym_mat3x3] = ACTIONS(47),
    [sym_mat3x4] = ACTIONS(47),
    [sym_mat4x2] = ACTIONS(47),
    [sym_mat4x3] = ACTIONS(47),
    [sym_mat4x4] = ACTIONS(47),
    [sym_pointer] = ACTIONS(49),
    [sym_sampler] = ACTIONS(51),
    [sym_sampler_comparison] = ACTIONS(51),
    [sym_texture_1d] = ACTIONS(53),
    [sym_texture_2d] = ACTIONS(53),
    [sym_texture_2d_array] = ACTIONS(53),
    [sym_texture_3d] = ACTIONS(53),
    [sym_texture_cube] = ACTIONS(53),
    [sym_texture_cube_array] = ACTIONS(53),
    [sym_texture_multisampled_2d] = ACTIONS(55),
    [sym_texture_storage_1d] = ACTIONS(57),
    [sym_texture_storage_2d] = ACTIONS(57),
    [sym_texture_storage_2d_array] = ACTIONS(57),
    [sym_texture_storage_3d] = ACTIONS(57),
    [sym_texture_depth_2d] = ACTIONS(59),
    [sym_texture_depth_2d_array] = ACTIONS(59),
    [sym_texture_depth_cube] = ACTIONS(59),
    [sym_texture_depth_cube_array] = ACTIONS(59),
    [sym_texture_depth_multisampled_2d] = ACTIONS(59),
    [sym_uint32] = ACTIONS(45),
    [sym_vec2] = ACTIONS(61),
    [sym_vec3] = ACTIONS(61),
    [sym_vec4] = ACTIONS(61),
    [sym_bitcast] = ACTIONS(63),
    [sym_false] = ACTIONS(65),
    [sym_true] = ACTIONS(65),
    [sym_and] = ACTIONS(67),
    [sym_bang] = ACTIONS(67),
    [sym_minus] = ACTIONS(67),
    [sym_paren_left] = ACTIONS(69),
    [sym_star] = ACTIONS(67),
    [sym_tilde] = ACTIONS(67),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym__blankspace] = ACTIONS(5),
    [sym__block_comment] = ACTIONS(5),
  },
  [40] = {
    [sym_bool_literal] = STATE(144),
    [sym_int_literal] = STATE(144),
    [sym_float_literal] = STATE(144),
    [sym_decimal_float_literal] = STATE(143),
    [sym_hex_float_literal] = STATE(143),
    [sym_const_literal] = STATE(142),
    [sym_array_type_decl] = STATE(243),
    [sym_texture_sampler_types] = STATE(243),
    [sym_sampler_type] = STATE(233),
    [sym_sampled_texture_type] = STATE(424),
    [sym_multisampled_texture_type] = STATE(424),
    [sym_storage_texture_type] = STATE(423),
    [sym_depth_texture_type] = STATE(233),
    [sym_type_decl_without_ident] = STATE(422),
    [sym_vec_prefix] = STATE(314),
    [sym_mat_prefix] = STATE(314),
    [sym_primary_expression] = STATE(136),
    [sym_callable] = STATE(328),
    [sym_paren_expression] = STATE(142),
    [sym_unary_expression] = STATE(165),
    [sym_singular_expression] = STATE(161),
    [sym_multiplicative_expression] = STATE(166),
    [sym__comment] = STATE(40),
    [sym_ident] = ACTIONS(170),
    [aux_sym_int_literal_token1] = ACTIONS(172),
    [aux_sym_int_literal_token2] = ACTIONS(172),
    [aux_sym_int_literal_token3] = ACTIONS(172),
    [aux_sym_decimal_float_literal_token1] = ACTIONS(174),
    [aux_sym_decimal_float_literal_token2] = ACTIONS(176),
    [aux_sym_decimal_float_literal_token3] = ACTIONS(174),
    [aux_sym_decimal_float_literal_token4] = ACTIONS(174),
    [aux_sym_decimal_float_literal_token5] = ACTIONS(174),
    [aux_sym_hex_float_literal_token1] = ACTIONS(178),
    [aux_sym_hex_float_literal_token2] = ACTIONS(180),
    [aux_sym_hex_float_literal_token3] = ACTIONS(178),
    [sym_array] = ACTIONS(41),
    [sym_atomic] = ACTIONS(43),
    [sym_bool] = ACTIONS(45),
    [sym_float32] = ACTIONS(45),
    [sym_float16] = ACTIONS(45),
    [sym_int32] = ACTIONS(45),
    [sym_mat2x2] = ACTIONS(47),
    [sym_mat2x3] = ACTIONS(47),
    [sym_mat2x4] = ACTIONS(47),
    [sym_mat3x2] = ACTIONS(47),
    [sym_mat3x3] = ACTIONS(47),
    [sym_mat3x4] = ACTIONS(47),
    [sym_mat4x2] = ACTIONS(47),
    [sym_mat4x3] = ACTIONS(47),
    [sym_mat4x4] = ACTIONS(47),
    [sym_pointer] = ACTIONS(49),
    [sym_sampler] = ACTIONS(51),
    [sym_sampler_comparison] = ACTIONS(51),
    [sym_texture_1d] = ACTIONS(53),
    [sym_texture_2d] = ACTIONS(53),
    [sym_texture_2d_array] = ACTIONS(53),
    [sym_texture_3d] = ACTIONS(53),
    [sym_texture_cube] = ACTIONS(53),
    [sym_texture_cube_array] = ACTIONS(53),
    [sym_texture_multisampled_2d] = ACTIONS(55),
    [sym_texture_storage_1d] = ACTIONS(57),
    [sym_texture_storage_2d] = ACTIONS(57),
    [sym_texture_storage_2d_array] = ACTIONS(57),
    [sym_texture_storage_3d] = ACTIONS(57),
    [sym_texture_depth_2d] = ACTIONS(59),
    [sym_texture_depth_2d_array] = ACTIONS(59),
    [sym_texture_depth_cube] = ACTIONS(59),
    [sym_texture_depth_cube_array] = ACTIONS(59),
    [sym_texture_depth_multisampled_2d] = ACTIONS(59),
    [sym_uint32] = ACTIONS(45),
    [sym_vec2] = ACTIONS(61),
    [sym_vec3] = ACTIONS(61),
    [sym_vec4] = ACTIONS(61),
    [sym_bitcast] = ACTIONS(182),
    [sym_false] = ACTIONS(184),
    [sym_true] = ACTIONS(184),
    [sym_and] = ACTIONS(186),
    [sym_bang] = ACTIONS(186),
    [sym_minus] = ACTIONS(186),
    [sym_paren_left] = ACTIONS(188),
    [sym_star] = ACTIONS(186),
    [sym_tilde] = ACTIONS(186),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym__blankspace] = ACTIONS(5),
    [sym__block_comment] = ACTIONS(5),
  },
  [41] = {
    [sym_bool_literal] = STATE(187),
    [sym_int_literal] = STATE(187),
    [sym_float_literal] = STATE(187),
    [sym_decimal_float_literal] = STATE(183),
    [sym_hex_float_literal] = STATE(183),
    [sym_const_literal] = STATE(182),
    [sym_array_type_decl] = STATE(243),
    [sym_texture_sampler_types] = STATE(243),
    [sym_sampler_type] = STATE(233),
    [sym_sampled_texture_type] = STATE(424),
    [sym_multisampled_texture_type] = STATE(424),
    [sym_storage_texture_type] = STATE(423),
    [sym_depth_texture_type] = STATE(233),
    [sym_type_decl_without_ident] = STATE(422),
    [sym_vec_prefix] = STATE(314),
    [sym_mat_prefix] = STATE(314),
    [sym_primary_expression] = STATE(212),
    [sym_callable] = STATE(341),
    [sym_paren_expression] = STATE(182),
    [sym_unary_expression] = STATE(259),
    [sym_singular_expression] = STATE(193),
    [sym_multiplicative_expression] = STATE(260),
    [sym__comment] = STATE(41),
    [sym_ident] = ACTIONS(150),
    [aux_sym_int_literal_token1] = ACTIONS(152),
    [aux_sym_int_literal_token2] = ACTIONS(152),
    [aux_sym_int_literal_token3] = ACTIONS(152),
    [aux_sym_decimal_float_literal_token1] = ACTIONS(154),
    [aux_sym_decimal_float_literal_token2] = ACTIONS(156),
    [aux_sym_decimal_float_literal_token3] = ACTIONS(154),
    [aux_sym_decimal_float_literal_token4] = ACTIONS(154),
    [aux_sym_decimal_float_literal_token5] = ACTIONS(154),
    [aux_sym_hex_float_literal_token1] = ACTIONS(158),
    [aux_sym_hex_float_literal_token2] = ACTIONS(160),
    [aux_sym_hex_float_literal_token3] = ACTIONS(158),
    [sym_array] = ACTIONS(41),
    [sym_atomic] = ACTIONS(43),
    [sym_bool] = ACTIONS(45),
    [sym_float32] = ACTIONS(45),
    [sym_float16] = ACTIONS(45),
    [sym_int32] = ACTIONS(45),
    [sym_mat2x2] = ACTIONS(47),
    [sym_mat2x3] = ACTIONS(47),
    [sym_mat2x4] = ACTIONS(47),
    [sym_mat3x2] = ACTIONS(47),
    [sym_mat3x3] = ACTIONS(47),
    [sym_mat3x4] = ACTIONS(47),
    [sym_mat4x2] = ACTIONS(47),
    [sym_mat4x3] = ACTIONS(47),
    [sym_mat4x4] = ACTIONS(47),
    [sym_pointer] = ACTIONS(49),
    [sym_sampler] = ACTIONS(51),
    [sym_sampler_comparison] = ACTIONS(51),
    [sym_texture_1d] = ACTIONS(53),
    [sym_texture_2d] = ACTIONS(53),
    [sym_texture_2d_array] = ACTIONS(53),
    [sym_texture_3d] = ACTIONS(53),
    [sym_texture_cube] = ACTIONS(53),
    [sym_texture_cube_array] = ACTIONS(53),
    [sym_texture_multisampled_2d] = ACTIONS(55),
    [sym_texture_storage_1d] = ACTIONS(57),
    [sym_texture_storage_2d] = ACTIONS(57),
    [sym_texture_storage_2d_array] = ACTIONS(57),
    [sym_texture_storage_3d] = ACTIONS(57),
    [sym_texture_depth_2d] = ACTIONS(59),
    [sym_texture_depth_2d_array] = ACTIONS(59),
    [sym_texture_depth_cube] = ACTIONS(59),
    [sym_texture_depth_cube_array] = ACTIONS(59),
    [sym_texture_depth_multisampled_2d] = ACTIONS(59),
    [sym_uint32] = ACTIONS(45),
    [sym_vec2] = ACTIONS(61),
    [sym_vec3] = ACTIONS(61),
    [sym_vec4] = ACTIONS(61),
    [sym_bitcast] = ACTIONS(162),
    [sym_false] = ACTIONS(164),
    [sym_true] = ACTIONS(164),
    [sym_and] = ACTIONS(166),
    [sym_bang] = ACTIONS(166),
    [sym_minus] = ACTIONS(166),
    [sym_paren_left] = ACTIONS(168),
    [sym_star] = ACTIONS(166),
    [sym_tilde] = ACTIONS(166),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym__blankspace] = ACTIONS(5),
    [sym__block_comment] = ACTIONS(5),
  },
  [42] = {
    [sym_bool_literal] = STATE(187),
    [sym_int_literal] = STATE(187),
    [sym_float_literal] = STATE(187),
    [sym_decimal_float_literal] = STATE(183),
    [sym_hex_float_literal] = STATE(183),
    [sym_const_literal] = STATE(182),
    [sym_array_type_decl] = STATE(243),
    [sym_texture_sampler_types] = STATE(243),
    [sym_sampler_type] = STATE(233),
    [sym_sampled_texture_type] = STATE(424),
    [sym_multisampled_texture_type] = STATE(424),
    [sym_storage_texture_type] = STATE(423),
    [sym_depth_texture_type] = STATE(233),
    [sym_type_decl_without_ident] = STATE(422),
    [sym_vec_prefix] = STATE(314),
    [sym_mat_prefix] = STATE(314),
    [sym_primary_expression] = STATE(221),
    [sym_callable] = STATE(341),
    [sym_paren_expression] = STATE(182),
    [sym_unary_expression] = STATE(241),
    [sym_singular_expression] = STATE(193),
    [sym__comment] = STATE(42),
    [sym_ident] = ACTIONS(150),
    [aux_sym_int_literal_token1] = ACTIONS(152),
    [aux_sym_int_literal_token2] = ACTIONS(152),
    [aux_sym_int_literal_token3] = ACTIONS(152),
    [aux_sym_decimal_float_literal_token1] = ACTIONS(154),
    [aux_sym_decimal_float_literal_token2] = ACTIONS(156),
    [aux_sym_decimal_float_literal_token3] = ACTIONS(154),
    [aux_sym_decimal_float_literal_token4] = ACTIONS(154),
    [aux_sym_decimal_float_literal_token5] = ACTIONS(154),
    [aux_sym_hex_float_literal_token1] = ACTIONS(158),
    [aux_sym_hex_float_literal_token2] = ACTIONS(160),
    [aux_sym_hex_float_literal_token3] = ACTIONS(158),
    [sym_array] = ACTIONS(41),
    [sym_atomic] = ACTIONS(43),
    [sym_bool] = ACTIONS(45),
    [sym_float32] = ACTIONS(45),
    [sym_float16] = ACTIONS(45),
    [sym_int32] = ACTIONS(45),
    [sym_mat2x2] = ACTIONS(47),
    [sym_mat2x3] = ACTIONS(47),
    [sym_mat2x4] = ACTIONS(47),
    [sym_mat3x2] = ACTIONS(47),
    [sym_mat3x3] = ACTIONS(47),
    [sym_mat3x4] = ACTIONS(47),
    [sym_mat4x2] = ACTIONS(47),
    [sym_mat4x3] = ACTIONS(47),
    [sym_mat4x4] = ACTIONS(47),
    [sym_pointer] = ACTIONS(49),
    [sym_sampler] = ACTIONS(51),
    [sym_sampler_comparison] = ACTIONS(51),
    [sym_texture_1d] = ACTIONS(53),
    [sym_texture_2d] = ACTIONS(53),
    [sym_texture_2d_array] = ACTIONS(53),
    [sym_texture_3d] = ACTIONS(53),
    [sym_texture_cube] = ACTIONS(53),
    [sym_texture_cube_array] = ACTIONS(53),
    [sym_texture_multisampled_2d] = ACTIONS(55),
    [sym_texture_storage_1d] = ACTIONS(57),
    [sym_texture_storage_2d] = ACTIONS(57),
    [sym_texture_storage_2d_array] = ACTIONS(57),
    [sym_texture_storage_3d] = ACTIONS(57),
    [sym_texture_depth_2d] = ACTIONS(59),
    [sym_texture_depth_2d_array] = ACTIONS(59),
    [sym_texture_depth_cube] = ACTIONS(59),
    [sym_texture_depth_cube_array] = ACTIONS(59),
    [sym_texture_depth_multisampled_2d] = ACTIONS(59),
    [sym_uint32] = ACTIONS(45),
    [sym_vec2] = ACTIONS(61),
    [sym_vec3] = ACTIONS(61),
    [sym_vec4] = ACTIONS(61),
    [sym_bitcast] = ACTIONS(162),
    [sym_false] = ACTIONS(164),
    [sym_true] = ACTIONS(164),
    [sym_and] = ACTIONS(190),
    [sym_bang] = ACTIONS(190),
    [sym_minus] = ACTIONS(190),
    [sym_paren_left] = ACTIONS(168),
    [sym_star] = ACTIONS(190),
    [sym_tilde] = ACTIONS(190),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym__blankspace] = ACTIONS(5),
    [sym__block_comment] = ACTIONS(5),
  },
  [43] = {
    [sym_bool_literal] = STATE(187),
    [sym_int_literal] = STATE(187),
    [sym_float_literal] = STATE(187),
    [sym_decimal_float_literal] = STATE(183),
    [sym_hex_float_literal] = STATE(183),
    [sym_const_literal] = STATE(182),
    [sym_array_type_decl] = STATE(243),
    [sym_texture_sampler_types] = STATE(243),
    [sym_sampler_type] = STATE(233),
    [sym_sampled_texture_type] = STATE(424),
    [sym_multisampled_texture_type] = STATE(424),
    [sym_storage_texture_type] = STATE(423),
    [sym_depth_texture_type] = STATE(233),
    [sym_type_decl_without_ident] = STATE(422),
    [sym_vec_prefix] = STATE(314),
    [sym_mat_prefix] = STATE(314),
    [sym_primary_expression] = STATE(212),
    [sym_callable] = STATE(341),
    [sym_paren_expression] = STATE(182),
    [sym_unary_expression] = STATE(263),
    [sym_singular_expression] = STATE(193),
    [sym__comment] = STATE(43),
    [sym_ident] = ACTIONS(150),
    [aux_sym_int_literal_token1] = ACTIONS(152),
    [aux_sym_int_literal_token2] = ACTIONS(152),
    [aux_sym_int_literal_token3] = ACTIONS(152),
    [aux_sym_decimal_float_literal_token1] = ACTIONS(154),
    [aux_sym_decimal_float_literal_token2] = ACTIONS(156),
    [aux_sym_decimal_float_literal_token3] = ACTIONS(154),
    [aux_sym_decimal_float_literal_token4] = ACTIONS(154),
    [aux_sym_decimal_float_literal_token5] = ACTIONS(154),
    [aux_sym_hex_float_literal_token1] = ACTIONS(158),
    [aux_sym_hex_float_literal_token2] = ACTIONS(160),
    [aux_sym_hex_float_literal_token3] = ACTIONS(158),
    [sym_array] = ACTIONS(41),
    [sym_atomic] = ACTIONS(43),
    [sym_bool] = ACTIONS(45),
    [sym_float32] = ACTIONS(45),
    [sym_float16] = ACTIONS(45),
    [sym_int32] = ACTIONS(45),
    [sym_mat2x2] = ACTIONS(47),
    [sym_mat2x3] = ACTIONS(47),
    [sym_mat2x4] = ACTIONS(47),
    [sym_mat3x2] = ACTIONS(47),
    [sym_mat3x3] = ACTIONS(47),
    [sym_mat3x4] = ACTIONS(47),
    [sym_mat4x2] = ACTIONS(47),
    [sym_mat4x3] = ACTIONS(47),
    [sym_mat4x4] = ACTIONS(47),
    [sym_pointer] = ACTIONS(49),
    [sym_sampler] = ACTIONS(51),
    [sym_sampler_comparison] = ACTIONS(51),
    [sym_texture_1d] = ACTIONS(53),
    [sym_texture_2d] = ACTIONS(53),
    [sym_texture_2d_array] = ACTIONS(53),
    [sym_texture_3d] = ACTIONS(53),
    [sym_texture_cube] = ACTIONS(53),
    [sym_texture_cube_array] = ACTIONS(53),
    [sym_texture_multisampled_2d] = ACTIONS(55),
    [sym_texture_storage_1d] = ACTIONS(57),
    [sym_texture_storage_2d] = ACTIONS(57),
    [sym_texture_storage_2d_array] = ACTIONS(57),
    [sym_texture_storage_3d] = ACTIONS(57),
    [sym_texture_depth_2d] = ACTIONS(59),
    [sym_texture_depth_2d_array] = ACTIONS(59),
    [sym_texture_depth_cube] = ACTIONS(59),
    [sym_texture_depth_cube_array] = ACTIONS(59),
    [sym_texture_depth_multisampled_2d] = ACTIONS(59),
    [sym_uint32] = ACTIONS(45),
    [sym_vec2] = ACTIONS(61),
    [sym_vec3] = ACTIONS(61),
    [sym_vec4] = ACTIONS(61),
    [sym_bitcast] = ACTIONS(162),
    [sym_false] = ACTIONS(164),
    [sym_true] = ACTIONS(164),
    [sym_and] = ACTIONS(166),
    [sym_bang] = ACTIONS(166),
    [sym_minus] = ACTIONS(166),
    [sym_paren_left] = ACTIONS(168),
    [sym_star] = ACTIONS(166),
    [sym_tilde] = ACTIONS(166),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym__blankspace] = ACTIONS(5),
    [sym__block_comment] = ACTIONS(5),
  },
  [44] = {
    [sym_bool_literal] = STATE(187),
    [sym_int_literal] = STATE(187),
    [sym_float_literal] = STATE(187),
    [sym_decimal_float_literal] = STATE(183),
    [sym_hex_float_literal] = STATE(183),
    [sym_const_literal] = STATE(182),
    [sym_array_type_decl] = STATE(243),
    [sym_texture_sampler_types] = STATE(243),
    [sym_sampler_type] = STATE(233),
    [sym_sampled_texture_type] = STATE(424),
    [sym_multisampled_texture_type] = STATE(424),
    [sym_storage_texture_type] = STATE(423),
    [sym_depth_texture_type] = STATE(233),
    [sym_type_decl_without_ident] = STATE(422),
    [sym_vec_prefix] = STATE(314),
    [sym_mat_prefix] = STATE(314),
    [sym_primary_expression] = STATE(221),
    [sym_callable] = STATE(341),
    [sym_paren_expression] = STATE(182),
    [sym_unary_expression] = STATE(195),
    [sym_singular_expression] = STATE(193),
    [sym__comment] = STATE(44),
    [sym_ident] = ACTIONS(150),
    [aux_sym_int_literal_token1] = ACTIONS(152),
    [aux_sym_int_literal_token2] = ACTIONS(152),
    [aux_sym_int_literal_token3] = ACTIONS(152),
    [aux_sym_decimal_float_literal_token1] = ACTIONS(154),
    [aux_sym_decimal_float_literal_token2] = ACTIONS(156),
    [aux_sym_decimal_float_literal_token3] = ACTIONS(154),
    [aux_sym_decimal_float_literal_token4] = ACTIONS(154),
    [aux_sym_decimal_float_literal_token5] = ACTIONS(154),
    [aux_sym_hex_float_literal_token1] = ACTIONS(158),
    [aux_sym_hex_float_literal_token2] = ACTIONS(160),
    [aux_sym_hex_float_literal_token3] = ACTIONS(158),
    [sym_array] = ACTIONS(41),
    [sym_atomic] = ACTIONS(43),
    [sym_bool] = ACTIONS(45),
    [sym_float32] = ACTIONS(45),
    [sym_float16] = ACTIONS(45),
    [sym_int32] = ACTIONS(45),
    [sym_mat2x2] = ACTIONS(47),
    [sym_mat2x3] = ACTIONS(47),
    [sym_mat2x4] = ACTIONS(47),
    [sym_mat3x2] = ACTIONS(47),
    [sym_mat3x3] = ACTIONS(47),
    [sym_mat3x4] = ACTIONS(47),
    [sym_mat4x2] = ACTIONS(47),
    [sym_mat4x3] = ACTIONS(47),
    [sym_mat4x4] = ACTIONS(47),
    [sym_pointer] = ACTIONS(49),
    [sym_sampler] = ACTIONS(51),
    [sym_sampler_comparison] = ACTIONS(51),
    [sym_texture_1d] = ACTIONS(53),
    [sym_texture_2d] = ACTIONS(53),
    [sym_texture_2d_array] = ACTIONS(53),
    [sym_texture_3d] = ACTIONS(53),
    [sym_texture_cube] = ACTIONS(53),
    [sym_texture_cube_array] = ACTIONS(53),
    [sym_texture_multisampled_2d] = ACTIONS(55),
    [sym_texture_storage_1d] = ACTIONS(57),
    [sym_texture_storage_2d] = ACTIONS(57),
    [sym_texture_storage_2d_array] = ACTIONS(57),
    [sym_texture_storage_3d] = ACTIONS(57),
    [sym_texture_depth_2d] = ACTIONS(59),
    [sym_texture_depth_2d_array] = ACTIONS(59),
    [sym_texture_depth_cube] = ACTIONS(59),
    [sym_texture_depth_cube_array] = ACTIONS(59),
    [sym_texture_depth_multisampled_2d] = ACTIONS(59),
    [sym_uint32] = ACTIONS(45),
    [sym_vec2] = ACTIONS(61),
    [sym_vec3] = ACTIONS(61),
    [sym_vec4] = ACTIONS(61),
    [sym_bitcast] = ACTIONS(162),
    [sym_false] = ACTIONS(164),
    [sym_true] = ACTIONS(164),
    [sym_and] = ACTIONS(190),
    [sym_bang] = ACTIONS(190),
    [sym_minus] = ACTIONS(190),
    [sym_paren_left] = ACTIONS(168),
    [sym_star] = ACTIONS(190),
    [sym_tilde] = ACTIONS(190),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym__blankspace] = ACTIONS(5),
    [sym__block_comment] = ACTIONS(5),
  },
  [45] = {
    [sym_bool_literal] = STATE(108),
    [sym_int_literal] = STATE(108),
    [sym_float_literal] = STATE(108),
    [sym_decimal_float_literal] = STATE(110),
    [sym_hex_float_literal] = STATE(110),
    [sym_const_literal] = STATE(111),
    [sym_array_type_decl] = STATE(243),
    [sym_texture_sampler_types] = STATE(243),
    [sym_sampler_type] = STATE(233),
    [sym_sampled_texture_type] = STATE(424),
    [sym_multisampled_texture_type] = STATE(424),
    [sym_storage_texture_type] = STATE(423),
    [sym_depth_texture_type] = STATE(233),
    [sym_type_decl_without_ident] = STATE(422),
    [sym_vec_prefix] = STATE(314),
    [sym_mat_prefix] = STATE(314),
    [sym_primary_expression] = STATE(98),
    [sym_callable] = STATE(312),
    [sym_paren_expression] = STATE(111),
    [sym_unary_expression] = STATE(115),
    [sym_singular_expression] = STATE(118),
    [sym__comment] = STATE(45),
    [sym_ident] = ACTIONS(29),
    [aux_sym_int_literal_token1] = ACTIONS(31),
    [aux_sym_int_literal_token2] = ACTIONS(31),
    [aux_sym_int_literal_token3] = ACTIONS(31),
    [aux_sym_decimal_float_literal_token1] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token2] = ACTIONS(35),
    [aux_sym_decimal_float_literal_token3] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token4] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token5] = ACTIONS(33),
    [aux_sym_hex_float_literal_token1] = ACTIONS(37),
    [aux_sym_hex_float_literal_token2] = ACTIONS(39),
    [aux_sym_hex_float_literal_token3] = ACTIONS(37),
    [sym_array] = ACTIONS(41),
    [sym_atomic] = ACTIONS(43),
    [sym_bool] = ACTIONS(45),
    [sym_float32] = ACTIONS(45),
    [sym_float16] = ACTIONS(45),
    [sym_int32] = ACTIONS(45),
    [sym_mat2x2] = ACTIONS(47),
    [sym_mat2x3] = ACTIONS(47),
    [sym_mat2x4] = ACTIONS(47),
    [sym_mat3x2] = ACTIONS(47),
    [sym_mat3x3] = ACTIONS(47),
    [sym_mat3x4] = ACTIONS(47),
    [sym_mat4x2] = ACTIONS(47),
    [sym_mat4x3] = ACTIONS(47),
    [sym_mat4x4] = ACTIONS(47),
    [sym_pointer] = ACTIONS(49),
    [sym_sampler] = ACTIONS(51),
    [sym_sampler_comparison] = ACTIONS(51),
    [sym_texture_1d] = ACTIONS(53),
    [sym_texture_2d] = ACTIONS(53),
    [sym_texture_2d_array] = ACTIONS(53),
    [sym_texture_3d] = ACTIONS(53),
    [sym_texture_cube] = ACTIONS(53),
    [sym_texture_cube_array] = ACTIONS(53),
    [sym_texture_multisampled_2d] = ACTIONS(55),
    [sym_texture_storage_1d] = ACTIONS(57),
    [sym_texture_storage_2d] = ACTIONS(57),
    [sym_texture_storage_2d_array] = ACTIONS(57),
    [sym_texture_storage_3d] = ACTIONS(57),
    [sym_texture_depth_2d] = ACTIONS(59),
    [sym_texture_depth_2d_array] = ACTIONS(59),
    [sym_texture_depth_cube] = ACTIONS(59),
    [sym_texture_depth_cube_array] = ACTIONS(59),
    [sym_texture_depth_multisampled_2d] = ACTIONS(59),
    [sym_uint32] = ACTIONS(45),
    [sym_vec2] = ACTIONS(61),
    [sym_vec3] = ACTIONS(61),
    [sym_vec4] = ACTIONS(61),
    [sym_bitcast] = ACTIONS(63),
    [sym_false] = ACTIONS(65),
    [sym_true] = ACTIONS(65),
    [sym_and] = ACTIONS(67),
    [sym_bang] = ACTIONS(67),
    [sym_minus] = ACTIONS(67),
    [sym_paren_left] = ACTIONS(69),
    [sym_star] = ACTIONS(67),
    [sym_tilde] = ACTIONS(67),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym__blankspace] = ACTIONS(5),
    [sym__block_comment] = ACTIONS(5),
  },
  [46] = {
    [sym_bool_literal] = STATE(108),
    [sym_int_literal] = STATE(108),
    [sym_float_literal] = STATE(108),
    [sym_decimal_float_literal] = STATE(110),
    [sym_hex_float_literal] = STATE(110),
    [sym_const_literal] = STATE(111),
    [sym_array_type_decl] = STATE(243),
    [sym_texture_sampler_types] = STATE(243),
    [sym_sampler_type] = STATE(233),
    [sym_sampled_texture_type] = STATE(424),
    [sym_multisampled_texture_type] = STATE(424),
    [sym_storage_texture_type] = STATE(423),
    [sym_depth_texture_type] = STATE(233),
    [sym_type_decl_without_ident] = STATE(422),
    [sym_vec_prefix] = STATE(314),
    [sym_mat_prefix] = STATE(314),
    [sym_primary_expression] = STATE(98),
    [sym_callable] = STATE(312),
    [sym_paren_expression] = STATE(111),
    [sym_unary_expression] = STATE(198),
    [sym_singular_expression] = STATE(118),
    [sym__comment] = STATE(46),
    [sym_ident] = ACTIONS(29),
    [aux_sym_int_literal_token1] = ACTIONS(31),
    [aux_sym_int_literal_token2] = ACTIONS(31),
    [aux_sym_int_literal_token3] = ACTIONS(31),
    [aux_sym_decimal_float_literal_token1] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token2] = ACTIONS(35),
    [aux_sym_decimal_float_literal_token3] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token4] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token5] = ACTIONS(33),
    [aux_sym_hex_float_literal_token1] = ACTIONS(37),
    [aux_sym_hex_float_literal_token2] = ACTIONS(39),
    [aux_sym_hex_float_literal_token3] = ACTIONS(37),
    [sym_array] = ACTIONS(41),
    [sym_atomic] = ACTIONS(43),
    [sym_bool] = ACTIONS(45),
    [sym_float32] = ACTIONS(45),
    [sym_float16] = ACTIONS(45),
    [sym_int32] = ACTIONS(45),
    [sym_mat2x2] = ACTIONS(47),
    [sym_mat2x3] = ACTIONS(47),
    [sym_mat2x4] = ACTIONS(47),
    [sym_mat3x2] = ACTIONS(47),
    [sym_mat3x3] = ACTIONS(47),
    [sym_mat3x4] = ACTIONS(47),
    [sym_mat4x2] = ACTIONS(47),
    [sym_mat4x3] = ACTIONS(47),
    [sym_mat4x4] = ACTIONS(47),
    [sym_pointer] = ACTIONS(49),
    [sym_sampler] = ACTIONS(51),
    [sym_sampler_comparison] = ACTIONS(51),
    [sym_texture_1d] = ACTIONS(53),
    [sym_texture_2d] = ACTIONS(53),
    [sym_texture_2d_array] = ACTIONS(53),
    [sym_texture_3d] = ACTIONS(53),
    [sym_texture_cube] = ACTIONS(53),
    [sym_texture_cube_array] = ACTIONS(53),
    [sym_texture_multisampled_2d] = ACTIONS(55),
    [sym_texture_storage_1d] = ACTIONS(57),
    [sym_texture_storage_2d] = ACTIONS(57),
    [sym_texture_storage_2d_array] = ACTIONS(57),
    [sym_texture_storage_3d] = ACTIONS(57),
    [sym_texture_depth_2d] = ACTIONS(59),
    [sym_texture_depth_2d_array] = ACTIONS(59),
    [sym_texture_depth_cube] = ACTIONS(59),
    [sym_texture_depth_cube_array] = ACTIONS(59),
    [sym_texture_depth_multisampled_2d] = ACTIONS(59),
    [sym_uint32] = ACTIONS(45),
    [sym_vec2] = ACTIONS(61),
    [sym_vec3] = ACTIONS(61),
    [sym_vec4] = ACTIONS(61),
    [sym_bitcast] = ACTIONS(63),
    [sym_false] = ACTIONS(65),
    [sym_true] = ACTIONS(65),
    [sym_and] = ACTIONS(67),
    [sym_bang] = ACTIONS(67),
    [sym_minus] = ACTIONS(67),
    [sym_paren_left] = ACTIONS(69),
    [sym_star] = ACTIONS(67),
    [sym_tilde] = ACTIONS(67),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym__blankspace] = ACTIONS(5),
    [sym__block_comment] = ACTIONS(5),
  },
  [47] = {
    [sym_bool_literal] = STATE(108),
    [sym_int_literal] = STATE(108),
    [sym_float_literal] = STATE(108),
    [sym_decimal_float_literal] = STATE(110),
    [sym_hex_float_literal] = STATE(110),
    [sym_const_literal] = STATE(111),
    [sym_array_type_decl] = STATE(243),
    [sym_texture_sampler_types] = STATE(243),
    [sym_sampler_type] = STATE(233),
    [sym_sampled_texture_type] = STATE(424),
    [sym_multisampled_texture_type] = STATE(424),
    [sym_storage_texture_type] = STATE(423),
    [sym_depth_texture_type] = STATE(233),
    [sym_type_decl_without_ident] = STATE(422),
    [sym_vec_prefix] = STATE(314),
    [sym_mat_prefix] = STATE(314),
    [sym_primary_expression] = STATE(98),
    [sym_callable] = STATE(312),
    [sym_paren_expression] = STATE(111),
    [sym_unary_expression] = STATE(245),
    [sym_singular_expression] = STATE(118),
    [sym__comment] = STATE(47),
    [sym_ident] = ACTIONS(29),
    [aux_sym_int_literal_token1] = ACTIONS(31),
    [aux_sym_int_literal_token2] = ACTIONS(31),
    [aux_sym_int_literal_token3] = ACTIONS(31),
    [aux_sym_decimal_float_literal_token1] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token2] = ACTIONS(35),
    [aux_sym_decimal_float_literal_token3] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token4] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token5] = ACTIONS(33),
    [aux_sym_hex_float_literal_token1] = ACTIONS(37),
    [aux_sym_hex_float_literal_token2] = ACTIONS(39),
    [aux_sym_hex_float_literal_token3] = ACTIONS(37),
    [sym_array] = ACTIONS(41),
    [sym_atomic] = ACTIONS(43),
    [sym_bool] = ACTIONS(45),
    [sym_float32] = ACTIONS(45),
    [sym_float16] = ACTIONS(45),
    [sym_int32] = ACTIONS(45),
    [sym_mat2x2] = ACTIONS(47),
    [sym_mat2x3] = ACTIONS(47),
    [sym_mat2x4] = ACTIONS(47),
    [sym_mat3x2] = ACTIONS(47),
    [sym_mat3x3] = ACTIONS(47),
    [sym_mat3x4] = ACTIONS(47),
    [sym_mat4x2] = ACTIONS(47),
    [sym_mat4x3] = ACTIONS(47),
    [sym_mat4x4] = ACTIONS(47),
    [sym_pointer] = ACTIONS(49),
    [sym_sampler] = ACTIONS(51),
    [sym_sampler_comparison] = ACTIONS(51),
    [sym_texture_1d] = ACTIONS(53),
    [sym_texture_2d] = ACTIONS(53),
    [sym_texture_2d_array] = ACTIONS(53),
    [sym_texture_3d] = ACTIONS(53),
    [sym_texture_cube] = ACTIONS(53),
    [sym_texture_cube_array] = ACTIONS(53),
    [sym_texture_multisampled_2d] = ACTIONS(55),
    [sym_texture_storage_1d] = ACTIONS(57),
    [sym_texture_storage_2d] = ACTIONS(57),
    [sym_texture_storage_2d_array] = ACTIONS(57),
    [sym_texture_storage_3d] = ACTIONS(57),
    [sym_texture_depth_2d] = ACTIONS(59),
    [sym_texture_depth_2d_array] = ACTIONS(59),
    [sym_texture_depth_cube] = ACTIONS(59),
    [sym_texture_depth_cube_array] = ACTIONS(59),
    [sym_texture_depth_multisampled_2d] = ACTIONS(59),
    [sym_uint32] = ACTIONS(45),
    [sym_vec2] = ACTIONS(61),
    [sym_vec3] = ACTIONS(61),
    [sym_vec4] = ACTIONS(61),
    [sym_bitcast] = ACTIONS(63),
    [sym_false] = ACTIONS(65),
    [sym_true] = ACTIONS(65),
    [sym_and] = ACTIONS(67),
    [sym_bang] = ACTIONS(67),
    [sym_minus] = ACTIONS(67),
    [sym_paren_left] = ACTIONS(69),
    [sym_star] = ACTIONS(67),
    [sym_tilde] = ACTIONS(67),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym__blankspace] = ACTIONS(5),
    [sym__block_comment] = ACTIONS(5),
  },
  [48] = {
    [sym_bool_literal] = STATE(108),
    [sym_int_literal] = STATE(108),
    [sym_float_literal] = STATE(108),
    [sym_decimal_float_literal] = STATE(110),
    [sym_hex_float_literal] = STATE(110),
    [sym_const_literal] = STATE(111),
    [sym_array_type_decl] = STATE(243),
    [sym_texture_sampler_types] = STATE(243),
    [sym_sampler_type] = STATE(233),
    [sym_sampled_texture_type] = STATE(424),
    [sym_multisampled_texture_type] = STATE(424),
    [sym_storage_texture_type] = STATE(423),
    [sym_depth_texture_type] = STATE(233),
    [sym_type_decl_without_ident] = STATE(422),
    [sym_vec_prefix] = STATE(314),
    [sym_mat_prefix] = STATE(314),
    [sym_primary_expression] = STATE(98),
    [sym_callable] = STATE(312),
    [sym_paren_expression] = STATE(111),
    [sym_unary_expression] = STATE(239),
    [sym_singular_expression] = STATE(118),
    [sym__comment] = STATE(48),
    [sym_ident] = ACTIONS(29),
    [aux_sym_int_literal_token1] = ACTIONS(31),
    [aux_sym_int_literal_token2] = ACTIONS(31),
    [aux_sym_int_literal_token3] = ACTIONS(31),
    [aux_sym_decimal_float_literal_token1] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token2] = ACTIONS(35),
    [aux_sym_decimal_float_literal_token3] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token4] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token5] = ACTIONS(33),
    [aux_sym_hex_float_literal_token1] = ACTIONS(37),
    [aux_sym_hex_float_literal_token2] = ACTIONS(39),
    [aux_sym_hex_float_literal_token3] = ACTIONS(37),
    [sym_array] = ACTIONS(41),
    [sym_atomic] = ACTIONS(43),
    [sym_bool] = ACTIONS(45),
    [sym_float32] = ACTIONS(45),
    [sym_float16] = ACTIONS(45),
    [sym_int32] = ACTIONS(45),
    [sym_mat2x2] = ACTIONS(47),
    [sym_mat2x3] = ACTIONS(47),
    [sym_mat2x4] = ACTIONS(47),
    [sym_mat3x2] = ACTIONS(47),
    [sym_mat3x3] = ACTIONS(47),
    [sym_mat3x4] = ACTIONS(47),
    [sym_mat4x2] = ACTIONS(47),
    [sym_mat4x3] = ACTIONS(47),
    [sym_mat4x4] = ACTIONS(47),
    [sym_pointer] = ACTIONS(49),
    [sym_sampler] = ACTIONS(51),
    [sym_sampler_comparison] = ACTIONS(51),
    [sym_texture_1d] = ACTIONS(53),
    [sym_texture_2d] = ACTIONS(53),
    [sym_texture_2d_array] = ACTIONS(53),
    [sym_texture_3d] = ACTIONS(53),
    [sym_texture_cube] = ACTIONS(53),
    [sym_texture_cube_array] = ACTIONS(53),
    [sym_texture_multisampled_2d] = ACTIONS(55),
    [sym_texture_storage_1d] = ACTIONS(57),
    [sym_texture_storage_2d] = ACTIONS(57),
    [sym_texture_storage_2d_array] = ACTIONS(57),
    [sym_texture_storage_3d] = ACTIONS(57),
    [sym_texture_depth_2d] = ACTIONS(59),
    [sym_texture_depth_2d_array] = ACTIONS(59),
    [sym_texture_depth_cube] = ACTIONS(59),
    [sym_texture_depth_cube_array] = ACTIONS(59),
    [sym_texture_depth_multisampled_2d] = ACTIONS(59),
    [sym_uint32] = ACTIONS(45),
    [sym_vec2] = ACTIONS(61),
    [sym_vec3] = ACTIONS(61),
    [sym_vec4] = ACTIONS(61),
    [sym_bitcast] = ACTIONS(63),
    [sym_false] = ACTIONS(65),
    [sym_true] = ACTIONS(65),
    [sym_and] = ACTIONS(67),
    [sym_bang] = ACTIONS(67),
    [sym_minus] = ACTIONS(67),
    [sym_paren_left] = ACTIONS(69),
    [sym_star] = ACTIONS(67),
    [sym_tilde] = ACTIONS(67),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym__blankspace] = ACTIONS(5),
    [sym__block_comment] = ACTIONS(5),
  },
  [49] = {
    [sym_bool_literal] = STATE(187),
    [sym_int_literal] = STATE(187),
    [sym_float_literal] = STATE(187),
    [sym_decimal_float_literal] = STATE(183),
    [sym_hex_float_literal] = STATE(183),
    [sym_const_literal] = STATE(182),
    [sym_array_type_decl] = STATE(243),
    [sym_texture_sampler_types] = STATE(243),
    [sym_sampler_type] = STATE(233),
    [sym_sampled_texture_type] = STATE(424),
    [sym_multisampled_texture_type] = STATE(424),
    [sym_storage_texture_type] = STATE(423),
    [sym_depth_texture_type] = STATE(233),
    [sym_type_decl_without_ident] = STATE(422),
    [sym_vec_prefix] = STATE(314),
    [sym_mat_prefix] = STATE(314),
    [sym_primary_expression] = STATE(212),
    [sym_callable] = STATE(341),
    [sym_paren_expression] = STATE(182),
    [sym_unary_expression] = STATE(195),
    [sym_singular_expression] = STATE(193),
    [sym__comment] = STATE(49),
    [sym_ident] = ACTIONS(150),
    [aux_sym_int_literal_token1] = ACTIONS(152),
    [aux_sym_int_literal_token2] = ACTIONS(152),
    [aux_sym_int_literal_token3] = ACTIONS(152),
    [aux_sym_decimal_float_literal_token1] = ACTIONS(154),
    [aux_sym_decimal_float_literal_token2] = ACTIONS(156),
    [aux_sym_decimal_float_literal_token3] = ACTIONS(154),
    [aux_sym_decimal_float_literal_token4] = ACTIONS(154),
    [aux_sym_decimal_float_literal_token5] = ACTIONS(154),
    [aux_sym_hex_float_literal_token1] = ACTIONS(158),
    [aux_sym_hex_float_literal_token2] = ACTIONS(160),
    [aux_sym_hex_float_literal_token3] = ACTIONS(158),
    [sym_array] = ACTIONS(41),
    [sym_atomic] = ACTIONS(43),
    [sym_bool] = ACTIONS(45),
    [sym_float32] = ACTIONS(45),
    [sym_float16] = ACTIONS(45),
    [sym_int32] = ACTIONS(45),
    [sym_mat2x2] = ACTIONS(47),
    [sym_mat2x3] = ACTIONS(47),
    [sym_mat2x4] = ACTIONS(47),
    [sym_mat3x2] = ACTIONS(47),
    [sym_mat3x3] = ACTIONS(47),
    [sym_mat3x4] = ACTIONS(47),
    [sym_mat4x2] = ACTIONS(47),
    [sym_mat4x3] = ACTIONS(47),
    [sym_mat4x4] = ACTIONS(47),
    [sym_pointer] = ACTIONS(49),
    [sym_sampler] = ACTIONS(51),
    [sym_sampler_comparison] = ACTIONS(51),
    [sym_texture_1d] = ACTIONS(53),
    [sym_texture_2d] = ACTIONS(53),
    [sym_texture_2d_array] = ACTIONS(53),
    [sym_texture_3d] = ACTIONS(53),
    [sym_texture_cube] = ACTIONS(53),
    [sym_texture_cube_array] = ACTIONS(53),
    [sym_texture_multisampled_2d] = ACTIONS(55),
    [sym_texture_storage_1d] = ACTIONS(57),
    [sym_texture_storage_2d] = ACTIONS(57),
    [sym_texture_storage_2d_array] = ACTIONS(57),
    [sym_texture_storage_3d] = ACTIONS(57),
    [sym_texture_depth_2d] = ACTIONS(59),
    [sym_texture_depth_2d_array] = ACTIONS(59),
    [sym_texture_depth_cube] = ACTIONS(59),
    [sym_texture_depth_cube_array] = ACTIONS(59),
    [sym_texture_depth_multisampled_2d] = ACTIONS(59),
    [sym_uint32] = ACTIONS(45),
    [sym_vec2] = ACTIONS(61),
    [sym_vec3] = ACTIONS(61),
    [sym_vec4] = ACTIONS(61),
    [sym_bitcast] = ACTIONS(162),
    [sym_false] = ACTIONS(164),
    [sym_true] = ACTIONS(164),
    [sym_and] = ACTIONS(166),
    [sym_bang] = ACTIONS(166),
    [sym_minus] = ACTIONS(166),
    [sym_paren_left] = ACTIONS(168),
    [sym_star] = ACTIONS(166),
    [sym_tilde] = ACTIONS(166),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym__blankspace] = ACTIONS(5),
    [sym__block_comment] = ACTIONS(5),
  },
  [50] = {
    [sym_bool_literal] = STATE(144),
    [sym_int_literal] = STATE(144),
    [sym_float_literal] = STATE(144),
    [sym_decimal_float_literal] = STATE(143),
    [sym_hex_float_literal] = STATE(143),
    [sym_const_literal] = STATE(142),
    [sym_array_type_decl] = STATE(243),
    [sym_texture_sampler_types] = STATE(243),
    [sym_sampler_type] = STATE(233),
    [sym_sampled_texture_type] = STATE(424),
    [sym_multisampled_texture_type] = STATE(424),
    [sym_storage_texture_type] = STATE(423),
    [sym_depth_texture_type] = STATE(233),
    [sym_type_decl_without_ident] = STATE(422),
    [sym_vec_prefix] = STATE(314),
    [sym_mat_prefix] = STATE(314),
    [sym_primary_expression] = STATE(136),
    [sym_callable] = STATE(328),
    [sym_paren_expression] = STATE(142),
    [sym_unary_expression] = STATE(163),
    [sym_singular_expression] = STATE(161),
    [sym__comment] = STATE(50),
    [sym_ident] = ACTIONS(170),
    [aux_sym_int_literal_token1] = ACTIONS(172),
    [aux_sym_int_literal_token2] = ACTIONS(172),
    [aux_sym_int_literal_token3] = ACTIONS(172),
    [aux_sym_decimal_float_literal_token1] = ACTIONS(174),
    [aux_sym_decimal_float_literal_token2] = ACTIONS(176),
    [aux_sym_decimal_float_literal_token3] = ACTIONS(174),
    [aux_sym_decimal_float_literal_token4] = ACTIONS(174),
    [aux_sym_decimal_float_literal_token5] = ACTIONS(174),
    [aux_sym_hex_float_literal_token1] = ACTIONS(178),
    [aux_sym_hex_float_literal_token2] = ACTIONS(180),
    [aux_sym_hex_float_literal_token3] = ACTIONS(178),
    [sym_array] = ACTIONS(41),
    [sym_atomic] = ACTIONS(43),
    [sym_bool] = ACTIONS(45),
    [sym_float32] = ACTIONS(45),
    [sym_float16] = ACTIONS(45),
    [sym_int32] = ACTIONS(45),
    [sym_mat2x2] = ACTIONS(47),
    [sym_mat2x3] = ACTIONS(47),
    [sym_mat2x4] = ACTIONS(47),
    [sym_mat3x2] = ACTIONS(47),
    [sym_mat3x3] = ACTIONS(47),
    [sym_mat3x4] = ACTIONS(47),
    [sym_mat4x2] = ACTIONS(47),
    [sym_mat4x3] = ACTIONS(47),
    [sym_mat4x4] = ACTIONS(47),
    [sym_pointer] = ACTIONS(49),
    [sym_sampler] = ACTIONS(51),
    [sym_sampler_comparison] = ACTIONS(51),
    [sym_texture_1d] = ACTIONS(53),
    [sym_texture_2d] = ACTIONS(53),
    [sym_texture_2d_array] = ACTIONS(53),
    [sym_texture_3d] = ACTIONS(53),
    [sym_texture_cube] = ACTIONS(53),
    [sym_texture_cube_array] = ACTIONS(53),
    [sym_texture_multisampled_2d] = ACTIONS(55),
    [sym_texture_storage_1d] = ACTIONS(57),
    [sym_texture_storage_2d] = ACTIONS(57),
    [sym_texture_storage_2d_array] = ACTIONS(57),
    [sym_texture_storage_3d] = ACTIONS(57),
    [sym_texture_depth_2d] = ACTIONS(59),
    [sym_texture_depth_2d_array] = ACTIONS(59),
    [sym_texture_depth_cube] = ACTIONS(59),
    [sym_texture_depth_cube_array] = ACTIONS(59),
    [sym_texture_depth_multisampled_2d] = ACTIONS(59),
    [sym_uint32] = ACTIONS(45),
    [sym_vec2] = ACTIONS(61),
    [sym_vec3] = ACTIONS(61),
    [sym_vec4] = ACTIONS(61),
    [sym_bitcast] = ACTIONS(182),
    [sym_false] = ACTIONS(184),
    [sym_true] = ACTIONS(184),
    [sym_and] = ACTIONS(186),
    [sym_bang] = ACTIONS(186),
    [sym_minus] = ACTIONS(186),
    [sym_paren_left] = ACTIONS(188),
    [sym_star] = ACTIONS(186),
    [sym_tilde] = ACTIONS(186),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym__blankspace] = ACTIONS(5),
    [sym__block_comment] = ACTIONS(5),
  },
  [51] = {
    [sym_bool_literal] = STATE(108),
    [sym_int_literal] = STATE(108),
    [sym_float_literal] = STATE(108),
    [sym_decimal_float_literal] = STATE(110),
    [sym_hex_float_literal] = STATE(110),
    [sym_const_literal] = STATE(111),
    [sym_array_type_decl] = STATE(243),
    [sym_texture_sampler_types] = STATE(243),
    [sym_sampler_type] = STATE(233),
    [sym_sampled_texture_type] = STATE(424),
    [sym_multisampled_texture_type] = STATE(424),
    [sym_storage_texture_type] = STATE(423),
    [sym_depth_texture_type] = STATE(233),
    [sym_type_decl_without_ident] = STATE(422),
    [sym_vec_prefix] = STATE(314),
    [sym_mat_prefix] = STATE(314),
    [sym_primary_expression] = STATE(98),
    [sym_callable] = STATE(312),
    [sym_paren_expression] = STATE(111),
    [sym_unary_expression] = STATE(160),
    [sym_singular_expression] = STATE(118),
    [sym__comment] = STATE(51),
    [sym_ident] = ACTIONS(29),
    [aux_sym_int_literal_token1] = ACTIONS(31),
    [aux_sym_int_literal_token2] = ACTIONS(31),
    [aux_sym_int_literal_token3] = ACTIONS(31),
    [aux_sym_decimal_float_literal_token1] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token2] = ACTIONS(35),
    [aux_sym_decimal_float_literal_token3] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token4] = ACTIONS(33),
    [aux_sym_decimal_float_literal_token5] = ACTIONS(33),
    [aux_sym_hex_float_literal_token1] = ACTIONS(37),
    [aux_sym_hex_float_literal_token2] = ACTIONS(39),
    [aux_sym_hex_float_literal_token3] = ACTIONS(37),
    [sym_array] = ACTIONS(41),
    [sym_atomic] = ACTIONS(43),
    [sym_bool] = ACTIONS(45),
    [sym_float32] = ACTIONS(45),
    [sym_float16] = ACTIONS(45),
    [sym_int32] = ACTIONS(45),
    [sym_mat2x2] = ACTIONS(47),
    [sym_mat2x3] = ACTIONS(47),
    [sym_mat2x4] = ACTIONS(47),
    [sym_mat3x2] = ACTIONS(47),
    [sym_mat3x3] = ACTIONS(47),
    [sym_mat3x4] = ACTIONS(47),
    [sym_mat4x2] = ACTIONS(47),
    [sym_mat4x3] = ACTIONS(47),
    [sym_mat4x4] = ACTIONS(47),
    [sym_pointer] = ACTIONS(49),
    [sym_sampler] = ACTIONS(51),
    [sym_sampler_comparison] = ACTIONS(51),
    [sym_texture_1d] = ACTIONS(53),
    [sym_texture_2d] = ACTIONS(53),
    [sym_texture_2d_array] = ACTIONS(53),
    [sym_texture_3d] = ACTIONS(53),
    [sym_texture_cube] = ACTIONS(53),
    [sym_texture_cube_array] = ACTIONS(53),
    [sym_texture_multisampled_2d] = ACTIONS(55),
    [sym_texture_storage_1d] = ACTIONS(57),
    [sym_texture_storage_2d] = ACTIONS(57),
    [sym_texture_storage_2d_array] = ACTIONS(57),
    [sym_texture_storage_3d] = ACTIONS(57),
    [sym_texture_depth_2d] = ACTIONS(59),
    [sym_texture_depth_2d_array] = ACTIONS(59),
    [sym_texture_depth_cube] = ACTIONS(59),
    [sym_texture_depth_cube_array] = ACTIONS(59),
    [sym_texture_depth_multisampled_2d] = ACTIONS(59),
    [sym_uint32] = ACTIONS(45),
    [sym_vec2] = ACTIONS(61),
    [sym_vec3] = ACTIONS(61),
    [sym_vec4] = ACTIONS(61),
    [sym_bitcast] = ACTIONS(63),
    [sym_false] = ACTIONS(65),
    [sym_true] = ACTIONS(65),
    [sym_and] = ACTIONS(67),
    [sym_bang] = ACTIONS(67),
    [sym_minus] = ACTIONS(67),
    [sym_paren_left] = ACTIONS(69),
    [sym_star] = ACTIONS(67),
    [sym_tilde] = ACTIONS(67),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym__blankspace] = ACTIONS(5),
    [sym__block_comment] = ACTIONS(5),
  },
  [52] = {
    [sym_bool_literal] = STATE(187),
    [sym_int_literal] = STATE(187),
    [sym_float_literal] = STATE(187),
    [sym_decimal_float_literal] = STATE(183),
    [sym_hex_float_literal] = STATE(183),
    [sym_const_literal] = STATE(182),
    [sym_array_type_decl] = STATE(243),
    [sym_texture_sampler_types] = STATE(243),
    [sym_sampler_type] = STATE(233),
    [sym_sampled_texture_type] = STATE(424),
    [sym_multisampled_texture_type] = STATE(424),
    [sym_storage_texture_type] = STATE(423),
    [sym_depth_texture_type] = STATE(233),
    [sym_type_decl_without_ident] = STATE(422),
    [sym_vec_prefix] = STATE(314),
    [sym_mat_prefix] = STATE(314),
    [sym_primary_expression] = STATE(212),
    [sym_callable] = STATE(341),
    [sym_paren_expression] = STATE(182),
    [sym_unary_expression] = STATE(245),
    [sym_singular_expression] = STATE(193),
    [sym__comment] = STATE(52),
    [sym_ident] = ACTIONS(150),
    [aux_sym_int_literal_token1] = ACTIONS(152),
    [aux_sym_int_literal_token2] = ACTIONS(152),
    [aux_sym_int_literal_token3] = ACTIONS(152),
    [aux_sym_decimal_float_literal_token1] = ACTIONS(154),
    [aux_sym_decimal_float_literal_token2] = ACTIONS(156),
    [aux_sym_decimal_float_literal_token3] = ACTIONS(154),
    [aux_sym_decimal_float_literal_token4] = ACTIONS(154),
    [aux_sym_decimal_float_literal_token5] = ACTIONS(154),
    [aux_sym_hex_float_literal_token1] = ACTIONS(158),
    [aux_sym_hex_float_literal_token2] = ACTIONS(160),
    [aux_sym_hex_float_literal_token3] = ACTIONS(158),
    [sym_array] = ACTIONS(41),
    [sym_atomic] = ACTIONS(43),
    [sym_bool] = ACTIONS(45),
    [sym_float32] = ACTIONS(45),
    [sym_float16] = ACTIONS(45),
    [sym_int32] = ACTIONS(45),
    [sym_mat2x2] = ACTIONS(47),
    [sym_mat2x3] = ACTIONS(47),
    [sym_mat2x4] = ACTIONS(47),
    [sym_mat3x2] = ACTIONS(47),
    [sym_mat3x3] = ACTIONS(47),
    [sym_mat3x4] = ACTIONS(47),
    [sym_mat4x2] = ACTIONS(47),
    [sym_mat4x3] = ACTIONS(47),
    [sym_mat4x4] = ACTIONS(47),
    [sym_pointer] = ACTIONS(49),
    [sym_sampler] = ACTIONS(51),
    [sym_sampler_comparison] = ACTIONS(51),
    [sym_texture_1d] = ACTIONS(53),
    [sym_texture_2d] = ACTIONS(53),
    [sym_texture_2d_array] = ACTIONS(53),
    [sym_texture_3d] = ACTIONS(53),
    [sym_texture_cube] = ACTIONS(53),
    [sym_texture_cube_array] = ACTIONS(53),
    [sym_texture_multisampled_2d] = ACTIONS(55),
    [sym_texture_storage_1d] = ACTIONS(57),
    [sym_texture_storage_2d] = ACTIONS(57),
    [sym_texture_storage_2d_array] = ACTIONS(57),
    [sym_texture_storage_3d] = ACTIONS(57),
    [sym_texture_depth_2d] = ACTIONS(59),
    [sym_texture_depth_2d_array] = ACTIONS(59),
    [sym_texture_depth_cube] = ACTIONS(59),
    [sym_texture_depth_cube_array] = ACTIONS(59),
    [sym_texture_depth_multisampled_2d] = ACTIONS(59),
    [sym_uint32] = ACTIONS(45),
    [sym_vec2] = ACTIONS(61),
    [sym_vec3] = ACTIONS(61),
    [sym_vec4] = ACTIONS(61),
    [sym_bitcast] = ACTIONS(162),
    [sym_false] = ACTIONS(164),
    [sym_true] = ACTIONS(164),
    [sym_and] = ACTIONS(166),
    [sym_bang] = ACTIONS(166),
    [sym_minus] = ACTIONS(166),
    [sym_paren_left] = ACTIONS(168),
    [sym_star] = ACTIONS(166),
    [sym_tilde] = ACTIONS(166),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym__blankspace] = ACTIONS(5),
    [sym__block_comment] = ACTIONS(5),
  },
  [53] = {
    [sym_bool_literal] = STATE(187),
    [sym_int_literal] = STATE(187),
    [sym_float_literal] = STATE(187),
    [sym_decimal_float_literal] = STATE(183),
    [sym_hex_float_literal] = STATE(183),
    [sym_const_literal] = STATE(182),
    [sym_array_type_decl] = STATE(243),
    [sym_texture_sampler_types] = STATE(243),
    [sym_sampler_type] = STATE(233),
    [sym_sampled_texture_type] = STATE(424),
    [sym_multisampled_texture_type] = STATE(424),
    [sym_storage_texture_type] = STATE(423),
    [sym_depth_texture_type] = STATE(233),
    [sym_type_decl_without_ident] = STATE(422),
    [sym_vec_prefix] = STATE(314),
    [sym_mat_prefix] = STATE(314),
    [sym_primary_expression] = STATE(212),
    [sym_callable] = STATE(341),
    [sym_paren_expression] = STATE(182),
    [sym_unary_expression] = STATE(239),
    [sym_singular_expression] = STATE(193),
    [sym__comment] = STATE(53),
    [sym_ident] = ACTIONS(150),
    [aux_sym_int_literal_token1] = ACTIONS(152),
    [aux_sym_int_literal_token2] = ACTIONS(152),
    [aux_sym_int_literal_token3] = ACTIONS(152),
    [aux_sym_decimal_float_literal_token1] = ACTIONS(154),
    [aux_sym_decimal_float_literal_token2] = ACTIONS(156),
    [aux_sym_decimal_float_literal_token3] = ACTIONS(154),
    [aux_sym_decimal_float_literal_token4] = ACTIONS(154),
    [aux_sym_decimal_float_literal_token5] = ACTIONS(154),
    [aux_sym_hex_float_literal_token1] = ACTIONS(158),
    [aux_sym_hex_float_literal_token2] = ACTIONS(160),
    [aux_sym_hex_float_literal_token3] = ACTIONS(158),
    [sym_array] = ACTIONS(41),
    [sym_atomic] = ACTIONS(43),
    [sym_bool] = ACTIONS(45),
    [sym_float32] = ACTIONS(45),
    [sym_float16] = ACTIONS(45),
    [sym_int32] = ACTIONS(45),
    [sym_mat2x2] = ACTIONS(47),
    [sym_mat2x3] = ACTIONS(47),
    [sym_mat2x4] = ACTIONS(47),
    [sym_mat3x2] = ACTIONS(47),
    [sym_mat3x3] = ACTIONS(47),
    [sym_mat3x4] = ACTIONS(47),
    [sym_mat4x2] = ACTIONS(47),
    [sym_mat4x3] = ACTIONS(47),
    [sym_mat4x4] = ACTIONS(47),
    [sym_pointer] = ACTIONS(49),
    [sym_sampler] = ACTIONS(51),
    [sym_sampler_comparison] = ACTIONS(51),
    [sym_texture_1d] = ACTIONS(53),
    [sym_texture_2d] = ACTIONS(53),
    [sym_texture_2d_array] = ACTIONS(53),
    [sym_texture_3d] = ACTIONS(53),
    [sym_texture_cube] = ACTIONS(53),
    [sym_texture_cube_array] = ACTIONS(53),
    [sym_texture_multisampled_2d] = ACTIONS(55),
    [sym_texture_storage_1d] = ACTIONS(57),
    [sym_texture_storage_2d] = ACTIONS(57),
    [sym_texture_storage_2d_array] = ACTIONS(57),
    [sym_texture_storage_3d] = ACTIONS(57),
    [sym_texture_depth_2d] = ACTIONS(59),
    [sym_texture_depth_2d_array] = ACTIONS(59),
    [sym_texture_depth_cube] = ACTIONS(59),
    [sym_texture_depth_cube_array] = ACTIONS(59),
    [sym_texture_depth_multisampled_2d] = ACTIONS(59),
    [sym_uint32] = ACTIONS(45),
    [sym_vec2] = ACTIONS(61),
    [sym_vec3] = ACTIONS(61),
    [sym_vec4] = ACTIONS(61),
    [sym_bitcast] = ACTIONS(162),
    [sym_false] = ACTIONS(164),
    [sym_true] = ACTIONS(164),
    [sym_and] = ACTIONS(166),
    [sym_bang] = ACTIONS(166),
    [sym_minus] = ACTIONS(166),
    [sym_paren_left] = ACTIONS(168),
    [sym_star] = ACTIONS(166),
    [sym_tilde] = ACTIONS(166),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym__blankspace] = ACTIONS(5),
    [sym__block_comment] = ACTIONS(5),
  },
  [54] = {
    [sym_bool_literal] = STATE(187),
    [sym_int_literal] = STATE(187),
    [sym_float_literal] = STATE(187),
    [sym_decimal_float_literal] = STATE(183),
    [sym_hex_float_literal] = STATE(183),
    [sym_const_literal] = STATE(182),
    [sym_array_type_decl] = STATE(243),
    [sym_texture_sampler_types] = STATE(243),
    [sym_sampler_type] = STATE(233),
    [sym_sampled_texture_type] = STATE(424),
    [sym_multisampled_texture_type] = STATE(424),
    [sym_storage_texture_type] = STATE(423),
    [sym_depth_texture_type] = STATE(233),
    [sym_type_decl_without_ident] = STATE(422),
    [sym_vec_prefix] = STATE(314),
    [sym_mat_prefix] = STATE(314),
    [sym_primary_expression] = STATE(212),
    [sym_callable] = STATE(341),
    [sym_paren_expression] = STATE(182),
    [sym_unary_expression] = STATE(241),
    [sym_singular_expression] = STATE(193),
    [sym__comment] = STATE(54),
    [sym_ident] = ACTIONS(150),
    [aux_sym_int_literal_token1] = ACTIONS(152),
    [aux_sym_int_literal_token2] = ACTIONS(152),
    [aux_sym_int_literal_token3] = ACTIONS(152),
    [aux_sym_decimal_float_literal_token1] = ACTIONS(154),
    [aux_sym_decimal_float_literal_token2] = ACTIONS(156),
    [aux_sym_decimal_float_literal_token3] = ACTIONS(154),
    [aux_sym_decimal_float_literal_token4] = ACTIONS(154),
    [aux_sym_decimal_float_literal_token5] = ACTIONS(154),
    [aux_sym_hex_float_literal_token1] = ACTIONS(158),
    [aux_sym_hex_float_literal_token2] = ACTIONS(160),
    [aux_sym_hex_float_literal_token3] = ACTIONS(158),
    [sym_array] = ACTIONS(41),
    [sym_atomic] = ACTIONS(43),
    [sym_bool] = ACTIONS(45),
    [sym_float32] = ACTIONS(45),
    [sym_float16] = ACTIONS(45),
    [sym_int32] = ACTIONS(45),
    [sym_mat2x2] = ACTIONS(47),
    [sym_mat2x3] = ACTIONS(47),
    [sym_mat2x4] = ACTIONS(47),
    [sym_mat3x2] = ACTIONS(47),
    [sym_mat3x3] = ACTIONS(47),
    [sym_mat3x4] = ACTIONS(47),
    [sym_mat4x2] = ACTIONS(47),
    [sym_mat4x3] = ACTIONS(47),
    [sym_mat4x4] = ACTIONS(47),
    [sym_pointer] = ACTIONS(49),
    [sym_sampler] = ACTIONS(51),
    [sym_sampler_comparison] = ACTIONS(51),
    [sym_texture_1d] = ACTIONS(53),
    [sym_texture_2d] = ACTIONS(53),
    [sym_texture_2d_array] = ACTIONS(53),
    [sym_texture_3d] = ACTIONS(53),
    [sym_texture_cube] = ACTIONS(53),
    [sym_texture_cube_array] = ACTIONS(53),
    [sym_texture_multisampled_2d] = ACTIONS(55),
    [sym_texture_storage_1d] = ACTIONS(57),
    [sym_texture_storage_2d] = ACTIONS(57),
    [sym_texture_storage_2d_array] = ACTIONS(57),
    [sym_texture_storage_3d] = ACTIONS(57),
    [sym_texture_depth_2d] = ACTIONS(59),
    [sym_texture_depth_2d_array] = ACTIONS(59),
    [sym_texture_depth_cube] = ACTIONS(59),
    [sym_texture_depth_cube_array] = ACTIONS(59),
    [sym_texture_depth_multisampled_2d] = ACTIONS(59),
    [sym_uint32] = ACTIONS(45),
    [sym_vec2] = ACTIONS(61),
    [sym_vec3] = ACTIONS(61),
    [sym_vec4] = ACTIONS(61),
    [sym_bitcast] = ACTIONS(162),
    [sym_false] = ACTIONS(164),
    [sym_true] = ACTIONS(164),
    [sym_and] = ACTIONS(166),
    [sym_bang] = ACTIONS(166),
    [sym_minus] = ACTIONS(166),
    [sym_paren_left] = ACTIONS(168),
    [sym_star] = ACTIONS(166),
    [sym_tilde] = ACTIONS(166),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym__blankspace] = ACTIONS(5),
    [sym__block_comment] = ACTIONS(5),
  },
  [55] = {
    [sym_bool_literal] = STATE(144),
    [sym_int_literal] = STATE(144),
    [sym_float_literal] = STATE(144),
    [sym_decimal_float_literal] = STATE(143),
    [sym_hex_float_literal] = STATE(143),
    [sym_const_literal] = STATE(142),
    [sym_array_type_decl] = STATE(243),
    [sym_texture_sampler_types] = STATE(243),
    [sym_sampler_type] = STATE(233),
    [sym_sampled_texture_type] = STATE(424),
    [sym_multisampled_texture_type] = STATE(424),
    [sym_storage_texture_type] = STATE(423),
    [sym_depth_texture_type] = STATE(233),
    [sym_type_decl_without_ident] = STATE(422),
    [sym_vec_prefix] = STATE(314),
    [sym_mat_prefix] = STATE(314),
    [sym_primary_expression] = STATE(136),
    [sym_callable] = STATE(328),
    [sym_paren_expression] = STATE(142),
    [sym_unary_expression] = STATE(198),
    [sym_singular_expression] = STATE(161),
    [sym__comment] = STATE(55),
    [sym_ident] = ACTIONS(170),
    [aux_sym_int_literal_token1] = ACTIONS(172),
    [aux_sym_int_literal_token2] = ACTIONS(172),
    [aux_sym_int_literal_token3] = ACTIONS(172),
    [aux_sym_decimal_float_literal_token1] = ACTIONS(174),
    [aux_sym_decimal_float_literal_token2] = ACTIONS(176),
    [aux_sym_decimal_float_literal_token3] = ACTIONS(174),
    [aux_sym_decimal_float_literal_token4] = ACTIONS(174),
    [aux_sym_decimal_float_literal_token5] = ACTIONS(174),
    [aux_sym_hex_float_literal_token1] = ACTIONS(178),
    [aux_sym_hex_float_literal_token2] = ACTIONS(180),
    [aux_sym_hex_float_literal_token3] = ACTIONS(178),
    [sym_array] = ACTIONS(41),
    [sym_atomic] = ACTIONS(43),
    [sym_bool] = ACTIONS(45),
    [sym_float32] = ACTIONS(45),
    [sym_float16] = ACTIONS(45),
    [sym_int32] = ACTIONS(45),
    [sym_mat2x2] = ACTIONS(47),
    [sym_mat2x3] = ACTIONS(47),
    [sym_mat2x4] = ACTIONS(47),
    [sym_mat3x2] = ACTIONS(47),
    [sym_mat3x3] = ACTIONS(47),
    [sym_mat3x4] = ACTIONS(47),
    [sym_mat4x2] = ACTIONS(47),
    [sym_mat4x3] = ACTIONS(47),
    [sym_mat4x4] = ACTIONS(47),
    [sym_pointer] = ACTIONS(49),
    [sym_sampler] = ACTIONS(51),
    [sym_sampler_comparison] = ACTIONS(51),
    [sym_texture_1d] = ACTIONS(53),
    [sym_texture_2d] = ACTIONS(53),
    [sym_texture_2d_array] = ACTIONS(53),
    [sym_texture_3d] = ACTIONS(53),
    [sym_texture_cube] = ACTIONS(53),
    [sym_texture_cube_array] = ACTIONS(53),
    [sym_texture_multisampled_2d] = ACTIONS(55),
    [sym_texture_storage_1d] = ACTIONS(57),
    [sym_texture_storage_2d] = ACTIONS(57),
    [sym_texture_storage_2d_array] = ACTIONS(57),
    [sym_texture_storage_3d] = ACTIONS(57),
    [sym_texture_depth_2d] = ACTIONS(59),
    [sym_texture_depth_2d_array] = ACTIONS(59),
    [sym_texture_depth_cube] = ACTIONS(59),
    [sym_texture_depth_cube_array] = ACTIONS(59),
    [sym_texture_depth_multisampled_2d] = ACTIONS(59),
    [sym_uint32] = ACTIONS(45),
    [sym_vec2] = ACTIONS(61),
    [sym_vec3] = ACTIONS(61),
    [sym_vec4] = ACTIONS(61),
    [sym_bitcast] = ACTIONS(182),
    [sym_false] = ACTIONS(184),
    [sym_true] = ACTIONS(184),
    [sym_and] = ACTIONS(186),
    [sym_bang] = ACTIONS(186),
    [sym_minus] = ACTIONS(186),
    [sym_paren_left] = ACTIONS(188),
    [sym_star] = ACTIONS(186),
    [sym_tilde] = ACTIONS(186),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym__blankspace] = ACTIONS(5),
    [sym__block_comment] = ACTIONS(5),
  },
  [56] = {
    [sym_bool_literal] = STATE(144),
    [sym_int_literal] = STATE(144),
    [sym_float_literal] = STATE(144),
    [sym_decimal_float_literal] = STATE(143),
    [sym_hex_float_literal] = STATE(143),
    [sym_const_literal] = STATE(142),
    [sym_array_type_decl] = STATE(243),
    [sym_texture_sampler_types] = STATE(243),
    [sym_sampler_type] = STATE(233),
    [sym_sampled_texture_type] = STATE(424),
    [sym_multisampled_texture_type] = STATE(424),
    [sym_storage_texture_type] = STATE(423),
    [sym_depth_texture_type] = STATE(233),
    [sym_type_decl_without_ident] = STATE(422),
    [sym_vec_prefix] = STATE(314),
    [sym_mat_prefix] = STATE(314),
    [sym_primary_expression] = STATE(136),
    [sym_callable] = STATE(328),
    [sym_paren_expression] = STATE(142),
    [sym_unary_expression] = STATE(160),
    [sym_singular_expression] = STATE(161),
    [sym__comment] = STATE(56),
    [sym_ident] = ACTIONS(170),
    [aux_sym_int_literal_token1] = ACTIONS(172),
    [aux_sym_int_literal_token2] = ACTIONS(172),
    [aux_sym_int_literal_token3] = ACTIONS(172),
    [aux_sym_decimal_float_literal_token1] = ACTIONS(174),
    [aux_sym_decimal_float_literal_token2] = ACTIONS(176),
    [aux_sym_decimal_float_literal_token3] = ACTIONS(174),
    [aux_sym_decimal_float_literal_token4] = ACTIONS(174),
    [aux_sym_decimal_float_literal_token5] = ACTIONS(174),
    [aux_sym_hex_float_literal_token1] = ACTIONS(178),
    [aux_sym_hex_float_literal_token2] = ACTIONS(180),
    [aux_sym_hex_float_literal_token3] = ACTIONS(178),
    [sym_array] = ACTIONS(41),
    [sym_atomic] = ACTIONS(43),
    [sym_bool] = ACTIONS(45),
    [sym_float32] = ACTIONS(45),
    [sym_float16] = ACTIONS(45),
    [sym_int32] = ACTIONS(45),
    [sym_mat2x2] = ACTIONS(47),
    [sym_mat2x3] = ACTIONS(47),
    [sym_mat2x4] = ACTIONS(47),
    [sym_mat3x2] = ACTIONS(47),
    [sym_mat3x3] = ACTIONS(47),
    [sym_mat3x4] = ACTIONS(47),
    [sym_mat4x2] = ACTIONS(47),
    [sym_mat4x3] = ACTIONS(47),
    [sym_mat4x4] = ACTIONS(47),
    [sym_pointer] = ACTIONS(49),
    [sym_sampler] = ACTIONS(51),
    [sym_sampler_comparison] = ACTIONS(51),
    [sym_texture_1d] = ACTIONS(53),
    [sym_texture_2d] = ACTIONS(53),
    [sym_texture_2d_array] = ACTIONS(53),
    [sym_texture_3d] = ACTIONS(53),
    [sym_texture_cube] = ACTIONS(53),
    [sym_texture_cube_array] = ACTIONS(53),
    [sym_texture_multisampled_2d] = ACTIONS(55),
    [sym_texture_storage_1d] = ACTIONS(57),
    [sym_texture_storage_2d] = ACTIONS(57),
    [sym_texture_storage_2d_array] = ACTIONS(57),
    [sym_texture_storage_3d] = ACTIONS(57),
    [sym_texture_depth_2d] = ACTIONS(59),
    [sym_texture_depth_2d_array] = ACTIONS(59),
    [sym_texture_depth_cube] = ACTIONS(59),
    [sym_texture_depth_cube_array] = ACTIONS(59),
    [sym_texture_depth_multisampled_2d] = ACTIONS(59),
    [sym_uint32] = ACTIONS(45),
    [sym_vec2] = ACTIONS(61),
    [sym_vec3] = ACTIONS(61),
    [sym_vec4] = ACTIONS(61),
    [sym_bitcast] = ACTIONS(182),
    [sym_false] = ACTIONS(184),
    [sym_true] = ACTIONS(184),
    [sym_and] = ACTIONS(186),
    [sym_bang] = ACTIONS(186),
    [sym_minus] = ACTIONS(186),
    [sym_paren_left] = ACTIONS(188),
    [sym_star] = ACTIONS(186),
    [sym_tilde] = ACTIONS(186),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym__blankspace] = ACTIONS(5),
    [sym__block_comment] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(196), 1,
      sym_paren_right,
    STATE(57), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(194), 12,
      aux_sym_decimal_float_literal_token1,
      aux_sym_decimal_float_literal_token3,
      aux_sym_decimal_float_literal_token4,
      aux_sym_decimal_float_literal_token5,
      aux_sym_hex_float_literal_token1,
      aux_sym_hex_float_literal_token3,
      sym_and,
      sym_bang,
      sym_minus,
      sym_paren_left,
      sym_star,
      sym_tilde,
    ACTIONS(192), 47,
      aux_sym_int_literal_token1,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      aux_sym_decimal_float_literal_token2,
      aux_sym_hex_float_literal_token2,
      sym_array,
      sym_atomic,
      sym_bool,
      sym_float32,
      sym_float16,
      sym_int32,
      sym_mat2x2,
      sym_mat2x3,
      sym_mat2x4,
      sym_mat3x2,
      sym_mat3x3,
      sym_mat3x4,
      sym_mat4x2,
      sym_mat4x3,
      sym_mat4x4,
      sym_pointer,
      sym_sampler,
      sym_sampler_comparison,
      sym_texture_1d,
      sym_texture_2d,
      sym_texture_2d_array,
      sym_texture_3d,
      sym_texture_cube,
      sym_texture_cube_array,
      sym_texture_multisampled_2d,
      sym_texture_storage_1d,
      sym_texture_storage_2d,
      sym_texture_storage_2d_array,
      sym_texture_storage_3d,
      sym_texture_depth_2d,
      sym_texture_depth_2d_array,
      sym_texture_depth_cube,
      sym_texture_depth_cube_array,
      sym_texture_depth_multisampled_2d,
      sym_uint32,
      sym_vec2,
      sym_vec3,
      sym_vec4,
      sym_bitcast,
      sym_false,
      sym_true,
      sym_ident,
  [77] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(198), 1,
      sym_paren_right,
    STATE(58), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(194), 12,
      aux_sym_decimal_float_literal_token1,
      aux_sym_decimal_float_literal_token3,
      aux_sym_decimal_float_literal_token4,
      aux_sym_decimal_float_literal_token5,
      aux_sym_hex_float_literal_token1,
      aux_sym_hex_float_literal_token3,
      sym_and,
      sym_bang,
      sym_minus,
      sym_paren_left,
      sym_star,
      sym_tilde,
    ACTIONS(192), 47,
      aux_sym_int_literal_token1,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      aux_sym_decimal_float_literal_token2,
      aux_sym_hex_float_literal_token2,
      sym_array,
      sym_atomic,
      sym_bool,
      sym_float32,
      sym_float16,
      sym_int32,
      sym_mat2x2,
      sym_mat2x3,
      sym_mat2x4,
      sym_mat3x2,
      sym_mat3x3,
      sym_mat3x4,
      sym_mat4x2,
      sym_mat4x3,
      sym_mat4x4,
      sym_pointer,
      sym_sampler,
      sym_sampler_comparison,
      sym_texture_1d,
      sym_texture_2d,
      sym_texture_2d_array,
      sym_texture_3d,
      sym_texture_cube,
      sym_texture_cube_array,
      sym_texture_multisampled_2d,
      sym_texture_storage_1d,
      sym_texture_storage_2d,
      sym_texture_storage_2d_array,
      sym_texture_storage_3d,
      sym_texture_depth_2d,
      sym_texture_depth_2d_array,
      sym_texture_depth_cube,
      sym_texture_depth_cube_array,
      sym_texture_depth_multisampled_2d,
      sym_uint32,
      sym_vec2,
      sym_vec3,
      sym_vec4,
      sym_bitcast,
      sym_false,
      sym_true,
      sym_ident,
  [154] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(200), 1,
      sym_paren_right,
    STATE(59), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(194), 12,
      aux_sym_decimal_float_literal_token1,
      aux_sym_decimal_float_literal_token3,
      aux_sym_decimal_float_literal_token4,
      aux_sym_decimal_float_literal_token5,
      aux_sym_hex_float_literal_token1,
      aux_sym_hex_float_literal_token3,
      sym_and,
      sym_bang,
      sym_minus,
      sym_paren_left,
      sym_star,
      sym_tilde,
    ACTIONS(192), 47,
      aux_sym_int_literal_token1,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      aux_sym_decimal_float_literal_token2,
      aux_sym_hex_float_literal_token2,
      sym_array,
      sym_atomic,
      sym_bool,
      sym_float32,
      sym_float16,
      sym_int32,
      sym_mat2x2,
      sym_mat2x3,
      sym_mat2x4,
      sym_mat3x2,
      sym_mat3x3,
      sym_mat3x4,
      sym_mat4x2,
      sym_mat4x3,
      sym_mat4x4,
      sym_pointer,
      sym_sampler,
      sym_sampler_comparison,
      sym_texture_1d,
      sym_texture_2d,
      sym_texture_2d_array,
      sym_texture_3d,
      sym_texture_cube,
      sym_texture_cube_array,
      sym_texture_multisampled_2d,
      sym_texture_storage_1d,
      sym_texture_storage_2d,
      sym_texture_storage_2d_array,
      sym_texture_storage_3d,
      sym_texture_depth_2d,
      sym_texture_depth_2d_array,
      sym_texture_depth_cube,
      sym_texture_depth_cube_array,
      sym_texture_depth_multisampled_2d,
      sym_uint32,
      sym_vec2,
      sym_vec3,
      sym_vec4,
      sym_bitcast,
      sym_false,
      sym_true,
      sym_ident,
  [231] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(202), 1,
      sym_paren_right,
    STATE(60), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(194), 12,
      aux_sym_decimal_float_literal_token1,
      aux_sym_decimal_float_literal_token3,
      aux_sym_decimal_float_literal_token4,
      aux_sym_decimal_float_literal_token5,
      aux_sym_hex_float_literal_token1,
      aux_sym_hex_float_literal_token3,
      sym_and,
      sym_bang,
      sym_minus,
      sym_paren_left,
      sym_star,
      sym_tilde,
    ACTIONS(192), 47,
      aux_sym_int_literal_token1,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      aux_sym_decimal_float_literal_token2,
      aux_sym_hex_float_literal_token2,
      sym_array,
      sym_atomic,
      sym_bool,
      sym_float32,
      sym_float16,
      sym_int32,
      sym_mat2x2,
      sym_mat2x3,
      sym_mat2x4,
      sym_mat3x2,
      sym_mat3x3,
      sym_mat3x4,
      sym_mat4x2,
      sym_mat4x3,
      sym_mat4x4,
      sym_pointer,
      sym_sampler,
      sym_sampler_comparison,
      sym_texture_1d,
      sym_texture_2d,
      sym_texture_2d_array,
      sym_texture_3d,
      sym_texture_cube,
      sym_texture_cube_array,
      sym_texture_multisampled_2d,
      sym_texture_storage_1d,
      sym_texture_storage_2d,
      sym_texture_storage_2d_array,
      sym_texture_storage_3d,
      sym_texture_depth_2d,
      sym_texture_depth_2d_array,
      sym_texture_depth_cube,
      sym_texture_depth_cube_array,
      sym_texture_depth_multisampled_2d,
      sym_uint32,
      sym_vec2,
      sym_vec3,
      sym_vec4,
      sym_bitcast,
      sym_false,
      sym_true,
      sym_ident,
  [308] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(204), 1,
      sym_paren_right,
    STATE(61), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(194), 12,
      aux_sym_decimal_float_literal_token1,
      aux_sym_decimal_float_literal_token3,
      aux_sym_decimal_float_literal_token4,
      aux_sym_decimal_float_literal_token5,
      aux_sym_hex_float_literal_token1,
      aux_sym_hex_float_literal_token3,
      sym_and,
      sym_bang,
      sym_minus,
      sym_paren_left,
      sym_star,
      sym_tilde,
    ACTIONS(192), 47,
      aux_sym_int_literal_token1,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      aux_sym_decimal_float_literal_token2,
      aux_sym_hex_float_literal_token2,
      sym_array,
      sym_atomic,
      sym_bool,
      sym_float32,
      sym_float16,
      sym_int32,
      sym_mat2x2,
      sym_mat2x3,
      sym_mat2x4,
      sym_mat3x2,
      sym_mat3x3,
      sym_mat3x4,
      sym_mat4x2,
      sym_mat4x3,
      sym_mat4x4,
      sym_pointer,
      sym_sampler,
      sym_sampler_comparison,
      sym_texture_1d,
      sym_texture_2d,
      sym_texture_2d_array,
      sym_texture_3d,
      sym_texture_cube,
      sym_texture_cube_array,
      sym_texture_multisampled_2d,
      sym_texture_storage_1d,
      sym_texture_storage_2d,
      sym_texture_storage_2d_array,
      sym_texture_storage_3d,
      sym_texture_depth_2d,
      sym_texture_depth_2d_array,
      sym_texture_depth_cube,
      sym_texture_depth_cube_array,
      sym_texture_depth_multisampled_2d,
      sym_uint32,
      sym_vec2,
      sym_vec3,
      sym_vec4,
      sym_bitcast,
      sym_false,
      sym_true,
      sym_ident,
  [385] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(206), 1,
      sym_paren_right,
    STATE(62), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(194), 12,
      aux_sym_decimal_float_literal_token1,
      aux_sym_decimal_float_literal_token3,
      aux_sym_decimal_float_literal_token4,
      aux_sym_decimal_float_literal_token5,
      aux_sym_hex_float_literal_token1,
      aux_sym_hex_float_literal_token3,
      sym_and,
      sym_bang,
      sym_minus,
      sym_paren_left,
      sym_star,
      sym_tilde,
    ACTIONS(192), 47,
      aux_sym_int_literal_token1,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      aux_sym_decimal_float_literal_token2,
      aux_sym_hex_float_literal_token2,
      sym_array,
      sym_atomic,
      sym_bool,
      sym_float32,
      sym_float16,
      sym_int32,
      sym_mat2x2,
      sym_mat2x3,
      sym_mat2x4,
      sym_mat3x2,
      sym_mat3x3,
      sym_mat3x4,
      sym_mat4x2,
      sym_mat4x3,
      sym_mat4x4,
      sym_pointer,
      sym_sampler,
      sym_sampler_comparison,
      sym_texture_1d,
      sym_texture_2d,
      sym_texture_2d_array,
      sym_texture_3d,
      sym_texture_cube,
      sym_texture_cube_array,
      sym_texture_multisampled_2d,
      sym_texture_storage_1d,
      sym_texture_storage_2d,
      sym_texture_storage_2d_array,
      sym_texture_storage_3d,
      sym_texture_depth_2d,
      sym_texture_depth_2d_array,
      sym_texture_depth_cube,
      sym_texture_depth_cube_array,
      sym_texture_depth_multisampled_2d,
      sym_uint32,
      sym_vec2,
      sym_vec3,
      sym_vec4,
      sym_bitcast,
      sym_false,
      sym_true,
      sym_ident,
  [462] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(63), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(210), 12,
      aux_sym_decimal_float_literal_token1,
      aux_sym_decimal_float_literal_token3,
      aux_sym_decimal_float_literal_token4,
      aux_sym_decimal_float_literal_token5,
      aux_sym_hex_float_literal_token1,
      aux_sym_hex_float_literal_token3,
      sym_and,
      sym_bang,
      sym_minus,
      sym_paren_left,
      sym_star,
      sym_tilde,
    ACTIONS(208), 47,
      aux_sym_int_literal_token1,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      aux_sym_decimal_float_literal_token2,
      aux_sym_hex_float_literal_token2,
      sym_array,
      sym_atomic,
      sym_bool,
      sym_float32,
      sym_float16,
      sym_int32,
      sym_mat2x2,
      sym_mat2x3,
      sym_mat2x4,
      sym_mat3x2,
      sym_mat3x3,
      sym_mat3x4,
      sym_mat4x2,
      sym_mat4x3,
      sym_mat4x4,
      sym_pointer,
      sym_sampler,
      sym_sampler_comparison,
      sym_texture_1d,
      sym_texture_2d,
      sym_texture_2d_array,
      sym_texture_3d,
      sym_texture_cube,
      sym_texture_cube_array,
      sym_texture_multisampled_2d,
      sym_texture_storage_1d,
      sym_texture_storage_2d,
      sym_texture_storage_2d_array,
      sym_texture_storage_3d,
      sym_texture_depth_2d,
      sym_texture_depth_2d_array,
      sym_texture_depth_cube,
      sym_texture_depth_cube_array,
      sym_texture_depth_multisampled_2d,
      sym_uint32,
      sym_vec2,
      sym_vec3,
      sym_vec4,
      sym_bitcast,
      sym_false,
      sym_true,
      sym_ident,
  [536] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(64), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(194), 12,
      aux_sym_decimal_float_literal_token1,
      aux_sym_decimal_float_literal_token3,
      aux_sym_decimal_float_literal_token4,
      aux_sym_decimal_float_literal_token5,
      aux_sym_hex_float_literal_token1,
      aux_sym_hex_float_literal_token3,
      sym_and,
      sym_bang,
      sym_minus,
      sym_paren_left,
      sym_star,
      sym_tilde,
    ACTIONS(192), 47,
      aux_sym_int_literal_token1,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      aux_sym_decimal_float_literal_token2,
      aux_sym_hex_float_literal_token2,
      sym_array,
      sym_atomic,
      sym_bool,
      sym_float32,
      sym_float16,
      sym_int32,
      sym_mat2x2,
      sym_mat2x3,
      sym_mat2x4,
      sym_mat3x2,
      sym_mat3x3,
      sym_mat3x4,
      sym_mat4x2,
      sym_mat4x3,
      sym_mat4x4,
      sym_pointer,
      sym_sampler,
      sym_sampler_comparison,
      sym_texture_1d,
      sym_texture_2d,
      sym_texture_2d_array,
      sym_texture_3d,
      sym_texture_cube,
      sym_texture_cube_array,
      sym_texture_multisampled_2d,
      sym_texture_storage_1d,
      sym_texture_storage_2d,
      sym_texture_storage_2d_array,
      sym_texture_storage_3d,
      sym_texture_depth_2d,
      sym_texture_depth_2d_array,
      sym_texture_depth_cube,
      sym_texture_depth_cube_array,
      sym_texture_depth_multisampled_2d,
      sym_uint32,
      sym_vec2,
      sym_vec3,
      sym_vec4,
      sym_bitcast,
      sym_false,
      sym_true,
      sym_ident,
  [610] = 25,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(25), 1,
      sym_attr,
    ACTIONS(41), 1,
      sym_array,
    ACTIONS(43), 1,
      sym_atomic,
    ACTIONS(49), 1,
      sym_pointer,
    ACTIONS(55), 1,
      sym_texture_multisampled_2d,
    ACTIONS(212), 1,
      sym_ident,
    STATE(65), 1,
      sym__comment,
    STATE(68), 1,
      aux_sym_struct_member_repeat1,
    STATE(88), 1,
      sym_attribute,
    STATE(253), 1,
      sym_type_decl_without_ident,
    STATE(410), 1,
      sym_type_decl,
    STATE(423), 1,
      sym_storage_texture_type,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(51), 2,
      sym_sampler,
      sym_sampler_comparison,
    STATE(233), 2,
      sym_sampler_type,
      sym_depth_texture_type,
    STATE(243), 2,
      sym_array_type_decl,
      sym_texture_sampler_types,
    STATE(424), 2,
      sym_sampled_texture_type,
      sym_multisampled_texture_type,
    STATE(442), 2,
      sym_vec_prefix,
      sym_mat_prefix,
    ACTIONS(61), 3,
      sym_vec2,
      sym_vec3,
      sym_vec4,
    ACTIONS(57), 4,
      sym_texture_storage_1d,
      sym_texture_storage_2d,
      sym_texture_storage_2d_array,
      sym_texture_storage_3d,
    ACTIONS(45), 5,
      sym_bool,
      sym_float32,
      sym_float16,
      sym_int32,
      sym_uint32,
    ACTIONS(59), 5,
      sym_texture_depth_2d,
      sym_texture_depth_2d_array,
      sym_texture_depth_cube,
      sym_texture_depth_cube_array,
      sym_texture_depth_multisampled_2d,
    ACTIONS(53), 6,
      sym_texture_1d,
      sym_texture_2d,
      sym_texture_2d_array,
      sym_texture_3d,
      sym_texture_cube,
      sym_texture_cube_array,
    ACTIONS(47), 9,
      sym_mat2x2,
      sym_mat2x3,
      sym_mat2x4,
      sym_mat3x2,
      sym_mat3x3,
      sym_mat3x4,
      sym_mat4x2,
      sym_mat4x3,
      sym_mat4x4,
  [718] = 25,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(25), 1,
      sym_attr,
    ACTIONS(41), 1,
      sym_array,
    ACTIONS(43), 1,
      sym_atomic,
    ACTIONS(49), 1,
      sym_pointer,
    ACTIONS(55), 1,
      sym_texture_multisampled_2d,
    ACTIONS(212), 1,
      sym_ident,
    STATE(66), 1,
      sym__comment,
    STATE(67), 1,
      aux_sym_struct_member_repeat1,
    STATE(88), 1,
      sym_attribute,
    STATE(253), 1,
      sym_type_decl_without_ident,
    STATE(423), 1,
      sym_storage_texture_type,
    STATE(443), 1,
      sym_type_decl,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(51), 2,
      sym_sampler,
      sym_sampler_comparison,
    STATE(233), 2,
      sym_sampler_type,
      sym_depth_texture_type,
    STATE(243), 2,
      sym_array_type_decl,
      sym_texture_sampler_types,
    STATE(424), 2,
      sym_sampled_texture_type,
      sym_multisampled_texture_type,
    STATE(442), 2,
      sym_vec_prefix,
      sym_mat_prefix,
    ACTIONS(61), 3,
      sym_vec2,
      sym_vec3,
      sym_vec4,
    ACTIONS(57), 4,
      sym_texture_storage_1d,
      sym_texture_storage_2d,
      sym_texture_storage_2d_array,
      sym_texture_storage_3d,
    ACTIONS(45), 5,
      sym_bool,
      sym_float32,
      sym_float16,
      sym_int32,
      sym_uint32,
    ACTIONS(59), 5,
      sym_texture_depth_2d,
      sym_texture_depth_2d_array,
      sym_texture_depth_cube,
      sym_texture_depth_cube_array,
      sym_texture_depth_multisampled_2d,
    ACTIONS(53), 6,
      sym_texture_1d,
      sym_texture_2d,
      sym_texture_2d_array,
      sym_texture_3d,
      sym_texture_cube,
      sym_texture_cube_array,
    ACTIONS(47), 9,
      sym_mat2x2,
      sym_mat2x3,
      sym_mat2x4,
      sym_mat3x2,
      sym_mat3x3,
      sym_mat3x4,
      sym_mat4x2,
      sym_mat4x3,
      sym_mat4x4,
  [826] = 25,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(25), 1,
      sym_attr,
    ACTIONS(41), 1,
      sym_array,
    ACTIONS(43), 1,
      sym_atomic,
    ACTIONS(49), 1,
      sym_pointer,
    ACTIONS(55), 1,
      sym_texture_multisampled_2d,
    ACTIONS(212), 1,
      sym_ident,
    STATE(67), 1,
      sym__comment,
    STATE(78), 1,
      aux_sym_struct_member_repeat1,
    STATE(88), 1,
      sym_attribute,
    STATE(253), 1,
      sym_type_decl_without_ident,
    STATE(410), 1,
      sym_type_decl,
    STATE(423), 1,
      sym_storage_texture_type,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(51), 2,
      sym_sampler,
      sym_sampler_comparison,
    STATE(233), 2,
      sym_sampler_type,
      sym_depth_texture_type,
    STATE(243), 2,
      sym_array_type_decl,
      sym_texture_sampler_types,
    STATE(424), 2,
      sym_sampled_texture_type,
      sym_multisampled_texture_type,
    STATE(442), 2,
      sym_vec_prefix,
      sym_mat_prefix,
    ACTIONS(61), 3,
      sym_vec2,
      sym_vec3,
      sym_vec4,
    ACTIONS(57), 4,
      sym_texture_storage_1d,
      sym_texture_storage_2d,
      sym_texture_storage_2d_array,
      sym_texture_storage_3d,
    ACTIONS(45), 5,
      sym_bool,
      sym_float32,
      sym_float16,
      sym_int32,
      sym_uint32,
    ACTIONS(59), 5,
      sym_texture_depth_2d,
      sym_texture_depth_2d_array,
      sym_texture_depth_cube,
      sym_texture_depth_cube_array,
      sym_texture_depth_multisampled_2d,
    ACTIONS(53), 6,
      sym_texture_1d,
      sym_texture_2d,
      sym_texture_2d_array,
      sym_texture_3d,
      sym_texture_cube,
      sym_texture_cube_array,
    ACTIONS(47), 9,
      sym_mat2x2,
      sym_mat2x3,
      sym_mat2x4,
      sym_mat3x2,
      sym_mat3x3,
      sym_mat3x4,
      sym_mat4x2,
      sym_mat4x3,
      sym_mat4x4,
  [934] = 25,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(25), 1,
      sym_attr,
    ACTIONS(41), 1,
      sym_array,
    ACTIONS(43), 1,
      sym_atomic,
    ACTIONS(49), 1,
      sym_pointer,
    ACTIONS(55), 1,
      sym_texture_multisampled_2d,
    ACTIONS(212), 1,
      sym_ident,
    STATE(68), 1,
      sym__comment,
    STATE(78), 1,
      aux_sym_struct_member_repeat1,
    STATE(88), 1,
      sym_attribute,
    STATE(253), 1,
      sym_type_decl_without_ident,
    STATE(394), 1,
      sym_type_decl,
    STATE(423), 1,
      sym_storage_texture_type,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(51), 2,
      sym_sampler,
      sym_sampler_comparison,
    STATE(233), 2,
      sym_sampler_type,
      sym_depth_texture_type,
    STATE(243), 2,
      sym_array_type_decl,
      sym_texture_sampler_types,
    STATE(424), 2,
      sym_sampled_texture_type,
      sym_multisampled_texture_type,
    STATE(442), 2,
      sym_vec_prefix,
      sym_mat_prefix,
    ACTIONS(61), 3,
      sym_vec2,
      sym_vec3,
      sym_vec4,
    ACTIONS(57), 4,
      sym_texture_storage_1d,
      sym_texture_storage_2d,
      sym_texture_storage_2d_array,
      sym_texture_storage_3d,
    ACTIONS(45), 5,
      sym_bool,
      sym_float32,
      sym_float16,
      sym_int32,
      sym_uint32,
    ACTIONS(59), 5,
      sym_texture_depth_2d,
      sym_texture_depth_2d_array,
      sym_texture_depth_cube,
      sym_texture_depth_cube_array,
      sym_texture_depth_multisampled_2d,
    ACTIONS(53), 6,
      sym_texture_1d,
      sym_texture_2d,
      sym_texture_2d_array,
      sym_texture_3d,
      sym_texture_cube,
      sym_texture_cube_array,
    ACTIONS(47), 9,
      sym_mat2x2,
      sym_mat2x3,
      sym_mat2x4,
      sym_mat3x2,
      sym_mat3x3,
      sym_mat3x4,
      sym_mat4x2,
      sym_mat4x3,
      sym_mat4x4,
  [1042] = 22,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(41), 1,
      sym_array,
    ACTIONS(43), 1,
      sym_atomic,
    ACTIONS(49), 1,
      sym_pointer,
    ACTIONS(55), 1,
      sym_texture_multisampled_2d,
    ACTIONS(212), 1,
      sym_ident,
    STATE(69), 1,
      sym__comment,
    STATE(253), 1,
      sym_type_decl_without_ident,
    STATE(366), 1,
      sym_type_decl,
    STATE(423), 1,
      sym_storage_texture_type,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(51), 2,
      sym_sampler,
      sym_sampler_comparison,
    STATE(233), 2,
      sym_sampler_type,
      sym_depth_texture_type,
    STATE(243), 2,
      sym_array_type_decl,
      sym_texture_sampler_types,
    STATE(424), 2,
      sym_sampled_texture_type,
      sym_multisampled_texture_type,
    STATE(442), 2,
      sym_vec_prefix,
      sym_mat_prefix,
    ACTIONS(61), 3,
      sym_vec2,
      sym_vec3,
      sym_vec4,
    ACTIONS(57), 4,
      sym_texture_storage_1d,
      sym_texture_storage_2d,
      sym_texture_storage_2d_array,
      sym_texture_storage_3d,
    ACTIONS(45), 5,
      sym_bool,
      sym_float32,
      sym_float16,
      sym_int32,
      sym_uint32,
    ACTIONS(59), 5,
      sym_texture_depth_2d,
      sym_texture_depth_2d_array,
      sym_texture_depth_cube,
      sym_texture_depth_cube_array,
      sym_texture_depth_multisampled_2d,
    ACTIONS(53), 6,
      sym_texture_1d,
      sym_texture_2d,
      sym_texture_2d_array,
      sym_texture_3d,
      sym_texture_cube,
      sym_texture_cube_array,
    ACTIONS(47), 9,
      sym_mat2x2,
      sym_mat2x3,
      sym_mat2x4,
      sym_mat3x2,
      sym_mat3x3,
      sym_mat3x4,
      sym_mat4x2,
      sym_mat4x3,
      sym_mat4x4,
  [1141] = 22,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(41), 1,
      sym_array,
    ACTIONS(43), 1,
      sym_atomic,
    ACTIONS(49), 1,
      sym_pointer,
    ACTIONS(55), 1,
      sym_texture_multisampled_2d,
    ACTIONS(212), 1,
      sym_ident,
    STATE(70), 1,
      sym__comment,
    STATE(253), 1,
      sym_type_decl_without_ident,
    STATE(367), 1,
      sym_type_decl,
    STATE(423), 1,
      sym_storage_texture_type,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(51), 2,
      sym_sampler,
      sym_sampler_comparison,
    STATE(233), 2,
      sym_sampler_type,
      sym_depth_texture_type,
    STATE(243), 2,
      sym_array_type_decl,
      sym_texture_sampler_types,
    STATE(424), 2,
      sym_sampled_texture_type,
      sym_multisampled_texture_type,
    STATE(442), 2,
      sym_vec_prefix,
      sym_mat_prefix,
    ACTIONS(61), 3,
      sym_vec2,
      sym_vec3,
      sym_vec4,
    ACTIONS(57), 4,
      sym_texture_storage_1d,
      sym_texture_storage_2d,
      sym_texture_storage_2d_array,
      sym_texture_storage_3d,
    ACTIONS(45), 5,
      sym_bool,
      sym_float32,
      sym_float16,
      sym_int32,
      sym_uint32,
    ACTIONS(59), 5,
      sym_texture_depth_2d,
      sym_texture_depth_2d_array,
      sym_texture_depth_cube,
      sym_texture_depth_cube_array,
      sym_texture_depth_multisampled_2d,
    ACTIONS(53), 6,
      sym_texture_1d,
      sym_texture_2d,
      sym_texture_2d_array,
      sym_texture_3d,
      sym_texture_cube,
      sym_texture_cube_array,
    ACTIONS(47), 9,
      sym_mat2x2,
      sym_mat2x3,
      sym_mat2x4,
      sym_mat3x2,
      sym_mat3x3,
      sym_mat3x4,
      sym_mat4x2,
      sym_mat4x3,
      sym_mat4x4,
  [1240] = 22,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(41), 1,
      sym_array,
    ACTIONS(43), 1,
      sym_atomic,
    ACTIONS(49), 1,
      sym_pointer,
    ACTIONS(55), 1,
      sym_texture_multisampled_2d,
    ACTIONS(212), 1,
      sym_ident,
    STATE(71), 1,
      sym__comment,
    STATE(253), 1,
      sym_type_decl_without_ident,
    STATE(348), 1,
      sym_type_decl,
    STATE(423), 1,
      sym_storage_texture_type,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(51), 2,
      sym_sampler,
      sym_sampler_comparison,
    STATE(233), 2,
      sym_sampler_type,
      sym_depth_texture_type,
    STATE(243), 2,
      sym_array_type_decl,
      sym_texture_sampler_types,
    STATE(424), 2,
      sym_sampled_texture_type,
      sym_multisampled_texture_type,
    STATE(442), 2,
      sym_vec_prefix,
      sym_mat_prefix,
    ACTIONS(61), 3,
      sym_vec2,
      sym_vec3,
      sym_vec4,
    ACTIONS(57), 4,
      sym_texture_storage_1d,
      sym_texture_storage_2d,
      sym_texture_storage_2d_array,
      sym_texture_storage_3d,
    ACTIONS(45), 5,
      sym_bool,
      sym_float32,
      sym_float16,
      sym_int32,
      sym_uint32,
    ACTIONS(59), 5,
      sym_texture_depth_2d,
      sym_texture_depth_2d_array,
      sym_texture_depth_cube,
      sym_texture_depth_cube_array,
      sym_texture_depth_multisampled_2d,
    ACTIONS(53), 6,
      sym_texture_1d,
      sym_texture_2d,
      sym_texture_2d_array,
      sym_texture_3d,
      sym_texture_cube,
      sym_texture_cube_array,
    ACTIONS(47), 9,
      sym_mat2x2,
      sym_mat2x3,
      sym_mat2x4,
      sym_mat3x2,
      sym_mat3x3,
      sym_mat3x4,
      sym_mat4x2,
      sym_mat4x3,
      sym_mat4x4,
  [1339] = 22,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(41), 1,
      sym_array,
    ACTIONS(43), 1,
      sym_atomic,
    ACTIONS(49), 1,
      sym_pointer,
    ACTIONS(55), 1,
      sym_texture_multisampled_2d,
    ACTIONS(212), 1,
      sym_ident,
    STATE(72), 1,
      sym__comment,
    STATE(253), 1,
      sym_type_decl_without_ident,
    STATE(369), 1,
      sym_type_decl,
    STATE(423), 1,
      sym_storage_texture_type,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(51), 2,
      sym_sampler,
      sym_sampler_comparison,
    STATE(233), 2,
      sym_sampler_type,
      sym_depth_texture_type,
    STATE(243), 2,
      sym_array_type_decl,
      sym_texture_sampler_types,
    STATE(424), 2,
      sym_sampled_texture_type,
      sym_multisampled_texture_type,
    STATE(442), 2,
      sym_vec_prefix,
      sym_mat_prefix,
    ACTIONS(61), 3,
      sym_vec2,
      sym_vec3,
      sym_vec4,
    ACTIONS(57), 4,
      sym_texture_storage_1d,
      sym_texture_storage_2d,
      sym_texture_storage_2d_array,
      sym_texture_storage_3d,
    ACTIONS(45), 5,
      sym_bool,
      sym_float32,
      sym_float16,
      sym_int32,
      sym_uint32,
    ACTIONS(59), 5,
      sym_texture_depth_2d,
      sym_texture_depth_2d_array,
      sym_texture_depth_cube,
      sym_texture_depth_cube_array,
      sym_texture_depth_multisampled_2d,
    ACTIONS(53), 6,
      sym_texture_1d,
      sym_texture_2d,
      sym_texture_2d_array,
      sym_texture_3d,
      sym_texture_cube,
      sym_texture_cube_array,
    ACTIONS(47), 9,
      sym_mat2x2,
      sym_mat2x3,
      sym_mat2x4,
      sym_mat3x2,
      sym_mat3x3,
      sym_mat3x4,
      sym_mat4x2,
      sym_mat4x3,
      sym_mat4x4,
  [1438] = 22,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(41), 1,
      sym_array,
    ACTIONS(43), 1,
      sym_atomic,
    ACTIONS(49), 1,
      sym_pointer,
    ACTIONS(55), 1,
      sym_texture_multisampled_2d,
    ACTIONS(212), 1,
      sym_ident,
    STATE(73), 1,
      sym__comment,
    STATE(253), 1,
      sym_type_decl_without_ident,
    STATE(364), 1,
      sym_type_decl,
    STATE(423), 1,
      sym_storage_texture_type,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(51), 2,
      sym_sampler,
      sym_sampler_comparison,
    STATE(233), 2,
      sym_sampler_type,
      sym_depth_texture_type,
    STATE(243), 2,
      sym_array_type_decl,
      sym_texture_sampler_types,
    STATE(424), 2,
      sym_sampled_texture_type,
      sym_multisampled_texture_type,
    STATE(442), 2,
      sym_vec_prefix,
      sym_mat_prefix,
    ACTIONS(61), 3,
      sym_vec2,
      sym_vec3,
      sym_vec4,
    ACTIONS(57), 4,
      sym_texture_storage_1d,
      sym_texture_storage_2d,
      sym_texture_storage_2d_array,
      sym_texture_storage_3d,
    ACTIONS(45), 5,
      sym_bool,
      sym_float32,
      sym_float16,
      sym_int32,
      sym_uint32,
    ACTIONS(59), 5,
      sym_texture_depth_2d,
      sym_texture_depth_2d_array,
      sym_texture_depth_cube,
      sym_texture_depth_cube_array,
      sym_texture_depth_multisampled_2d,
    ACTIONS(53), 6,
      sym_texture_1d,
      sym_texture_2d,
      sym_texture_2d_array,
      sym_texture_3d,
      sym_texture_cube,
      sym_texture_cube_array,
    ACTIONS(47), 9,
      sym_mat2x2,
      sym_mat2x3,
      sym_mat2x4,
      sym_mat3x2,
      sym_mat3x3,
      sym_mat3x4,
      sym_mat4x2,
      sym_mat4x3,
      sym_mat4x4,
  [1537] = 22,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(41), 1,
      sym_array,
    ACTIONS(43), 1,
      sym_atomic,
    ACTIONS(49), 1,
      sym_pointer,
    ACTIONS(55), 1,
      sym_texture_multisampled_2d,
    ACTIONS(212), 1,
      sym_ident,
    STATE(74), 1,
      sym__comment,
    STATE(253), 1,
      sym_type_decl_without_ident,
    STATE(423), 1,
      sym_storage_texture_type,
    STATE(464), 1,
      sym_type_decl,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(51), 2,
      sym_sampler,
      sym_sampler_comparison,
    STATE(233), 2,
      sym_sampler_type,
      sym_depth_texture_type,
    STATE(243), 2,
      sym_array_type_decl,
      sym_texture_sampler_types,
    STATE(424), 2,
      sym_sampled_texture_type,
      sym_multisampled_texture_type,
    STATE(442), 2,
      sym_vec_prefix,
      sym_mat_prefix,
    ACTIONS(61), 3,
      sym_vec2,
      sym_vec3,
      sym_vec4,
    ACTIONS(57), 4,
      sym_texture_storage_1d,
      sym_texture_storage_2d,
      sym_texture_storage_2d_array,
      sym_texture_storage_3d,
    ACTIONS(45), 5,
      sym_bool,
      sym_float32,
      sym_float16,
      sym_int32,
      sym_uint32,
    ACTIONS(59), 5,
      sym_texture_depth_2d,
      sym_texture_depth_2d_array,
      sym_texture_depth_cube,
      sym_texture_depth_cube_array,
      sym_texture_depth_multisampled_2d,
    ACTIONS(53), 6,
      sym_texture_1d,
      sym_texture_2d,
      sym_texture_2d_array,
      sym_texture_3d,
      sym_texture_cube,
      sym_texture_cube_array,
    ACTIONS(47), 9,
      sym_mat2x2,
      sym_mat2x3,
      sym_mat2x4,
      sym_mat3x2,
      sym_mat3x3,
      sym_mat3x4,
      sym_mat4x2,
      sym_mat4x3,
      sym_mat4x4,
  [1636] = 22,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(41), 1,
      sym_array,
    ACTIONS(43), 1,
      sym_atomic,
    ACTIONS(49), 1,
      sym_pointer,
    ACTIONS(55), 1,
      sym_texture_multisampled_2d,
    ACTIONS(212), 1,
      sym_ident,
    STATE(75), 1,
      sym__comment,
    STATE(253), 1,
      sym_type_decl_without_ident,
    STATE(423), 1,
      sym_storage_texture_type,
    STATE(459), 1,
      sym_type_decl,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(51), 2,
      sym_sampler,
      sym_sampler_comparison,
    STATE(233), 2,
      sym_sampler_type,
      sym_depth_texture_type,
    STATE(243), 2,
      sym_array_type_decl,
      sym_texture_sampler_types,
    STATE(424), 2,
      sym_sampled_texture_type,
      sym_multisampled_texture_type,
    STATE(442), 2,
      sym_vec_prefix,
      sym_mat_prefix,
    ACTIONS(61), 3,
      sym_vec2,
      sym_vec3,
      sym_vec4,
    ACTIONS(57), 4,
      sym_texture_storage_1d,
      sym_texture_storage_2d,
      sym_texture_storage_2d_array,
      sym_texture_storage_3d,
    ACTIONS(45), 5,
      sym_bool,
      sym_float32,
      sym_float16,
      sym_int32,
      sym_uint32,
    ACTIONS(59), 5,
      sym_texture_depth_2d,
      sym_texture_depth_2d_array,
      sym_texture_depth_cube,
      sym_texture_depth_cube_array,
      sym_texture_depth_multisampled_2d,
    ACTIONS(53), 6,
      sym_texture_1d,
      sym_texture_2d,
      sym_texture_2d_array,
      sym_texture_3d,
      sym_texture_cube,
      sym_texture_cube_array,
    ACTIONS(47), 9,
      sym_mat2x2,
      sym_mat2x3,
      sym_mat2x4,
      sym_mat3x2,
      sym_mat3x3,
      sym_mat3x4,
      sym_mat4x2,
      sym_mat4x3,
      sym_mat4x4,
  [1735] = 22,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(41), 1,
      sym_array,
    ACTIONS(43), 1,
      sym_atomic,
    ACTIONS(49), 1,
      sym_pointer,
    ACTIONS(55), 1,
      sym_texture_multisampled_2d,
    ACTIONS(212), 1,
      sym_ident,
    STATE(76), 1,
      sym__comment,
    STATE(253), 1,
      sym_type_decl_without_ident,
    STATE(268), 1,
      sym_type_decl,
    STATE(423), 1,
      sym_storage_texture_type,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(51), 2,
      sym_sampler,
      sym_sampler_comparison,
    STATE(233), 2,
      sym_sampler_type,
      sym_depth_texture_type,
    STATE(243), 2,
      sym_array_type_decl,
      sym_texture_sampler_types,
    STATE(424), 2,
      sym_sampled_texture_type,
      sym_multisampled_texture_type,
    STATE(442), 2,
      sym_vec_prefix,
      sym_mat_prefix,
    ACTIONS(61), 3,
      sym_vec2,
      sym_vec3,
      sym_vec4,
    ACTIONS(57), 4,
      sym_texture_storage_1d,
      sym_texture_storage_2d,
      sym_texture_storage_2d_array,
      sym_texture_storage_3d,
    ACTIONS(45), 5,
      sym_bool,
      sym_float32,
      sym_float16,
      sym_int32,
      sym_uint32,
    ACTIONS(59), 5,
      sym_texture_depth_2d,
      sym_texture_depth_2d_array,
      sym_texture_depth_cube,
      sym_texture_depth_cube_array,
      sym_texture_depth_multisampled_2d,
    ACTIONS(53), 6,
      sym_texture_1d,
      sym_texture_2d,
      sym_texture_2d_array,
      sym_texture_3d,
      sym_texture_cube,
      sym_texture_cube_array,
    ACTIONS(47), 9,
      sym_mat2x2,
      sym_mat2x3,
      sym_mat2x4,
      sym_mat3x2,
      sym_mat3x3,
      sym_mat3x4,
      sym_mat4x2,
      sym_mat4x3,
      sym_mat4x4,
  [1834] = 22,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(41), 1,
      sym_array,
    ACTIONS(43), 1,
      sym_atomic,
    ACTIONS(49), 1,
      sym_pointer,
    ACTIONS(55), 1,
      sym_texture_multisampled_2d,
    ACTIONS(212), 1,
      sym_ident,
    STATE(77), 1,
      sym__comment,
    STATE(253), 1,
      sym_type_decl_without_ident,
    STATE(404), 1,
      sym_type_decl,
    STATE(423), 1,
      sym_storage_texture_type,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(51), 2,
      sym_sampler,
      sym_sampler_comparison,
    STATE(233), 2,
      sym_sampler_type,
      sym_depth_texture_type,
    STATE(243), 2,
      sym_array_type_decl,
      sym_texture_sampler_types,
    STATE(424), 2,
      sym_sampled_texture_type,
      sym_multisampled_texture_type,
    STATE(442), 2,
      sym_vec_prefix,
      sym_mat_prefix,
    ACTIONS(61), 3,
      sym_vec2,
      sym_vec3,
      sym_vec4,
    ACTIONS(57), 4,
      sym_texture_storage_1d,
      sym_texture_storage_2d,
      sym_texture_storage_2d_array,
      sym_texture_storage_3d,
    ACTIONS(45), 5,
      sym_bool,
      sym_float32,
      sym_float16,
      sym_int32,
      sym_uint32,
    ACTIONS(59), 5,
      sym_texture_depth_2d,
      sym_texture_depth_2d_array,
      sym_texture_depth_cube,
      sym_texture_depth_cube_array,
      sym_texture_depth_multisampled_2d,
    ACTIONS(53), 6,
      sym_texture_1d,
      sym_texture_2d,
      sym_texture_2d_array,
      sym_texture_3d,
      sym_texture_cube,
      sym_texture_cube_array,
    ACTIONS(47), 9,
      sym_mat2x2,
      sym_mat2x3,
      sym_mat2x4,
      sym_mat3x2,
      sym_mat3x3,
      sym_mat3x4,
      sym_mat4x2,
      sym_mat4x3,
      sym_mat4x4,
  [1933] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(216), 1,
      sym_attr,
    STATE(88), 1,
      sym_attribute,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    STATE(78), 2,
      sym__comment,
      aux_sym_struct_member_repeat1,
    ACTIONS(214), 42,
      sym_array,
      sym_atomic,
      sym_bool,
      sym_float32,
      sym_float16,
      sym_int32,
      sym_mat2x2,
      sym_mat2x3,
      sym_mat2x4,
      sym_mat3x2,
      sym_mat3x3,
      sym_mat3x4,
      sym_mat4x2,
      sym_mat4x3,
      sym_mat4x4,
      sym_override,
      sym_pointer,
      sym_sampler,
      sym_sampler_comparison,
      sym_texture_1d,
      sym_texture_2d,
      sym_texture_2d_array,
      sym_texture_3d,
      sym_texture_cube,
      sym_texture_cube_array,
      sym_texture_multisampled_2d,
      sym_texture_storage_1d,
      sym_texture_storage_2d,
      sym_texture_storage_2d_array,
      sym_texture_storage_3d,
      sym_texture_depth_2d,
      sym_texture_depth_2d_array,
      sym_texture_depth_cube,
      sym_texture_depth_cube_array,
      sym_texture_depth_multisampled_2d,
      sym_uint32,
      sym_vec2,
      sym_vec3,
      sym_vec4,
      sym_fn,
      sym_var,
      sym_ident,
  [1995] = 32,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(219), 1,
      sym_ident,
    ACTIONS(221), 1,
      sym_staticAssert,
    ACTIONS(223), 1,
      sym_break,
    ACTIONS(227), 1,
      sym_continue,
    ACTIONS(229), 1,
      sym_discard,
    ACTIONS(231), 1,
      sym_fallthrough,
    ACTIONS(233), 1,
      sym_for,
    ACTIONS(235), 1,
      sym_if,
    ACTIONS(237), 1,
      sym_loop,
    ACTIONS(239), 1,
      sym_return,
    ACTIONS(241), 1,
      sym_switch,
    ACTIONS(243), 1,
      sym_var,
    ACTIONS(245), 1,
      sym_while,
    ACTIONS(249), 1,
      sym_brace_left,
    ACTIONS(251), 1,
      sym_brace_right,
    ACTIONS(253), 1,
      sym_paren_left,
    ACTIONS(255), 1,
      sym_semicolon,
    ACTIONS(257), 1,
      sym_underscore,
    STATE(79), 1,
      sym__comment,
    STATE(84), 1,
      aux_sym_compound_statement_repeat1,
    STATE(121), 1,
      sym_statement,
    STATE(191), 1,
      sym_core_lhs_expression,
    STATE(201), 1,
      sym_lhs_expression,
    STATE(264), 1,
      aux_sym_lhs_expression_repeat1,
    STATE(351), 1,
      sym_variable_decl,
    STATE(386), 1,
      sym_fallthrough_statement,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(225), 2,
      sym_const,
      sym_let,
    ACTIONS(247), 2,
      sym_and,
      sym_star,
    STATE(128), 6,
      sym_compound_statement,
      sym_if_statement,
      sym_switch_statement,
      sym_loop_statement,
      sym_for_statement,
      sym_while_statement,
    STATE(384), 9,
      sym_variable_statement,
      sym_assignment_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_break_statement,
      sym_continue_statement,
      sym_return_statement,
      sym_func_call_statement,
      sym_static_assert_statement,
  [2108] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(261), 1,
      sym_attr,
    ACTIONS(263), 1,
      sym_paren_left,
    STATE(80), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(259), 42,
      sym_array,
      sym_atomic,
      sym_bool,
      sym_float32,
      sym_float16,
      sym_int32,
      sym_mat2x2,
      sym_mat2x3,
      sym_mat2x4,
      sym_mat3x2,
      sym_mat3x3,
      sym_mat3x4,
      sym_mat4x2,
      sym_mat4x3,
      sym_mat4x4,
      sym_override,
      sym_pointer,
      sym_sampler,
      sym_sampler_comparison,
      sym_texture_1d,
      sym_texture_2d,
      sym_texture_2d_array,
      sym_texture_3d,
      sym_texture_cube,
      sym_texture_cube_array,
      sym_texture_multisampled_2d,
      sym_texture_storage_1d,
      sym_texture_storage_2d,
      sym_texture_storage_2d_array,
      sym_texture_storage_3d,
      sym_texture_depth_2d,
      sym_texture_depth_2d_array,
      sym_texture_depth_cube,
      sym_texture_depth_cube_array,
      sym_texture_depth_multisampled_2d,
      sym_uint32,
      sym_vec2,
      sym_vec3,
      sym_vec4,
      sym_fn,
      sym_var,
      sym_ident,
  [2169] = 32,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(219), 1,
      sym_ident,
    ACTIONS(221), 1,
      sym_staticAssert,
    ACTIONS(223), 1,
      sym_break,
    ACTIONS(227), 1,
      sym_continue,
    ACTIONS(229), 1,
      sym_discard,
    ACTIONS(233), 1,
      sym_for,
    ACTIONS(235), 1,
      sym_if,
    ACTIONS(237), 1,
      sym_loop,
    ACTIONS(239), 1,
      sym_return,
    ACTIONS(241), 1,
      sym_switch,
    ACTIONS(243), 1,
      sym_var,
    ACTIONS(245), 1,
      sym_while,
    ACTIONS(249), 1,
      sym_brace_left,
    ACTIONS(253), 1,
      sym_paren_left,
    ACTIONS(255), 1,
      sym_semicolon,
    ACTIONS(257), 1,
      sym_underscore,
    ACTIONS(265), 1,
      sym_continuing,
    ACTIONS(267), 1,
      sym_brace_right,
    STATE(81), 1,
      sym__comment,
    STATE(83), 1,
      aux_sym_compound_statement_repeat1,
    STATE(121), 1,
      sym_statement,
    STATE(191), 1,
      sym_core_lhs_expression,
    STATE(201), 1,
      sym_lhs_expression,
    STATE(264), 1,
      aux_sym_lhs_expression_repeat1,
    STATE(351), 1,
      sym_variable_decl,
    STATE(420), 1,
      sym_continuing_statement,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(225), 2,
      sym_const,
      sym_let,
    ACTIONS(247), 2,
      sym_and,
      sym_star,
    STATE(128), 6,
      sym_compound_statement,
      sym_if_statement,
      sym_switch_statement,
      sym_loop_statement,
      sym_for_statement,
      sym_while_statement,
    STATE(384), 9,
      sym_variable_statement,
      sym_assignment_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_break_statement,
      sym_continue_statement,
      sym_return_statement,
      sym_func_call_statement,
      sym_static_assert_statement,
  [2282] = 32,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(219), 1,
      sym_ident,
    ACTIONS(221), 1,
      sym_staticAssert,
    ACTIONS(223), 1,
      sym_break,
    ACTIONS(227), 1,
      sym_continue,
    ACTIONS(229), 1,
      sym_discard,
    ACTIONS(233), 1,
      sym_for,
    ACTIONS(235), 1,
      sym_if,
    ACTIONS(237), 1,
      sym_loop,
    ACTIONS(239), 1,
      sym_return,
    ACTIONS(241), 1,
      sym_switch,
    ACTIONS(243), 1,
      sym_var,
    ACTIONS(245), 1,
      sym_while,
    ACTIONS(249), 1,
      sym_brace_left,
    ACTIONS(253), 1,
      sym_paren_left,
    ACTIONS(255), 1,
      sym_semicolon,
    ACTIONS(257), 1,
      sym_underscore,
    ACTIONS(265), 1,
      sym_continuing,
    ACTIONS(269), 1,
      sym_brace_right,
    STATE(81), 1,
      aux_sym_compound_statement_repeat1,
    STATE(82), 1,
      sym__comment,
    STATE(121), 1,
      sym_statement,
    STATE(191), 1,
      sym_core_lhs_expression,
    STATE(201), 1,
      sym_lhs_expression,
    STATE(264), 1,
      aux_sym_lhs_expression_repeat1,
    STATE(351), 1,
      sym_variable_decl,
    STATE(457), 1,
      sym_continuing_statement,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(225), 2,
      sym_const,
      sym_let,
    ACTIONS(247), 2,
      sym_and,
      sym_star,
    STATE(128), 6,
      sym_compound_statement,
      sym_if_statement,
      sym_switch_statement,
      sym_loop_statement,
      sym_for_statement,
      sym_while_statement,
    STATE(384), 9,
      sym_variable_statement,
      sym_assignment_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_break_statement,
      sym_continue_statement,
      sym_return_statement,
      sym_func_call_statement,
      sym_static_assert_statement,
  [2395] = 30,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(271), 1,
      sym_ident,
    ACTIONS(274), 1,
      sym_staticAssert,
    ACTIONS(277), 1,
      sym_break,
    ACTIONS(283), 1,
      sym_continue,
    ACTIONS(288), 1,
      sym_discard,
    ACTIONS(291), 1,
      sym_for,
    ACTIONS(294), 1,
      sym_if,
    ACTIONS(297), 1,
      sym_loop,
    ACTIONS(300), 1,
      sym_return,
    ACTIONS(303), 1,
      sym_switch,
    ACTIONS(306), 1,
      sym_var,
    ACTIONS(309), 1,
      sym_while,
    ACTIONS(315), 1,
      sym_brace_left,
    ACTIONS(318), 1,
      sym_brace_right,
    ACTIONS(320), 1,
      sym_paren_left,
    ACTIONS(323), 1,
      sym_semicolon,
    ACTIONS(326), 1,
      sym_underscore,
    STATE(121), 1,
      sym_statement,
    STATE(191), 1,
      sym_core_lhs_expression,
    STATE(201), 1,
      sym_lhs_expression,
    STATE(264), 1,
      aux_sym_lhs_expression_repeat1,
    STATE(351), 1,
      sym_variable_decl,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(280), 2,
      sym_const,
      sym_let,
    ACTIONS(286), 2,
      sym_continuing,
      sym_fallthrough,
    ACTIONS(312), 2,
      sym_and,
      sym_star,
    STATE(83), 2,
      sym__comment,
      aux_sym_compound_statement_repeat1,
    STATE(128), 6,
      sym_compound_statement,
      sym_if_statement,
      sym_switch_statement,
      sym_loop_statement,
      sym_for_statement,
      sym_while_statement,
    STATE(384), 9,
      sym_variable_statement,
      sym_assignment_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_break_statement,
      sym_continue_statement,
      sym_return_statement,
      sym_func_call_statement,
      sym_static_assert_statement,
  [2504] = 32,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(219), 1,
      sym_ident,
    ACTIONS(221), 1,
      sym_staticAssert,
    ACTIONS(223), 1,
      sym_break,
    ACTIONS(227), 1,
      sym_continue,
    ACTIONS(229), 1,
      sym_discard,
    ACTIONS(231), 1,
      sym_fallthrough,
    ACTIONS(233), 1,
      sym_for,
    ACTIONS(235), 1,
      sym_if,
    ACTIONS(237), 1,
      sym_loop,
    ACTIONS(239), 1,
      sym_return,
    ACTIONS(241), 1,
      sym_switch,
    ACTIONS(243), 1,
      sym_var,
    ACTIONS(245), 1,
      sym_while,
    ACTIONS(249), 1,
      sym_brace_left,
    ACTIONS(253), 1,
      sym_paren_left,
    ACTIONS(255), 1,
      sym_semicolon,
    ACTIONS(257), 1,
      sym_underscore,
    ACTIONS(329), 1,
      sym_brace_right,
    STATE(83), 1,
      aux_sym_compound_statement_repeat1,
    STATE(84), 1,
      sym__comment,
    STATE(121), 1,
      sym_statement,
    STATE(191), 1,
      sym_core_lhs_expression,
    STATE(201), 1,
      sym_lhs_expression,
    STATE(264), 1,
      aux_sym_lhs_expression_repeat1,
    STATE(351), 1,
      sym_variable_decl,
    STATE(375), 1,
      sym_fallthrough_statement,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(225), 2,
      sym_const,
      sym_let,
    ACTIONS(247), 2,
      sym_and,
      sym_star,
    STATE(128), 6,
      sym_compound_statement,
      sym_if_statement,
      sym_switch_statement,
      sym_loop_statement,
      sym_for_statement,
      sym_while_statement,
    STATE(384), 9,
      sym_variable_statement,
      sym_assignment_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_break_statement,
      sym_continue_statement,
      sym_return_statement,
      sym_func_call_statement,
      sym_static_assert_statement,
  [2617] = 31,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(219), 1,
      sym_ident,
    ACTIONS(221), 1,
      sym_staticAssert,
    ACTIONS(227), 1,
      sym_continue,
    ACTIONS(229), 1,
      sym_discard,
    ACTIONS(233), 1,
      sym_for,
    ACTIONS(235), 1,
      sym_if,
    ACTIONS(237), 1,
      sym_loop,
    ACTIONS(239), 1,
      sym_return,
    ACTIONS(241), 1,
      sym_switch,
    ACTIONS(243), 1,
      sym_var,
    ACTIONS(245), 1,
      sym_while,
    ACTIONS(249), 1,
      sym_brace_left,
    ACTIONS(253), 1,
      sym_paren_left,
    ACTIONS(255), 1,
      sym_semicolon,
    ACTIONS(257), 1,
      sym_underscore,
    ACTIONS(331), 1,
      sym_break,
    ACTIONS(333), 1,
      sym_brace_right,
    STATE(83), 1,
      aux_sym_compound_statement_repeat1,
    STATE(85), 1,
      sym__comment,
    STATE(121), 1,
      sym_statement,
    STATE(191), 1,
      sym_core_lhs_expression,
    STATE(201), 1,
      sym_lhs_expression,
    STATE(264), 1,
      aux_sym_lhs_expression_repeat1,
    STATE(351), 1,
      sym_variable_decl,
    STATE(391), 1,
      sym_break_if_statement,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(225), 2,
      sym_const,
      sym_let,
    ACTIONS(247), 2,
      sym_and,
      sym_star,
    STATE(128), 6,
      sym_compound_statement,
      sym_if_statement,
      sym_switch_statement,
      sym_loop_statement,
      sym_for_statement,
      sym_while_statement,
    STATE(384), 9,
      sym_variable_statement,
      sym_assignment_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_break_statement,
      sym_continue_statement,
      sym_return_statement,
      sym_func_call_statement,
      sym_static_assert_statement,
  [2727] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(337), 1,
      sym_attr,
    STATE(86), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(335), 42,
      sym_array,
      sym_atomic,
      sym_bool,
      sym_float32,
      sym_float16,
      sym_int32,
      sym_mat2x2,
      sym_mat2x3,
      sym_mat2x4,
      sym_mat3x2,
      sym_mat3x3,
      sym_mat3x4,
      sym_mat4x2,
      sym_mat4x3,
      sym_mat4x4,
      sym_override,
      sym_pointer,
      sym_sampler,
      sym_sampler_comparison,
      sym_texture_1d,
      sym_texture_2d,
      sym_texture_2d_array,
      sym_texture_3d,
      sym_texture_cube,
      sym_texture_cube_array,
      sym_texture_multisampled_2d,
      sym_texture_storage_1d,
      sym_texture_storage_2d,
      sym_texture_storage_2d_array,
      sym_texture_storage_3d,
      sym_texture_depth_2d,
      sym_texture_depth_2d_array,
      sym_texture_depth_cube,
      sym_texture_depth_cube_array,
      sym_texture_depth_multisampled_2d,
      sym_uint32,
      sym_vec2,
      sym_vec3,
      sym_vec4,
      sym_fn,
      sym_var,
      sym_ident,
  [2785] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(341), 1,
      sym_attr,
    STATE(87), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(339), 42,
      sym_array,
      sym_atomic,
      sym_bool,
      sym_float32,
      sym_float16,
      sym_int32,
      sym_mat2x2,
      sym_mat2x3,
      sym_mat2x4,
      sym_mat3x2,
      sym_mat3x3,
      sym_mat3x4,
      sym_mat4x2,
      sym_mat4x3,
      sym_mat4x4,
      sym_override,
      sym_pointer,
      sym_sampler,
      sym_sampler_comparison,
      sym_texture_1d,
      sym_texture_2d,
      sym_texture_2d_array,
      sym_texture_3d,
      sym_texture_cube,
      sym_texture_cube_array,
      sym_texture_multisampled_2d,
      sym_texture_storage_1d,
      sym_texture_storage_2d,
      sym_texture_storage_2d_array,
      sym_texture_storage_3d,
      sym_texture_depth_2d,
      sym_texture_depth_2d_array,
      sym_texture_depth_cube,
      sym_texture_depth_cube_array,
      sym_texture_depth_multisampled_2d,
      sym_uint32,
      sym_vec2,
      sym_vec3,
      sym_vec4,
      sym_fn,
      sym_var,
      sym_ident,
  [2843] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(345), 1,
      sym_attr,
    STATE(88), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(343), 42,
      sym_array,
      sym_atomic,
      sym_bool,
      sym_float32,
      sym_float16,
      sym_int32,
      sym_mat2x2,
      sym_mat2x3,
      sym_mat2x4,
      sym_mat3x2,
      sym_mat3x3,
      sym_mat3x4,
      sym_mat4x2,
      sym_mat4x3,
      sym_mat4x4,
      sym_override,
      sym_pointer,
      sym_sampler,
      sym_sampler_comparison,
      sym_texture_1d,
      sym_texture_2d,
      sym_texture_2d_array,
      sym_texture_3d,
      sym_texture_cube,
      sym_texture_cube_array,
      sym_texture_multisampled_2d,
      sym_texture_storage_1d,
      sym_texture_storage_2d,
      sym_texture_storage_2d_array,
      sym_texture_storage_3d,
      sym_texture_depth_2d,
      sym_texture_depth_2d_array,
      sym_texture_depth_cube,
      sym_texture_depth_cube_array,
      sym_texture_depth_multisampled_2d,
      sym_uint32,
      sym_vec2,
      sym_vec3,
      sym_vec4,
      sym_fn,
      sym_var,
      sym_ident,
  [2901] = 31,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(219), 1,
      sym_ident,
    ACTIONS(221), 1,
      sym_staticAssert,
    ACTIONS(227), 1,
      sym_continue,
    ACTIONS(229), 1,
      sym_discard,
    ACTIONS(233), 1,
      sym_for,
    ACTIONS(235), 1,
      sym_if,
    ACTIONS(237), 1,
      sym_loop,
    ACTIONS(239), 1,
      sym_return,
    ACTIONS(241), 1,
      sym_switch,
    ACTIONS(243), 1,
      sym_var,
    ACTIONS(245), 1,
      sym_while,
    ACTIONS(249), 1,
      sym_brace_left,
    ACTIONS(253), 1,
      sym_paren_left,
    ACTIONS(255), 1,
      sym_semicolon,
    ACTIONS(257), 1,
      sym_underscore,
    ACTIONS(331), 1,
      sym_break,
    ACTIONS(347), 1,
      sym_brace_right,
    STATE(85), 1,
      aux_sym_compound_statement_repeat1,
    STATE(89), 1,
      sym__comment,
    STATE(121), 1,
      sym_statement,
    STATE(191), 1,
      sym_core_lhs_expression,
    STATE(201), 1,
      sym_lhs_expression,
    STATE(264), 1,
      aux_sym_lhs_expression_repeat1,
    STATE(351), 1,
      sym_variable_decl,
    STATE(398), 1,
      sym_break_if_statement,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(225), 2,
      sym_const,
      sym_let,
    ACTIONS(247), 2,
      sym_and,
      sym_star,
    STATE(128), 6,
      sym_compound_statement,
      sym_if_statement,
      sym_switch_statement,
      sym_loop_statement,
      sym_for_statement,
      sym_while_statement,
    STATE(384), 9,
      sym_variable_statement,
      sym_assignment_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_break_statement,
      sym_continue_statement,
      sym_return_statement,
      sym_func_call_statement,
      sym_static_assert_statement,
  [3011] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(351), 1,
      sym_attr,
    STATE(90), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(349), 42,
      sym_array,
      sym_atomic,
      sym_bool,
      sym_float32,
      sym_float16,
      sym_int32,
      sym_mat2x2,
      sym_mat2x3,
      sym_mat2x4,
      sym_mat3x2,
      sym_mat3x3,
      sym_mat3x4,
      sym_mat4x2,
      sym_mat4x3,
      sym_mat4x4,
      sym_override,
      sym_pointer,
      sym_sampler,
      sym_sampler_comparison,
      sym_texture_1d,
      sym_texture_2d,
      sym_texture_2d_array,
      sym_texture_3d,
      sym_texture_cube,
      sym_texture_cube_array,
      sym_texture_multisampled_2d,
      sym_texture_storage_1d,
      sym_texture_storage_2d,
      sym_texture_storage_2d_array,
      sym_texture_storage_3d,
      sym_texture_depth_2d,
      sym_texture_depth_2d_array,
      sym_texture_depth_cube,
      sym_texture_depth_cube_array,
      sym_texture_depth_multisampled_2d,
      sym_uint32,
      sym_vec2,
      sym_vec3,
      sym_vec4,
      sym_fn,
      sym_var,
      sym_ident,
  [3069] = 30,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(219), 1,
      sym_ident,
    ACTIONS(221), 1,
      sym_staticAssert,
    ACTIONS(223), 1,
      sym_break,
    ACTIONS(227), 1,
      sym_continue,
    ACTIONS(229), 1,
      sym_discard,
    ACTIONS(233), 1,
      sym_for,
    ACTIONS(235), 1,
      sym_if,
    ACTIONS(237), 1,
      sym_loop,
    ACTIONS(239), 1,
      sym_return,
    ACTIONS(241), 1,
      sym_switch,
    ACTIONS(243), 1,
      sym_var,
    ACTIONS(245), 1,
      sym_while,
    ACTIONS(249), 1,
      sym_brace_left,
    ACTIONS(253), 1,
      sym_paren_left,
    ACTIONS(255), 1,
      sym_semicolon,
    ACTIONS(257), 1,
      sym_underscore,
    ACTIONS(353), 1,
      sym_brace_right,
    STATE(91), 1,
      sym__comment,
    STATE(92), 1,
      aux_sym_compound_statement_repeat1,
    STATE(121), 1,
      sym_statement,
    STATE(191), 1,
      sym_core_lhs_expression,
    STATE(201), 1,
      sym_lhs_expression,
    STATE(264), 1,
      aux_sym_lhs_expression_repeat1,
    STATE(351), 1,
      sym_variable_decl,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(225), 2,
      sym_const,
      sym_let,
    ACTIONS(247), 2,
      sym_and,
      sym_star,
    STATE(128), 6,
      sym_compound_statement,
      sym_if_statement,
      sym_switch_statement,
      sym_loop_statement,
      sym_for_statement,
      sym_while_statement,
    STATE(384), 9,
      sym_variable_statement,
      sym_assignment_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_break_statement,
      sym_continue_statement,
      sym_return_statement,
      sym_func_call_statement,
      sym_static_assert_statement,
  [3176] = 30,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(219), 1,
      sym_ident,
    ACTIONS(221), 1,
      sym_staticAssert,
    ACTIONS(223), 1,
      sym_break,
    ACTIONS(227), 1,
      sym_continue,
    ACTIONS(229), 1,
      sym_discard,
    ACTIONS(233), 1,
      sym_for,
    ACTIONS(235), 1,
      sym_if,
    ACTIONS(237), 1,
      sym_loop,
    ACTIONS(239), 1,
      sym_return,
    ACTIONS(241), 1,
      sym_switch,
    ACTIONS(243), 1,
      sym_var,
    ACTIONS(245), 1,
      sym_while,
    ACTIONS(249), 1,
      sym_brace_left,
    ACTIONS(253), 1,
      sym_paren_left,
    ACTIONS(255), 1,
      sym_semicolon,
    ACTIONS(257), 1,
      sym_underscore,
    ACTIONS(355), 1,
      sym_brace_right,
    STATE(83), 1,
      aux_sym_compound_statement_repeat1,
    STATE(92), 1,
      sym__comment,
    STATE(121), 1,
      sym_statement,
    STATE(191), 1,
      sym_core_lhs_expression,
    STATE(201), 1,
      sym_lhs_expression,
    STATE(264), 1,
      aux_sym_lhs_expression_repeat1,
    STATE(351), 1,
      sym_variable_decl,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(225), 2,
      sym_const,
      sym_let,
    ACTIONS(247), 2,
      sym_and,
      sym_star,
    STATE(128), 6,
      sym_compound_statement,
      sym_if_statement,
      sym_switch_statement,
      sym_loop_statement,
      sym_for_statement,
      sym_while_statement,
    STATE(384), 9,
      sym_variable_statement,
      sym_assignment_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_break_statement,
      sym_continue_statement,
      sym_return_statement,
      sym_func_call_statement,
      sym_static_assert_statement,
  [3283] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(93), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(357), 8,
      ts_builtin_sym_end,
      sym_and,
      sym_attr,
      sym_brace_left,
      sym_brace_right,
      sym_paren_left,
      sym_semicolon,
      sym_star,
    ACTIONS(359), 22,
      sym_override,
      sym_staticAssert,
      sym_struct,
      sym_break,
      sym_const,
      sym_continue,
      sym_continuing,
      sym_discard,
      sym_else,
      sym_fallthrough,
      sym_fn,
      sym_for,
      sym_if,
      sym_let,
      sym_loop,
      sym_return,
      sym_switch,
      sym_type,
      sym_var,
      sym_while,
      sym_underscore,
      sym_ident,
  [3328] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(94), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(361), 8,
      ts_builtin_sym_end,
      sym_and,
      sym_attr,
      sym_brace_left,
      sym_brace_right,
      sym_paren_left,
      sym_semicolon,
      sym_star,
    ACTIONS(363), 22,
      sym_override,
      sym_staticAssert,
      sym_struct,
      sym_break,
      sym_const,
      sym_continue,
      sym_continuing,
      sym_discard,
      sym_else,
      sym_fallthrough,
      sym_fn,
      sym_for,
      sym_if,
      sym_let,
      sym_loop,
      sym_return,
      sym_switch,
      sym_type,
      sym_var,
      sym_while,
      sym_underscore,
      sym_ident,
  [3373] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(369), 1,
      sym_bracket_left,
    ACTIONS(371), 1,
      sym_period,
    STATE(95), 1,
      sym__comment,
    STATE(117), 1,
      sym_postfix_expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(365), 5,
      sym_and,
      sym_forward_slash,
      sym_greater_than,
      sym_less_than,
      sym_or,
    ACTIONS(367), 19,
      sym_and_and,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_equal_equal,
      sym_not_equal,
      sym_greater_than_equal,
      sym_shift_right,
      sym_less_than_equal,
      sym_shift_left,
      sym_modulo,
      sym_minus,
      sym_plus,
      sym_or_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
      sym_xor,
  [3421] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(377), 1,
      sym_paren_left,
    STATE(96), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(373), 5,
      sym_and,
      sym_forward_slash,
      sym_greater_than,
      sym_less_than,
      sym_or,
    ACTIONS(375), 21,
      sym_and_and,
      sym_bracket_left,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_equal_equal,
      sym_not_equal,
      sym_greater_than_equal,
      sym_shift_right,
      sym_less_than_equal,
      sym_shift_left,
      sym_modulo,
      sym_minus,
      sym_period,
      sym_plus,
      sym_or_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
      sym_xor,
  [3465] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(369), 1,
      sym_bracket_left,
    ACTIONS(371), 1,
      sym_period,
    STATE(97), 1,
      sym__comment,
    STATE(119), 1,
      sym_postfix_expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(379), 5,
      sym_and,
      sym_forward_slash,
      sym_greater_than,
      sym_less_than,
      sym_or,
    ACTIONS(381), 19,
      sym_and_and,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_equal_equal,
      sym_not_equal,
      sym_greater_than_equal,
      sym_shift_right,
      sym_less_than_equal,
      sym_shift_left,
      sym_modulo,
      sym_minus,
      sym_plus,
      sym_or_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
      sym_xor,
  [3513] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(369), 1,
      sym_bracket_left,
    ACTIONS(371), 1,
      sym_period,
    STATE(98), 1,
      sym__comment,
    STATE(120), 1,
      sym_postfix_expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(383), 5,
      sym_and,
      sym_forward_slash,
      sym_greater_than,
      sym_less_than,
      sym_or,
    ACTIONS(385), 19,
      sym_and_and,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_equal_equal,
      sym_not_equal,
      sym_greater_than_equal,
      sym_shift_right,
      sym_less_than_equal,
      sym_shift_left,
      sym_modulo,
      sym_minus,
      sym_plus,
      sym_or_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
      sym_xor,
  [3561] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(99), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(387), 5,
      sym_and,
      sym_forward_slash,
      sym_greater_than,
      sym_less_than,
      sym_or,
    ACTIONS(389), 21,
      sym_and_and,
      sym_bracket_left,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_equal_equal,
      sym_not_equal,
      sym_greater_than_equal,
      sym_shift_right,
      sym_less_than_equal,
      sym_shift_left,
      sym_modulo,
      sym_minus,
      sym_period,
      sym_plus,
      sym_or_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
      sym_xor,
  [3602] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(100), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(391), 5,
      sym_and,
      sym_forward_slash,
      sym_greater_than,
      sym_less_than,
      sym_or,
    ACTIONS(393), 21,
      sym_and_and,
      sym_bracket_left,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_equal_equal,
      sym_not_equal,
      sym_greater_than_equal,
      sym_shift_right,
      sym_less_than_equal,
      sym_shift_left,
      sym_modulo,
      sym_minus,
      sym_period,
      sym_plus,
      sym_or_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
      sym_xor,
  [3643] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(101), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(395), 5,
      sym_and,
      sym_forward_slash,
      sym_greater_than,
      sym_less_than,
      sym_or,
    ACTIONS(397), 21,
      sym_and_and,
      sym_bracket_left,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_equal_equal,
      sym_not_equal,
      sym_greater_than_equal,
      sym_shift_right,
      sym_less_than_equal,
      sym_shift_left,
      sym_modulo,
      sym_minus,
      sym_period,
      sym_plus,
      sym_or_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
      sym_xor,
  [3684] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(102), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(399), 5,
      sym_and,
      sym_forward_slash,
      sym_greater_than,
      sym_less_than,
      sym_or,
    ACTIONS(401), 21,
      sym_and_and,
      sym_bracket_left,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_equal_equal,
      sym_not_equal,
      sym_greater_than_equal,
      sym_shift_right,
      sym_less_than_equal,
      sym_shift_left,
      sym_modulo,
      sym_minus,
      sym_period,
      sym_plus,
      sym_or_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
      sym_xor,
  [3725] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(103), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(403), 5,
      sym_and,
      sym_forward_slash,
      sym_greater_than,
      sym_less_than,
      sym_or,
    ACTIONS(405), 21,
      sym_and_and,
      sym_bracket_left,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_equal_equal,
      sym_not_equal,
      sym_greater_than_equal,
      sym_shift_right,
      sym_less_than_equal,
      sym_shift_left,
      sym_modulo,
      sym_minus,
      sym_period,
      sym_plus,
      sym_or_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
      sym_xor,
  [3766] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(104), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(407), 5,
      sym_and,
      sym_forward_slash,
      sym_greater_than,
      sym_less_than,
      sym_or,
    ACTIONS(409), 21,
      sym_and_and,
      sym_bracket_left,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_equal_equal,
      sym_not_equal,
      sym_greater_than_equal,
      sym_shift_right,
      sym_less_than_equal,
      sym_shift_left,
      sym_modulo,
      sym_minus,
      sym_period,
      sym_plus,
      sym_or_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
      sym_xor,
  [3807] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(105), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(411), 5,
      sym_and,
      sym_forward_slash,
      sym_greater_than,
      sym_less_than,
      sym_or,
    ACTIONS(413), 21,
      sym_and_and,
      sym_bracket_left,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_equal_equal,
      sym_not_equal,
      sym_greater_than_equal,
      sym_shift_right,
      sym_less_than_equal,
      sym_shift_left,
      sym_modulo,
      sym_minus,
      sym_period,
      sym_plus,
      sym_or_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
      sym_xor,
  [3848] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(106), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(415), 5,
      sym_and,
      sym_forward_slash,
      sym_greater_than,
      sym_less_than,
      sym_or,
    ACTIONS(417), 21,
      sym_and_and,
      sym_bracket_left,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_equal_equal,
      sym_not_equal,
      sym_greater_than_equal,
      sym_shift_right,
      sym_less_than_equal,
      sym_shift_left,
      sym_modulo,
      sym_minus,
      sym_period,
      sym_plus,
      sym_or_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
      sym_xor,
  [3889] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(107), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(419), 5,
      sym_and,
      sym_forward_slash,
      sym_greater_than,
      sym_less_than,
      sym_or,
    ACTIONS(421), 21,
      sym_and_and,
      sym_bracket_left,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_equal_equal,
      sym_not_equal,
      sym_greater_than_equal,
      sym_shift_right,
      sym_less_than_equal,
      sym_shift_left,
      sym_modulo,
      sym_minus,
      sym_period,
      sym_plus,
      sym_or_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
      sym_xor,
  [3930] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(108), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(423), 5,
      sym_and,
      sym_forward_slash,
      sym_greater_than,
      sym_less_than,
      sym_or,
    ACTIONS(425), 21,
      sym_and_and,
      sym_bracket_left,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_equal_equal,
      sym_not_equal,
      sym_greater_than_equal,
      sym_shift_right,
      sym_less_than_equal,
      sym_shift_left,
      sym_modulo,
      sym_minus,
      sym_period,
      sym_plus,
      sym_or_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
      sym_xor,
  [3971] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(109), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(427), 5,
      sym_and,
      sym_forward_slash,
      sym_greater_than,
      sym_less_than,
      sym_or,
    ACTIONS(429), 21,
      sym_and_and,
      sym_bracket_left,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_equal_equal,
      sym_not_equal,
      sym_greater_than_equal,
      sym_shift_right,
      sym_less_than_equal,
      sym_shift_left,
      sym_modulo,
      sym_minus,
      sym_period,
      sym_plus,
      sym_or_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
      sym_xor,
  [4012] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(110), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(431), 5,
      sym_and,
      sym_forward_slash,
      sym_greater_than,
      sym_less_than,
      sym_or,
    ACTIONS(433), 21,
      sym_and_and,
      sym_bracket_left,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_equal_equal,
      sym_not_equal,
      sym_greater_than_equal,
      sym_shift_right,
      sym_less_than_equal,
      sym_shift_left,
      sym_modulo,
      sym_minus,
      sym_period,
      sym_plus,
      sym_or_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
      sym_xor,
  [4053] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(111), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(373), 5,
      sym_and,
      sym_forward_slash,
      sym_greater_than,
      sym_less_than,
      sym_or,
    ACTIONS(375), 21,
      sym_and_and,
      sym_bracket_left,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_equal_equal,
      sym_not_equal,
      sym_greater_than_equal,
      sym_shift_right,
      sym_less_than_equal,
      sym_shift_left,
      sym_modulo,
      sym_minus,
      sym_period,
      sym_plus,
      sym_or_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
      sym_xor,
  [4094] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(112), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(435), 5,
      sym_and,
      sym_forward_slash,
      sym_greater_than,
      sym_less_than,
      sym_or,
    ACTIONS(437), 21,
      sym_and_and,
      sym_bracket_left,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_equal_equal,
      sym_not_equal,
      sym_greater_than_equal,
      sym_shift_right,
      sym_less_than_equal,
      sym_shift_left,
      sym_modulo,
      sym_minus,
      sym_period,
      sym_plus,
      sym_or_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
      sym_xor,
  [4135] = 24,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(9), 1,
      sym_override,
    ACTIONS(11), 1,
      sym_staticAssert,
    ACTIONS(13), 1,
      sym_struct,
    ACTIONS(15), 1,
      sym_const,
    ACTIONS(17), 1,
      sym_enable,
    ACTIONS(19), 1,
      sym_fn,
    ACTIONS(21), 1,
      sym_type,
    ACTIONS(23), 1,
      sym_var,
    ACTIONS(25), 1,
      sym_attr,
    ACTIONS(27), 1,
      sym_semicolon,
    ACTIONS(439), 1,
      ts_builtin_sym_end,
    STATE(88), 1,
      sym_attribute,
    STATE(113), 1,
      sym__comment,
    STATE(152), 1,
      aux_sym_translation_unit_repeat2,
    STATE(199), 1,
      aux_sym_translation_unit_repeat1,
    STATE(214), 1,
      sym_enable_directive,
    STATE(216), 1,
      sym_global_directive,
    STATE(244), 1,
      aux_sym_struct_member_repeat1,
    STATE(354), 1,
      sym_function_header,
    STATE(356), 1,
      sym_variable_decl,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    STATE(222), 2,
      sym_struct_decl,
      sym_function_decl,
    STATE(460), 4,
      sym_type_alias_decl,
      sym_global_variable_decl,
      sym_global_constant_decl,
      sym_static_assert_statement,
  [4213] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(441), 1,
      sym_and,
    ACTIONS(449), 1,
      sym_or,
    ACTIONS(451), 1,
      sym_xor,
    STATE(114), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(447), 2,
      sym_shift_right,
      sym_shift_left,
    ACTIONS(445), 3,
      sym_forward_slash,
      sym_greater_than,
      sym_less_than,
    ACTIONS(443), 16,
      sym_and_and,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_equal_equal,
      sym_not_equal,
      sym_greater_than_equal,
      sym_less_than_equal,
      sym_modulo,
      sym_minus,
      sym_plus,
      sym_or_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
  [4260] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(115), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(453), 5,
      sym_and,
      sym_forward_slash,
      sym_greater_than,
      sym_less_than,
      sym_or,
    ACTIONS(455), 19,
      sym_and_and,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_equal_equal,
      sym_not_equal,
      sym_greater_than_equal,
      sym_shift_right,
      sym_less_than_equal,
      sym_shift_left,
      sym_modulo,
      sym_minus,
      sym_plus,
      sym_or_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
      sym_xor,
  [4299] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(459), 1,
      sym_else,
    STATE(116), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(461), 6,
      sym_and,
      sym_brace_left,
      sym_brace_right,
      sym_paren_left,
      sym_semicolon,
      sym_star,
    ACTIONS(457), 17,
      sym_staticAssert,
      sym_break,
      sym_const,
      sym_continue,
      sym_continuing,
      sym_discard,
      sym_fallthrough,
      sym_for,
      sym_if,
      sym_let,
      sym_loop,
      sym_return,
      sym_switch,
      sym_var,
      sym_while,
      sym_underscore,
      sym_ident,
  [4340] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(117), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(379), 5,
      sym_and,
      sym_forward_slash,
      sym_greater_than,
      sym_less_than,
      sym_or,
    ACTIONS(381), 19,
      sym_and_and,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_equal_equal,
      sym_not_equal,
      sym_greater_than_equal,
      sym_shift_right,
      sym_less_than_equal,
      sym_shift_left,
      sym_modulo,
      sym_minus,
      sym_plus,
      sym_or_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
      sym_xor,
  [4379] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(118), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(463), 5,
      sym_and,
      sym_forward_slash,
      sym_greater_than,
      sym_less_than,
      sym_or,
    ACTIONS(465), 19,
      sym_and_and,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_equal_equal,
      sym_not_equal,
      sym_greater_than_equal,
      sym_shift_right,
      sym_less_than_equal,
      sym_shift_left,
      sym_modulo,
      sym_minus,
      sym_plus,
      sym_or_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
      sym_xor,
  [4418] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(119), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(467), 5,
      sym_and,
      sym_forward_slash,
      sym_greater_than,
      sym_less_than,
      sym_or,
    ACTIONS(469), 19,
      sym_and_and,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_equal_equal,
      sym_not_equal,
      sym_greater_than_equal,
      sym_shift_right,
      sym_less_than_equal,
      sym_shift_left,
      sym_modulo,
      sym_minus,
      sym_plus,
      sym_or_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
      sym_xor,
  [4457] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(120), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(471), 5,
      sym_and,
      sym_forward_slash,
      sym_greater_than,
      sym_less_than,
      sym_or,
    ACTIONS(473), 19,
      sym_and_and,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_equal_equal,
      sym_not_equal,
      sym_greater_than_equal,
      sym_shift_right,
      sym_less_than_equal,
      sym_shift_left,
      sym_modulo,
      sym_minus,
      sym_plus,
      sym_or_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
      sym_xor,
  [4496] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(121), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(477), 6,
      sym_and,
      sym_brace_left,
      sym_brace_right,
      sym_paren_left,
      sym_semicolon,
      sym_star,
    ACTIONS(475), 17,
      sym_staticAssert,
      sym_break,
      sym_const,
      sym_continue,
      sym_continuing,
      sym_discard,
      sym_fallthrough,
      sym_for,
      sym_if,
      sym_let,
      sym_loop,
      sym_return,
      sym_switch,
      sym_var,
      sym_while,
      sym_underscore,
      sym_ident,
  [4534] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(379), 1,
      sym_and,
    ACTIONS(479), 1,
      sym_bracket_left,
    ACTIONS(481), 1,
      sym_period,
    STATE(122), 1,
      sym__comment,
    STATE(156), 1,
      sym_postfix_expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(381), 19,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_equal,
      sym_minus_minus,
      sym_plus_plus,
      sym_paren_right,
      sym_semicolon,
      sym_plus_equal,
      sym_minus_equal,
      sym_times_equal,
      sym_division_equal,
      sym_modulo_equal,
      sym_and_equal,
      sym_or_equal,
      sym_xor_equal,
      sym_shift_right_equal,
      sym_shift_left_equal,
  [4578] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(123), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(485), 6,
      sym_and,
      sym_brace_left,
      sym_brace_right,
      sym_paren_left,
      sym_semicolon,
      sym_star,
    ACTIONS(483), 17,
      sym_staticAssert,
      sym_break,
      sym_const,
      sym_continue,
      sym_continuing,
      sym_discard,
      sym_fallthrough,
      sym_for,
      sym_if,
      sym_let,
      sym_loop,
      sym_return,
      sym_switch,
      sym_var,
      sym_while,
      sym_underscore,
      sym_ident,
  [4616] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(365), 1,
      sym_and,
    ACTIONS(479), 1,
      sym_bracket_left,
    ACTIONS(481), 1,
      sym_period,
    STATE(124), 1,
      sym__comment,
    STATE(158), 1,
      sym_postfix_expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(367), 19,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_equal,
      sym_minus_minus,
      sym_plus_plus,
      sym_paren_right,
      sym_semicolon,
      sym_plus_equal,
      sym_minus_equal,
      sym_times_equal,
      sym_division_equal,
      sym_modulo_equal,
      sym_and_equal,
      sym_or_equal,
      sym_xor_equal,
      sym_shift_right_equal,
      sym_shift_left_equal,
  [4660] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(125), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(489), 6,
      sym_and,
      sym_brace_left,
      sym_brace_right,
      sym_paren_left,
      sym_semicolon,
      sym_star,
    ACTIONS(487), 17,
      sym_staticAssert,
      sym_break,
      sym_const,
      sym_continue,
      sym_continuing,
      sym_discard,
      sym_fallthrough,
      sym_for,
      sym_if,
      sym_let,
      sym_loop,
      sym_return,
      sym_switch,
      sym_var,
      sym_while,
      sym_underscore,
      sym_ident,
  [4698] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(126), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(493), 6,
      sym_and,
      sym_brace_left,
      sym_brace_right,
      sym_paren_left,
      sym_semicolon,
      sym_star,
    ACTIONS(491), 17,
      sym_staticAssert,
      sym_break,
      sym_const,
      sym_continue,
      sym_continuing,
      sym_discard,
      sym_fallthrough,
      sym_for,
      sym_if,
      sym_let,
      sym_loop,
      sym_return,
      sym_switch,
      sym_var,
      sym_while,
      sym_underscore,
      sym_ident,
  [4736] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(127), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(497), 6,
      sym_and,
      sym_brace_left,
      sym_brace_right,
      sym_paren_left,
      sym_semicolon,
      sym_star,
    ACTIONS(495), 17,
      sym_staticAssert,
      sym_break,
      sym_const,
      sym_continue,
      sym_continuing,
      sym_discard,
      sym_fallthrough,
      sym_for,
      sym_if,
      sym_let,
      sym_loop,
      sym_return,
      sym_switch,
      sym_var,
      sym_while,
      sym_underscore,
      sym_ident,
  [4774] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(128), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(501), 6,
      sym_and,
      sym_brace_left,
      sym_brace_right,
      sym_paren_left,
      sym_semicolon,
      sym_star,
    ACTIONS(499), 17,
      sym_staticAssert,
      sym_break,
      sym_const,
      sym_continue,
      sym_continuing,
      sym_discard,
      sym_fallthrough,
      sym_for,
      sym_if,
      sym_let,
      sym_loop,
      sym_return,
      sym_switch,
      sym_var,
      sym_while,
      sym_underscore,
      sym_ident,
  [4812] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(129), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(505), 6,
      sym_and,
      sym_brace_left,
      sym_brace_right,
      sym_paren_left,
      sym_semicolon,
      sym_star,
    ACTIONS(503), 17,
      sym_staticAssert,
      sym_break,
      sym_const,
      sym_continue,
      sym_continuing,
      sym_discard,
      sym_fallthrough,
      sym_for,
      sym_if,
      sym_let,
      sym_loop,
      sym_return,
      sym_switch,
      sym_var,
      sym_while,
      sym_underscore,
      sym_ident,
  [4850] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(130), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(509), 6,
      sym_and,
      sym_brace_left,
      sym_brace_right,
      sym_paren_left,
      sym_semicolon,
      sym_star,
    ACTIONS(507), 17,
      sym_staticAssert,
      sym_break,
      sym_const,
      sym_continue,
      sym_continuing,
      sym_discard,
      sym_fallthrough,
      sym_for,
      sym_if,
      sym_let,
      sym_loop,
      sym_return,
      sym_switch,
      sym_var,
      sym_while,
      sym_underscore,
      sym_ident,
  [4888] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(131), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(513), 6,
      sym_and,
      sym_brace_left,
      sym_brace_right,
      sym_paren_left,
      sym_semicolon,
      sym_star,
    ACTIONS(511), 17,
      sym_staticAssert,
      sym_break,
      sym_const,
      sym_continue,
      sym_continuing,
      sym_discard,
      sym_fallthrough,
      sym_for,
      sym_if,
      sym_let,
      sym_loop,
      sym_return,
      sym_switch,
      sym_var,
      sym_while,
      sym_underscore,
      sym_ident,
  [4926] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(132), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(517), 6,
      sym_and,
      sym_brace_left,
      sym_brace_right,
      sym_paren_left,
      sym_semicolon,
      sym_star,
    ACTIONS(515), 17,
      sym_staticAssert,
      sym_break,
      sym_const,
      sym_continue,
      sym_continuing,
      sym_discard,
      sym_fallthrough,
      sym_for,
      sym_if,
      sym_let,
      sym_loop,
      sym_return,
      sym_switch,
      sym_var,
      sym_while,
      sym_underscore,
      sym_ident,
  [4964] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(133), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(521), 6,
      sym_and,
      sym_brace_left,
      sym_brace_right,
      sym_paren_left,
      sym_semicolon,
      sym_star,
    ACTIONS(519), 17,
      sym_staticAssert,
      sym_break,
      sym_const,
      sym_continue,
      sym_continuing,
      sym_discard,
      sym_fallthrough,
      sym_for,
      sym_if,
      sym_let,
      sym_loop,
      sym_return,
      sym_switch,
      sym_var,
      sym_while,
      sym_underscore,
      sym_ident,
  [5002] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(523), 1,
      sym_bracket_left,
    ACTIONS(525), 1,
      sym_period,
    STATE(134), 1,
      sym__comment,
    STATE(167), 1,
      sym_postfix_expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(379), 3,
      sym_forward_slash,
      sym_greater_than,
      sym_less_than,
    ACTIONS(381), 16,
      sym_and_and,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_equal_equal,
      sym_not_equal,
      sym_greater_than_equal,
      sym_less_than_equal,
      sym_modulo,
      sym_minus,
      sym_plus,
      sym_or_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
  [5045] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(377), 1,
      sym_paren_left,
    STATE(135), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(373), 3,
      sym_forward_slash,
      sym_greater_than,
      sym_less_than,
    ACTIONS(375), 18,
      sym_and_and,
      sym_bracket_left,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_equal_equal,
      sym_not_equal,
      sym_greater_than_equal,
      sym_less_than_equal,
      sym_modulo,
      sym_minus,
      sym_period,
      sym_plus,
      sym_or_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
  [5084] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(523), 1,
      sym_bracket_left,
    ACTIONS(525), 1,
      sym_period,
    STATE(136), 1,
      sym__comment,
    STATE(162), 1,
      sym_postfix_expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(383), 3,
      sym_forward_slash,
      sym_greater_than,
      sym_less_than,
    ACTIONS(385), 16,
      sym_and_and,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_equal_equal,
      sym_not_equal,
      sym_greater_than_equal,
      sym_less_than_equal,
      sym_modulo,
      sym_minus,
      sym_plus,
      sym_or_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
  [5127] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(523), 1,
      sym_bracket_left,
    ACTIONS(525), 1,
      sym_period,
    STATE(137), 1,
      sym__comment,
    STATE(159), 1,
      sym_postfix_expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(365), 3,
      sym_forward_slash,
      sym_greater_than,
      sym_less_than,
    ACTIONS(367), 16,
      sym_and_and,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_equal_equal,
      sym_not_equal,
      sym_greater_than_equal,
      sym_less_than_equal,
      sym_modulo,
      sym_minus,
      sym_plus,
      sym_or_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
  [5170] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(138), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(391), 3,
      sym_forward_slash,
      sym_greater_than,
      sym_less_than,
    ACTIONS(393), 18,
      sym_and_and,
      sym_bracket_left,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_equal_equal,
      sym_not_equal,
      sym_greater_than_equal,
      sym_less_than_equal,
      sym_modulo,
      sym_minus,
      sym_period,
      sym_plus,
      sym_or_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
  [5206] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(139), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(427), 3,
      sym_forward_slash,
      sym_greater_than,
      sym_less_than,
    ACTIONS(429), 18,
      sym_and_and,
      sym_bracket_left,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_equal_equal,
      sym_not_equal,
      sym_greater_than_equal,
      sym_less_than_equal,
      sym_modulo,
      sym_minus,
      sym_period,
      sym_plus,
      sym_or_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
  [5242] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(140), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(415), 3,
      sym_forward_slash,
      sym_greater_than,
      sym_less_than,
    ACTIONS(417), 18,
      sym_and_and,
      sym_bracket_left,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_equal_equal,
      sym_not_equal,
      sym_greater_than_equal,
      sym_less_than_equal,
      sym_modulo,
      sym_minus,
      sym_period,
      sym_plus,
      sym_or_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
  [5278] = 20,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(9), 1,
      sym_override,
    ACTIONS(11), 1,
      sym_staticAssert,
    ACTIONS(13), 1,
      sym_struct,
    ACTIONS(15), 1,
      sym_const,
    ACTIONS(19), 1,
      sym_fn,
    ACTIONS(21), 1,
      sym_type,
    ACTIONS(23), 1,
      sym_var,
    ACTIONS(25), 1,
      sym_attr,
    ACTIONS(27), 1,
      sym_semicolon,
    ACTIONS(439), 1,
      ts_builtin_sym_end,
    STATE(88), 1,
      sym_attribute,
    STATE(141), 1,
      sym__comment,
    STATE(155), 1,
      aux_sym_translation_unit_repeat2,
    STATE(244), 1,
      aux_sym_struct_member_repeat1,
    STATE(354), 1,
      sym_function_header,
    STATE(356), 1,
      sym_variable_decl,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    STATE(222), 2,
      sym_struct_decl,
      sym_function_decl,
    STATE(460), 4,
      sym_type_alias_decl,
      sym_global_variable_decl,
      sym_global_constant_decl,
      sym_static_assert_statement,
  [5344] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(142), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(373), 3,
      sym_forward_slash,
      sym_greater_than,
      sym_less_than,
    ACTIONS(375), 18,
      sym_and_and,
      sym_bracket_left,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_equal_equal,
      sym_not_equal,
      sym_greater_than_equal,
      sym_less_than_equal,
      sym_modulo,
      sym_minus,
      sym_period,
      sym_plus,
      sym_or_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
  [5380] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(143), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(431), 3,
      sym_forward_slash,
      sym_greater_than,
      sym_less_than,
    ACTIONS(433), 18,
      sym_and_and,
      sym_bracket_left,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_equal_equal,
      sym_not_equal,
      sym_greater_than_equal,
      sym_less_than_equal,
      sym_modulo,
      sym_minus,
      sym_period,
      sym_plus,
      sym_or_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
  [5416] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(144), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(423), 3,
      sym_forward_slash,
      sym_greater_than,
      sym_less_than,
    ACTIONS(425), 18,
      sym_and_and,
      sym_bracket_left,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_equal_equal,
      sym_not_equal,
      sym_greater_than_equal,
      sym_less_than_equal,
      sym_modulo,
      sym_minus,
      sym_period,
      sym_plus,
      sym_or_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
  [5452] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(145), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(399), 3,
      sym_forward_slash,
      sym_greater_than,
      sym_less_than,
    ACTIONS(401), 18,
      sym_and_and,
      sym_bracket_left,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_equal_equal,
      sym_not_equal,
      sym_greater_than_equal,
      sym_less_than_equal,
      sym_modulo,
      sym_minus,
      sym_period,
      sym_plus,
      sym_or_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
  [5488] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(146), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(395), 3,
      sym_forward_slash,
      sym_greater_than,
      sym_less_than,
    ACTIONS(397), 18,
      sym_and_and,
      sym_bracket_left,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_equal_equal,
      sym_not_equal,
      sym_greater_than_equal,
      sym_less_than_equal,
      sym_modulo,
      sym_minus,
      sym_period,
      sym_plus,
      sym_or_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
  [5524] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(147), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(419), 3,
      sym_forward_slash,
      sym_greater_than,
      sym_less_than,
    ACTIONS(421), 18,
      sym_and_and,
      sym_bracket_left,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_equal_equal,
      sym_not_equal,
      sym_greater_than_equal,
      sym_less_than_equal,
      sym_modulo,
      sym_minus,
      sym_period,
      sym_plus,
      sym_or_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
  [5560] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(148), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(411), 3,
      sym_forward_slash,
      sym_greater_than,
      sym_less_than,
    ACTIONS(413), 18,
      sym_and_and,
      sym_bracket_left,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_equal_equal,
      sym_not_equal,
      sym_greater_than_equal,
      sym_less_than_equal,
      sym_modulo,
      sym_minus,
      sym_period,
      sym_plus,
      sym_or_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
  [5596] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(149), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(403), 3,
      sym_forward_slash,
      sym_greater_than,
      sym_less_than,
    ACTIONS(405), 18,
      sym_and_and,
      sym_bracket_left,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_equal_equal,
      sym_not_equal,
      sym_greater_than_equal,
      sym_less_than_equal,
      sym_modulo,
      sym_minus,
      sym_period,
      sym_plus,
      sym_or_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
  [5632] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(150), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(407), 3,
      sym_forward_slash,
      sym_greater_than,
      sym_less_than,
    ACTIONS(409), 18,
      sym_and_and,
      sym_bracket_left,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_equal_equal,
      sym_not_equal,
      sym_greater_than_equal,
      sym_less_than_equal,
      sym_modulo,
      sym_minus,
      sym_period,
      sym_plus,
      sym_or_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
  [5668] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(151), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(387), 3,
      sym_forward_slash,
      sym_greater_than,
      sym_less_than,
    ACTIONS(389), 18,
      sym_and_and,
      sym_bracket_left,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_equal_equal,
      sym_not_equal,
      sym_greater_than_equal,
      sym_less_than_equal,
      sym_modulo,
      sym_minus,
      sym_period,
      sym_plus,
      sym_or_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
  [5704] = 20,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(9), 1,
      sym_override,
    ACTIONS(11), 1,
      sym_staticAssert,
    ACTIONS(13), 1,
      sym_struct,
    ACTIONS(15), 1,
      sym_const,
    ACTIONS(19), 1,
      sym_fn,
    ACTIONS(21), 1,
      sym_type,
    ACTIONS(23), 1,
      sym_var,
    ACTIONS(25), 1,
      sym_attr,
    ACTIONS(27), 1,
      sym_semicolon,
    ACTIONS(527), 1,
      ts_builtin_sym_end,
    STATE(88), 1,
      sym_attribute,
    STATE(152), 1,
      sym__comment,
    STATE(155), 1,
      aux_sym_translation_unit_repeat2,
    STATE(244), 1,
      aux_sym_struct_member_repeat1,
    STATE(354), 1,
      sym_function_header,
    STATE(356), 1,
      sym_variable_decl,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    STATE(222), 2,
      sym_struct_decl,
      sym_function_decl,
    STATE(460), 4,
      sym_type_alias_decl,
      sym_global_variable_decl,
      sym_global_constant_decl,
      sym_static_assert_statement,
  [5770] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(153), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(447), 2,
      sym_shift_right,
      sym_shift_left,
    ACTIONS(445), 3,
      sym_forward_slash,
      sym_greater_than,
      sym_less_than,
    ACTIONS(443), 16,
      sym_and_and,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_equal_equal,
      sym_not_equal,
      sym_greater_than_equal,
      sym_less_than_equal,
      sym_modulo,
      sym_minus,
      sym_plus,
      sym_or_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
  [5808] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(154), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(435), 3,
      sym_forward_slash,
      sym_greater_than,
      sym_less_than,
    ACTIONS(437), 18,
      sym_and_and,
      sym_bracket_left,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_equal_equal,
      sym_not_equal,
      sym_greater_than_equal,
      sym_less_than_equal,
      sym_modulo,
      sym_minus,
      sym_period,
      sym_plus,
      sym_or_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
  [5844] = 19,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(529), 1,
      ts_builtin_sym_end,
    ACTIONS(531), 1,
      sym_override,
    ACTIONS(534), 1,
      sym_staticAssert,
    ACTIONS(537), 1,
      sym_struct,
    ACTIONS(540), 1,
      sym_const,
    ACTIONS(543), 1,
      sym_fn,
    ACTIONS(546), 1,
      sym_type,
    ACTIONS(549), 1,
      sym_var,
    ACTIONS(552), 1,
      sym_attr,
    ACTIONS(555), 1,
      sym_semicolon,
    STATE(88), 1,
      sym_attribute,
    STATE(244), 1,
      aux_sym_struct_member_repeat1,
    STATE(354), 1,
      sym_function_header,
    STATE(356), 1,
      sym_variable_decl,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    STATE(155), 2,
      sym__comment,
      aux_sym_translation_unit_repeat2,
    STATE(222), 2,
      sym_struct_decl,
      sym_function_decl,
    STATE(460), 4,
      sym_type_alias_decl,
      sym_global_variable_decl,
      sym_global_constant_decl,
      sym_static_assert_statement,
  [5908] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(467), 1,
      sym_and,
    STATE(156), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(469), 19,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_equal,
      sym_minus_minus,
      sym_plus_plus,
      sym_paren_right,
      sym_semicolon,
      sym_plus_equal,
      sym_minus_equal,
      sym_times_equal,
      sym_division_equal,
      sym_modulo_equal,
      sym_and_equal,
      sym_or_equal,
      sym_xor_equal,
      sym_shift_right_equal,
      sym_shift_left_equal,
  [5943] = 17,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(219), 1,
      sym_ident,
    ACTIONS(243), 1,
      sym_var,
    ACTIONS(253), 1,
      sym_paren_left,
    ACTIONS(257), 1,
      sym_underscore,
    ACTIONS(558), 1,
      sym_semicolon,
    STATE(157), 1,
      sym__comment,
    STATE(191), 1,
      sym_core_lhs_expression,
    STATE(201), 1,
      sym_lhs_expression,
    STATE(264), 1,
      aux_sym_lhs_expression_repeat1,
    STATE(351), 1,
      sym_variable_decl,
    STATE(458), 1,
      sym_for_init,
    STATE(463), 1,
      sym_for_header,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(225), 2,
      sym_const,
      sym_let,
    ACTIONS(247), 2,
      sym_and,
      sym_star,
    STATE(468), 5,
      sym_variable_statement,
      sym_assignment_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_func_call_statement,
  [6002] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(379), 1,
      sym_and,
    STATE(158), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(381), 19,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_equal,
      sym_minus_minus,
      sym_plus_plus,
      sym_paren_right,
      sym_semicolon,
      sym_plus_equal,
      sym_minus_equal,
      sym_times_equal,
      sym_division_equal,
      sym_modulo_equal,
      sym_and_equal,
      sym_or_equal,
      sym_xor_equal,
      sym_shift_right_equal,
      sym_shift_left_equal,
  [6037] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(159), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(379), 3,
      sym_forward_slash,
      sym_greater_than,
      sym_less_than,
    ACTIONS(381), 16,
      sym_and_and,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_equal_equal,
      sym_not_equal,
      sym_greater_than_equal,
      sym_less_than_equal,
      sym_modulo,
      sym_minus,
      sym_plus,
      sym_or_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
  [6071] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(160), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(562), 3,
      sym_forward_slash,
      sym_greater_than,
      sym_less_than,
    ACTIONS(560), 16,
      sym_and_and,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_equal_equal,
      sym_not_equal,
      sym_greater_than_equal,
      sym_less_than_equal,
      sym_modulo,
      sym_minus,
      sym_plus,
      sym_or_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
  [6105] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(161), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(463), 3,
      sym_forward_slash,
      sym_greater_than,
      sym_less_than,
    ACTIONS(465), 16,
      sym_and_and,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_equal_equal,
      sym_not_equal,
      sym_greater_than_equal,
      sym_less_than_equal,
      sym_modulo,
      sym_minus,
      sym_plus,
      sym_or_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
  [6139] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(162), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(471), 3,
      sym_forward_slash,
      sym_greater_than,
      sym_less_than,
    ACTIONS(473), 16,
      sym_and_and,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_equal_equal,
      sym_not_equal,
      sym_greater_than_equal,
      sym_less_than_equal,
      sym_modulo,
      sym_minus,
      sym_plus,
      sym_or_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
  [6173] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(163), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(453), 3,
      sym_forward_slash,
      sym_greater_than,
      sym_less_than,
    ACTIONS(455), 16,
      sym_and_and,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_equal_equal,
      sym_not_equal,
      sym_greater_than_equal,
      sym_less_than_equal,
      sym_modulo,
      sym_minus,
      sym_plus,
      sym_or_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
  [6207] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(566), 1,
      sym_forward_slash,
    STATE(164), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(568), 2,
      sym_greater_than,
      sym_less_than,
    ACTIONS(570), 2,
      sym_modulo,
      sym_star,
    ACTIONS(564), 14,
      sym_and_and,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_equal_equal,
      sym_not_equal,
      sym_greater_than_equal,
      sym_less_than_equal,
      sym_minus,
      sym_plus,
      sym_or_or,
      sym_paren_right,
      sym_semicolon,
  [6245] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(165), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(445), 3,
      sym_forward_slash,
      sym_greater_than,
      sym_less_than,
    ACTIONS(443), 16,
      sym_and_and,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_equal_equal,
      sym_not_equal,
      sym_greater_than_equal,
      sym_less_than_equal,
      sym_modulo,
      sym_minus,
      sym_plus,
      sym_or_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
  [6279] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(566), 1,
      sym_forward_slash,
    STATE(166), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(570), 2,
      sym_modulo,
      sym_star,
    ACTIONS(574), 2,
      sym_greater_than,
      sym_less_than,
    ACTIONS(572), 14,
      sym_and_and,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_equal_equal,
      sym_not_equal,
      sym_greater_than_equal,
      sym_less_than_equal,
      sym_minus,
      sym_plus,
      sym_or_or,
      sym_paren_right,
      sym_semicolon,
  [6317] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(167), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(467), 3,
      sym_forward_slash,
      sym_greater_than,
      sym_less_than,
    ACTIONS(469), 16,
      sym_and_and,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_equal_equal,
      sym_not_equal,
      sym_greater_than_equal,
      sym_less_than_equal,
      sym_modulo,
      sym_minus,
      sym_plus,
      sym_or_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
  [6351] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(576), 1,
      sym_ident,
    ACTIONS(585), 1,
      aux_sym_decimal_float_literal_token2,
    ACTIONS(591), 1,
      aux_sym_hex_float_literal_token2,
    STATE(437), 1,
      sym_literal_or_ident,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(588), 2,
      aux_sym_hex_float_literal_token1,
      aux_sym_hex_float_literal_token3,
    STATE(110), 2,
      sym_decimal_float_literal,
      sym_hex_float_literal,
    STATE(168), 2,
      sym__comment,
      aux_sym_attribute_repeat1,
    STATE(309), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(579), 3,
      aux_sym_int_literal_token1,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(582), 4,
      aux_sym_decimal_float_literal_token1,
      aux_sym_decimal_float_literal_token3,
      aux_sym_decimal_float_literal_token4,
      aux_sym_decimal_float_literal_token5,
  [6398] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(35), 1,
      aux_sym_decimal_float_literal_token2,
    ACTIONS(39), 1,
      aux_sym_hex_float_literal_token2,
    ACTIONS(594), 1,
      sym_ident,
    STATE(169), 1,
      sym__comment,
    STATE(171), 1,
      aux_sym_attribute_repeat1,
    STATE(308), 1,
      sym_literal_or_ident,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(37), 2,
      aux_sym_hex_float_literal_token1,
      aux_sym_hex_float_literal_token3,
    STATE(110), 2,
      sym_decimal_float_literal,
      sym_hex_float_literal,
    STATE(309), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(31), 3,
      aux_sym_int_literal_token1,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(33), 4,
      aux_sym_decimal_float_literal_token1,
      aux_sym_decimal_float_literal_token3,
      aux_sym_decimal_float_literal_token4,
      aux_sym_decimal_float_literal_token5,
  [6447] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(373), 1,
      sym_forward_slash,
    ACTIONS(377), 1,
      sym_paren_left,
    STATE(170), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(375), 16,
      sym_and,
      sym_bracket_left,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_greater_than,
      sym_modulo,
      sym_minus,
      sym_period,
      sym_plus,
      sym_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
      sym_xor,
  [6482] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(35), 1,
      aux_sym_decimal_float_literal_token2,
    ACTIONS(39), 1,
      aux_sym_hex_float_literal_token2,
    ACTIONS(594), 1,
      sym_ident,
    STATE(168), 1,
      aux_sym_attribute_repeat1,
    STATE(171), 1,
      sym__comment,
    STATE(311), 1,
      sym_literal_or_ident,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(37), 2,
      aux_sym_hex_float_literal_token1,
      aux_sym_hex_float_literal_token3,
    STATE(110), 2,
      sym_decimal_float_literal,
      sym_hex_float_literal,
    STATE(309), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(31), 3,
      aux_sym_int_literal_token1,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
    ACTIONS(33), 4,
      aux_sym_decimal_float_literal_token1,
      aux_sym_decimal_float_literal_token3,
      aux_sym_decimal_float_literal_token4,
      aux_sym_decimal_float_literal_token5,
  [6531] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(427), 1,
      sym_forward_slash,
    STATE(172), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(429), 16,
      sym_and,
      sym_bracket_left,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_greater_than,
      sym_modulo,
      sym_minus,
      sym_period,
      sym_plus,
      sym_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
      sym_xor,
  [6563] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(403), 1,
      sym_forward_slash,
    STATE(173), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(405), 16,
      sym_and,
      sym_bracket_left,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_greater_than,
      sym_modulo,
      sym_minus,
      sym_period,
      sym_plus,
      sym_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
      sym_xor,
  [6595] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(435), 1,
      sym_forward_slash,
    STATE(174), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(437), 16,
      sym_and,
      sym_bracket_left,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_greater_than,
      sym_modulo,
      sym_minus,
      sym_period,
      sym_plus,
      sym_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
      sym_xor,
  [6627] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(419), 1,
      sym_forward_slash,
    STATE(175), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(421), 16,
      sym_and,
      sym_bracket_left,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_greater_than,
      sym_modulo,
      sym_minus,
      sym_period,
      sym_plus,
      sym_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
      sym_xor,
  [6659] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(395), 1,
      sym_forward_slash,
    STATE(176), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(397), 16,
      sym_and,
      sym_bracket_left,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_greater_than,
      sym_modulo,
      sym_minus,
      sym_period,
      sym_plus,
      sym_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
      sym_xor,
  [6691] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(399), 1,
      sym_forward_slash,
    STATE(177), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(401), 16,
      sym_and,
      sym_bracket_left,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_greater_than,
      sym_modulo,
      sym_minus,
      sym_period,
      sym_plus,
      sym_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
      sym_xor,
  [6723] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(391), 1,
      sym_forward_slash,
    STATE(178), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(393), 16,
      sym_and,
      sym_bracket_left,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_greater_than,
      sym_modulo,
      sym_minus,
      sym_period,
      sym_plus,
      sym_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
      sym_xor,
  [6755] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(179), 1,
      sym__comment,
    STATE(370), 1,
      sym_texel_format,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(596), 16,
      anon_sym_rgba8unorm,
      anon_sym_rgba8snorm,
      anon_sym_rgba8uint,
      anon_sym_rgba8sint,
      anon_sym_rgba16uint,
      anon_sym_rgba16sint,
      anon_sym_rgba16float,
      anon_sym_r32uint,
      anon_sym_r32sint,
      anon_sym_r32float,
      anon_sym_rg32uint,
      anon_sym_rg32sint,
      anon_sym_rg32float,
      anon_sym_rgba32uint,
      anon_sym_rgba32sint,
      anon_sym_rgba32float,
  [6787] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(387), 1,
      sym_forward_slash,
    STATE(180), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(389), 16,
      sym_and,
      sym_bracket_left,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_greater_than,
      sym_modulo,
      sym_minus,
      sym_period,
      sym_plus,
      sym_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
      sym_xor,
  [6819] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(407), 1,
      sym_forward_slash,
    STATE(181), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(409), 16,
      sym_and,
      sym_bracket_left,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_greater_than,
      sym_modulo,
      sym_minus,
      sym_period,
      sym_plus,
      sym_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
      sym_xor,
  [6851] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(373), 1,
      sym_forward_slash,
    STATE(182), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(375), 16,
      sym_and,
      sym_bracket_left,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_greater_than,
      sym_modulo,
      sym_minus,
      sym_period,
      sym_plus,
      sym_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
      sym_xor,
  [6883] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(431), 1,
      sym_forward_slash,
    STATE(183), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(433), 16,
      sym_and,
      sym_bracket_left,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_greater_than,
      sym_modulo,
      sym_minus,
      sym_period,
      sym_plus,
      sym_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
      sym_xor,
  [6915] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(411), 1,
      sym_forward_slash,
    STATE(184), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(413), 16,
      sym_and,
      sym_bracket_left,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_greater_than,
      sym_modulo,
      sym_minus,
      sym_period,
      sym_plus,
      sym_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
      sym_xor,
  [6947] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(600), 1,
      sym_paren_left,
    STATE(185), 1,
      sym__comment,
    STATE(318), 1,
      sym_argument_expression_list,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(598), 15,
      sym_bracket_left,
      sym_equal,
      sym_minus_minus,
      sym_period,
      sym_plus_plus,
      sym_plus_equal,
      sym_minus_equal,
      sym_times_equal,
      sym_division_equal,
      sym_modulo_equal,
      sym_and_equal,
      sym_or_equal,
      sym_xor_equal,
      sym_shift_right_equal,
      sym_shift_left_equal,
  [6981] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(415), 1,
      sym_forward_slash,
    STATE(186), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(417), 16,
      sym_and,
      sym_bracket_left,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_greater_than,
      sym_modulo,
      sym_minus,
      sym_period,
      sym_plus,
      sym_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
      sym_xor,
  [7013] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(423), 1,
      sym_forward_slash,
    STATE(187), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(425), 16,
      sym_and,
      sym_bracket_left,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_greater_than,
      sym_modulo,
      sym_minus,
      sym_period,
      sym_plus,
      sym_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
      sym_xor,
  [7045] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(188), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(602), 16,
      sym_bracket_left,
      sym_equal,
      sym_minus_minus,
      sym_period,
      sym_plus_plus,
      sym_paren_right,
      sym_plus_equal,
      sym_minus_equal,
      sym_times_equal,
      sym_division_equal,
      sym_modulo_equal,
      sym_and_equal,
      sym_or_equal,
      sym_xor_equal,
      sym_shift_right_equal,
      sym_shift_left_equal,
  [7074] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(189), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(606), 2,
      sym_greater_than,
      sym_less_than,
    ACTIONS(608), 2,
      sym_minus,
      sym_plus,
    ACTIONS(604), 12,
      sym_and_and,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_equal_equal,
      sym_not_equal,
      sym_greater_than_equal,
      sym_less_than_equal,
      sym_or_or,
      sym_paren_right,
      sym_semicolon,
  [7107] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(479), 1,
      sym_bracket_left,
    ACTIONS(481), 1,
      sym_period,
    STATE(190), 1,
      sym__comment,
    STATE(202), 1,
      sym_postfix_expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(610), 13,
      sym_equal,
      sym_minus_minus,
      sym_plus_plus,
      sym_plus_equal,
      sym_minus_equal,
      sym_times_equal,
      sym_division_equal,
      sym_modulo_equal,
      sym_and_equal,
      sym_or_equal,
      sym_xor_equal,
      sym_shift_right_equal,
      sym_shift_left_equal,
  [7142] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(479), 1,
      sym_bracket_left,
    ACTIONS(481), 1,
      sym_period,
    STATE(191), 1,
      sym__comment,
    STATE(197), 1,
      sym_postfix_expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(612), 13,
      sym_equal,
      sym_minus_minus,
      sym_plus_plus,
      sym_plus_equal,
      sym_minus_equal,
      sym_times_equal,
      sym_division_equal,
      sym_modulo_equal,
      sym_and_equal,
      sym_or_equal,
      sym_xor_equal,
      sym_shift_right_equal,
      sym_shift_left_equal,
  [7177] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(192), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(598), 16,
      sym_bracket_left,
      sym_equal,
      sym_minus_minus,
      sym_period,
      sym_plus_plus,
      sym_paren_right,
      sym_plus_equal,
      sym_minus_equal,
      sym_times_equal,
      sym_division_equal,
      sym_modulo_equal,
      sym_and_equal,
      sym_or_equal,
      sym_xor_equal,
      sym_shift_right_equal,
      sym_shift_left_equal,
  [7206] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(463), 1,
      sym_forward_slash,
    STATE(193), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(465), 14,
      sym_and,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_greater_than,
      sym_modulo,
      sym_minus,
      sym_plus,
      sym_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
      sym_xor,
  [7236] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(445), 1,
      sym_forward_slash,
    STATE(194), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(614), 2,
      sym_shift_right,
      sym_shift_left,
    ACTIONS(443), 12,
      sym_and_and,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_modulo,
      sym_minus,
      sym_plus,
      sym_or_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
  [7268] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(453), 1,
      sym_forward_slash,
    STATE(195), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(455), 14,
      sym_and,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_greater_than,
      sym_modulo,
      sym_minus,
      sym_plus,
      sym_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
      sym_xor,
  [7298] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(471), 1,
      sym_forward_slash,
    STATE(196), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(473), 14,
      sym_and,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_greater_than,
      sym_modulo,
      sym_minus,
      sym_plus,
      sym_or,
      sym_paren_right,
      sym_semicolon,
      sym_star,
      sym_xor,
  [7328] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(197), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(610), 14,
      sym_equal,
      sym_minus_minus,
      sym_plus_plus,
      sym_paren_right,
      sym_plus_equal,
      sym_minus_equal,
      sym_times_equal,
      sym_division_equal,
      sym_modulo_equal,
      sym_and_equal,
      sym_or_equal,
      sym_xor_equal,
      sym_shift_right_equal,
      sym_shift_left_equal,
  [7355] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(198), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(618), 2,
      sym_greater_than,
      sym_less_than,
    ACTIONS(616), 12,
      sym_and_and,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_equal_equal,
      sym_not_equal,
      sym_greater_than_equal,
      sym_less_than_equal,
      sym_or_or,
      sym_paren_right,
      sym_semicolon,
  [7384] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(622), 1,
      sym_enable,
    STATE(214), 1,
      sym_enable_directive,
    STATE(216), 1,
      sym_global_directive,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    STATE(199), 2,
      sym__comment,
      aux_sym_translation_unit_repeat1,
    ACTIONS(620), 10,
      ts_builtin_sym_end,
      sym_override,
      sym_staticAssert,
      sym_struct,
      sym_const,
      sym_fn,
      sym_type,
      sym_var,
      sym_attr,
      sym_semicolon,
  [7417] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(200), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(629), 2,
      sym_greater_than,
      sym_less_than,
    ACTIONS(627), 4,
      sym_equal_equal,
      sym_not_equal,
      sym_greater_than_equal,
      sym_less_than_equal,
    ACTIONS(625), 8,
      sym_and_and,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_or_or,
      sym_paren_right,
      sym_semicolon,
  [7448] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(631), 1,
      sym_equal,
    ACTIONS(633), 1,
      sym_minus_minus,
    ACTIONS(635), 1,
      sym_plus_plus,
    STATE(27), 1,
      sym_compound_assignment_operator,
    STATE(201), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(637), 10,
      sym_plus_equal,
      sym_minus_equal,
      sym_times_equal,
      sym_division_equal,
      sym_modulo_equal,
      sym_and_equal,
      sym_or_equal,
      sym_xor_equal,
      sym_shift_right_equal,
      sym_shift_left_equal,
  [7483] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(202), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(639), 14,
      sym_equal,
      sym_minus_minus,
      sym_plus_plus,
      sym_paren_right,
      sym_plus_equal,
      sym_minus_equal,
      sym_times_equal,
      sym_division_equal,
      sym_modulo_equal,
      sym_and_equal,
      sym_or_equal,
      sym_xor_equal,
      sym_shift_right_equal,
      sym_shift_left_equal,
  [7510] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(253), 1,
      sym_paren_left,
    ACTIONS(257), 1,
      sym_underscore,
    ACTIONS(641), 1,
      sym_ident,
    ACTIONS(643), 1,
      sym_paren_right,
    STATE(191), 1,
      sym_core_lhs_expression,
    STATE(201), 1,
      sym_lhs_expression,
    STATE(203), 1,
      sym__comment,
    STATE(264), 1,
      aux_sym_lhs_expression_repeat1,
    STATE(393), 1,
      sym_for_update,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(247), 2,
      sym_and,
      sym_star,
    STATE(403), 4,
      sym_assignment_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_func_call_statement,
  [7555] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(253), 1,
      sym_paren_left,
    ACTIONS(257), 1,
      sym_underscore,
    ACTIONS(641), 1,
      sym_ident,
    ACTIONS(645), 1,
      sym_paren_right,
    STATE(191), 1,
      sym_core_lhs_expression,
    STATE(201), 1,
      sym_lhs_expression,
    STATE(204), 1,
      sym__comment,
    STATE(264), 1,
      aux_sym_lhs_expression_repeat1,
    STATE(380), 1,
      sym_for_update,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(247), 2,
      sym_and,
      sym_star,
    STATE(403), 4,
      sym_assignment_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_func_call_statement,
  [7600] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(253), 1,
      sym_paren_left,
    ACTIONS(257), 1,
      sym_underscore,
    ACTIONS(641), 1,
      sym_ident,
    ACTIONS(647), 1,
      sym_paren_right,
    STATE(191), 1,
      sym_core_lhs_expression,
    STATE(201), 1,
      sym_lhs_expression,
    STATE(205), 1,
      sym__comment,
    STATE(264), 1,
      aux_sym_lhs_expression_repeat1,
    STATE(402), 1,
      sym_for_update,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(247), 2,
      sym_and,
      sym_star,
    STATE(403), 4,
      sym_assignment_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_func_call_statement,
  [7645] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(649), 1,
      sym_forward_slash,
    STATE(206), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(651), 2,
      sym_modulo,
      sym_star,
    ACTIONS(564), 10,
      sym_and_and,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_minus,
      sym_plus,
      sym_or_or,
      sym_paren_right,
      sym_semicolon,
  [7675] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(657), 1,
      sym_paren_right,
    STATE(207), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(655), 5,
      aux_sym_int_literal_token1,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      aux_sym_decimal_float_literal_token2,
      aux_sym_hex_float_literal_token2,
    ACTIONS(653), 7,
      aux_sym_decimal_float_literal_token1,
      aux_sym_decimal_float_literal_token3,
      aux_sym_decimal_float_literal_token4,
      aux_sym_decimal_float_literal_token5,
      aux_sym_hex_float_literal_token1,
      aux_sym_hex_float_literal_token3,
      sym_ident,
  [7705] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(649), 1,
      sym_forward_slash,
    STATE(208), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(651), 2,
      sym_modulo,
      sym_star,
    ACTIONS(572), 10,
      sym_and_and,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_minus,
      sym_plus,
      sym_or_or,
      sym_paren_right,
      sym_semicolon,
  [7735] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(659), 1,
      sym_paren_right,
    STATE(209), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(655), 5,
      aux_sym_int_literal_token1,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      aux_sym_decimal_float_literal_token2,
      aux_sym_hex_float_literal_token2,
    ACTIONS(653), 7,
      aux_sym_decimal_float_literal_token1,
      aux_sym_decimal_float_literal_token3,
      aux_sym_decimal_float_literal_token4,
      aux_sym_decimal_float_literal_token5,
      aux_sym_hex_float_literal_token1,
      aux_sym_hex_float_literal_token3,
      sym_ident,
  [7765] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(210), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(655), 5,
      aux_sym_int_literal_token1,
      aux_sym_int_literal_token2,
      aux_sym_int_literal_token3,
      aux_sym_decimal_float_literal_token2,
      aux_sym_hex_float_literal_token2,
    ACTIONS(653), 7,
      aux_sym_decimal_float_literal_token1,
      aux_sym_decimal_float_literal_token3,
      aux_sym_decimal_float_literal_token4,
      aux_sym_decimal_float_literal_token5,
      aux_sym_hex_float_literal_token1,
      aux_sym_hex_float_literal_token3,
      sym_ident,
  [7792] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(379), 1,
      sym_forward_slash,
    ACTIONS(661), 1,
      sym_bracket_left,
    ACTIONS(663), 1,
      sym_period,
    STATE(211), 1,
      sym__comment,
    STATE(228), 1,
      sym_postfix_expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(381), 8,
      sym_and,
      sym_greater_than,
      sym_modulo,
      sym_minus,
      sym_plus,
      sym_or,
      sym_star,
      sym_xor,
  [7825] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(383), 1,
      sym_forward_slash,
    ACTIONS(661), 1,
      sym_bracket_left,
    ACTIONS(663), 1,
      sym_period,
    STATE(196), 1,
      sym_postfix_expression,
    STATE(212), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(385), 8,
      sym_and,
      sym_greater_than,
      sym_modulo,
      sym_minus,
      sym_plus,
      sym_or,
      sym_star,
      sym_xor,
  [7858] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(365), 1,
      sym_forward_slash,
    ACTIONS(661), 1,
      sym_bracket_left,
    ACTIONS(663), 1,
      sym_period,
    STATE(213), 1,
      sym__comment,
    STATE(227), 1,
      sym_postfix_expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(367), 8,
      sym_and,
      sym_greater_than,
      sym_modulo,
      sym_minus,
      sym_plus,
      sym_or,
      sym_star,
      sym_xor,
  [7891] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(214), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(665), 11,
      ts_builtin_sym_end,
      sym_override,
      sym_staticAssert,
      sym_struct,
      sym_const,
      sym_enable,
      sym_fn,
      sym_type,
      sym_var,
      sym_attr,
      sym_semicolon,
  [7915] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(215), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(667), 11,
      ts_builtin_sym_end,
      sym_override,
      sym_staticAssert,
      sym_struct,
      sym_const,
      sym_enable,
      sym_fn,
      sym_type,
      sym_var,
      sym_attr,
      sym_semicolon,
  [7939] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(216), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(669), 11,
      ts_builtin_sym_end,
      sym_override,
      sym_staticAssert,
      sym_struct,
      sym_const,
      sym_enable,
      sym_fn,
      sym_type,
      sym_var,
      sym_attr,
      sym_semicolon,
  [7963] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(217), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(671), 10,
      ts_builtin_sym_end,
      sym_override,
      sym_staticAssert,
      sym_struct,
      sym_const,
      sym_fn,
      sym_type,
      sym_var,
      sym_attr,
      sym_semicolon,
  [7986] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(218), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(673), 10,
      ts_builtin_sym_end,
      sym_override,
      sym_staticAssert,
      sym_struct,
      sym_const,
      sym_fn,
      sym_type,
      sym_var,
      sym_attr,
      sym_semicolon,
  [8009] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(219), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(675), 2,
      sym_minus,
      sym_plus,
    ACTIONS(604), 8,
      sym_and_and,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_or_or,
      sym_paren_right,
      sym_semicolon,
  [8034] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(220), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(677), 10,
      ts_builtin_sym_end,
      sym_override,
      sym_staticAssert,
      sym_struct,
      sym_const,
      sym_fn,
      sym_type,
      sym_var,
      sym_attr,
      sym_semicolon,
  [8057] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(479), 1,
      sym_bracket_left,
    ACTIONS(481), 1,
      sym_period,
    STATE(196), 1,
      sym_postfix_expression,
    STATE(221), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(385), 7,
      sym_and,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_paren_right,
      sym_semicolon,
  [8086] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(222), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(679), 10,
      ts_builtin_sym_end,
      sym_override,
      sym_staticAssert,
      sym_struct,
      sym_const,
      sym_fn,
      sym_type,
      sym_var,
      sym_attr,
      sym_semicolon,
  [8109] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(223), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(681), 10,
      ts_builtin_sym_end,
      sym_override,
      sym_staticAssert,
      sym_struct,
      sym_const,
      sym_fn,
      sym_type,
      sym_var,
      sym_attr,
      sym_semicolon,
  [8132] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(224), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(683), 10,
      ts_builtin_sym_end,
      sym_override,
      sym_staticAssert,
      sym_struct,
      sym_const,
      sym_fn,
      sym_type,
      sym_var,
      sym_attr,
      sym_semicolon,
  [8155] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(225), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(529), 10,
      ts_builtin_sym_end,
      sym_override,
      sym_staticAssert,
      sym_struct,
      sym_const,
      sym_fn,
      sym_type,
      sym_var,
      sym_attr,
      sym_semicolon,
  [8178] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(226), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(685), 10,
      ts_builtin_sym_end,
      sym_override,
      sym_staticAssert,
      sym_struct,
      sym_const,
      sym_fn,
      sym_type,
      sym_var,
      sym_attr,
      sym_semicolon,
  [8201] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(379), 1,
      sym_forward_slash,
    STATE(227), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(381), 8,
      sym_and,
      sym_greater_than,
      sym_modulo,
      sym_minus,
      sym_plus,
      sym_or,
      sym_star,
      sym_xor,
  [8225] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(467), 1,
      sym_forward_slash,
    STATE(228), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(469), 8,
      sym_and,
      sym_greater_than,
      sym_modulo,
      sym_minus,
      sym_plus,
      sym_or,
      sym_star,
      sym_xor,
  [8249] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(445), 1,
      sym_forward_slash,
    ACTIONS(451), 1,
      sym_xor,
    ACTIONS(687), 1,
      sym_and,
    ACTIONS(689), 1,
      sym_or,
    STATE(229), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(443), 5,
      sym_greater_than,
      sym_modulo,
      sym_minus,
      sym_plus,
      sym_star,
  [8279] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(25), 1,
      sym_attr,
    ACTIONS(691), 1,
      sym_ident,
    ACTIONS(693), 1,
      sym_paren_right,
    STATE(88), 1,
      sym_attribute,
    STATE(230), 1,
      sym__comment,
    STATE(255), 1,
      aux_sym_param_list_repeat1,
    STATE(267), 1,
      aux_sym_struct_member_repeat1,
    STATE(321), 1,
      sym_param,
    STATE(326), 1,
      sym_variable_ident_decl,
    STATE(400), 1,
      sym_param_list,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [8317] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(231), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(695), 8,
      sym_brace_left,
      sym_brace_right,
      sym_comma,
      sym_equal,
      sym_greater_than,
      sym_paren_left,
      sym_paren_right,
      sym_semicolon,
  [8338] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(232), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(697), 8,
      sym_brace_left,
      sym_brace_right,
      sym_comma,
      sym_equal,
      sym_greater_than,
      sym_paren_left,
      sym_paren_right,
      sym_semicolon,
  [8359] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(233), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(699), 8,
      sym_brace_left,
      sym_brace_right,
      sym_comma,
      sym_equal,
      sym_greater_than,
      sym_paren_left,
      sym_paren_right,
      sym_semicolon,
  [8380] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(234), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(701), 8,
      sym_and_and,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_or_or,
      sym_paren_right,
      sym_semicolon,
  [8401] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(235), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(703), 8,
      sym_brace_left,
      sym_brace_right,
      sym_comma,
      sym_equal,
      sym_greater_than,
      sym_paren_left,
      sym_paren_right,
      sym_semicolon,
  [8422] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(236), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(705), 8,
      sym_brace_left,
      sym_brace_right,
      sym_comma,
      sym_equal,
      sym_greater_than,
      sym_paren_left,
      sym_paren_right,
      sym_semicolon,
  [8443] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(237), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(707), 8,
      sym_brace_left,
      sym_brace_right,
      sym_comma,
      sym_equal,
      sym_greater_than,
      sym_paren_left,
      sym_paren_right,
      sym_semicolon,
  [8464] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(238), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(709), 8,
      sym_brace_left,
      sym_brace_right,
      sym_comma,
      sym_equal,
      sym_greater_than,
      sym_paren_left,
      sym_paren_right,
      sym_semicolon,
  [8485] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(713), 1,
      sym_or,
    STATE(239), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(711), 7,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_greater_than,
      sym_paren_right,
      sym_semicolon,
  [8508] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(715), 1,
      sym_and_and,
    ACTIONS(719), 1,
      sym_or_or,
    STATE(240), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(717), 6,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_paren_right,
      sym_semicolon,
  [8533] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(721), 1,
      sym_and,
    STATE(241), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(711), 7,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_greater_than,
      sym_paren_right,
      sym_semicolon,
  [8556] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(242), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(723), 8,
      sym_brace_left,
      sym_brace_right,
      sym_comma,
      sym_equal,
      sym_greater_than,
      sym_paren_left,
      sym_paren_right,
      sym_semicolon,
  [8577] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(243), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(725), 8,
      sym_brace_left,
      sym_brace_right,
      sym_comma,
      sym_equal,
      sym_greater_than,
      sym_paren_left,
      sym_paren_right,
      sym_semicolon,
  [8598] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(19), 1,
      sym_fn,
    ACTIONS(23), 1,
      sym_var,
    ACTIONS(25), 1,
      sym_attr,
    ACTIONS(727), 1,
      sym_override,
    STATE(78), 1,
      aux_sym_struct_member_repeat1,
    STATE(88), 1,
      sym_attribute,
    STATE(244), 1,
      sym__comment,
    STATE(320), 1,
      sym_variable_decl,
    STATE(322), 1,
      sym_function_header,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [8633] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(729), 1,
      sym_xor,
    STATE(245), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(711), 7,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_greater_than,
      sym_paren_right,
      sym_semicolon,
  [8656] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(246), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(731), 8,
      sym_brace_left,
      sym_brace_right,
      sym_comma,
      sym_equal,
      sym_greater_than,
      sym_paren_left,
      sym_paren_right,
      sym_semicolon,
  [8677] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(247), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(733), 8,
      sym_brace_left,
      sym_brace_right,
      sym_comma,
      sym_equal,
      sym_greater_than,
      sym_paren_left,
      sym_paren_right,
      sym_semicolon,
  [8698] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(735), 1,
      sym_ident,
    ACTIONS(738), 1,
      sym_attr,
    STATE(88), 1,
      sym_attribute,
    STATE(271), 1,
      aux_sym_struct_member_repeat1,
    STATE(338), 1,
      sym_variable_ident_decl,
    STATE(445), 1,
      sym_struct_member,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    STATE(248), 2,
      sym__comment,
      aux_sym_struct_body_decl_repeat1,
  [8728] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(253), 1,
      sym_paren_left,
    ACTIONS(741), 1,
      sym_ident,
    STATE(249), 1,
      sym__comment,
    STATE(262), 1,
      aux_sym_lhs_expression_repeat1,
    STATE(283), 1,
      sym_core_lhs_expression,
    STATE(426), 1,
      sym_lhs_expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(247), 2,
      sym_and,
      sym_star,
  [8758] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(745), 1,
      sym_or_or,
    STATE(250), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(743), 6,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_paren_right,
      sym_semicolon,
  [8780] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(25), 1,
      sym_attr,
    ACTIONS(691), 1,
      sym_ident,
    STATE(88), 1,
      sym_attribute,
    STATE(248), 1,
      aux_sym_struct_body_decl_repeat1,
    STATE(251), 1,
      sym__comment,
    STATE(271), 1,
      aux_sym_struct_member_repeat1,
    STATE(338), 1,
      sym_variable_ident_decl,
    STATE(343), 1,
      sym_struct_member,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [8812] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(25), 1,
      sym_attr,
    ACTIONS(691), 1,
      sym_ident,
    STATE(88), 1,
      sym_attribute,
    STATE(251), 1,
      aux_sym_struct_body_decl_repeat1,
    STATE(252), 1,
      sym__comment,
    STATE(271), 1,
      aux_sym_struct_member_repeat1,
    STATE(338), 1,
      sym_variable_ident_decl,
    STATE(339), 1,
      sym_struct_member,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [8844] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(253), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(747), 7,
      sym_brace_left,
      sym_brace_right,
      sym_comma,
      sym_equal,
      sym_greater_than,
      sym_paren_right,
      sym_semicolon,
  [8864] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(749), 1,
      sym_ident,
    ACTIONS(752), 1,
      sym_attr,
    STATE(88), 1,
      sym_attribute,
    STATE(267), 1,
      aux_sym_struct_member_repeat1,
    STATE(326), 1,
      sym_variable_ident_decl,
    STATE(440), 1,
      sym_param,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    STATE(254), 2,
      sym__comment,
      aux_sym_param_list_repeat1,
  [8894] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(25), 1,
      sym_attr,
    ACTIONS(691), 1,
      sym_ident,
    STATE(88), 1,
      sym_attribute,
    STATE(254), 1,
      aux_sym_param_list_repeat1,
    STATE(255), 1,
      sym__comment,
    STATE(267), 1,
      aux_sym_struct_member_repeat1,
    STATE(326), 1,
      sym_variable_ident_decl,
    STATE(362), 1,
      sym_param,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [8926] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(755), 1,
      sym_and_and,
    STATE(256), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(743), 6,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_paren_right,
      sym_semicolon,
  [8948] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(257), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(717), 6,
      sym_bracket_right,
      sym_brace_left,
      sym_colon,
      sym_comma,
      sym_paren_right,
      sym_semicolon,
  [8967] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(757), 1,
      sym_forward_slash,
    STATE(258), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(759), 2,
      sym_modulo,
      sym_star,
    ACTIONS(564), 3,
      sym_greater_than,
      sym_minus,
      sym_plus,
  [8990] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(445), 1,
      sym_forward_slash,
    STATE(259), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(443), 5,
      sym_greater_than,
      sym_modulo,
      sym_minus,
      sym_plus,
      sym_star,
  [9011] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(757), 1,
      sym_forward_slash,
    STATE(260), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(759), 2,
      sym_modulo,
      sym_star,
    ACTIONS(572), 3,
      sym_greater_than,
      sym_minus,
      sym_plus,
  [9034] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(261), 1,
      sym__comment,
    STATE(368), 1,
      sym_address_space,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(761), 5,
      sym_function,
      sym_private,
      sym_storage,
      sym_uniform,
      sym_workgroup,
  [9055] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(253), 1,
      sym_paren_left,
    ACTIONS(741), 1,
      sym_ident,
    STATE(262), 1,
      sym__comment,
    STATE(272), 1,
      aux_sym_lhs_expression_repeat1,
    STATE(282), 1,
      sym_core_lhs_expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(247), 2,
      sym_and,
      sym_star,
  [9082] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(562), 1,
      sym_forward_slash,
    STATE(263), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(560), 5,
      sym_greater_than,
      sym_modulo,
      sym_minus,
      sym_plus,
      sym_star,
  [9103] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(253), 1,
      sym_paren_left,
    ACTIONS(741), 1,
      sym_ident,
    STATE(190), 1,
      sym_core_lhs_expression,
    STATE(264), 1,
      sym__comment,
    STATE(272), 1,
      aux_sym_lhs_expression_repeat1,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(247), 2,
      sym_and,
      sym_star,
  [9130] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(265), 1,
      sym__comment,
    STATE(336), 1,
      sym_address_space,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(761), 5,
      sym_function,
      sym_private,
      sym_storage,
      sym_uniform,
      sym_workgroup,
  [9151] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(249), 1,
      sym_brace_left,
    ACTIONS(763), 1,
      sym_if,
    STATE(126), 1,
      sym_else_statement,
    STATE(266), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    STATE(123), 2,
      sym_compound_statement,
      sym_if_statement,
  [9175] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(25), 1,
      sym_attr,
    ACTIONS(691), 1,
      sym_ident,
    STATE(78), 1,
      aux_sym_struct_member_repeat1,
    STATE(88), 1,
      sym_attribute,
    STATE(267), 1,
      sym__comment,
    STATE(358), 1,
      sym_variable_ident_decl,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [9201] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(268), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(765), 5,
      sym_brace_right,
      sym_comma,
      sym_equal,
      sym_paren_right,
      sym_semicolon,
  [9219] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(767), 1,
      sym_case,
    ACTIONS(770), 1,
      sym_default,
    ACTIONS(773), 1,
      sym_brace_right,
    STATE(301), 1,
      sym_switch_body,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    STATE(269), 2,
      sym__comment,
      aux_sym_switch_statement_repeat1,
  [9243] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(775), 1,
      sym_case,
    ACTIONS(777), 1,
      sym_default,
    ACTIONS(779), 1,
      sym_brace_right,
    STATE(269), 1,
      aux_sym_switch_statement_repeat1,
    STATE(270), 1,
      sym__comment,
    STATE(301), 1,
      sym_switch_body,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [9269] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(25), 1,
      sym_attr,
    ACTIONS(691), 1,
      sym_ident,
    STATE(78), 1,
      aux_sym_struct_member_repeat1,
    STATE(88), 1,
      sym_attribute,
    STATE(271), 1,
      sym__comment,
    STATE(347), 1,
      sym_variable_ident_decl,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [9295] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(781), 2,
      sym_paren_left,
      sym_ident,
    ACTIONS(783), 2,
      sym_and,
      sym_star,
    STATE(272), 2,
      sym__comment,
      aux_sym_lhs_expression_repeat1,
  [9315] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(788), 1,
      sym_comma,
    STATE(273), 1,
      sym__comment,
    STATE(277), 1,
      aux_sym_case_selectors_repeat1,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(786), 2,
      sym_brace_left,
      sym_colon,
  [9336] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(790), 1,
      anon_sym_read,
    STATE(274), 1,
      sym__comment,
    STATE(470), 1,
      sym_access_mode,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(792), 2,
      anon_sym_write,
      anon_sym_read_write,
  [9357] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(275), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(794), 4,
      sym_and,
      sym_paren_left,
      sym_star,
      sym_ident,
  [9374] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(775), 1,
      sym_case,
    ACTIONS(777), 1,
      sym_default,
    STATE(270), 1,
      aux_sym_switch_statement_repeat1,
    STATE(276), 1,
      sym__comment,
    STATE(301), 1,
      sym_switch_body,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [9397] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(796), 1,
      sym_comma,
    STATE(277), 1,
      sym__comment,
    STATE(279), 1,
      aux_sym_case_selectors_repeat1,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(75), 2,
      sym_brace_left,
      sym_colon,
  [9418] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(790), 1,
      anon_sym_read,
    STATE(278), 1,
      sym__comment,
    STATE(395), 1,
      sym_access_mode,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(792), 2,
      anon_sym_write,
      anon_sym_read_write,
  [9439] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(800), 1,
      sym_comma,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(798), 2,
      sym_brace_left,
      sym_colon,
    STATE(279), 2,
      sym__comment,
      aux_sym_case_selectors_repeat1,
  [9458] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(803), 1,
      sym_ident,
    ACTIONS(805), 1,
      sym_less_than,
    STATE(280), 1,
      sym__comment,
    STATE(315), 1,
      sym_variable_ident_decl,
    STATE(316), 1,
      sym_variable_qualifier,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [9481] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(790), 1,
      anon_sym_read,
    STATE(281), 1,
      sym__comment,
    STATE(450), 1,
      sym_access_mode,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(792), 2,
      anon_sym_write,
      anon_sym_read_write,
  [9502] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(369), 1,
      sym_bracket_left,
    ACTIONS(371), 1,
      sym_period,
    ACTIONS(610), 1,
      sym_paren_right,
    STATE(202), 1,
      sym_postfix_expression,
    STATE(282), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [9525] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(369), 1,
      sym_bracket_left,
    ACTIONS(371), 1,
      sym_period,
    ACTIONS(612), 1,
      sym_paren_right,
    STATE(197), 1,
      sym_postfix_expression,
    STATE(283), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [9548] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(284), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(798), 3,
      sym_brace_left,
      sym_colon,
      sym_comma,
  [9564] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(809), 1,
      sym_brace_right,
    STATE(285), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(807), 2,
      sym_attr,
      sym_ident,
  [9582] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(813), 1,
      sym_paren_right,
    STATE(286), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(811), 2,
      sym_attr,
      sym_ident,
  [9600] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(815), 1,
      sym_brace_left,
    ACTIONS(817), 1,
      sym_colon,
    STATE(287), 1,
      sym__comment,
    STATE(292), 1,
      sym_case_compound_statement,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [9620] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(288), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(819), 3,
      sym_case,
      sym_default,
      sym_brace_right,
  [9636] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(289), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(821), 3,
      sym_case,
      sym_default,
      sym_brace_right,
  [9652] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(823), 1,
      sym_colon,
    STATE(290), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(825), 2,
      sym_equal,
      sym_semicolon,
  [9670] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(827), 1,
      sym_brace_right,
    STATE(291), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(807), 2,
      sym_attr,
      sym_ident,
  [9688] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(292), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(829), 3,
      sym_case,
      sym_default,
      sym_brace_right,
  [9704] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(293), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(831), 3,
      sym_case,
      sym_default,
      sym_brace_right,
  [9720] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(833), 1,
      sym_greater_than,
    STATE(294), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(835), 2,
      sym_minus,
      sym_plus,
  [9738] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(823), 1,
      sym_colon,
    STATE(295), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(837), 2,
      sym_equal,
      sym_semicolon,
  [9756] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(823), 1,
      sym_colon,
    ACTIONS(839), 1,
      sym_equal,
    ACTIONS(841), 1,
      sym_semicolon,
    STATE(296), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [9776] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(843), 1,
      sym_paren_right,
    STATE(297), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(811), 2,
      sym_attr,
      sym_ident,
  [9794] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(823), 1,
      sym_colon,
    ACTIONS(845), 1,
      sym_equal,
    ACTIONS(847), 1,
      sym_semicolon,
    STATE(298), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [9814] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(299), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(849), 3,
      sym_case,
      sym_default,
      sym_brace_right,
  [9830] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(815), 1,
      sym_brace_left,
    ACTIONS(851), 1,
      sym_colon,
    STATE(288), 1,
      sym_case_compound_statement,
    STATE(300), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [9850] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(301), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(853), 3,
      sym_case,
      sym_default,
      sym_brace_right,
  [9866] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(302), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(855), 3,
      sym_case,
      sym_default,
      sym_brace_right,
  [9882] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(823), 1,
      sym_colon,
    ACTIONS(857), 1,
      sym_equal,
    STATE(303), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [9899] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(188), 1,
      sym_paren_left,
    STATE(140), 1,
      sym_paren_expression,
    STATE(304), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [9916] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(859), 1,
      sym_brace_left,
    STATE(218), 1,
      sym_struct_body_decl,
    STATE(305), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [9933] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(249), 1,
      sym_brace_left,
    STATE(116), 1,
      sym_compound_statement,
    STATE(306), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [9950] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(823), 1,
      sym_colon,
    ACTIONS(839), 1,
      sym_equal,
    STATE(307), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [9967] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(861), 1,
      sym_comma,
    ACTIONS(863), 1,
      sym_paren_right,
    STATE(308), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [9984] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(309), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(865), 2,
      sym_comma,
      sym_paren_right,
  [9999] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(310), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(807), 2,
      sym_attr,
      sym_ident,
  [10014] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(657), 1,
      sym_paren_right,
    ACTIONS(867), 1,
      sym_comma,
    STATE(311), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [10031] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(600), 1,
      sym_paren_left,
    STATE(109), 1,
      sym_argument_expression_list,
    STATE(312), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [10048] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(313), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(811), 2,
      sym_attr,
      sym_ident,
  [10063] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(377), 1,
      sym_paren_left,
    ACTIONS(869), 1,
      sym_less_than,
    STATE(314), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [10080] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(315), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(837), 2,
      sym_equal,
      sym_semicolon,
  [10095] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(871), 1,
      sym_ident,
    STATE(316), 1,
      sym__comment,
    STATE(340), 1,
      sym_variable_ident_decl,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [10112] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(873), 1,
      sym_ident,
    STATE(317), 1,
      sym__comment,
    STATE(360), 1,
      sym_variable_ident_decl,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [10129] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(318), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(875), 2,
      sym_paren_right,
      sym_semicolon,
  [10144] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(249), 1,
      sym_brace_left,
    STATE(131), 1,
      sym_compound_statement,
    STATE(319), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [10161] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(877), 1,
      sym_equal,
    ACTIONS(879), 1,
      sym_semicolon,
    STATE(320), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [10178] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(881), 1,
      sym_comma,
    ACTIONS(883), 1,
      sym_paren_right,
    STATE(321), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [10195] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(249), 1,
      sym_brace_left,
    STATE(220), 1,
      sym_compound_statement,
    STATE(322), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [10212] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(885), 1,
      sym_if,
    ACTIONS(887), 1,
      sym_semicolon,
    STATE(323), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [10229] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(324), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(889), 2,
      sym_less_than,
      sym_paren_left,
  [10244] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(325), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(891), 2,
      sym_paren_right,
      sym_semicolon,
  [10259] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(326), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(893), 2,
      sym_comma,
      sym_paren_right,
  [10274] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(895), 1,
      sym_arrow,
    ACTIONS(897), 1,
      sym_brace_left,
    STATE(327), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [10291] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(899), 1,
      sym_paren_left,
    STATE(139), 1,
      sym_argument_expression_list,
    STATE(328), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [10308] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(329), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(901), 2,
      sym_less_than,
      sym_paren_left,
  [10323] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(330), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(903), 2,
      sym_paren_right,
      sym_semicolon,
  [10338] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(815), 1,
      sym_brace_left,
    STATE(292), 1,
      sym_case_compound_statement,
    STATE(331), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [10355] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(905), 1,
      sym_comma,
    ACTIONS(907), 1,
      sym_paren_right,
    STATE(332), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [10372] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(69), 1,
      sym_paren_left,
    STATE(106), 1,
      sym_paren_expression,
    STATE(333), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [10389] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(249), 1,
      sym_brace_left,
    STATE(129), 1,
      sym_compound_statement,
    STATE(334), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [10406] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(335), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(909), 2,
      sym_comma,
      sym_greater_than,
  [10421] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(911), 1,
      sym_comma,
    ACTIONS(913), 1,
      sym_greater_than,
    STATE(336), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [10438] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(206), 1,
      sym_paren_right,
    ACTIONS(915), 1,
      sym_comma,
    STATE(337), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [10455] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(338), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(917), 2,
      sym_brace_right,
      sym_comma,
  [10470] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(919), 1,
      sym_brace_right,
    ACTIONS(921), 1,
      sym_comma,
    STATE(339), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [10487] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(340), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(825), 2,
      sym_equal,
      sym_semicolon,
  [10502] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(923), 1,
      sym_paren_left,
    STATE(172), 1,
      sym_argument_expression_list,
    STATE(341), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [10519] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(202), 1,
      sym_paren_right,
    ACTIONS(925), 1,
      sym_comma,
    STATE(342), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [10536] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(827), 1,
      sym_brace_right,
    ACTIONS(927), 1,
      sym_comma,
    STATE(343), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [10553] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(815), 1,
      sym_brace_left,
    STATE(299), 1,
      sym_case_compound_statement,
    STATE(344), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [10570] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(839), 1,
      sym_equal,
    ACTIONS(841), 1,
      sym_semicolon,
    STATE(345), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [10587] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(929), 1,
      sym_ident,
    STATE(346), 1,
      sym__comment,
    STATE(411), 1,
      sym_variable_ident_decl,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [10604] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(347), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(931), 2,
      sym_brace_right,
      sym_comma,
  [10619] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(933), 1,
      sym_comma,
    ACTIONS(935), 1,
      sym_greater_than,
    STATE(348), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [10636] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(937), 1,
      sym_comma,
    ACTIONS(939), 1,
      sym_paren_right,
    STATE(349), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [10653] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(941), 1,
      sym_arrow,
    ACTIONS(943), 1,
      sym_brace_left,
    STATE(350), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [10670] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(945), 1,
      sym_equal,
    ACTIONS(947), 1,
      sym_semicolon,
    STATE(351), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [10687] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(168), 1,
      sym_paren_left,
    STATE(186), 1,
      sym_paren_expression,
    STATE(352), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [10704] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(204), 1,
      sym_paren_right,
    ACTIONS(949), 1,
      sym_comma,
    STATE(353), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [10721] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(249), 1,
      sym_brace_left,
    STATE(226), 1,
      sym_compound_statement,
    STATE(354), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [10738] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(951), 1,
      sym_comma,
    ACTIONS(953), 1,
      sym_paren_right,
    STATE(355), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [10755] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(955), 1,
      sym_equal,
    ACTIONS(957), 1,
      sym_semicolon,
    STATE(356), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [10772] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(357), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(959), 2,
      sym_paren_right,
      sym_semicolon,
  [10787] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(358), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(961), 2,
      sym_comma,
      sym_paren_right,
  [10802] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(963), 1,
      sym_ident,
    STATE(359), 1,
      sym__comment,
    STATE(409), 1,
      sym_variable_ident_decl,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [10819] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(845), 1,
      sym_equal,
    ACTIONS(847), 1,
      sym_semicolon,
    STATE(360), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [10836] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(965), 1,
      sym_ident,
    STATE(345), 1,
      sym_variable_ident_decl,
    STATE(361), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [10853] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(843), 1,
      sym_paren_right,
    ACTIONS(967), 1,
      sym_comma,
    STATE(362), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [10870] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(969), 1,
      sym_brace_left,
    STATE(363), 1,
      sym__comment,
    STATE(421), 1,
      sym_continuing_compound_statement,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [10887] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(971), 1,
      sym_comma,
    ACTIONS(973), 1,
      sym_greater_than,
    STATE(364), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [10904] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(975), 1,
      sym_brace_right,
    STATE(365), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [10918] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(977), 1,
      sym_greater_than,
    STATE(366), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [10932] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(979), 1,
      sym_greater_than,
    STATE(367), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [10946] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(981), 1,
      sym_comma,
    STATE(368), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [10960] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(983), 1,
      sym_greater_than,
    STATE(369), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [10974] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(985), 1,
      sym_comma,
    STATE(370), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [10988] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(987), 1,
      sym_semicolon,
    STATE(371), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11002] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(989), 1,
      sym_comma,
    STATE(372), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11016] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(991), 1,
      sym_greater_than,
    STATE(373), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11030] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(993), 1,
      sym_bracket_right,
    STATE(374), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11044] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(995), 1,
      sym_brace_right,
    STATE(375), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11058] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(997), 1,
      sym_brace_right,
    STATE(376), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11072] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(999), 1,
      sym_brace_right,
    STATE(377), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11086] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1001), 1,
      sym_semicolon,
    STATE(378), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11100] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(631), 1,
      sym_equal,
    STATE(379), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11114] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1003), 1,
      sym_paren_right,
    STATE(380), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11128] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1005), 1,
      sym_brace_left,
    STATE(381), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11142] = 5,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(1007), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1009), 1,
      aux_sym__comment_token1,
    ACTIONS(1011), 1,
      sym__blankspace,
    STATE(382), 1,
      sym__comment,
  [11158] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1013), 1,
      sym_paren_left,
    STATE(383), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11172] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1015), 1,
      sym_semicolon,
    STATE(384), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11186] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1017), 1,
      sym_semicolon,
    STATE(385), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11200] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(329), 1,
      sym_brace_right,
    STATE(386), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11214] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1019), 1,
      sym_semicolon,
    STATE(387), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11228] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(823), 1,
      sym_colon,
    STATE(388), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11242] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(887), 1,
      sym_semicolon,
    STATE(389), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11256] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1021), 1,
      sym_semicolon,
    STATE(390), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11270] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1023), 1,
      sym_brace_right,
    STATE(391), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11284] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1025), 1,
      sym_brace_right,
    STATE(392), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11298] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(645), 1,
      sym_paren_right,
    STATE(393), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11312] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1027), 1,
      sym_brace_left,
    STATE(394), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11326] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1029), 1,
      sym_greater_than,
    STATE(395), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11340] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1031), 1,
      sym_ident,
    STATE(396), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11354] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1033), 1,
      sym_paren_right,
    STATE(397), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11368] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(333), 1,
      sym_brace_right,
    STATE(398), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11382] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1035), 1,
      sym_brace_right,
    STATE(399), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11396] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1037), 1,
      sym_paren_right,
    STATE(400), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11410] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1039), 1,
      sym_semicolon,
    STATE(401), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11424] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(643), 1,
      sym_paren_right,
    STATE(402), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11438] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1041), 1,
      sym_paren_right,
    STATE(403), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11452] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1043), 1,
      sym_semicolon,
    STATE(404), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11466] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1045), 1,
      sym_ident,
    STATE(405), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11480] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1047), 1,
      sym_equal,
    STATE(406), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11494] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1049), 1,
      sym_paren_left,
    STATE(407), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11508] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1051), 1,
      sym_semicolon,
    STATE(408), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11522] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(839), 1,
      sym_equal,
    STATE(409), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11536] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1053), 1,
      sym_brace_left,
    STATE(410), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11550] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(857), 1,
      sym_equal,
    STATE(411), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11564] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1055), 1,
      sym_semicolon,
    STATE(412), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11578] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1057), 1,
      sym_semicolon,
    STATE(413), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11592] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1059), 1,
      sym_xor,
    STATE(414), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11606] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1061), 1,
      sym_brace_left,
    STATE(415), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11620] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1063), 1,
      sym_and,
    STATE(416), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11634] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1065), 1,
      sym_or,
    STATE(417), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11648] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1067), 1,
      sym_or_or,
    STATE(418), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11662] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1069), 1,
      sym_and_and,
    STATE(419), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11676] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1071), 1,
      sym_brace_right,
    STATE(420), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11690] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1073), 1,
      sym_brace_right,
    STATE(421), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11704] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(377), 1,
      sym_paren_left,
    STATE(422), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11718] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1075), 1,
      sym_less_than,
    STATE(423), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11732] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1077), 1,
      sym_less_than,
    STATE(424), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11746] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1079), 1,
      sym_less_than,
    STATE(425), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11760] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1081), 1,
      sym_paren_right,
    STATE(426), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11774] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(81), 1,
      sym_semicolon,
    STATE(427), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11788] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1083), 1,
      sym_less_than,
    STATE(428), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11802] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1085), 1,
      sym_less_than,
    STATE(429), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11816] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1087), 1,
      sym_or,
    STATE(430), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11830] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1089), 1,
      sym_xor,
    STATE(431), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11844] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1091), 1,
      sym_paren_right,
    STATE(432), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11858] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1093), 1,
      sym_ident,
    STATE(433), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11872] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1095), 1,
      sym_less_than,
    STATE(434), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11886] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1097), 1,
      sym_less_than,
    STATE(435), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11900] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1099), 1,
      sym_semicolon,
    STATE(436), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11914] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1101), 1,
      sym_comma,
    STATE(437), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11928] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1103), 1,
      sym_bracket_right,
    STATE(438), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11942] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1105), 1,
      sym_ident,
    STATE(439), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11956] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1107), 1,
      sym_comma,
    STATE(440), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11970] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1109), 1,
      sym_semicolon,
    STATE(441), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11984] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(869), 1,
      sym_less_than,
    STATE(442), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [11998] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1111), 1,
      sym_brace_left,
    STATE(443), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [12012] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1113), 1,
      sym_less_than,
    STATE(444), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [12026] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1115), 1,
      sym_comma,
    STATE(445), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [12040] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1117), 1,
      sym_paren_right,
    STATE(446), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [12054] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1119), 1,
      sym_ident,
    STATE(447), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [12068] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1121), 1,
      sym_comma,
    STATE(448), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [12082] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1123), 1,
      sym_bracket_right,
    STATE(449), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [12096] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1125), 1,
      sym_greater_than,
    STATE(450), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [12110] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(833), 1,
      sym_greater_than,
    STATE(451), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [12124] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1127), 1,
      sym_greater_than,
    STATE(452), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [12138] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1129), 1,
      sym_semicolon,
    STATE(453), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [12152] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1131), 1,
      sym_ident,
    STATE(454), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [12166] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1133), 1,
      sym_bracket_right,
    STATE(455), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [12180] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1135), 1,
      sym_semicolon,
    STATE(456), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [12194] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(267), 1,
      sym_brace_right,
    STATE(457), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [12208] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1137), 1,
      sym_semicolon,
    STATE(458), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [12222] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1139), 1,
      sym_greater_than,
    STATE(459), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [12236] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1141), 1,
      sym_semicolon,
    STATE(460), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [12250] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1143), 1,
      ts_builtin_sym_end,
    STATE(461), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [12264] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1145), 1,
      sym_ident,
    STATE(462), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [12278] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1147), 1,
      sym_paren_right,
    STATE(463), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [12292] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1149), 1,
      sym_greater_than,
    STATE(464), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [12306] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1151), 1,
      sym_ident,
    STATE(465), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [12320] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1153), 1,
      sym_ident,
    STATE(466), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [12334] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1155), 1,
      sym_ident,
    STATE(467), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [12348] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1157), 1,
      sym_semicolon,
    STATE(468), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [12362] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1159), 1,
      sym_ident,
    STATE(469), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [12376] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1161), 1,
      sym_greater_than,
    STATE(470), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [12390] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1163), 1,
      sym_less_than,
    STATE(471), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [12404] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1165), 1,
      sym_and,
    STATE(472), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [12418] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1167), 1,
      sym_less_than,
    STATE(473), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [12432] = 1,
    ACTIONS(1169), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(57)] = 0,
  [SMALL_STATE(58)] = 77,
  [SMALL_STATE(59)] = 154,
  [SMALL_STATE(60)] = 231,
  [SMALL_STATE(61)] = 308,
  [SMALL_STATE(62)] = 385,
  [SMALL_STATE(63)] = 462,
  [SMALL_STATE(64)] = 536,
  [SMALL_STATE(65)] = 610,
  [SMALL_STATE(66)] = 718,
  [SMALL_STATE(67)] = 826,
  [SMALL_STATE(68)] = 934,
  [SMALL_STATE(69)] = 1042,
  [SMALL_STATE(70)] = 1141,
  [SMALL_STATE(71)] = 1240,
  [SMALL_STATE(72)] = 1339,
  [SMALL_STATE(73)] = 1438,
  [SMALL_STATE(74)] = 1537,
  [SMALL_STATE(75)] = 1636,
  [SMALL_STATE(76)] = 1735,
  [SMALL_STATE(77)] = 1834,
  [SMALL_STATE(78)] = 1933,
  [SMALL_STATE(79)] = 1995,
  [SMALL_STATE(80)] = 2108,
  [SMALL_STATE(81)] = 2169,
  [SMALL_STATE(82)] = 2282,
  [SMALL_STATE(83)] = 2395,
  [SMALL_STATE(84)] = 2504,
  [SMALL_STATE(85)] = 2617,
  [SMALL_STATE(86)] = 2727,
  [SMALL_STATE(87)] = 2785,
  [SMALL_STATE(88)] = 2843,
  [SMALL_STATE(89)] = 2901,
  [SMALL_STATE(90)] = 3011,
  [SMALL_STATE(91)] = 3069,
  [SMALL_STATE(92)] = 3176,
  [SMALL_STATE(93)] = 3283,
  [SMALL_STATE(94)] = 3328,
  [SMALL_STATE(95)] = 3373,
  [SMALL_STATE(96)] = 3421,
  [SMALL_STATE(97)] = 3465,
  [SMALL_STATE(98)] = 3513,
  [SMALL_STATE(99)] = 3561,
  [SMALL_STATE(100)] = 3602,
  [SMALL_STATE(101)] = 3643,
  [SMALL_STATE(102)] = 3684,
  [SMALL_STATE(103)] = 3725,
  [SMALL_STATE(104)] = 3766,
  [SMALL_STATE(105)] = 3807,
  [SMALL_STATE(106)] = 3848,
  [SMALL_STATE(107)] = 3889,
  [SMALL_STATE(108)] = 3930,
  [SMALL_STATE(109)] = 3971,
  [SMALL_STATE(110)] = 4012,
  [SMALL_STATE(111)] = 4053,
  [SMALL_STATE(112)] = 4094,
  [SMALL_STATE(113)] = 4135,
  [SMALL_STATE(114)] = 4213,
  [SMALL_STATE(115)] = 4260,
  [SMALL_STATE(116)] = 4299,
  [SMALL_STATE(117)] = 4340,
  [SMALL_STATE(118)] = 4379,
  [SMALL_STATE(119)] = 4418,
  [SMALL_STATE(120)] = 4457,
  [SMALL_STATE(121)] = 4496,
  [SMALL_STATE(122)] = 4534,
  [SMALL_STATE(123)] = 4578,
  [SMALL_STATE(124)] = 4616,
  [SMALL_STATE(125)] = 4660,
  [SMALL_STATE(126)] = 4698,
  [SMALL_STATE(127)] = 4736,
  [SMALL_STATE(128)] = 4774,
  [SMALL_STATE(129)] = 4812,
  [SMALL_STATE(130)] = 4850,
  [SMALL_STATE(131)] = 4888,
  [SMALL_STATE(132)] = 4926,
  [SMALL_STATE(133)] = 4964,
  [SMALL_STATE(134)] = 5002,
  [SMALL_STATE(135)] = 5045,
  [SMALL_STATE(136)] = 5084,
  [SMALL_STATE(137)] = 5127,
  [SMALL_STATE(138)] = 5170,
  [SMALL_STATE(139)] = 5206,
  [SMALL_STATE(140)] = 5242,
  [SMALL_STATE(141)] = 5278,
  [SMALL_STATE(142)] = 5344,
  [SMALL_STATE(143)] = 5380,
  [SMALL_STATE(144)] = 5416,
  [SMALL_STATE(145)] = 5452,
  [SMALL_STATE(146)] = 5488,
  [SMALL_STATE(147)] = 5524,
  [SMALL_STATE(148)] = 5560,
  [SMALL_STATE(149)] = 5596,
  [SMALL_STATE(150)] = 5632,
  [SMALL_STATE(151)] = 5668,
  [SMALL_STATE(152)] = 5704,
  [SMALL_STATE(153)] = 5770,
  [SMALL_STATE(154)] = 5808,
  [SMALL_STATE(155)] = 5844,
  [SMALL_STATE(156)] = 5908,
  [SMALL_STATE(157)] = 5943,
  [SMALL_STATE(158)] = 6002,
  [SMALL_STATE(159)] = 6037,
  [SMALL_STATE(160)] = 6071,
  [SMALL_STATE(161)] = 6105,
  [SMALL_STATE(162)] = 6139,
  [SMALL_STATE(163)] = 6173,
  [SMALL_STATE(164)] = 6207,
  [SMALL_STATE(165)] = 6245,
  [SMALL_STATE(166)] = 6279,
  [SMALL_STATE(167)] = 6317,
  [SMALL_STATE(168)] = 6351,
  [SMALL_STATE(169)] = 6398,
  [SMALL_STATE(170)] = 6447,
  [SMALL_STATE(171)] = 6482,
  [SMALL_STATE(172)] = 6531,
  [SMALL_STATE(173)] = 6563,
  [SMALL_STATE(174)] = 6595,
  [SMALL_STATE(175)] = 6627,
  [SMALL_STATE(176)] = 6659,
  [SMALL_STATE(177)] = 6691,
  [SMALL_STATE(178)] = 6723,
  [SMALL_STATE(179)] = 6755,
  [SMALL_STATE(180)] = 6787,
  [SMALL_STATE(181)] = 6819,
  [SMALL_STATE(182)] = 6851,
  [SMALL_STATE(183)] = 6883,
  [SMALL_STATE(184)] = 6915,
  [SMALL_STATE(185)] = 6947,
  [SMALL_STATE(186)] = 6981,
  [SMALL_STATE(187)] = 7013,
  [SMALL_STATE(188)] = 7045,
  [SMALL_STATE(189)] = 7074,
  [SMALL_STATE(190)] = 7107,
  [SMALL_STATE(191)] = 7142,
  [SMALL_STATE(192)] = 7177,
  [SMALL_STATE(193)] = 7206,
  [SMALL_STATE(194)] = 7236,
  [SMALL_STATE(195)] = 7268,
  [SMALL_STATE(196)] = 7298,
  [SMALL_STATE(197)] = 7328,
  [SMALL_STATE(198)] = 7355,
  [SMALL_STATE(199)] = 7384,
  [SMALL_STATE(200)] = 7417,
  [SMALL_STATE(201)] = 7448,
  [SMALL_STATE(202)] = 7483,
  [SMALL_STATE(203)] = 7510,
  [SMALL_STATE(204)] = 7555,
  [SMALL_STATE(205)] = 7600,
  [SMALL_STATE(206)] = 7645,
  [SMALL_STATE(207)] = 7675,
  [SMALL_STATE(208)] = 7705,
  [SMALL_STATE(209)] = 7735,
  [SMALL_STATE(210)] = 7765,
  [SMALL_STATE(211)] = 7792,
  [SMALL_STATE(212)] = 7825,
  [SMALL_STATE(213)] = 7858,
  [SMALL_STATE(214)] = 7891,
  [SMALL_STATE(215)] = 7915,
  [SMALL_STATE(216)] = 7939,
  [SMALL_STATE(217)] = 7963,
  [SMALL_STATE(218)] = 7986,
  [SMALL_STATE(219)] = 8009,
  [SMALL_STATE(220)] = 8034,
  [SMALL_STATE(221)] = 8057,
  [SMALL_STATE(222)] = 8086,
  [SMALL_STATE(223)] = 8109,
  [SMALL_STATE(224)] = 8132,
  [SMALL_STATE(225)] = 8155,
  [SMALL_STATE(226)] = 8178,
  [SMALL_STATE(227)] = 8201,
  [SMALL_STATE(228)] = 8225,
  [SMALL_STATE(229)] = 8249,
  [SMALL_STATE(230)] = 8279,
  [SMALL_STATE(231)] = 8317,
  [SMALL_STATE(232)] = 8338,
  [SMALL_STATE(233)] = 8359,
  [SMALL_STATE(234)] = 8380,
  [SMALL_STATE(235)] = 8401,
  [SMALL_STATE(236)] = 8422,
  [SMALL_STATE(237)] = 8443,
  [SMALL_STATE(238)] = 8464,
  [SMALL_STATE(239)] = 8485,
  [SMALL_STATE(240)] = 8508,
  [SMALL_STATE(241)] = 8533,
  [SMALL_STATE(242)] = 8556,
  [SMALL_STATE(243)] = 8577,
  [SMALL_STATE(244)] = 8598,
  [SMALL_STATE(245)] = 8633,
  [SMALL_STATE(246)] = 8656,
  [SMALL_STATE(247)] = 8677,
  [SMALL_STATE(248)] = 8698,
  [SMALL_STATE(249)] = 8728,
  [SMALL_STATE(250)] = 8758,
  [SMALL_STATE(251)] = 8780,
  [SMALL_STATE(252)] = 8812,
  [SMALL_STATE(253)] = 8844,
  [SMALL_STATE(254)] = 8864,
  [SMALL_STATE(255)] = 8894,
  [SMALL_STATE(256)] = 8926,
  [SMALL_STATE(257)] = 8948,
  [SMALL_STATE(258)] = 8967,
  [SMALL_STATE(259)] = 8990,
  [SMALL_STATE(260)] = 9011,
  [SMALL_STATE(261)] = 9034,
  [SMALL_STATE(262)] = 9055,
  [SMALL_STATE(263)] = 9082,
  [SMALL_STATE(264)] = 9103,
  [SMALL_STATE(265)] = 9130,
  [SMALL_STATE(266)] = 9151,
  [SMALL_STATE(267)] = 9175,
  [SMALL_STATE(268)] = 9201,
  [SMALL_STATE(269)] = 9219,
  [SMALL_STATE(270)] = 9243,
  [SMALL_STATE(271)] = 9269,
  [SMALL_STATE(272)] = 9295,
  [SMALL_STATE(273)] = 9315,
  [SMALL_STATE(274)] = 9336,
  [SMALL_STATE(275)] = 9357,
  [SMALL_STATE(276)] = 9374,
  [SMALL_STATE(277)] = 9397,
  [SMALL_STATE(278)] = 9418,
  [SMALL_STATE(279)] = 9439,
  [SMALL_STATE(280)] = 9458,
  [SMALL_STATE(281)] = 9481,
  [SMALL_STATE(282)] = 9502,
  [SMALL_STATE(283)] = 9525,
  [SMALL_STATE(284)] = 9548,
  [SMALL_STATE(285)] = 9564,
  [SMALL_STATE(286)] = 9582,
  [SMALL_STATE(287)] = 9600,
  [SMALL_STATE(288)] = 9620,
  [SMALL_STATE(289)] = 9636,
  [SMALL_STATE(290)] = 9652,
  [SMALL_STATE(291)] = 9670,
  [SMALL_STATE(292)] = 9688,
  [SMALL_STATE(293)] = 9704,
  [SMALL_STATE(294)] = 9720,
  [SMALL_STATE(295)] = 9738,
  [SMALL_STATE(296)] = 9756,
  [SMALL_STATE(297)] = 9776,
  [SMALL_STATE(298)] = 9794,
  [SMALL_STATE(299)] = 9814,
  [SMALL_STATE(300)] = 9830,
  [SMALL_STATE(301)] = 9850,
  [SMALL_STATE(302)] = 9866,
  [SMALL_STATE(303)] = 9882,
  [SMALL_STATE(304)] = 9899,
  [SMALL_STATE(305)] = 9916,
  [SMALL_STATE(306)] = 9933,
  [SMALL_STATE(307)] = 9950,
  [SMALL_STATE(308)] = 9967,
  [SMALL_STATE(309)] = 9984,
  [SMALL_STATE(310)] = 9999,
  [SMALL_STATE(311)] = 10014,
  [SMALL_STATE(312)] = 10031,
  [SMALL_STATE(313)] = 10048,
  [SMALL_STATE(314)] = 10063,
  [SMALL_STATE(315)] = 10080,
  [SMALL_STATE(316)] = 10095,
  [SMALL_STATE(317)] = 10112,
  [SMALL_STATE(318)] = 10129,
  [SMALL_STATE(319)] = 10144,
  [SMALL_STATE(320)] = 10161,
  [SMALL_STATE(321)] = 10178,
  [SMALL_STATE(322)] = 10195,
  [SMALL_STATE(323)] = 10212,
  [SMALL_STATE(324)] = 10229,
  [SMALL_STATE(325)] = 10244,
  [SMALL_STATE(326)] = 10259,
  [SMALL_STATE(327)] = 10274,
  [SMALL_STATE(328)] = 10291,
  [SMALL_STATE(329)] = 10308,
  [SMALL_STATE(330)] = 10323,
  [SMALL_STATE(331)] = 10338,
  [SMALL_STATE(332)] = 10355,
  [SMALL_STATE(333)] = 10372,
  [SMALL_STATE(334)] = 10389,
  [SMALL_STATE(335)] = 10406,
  [SMALL_STATE(336)] = 10421,
  [SMALL_STATE(337)] = 10438,
  [SMALL_STATE(338)] = 10455,
  [SMALL_STATE(339)] = 10470,
  [SMALL_STATE(340)] = 10487,
  [SMALL_STATE(341)] = 10502,
  [SMALL_STATE(342)] = 10519,
  [SMALL_STATE(343)] = 10536,
  [SMALL_STATE(344)] = 10553,
  [SMALL_STATE(345)] = 10570,
  [SMALL_STATE(346)] = 10587,
  [SMALL_STATE(347)] = 10604,
  [SMALL_STATE(348)] = 10619,
  [SMALL_STATE(349)] = 10636,
  [SMALL_STATE(350)] = 10653,
  [SMALL_STATE(351)] = 10670,
  [SMALL_STATE(352)] = 10687,
  [SMALL_STATE(353)] = 10704,
  [SMALL_STATE(354)] = 10721,
  [SMALL_STATE(355)] = 10738,
  [SMALL_STATE(356)] = 10755,
  [SMALL_STATE(357)] = 10772,
  [SMALL_STATE(358)] = 10787,
  [SMALL_STATE(359)] = 10802,
  [SMALL_STATE(360)] = 10819,
  [SMALL_STATE(361)] = 10836,
  [SMALL_STATE(362)] = 10853,
  [SMALL_STATE(363)] = 10870,
  [SMALL_STATE(364)] = 10887,
  [SMALL_STATE(365)] = 10904,
  [SMALL_STATE(366)] = 10918,
  [SMALL_STATE(367)] = 10932,
  [SMALL_STATE(368)] = 10946,
  [SMALL_STATE(369)] = 10960,
  [SMALL_STATE(370)] = 10974,
  [SMALL_STATE(371)] = 10988,
  [SMALL_STATE(372)] = 11002,
  [SMALL_STATE(373)] = 11016,
  [SMALL_STATE(374)] = 11030,
  [SMALL_STATE(375)] = 11044,
  [SMALL_STATE(376)] = 11058,
  [SMALL_STATE(377)] = 11072,
  [SMALL_STATE(378)] = 11086,
  [SMALL_STATE(379)] = 11100,
  [SMALL_STATE(380)] = 11114,
  [SMALL_STATE(381)] = 11128,
  [SMALL_STATE(382)] = 11142,
  [SMALL_STATE(383)] = 11158,
  [SMALL_STATE(384)] = 11172,
  [SMALL_STATE(385)] = 11186,
  [SMALL_STATE(386)] = 11200,
  [SMALL_STATE(387)] = 11214,
  [SMALL_STATE(388)] = 11228,
  [SMALL_STATE(389)] = 11242,
  [SMALL_STATE(390)] = 11256,
  [SMALL_STATE(391)] = 11270,
  [SMALL_STATE(392)] = 11284,
  [SMALL_STATE(393)] = 11298,
  [SMALL_STATE(394)] = 11312,
  [SMALL_STATE(395)] = 11326,
  [SMALL_STATE(396)] = 11340,
  [SMALL_STATE(397)] = 11354,
  [SMALL_STATE(398)] = 11368,
  [SMALL_STATE(399)] = 11382,
  [SMALL_STATE(400)] = 11396,
  [SMALL_STATE(401)] = 11410,
  [SMALL_STATE(402)] = 11424,
  [SMALL_STATE(403)] = 11438,
  [SMALL_STATE(404)] = 11452,
  [SMALL_STATE(405)] = 11466,
  [SMALL_STATE(406)] = 11480,
  [SMALL_STATE(407)] = 11494,
  [SMALL_STATE(408)] = 11508,
  [SMALL_STATE(409)] = 11522,
  [SMALL_STATE(410)] = 11536,
  [SMALL_STATE(411)] = 11550,
  [SMALL_STATE(412)] = 11564,
  [SMALL_STATE(413)] = 11578,
  [SMALL_STATE(414)] = 11592,
  [SMALL_STATE(415)] = 11606,
  [SMALL_STATE(416)] = 11620,
  [SMALL_STATE(417)] = 11634,
  [SMALL_STATE(418)] = 11648,
  [SMALL_STATE(419)] = 11662,
  [SMALL_STATE(420)] = 11676,
  [SMALL_STATE(421)] = 11690,
  [SMALL_STATE(422)] = 11704,
  [SMALL_STATE(423)] = 11718,
  [SMALL_STATE(424)] = 11732,
  [SMALL_STATE(425)] = 11746,
  [SMALL_STATE(426)] = 11760,
  [SMALL_STATE(427)] = 11774,
  [SMALL_STATE(428)] = 11788,
  [SMALL_STATE(429)] = 11802,
  [SMALL_STATE(430)] = 11816,
  [SMALL_STATE(431)] = 11830,
  [SMALL_STATE(432)] = 11844,
  [SMALL_STATE(433)] = 11858,
  [SMALL_STATE(434)] = 11872,
  [SMALL_STATE(435)] = 11886,
  [SMALL_STATE(436)] = 11900,
  [SMALL_STATE(437)] = 11914,
  [SMALL_STATE(438)] = 11928,
  [SMALL_STATE(439)] = 11942,
  [SMALL_STATE(440)] = 11956,
  [SMALL_STATE(441)] = 11970,
  [SMALL_STATE(442)] = 11984,
  [SMALL_STATE(443)] = 11998,
  [SMALL_STATE(444)] = 12012,
  [SMALL_STATE(445)] = 12026,
  [SMALL_STATE(446)] = 12040,
  [SMALL_STATE(447)] = 12054,
  [SMALL_STATE(448)] = 12068,
  [SMALL_STATE(449)] = 12082,
  [SMALL_STATE(450)] = 12096,
  [SMALL_STATE(451)] = 12110,
  [SMALL_STATE(452)] = 12124,
  [SMALL_STATE(453)] = 12138,
  [SMALL_STATE(454)] = 12152,
  [SMALL_STATE(455)] = 12166,
  [SMALL_STATE(456)] = 12180,
  [SMALL_STATE(457)] = 12194,
  [SMALL_STATE(458)] = 12208,
  [SMALL_STATE(459)] = 12222,
  [SMALL_STATE(460)] = 12236,
  [SMALL_STATE(461)] = 12250,
  [SMALL_STATE(462)] = 12264,
  [SMALL_STATE(463)] = 12278,
  [SMALL_STATE(464)] = 12292,
  [SMALL_STATE(465)] = 12306,
  [SMALL_STATE(466)] = 12320,
  [SMALL_STATE(467)] = 12334,
  [SMALL_STATE(468)] = 12348,
  [SMALL_STATE(469)] = 12362,
  [SMALL_STATE(470)] = 12376,
  [SMALL_STATE(471)] = 12390,
  [SMALL_STATE(472)] = 12404,
  [SMALL_STATE(473)] = 12418,
  [SMALL_STATE(474)] = 12432,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translation_unit, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(444),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(428),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_selectors, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_selectors, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_expression_list_repeat1, 2), SHIFT_REPEAT(96),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_expression_list_repeat1, 2), SHIFT_REPEAT(99),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_expression_list_repeat1, 2), SHIFT_REPEAT(104),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_expression_list_repeat1, 2), SHIFT_REPEAT(104),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_expression_list_repeat1, 2), SHIFT_REPEAT(105),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_expression_list_repeat1, 2), SHIFT_REPEAT(105),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_expression_list_repeat1, 2), SHIFT_REPEAT(444),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_expression_list_repeat1, 2), SHIFT_REPEAT(442),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_expression_list_repeat1, 2), SHIFT_REPEAT(243),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_expression_list_repeat1, 2), SHIFT_REPEAT(329),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_expression_list_repeat1, 2), SHIFT_REPEAT(435),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_expression_list_repeat1, 2), SHIFT_REPEAT(242),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_expression_list_repeat1, 2), SHIFT_REPEAT(434),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_expression_list_repeat1, 2), SHIFT_REPEAT(429),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_expression_list_repeat1, 2), SHIFT_REPEAT(428),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_expression_list_repeat1, 2), SHIFT_REPEAT(237),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_expression_list_repeat1, 2), SHIFT_REPEAT(324),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_expression_list_repeat1, 2), SHIFT_REPEAT(425),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_expression_list_repeat1, 2), SHIFT_REPEAT(107),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_expression_list_repeat1, 2), SHIFT_REPEAT(45),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_expression_list_repeat1, 2), SHIFT_REPEAT(34),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(473),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_expression_list_repeat1, 2),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_expression_list_repeat1, 2),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_assignment_operator, 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_assignment_operator, 1),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_member_repeat1, 2),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_member_repeat1, 2), SHIFT_REPEAT(462),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 2),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(185),
  [274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(25),
  [277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(389),
  [280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(346),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(385),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2),
  [288] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(384),
  [291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(383),
  [294] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(15),
  [297] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(381),
  [300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(10),
  [303] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(31),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(280),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(30),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(275),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(91),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(249),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(128),
  [326] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(379),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 7),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 7),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 5),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 5),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_member_repeat1, 1),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_member_repeat1, 1),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 6),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 6),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_statement, 2),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_statement, 2),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_statement, 3),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_statement, 3),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_postfix_expression, 2),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postfix_expression, 2),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_expression, 1),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 1),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callable, 1),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_postfix_expression, 3),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postfix_expression, 3),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_singular_expression, 1),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_singular_expression, 1),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_literal, 1),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_literal, 1),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_expression_list, 4),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_expression_list, 4),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_expression_list, 2),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_expression_list, 2),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paren_expression, 3),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren_expression, 3),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_expression_list, 5),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_expression_list, 5),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_float_literal, 1),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_float_literal, 1),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex_float_literal, 1),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_float_literal, 1),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_expression, 5),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 5),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_literal, 1),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_literal, 1),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const_literal, 1),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_literal, 1),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_expression, 2),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 2),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_literal, 1),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_literal, 1),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_expression_list, 3),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_expression_list, 3),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translation_unit, 1),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_and_expression, 1),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiplicative_expression, 1),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiplicative_expression, 1),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_or_expression, 1),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_xor_expression, 1),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 1),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 1),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_postfix_expression, 4),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postfix_expression, 4),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_singular_expression, 2),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_singular_expression, 2),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 1),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 1),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 1),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_statement, 1),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_statement, 4),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_statement, 4),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_statement, 3),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_statement, 3),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 3),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 3),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 5),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 5),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_statement, 5),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_statement, 5),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_statement, 5),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_statement, 5),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translation_unit, 2),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_translation_unit_repeat2, 2),
  [531] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_translation_unit_repeat2, 2), SHIFT_REPEAT(361),
  [534] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_translation_unit_repeat2, 2), SHIFT_REPEAT(25),
  [537] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_translation_unit_repeat2, 2), SHIFT_REPEAT(469),
  [540] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_translation_unit_repeat2, 2), SHIFT_REPEAT(359),
  [543] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_translation_unit_repeat2, 2), SHIFT_REPEAT(466),
  [546] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_translation_unit_repeat2, 2), SHIFT_REPEAT(465),
  [549] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_translation_unit_repeat2, 2), SHIFT_REPEAT(280),
  [552] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_translation_unit_repeat2, 2), SHIFT_REPEAT(462),
  [555] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_translation_unit_repeat2, 2), SHIFT_REPEAT(222),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiplicative_expression, 3),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiplicative_expression, 3),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_additive_expression, 1),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_additive_expression, 1),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_additive_expression, 3),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_additive_expression, 3),
  [576] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2), SHIFT_REPEAT(309),
  [579] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 2), SHIFT_REPEAT(99),
  [582] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2), SHIFT_REPEAT(104),
  [585] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 2), SHIFT_REPEAT(104),
  [588] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2), SHIFT_REPEAT(105),
  [591] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 2), SHIFT_REPEAT(105),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_lhs_expression, 1),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_lhs_expression, 3),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shift_expression, 1),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shift_expression, 1),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lhs_expression, 2),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lhs_expression, 1),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shift_expression, 3),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shift_expression, 3),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_translation_unit_repeat1, 2),
  [622] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_translation_unit_repeat1, 2), SHIFT_REPEAT(467),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relational_expression, 1),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lhs_expression, 3),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_header, 3),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_header, 4),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_header, 2),
  [649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 2),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_directive, 1),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enable_directive, 3),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_translation_unit_repeat1, 1),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body_decl, 5),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_decl, 3),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_decl, 3),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_translation_unit_repeat2, 1),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body_decl, 3),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body_decl, 4),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_decl, 2),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_and_expression, 1),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_or_expression, 1),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl_without_ident, 8),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_texture_sampler_types, 4),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_texture_sampler_types, 1),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relational_expression, 3),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_texture_sampler_types, 6),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl_without_ident, 4),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_depth_texture_type, 1),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type_decl, 4),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitwise_expression, 3),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_or_expression, 3),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_short_circuit_and_expression, 1),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_short_circuit_or_expression, 1),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_and_expression, 3),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sampler_type, 1),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl_without_ident, 1),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_xor_expression, 3),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type_decl, 6),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl_without_ident, 6),
  [735] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_decl_repeat1, 2), SHIFT_REPEAT(388),
  [738] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_decl_repeat1, 2), SHIFT_REPEAT(462),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_short_circuit_or_expression, 3),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl, 1),
  [749] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_param_list_repeat1, 2), SHIFT_REPEAT(388),
  [752] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_param_list_repeat1, 2), SHIFT_REPEAT(462),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_short_circuit_and_expression, 3),
  [757] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_ident_decl, 3),
  [767] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 2), SHIFT_REPEAT(7),
  [770] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 2), SHIFT_REPEAT(300),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 2),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lhs_expression_repeat1, 2),
  [783] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lhs_expression_repeat1, 2), SHIFT_REPEAT(275),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_selectors, 1),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [790] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lhs_expression_repeat1, 1),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_selectors_repeat1, 2),
  [800] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_selectors_repeat1, 2), SHIFT_REPEAT(19),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_body_decl_repeat1, 2),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_param_list_repeat1, 2),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 3),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_body, 2),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_compound_statement, 4),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_decl, 3),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_body, 3),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_compound_statement, 2),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_count_expression, 1),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_decl, 2),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_constant_decl, 2),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 2),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_constant_decl, 3),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_body, 4),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 1),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_compound_statement, 3),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_or_ident, 1),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_statement, 2),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_variable_decl, 2),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 1),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break_statement, 1),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vec_prefix, 1),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decrement_statement, 2),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 1),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_header, 4),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mat_prefix, 1),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_increment_statement, 2),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address_space, 1),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_member, 1),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_member, 2),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_header, 5),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_statement, 1),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_variable_decl, 1),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 3),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break_if_statement, 4),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_constant_decl, 4),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_texel_format, 1),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_mode, 1),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fallthrough_statement, 2),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuing_compound_statement, 4),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_header, 5),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1007] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [1009] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [1011] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1017] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continue_statement, 1),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_variable_decl, 3),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuing_compound_statement, 3),
  [1027] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_header, 8),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1035] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuing_compound_statement, 2),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_update, 1),
  [1043] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_alias_decl, 4),
  [1045] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_qualifier, 3),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1053] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_header, 7),
  [1055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_assert_statement, 2),
  [1057] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1073] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuing_statement, 2),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_storage_texture_type, 1),
  [1085] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multisampled_texture_type, 1),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1095] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sampled_texture_type, 1),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1099] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_statement, 4),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_qualifier, 5),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_variable_decl, 4),
  [1111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_header, 6),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_constant_decl, 5),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_statement, 3),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1143] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_init, 1),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment, 2),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_wgsl_external_scanner_create(void);
void tree_sitter_wgsl_external_scanner_destroy(void *);
bool tree_sitter_wgsl_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_wgsl_external_scanner_serialize(void *, char *);
void tree_sitter_wgsl_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_wgsl(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_ident,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_wgsl_external_scanner_create,
      tree_sitter_wgsl_external_scanner_destroy,
      tree_sitter_wgsl_external_scanner_scan,
      tree_sitter_wgsl_external_scanner_serialize,
      tree_sitter_wgsl_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
