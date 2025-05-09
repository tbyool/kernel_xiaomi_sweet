
#ifndef __BQ2597X_HEADER__
#define __BQ2597X_HEADER__

#define SC8551_ADC_SCALE_FACTOR 			1000
/* Register 00h */
#define BQ2597X_REG_00					0x00
#define	BQ2597X_BAT_OVP_DIS_MASK			0x80
#define	BQ2597X_BAT_OVP_DIS_SHIFT			7
#define	BQ2597X_BAT_OVP_ENABLE				0
#define	BQ2597X_BAT_OVP_DISABLE				1

#define BQ2597X_BAT_OVP_MASK				0x3F
#define BQ2597X_BAT_OVP_SHIFT				0
#define BQ2597X_BAT_OVP_BASE				3475
#define BQ2597X_BAT_OVP_LSB				25

/* Register 01h */
#define BQ2597X_REG_01					0x01
#define BQ2597X_BAT_OVP_ALM_DIS_MASK			0x80
#define BQ2597X_BAT_OVP_ALM_DIS_SHIFT			7
#define BQ2597X_BAT_OVP_ALM_ENABLE			0
#define BQ2597X_BAT_OVP_ALM_DISABLE			1

#define BQ2597X_BAT_OVP_ALM_MASK			0x3F
#define BQ2597X_BAT_OVP_ALM_SHIFT			0
#define BQ2597X_BAT_OVP_ALM_BASE			3500
#define BQ2597X_BAT_OVP_ALM_LSB				25

/* Register 02h */
#define BQ2597X_REG_02					0x02
#define	BQ2597X_BAT_OCP_DIS_MASK			0x80
#define	BQ2597X_BAT_OCP_DIS_SHIFT			7
#define BQ2597X_BAT_OCP_ENABLE				0
#define BQ2597X_BAT_OCP_DISABLE				1

#define BQ2597X_BAT_OCP_MASK				0x7F
#define BQ2597X_BAT_OCP_SHIFT				0
#define BQ2597X_BAT_OCP_BASE				2000
#define BQ2597X_BAT_OCP_LSB				100

/* Register 03h */
#define BQ2597X_REG_03					0x03
#define BQ2597X_BAT_OCP_ALM_DIS_MASK			0x80
#define BQ2597X_BAT_OCP_ALM_DIS_SHIFT			7
#define BQ2597X_BAT_OCP_ALM_ENABLE			0
#define BQ2597X_BAT_OCP_ALM_DISABLE			1

#define BQ2597X_BAT_OCP_ALM_MASK			0x7F
#define BQ2597X_BAT_OCP_ALM_SHIFT			0
#define BQ2597X_BAT_OCP_ALM_BASE			2000
#define BQ2597X_BAT_OCP_ALM_LSB				100

/* Register 04h */
#define BQ2597X_REG_04					0x04
#define	BQ2597X_BAT_UCP_ALM_DIS_MASK			0x80
#define	BQ2597X_BAT_UCP_ALM_DIS_SHIFT			7
#define	BQ2597X_BAT_UCP_ALM_ENABLE			0
#define	BQ2597X_BAT_UCP_ALM_DISABLE			1

#define	BQ2597X_BAT_UCP_ALM_MASK			0x7F
#define	BQ2597X_BAT_UCP_ALM_SHIFT			0
#define	BQ2597X_BAT_UCP_ALM_BASE			0
#define	BQ2597X_BAT_UCP_ALM_LSB				50

/* Register 05h */
#define BQ2597X_REG_05					0x05
#define BQ2597X_AC_OVP_STAT_MASK			0x80
#define BQ2597X_AC_OVP_STAT_SHIFT			7

#define BQ2597X_AC_OVP_FLAG_MASK			0x40
#define BQ2597X_AC_OVP_FLAG_SHIFT			6

#define BQ2597X_AC_OVP_MASK_MASK			0x20
#define BQ2597X_AC_OVP_MASK_SHIFT			5

#define BQ2597X_VDROP_THRESHOLD_SET_MASK		0x10
#define BQ2597X_VDROP_THRESHOLD_SET_SHIFT		4
#define BQ2597X_VDROP_THRESHOLD_300MV			0
#define BQ2597X_VDROP_THRESHOLD_400MV			1

#define BQ2597X_VDROP_DEGLITCH_SET_MASK			0x08
#define BQ2597X_VDROP_DEGLITCH_SET_SHIFT		3
#define BQ2597X_VDROP_DEGLITCH_8US			0
#define BQ2597X_VDROP_DEGLITCH_5MS			1

#define BQ2597X_AC_OVP_MASK				0x07
#define BQ2597X_AC_OVP_SHIFT				0
#define BQ2597X_AC_OVP_BASE				11
#define BQ2597X_AC_OVP_LSB				1
#define BQ2597X_AC_OVP_6P5V				65

/* Register 06h */
#define BQ2597X_REG_06					0x06
#define BQ2597X_VBUS_PD_EN_MASK				0x80
#define BQ2597X_VBUS_PD_EN_SHIFT			7
#define BQ2597X_VBUS_PD_ENABLE				1
#define BQ2597X_VBUS_PD_DISABLE				0

#define BQ2597X_BUS_OVP_MASK				0x7F
#define BQ2597X_BUS_OVP_SHIFT				0
#define BQ2597X_BUS_OVP_BASE				5950
#define BQ2597X_BUS_OVP_LSB				50

