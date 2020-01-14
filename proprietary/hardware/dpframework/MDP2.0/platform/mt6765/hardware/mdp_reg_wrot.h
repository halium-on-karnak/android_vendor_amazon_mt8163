#ifndef __MDP_REG_WROT_H__
#define __MDP_REG_WROT_H__

#include "mmsys_reg_base.h"

#define VIDO_CTRL                   (ID_ADDR(m_identifier) + MDP_WROT0_BASE + 0x0 )
#define VIDO_DMA_PERF               (ID_ADDR(m_identifier) + MDP_WROT0_BASE + 0x4 )
#define VIDO_MAIN_BUF_SIZE          (ID_ADDR(m_identifier) + MDP_WROT0_BASE + 0x8 )
#define VIDO_SOFT_RST               (ID_ADDR(m_identifier) + MDP_WROT0_BASE + 0x10)
#define VIDO_SOFT_RST_STAT          (ID_ADDR(m_identifier) + MDP_WROT0_BASE + 0x14)
#define VIDO_INT_EN                 (ID_ADDR(m_identifier) + MDP_WROT0_BASE + 0x18)
#define VIDO_INT                    (ID_ADDR(m_identifier) + MDP_WROT0_BASE + 0x1c)
#define VIDO_CROP_OFST              (ID_ADDR(m_identifier) + MDP_WROT0_BASE + 0x20)
#define VIDO_TAR_SIZE               (ID_ADDR(m_identifier) + MDP_WROT0_BASE + 0x24)
#define VIDO_BASE_ADDR              (ID_ADDR(m_identifier) + MDP_WROT0_BASE + 0xF00)
#define VIDO_OFST_ADDR              (ID_ADDR(m_identifier) + MDP_WROT0_BASE + 0x2c)
#define VIDO_STRIDE                 (ID_ADDR(m_identifier) + MDP_WROT0_BASE + 0x30)
#define VIDO_BASE_ADDR_C            (ID_ADDR(m_identifier) + MDP_WROT0_BASE + 0xF04)
#define VIDO_OFST_ADDR_C            (ID_ADDR(m_identifier) + MDP_WROT0_BASE + 0x38)
#define VIDO_STRIDE_C               (ID_ADDR(m_identifier) + MDP_WROT0_BASE + 0x3c)
#define VIDO_ISSUE_REQ_TH           (ID_ADDR(m_identifier) + MDP_WROT0_BASE + 0x40)
#define VIDO_GROUP_REQ_TH           (ID_ADDR(m_identifier) + MDP_WROT0_BASE + 0x44)
#define VIDO_DITHER                 (ID_ADDR(m_identifier) + MDP_WROT0_BASE + 0x54)
#define VIDO_BASE_ADDR_V            (ID_ADDR(m_identifier) + MDP_WROT0_BASE + 0xF08)
#define VIDO_OFST_ADDR_V            (ID_ADDR(m_identifier) + MDP_WROT0_BASE + 0x68)
#define VIDO_STRIDE_V               (ID_ADDR(m_identifier) + MDP_WROT0_BASE + 0x6c)
#define VIDO_RSV_1                  (ID_ADDR(m_identifier) + MDP_WROT0_BASE + 0x70)
#define VIDO_DMA_PREULTRA           (ID_ADDR(m_identifier) + MDP_WROT0_BASE + 0x74)
#define VIDO_IN_SIZE                (ID_ADDR(m_identifier) + MDP_WROT0_BASE + 0x78)
#define VIDO_ROT_EN                 (ID_ADDR(m_identifier) + MDP_WROT0_BASE + 0x7c)
#define VIDO_FIFO_TEST              (ID_ADDR(m_identifier) + MDP_WROT0_BASE + 0x80)
#define VIDO_MAT_CTRL               (ID_ADDR(m_identifier) + MDP_WROT0_BASE + 0x84)
#define VIDO_MAT_RMY                (ID_ADDR(m_identifier) + MDP_WROT0_BASE + 0x88)
#define VIDO_MAT_RMV                (ID_ADDR(m_identifier) + MDP_WROT0_BASE + 0x8C)
#define VIDO_MAT_GMY                (ID_ADDR(m_identifier) + MDP_WROT0_BASE + 0x90)
#define VIDO_MAT_BMY                (ID_ADDR(m_identifier) + MDP_WROT0_BASE + 0x94)
#define VIDO_MAT_BMV                (ID_ADDR(m_identifier) + MDP_WROT0_BASE + 0x98)
#define VIDO_MAT_PREADD             (ID_ADDR(m_identifier) + MDP_WROT0_BASE + 0x9C)
#define VIDO_MAT_POSTADD            (ID_ADDR(m_identifier) + MDP_WROT0_BASE + 0xA0)
#define VIDO_DITHER_00              (ID_ADDR(m_identifier) + MDP_WROT0_BASE + 0xA4)
#define VIDO_DITHER_02              (ID_ADDR(m_identifier) + MDP_WROT0_BASE + 0xAC)
#define VIDO_DITHER_03              (ID_ADDR(m_identifier) + MDP_WROT0_BASE + 0xB0)
#define VIDO_DITHER_04              (ID_ADDR(m_identifier) + MDP_WROT0_BASE + 0xB4)
#define VIDO_DITHER_05              (ID_ADDR(m_identifier) + MDP_WROT0_BASE + 0xB8)
#define VIDO_DITHER_06              (ID_ADDR(m_identifier) + MDP_WROT0_BASE + 0xBC)
#define VIDO_DITHER_07              (ID_ADDR(m_identifier) + MDP_WROT0_BASE + 0xC0)
#define VIDO_DITHER_08              (ID_ADDR(m_identifier) + MDP_WROT0_BASE + 0xC4)
#define VIDO_DITHER_09              (ID_ADDR(m_identifier) + MDP_WROT0_BASE + 0xC8)
#define VIDO_DITHER_10              (ID_ADDR(m_identifier) + MDP_WROT0_BASE + 0xCC)
#define VIDO_DEBUG                  (ID_ADDR(m_identifier) + MDP_WROT0_BASE + 0xD0)
#define VIDO_ARB_SW_CTL             (ID_ADDR(m_identifier) + MDP_WROT0_BASE + 0xD4)
#define MDP_WROT_TRACK_CTL          (ID_ADDR(m_identifier) + MDP_WROT0_BASE + 0xE0)
#define MDP_WROT_TRACK_WINDOW       (ID_ADDR(m_identifier) + MDP_WROT0_BASE + 0xE4)
#define MDP_WROT_TRACK_TARGET       (ID_ADDR(m_identifier) + MDP_WROT0_BASE + 0xE8)
#define MDP_WROT_TRACK_STOP         (ID_ADDR(m_identifier) + MDP_WROT0_BASE + 0xEC)
#define MDP_WROT_TRACK_PROC_CNT0    (ID_ADDR(m_identifier) + MDP_WROT0_BASE + 0xF0)
#define MDP_WROT_TRACK_PROC_CNT1    (ID_ADDR(m_identifier) + MDP_WROT0_BASE + 0xF4)


