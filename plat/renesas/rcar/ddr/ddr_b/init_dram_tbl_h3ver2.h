/*
 * Copyright (c) 2015-2019, Renesas Electronics Corporation. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#define DDR_PHY_SLICE_REGSET_OFS_H3VER2  0x0400
#define DDR_PHY_ADR_V_REGSET_OFS_H3VER2  0x0600
#define DDR_PHY_ADR_I_REGSET_OFS_H3VER2  0x0640
#define DDR_PHY_ADR_G_REGSET_OFS_H3VER2  0x0680
#define DDR_PI_REGSET_OFS_H3VER2         0x0200

#define DDR_PHY_SLICE_REGSET_SIZE_H3VER2 0x80
#define DDR_PHY_ADR_V_REGSET_SIZE_H3VER2 0x40
#define DDR_PHY_ADR_I_REGSET_SIZE_H3VER2 0x40
#define DDR_PHY_ADR_G_REGSET_SIZE_H3VER2 0x80
#define DDR_PI_REGSET_SIZE_H3VER2        0x100

#define DDR_PHY_SLICE_REGSET_NUM_H3VER2  97
#define DDR_PHY_ADR_V_REGSET_NUM_H3VER2  37
#define DDR_PHY_ADR_I_REGSET_NUM_H3VER2  37
#define DDR_PHY_ADR_G_REGSET_NUM_H3VER2  79
#define DDR_PI_REGSET_NUM_H3VER2         245

static const uint32_t DDR_PHY_SLICE_REGSET_H3VER2[DDR_PHY_SLICE_REGSET_NUM_H3VER2] = {
/*0400*/	0x76543210,
/*0401*/	0x0004f008,
/*0402*/	0x00020133,
/*0403*/	0x00000000,
/*0404*/	0x00000000,
/*0405*/	0x00010000,
/*0406*/	0x016e6e0e,
/*0407*/	0x026e6e0e,
/*0408*/	0x00010300,
/*0409*/	0x04000100,
/*040a*/	0x01000000,
/*040b*/	0x00000000,
/*040c*/	0x00000000,
/*040d*/	0x00000100,
/*040e*/	0x001700c0,
/*040f*/	0x020100b0,
/*0410*/	0x00030020,
/*0411*/	0x00000000,
/*0412*/	0x00000000,
/*0413*/	0x00000000,
/*0414*/	0x00000000,
/*0415*/	0x00000000,
/*0416*/	0x00000000,
/*0417*/	0x00000000,
/*0418*/	0x09000000,
/*0419*/	0x04080000,
/*041a*/	0x04080400,
/*041b*/	0x08000000,
/*041c*/	0x0c008007,
/*041d*/	0x00000f00,
/*041e*/	0x00000100,
/*041f*/	0x55aa55aa,
/*0420*/	0x33cc33cc,
/*0421*/	0x0ff00ff0,
/*0422*/	0x0f0ff0f0,
/*0423*/	0x00018e38,
/*0424*/	0x00000000,
/*0425*/	0x00000000,
/*0426*/	0x00000000,
/*0427*/	0x00000000,
/*0428*/	0x00000000,
/*0429*/	0x00000000,
/*042a*/	0x00000000,
/*042b*/	0x00000000,
/*042c*/	0x00000000,
/*042d*/	0x00000000,
/*042e*/	0x00000000,
/*042f*/	0x00000000,
/*0430*/	0x00000000,
/*0431*/	0x00000000,
/*0432*/	0x00000000,
/*0433*/	0x00000000,
/*0434*/	0x00000000,
/*0435*/	0x00000000,
/*0436*/	0x00000000,
/*0437*/	0x00000000,
/*0438*/	0x00000104,
/*0439*/	0x00082020,
/*043a*/	0x08200820,
/*043b*/	0x08200820,
/*043c*/	0x08200820,
/*043d*/	0x08200820,
/*043e*/	0x08200820,
/*043f*/	0x00000000,
/*0440*/	0x00000000,
/*0441*/	0x03000300,
/*0442*/	0x03000300,
/*0443*/	0x03000300,
/*0444*/	0x03000300,
/*0445*/	0x00000300,
/*0446*/	0x00000000,
/*0447*/	0x00000000,
/*0448*/	0x00000000,
/*0449*/	0x00000000,
/*044a*/	0x00000000,
/*044b*/	0x00a000a0,
/*044c*/	0x00a000a0,
/*044d*/	0x00a000a0,
/*044e*/	0x00a000a0,
/*044f*/	0x00a000a0,
/*0450*/	0x00a000a0,
/*0451*/	0x00a000a0,
/*0452*/	0x00a000a0,
/*0453*/	0x00a000a0,
/*0454*/	0x01040109,
/*0455*/	0x00000200,
/*0456*/	0x01000000,
/*0457*/	0x00000200,
/*0458*/	0x00000004,
/*0459*/	0x4041a141,
/*045a*/	0xc00141a0,
/*045b*/	0x0e0000c0,
/*045c*/	0x0010000c,
/*045d*/	0x063e4208,
/*045e*/	0x0f0c180c,
/*045f*/	0x00e00140,
/*0460*/	0x00000c20
};