/* Register 07h */
#define BQ2597X_REG_07					0x07
#define BQ2597X_BUS_OVP_ALM_DIS_MASK			0x80
#define BQ2597X_BUS_OVP_ALM_DIS_SHIFT			7
#define BQ2597X_BUS_OVP_ALM_ENABLE			0
#define BQ2597X_BUS_OVP_ALM_DISABLE			1

#define BQ2597X_BUS_OVP_ALM_MASK			0x7F
#define BQ2597X_BUS_OVP_ALM_SHIFT			0
#define BQ2597X_BUS_OVP_ALM_BASE			6000
#define BQ2597X_BUS_OVP_ALM_LSB				50

/* Register 08h */
#define BQ2597X_REG_08					0x08
#define BQ2597X_BUS_OCP_DIS_MASK			0x80
#define BQ2597X_BUS_OCP_DIS_SHIFT			7
#define	BQ2597X_BUS_OCP_ENABLE				0
#define	BQ2597X_BUS_OCP_DISABLE				1

#define BQ2597X_IBUS_UCP_RISE_FLAG_MASK			0x40
#define BQ2597X_IBUS_UCP_RISE_FLAG_SHIFT		6

#define BQ2597X_IBUS_UCP_RISE_MASK_MASK			0x20
#define BQ2597X_IBUS_UCP_RISE_MASK_SHIFT		5
#define BQ2597X_IBUS_UCP_RISE_MASK_ENABLE		1
#define BQ2597X_IBUS_UCP_RISE_MASK_DISABLE		0

#define BQ2597X_IBUS_UCP_FALL_FLAG_MASK			0x10
#define BQ2597X_IBUS_UCP_FALL_FLAG_SHIFT		4

#define BQ2597X_BUS_OCP_MASK				0x0F
#define BQ2597X_BUS_OCP_SHIFT				0
#define BQ2597X_BUS_OCP_BASE				1000
#define BQ2597X_BUS_OCP_LSB				250

/* Register 09h */
#define BQ2597X_REG_09					0x09
#define BQ2597X_BUS_OCP_ALM_DIS_MASK			0x80
#define BQ2597X_BUS_OCP_ALM_DIS_SHIFT			7
#define BQ2597X_BUS_OCP_ALM_ENABLE			0
#define BQ2597X_BUS_OCP_ALM_DISABLE			1

#define BQ2597X_BUS_OCP_ALM_MASK			0x7F
#define BQ2597X_BUS_OCP_ALM_SHIFT			0
#define BQ2597X_BUS_OCP_ALM_BASE			0
#define BQ2597X_BUS_OCP_ALM_LSB				50

/* Register 0Ah */
#define BQ2597X_REG_0A					0x0A
#define BQ2597X_TSHUT_FLAG_MASK				0x80
#define BQ2597X_TSHUT_FLAG_SHIFT			7
#define	VBUS_ERROR_LOW_MASK				BIT(5)
#define	VBUS_ERROR_HIGH_MASK				BIT(4)

#define BQ2597X_TSHUT_STAT_MASK				0x40
#define BQ2597X_TSHUT_STAT_SHIFT			6

#define BQ2597X_VBUS_ERRORLO_STAT_MASK			0x20
#define BQ2597X_VBUS_ERRORLO_STAT_SHIFT			5

#define BQ2597X_VBUS_ERRORHI_STAT_MASK			0x10
#define BQ2597X_VBUS_ERRORHI_STAT_SHIFT			4

#define BQ2597X_SS_TIMEOUT_FLAG_MASK			0x08
#define BQ2597X_SS_TIMEOUT_FLAG_SHIFT			3

#define BQ2597X_CONV_SWITCHING_STAT_MASK		0x04
#define BQ2597X_CONV_SWITCHING_STAT_SHIFT		2

#define BQ2597X_CONV_OCP_FLAG_MASK			0x02
#define BQ2597X_CONV_OCP_FLAG_SHIFT			1

#define BQ2597X_PIN_DIAG_FALL_FLAG_MASK			0x01
#define BQ2597X_PIN_DIAG_FALL_FLAG_SHIFT		0

/* Register 0Bh */
#define BQ2597X_REG_0B					0x0B
#define BQ2597X_REG_RST_MASK				0x80
#define BQ2597X_REG_RST_SHIFT				7
#define BQ2597X_REG_RST_ENABLE				1
#define BQ2597X_REG_RST_DISABLE				0

#define BQ2597X_FSW_SET_MASK				0x70
#define BQ2597X_FSW_SET_SHIFT				4
#define BQ2597X_FSW_SET_187P5KHZ			0
#define BQ2597X_FSW_SET_250KHZ				1
#define BQ2597X_FSW_SET_300KHZ				2
#define BQ2597X_FSW_SET_375KHZ				3
#define BQ2597X_FSW_SET_500KHZ				4
#define BQ2597X_FSW_SET_750KHZ				5

#define BQ2597X_WD_TIMEOUT_FLAG_MASK			0x08
#define BQ2597X_WD_TIMEOUT_SHIFT			3

#define BQ2597X_WATCHDOG_DIS_MASK			0x04
#define BQ2597X_WATCHDOG_DIS_SHIFT			2
#define BQ2597X_WATCHDOG_ENABLE				0
#define BQ2597X_WATCHDOG_DISABLE			1

#define BQ2597X_WATCHDOG_MASK				0x03
#define BQ2597X_WATCHDOG_SHIFT				0
#define BQ2597X_WATCHDOG_0P5S				0
#define BQ2597X_WATCHDOG_1S				1
#define BQ2597X_WATCHDOG_5S				2
#define BQ2597X_WATCHDOG_30S				3

