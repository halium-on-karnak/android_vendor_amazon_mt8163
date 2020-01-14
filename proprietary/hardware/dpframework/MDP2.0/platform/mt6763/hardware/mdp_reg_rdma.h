#ifndef __MDP_REG_RDMA_H__
#define __MDP_REG_RDMA_H__

#include "mmsys_reg_base.h"

#define MDP_RDMA_EN                     (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0000)
#define MDP_RDMA_RESET                  (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0008)
#define MDP_RDMA_INTERRUPT_ENABLE       (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0010)
#define MDP_RDMA_INTERRUPT_STATUS       (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0018)
#define MDP_RDMA_CON                    (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0020)
#define MDP_RDMA_GMCIF_CON              (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0028)
#define MDP_RDMA_SRC_CON                (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0030)
#define MDP_RDMA_SRC_BASE_0             (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0F00)
#define MDP_RDMA_SRC_BASE_1             (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0F08)
#define MDP_RDMA_SRC_BASE_2             (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0F10)
#define MDP_RDMA_UFO_DEC_LENGTH_BASE_Y  (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0F20)
#define MDP_RDMA_UFO_DEC_LENGTH_BASE_C  (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0F28)
#define MDP_RDMA_MF_BKGD_SIZE_IN_BYTE   (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0060)
#define MDP_RDMA_MF_BKGD_SIZE_IN_PXL    (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0068)
#define MDP_RDMA_MF_SRC_SIZE            (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0070)
#define MDP_RDMA_MF_CLIP_SIZE           (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0078)
#define MDP_RDMA_MF_OFFSET_1            (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0080)
#define MDP_RDMA_MF_PAR                 (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0088)
#define MDP_RDMA_SF_BKGD_SIZE_IN_BYTE   (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0090)
#define MDP_RDMA_SF_PAR                 (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x00B8)
#define MDP_RDMA_MB_DEPTH               (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x00C0)
#define MDP_RDMA_MB_BASE                (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x00C8)
#define MDP_RDMA_MB_CON                 (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x00D0)
#define MDP_RDMA_SB_DEPTH               (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x00D8)
#define MDP_RDMA_SB_BASE                (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x00E0)
#define MDP_RDMA_SB_CON                 (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x00E8)
#define MDP_RDMA_VC1_RANGE              (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x00F0)
#define MDP_RDMA_SRC_END_0              (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0X0100)
#define MDP_RDMA_SRC_END_1              (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0X0108)
#define MDP_RDMA_SRC_END_2              (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0X0110)
#define MDP_RDMA_SRC_OFFSET_0           (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0118)
#define MDP_RDMA_SRC_OFFSET_1           (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0120)
#define MDP_RDMA_SRC_OFFSET_2           (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0128)
#define MDP_RDMA_SRC_OFFSET_W_0         (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0130)
#define MDP_RDMA_SRC_OFFSET_W_1         (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0138)
#define MDP_RDMA_SRC_OFFSET_W_2         (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0140)
#define MDP_RDMA_SRC_OFFSET_0_P         (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0148)
#define MDP_RDMA_TRANSFORM_0            (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0200)
#define MDP_RDMA_TRANSFORM_1            (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0208)
#define MDP_RDMA_TRANSFORM_2            (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0210)
#define MDP_RDMA_TRANSFORM_3            (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0218)
#define MDP_RDMA_TRANSFORM_4            (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0220)
#define MDP_RDMA_TRANSFORM_5            (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0228)
#define MDP_RDMA_TRANSFORM_6            (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0230)
#define MDP_RDMA_TRANSFORM_7            (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0238)
#define MDP_RDMA_DMABUF_CON_0           (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0240)
#define MDP_RDMA_DMAULTRA_CON_0         (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0248)
#define MDP_RDMA_DMABUF_CON_1           (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0250)
#define MDP_RDMA_DMAULTRA_CON_1         (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0258)
#define MDP_RDMA_DMABUF_CON_2           (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0260)
#define MDP_RDMA_DMAULTRA_CON_2         (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0268)
#define MDP_RDMA_DITHER_CON           (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0288)
#define MDP_RDMA_RESV_DUMMY_0           (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x02a0)
#define MDP_RDMA_CHKS_EXTR              (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0300)
#define MDP_RDMA_CHKS_INTW              (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0308)
#define MDP_RDMA_CHKS_INTR              (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0310)
#define MDP_RDMA_CHKS_ROTO              (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0318)
#define MDP_RDMA_CHKS_SRIY              (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0320)
#define MDP_RDMA_CHKS_SRIU              (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0328)
#define MDP_RDMA_CHKS_SRIV              (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0330)
#define MDP_RDMA_CHKS_SROY              (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0338)
#define MDP_RDMA_CHKS_SROU              (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0340)
#define MDP_RDMA_CHKS_SROV              (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0348)
#define MDP_RDMA_CHKS_VUPI              (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0350)
#define MDP_RDMA_CHKS_VUPO              (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0358)
#define MDP_RDMA_DEBUG_CON              (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0380)
#define MDP_RDMA_MON_STA_0              (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0400)
#define MDP_RDMA_MON_STA_1              (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0408)
#define MDP_RDMA_MON_STA_2              (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0410)
#define MDP_RDMA_MON_STA_3              (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0418)
#define MDP_RDMA_MON_STA_4              (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0420)
#define MDP_RDMA_MON_STA_5              (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0428)
#define MDP_RDMA_MON_STA_6              (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0430)
#define MDP_RDMA_MON_STA_7              (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0438)
#define MDP_RDMA_MON_STA_8              (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0440)
#define MDP_RDMA_MON_STA_9              (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0448)
#define MDP_RDMA_MON_STA_10             (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0450)
#define MDP_RDMA_MON_STA_11             (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0458)
#define MDP_RDMA_MON_STA_12             (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0460)
#define MDP_RDMA_MON_STA_13             (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0468)
#define MDP_RDMA_MON_STA_14             (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0470)
#define MDP_RDMA_MON_STA_15             (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0478)
#define MDP_RDMA_MON_STA_16             (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0480)
#define MDP_RDMA_MON_STA_17             (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0488)
#define MDP_RDMA_MON_STA_18             (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0490)
#define MDP_RDMA_MON_STA_19             (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x0498)
#define MDP_RDMA_MON_STA_20             (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x04a0)
#define MDP_RDMA_MON_STA_21             (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x04a8)
#define MDP_RDMA_MON_STA_22             (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x04b0)
#define MDP_RDMA_MON_STA_23             (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x04b8)
#define MDP_RDMA_MON_STA_24             (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x04c0)
#define MDP_RDMA_MON_STA_25             (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x04c8)
#define MDP_RDMA_MON_STA_26             (ID_ADDR(m_identifier) + MDP_RDMA0_BASE + 0x04d0)