// MASK
#define VIDO_CTRL_MASK                  (0xF531712F)
#define VIDO_DMA_PERF_MASK              (0x3FFFFFFF)
#define VIDO_MAIN_BUF_SIZE_MASK         (0x1FFF7F77)
#define VIDO_SOFT_RST_MASK              (0x01)
#define VIDO_SOFT_RST_STAT_MASK         (0x01)
#define VIDO_INT_EN_MASK                (0x03F07)
#define VIDO_INT_MASK                   (0x07)
#define VIDO_CROP_OFST_MASK             (0x1FFF1FFF)
#define VIDO_TAR_SIZE_MASK              (0x1FFF1FFF)
#define VIDO_BASE_ADDR_MASK             (0xFFFFFFFF)
#define VIDO_OFST_ADDR_MASK             (0x0FFFFFFF)
#define VIDO_STRIDE_MASK                (0x0FFFF)
#define VIDO_BASE_ADDR_C_MASK           (0xFFFFFFFF)
#define VIDO_OFST_ADDR_C_MASK           (0x0FFFFFFF)
#define VIDO_STRIDE_C_MASK              (0x0FFFF)
#define VIDO_ISSUE_REQ_TH_MASK          (0xFFFFFF)
#define VIDO_GROUP_REQ_TH_MASK          (0xFFFFFF)
#define VIDO_DITHER_MASK                (0xFF000001)
#define VIDO_BASE_ADDR_V_MASK           (0xFFFFFFFF)
#define VIDO_OFST_ADDR_V_MASK           (0x0FFFFFFF)
#define VIDO_STRIDE_V_MASK              (0x0FFFF)
#define VIDO_RSV_1_MASK                 (0xFFFFFFFF)
#define VIDO_DMA_PREULTRA_MASK          (0x0FFFFFF)
#define VIDO_IN_SIZE_MASK               (0x1FFF1FFF)
#define VIDO_ROT_EN_MASK                (0xFFFF0001)
#define VIDO_FIFO_TEST_MASK             (0x0FFF)
#define VIDO_MAT_CTRL_MASK              (0x0F1)
#define VIDO_MAT_RMY_MASK               (0x1FFF1FFF)
#define VIDO_MAT_RMV_MASK               (0x1FFF1FFF)
#define VIDO_MAT_GMY_MASK               (0x1FFF1FFF)
#define VIDO_MAT_BMY_MASK               (0x1FFF1FFF)
#define VIDO_MAT_BMV_MASK               (0x01FFF)
#define VIDO_MAT_PREADD_MASK            (0x1FF7FDFF)
#define VIDO_MAT_POSTADD_MASK           (0x1FF7FDFF)
#define VIDO_DITHER_00_MASK             (0x0FF3F)
#define VIDO_DITHER_02_MASK             (0xFFFF3FFF)
#define VIDO_DITHER_03_MASK             (0x03F)
#define VIDO_DITHER_04_MASK             (0xBFFFFFFF)
#define VIDO_DITHER_05_MASK             (0xFFFF7FFF)
#define VIDO_DITHER_06_MASK             (0x03FF773)
#define VIDO_DITHER_07_MASK             (0x07777)
#define VIDO_DITHER_08_MASK             (0x07777)
#define VIDO_DITHER_09_MASK             (0x07777)
#define VIDO_DITHER_10_MASK             (0x01FFFF)
#define VIDO_DEBUG_MASK                 (0xFFFFFFFF)
#define VIDO_ARB_SW_CTL_MASK            (0x07)
#define MDP_WROT_TRACK_CTL_MASK         (0x01F)
#define MDP_WROT_TRACK_WINDOW_MASK      (0x0FFF)
#define MDP_WROT_TRACK_TARGET_MASK      (0x0FFFFFF)
#define MDP_WROT_TRACK_STOP_MASK        (0x0FFFFFF)
#define MDP_WROT_TRACK_PROC_CNT0_MASK   (0xFFFFFFFF)
#define MDP_WROT_TRACK_PROC_CNT1_MASK   (0x01)

#endif  // __MDP_REG_WROT_H__
