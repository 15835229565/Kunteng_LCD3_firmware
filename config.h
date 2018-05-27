/*
 * LCD3 firmware
 *
 * Copyright (C) Casainho, 2018.
 *
 * Released under the GPL License, Version 3
 */

#ifndef CONFIG_H_
#define CONFIG_H_

// Battery voltage:
// 30.0V --> 447 | 0.0671 volts per each ADC unit
// 40.0V --> 595 | 0.0672 volts per each ADC unit
#define ADC_BATTERY_VOLTAGE_PER_ADC_STEP_X10 0.672

// Possible values: 0, 1, 2, 3, 4, 5, 6
// 0 equal to no filtering and no delay, higher values will increase filtering but will also add bigger delay
#define READ_BATTERY_VOLTAGE_FILTER_COEFFICIENT 6
#define READ_BATTERY_POWER_FILTER_COEFFICIENT 6

#endif /* CONFIG_H_ */