#if CONFIG_FOR_OS_WINDOWS && CONFIG_FOR_VERIFY_FPGA
/* Define this for DpDriver_Win32.cpp */
#define MDP_FAKE_ISP_CFG                (MDP_RDMA0_BASE + 0x0390)
#endif


// MASK
#define MDP_RDMA_EN_MASK                    (0x01)
#define MDP_RDMA_RESET_MASK                 (0x01)
#define MDP_RDMA_INTERRUPT_ENABLE_MASK      (0x07)
#define MDP_RDMA_INTERRUPT_STATUS_MASK      (0x07)
#define MDP_RDMA_CON_MASK                   (0x01110)
#define MDP_RDMA_GMCIF_CON_MASK             (0xFFFB3771)
#define MDP_RDMA_SRC_CON_MASK               (0xF1FFFFFF)
#define MDP_RDMA_SRC_BASE_0_MASK            (0xFFFFFFFF)
#define MDP_RDMA_SRC_BASE_1_MASK            (0xFFFFFFFF)
#define MDP_RDMA_SRC_BASE_2_MASK            (0xFFFFFFFF)
#define MDP_RDMA_UFO_DEC_LENGTH_BASE_Y_MASK (0xFFFFFFFF)
#define MDP_RDMA_UFO_DEC_LENGTH_BASE_C_MASK (0xFFFFFFFF)
#define MDP_RDMA_MF_BKGD_SIZE_IN_BYTE_MASK  (0x01FFFFF)
#define MDP_RDMA_MF_BKGD_SIZE_IN_PXL_MASK   (0x01FFFFF)
#define MDP_RDMA_MF_SRC_SIZE_MASK           (0x1FFF1FFF)
#define MDP_RDMA_MF_CLIP_SIZE_MASK          (0x1FFF1FFF)
#define MDP_RDMA_MF_OFFSET_1_MASK           (0x03F001F)
#define MDP_RDMA_MF_PAR_MASK                (0x1FFFF3FF)
#define MDP_RDMA_SF_BKGD_SIZE_IN_BYTE_MASK  (0x01FFFFF)
#define MDP_RDMA_SF_PAR_MASK                (0x1FFFF3FF)
#define MDP_RDMA_MB_DEPTH_MASK              (0x07F)
#define MDP_RDMA_MB_BASE_MASK               (0x0FFFF)
#define MDP_RDMA_MB_CON_MASK                (0x3FFF1FFF)
#define MDP_RDMA_SB_DEPTH_MASK              (0x07F)
#define MDP_RDMA_SB_BASE_MASK               (0x0FFFF)
#define MDP_RDMA_SB_CON_MASK                (0x3FFF1FFF)
#define MDP_RDMA_VC1_RANGE_MASK             (0x01F1F11)
#define MDP_RDMA_SRC_END_0_MASK             (0xFFFFFFFF)
#define MDP_RDMA_SRC_END_1_MASK             (0xFFFFFFFF)
#define MDP_RDMA_SRC_END_2_MASK             (0xFFFFFFFF)
#define MDP_RDMA_SRC_OFFSET_0_MASK          (0xFFFFFFFF)
#define MDP_RDMA_SRC_OFFSET_1_MASK          (0xFFFFFFFF)
#define MDP_RDMA_SRC_OFFSET_2_MASK          (0xFFFFFFFF)
#define MDP_RDMA_SRC_OFFSET_W_0_MASK        (0x0FFFF)
#define MDP_RDMA_SRC_OFFSET_W_1_MASK        (0x0FFFF)
#define MDP_RDMA_SRC_OFFSET_W_2_MASK        (0x0FFFF)
#define MDP_RDMA_SRC_OFFSET_0_P_MASK        (0xFFFFFFFF)
#define MDP_RDMA_TRANSFORM_0_MASK           (0xFF110777)
#define MDP_RDMA_TRANSFORM_1_MASK           (0x1FF7FDFF)
#define MDP_RDMA_TRANSFORM_2_MASK           (0x1FF7FDFF)
#define MDP_RDMA_TRANSFORM_3_MASK           (0x1FFF1FFF)
#define MDP_RDMA_TRANSFORM_4_MASK           (0x1FFF1FFF)
#define MDP_RDMA_TRANSFORM_5_MASK           (0x1FFF1FFF)
#define MDP_RDMA_TRANSFORM_6_MASK           (0x1FFF1FFF)
#define MDP_RDMA_TRANSFORM_7_MASK           (0x01FFF)
#define MDP_RDMA_DMABUF_CON_0_MASK          (0x077F007F)
#define MDP_RDMA_DMAULTRA_CON_0_MASK        (0x7F7F7F7F)
#define MDP_RDMA_DMABUF_CON_1_MASK          (0x073F003F)
#define MDP_RDMA_DMAULTRA_CON_1_MASK        (0x3F3F3F3F)
#define MDP_RDMA_DMABUF_CON_2_MASK          (0x071F001F)
#define MDP_RDMA_DMAULTRA_CON_2_MASK        (0x1F1F1F1F)