/* Register 0Ch */
#define BQ2597X_REG_0C					0x0C
#define BQ2597X_CHG_EN_MASK				0x80
#define BQ2597X_CHG_EN_SHIFT				7
#define BQ2597X_CHG_ENABLE				1
#define BQ2597X_CHG_DISABLE				0

#define BQ2597X_MS_MASK					0x60
#define BQ2597X_MS_SHIFT				5
#define BQ2597X_MS_STANDALONE				0
#define BQ2597X_MS_SLAVE				1
#define BQ2597X_MS_MASTER				2

#define BQ2597X_FREQ_SHIFT_MASK				0x18
#define BQ2597X_FREQ_SHIFT_SHIFT			3
#define BQ2597X_FREQ_SHIFT_NORMINAL			0
#define BQ2597X_FREQ_SHIFT_POSITIVE10			1
#define BQ2597X_FREQ_SHIFT_NEGATIVE10			2
#define BQ2597X_FREQ_SHIFT_SPREAD_SPECTRUM		3

#define BQ2597X_TSBUS_DIS_MASK				0x04
#define BQ2597X_TSBUS_DIS_SHIFT				2
#define BQ2597X_TSBUS_ENABLE				0
#define BQ2597X_TSBUS_DISABLE				1

#define BQ2597X_TSBAT_DIS_MASK				0x02
#define BQ2597X_TSBAT_DIS_SHIFT				1
#define BQ2597X_TSBAT_ENABLE				0
#define BQ2597X_TSBAT_DISABLE				1

#define BQ2597X_TDIE_DIS_MASK				0x01
#define BQ2597X_TDIE_DIS_SHIFT				0
#define BQ2597X_TDIE_ENABLE				0
#define BQ2597X_TDIE_DISABLE				1

/* Register 0Dh */
#define BQ2597X_REG_0D					0x0D
#define BQ2597X_BAT_OVP_ALM_STAT_MASK			0x80
#define BQ2597X_BAT_OVP_ALM_STAT_SHIFT			7

#define BQ2597X_BAT_OCP_ALM_STAT_MASK			0x40
#define BQ2597X_BAT_OCP_ALM_STAT_SHIFT			6

#define BQ2597X_BUS_OVP_ALM_STAT_MASK			0x20
#define BQ2597X_BUS_OVP_ALM_STAT_SHIFT			5

#define BQ2597X_BUS_OCP_ALM_STAT_MASK			0x10
#define BQ2597X_BUS_OCP_ALM_STAT_SHIFT			4

#define BQ2597X_BAT_UCP_ALM_STAT_MASK			0x08
#define BQ2597X_BAT_UCP_ALM_STAT_SHIFT			3

#define BQ2597X_ADAPTER_INSERT_STAT_MASK		0x04
#define BQ2597X_ADAPTER_INSERT_STAT_SHIFT		2

#define BQ2597X_VBAT_INSERT_STAT_MASK			0x02
#define BQ2597X_VBAT_INSERT_STAT_SHIFT			1

#define BQ2597X_ADC_DONE_STAT_MASK			0x01
#define BQ2597X_ADC_DONE_STAT_SHIFT			0
#define BQ2597X_ADC_DONE_STAT_COMPLETE			1
#define BQ2597X_ADC_DONE_STAT_NOTCOMPLETE		0

/* Register 0Eh */
#define BQ2597X_REG_0E					0x0E
#define BQ2597X_BAT_OVP_ALM_FLAG_MASK			0x80
#define BQ2597X_BAT_OVP_ALM_FLAG_SHIFT			7

#define BQ2597X_BAT_OCP_ALM_FLAG_MASK			0x40
#define BQ2597X_BAT_OCP_ALM_FLAG_SHIFT			6

#define BQ2597X_BUS_OVP_ALM_FLAG_MASK			0x20
#define BQ2597X_BUS_OVP_ALM_FLAG_SHIFT			5

#define BQ2597X_BUS_OCP_ALM_FLAG_MASK			0x10
#define BQ2597X_BUS_OCP_ALM_FLAG_SHIFT			4

#define BQ2597X_BAT_UCP_ALM_FLAG_MASK			0x08
#define BQ2597X_BAT_UCP_ALM_FLAG_SHIFT			3

#define BQ2597X_ADAPTER_INSERT_FLAG_MASK		0x04
#define BQ2597X_ADAPTER_INSERT_FLAG_SHIFT		2

#define BQ2597X_VBAT_INSERT_FLAG_MASK			0x02
#define BQ2597X_VBAT_INSERT_FLAG_SHIFT			1

#define BQ2597X_ADC_DONE_FLAG_MASK			0x01
#define BQ2597X_ADC_DONE_FLAG_SHIFT			0
#define BQ2597X_ADC_DONE_FLAG_COMPLETE			1
#define BQ2597X_ADC_DONE_FLAG_NOTCOMPLETE		0

/* Register 0Fh */
#define BQ2597X_REG_0F					0x0F
#define BQ2597X_BAT_OVP_ALM_MASK_MASK			0x80
#define BQ2597X_BAT_OVP_ALM_MASK_SHIFT			7
#define BQ2597X_BAT_OVP_ALM_MASK_ENABLE			1
#define BQ2597X_BAT_OVP_ALM_MASK_DISABLE		0

#define BQ2597X_BAT_OCP_ALM_MASK_MASK			0x40
#define BQ2597X_BAT_OCP_ALM_MASK_SHIFT			6
#define BQ2597X_BAT_OCP_ALM_MASK_ENABLE			1
#define BQ2597X_BAT_OCP_ALM_MASK_DISABLE		0

