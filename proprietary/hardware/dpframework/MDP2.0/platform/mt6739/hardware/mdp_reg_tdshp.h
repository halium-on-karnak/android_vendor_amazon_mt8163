#ifndef __MDP_REG_TDSHP_H__
#define __MDP_REG_TDSHP_H__

#include "mmsys_reg_base.h"

#define MDP_TDSHP_00               (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x000)
#define MDP_TDSHP_01               (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x004)
#define MDP_TDSHP_02               (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x008)
#define MDP_TDSHP_03               (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x00C)
#define MDP_TDSHP_05               (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x014)
#define MDP_TDSHP_06               (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x018)
#define MDP_TDSHP_07               (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x01C)
#define MDP_TDSHP_08               (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x020)
#define MDP_TDSHP_09               (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x024)
#define MDP_PBC_00                 (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x040)
#define MDP_PBC_01                 (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x044)
#define MDP_PBC_02                 (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x048)
#define MDP_PBC_03                 (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x04C)
#define MDP_PBC_04                 (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x050)
#define MDP_PBC_05                 (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x054)
#define MDP_PBC_06                 (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x058)
#define MDP_PBC_07                 (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x05C)
#define MDP_PBC_08                 (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x060)
#define MDP_HIST_CFG_00            (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x064)
#define MDP_HIST_CFG_01            (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x068)
#define MDP_LUMA_HIST_00           (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x06C)
#define MDP_LUMA_HIST_01           (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x070)
#define MDP_LUMA_HIST_02           (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x074)
#define MDP_LUMA_HIST_03           (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x078)
#define MDP_LUMA_HIST_04           (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x07C)
#define MDP_LUMA_HIST_05           (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x080)
#define MDP_LUMA_HIST_06           (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x084)
#define MDP_LUMA_HIST_07           (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x08C)
#define MDP_LUMA_HIST_08           (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x090)
#define MDP_LUMA_HIST_09           (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x094)
#define MDP_LUMA_HIST_10           (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x098)
#define MDP_LUMA_HIST_11           (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x09C)
#define MDP_LUMA_HIST_12           (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x0A0)
#define MDP_LUMA_HIST_13           (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x0A4)
#define MDP_LUMA_HIST_14           (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x0A8)
#define MDP_LUMA_HIST_15           (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x0AC)
#define MDP_LUMA_HIST_16           (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x0B0)
#define MDP_LUMA_SUM               (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x0B4)
#define MDP_Y_FTN_1_0_MAIN         (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x0BC)
#define MDP_Y_FTN_3_2_MAIN         (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x0C0)
#define MDP_Y_FTN_5_4_MAIN         (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x0C4)
#define MDP_Y_FTN_7_6_MAIN         (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x0C8)
#define MDP_Y_FTN_9_8_MAIN         (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x0CC)
#define MDP_Y_FTN_11_10_MAIN       (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x0D0)
#define MDP_Y_FTN_13_12_MAIN       (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x0D4)
#define MDP_Y_FTN_15_14_MAIN       (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x0D8)
#define MDP_Y_FTN_17_16_MAIN       (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x0DC)
#define MDP_C_BOOST_MAIN           (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x0E0)
#define MDP_C_BOOST_MAIN_2         (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x0E4)
#define MDP_TDSHP_ATPG             (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x0FC)
#define MDP_TDSHP_CTRL             (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x100)
#define MDP_TDSHP_INTEN            (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x104)
#define MDP_TDSHP_INTSTA           (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x108)
#define MDP_TDSHP_STATUS           (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x10C)
#define MDP_TDSHP_CFG              (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x110)
#define MDP_TDSHP_INPUT_COUNT      (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x114)
#define MDP_TDSHP_CHKSUM           (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x118)
#define MDP_TDSHP_OUTPUT_COUNT     (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x11C)
#define MDP_TDSHP_INPUT_SIZE       (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x120)
#define MDP_TDSHP_OUTPUT_OFFSET    (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x124)
#define MDP_TDSHP_OUTPUT_SIZE      (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x128)
#define MDP_TDSHP_BLANK_WIDTH      (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x12C)
#define MDP_TDSHP_DEMO_HMASK       (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x130)
#define MDP_TDSHP_DEMO_VMASK       (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x134)