static const uint32_t DDR_PHY_ADR_V_REGSET_H3VER2[DDR_PHY_ADR_V_REGSET_NUM_H3VER2] = {
/*0600*/	0x00000000,
/*0601*/	0x00000000,
/*0602*/	0x00000000,
/*0603*/	0x00000000,
/*0604*/	0x00000000,
/*0605*/	0x00000000,
/*0606*/	0x00000000,
/*0607*/	0x00010000,
/*0608*/	0x00000200,
/*0609*/	0x00000000,
/*060a*/	0x00000000,
/*060b*/	0x00000000,
/*060c*/	0x00400320,
/*060d*/	0x00000040,
/*060e*/	0x00dcba98,
/*060f*/	0x03000000,
/*0610*/	0x00000200,
/*0611*/	0x00000000,
/*0612*/	0x00000000,
/*0613*/	0x00000000,
/*0614*/	0x0000002a,
/*0615*/	0x00000015,
/*0616*/	0x00000015,
/*0617*/	0x0000002a,
/*0618*/	0x00000033,
/*0619*/	0x0000000c,
/*061a*/	0x0000000c,
/*061b*/	0x00000033,
/*061c*/	0x00418820,
/*061d*/	0x003f0000,
/*061e*/	0x0000003f,
/*061f*/	0x0002c06e,
/*0620*/	0x02c002c0,
/*0621*/	0x02c002c0,
/*0622*/	0x000002c0,
/*0623*/	0x42080010,
/*0624*/	0x0000033e
};

static const uint32_t DDR_PHY_ADR_I_REGSET_H3VER2[DDR_PHY_ADR_I_REGSET_NUM_H3VER2] = {
/*0640*/	0x00000000,
/*0641*/	0x00000000,
/*0642*/	0x00000000,
/*0643*/	0x00000000,
/*0644*/	0x00000000,
/*0645*/	0x00000000,
/*0646*/	0x00000000,
/*0647*/	0x00000000,
/*0648*/	0x00000000,
/*0649*/	0x00000000,
/*064a*/	0x00000000,
/*064b*/	0x00000000,
/*064c*/	0x00000000,
/*064d*/	0x00000000,
/*064e*/	0x00000000,
/*064f*/	0x00000000,
/*0650*/	0x00000000,
/*0651*/	0x00000000,
/*0652*/	0x00000000,
/*0653*/	0x00000000,
/*0654*/	0x00000000,
/*0655*/	0x00000000,
/*0656*/	0x00000000,
/*0657*/	0x00000000,
/*0658*/	0x00000000,
/*0659*/	0x00000000,
/*065a*/	0x00000000,
/*065b*/	0x00000000,
/*065c*/	0x00000000,
/*065d*/	0x00000000,
/*065e*/	0x00000000,
/*065f*/	0x00000000,
/*0660*/	0x00000000,
/*0661*/	0x00000000,
/*0662*/	0x00000000,
/*0663*/	0x00000000,
/*0664*/	0x00000000
};