#define BQ2597X_BUS_OVP_ALM_MASK_MASK			0x20
#define BQ2597X_BUS_OVP_ALM_MASK_SHIFT			5
#define BQ2597X_BUS_OVP_ALM_MASK_ENABLE			1
#define BQ2597X_BUS_OVP_ALM_MASK_DISABLE		0

#define BQ2597X_BUS_OCP_ALM_MASK_MASK			0x10
#define BQ2597X_BUS_OCP_ALM_MASK_SHIFT			4
#define BQ2597X_BUS_OCP_ALM_MASK_ENABLE			1
#define BQ2597X_BUS_OCP_ALM_MASK_DISABLE		0

#define BQ2597X_BAT_UCP_ALM_MASK_MASK			0x08
#define BQ2597X_BAT_UCP_ALM_MASK_SHIFT			3
#define BQ2597X_BAT_UCP_ALM_MASK_ENABLE			1
#define BQ2597X_BAT_UCP_ALM_MASK_DISABLE		0

#define BQ2597X_ADAPTER_INSERT_MASK_MASK		0x04
#define BQ2597X_ADAPTER_INSERT_MASK_SHIFT		2
#define BQ2597X_ADAPTER_INSERT_MASK_ENABLE		1
#define BQ2597X_ADAPTER_INSERT_MASK_DISABLE		0

#define BQ2597X_VBAT_INSERT_MASK_MASK			0x02
#define BQ2597X_VBAT_INSERT_MASK_SHIFT			1
#define BQ2597X_VBAT_INSERT_MASK_ENABLE			1
#define BQ2597X_VBAT_INSERT_MASK_DISABLE		0

#define BQ2597X_ADC_DONE_MASK_MASK			0x01
#define BQ2597X_ADC_DONE_MASK_SHIFT			0
#define BQ2597X_ADC_DONE_MASK_ENABLE			1
#define BQ2597X_ADC_DONE_MASK_DISABLE			0

/* Register 10h */
#define BQ2597X_REG_10					0x10
#define BQ2597X_BAT_OVP_FLT_STAT_MASK			0x80
#define BQ2597X_BAT_OVP_FLT_STAT_SHIFT			7

#define BQ2597X_BAT_OCP_FLT_STAT_MASK			0x40
#define BQ2597X_BAT_OCP_FLT_STAT_SHIFT			6

#define BQ2597X_BUS_OVP_FLT_STAT_MASK			0x20
#define BQ2597X_BUS_OVP_FLT_STAT_SHIFT			5

#define BQ2597X_BUS_OCP_FLT_STAT_MASK			0x10
#define BQ2597X_BUS_OCP_FLT_STAT_SHIFT			4

#define BQ2597X_TSBUS_TSBAT_ALM_STAT_MASK		0x08
#define BQ2597X_TSBUS_TSBAT_ALM_STAT_SHIFT		3

#define BQ2597X_TSBAT_FLT_STAT_MASK			0x04
#define BQ2597X_TSBAT_FLT_STAT_SHIFT			2

#define BQ2597X_TSBUS_FLT_STAT_MASK			0x02
#define BQ2597X_TSBUS_FLT_STAT_SHIFT			1

#define BQ2597X_TDIE_ALM_STAT_MASK			0x01
#define BQ2597X_TDIE_ALM_STAT_SHIFT			0

/* Register 11h */
#define BQ2597X_REG_11					0x11
#define BQ2597X_BAT_OVP_FLT_FLAG_MASK			0x80
#define BQ2597X_BAT_OVP_FLT_FLAG_SHIFT			7

#define BQ2597X_BAT_OCP_FLT_FLAG_MASK			0x40
#define BQ2597X_BAT_OCP_FLT_FLAG_SHIFT			6

#define BQ2597X_BUS_OVP_FLT_FLAG_MASK			0x20
#define BQ2597X_BUS_OVP_FLT_FLAG_SHIFT			5

#define BQ2597X_BUS_OCP_FLT_FLAG_MASK			0x10
#define BQ2597X_BUS_OCP_FLT_FLAG_SHIFT			4

#define BQ2597X_TSBUS_TSBAT_ALM_FLAG_MASK		0x08
#define BQ2597X_TSBUS_TSBAT_ALM_FLAG_SHIFT		3

#define BQ2597X_TSBAT_FLT_FLAG_MASK			0x04
#define BQ2597X_TSBAT_FLT_FLAG_SHIFT			2

#define BQ2597X_TSBUS_FLT_FLAG_MASK			0x02
#define BQ2597X_TSBUS_FLT_FLAG_SHIFT			1

#define BQ2597X_TDIE_ALM_FLAG_MASK			0x01
#define BQ2597X_TDIE_ALM_FLAG_SHIFT			0

/* Register 12h */
#define BQ2597X_REG_12					0x12
#define BQ2597X_BAT_OVP_FLT_MASK_MASK			0x80
#define BQ2597X_BAT_OVP_FLT_MASK_SHIFT			7
#define BQ2597X_BAT_OVP_FLT_MASK_ENABLE			1
#define BQ2597X_BAT_OVP_FLT_MASK_DISABLE		0

#define BQ2597X_BAT_OCP_FLT_MASK_MASK			0x40
#define BQ2597X_BAT_OCP_FLT_MASK_SHIFT			6
#define BQ2597X_BAT_OCP_FLT_MASK_ENABLE			1
#define BQ2597X_BAT_OCP_FLT_MASK_DISABLE		0