#define MDP_LUMA_HIST_INIT_00      (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x200)
#define MDP_LUMA_HIST_INIT_01      (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x204)
#define MDP_LUMA_HIST_INIT_02      (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x208)
#define MDP_LUMA_HIST_INIT_03      (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x20C)
#define MDP_LUMA_HIST_INIT_04      (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x210)
#define MDP_LUMA_HIST_INIT_05      (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x214)
#define MDP_LUMA_HIST_INIT_06      (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x218)
#define MDP_LUMA_HIST_INIT_07      (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x21C)
#define MDP_LUMA_HIST_INIT_08      (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x220)
#define MDP_LUMA_HIST_INIT_09      (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x224)
#define MDP_LUMA_HIST_INIT_10      (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x228)
#define MDP_LUMA_HIST_INIT_11      (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x22C)
#define MDP_LUMA_HIST_INIT_12      (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x230)
#define MDP_LUMA_HIST_INIT_13      (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x234)
#define MDP_LUMA_HIST_INIT_14      (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x238)
#define MDP_LUMA_HIST_INIT_15      (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x23C)
#define MDP_LUMA_HIST_INIT_16      (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x240)
#define MDP_LUMA_SUM_INIT          (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x244)

/*Jade New feature*/
#define MDP_DC_DBG_CFG_MAIN            (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x250)
#define MDP_DC_WIN_X_MAIN              (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x254)
#define MDP_DC_WIN_Y_MAIN              (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x258)
#define MDP_DC_TWO_D_W1                (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x25C)
#define MDP_DC_TWO_D_W1_RESULT_INIT    (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x260)
#define MDP_DC_TWO_D_W1_RESULT         (ID_ADDR(m_identifier)+ MDP_TDSHP0_BASE + 0x264)

// MASK
#define MDP_TDSHP_00_MASK               (0xF7FFFFFF)
#define MDP_TDSHP_01_MASK               (0xFFFF0FFF)
#define MDP_TDSHP_02_MASK               (0xFFFFFF00)
#define MDP_TDSHP_03_MASK               (0x9FFF0F3F)
#define MDP_TDSHP_05_MASK               (0xFFFFFFFF)
#define MDP_TDSHP_06_MASK               (0xFFFFFFFF)
#define MDP_TDSHP_07_MASK               (0xFFFFFFFF)
#define MDP_TDSHP_08_MASK               (0xFFFFFFFF)
#define MDP_TDSHP_09_MASK               (0xFF3F4000)
#define MDP_PBC_00_MASK                 (0xFFFFFFFF)
#define MDP_PBC_01_MASK                 (0xFFFFFFFF)
#define MDP_PBC_02_MASK                 (0xFFCF7F3F)
#define MDP_PBC_03_MASK                 (0xFFFFFFFF)
#define MDP_PBC_04_MASK                 (0xFFFFFFFF)
#define MDP_PBC_05_MASK                 (0xFFCF7F3F)
#define MDP_PBC_06_MASK                 (0xFFFFFFFF)
#define MDP_PBC_07_MASK                 (0xFFFFFFFF)
#define MDP_PBC_08_MASK                 (0xFFCF7F3F)
#define MDP_HIST_CFG_00_MASK            (0xFFFFFFFF)
#define MDP_HIST_CFG_01_MASK            (0xFFFFFFFF)
#define MDP_LUMA_HIST_00_MASK           (0x07FFFFFF)
#define MDP_LUMA_HIST_01_MASK           (0x07FFFFFF)
#define MDP_LUMA_HIST_02_MASK           (0x07FFFFFF)
#define MDP_LUMA_HIST_03_MASK           (0x07FFFFFF)
#define MDP_LUMA_HIST_04_MASK           (0x07FFFFFF)
#define MDP_LUMA_HIST_05_MASK           (0x07FFFFFF)
#define MDP_LUMA_HIST_06_MASK           (0x07FFFFFF)
#define MDP_LUMA_HIST_07_MASK           (0x07FFFFFF)
#define MDP_LUMA_HIST_08_MASK           (0x07FFFFFF)
#define MDP_LUMA_HIST_09_MASK           (0x07FFFFFF)
#define MDP_LUMA_HIST_10_MASK           (0x07FFFFFF)
#define MDP_LUMA_HIST_11_MASK           (0x07FFFFFF)
#define MDP_LUMA_HIST_12_MASK           (0x07FFFFFF)
#define MDP_LUMA_HIST_13_MASK           (0x07FFFFFF)
#define MDP_LUMA_HIST_14_MASK           (0x07FFFFFF)
#define MDP_LUMA_HIST_15_MASK           (0x07FFFFFF)
#define MDP_LUMA_HIST_16_MASK           (0x07FFFFFF)
#define MDP_LUMA_SUM_MASK               (0xFFFFFFFF)
#define MDP_Y_FTN_1_0_MAIN_MASK         (0x01FF01FF)
#define MDP_Y_FTN_3_2_MAIN_MASK         (0x01FF01FF)
#define MDP_Y_FTN_5_4_MAIN_MASK         (0x01FF01FF)
#define MDP_Y_FTN_7_6_MAIN_MASK         (0x01FF01FF)
#define MDP_Y_FTN_9_8_MAIN_MASK         (0x01FF01FF)
#define MDP_Y_FTN_11_10_MAIN_MASK       (0x01FF01FF)
#define MDP_Y_FTN_13_12_MAIN_MASK       (0x01FF01FF)
#define MDP_Y_FTN_15_14_MAIN_MASK       (0x01FF01FF)
#define MDP_Y_FTN_17_16_MAIN_MASK       (0x03FF)
#define MDP_C_BOOST_MAIN_MASK           (0xFFFF20FF)
#define MDP_C_BOOST_MAIN_2_MASK         (0xFF03007F)
#define MDP_TDSHP_ATPG_MASK             (0x03)
#define MDP_TDSHP_CTRL_MASK             (0x03)
#define MDP_TDSHP_INTEN_MASK            (0x07)
#define MDP_TDSHP_INTSTA_MASK           (0x07)
#define MDP_TDSHP_STATUS_MASK           (0x0F3)
#define MDP_TDSHP_CFG_MASK              (0x03F7)
#define MDP_TDSHP_INPUT_COUNT_MASK      (0x1FFF1FFF)
#define MDP_TDSHP_CHKSUM_MASK           (0xB0FFFFFF)
#define MDP_TDSHP_OUTPUT_COUNT_MASK     (0x1FFF1FFF)
#define MDP_TDSHP_INPUT_SIZE_MASK       (0x1FFF1FFF)
#define MDP_TDSHP_OUTPUT_OFFSET_MASK    (0x0FF00FF)
#define MDP_TDSHP_OUTPUT_SIZE_MASK      (0x1FFF1FFF)
#define MDP_TDSHP_BLANK_WIDTH_MASK      (0x0FFFFFF)
#define MDP_TDSHP_DEMO_HMASK_MASK       (0x1FFF1FFF)
#define MDP_TDSHP_DEMO_VMASK_MASK       (0x1FFF1FFF)