static const uint32_t DDR_PHY_ADR_G_REGSET_H3VER2[DDR_PHY_ADR_G_REGSET_NUM_H3VER2] = {
/*0680*/	0x00000000,
/*0681*/	0x00000100,
/*0682*/	0x00000000,
/*0683*/	0x00050000,
/*0684*/	0x0f000000,
/*0685*/	0x00800400,
/*0686*/	0x00020032,
/*0687*/	0x00020055,
/*0688*/	0x00000000,
/*0689*/	0x00000000,
/*068a*/	0x00000000,
/*068b*/	0x00000050,
/*068c*/	0x00000000,
/*068d*/	0x01010100,
/*068e*/	0x01000200,
/*068f*/	0x00000000,
/*0690*/	0x00010100,
/*0691*/	0x00000000,
/*0692*/	0x00000000,
/*0693*/	0x00000000,
/*0694*/	0x00000000,
/*0695*/	0x00005064,
/*0696*/	0x01421142,
/*0697*/	0x00000142,
/*0698*/	0x00000000,
/*0699*/	0x000f1100,
/*069a*/	0x0f110f11,
/*069b*/	0x09000f11,
/*069c*/	0x00000003,
/*069d*/	0x0002c000,
/*069e*/	0x02c002c0,
/*069f*/	0x000002c0,
/*06a0*/	0x03421342,
/*06a1*/	0x00000342,
/*06a2*/	0x00000000,
/*06a3*/	0x00000000,
/*06a4*/	0x05020000,
/*06a5*/	0x14000000,
/*06a6*/	0x027f6e00,
/*06a7*/	0x047f027f,
/*06a8*/	0x00027f6e,
/*06a9*/	0x00047f6e,
/*06aa*/	0x0003554f,
/*06ab*/	0x0001554f,
/*06ac*/	0x0001554f,
/*06ad*/	0x0001554f,
/*06ae*/	0x0001554f,
/*06af*/	0x00003fee,
/*06b0*/	0x0001554f,
/*06b1*/	0x00003fee,
/*06b2*/	0x0001554f,
/*06b3*/	0x00027f6e,
/*06b4*/	0x0001554f,
/*06b5*/	0x00004011,
/*06b6*/	0x00004410,
/*06b7*/	0x00000000,
/*06b8*/	0x00000000,
/*06b9*/	0x00000000,
/*06ba*/	0x00000065,
/*06bb*/	0x00000000,
/*06bc*/	0x00020201,
/*06bd*/	0x00000000,
/*06be*/	0x03000000,
/*06bf*/	0x00000008,
/*06c0*/	0x00000000,
/*06c1*/	0x00000000,
/*06c2*/	0x00000000,
/*06c3*/	0x00000000,
/*06c4*/	0x00000001,
/*06c5*/	0x00000000,
/*06c6*/	0x00000000,
/*06c7*/	0x00000000,
/*06c8*/	0x000000e4,
/*06c9*/	0x00010198,
/*06ca*/	0x00000000,
/*06cb*/	0x00000000,
/*06cc*/	0x07010000,
/*06cd*/	0x00000104,
/*06ce*/	0x00000000
};