#define BQ2597X_BUS_OVP_FLT_MASK_MASK			0x20
#define BQ2597X_BUS_OVP_FLT_MASK_SHIFT			5
#define BQ2597X_BUS_OVP_FLT_MASK_ENABLE			1
#define BQ2597X_BUS_OVP_FLT_MASK_DISABLE		0

#define BQ2597X_BUS_OCP_FLT_MASK_MASK			0x10
#define BQ2597X_BUS_OCP_FLT_MASK_SHIFT			4
#define BQ2597X_BUS_OCP_FLT_MASK_ENABLE			1
#define BQ2597X_BUS_OCP_FLT_MASK_DISABLE		0

#define BQ2597X_TSBUS_TSBAT_ALM_MASK_MASK		0x08
#define BQ2597X_TSBUS_TSBAT_ALM_MASK_SHIFT		3
#define BQ2597X_TSBUS_TSBAT_ALM_MASK_ENABLE		1
#define BQ2597X_TSBUS_TSBAT_ALM_MASK_DISABLE		0

#define BQ2597X_TSBAT_FLT_MASK_MASK			0x04
#define BQ2597X_TSBAT_FLT_MASK_SHIFT			2
#define BQ2597X_TSBAT_FLT_MASK_ENABLE			1
#define BQ2597X_TSBAT_FLT_MASK_DISABLE			0

#define BQ2597X_TSBUS_FLT_MASK_MASK			0x02
#define BQ2597X_TSBUS_FLT_MASK_SHIFT			1
#define BQ2597X_TSBUS_FLT_MASK_ENABLE			1
#define BQ2597X_TSBUS_FLT_MASK_DISABLE			0

#define BQ2597X_TDIE_ALM_MASK_MASK			0x01
#define BQ2597X_TDIE_ALM_MASK_SHIFT			0
#define BQ2597X_TDIE_ALM_MASK_ENABLE			1
#define BQ2597X_TDIE_ALM_MASK_DISABLE			0

/* Register 13h */
#define BQ2597X_REG_13					0x13
#define BQ2597X_DEV_ID_MASK				0x0F
#define BQ2597X_DEV_ID_SHIFT				0
#define BQ25968_DEVICE_ID				0x16
#define BQ25970_DEVICE_ID				0x10
#define SC8551_DEVICE_ID				0x00

/* Register 14h */
#define BQ2597X_REG_14					0x14
#define BQ2597X_ADC_EN_MASK				0x80
#define BQ2597X_ADC_EN_SHIFT				7
#define BQ2597X_ADC_ENABLE				1
#define BQ2597X_ADC_DISABLE				0

#define BQ2597X_ADC_RATE_MASK				0x40
#define BQ2597X_ADC_RATE_SHIFT				6
#define BQ2597X_ADC_RATE_CONTINOUS			0
#define BQ2597X_ADC_RATE_ONESHOT			1

#define BQ2597X_ADC_AVG_MASK				0x20
#define BQ2597X_ADC_AVG_SHIFT				5
#define BQ2597X_ADC_AVG_DISABLE				0
#define BQ2597X_ADC_AVG_ENABLE				1

#define BQ2597X_ADC_AVG_INIT_MASK			0x10
#define BQ2597X_ADC_AVG_INIT_SHIFT			4
#define BQ2597X_ADC_AVG_INIT_EXIST_REG_VAL		0
#define BQ2597X_ADC_AVG_INIT_NEW_CONVERSION		1

#define BQ2597X_ADC_SAMPLE_MASK				0x0C
#define BQ2597X_ADC_SAMPLE_SHIFT			2
#define BQ2597X_ADC_SAMPLE_15BITS			0
#define BQ2597X_ADC_SAMPLE_14BITS			1
#define BQ2597X_ADC_SAMPLE_13BITS			2
#define BQ2597X_ADC_SAMPLE_12BITS			3

#define BQ2597X_IBUS_ADC_DIS_MASK			0x01
#define BQ2597X_IBUS_ADC_DIS_SHIFT			0
#define BQ2597X_IBUS_ADC_ENABLE				0
#define BQ2597X_IBUS_ADC_DISABLE			1

/* Register 15h */
#define BQ2597X_REG_15					0x15
#define BQ2597X_VBUS_ADC_DIS_MASK			0x80
#define BQ2597X_VBUS_ADC_DIS_SHIFT			7
#define BQ2597X_VBUS_ADC_ENABLE				0
#define BQ2597X_VBUS_ADC_DISABLE			1

#define BQ2597X_VAC_ADC_DIS_MASK			0x40
#define BQ2597X_VAC_ADC_DIS_SHIFT			6
#define BQ2597X_VAC_ADC_ENABLE				0
#define BQ2597X_VAC_ADC_DISABLE				1

#define BQ2597X_VOUT_ADC_DIS_MASK			0x20
#define BQ2597X_VOUT_ADC_DIS_SHIFT			5
#define BQ2597X_VOUT_ADC_ENABLE				0
#define BQ2597X_VOUT_ADC_DISABLE			1

#define BQ2597X_VBAT_ADC_DIS_MASK			0x10
#define BQ2597X_VBAT_ADC_DIS_SHIFT			4
#define BQ2597X_VBAT_ADC_ENABLE				0
#define BQ2597X_VBAT_ADC_DISABLE			1

