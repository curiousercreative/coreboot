/* SPDX-License-Identifier: GPL-2.0-only */

#ifndef SOC_MEDIATEK_MT8188_INFRACFG_H
#define SOC_MEDIATEK_MT8188_INFRACFG_H

#include <soc/addressmap.h>
#include <types.h>

struct mt8188_infracfg_ao_regs {
	u8  reserved0[80];
	u32 infra_globalcon_dcmctl;
	u8  reserved1[28];
	u32 infra_bus_dcm_ctrl;
	u32 peri_bus_dcm_ctrl;
	u32 mem_dcm_ctrl;
	u32 dfs_mem_dcm_ctrl;
	u32 module_sw_cg_0_set;
	u32 module_sw_cg_0_clr;
	u32 module_sw_cg_1_set;
	u32 module_sw_cg_1_clr;
	u32 module_sw_cg_0_sta;
	u32 module_sw_cg_1_sta;
	u32 module_clk_sel;
	u32 mem_cg_ctrl;
	u32 p2p_rx_clk_on;
	u32 module_sw_cg_2_set;
	u32 module_sw_cg_2_clr;
	u32 module_sw_cg_2_sta;
	u8  reserved2[4];
	u32 dramc_wbr;
	u8  reserved3[8];
	u32 module_sw_cg_3_set;
	u32 module_sw_cg_3_clr;
	u32 module_sw_cg_3_sta;
	u8  reserved4[20];
	u32 module_sw_cg_4_set;
	u32 module_sw_cg_4_clr;
	u32 module_sw_cg_4_sta;
	u8  reserved5[20];
	u32 i2c_dbtool_misc;
	u32 md_sleep_ctrl_mask;
	u32 pmicw_clock_ctrl;
	u8  reserved6[20];
	u32 infra_globalcon_rst0_set;
	u32 infra_globalcon_rst0_clr;
	u32 infra_globalcon_rst0_sta;
	u8  reserved7[4];
	u32 infra_globalcon_rst1_set;
	u32 infra_globalcon_rst1_clr;
	u32 infra_globalcon_rst1_sta;
	u8  reserved8[4];
	u32 infra_globalcon_rst2_set;
	u32 infra_globalcon_rst2_clr;
	u32 infra_globalcon_rst2_sta;
	u8  reserved9[4];
	u32 infra_globalcon_rst3_set;
	u32 infra_globalcon_rst3_clr;
	u32 infra_globalcon_rst3_sta;
	u8  reserved10[164];
	u32 infra_topaxi_si0_ctl;
	u32 infra_topaxi_si1_ctl;
	u32 infra_topaxi_mdbus_ctl;
	u32 infra_mci_si0_ctl;
	u32 infra_mci_si1_ctl;
	u32 infra_mci_si2_ctl;
	u32 infra_mci_async_ctl;
	u32 infra_mci_cg_mfg_sec_sta;
	u32 infra_topaxi_protecten;
	u32 infra_topaxi_protecten_sta0;
	u32 infra_topaxi_protecten_sta1;
	u8  reserved11[4];
	u32 infra_apb_async_sta;
	u32 infra_topaxi_si2_ctl;
	u32 infra_topaxi_fmem_mdhw_ctrl;
	u32 infra_conn_gals_ctl;
	u32 infra_mci_trans_con_read;
	u32 infra_mci_trans_con_write;
	u32 infra_mci_id_remap_con;
	u32 infra_mci_emi_trans_con;
	u32 infra_topaxi_protecten_1;
	u32 infra_topaxi_protecten_sta0_1;
	u32 infra_topaxi_protecten_sta1_1;
	u8  reserved12[4];
	u32 infra_topaxi_aslice_ctrl;
	u32 infra_topaxi_aslice_ctrl_1;
	u32 infra_topaxi_aslice_ctrl_2;
	u32 infra_topaxi_aslice_ctrl_3;
	u32 infra_topaxi_mi_ctrl;
	u32 infra_topaxi_cbip_aslice_ctrl;
	u32 infra_topaxi_cbip_slice_ctrl;
	u32 infra_top_master_sideband;
	u32 infra_ssusb_dev;
	u8  reserved13[4];
	u32 infra_topaxi_emi_gmc_l2c_ctrl;
	u32 infra_topaxi_cbip_slice_ctrl_1;
	u32 infra_mfg_slave_gals_ctrl;
	u32 infra_mfg_master_m0_gals_ctrl;
	u32 infra_mfg_master_m1_gals_ctrl;
	u32 infra_top_master_sideband_1;
	u32 infra_topaxi_protecten_set;
	u32 infra_topaxi_protecten_clr;
	u32 infra_topaxi_protecten_1_set;
	u32 infra_topaxi_protecten_1_clr;
	u32 infra_topaxi_cbip_slice_ctrl_2;
	u8  reserved14[4];
	u32 infra_topaxi_aslice_ctrl_4;
	u8  reserved15[4];
	u32 infra_topaxi_protecten_mcu;
	u32 infra_topaxi_protecten_mcu_set;
	u32 infra_topaxi_protecten_mcu_clr;
	u8  reserved16[4];
	u32 infra_topaxi_protecten_mm;
	u32 infra_topaxi_protecten_mm_set;
	u32 infra_topaxi_protecten_mm_clr;
	u8  reserved17[4];
	u32 infra_topaxi_protecten_mcu_sta0;
	u32 infra_topaxi_protecten_mcu_sta1;
	u32 infra_topaxi_protecten_mm_sta0;
	u32 infra_topaxi_protecten_mm_sta1;
	u8  reserved18[4];
	u32 infra_apu_master_m0_gals_ctl;
	u32 infra_apu_master_m1_gals_ctl;
	u32 infra_topaxi_bus_dbg_con_ao;
	u32 md1_bank0_map0;
	u32 md1_bank0_map1;
	u32 md1_bank0_map2;
	u32 md1_bank0_map3;
	u32 md1_bank1_map0;
	u32 md1_bank1_map1;
	u32 md1_bank1_map2;
	u32 md1_bank1_map3;
	u32 md1_bank4_map0;
	u32 md1_bank4_map1;
	u32 md1_bank4_map2;
	u32 md1_bank4_map3;
	u32 md2_bank0_map0;
	u32 md2_bank0_map1;
	u32 md2_bank0_map2;
	u32 md2_bank0_map3;
	u8  reserved19[16];
	u32 md2_bank4_map0;
	u32 md2_bank4_map1;
	u32 md2_bank4_map2;
	u32 md2_bank4_map3;
	u32 c2k_config;
	u32 c2k_status;
	u32 c2k_spm_ctrl;
	u8  reserved20[4];
	u32 ap2md_dummy;
	u8  reserved21[12];
	u32 conn_map0;
	u32 cldma_map0;
	u32 conn_map1;
	u32 conn_bus_con;
	u32 mcusys_dfd_map;
	u32 conn_map2;
	u32 conn_map3;
	u32 conn_map4;
	u32 module_clk_sel_set;
	u32 module_clk_sel_clr;
	u32 pmicw_clock_ctrl_set;
	u32 pmicw_clock_ctrl_clr;
	u32 dramc_wbr_set;
	u32 dramc_wbr_clr;
	u32 topaxi_si0_ctl_set;
	u32 topaxi_si0_ctl_clr;
	u32 topaxi_si1_ctl_set;
	u32 topaxi_si1_ctl_clr;
	u8  reserved22[56];
	u32 peri_cci_sideband_con;
	u32 mfg_cci_sideband_con;
	u8  reserved23[8];
	u32 infra_pwm_cksw_ctrl;
	u8  reserved24[236];
	u32 infra_ao_dbg_con0;
	u32 infra_ao_dbg_con1;
	u32 infra_ao_dbg_con2;
	u32 infra_ao_dbg_con3;
	u32 md_dbg_ck_con;
	u32 infra_ao_dbg_sta;
	u8  reserved25[232];
	u32 mfg_misc_con;
	u8  reserved26[12];
	u32 infracfg_ao_iommu_0;
	u32 infracfg_ao_iommu_1;
	u8  reserved27[228];
	u32 infra_msdc_con;
	u32 infra_rsvd0;
	u32 infra_rsvd1;
	u32 infra_rsvd2;
	u32 infra_rsvd3;
	u32 infra_topaxi_protecten_2;
	u32 infra_topaxi_protecten_set_2;
	u32 infra_topaxi_protecten_clr_2;
	u8  reserved28[4];
	u32 infra_topaxi_protecten_sta0_2;
	u32 infra_topaxi_protecten_sta1_2;
	u8  reserved29[8];
	u32 infra_globalcon_rst4_set;
	u32 infra_globalcon_rst4_clr;
	u32 infra_globalcon_rst4_sta;
	u32 infra_ao_sec_rst_con4;
	u32 vdnr_con0;
	u32 vdnr_con1;
	u32 vdnr_con2;
	u32 vdnr_con3;
	u8  reserved30[48];
	u32 mcu2emi_m0_parity;
	u32 mcu2emi_m0_parity_dbg_aw_1;
	u32 mcu2emi_m0_parity_dbg_aw_2;
	u32 mcu2emi_m0_parity_dbg_ar_1;
	u32 mcu2emi_m0_parity_dbg_ar_2;
	u32 mcu2emi_m1_parity;
	u32 mcu2emi_m1_parity_dbg_aw_1;
	u32 mcu2emi_m1_parity_dbg_aw_2;
	u32 mcu2emi_m1_parity_dbg_ar_1;
	u32 mcu2emi_m1_parity_dbg_ar_2;
	u32 mcu2ifr_reg_parity;
	u32 mcu2ifr_reg_parity_dbg_aw_1;
	u32 mcu2ifr_reg_parity_dbg_aw_2;
	u32 mcu2ifr_reg_parity_dbg_ar_1;
	u32 mcu2ifr_reg_parity_dbg_ar_2;
	u32 ifr_l3c2mcu_parity;
	u32 ifr_l3c2mcu_parity_dbg_r_1;
	u8  reserved31[108];
	u32 gcpu_aor_ctrl;
	u32 gcpu_aor_lock_sbc_pubk_hv;
	u8  reserved32[8];
	u32 gcpu_aor_sbc_pubk_hv0;
	u32 gcpu_aor_sbc_pubk_hv1;
	u32 gcpu_aor_sbc_pubk_hv2;
	u32 gcpu_aor_sbc_pubk_hv3;
	u32 gcpu_aor_sbc_pubk_hv4;
	u32 gcpu_aor_sbc_pubk_hv5;
	u32 gcpu_aor_sbc_pubk_hv6;
	u32 gcpu_aor_sbc_pubk_hv7;
	u32 gcpu_aor_sbc_pubk_hv8;
	u32 gcpu_aor_sbc_pubk_hv9;
	u32 gcpu_aor_sbc_pubk_hv10;
	u32 gcpu_aor_sbc_pubk_hv11;
	u8  reserved33[144];
	u32 infra_bonding;
	u8  reserved34[252];
	u32 infra_ao_scpsys_apb_async_sta;
	u32 infra_ao_md32_tx_apb_async_sta;
	u32 infra_ao_md32_rx_apb_async_sta;
	u32 infra_ao_cksys_apb_async_sta;
	u32 infra_ao_pmic_wrap_tx_apb_async_sta;
	u32 infra_mcu2apu_asl0_ctl;
	u32 infra_mcu2reg_asl0_ctl;
	u32 infra_mcu_decoder_infra_ctl;
	u32 infra_mcu_decoder_sta0;
	u32 infra_mcu_decoder_sta1;
	u32 infra_idle_async_bit_en_0;
	u32 infra_apu_slave_gals_ctrl;
	u32 infra_aximem_idle_bit_en_0;
	u32 infra_mcu_path_sync_ctl;
	u32 infra_conn2ap_int_mask;
	u32 infra_mcu_pwr_ctl_mask;
	u32 infra_md_rsv;
	u8  reserved35[28];
	u32 infra_mem_26m_cksel;
	u8  reserved36[28];
	u32 infra_tinsys_master_m1_gals_ctrl;
	u32 infra_tinsys_master_m0_gals_ctrl;
	u32 infra_nna2adsp_slave_gals_ctrl;
	u32 infra_tinsys_slave_gals_ctrl;
	u32 infra_apu2adsp_master_gals_ctrl;
	u32 mfg2infra_gals_ctrl;
	u8  reserved37[104];
	u32 pll_ulposc_con0;
	u32 pll_ulposc_con1;
	u8  reserved38[8];
	u32 pll_auxadc_con0;
	u32 scp_infra_irq_set;
	u32 scp_infra_irq_clr;
	u32 scp_infra_ctrl;
	u8  reserved39[96];
	u32 infra_topaxi_protecten_vdnr;
	u32 infra_topaxi_protecten_vdnr_set;
	u32 infra_topaxi_protecten_vdnr_clr;
	u32 infra_topaxi_protecten_vdnr_sta0;
	u32 infra_topaxi_protecten_vdnr_sta1;
	u8  reserved40[12];
	u32 infra_topaxi_protecten_vdnr_1;
	u32 infra_topaxi_protecten_vdnr_set_1;
	u32 infra_topaxi_protecten_vdnr_clr_1;
	u32 infra_topaxi_protecten_vdnr_sta0_1;
	u32 infra_topaxi_protecten_vdnr_sta1_1;
	u32 infra_topaxi_protecten_vdnr_2;
	u32 infra_topaxi_protecten_vdnr_set_2;
	u32 infra_topaxi_protecten_vdnr_clr_2;
	u32 infra_topaxi_protecten_vdnr_sta0_2;
	u32 infra_topaxi_protecten_vdnr_sta1_2;
	u32 infra_topaxi_protecten_sub_infra_vdnr;
	u32 infra_topaxi_protecten_sub_infra_vdnr_set;
	u32 infra_topaxi_protecten_sub_infra_vdnr_clr;
	u32 infra_topaxi_protecten_sub_infra_vdnr_sta0;
	u32 infra_topaxi_protecten_sub_infra_vdnr_sta1;
	u8  reserved41[36];
	u32 cldma_ctrl;
	u8  reserved42[252];
	u32 infrabus_dbg0;
	u32 infrabus_dbg1;
	u32 infrabus_dbg2;
	u32 infrabus_dbg3;
	u32 infrabus_dbg4;
	u32 infrabus_dbg5;
	u32 infrabus_dbg6;
	u32 infrabus_dbg7;
	u32 infrabus_dbg8;
	u32 infrabus_dbg9;
	u32 infrabus_dbg10;
	u32 infrabus_dbg11;
	u32 infrabus_dbg12;
	u32 infrabus_dbg13;
	u32 infrabus_dbg14;
	u32 infrabus_dbg15;
	u32 infrabus_dbg16;
	u32 infrabus_dbg17;
	u32 infrabus_dbg18;
	u32 infrabus_dbg19;
	u32 infrabus_dbg20;
	u32 infrabus_dbg21;
	u32 infrabus_dbg22;
	u32 infrabus_dbg23;
	u32 infrabus_dbg24;
	u32 infrabus_dbg25;
	u32 infrabus_dbg26;
	u32 infrabus_dbg27;
	u32 infrabus_dbg28;
	u32 infrabus_dbg29;
	u32 infrabus_dbg30;
	u32 infrabus_dbg31;
	u32 infrabus_dbg32;
	u32 infrabus_dbg33;
	u32 infrabus_dbg34;
	u32 infrabus_dbg35;
	u32 infrabus_dbg36;
	u32 infrabus_dbg37;
	u32 infrabus_dbg38;
	u32 infrabus_dbg39;
	u32 infrabus_dbg40;
	u32 infrabus_dbg41;
	u32 infrabus_dbg42;
	u32 infrabus_dbg43;
	u32 infrabus_dbg44;
	u32 infrabus_dbg45;
	u8  reserved43[16];
	u32 infra_topaxi_protecten_mm_2;
	u32 infra_topaxi_protecten_mm_set_2;
	u32 infra_topaxi_protecten_mm_clr_2;
	u32 infra_topaxi_protecten_mm_sta0_2;
	u32 infra_topaxi_protecten_mm_sta1_2;
	u8  reserved44[20];
	u32 infrabus_dbg_mask2;
	u8  reserved45[76];
	u32 infra_ao_sec_mm0;
	u32 infra_ao_sec_mm1;
	u32 infra_ao_sec_mm2;
	u32 infra_ao_sec_mm3;
	u32 infra_ao_sec_mm4;
	u32 infra_ao_sec_mm5;
	u32 infra_ao_sec_mm6;
	u8  reserved46[164];
	u32 infra_misc;
	u32 infra_acp;
	u32 misc_config;
	u32 infra_misc2;
	u32 mdsys_misc_con;
	u8  reserved47[108];
	u32 infra_ao_sec_con;
	u32 infra_ao_sec_cg_con0;
	u32 infra_ao_sec_cg_con1;
	u32 infra_ao_sec_rst_con0;
	u32 infra_ao_sec_rst_con1;
	u32 infra_ao_sec_rst_con2;
	u8  reserved48[4];
	u32 infra_ao_sec_cg_con2;
	u32 infra_ao_sec_rst_con3;
	u32 infra_ao_sec_cg_con3;
	u8  reserved49[8];
	u32 infra_ao_sec_hyp;
	u32 infra_ao_sec_mfg_hyp;
};