static const uint32_t DDR_PI_REGSET_H3VER2[DDR_PI_REGSET_NUM_H3VER2] = {
/*0200*/	0x00000b00,
/*0201*/	0x00000100,
/*0202*/	0x00640000,
/*0203*/	0x00000000,
/*0204*/	0x0000ffff,
/*0205*/	0x00000000,
/*0206*/	0x0000ffff,
/*0207*/	0x00000000,
/*0208*/	0x0000ffff,
/*0209*/	0x0000304c,
/*020a*/	0x00000200,
/*020b*/	0x00000200,
/*020c*/	0x00000200,
/*020d*/	0x00000200,
/*020e*/	0x0000304c,
/*020f*/	0x00000200,
/*0210*/	0x00000200,
/*0211*/	0x00000200,
/*0212*/	0x00000200,
/*0213*/	0x0000304c,
/*0214*/	0x00000200,
/*0215*/	0x00000200,
/*0216*/	0x00000200,
/*0217*/	0x00000200,
/*0218*/	0x00010000,
/*0219*/	0x00000003,
/*021a*/	0x01000001,
/*021b*/	0x00000000,
/*021c*/	0x00000000,
/*021d*/	0x00000000,
/*021e*/	0x00000000,
/*021f*/	0x00000000,
/*0220*/	0x00000000,
/*0221*/	0x00000000,
/*0222*/	0x00000000,
/*0223*/	0x00000000,
/*0224*/	0x00000000,
/*0225*/	0x00000000,
/*0226*/	0x00000000,
/*0227*/	0x00000000,
/*0228*/	0x00000000,
/*0229*/	0x00000000,
/*022a*/	0x00000000,
/*022b*/	0x0f000101,
/*022c*/	0x08492d25,
/*022d*/	0x500e0c04,
/*022e*/	0x0002500e,
/*022f*/	0x00000301,
/*0230*/	0x00000046,
/*0231*/	0x000000cf,
/*0232*/	0x00001826,
/*0233*/	0x000000cf,
/*0234*/	0x00001826,
/*0235*/	0x00000005,
/*0236*/	0x00000000,
/*0237*/	0x00000000,
/*0238*/	0x00000000,
/*0239*/	0x00000000,
/*023a*/	0x00000000,
/*023b*/	0x00000000,
/*023c*/	0x00000000,
/*023d*/	0x00000000,
/*023e*/	0x04010000,
/*023f*/	0x00000404,
/*0240*/	0x0101280a,
/*0241*/	0x00000000,
/*0242*/	0x00000000,
/*0243*/	0x0003000f,
/*0244*/	0x00000018,
/*0245*/	0x00000000,
/*0246*/	0x00000000,
/*0247*/	0x00060002,
/*0248*/	0x00010001,
/*0249*/	0x01000101,
/*024a*/	0x04020201,
/*024b*/	0x00080804,
/*024c*/	0x00000000,
/*024d*/	0x08030000,
/*024e*/	0x15150408,
/*024f*/	0x00000000,
/*0250*/	0x00000000,
/*0251*/	0x00000000,
/*0252*/	0x0f0f0000,
/*0253*/	0x0000001e,
/*0254*/	0x00000000,
/*0255*/	0x01000300,
/*0256*/	0x00000100,
/*0257*/	0x00000000,
/*0258*/	0x00000000,
/*0259*/	0x01000000,
/*025a*/	0x00000101,
/*025b*/	0x55555a5a,
/*025c*/	0x55555a5a,
/*025d*/	0x55555a5a,
/*025e*/	0x55555a5a,
/*025f*/	0x0e0e0001,
/*0260*/	0x0c0c000e,
/*0261*/	0x0601000c,
/*0262*/	0x17170106,
/*0263*/	0x00020202,
/*0264*/	0x03000000,
/*0265*/	0x00000000,
/*0266*/	0x00181703,
/*0267*/	0x00280006,
/*0268*/	0x00280016,
/*0269*/	0x00000016,
/*026a*/	0x00000000,
/*026b*/	0x00000000,
/*026c*/	0x00000000,
/*026d*/	0x0a000000,
/*026e*/	0x00010a14,
/*026f*/	0x00030005,
/*0270*/	0x0003018d,
/*0271*/	0x000a018d,
/*0272*/	0x00060100,
/*0273*/	0x01000006,
/*0274*/	0x018e018e,
/*0275*/	0x018e0100,
/*0276*/	0x1111018e,
/*0277*/	0x10010204,
/*0278*/	0x09090650,
/*0279*/	0xff110202,
/*027a*/	0x00ff1000,
/*027b*/	0x00ff1000,
/*027c*/	0x04041000,
/*027d*/	0x18020100,
/*027e*/	0x01010018,
/*027f*/	0x004a004a,
/*0280*/	0x004b004a,
/*0281*/	0x050f0000,
/*0282*/	0x0c01021e,
/*0283*/	0x34000000,
/*0284*/	0x00000000,
/*0285*/	0x00000000,
/*0286*/	0x00000000,
/*0287*/	0x00000000,
/*0288*/	0x36312ed4,
/*0289*/	0x2ed41111,
/*028a*/	0x11113631,
/*028b*/	0x36312ed4,
/*028c*/	0xd4001111,
/*028d*/	0x1136312e,
/*028e*/	0x312ed411,
/*028f*/	0xd4111136,
/*0290*/	0x1136312e,
/*0291*/	0x2ed40011,
/*0292*/	0x11113631,
/*0293*/	0x36312ed4,
/*0294*/	0x2ed41111,
/*0295*/	0x11113631,
/*0296*/	0x312ed400,
/*0297*/	0xd4111136,
/*0298*/	0x1136312e,
/*0299*/	0x312ed411,
/*029a*/	0x00111136,
/*029b*/	0x018d0200,
/*029c*/	0x018d018d,
/*029d*/	0x1d220c08,
/*029e*/	0x00001f12,
/*029f*/	0x4301b344,
/*02a0*/	0x10172006,
/*02a1*/	0x121d220c,
/*02a2*/	0x01b3441f,
/*02a3*/	0x17200643,
/*02a4*/	0x1d220c10,
/*02a5*/	0x00001f12,
/*02a6*/	0x4301b344,
/*02a7*/	0x10172006,
/*02a8*/	0x00020002,
/*02a9*/	0x00020002,
/*02aa*/	0x00020002,
/*02ab*/	0x00020002,
/*02ac*/	0x00020002,
/*02ad*/	0x00000000,
/*02ae*/	0x00000000,
/*02af*/	0x00000000,
/*02b0*/	0x00000000,
/*02b1*/	0x00000000,
/*02b2*/	0x00000000,
/*02b3*/	0x00000000,
/*02b4*/	0x00000000,
/*02b5*/	0x00000000,
/*02b6*/	0x00000000,
/*02b7*/	0x00000000,
/*02b8*/	0x00000000,
/*02b9*/	0x00000400,
/*02ba*/	0x05040302,
/*02bb*/	0x01000f0e,
/*02bc*/	0x07060504,
/*02bd*/	0x03020100,
/*02be*/	0x02010000,
/*02bf*/	0x00000103,
/*02c0*/	0x0000304c,
/*02c1*/	0x0001e2f8,
/*02c2*/	0x0000304c,
/*02c3*/	0x0001e2f8,
/*02c4*/	0x0000304c,
/*02c5*/	0x0001e2f8,
/*02c6*/	0x08000000,
/*02c7*/	0x00000100,
/*02c8*/	0x00000000,
/*02c9*/	0x00000000,
/*02ca*/	0x00000000,
/*02cb*/	0x00000000,
/*02cc*/	0x00010000,
/*02cd*/	0x00000000,
/*02ce*/	0x00000000,
/*02cf*/	0x00000000,
/*02d0*/	0x00000000,
/*02d1*/	0x00000000,
/*02d2*/	0x00000000,
/*02d3*/	0x00000000,
/*02d4*/	0x00000000,
/*02d5*/	0x00000000,
/*02d6*/	0x00000000,
/*02d7*/	0x00000000,
/*02d8*/	0x00000000,
/*02d9*/	0x00000000,
/*02da*/	0x00000000,
/*02db*/	0x00000000,
/*02dc*/	0x00000000,
/*02dd*/	0x00000000,
/*02de*/	0x00000000,
/*02df*/	0x00000000,
/*02e0*/	0x00000000,
/*02e1*/	0x00000000,
/*02e2*/	0x00000000,
/*02e3*/	0x00000000,
/*02e4*/	0x00000000,
/*02e5*/	0x00000000,
/*02e6*/	0x00000000,
/*02e7*/	0x00000000,
/*02e8*/	0x00000000,
/*02e9*/	0x00000000,
/*02ea*/	0x00000000,
/*02eb*/	0x00000000,
/*02ec*/	0x00000000,
/*02ed*/	0x00000000,
/*02ee*/	0x00000002,
/*02ef*/	0x00000000,
/*02f0*/	0x00000000,
/*02f1*/	0x00000000,
/*02f2*/	0x00000000,
/*02f3*/	0x00000000,
/*02f4*/	0x00000000
};