#define BQ2597X_IBAT_ADC_DIS_MASK			0x08
#define BQ2597X_IBAT_ADC_DIS_SHIFT			3
#define BQ2597X_IBAT_ADC_ENABLE				0
#define BQ2597X_IBAT_ADC_DISABLE			1

#define BQ2597X_TSBUS_ADC_DIS_MASK			0x04
#define BQ2597X_TSBUS_ADC_DIS_SHIFT			2
#define BQ2597X_TSBUS_ADC_ENABLE			0
#define BQ2597X_TSBUS_ADC_DISABLE			1

#define BQ2597X_TSBAT_ADC_DIS_MASK			0x02
#define BQ2597X_TSBAT_ADC_DIS_SHIFT			1
#define BQ2597X_TSBAT_ADC_ENABLE			0
#define BQ2597X_TSBAT_ADC_DISABLE			1

#define BQ2597X_TDIE_ADC_DIS_MASK			0x01
#define BQ2597X_TDIE_ADC_DIS_SHIFT			0
#define BQ2597X_TDIE_ADC_ENABLE				0
#define BQ2597X_TDIE_ADC_DISABLE			1

/* Register 16h */
#define BQ2597X_REG_16					0x16
#define BQ2597X_IBUS_POL_MASK				0x80
#define BQ2597X_IBUS_POL_SHIFT				7
#define BQ2597X_IBUS_POL_POSITIVE			0
#define BQ2597X_IBUS_POL_NAGETIVE			1

#define BQ2597X_IBUS_ADC1_MASK				0x7F
#define BQ2597X_IBUS_ADC1_SHIFT				0
#define BQ2597X_IBUS_ADC1_BASE				0
#define BQ2597X_IBUS_ADC1_LSB				256

/* Register 17h */
#define BQ2597X_REG_17					0x17
#define BQ2597X_IBUS_ADC0_MASK				0xFF
#define BQ2597X_IBUS_ADC0_SHIFT				0
#define BQ2597X_IBUS_ADC0_BASE				0
#define BQ2597X_IBUS_ADC0_LSB				1

/* Register 18h */
#define BQ2597X_REG_18					0x18
#define BQ2597X_VBUS_POL_MASK				0x80
#define BQ2597X_VBUS_POL_SHIFT				7
#define BQ2597X_VBUS_POL_POSITIVE			0
#define BQ2597X_VBUS_POL_NEGATIVE			1

#define BQ2597X_VBUS_ADC1_MASK				0x7F
#define BQ2597X_VBUS_ADC1_SHIFT				0
#define BQ2597X_VBUS_ADC1_BASE				0
#define BQ2597X_VBUS_ADC1_LSB				256

/* Register 19h */
#define BQ2597X_REG_19					0x19
#define BQ2597X_VBUS_ADC0_MASK				0xFF
#define BQ2597X_VBUS_ADC0_SHIFT				0
#define BQ2597X_VBUS_ADC0_BASE				0
#define BQ2597X_VBUS_ADC0_LSB				1

/* Register 1Ah */
#define BQ2597X_REG_1A					0x1A
#define BQ2597X_VAC_POL_MASK				0x80
#define BQ2597X_VAC_POL_SHIFT				7
#define BQ2597X_VAC_POL_POSITIVE			0
#define BQ2597X_VAC_POL_NEGATIVE			1

#define BQ2597X_VAC_ADC1_MASK				0x7F
#define BQ2597X_VAC_ADC1_SHIFT				0
#define BQ2597X_VAC_ADC1_BASE				0
#define BQ2597X_VAC_ADC1_LSB				256

/* Register 1Bh */
#define BQ2597X_REG_1B					0x1B
#define BQ2597X_VAC_ADC0_MASK				0xFF
#define BQ2597X_VAC_ADC0_SHIFT				0
#define BQ2597X_VAC_ADC0_BASE				0
#define BQ2597X_VAC_ADC0_LSB				1

/* Register 1Ch */
#define BQ2597X_REG_1C					0x1C
#define BQ2597X_VOUT_POL_MASK				0x80
#define BQ2597X_VOUT_POL_SHIFT				7
#define BQ2597X_VOUT_POL_POSITIVE			0
#define BQ2597X_VOUT_POL_NEGATIVE			1

#define BQ2597X_VOUT_ADC1_MASK				0x7F
#define BQ2597X_VOUT_ADC1_SHIFT				0
#define BQ2597X_VOUT_ADC1_BASE				0
#define BQ2597X_VOUT_ADC1_LSB				256

/* Register 1Dh */
#define BQ2597X_REG_1D					0x1D
#define BQ2597X_VOUT_ADC0_MASK				0xFF
#define BQ2597X_VOUT_ADC0_SHIFT				0
#define BQ2597X_VOUT_ADC0_BASE				0
#define BQ2597X_VOUT_ADC0_LSB				1

/* Register 1Eh */
#define BQ2597X_REG_1E					0x1E
#define BQ2597X_VBAT_POL_MASK				0x80
#define BQ2597X_VBAT_POL_SHIFT				7
#define BQ2597X_VBAT_POL_POSITIVE			0
#define BQ2597X_VBAT_POL_NEGATIVE			1

#define BQ2597X_VBAT_ADC1_MASK				0x7F
#define BQ2597X_VBAT_ADC1_SHIFT				0
#define BQ2597X_VBAT_ADC1_BASE				0
#define BQ2597X_VBAT_ADC1_LSB				256