check_member(mt8188_infracfg_ao_regs, infra_globalcon_dcmctl, 0x0050);
check_member(mt8188_infracfg_ao_regs, infra_bus_dcm_ctrl, 0x0070);
check_member(mt8188_infracfg_ao_regs, module_sw_cg_0_clr, 0x0084);
check_member(mt8188_infracfg_ao_regs, module_sw_cg_1_clr, 0x008c);
check_member(mt8188_infracfg_ao_regs, module_sw_cg_2_clr, 0x00a8);
check_member(mt8188_infracfg_ao_regs, module_sw_cg_3_set, 0x00c0);
check_member(mt8188_infracfg_ao_regs, module_sw_cg_4_set, 0x00e0);
check_member(mt8188_infracfg_ao_regs, i2c_dbtool_misc, 0x0100);
check_member(mt8188_infracfg_ao_regs, infra_globalcon_rst0_set, 0x0120);
check_member(mt8188_infracfg_ao_regs, md2_bank4_map0, 0x0350);
check_member(mt8188_infracfg_ao_regs, conn_map0, 0x0380);
check_member(mt8188_infracfg_ao_regs, peri_cci_sideband_con, 0x0400);
check_member(mt8188_infracfg_ao_regs, infra_pwm_cksw_ctrl, 0x0410);
check_member(mt8188_infracfg_ao_regs, infra_ao_dbg_con0, 0x0500);
check_member(mt8188_infracfg_ao_regs, mfg_misc_con, 0x0600);
check_member(mt8188_infracfg_ao_regs, infracfg_ao_iommu_0, 0x0610);
check_member(mt8188_infracfg_ao_regs, infra_rsvd0, 0x0700);
check_member(mt8188_infracfg_ao_regs, infra_globalcon_rst4_set, 0x0730);
check_member(mt8188_infracfg_ao_regs, mcu2emi_m0_parity, 0x0780);
check_member(mt8188_infracfg_ao_regs, gcpu_aor_ctrl, 0x0830);
check_member(mt8188_infracfg_ao_regs, gcpu_aor_sbc_pubk_hv0, 0x0840);
check_member(mt8188_infracfg_ao_regs, infra_bonding, 0x0900);
check_member(mt8188_infracfg_ao_regs, infra_ao_scpsys_apb_async_sta, 0x0a00);
check_member(mt8188_infracfg_ao_regs, infra_mem_26m_cksel, 0x0a60);
check_member(mt8188_infracfg_ao_regs, pll_ulposc_con0, 0x0b00);
check_member(mt8188_infracfg_ao_regs, pll_auxadc_con0, 0x0b10);
check_member(mt8188_infracfg_ao_regs, infra_topaxi_protecten_vdnr, 0x0b80);
check_member(mt8188_infracfg_ao_regs, infra_topaxi_protecten_vdnr_1, 0x0ba0);
check_member(mt8188_infracfg_ao_regs, cldma_ctrl, 0x0c00);
check_member(mt8188_infracfg_ao_regs, infrabus_dbg0, 0x0d00);
check_member(mt8188_infracfg_ao_regs, infra_topaxi_protecten_mm_2, 0x0dc8);
check_member(mt8188_infracfg_ao_regs, infrabus_dbg_mask2, 0x0df0);
check_member(mt8188_infracfg_ao_regs, infra_misc, 0x0f00);
check_member(mt8188_infracfg_ao_regs, infra_ao_sec_con, 0x0f80);
check_member(mt8188_infracfg_ao_regs, infra_ao_sec_hyp, 0x0fb0);
check_member(mt8188_infracfg_ao_regs, infra_ao_sec_mfg_hyp, 0x0fb4);

static struct mt8188_infracfg_ao_regs *const mt8188_infracfg_ao =
	(void *)INFRACFG_AO_BASE;

#endif	/* SOC_MEDIATEK_MT8188_INFRACFG_H */