#define MDP_RDMA_DITHER_CON_MASK            (0xFFFFFFFF)
#define MDP_RDMA_RESV_DUMMY_0_MASK          (0xFFFFFFFF)
#define MDP_RDMA_CHKS_EXTR_MASK             (0xFFFFFF01)
#define MDP_RDMA_CHKS_INTW_MASK             (0xFFFFFF01)
#define MDP_RDMA_CHKS_INTR_MASK             (0xFFFFFF01)
#define MDP_RDMA_CHKS_ROTO_MASK             (0xFFFFFF01)
#define MDP_RDMA_CHKS_SRIY_MASK             (0xFFFFFF01)
#define MDP_RDMA_CHKS_SRIU_MASK             (0xFFFFFF01)
#define MDP_RDMA_CHKS_SRIV_MASK             (0xFFFFFF01)
#define MDP_RDMA_CHKS_SROY_MASK             (0xFFFFFF01)
#define MDP_RDMA_CHKS_SROU_MASK             (0xFFFFFF01)
#define MDP_RDMA_CHKS_SROV_MASK             (0xFFFFFF01)
#define MDP_RDMA_CHKS_VUPI_MASK             (0xFFFFFF01)
#define MDP_RDMA_CHKS_VUPO_MASK             (0xFFFFFF01)
#define MDP_RDMA_DEBUG_CON_MASK             (0x01F11)
#define MDP_RDMA_MON_STA_0_MASK             (0xFFFFFFFF)
#define MDP_RDMA_MON_STA_1_MASK             (0xFFFFFFFF)
#define MDP_RDMA_MON_STA_2_MASK             (0xFFFFFFFF)
#define MDP_RDMA_MON_STA_3_MASK             (0xFFFFFFFF)
#define MDP_RDMA_MON_STA_4_MASK             (0xFFFFFFFF)
#define MDP_RDMA_MON_STA_5_MASK             (0xFFFFFFFF)
#define MDP_RDMA_MON_STA_6_MASK             (0xFFFFFFFF)
#define MDP_RDMA_MON_STA_7_MASK             (0xFFFFFFFF)
#define MDP_RDMA_MON_STA_8_MASK             (0xFFFFFFFF)
#define MDP_RDMA_MON_STA_9_MASK             (0xFFFFFFFF)
#define MDP_RDMA_MON_STA_10_MASK            (0xFFFFFFFF)
#define MDP_RDMA_MON_STA_11_MASK            (0xFFFFFFFF)
#define MDP_RDMA_MON_STA_12_MASK            (0xFFFFFFFF)
#define MDP_RDMA_MON_STA_13_MASK            (0xFFFFFFFF)
#define MDP_RDMA_MON_STA_14_MASK            (0xFFFFFFFF)
#define MDP_RDMA_MON_STA_15_MASK            (0xFFFFFFFF)
#define MDP_RDMA_MON_STA_16_MASK            (0xFFFFFFFF)
#define MDP_RDMA_MON_STA_17_MASK            (0xFFFFFFFF)
#define MDP_RDMA_MON_STA_18_MASK            (0xFFFFFFFF)
#define MDP_RDMA_MON_STA_19_MASK            (0xFFFFFFFF)
#define MDP_RDMA_MON_STA_20_MASK            (0xFFFFFFFF)
#define MDP_RDMA_MON_STA_21_MASK            (0xFFFFFFFF)
#define MDP_RDMA_MON_STA_22_MASK            (0xFFFFFFFF)
#define MDP_RDMA_MON_STA_23_MASK            (0xFFFFFFFF)
#define MDP_RDMA_MON_STA_24_MASK            (0xFFFFFFFF)
#define MDP_RDMA_MON_STA_25_MASK            (0xFFFFFFFF)
#define MDP_RDMA_MON_STA_26_MASK            (0xFFFFFFFF)

#endif  // __MDP_REG_RDMA_H__