/* Register 1Fh */
#define BQ2597X_REG_1F					0x1F
#define BQ2597X_VBAT_ADC0_MASK				0xFF
#define BQ2597X_VBAT_ADC0_SHIFT				0
#define BQ2597X_VBAT_ADC0_BASE				0
#define BQ2597X_VBAT_ADC0_LSB				1

/* Register 20h */
#define BQ2597X_REG_20					0x20
#define BQ2597X_IBAT_POL_MASK				0x80
#define BQ2597X_IBAT_POL_SHIFT				7
#define BQ2597X_IBAT_POL_POSITIVE			0
#define BQ2597X_IBAT_POL_NEGATIVE			1

#define BQ2597X_IBAT_ADC1_MASK				0x7F
#define BQ2597X_IBAT_ADC1_SHIFT				0
#define BQ2597X_IBAT_ADC1_BASE				0
#define BQ2597X_IBAT_ADC1_LSB				256

/* Register 21h */
#define BQ2597X_REG_21					0x21
#define BQ2597X_IBAT_ADC0_MASK				0xFF
#define BQ2597X_IBAT_ADC0_SHIFT				0
#define BQ2597X_IBAT_ADC0_BASE				0
#define BQ2597X_IBAT_ADC0_LSB				1

/* Register 22h */
#define BQ2597X_REG_22					0x22
#define BQ2597X_TSBUS_POL_MASK				0x80
#define BQ2597X_TSBUS_POL_SHIFT				7
#define BQ2597X_TSBUS_POL_POSITIVE			0
#define BQ2597X_TSBUS_POL_NEGATIVE			1

#define BQ2597X_TSBUS_ADC1_MASK				0x7F
#define BQ2597X_TSBUS_ADC1_SHIFT			0
#define BQ2597X_TSBUS_ADC1_BASE				0
#define BQ2597X_TSBUS_ADC1_LSB				25

/* Register 23h */
#define BQ2597X_REG_23					0x23
#define BQ2597X_TSBUS_ADC0_MASK				0xFF
#define BQ2597X_TSBUS_ADC0_SHIFT			0
#define BQ2597X_TSBUS_ADC0_BASE				0
#define BQ2597X_TSBUS_ADC0_LSB				0.09766

/* Register 24h */
#define BQ2597X_REG_24					0x24
#define BQ2597X_TSBAT_POL_MASK				0x80
#define BQ2597X_TSBAT_POL_SHIFT				7
#define BQ2597X_TSBAT_POL_POSITIVE			0
#define BQ2597X_TSBAT_POL_NEGATIVE			1

#define BQ2597X_TSBAT_ADC1_MASK				0x7F
#define BQ2597X_TSBAT_ADC1_SHIFT			0
#define BQ2597X_TSBAT_ADC1_BASE				0
#define BQ2597X_TSBAT_ADC1_LSB				25

/* Register 25h */
#define BQ2597X_REG_25					0x25
#define BQ2597X_TSBAT_ADC0_MASK				0xFF
#define BQ2597X_TSBAT_ADC0_SHIFT			0
#define BQ2597X_TSBAT_ADC0_BASE				0
#define BQ2597X_TSBAT_ADC0_LSB				0.09766

/* Register 26h */
#define BQ2597X_REG_26					0x26
#define BQ2597X_TDIE_POL_MASK				0x80
#define BQ2597X_TDIE_POL_SHIFT				7
#define BQ2597X_TDIE_POL_POSITIVE			0
#define BQ2597X_TDIE_POL_NEGATIVE			1

#define BQ2597X_TDIE_ADC1_MASK				0x7F
#define BQ2597X_TDIE_ADC1_SHIFT				0
#define BQ2597X_TDIE_ADC1_BASE				0
#define BQ2597X_TDIE_ADC1_LSB				128

/* Register 27h */
#define BQ2597X_REG_27					0x27
#define BQ2597X_TDIE_ADC0_MASK				0xFF
#define BQ2597X_TDIE_ADC0_SHIFT				0
#define BQ2597X_TDIE_ADC0_BASE				0
#define BQ2597X_TDIE_ADC0_LSB				0.5

/* Register 28h */
#define BQ2597X_REG_28					0x28
#define BQ2597X_TSBUS_FLT1_MASK				0xFF
#define BQ2597X_TSBUS_FLT1_SHIFT			0
#define BQ2597X_TSBUS_FLT1_BASE				0
#define BQ2597X_TSBUS_FLT1_LSB				0.19531

/* Register 29h */
#define BQ2597X_REG_29					0x29
#define BQ2597X_TSBAT_FLT0_MASK				0xFF
#define BQ2597X_TSBAT_FLT0_SHIFT			0
#define BQ2597X_TSBAT_FLT0_BASE				0
#define BQ2597X_TSBAT_FLT0_LSB				0.19531

/* Register 2Ah */
#define BQ2597X_REG_2A					0x2A
#define BQ2597X_TDIE_ALM_MASK				0xFF
#define BQ2597X_TDIE_ALM_SHIFT				0
#define BQ2597X_TDIE_ALM_BASE				30

#define BQ2597X_TDIE_ALM_LSB				2 /*careful
					    multiply is used for calc*/

/* Register 2Bh */
#define BQ2597X_REG_2B					0x2B
#define BQ2597X_SS_TIMEOUT_SET_MASK			0xE0
#define BQ2597X_SS_TIMEOUT_SET_SHIFT			5
#define BQ2597X_SS_TIMEOUT_DISABLE			0
#define BQ2597X_SS_TIMEOUT_12P5MS			1
#define BQ2597X_SS_TIMEOUT_25MS				2
#define BQ2597X_SS_TIMEOUT_50MS				3
#define BQ2597X_SS_TIMEOUT_100MS			4
#define BQ2597X_SS_TIMEOUT_400MS			5
#define BQ2597X_SS_TIMEOUT_1500MS			6
#define BQ2597X_SS_TIMEOUT_100000MS			7