#define MDP_LUMA_HIST_INIT_00_MASK      (0x07FFFFFF)
#define MDP_LUMA_HIST_INIT_01_MASK      (0x07FFFFFF)
#define MDP_LUMA_HIST_INIT_02_MASK      (0x07FFFFFF)
#define MDP_LUMA_HIST_INIT_03_MASK      (0x07FFFFFF)
#define MDP_LUMA_HIST_INIT_04_MASK      (0x07FFFFFF)
#define MDP_LUMA_HIST_INIT_05_MASK      (0x07FFFFFF)
#define MDP_LUMA_HIST_INIT_06_MASK      (0x07FFFFFF)
#define MDP_LUMA_HIST_INIT_07_MASK      (0x07FFFFFF)
#define MDP_LUMA_HIST_INIT_08_MASK      (0x07FFFFFF)
#define MDP_LUMA_HIST_INIT_09_MASK      (0x07FFFFFF)
#define MDP_LUMA_HIST_INIT_10_MASK      (0x07FFFFFF)
#define MDP_LUMA_HIST_INIT_11_MASK      (0x07FFFFFF)
#define MDP_LUMA_HIST_INIT_12_MASK      (0x07FFFFFF)
#define MDP_LUMA_HIST_INIT_13_MASK      (0x07FFFFFF)
#define MDP_LUMA_HIST_INIT_14_MASK      (0x07FFFFFF)
#define MDP_LUMA_HIST_INIT_15_MASK      (0x07FFFFFF)
#define MDP_LUMA_HIST_INIT_16_MASK      (0x07FFFFFF)
#define MDP_LUMA_SUM_INIT_MASK          (0xFFFFFFFF)
/*Jade New feature*/
#define MDP_DC_DBG_CFG_MAIN_MASK            (0x07)
#define MDP_DC_WIN_X_MAIN_MASK              (0xFFFFFFFF)
#define MDP_DC_WIN_Y_MAIN_MASK              (0xFFFFFFFF)
#define MDP_DC_TWO_D_W1_MASK                (0xFFFFFFFF)
#define MDP_DC_TWO_D_W1_RESULT_INIT_MASK    (0x007FFFFF)
#define MDP_DC_TWO_D_W1_RESULT_MASK         (0x007FFFFF)
#endif  // __MDP_REG_TDSHP_H__