#define BQ2597X_EN_REGULATION_MASK			0x10
#define BQ2597X_EN_REGULATION_SHIFT			4
#define BQ2597X_EN_REGULATION_ENABLE			1
#define BQ2597X_EN_REGULATION_DISABLE			0

#define BQ2597X_VOUT_OVP_DIS_MASK			0x08
#define BQ2597X_VOUT_OVP_DIS_SHIFT			3
#define BQ2597X_VOUT_OVP_ENABLE				1
#define BQ2597X_VOUT_OVP_DISABLE			0

#define BQ2597X_IBUS_UCP_RISE_TH_MASK			0x04
#define BQ2597X_IBUS_UCP_RISE_TH_SHIFT			2
#define BQ2597X_IBUS_UCP_RISE_300MA			0
#define BQ2597X_IBUS_UCP_RISE_500MA			1

#define BQ2597X_SET_IBAT_SNS_RES_MASK			0x02
#define BQ2597X_SET_IBAT_SNS_RES_SHIFT			1
#define BQ2597X_SET_IBAT_SNS_RES_2MHM			0
#define BQ2597X_SET_IBAT_SNS_RES_5MHM			1


#define BQ2597X_VAC_PD_EN_MASK				0x01
#define BQ2597X_VAC_PD_EN_SHIFT				0
#define BQ2597X_VAC_PD_ENABLE				1
#define BQ2597X_VAC_PD_DISABLE				0

/* Register 2Ch */
#define BQ2597X_REG_2C					0x2C
#define BQ2597X_IBAT_REG_MASK				0xC0
#define BQ2597X_IBAT_REG_SHIFT				6
#define BQ2597X_IBAT_REG_200MA				0
#define BQ2597X_IBAT_REG_300MA				1
#define BQ2597X_IBAT_REG_400MA				2
#define BQ2597X_IBAT_REG_500MA				3
#define BQ2597X_VBAT_REG_MASK				0x30
#define BQ2597X_VBAT_REG_SHIFT				4
#define BQ2597X_VBAT_REG_50MV				0
#define BQ2597X_VBAT_REG_100MV				1
#define BQ2597X_VBAT_REG_150MV				2
#define BQ2597X_VBAT_REG_200MV				3

#define BQ2597X_VBAT_REG_ACTIVE_STAT_MASK		0x08
#define BQ2597X_IBAT_REG_ACTIVE_STAT_MASK		0x04
#define BQ2597X_VDROP_OVP_ACTIVE_STAT_MASK		0x02
#define BQ2597X_VOUT_OVP_ACTIVE_STAT_MASK		0x01


#define BQ2597X_REG_2D					0x2D
#define BQ2597X_VBAT_REG_ACTIVE_FLAG_MASK		0x80
#define BQ2597X_IBAT_REG_ACTIVE_FLAG_MASK		0x40
#define BQ2597X_VDROP_OVP_FLAG_MASK			0x20
#define BQ2597X_VOUT_OVP_FLAG_MASK			0x10
#define BQ2597X_VBAT_REG_ACTIVE_MASK_MASK		0x08
#define BQ2597X_IBAT_REG_ACTIVE_MASK_MASK		0x04
#define BQ2597X_VDROP_OVP_MASK_MASK			0x02
#define BQ2597X_VOUT_OVP_MASK_MASK			0x01


#define BQ2597X_REG_2E					0x2E
#define BQ2597X_VBUS_ERR_LOW_DG_MASK			0x10
#define BQ2597X_VBUS_ERR_LOW_DG_SHIFT			4
#define BQ2597X_VBUS_ERR_LOW_DG_10US			0
#define BQ2597X_VBUS_ERR_LOW_DG_10MS			1
#define BQ2597X_IBUS_LOW_DG_MASK			0x08
#define BQ2597X_IBUS_LOW_DG_SHIFT			3
#define BQ2597X_IBUS_LOW_DG_10US			0
#define BQ2597X_IBUS_LOW_DG_5MS				1

#define SC8551_IBUS_ADC_LSB				1.5625
#define SC8551_VBUS_ADC_LSB				3.75
#define SC8551_VAC_ADC_LSB				5
#define SC8551_VOUT_ADC_LSB				1.25

#define SC8551_VBAT_ADC_LSB				(1.25*1.0044)

#define SC8551_VBAT_ADC_LSB_NON_CALIBRATE		1.25
#define SC8551_IBAT_ADC_LSB				3.125
#define SC8551_TSBUS_ADC_LSB				1.0
#define SC8551_TSBAT_ADC_LSB				1.0
#define SC8551_TDIE_ADC_LSB				1.0

#define SC8551_BAT_OVP_BASE				3500

#define SC8551_REG_30					0x30

#define SC8551_REG_31					0x31
#define SC8551_CHARGE_MODE_MASK				0x01
#define SC8551_CHARGE_MODE_SHIFT			0
#define SC8551_CHARGE_MODE_DIV2				0
#define SC8551_CHARGE_MODE_BYPASS			1

#define SC8551_REG_34					0x34
#define SC8551_ADC_OPTI_MASK				0x01
#define SC8551_ADC_OPTI_SHIFT				0
#define SC8551_ADC_OPTI					1

#endif
