/*
 * @Author: Leon
 * @email: zhangpeng@tuya.com
 * @LastEditors: Leon
 * @file name: zigbee_attr.h
 * @Description: zigbee attribute micro define files
 * @Copyright: HANGZHOU TUYA INFORMATION TECHNOLOGY CO.,LTD
 * @Company: http://www.tuya.com
 * @Date: 2019-03-25 21:41:17
 * @LastEditTime: 2019-04-15 20:23:18
 */

#ifndef ZIGBEE_ATTR__T
#define ZIGBEE_ATTR__T

// Attribute types for cluster: Basic
// Cluster specification level: zcl-7.0-07-5123-07

// Client attributes
#define ATTR_BASIC_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_BASIC_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_VERSION_ATTRIBUTE_ID                               0x0000 // Ver.: always
#define ATTR_APPLICATION_VERSION_ATTRIBUTE_ID                   0x0001 // Ver.: always
#define ATTR_STACK_VERSION_ATTRIBUTE_ID                         0x0002 // Ver.: always
#define ATTR_HW_VERSION_ATTRIBUTE_ID                            0x0003 // Ver.: always
#define ATTR_MANUFACTURER_NAME_ATTRIBUTE_ID                     0x0004 // Ver.: always
#define ATTR_MODEL_IDENTIFIER_ATTRIBUTE_ID                      0x0005 // Ver.: always
#define ATTR_DATE_CODE_ATTRIBUTE_ID                             0x0006 // Ver.: always
#define ATTR_POWER_SOURCE_ATTRIBUTE_ID                          0x0007 // Ver.: always
#define ATTR_GENERIC_DEVICE_CLASS_ATTRIBUTE_ID                  0x0008 // Ver.: since l&o-1.0-15-0014-04
#define ATTR_GENERIC_DEVICE_TYPE_ATTRIBUTE_ID                   0x0009 // Ver.: since l&o-1.0-15-0014-04
#define ATTR_PRODUCT_CODE_ATTRIBUTE_ID                          0x000A // Ver.: since l&o-1.0-15-0014-04
#define ATTR_PRODUCT_URL_ATTRIBUTE_ID                           0x000B // Ver.: since l&o-1.0-15-0014-04
#define ATTR_LOCATION_DESCRIPTION_ATTRIBUTE_ID                  0x0010 // Ver.: always
#define ATTR_PHYSICAL_ENVIRONMENT_ATTRIBUTE_ID                  0x0011 // Ver.: always
#define ATTR_DEVICE_ENABLED_ATTRIBUTE_ID                        0x0012 // Ver.: always
#define ATTR_ALARM_MASK_ATTRIBUTE_ID                            0x0013 // Ver.: always
#define ATTR_DISABLE_LOCAL_CONFIG_ATTRIBUTE_ID                  0x0014 // Ver.: always
#define ATTR_CURRENT_LOCALE_ATTRIBUTE_ID                        0x0015 // Ver.: always
#define ATTR_SW_BUILD_ID_ATTRIBUTE_ID                           0x4000 // Ver.: since zll-1.0-11-0037-10
#define ATTR_BASIC_CLUSTER_TX_POWER_CFG_ATTRIBUTE_ID            0xFFDE // tx power config
#define ATTR_BASIC_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_BASIC_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Power Configuration
// Cluster specification level: zcl-7.0-07-5123-07

// Client attributes
#define ATTR_POWER_CONFIG_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_POWER_CONFIG_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_MAINS_VOLTAGE_ATTRIBUTE_ID                                0x0000 // Ver.: always
#define ATTR_MAINS_FREQUENCY_ATTRIBUTE_ID                              0x0001 // Ver.: always
#define ATTR_MAINS_ALARM_MASK_ATTRIBUTE_ID                             0x0010 // Ver.: always
#define ATTR_MAINS_VOLTAGE_MIN_THRESHOLD_ATTRIBUTE_ID                  0x0011 // Ver.: always
#define ATTR_MAINS_VOLTAGE_MAX_THRESHOLD_ATTRIBUTE_ID                  0x0012 // Ver.: always
#define ATTR_MAINS_VOLTAGE_DWELL_TRIP_POINT_ATTRIBUTE_ID               0x0013 // Ver.: always
#define ATTR_BATTERY_VOLTAGE_ATTRIBUTE_ID                              0x0020 // Ver.: always
#define ATTR_BATTERY_PERCENTAGE_REMAINING_ATTRIBUTE_ID                 0x0021 // Ver.: since ha-1.2-05-3520-29
#define ATTR_BATTERY_MANUFACTURER_ATTRIBUTE_ID                         0x0030 // Ver.: always
#define ATTR_BATTERY_SIZE_ATTRIBUTE_ID                                 0x0031 // Ver.: always
#define ATTR_BATTERY_AHR_RATING_ATTRIBUTE_ID                           0x0032 // Ver.: always
#define ATTR_BATTERY_QUANTITY_ATTRIBUTE_ID                             0x0033 // Ver.: always
#define ATTR_BATTERY_RATED_VOLTAGE_ATTRIBUTE_ID                        0x0034 // Ver.: always
#define ATTR_BATTERY_ALARM_MASK_ATTRIBUTE_ID                           0x0035 // Ver.: always
#define ATTR_BATTERY_VOLTAGE_MIN_THRESHOLD_ATTRIBUTE_ID                0x0036 // Ver.: always
#define ATTR_BATTERY_VOLTAGE_THRESHOLD_1_ATTRIBUTE_ID                  0x0037 // Ver.: since ha-1.2-05-3520-29
#define ATTR_BATTERY_VOLTAGE_THRESHOLD_2_ATTRIBUTE_ID                  0x0038 // Ver.: since ha-1.2-05-3520-29
#define ATTR_BATTERY_VOLTAGE_THRESHOLD_3_ATTRIBUTE_ID                  0x0039 // Ver.: since ha-1.2-05-3520-29
#define ATTR_BATTERY_PERCENTAGE_MIN_THRESHOLD_ATTRIBUTE_ID             0x003A // Ver.: since ha-1.2-05-3520-29
#define ATTR_BATTERY_PERCENTAGE_THRESHOLD_1_ATTRIBUTE_ID               0x003B // Ver.: since ha-1.2-05-3520-29
#define ATTR_BATTERY_PERCENTAGE_THRESHOLD_2_ATTRIBUTE_ID               0x003C // Ver.: since ha-1.2-05-3520-29
#define ATTR_BATTERY_PERCENTAGE_THRESHOLD_3_ATTRIBUTE_ID               0x003D // Ver.: since ha-1.2-05-3520-29
#define ATTR_BATTERY_ALARM_STATE_ATTRIBUTE_ID                          0x003E // Ver.: since ha-1.2-05-3520-29
#define ATTR_BATTERY_2_VOLTAGE_ATTRIBUTE_ID                            0x0040 // Ver.: since ha-1.2-05-3520-29
#define ATTR_BATTERY_2_PERCENTAGE_REMAINING_ATTRIBUTE_ID               0x0041 // Ver.: since ha-1.2-05-3520-29
#define ATTR_BATTERY_2_MANUFACTURER_ATTRIBUTE_ID                       0x0050 // Ver.: since ha-1.2-05-3520-29
#define ATTR_BATTERY_2_SIZE_ATTRIBUTE_ID                               0x0051 // Ver.: since ha-1.2-05-3520-29
#define ATTR_BATTERY_2_AHR_RATING_ATTRIBUTE_ID                         0x0052 // Ver.: since ha-1.2-05-3520-29
#define ATTR_BATTERY_2_QUANTITY_ATTRIBUTE_ID                           0x0053 // Ver.: since ha-1.2-05-3520-29
#define ATTR_BATTERY_2_RATED_VOLTAGE_ATTRIBUTE_ID                      0x0054 // Ver.: since ha-1.2-05-3520-29
#define ATTR_BATTERY_2_ALARM_MASK_ATTRIBUTE_ID                         0x0055 // Ver.: since ha-1.2-05-3520-29
#define ATTR_BATTERY_2_VOLTAGE_MIN_THRESHOLD_ATTRIBUTE_ID              0x0056 // Ver.: since ha-1.2-05-3520-29
#define ATTR_BATTERY_2_VOLTAGE_THRESHOLD_1_ATTRIBUTE_ID                0x0057 // Ver.: since ha-1.2-05-3520-29
#define ATTR_BATTERY_2_VOLTAGE_THRESHOLD_2_ATTRIBUTE_ID                0x0058 // Ver.: since ha-1.2-05-3520-29
#define ATTR_BATTERY_2_VOLTAGE_THRESHOLD_3_ATTRIBUTE_ID                0x0059 // Ver.: since ha-1.2-05-3520-29
#define ATTR_BATTERY_2_PERCENTAGE_MIN_THRESHOLD_ATTRIBUTE_ID           0x005A // Ver.: since ha-1.2-05-3520-29
#define ATTR_BATTERY_2_PERCENTAGE_THRESHOLD_1_ATTRIBUTE_ID             0x005B // Ver.: since ha-1.2-05-3520-29
#define ATTR_BATTERY_2_PERCENTAGE_THRESHOLD_2_ATTRIBUTE_ID             0x005C // Ver.: since ha-1.2-05-3520-29
#define ATTR_BATTERY_2_PERCENTAGE_THRESHOLD_3_ATTRIBUTE_ID             0x005D // Ver.: since ha-1.2-05-3520-29
#define ATTR_BATTERY_2_ALARM_STATE_ATTRIBUTE_ID                        0x005E // Ver.: since ha-1.2-05-3520-29
#define ATTR_BATTERY_3_VOLTAGE_ATTRIBUTE_ID                            0x0060 // Ver.: since ha-1.2-05-3520-29
#define ATTR_BATTERY_3_PERCENTAGE_REMAINING_ATTRIBUTE_ID               0x0061 // Ver.: since ha-1.2-05-3520-29
#define ATTR_BATTERY_3_MANUFACTURER_ATTRIBUTE_ID                       0x0070 // Ver.: since ha-1.2-05-3520-29
#define ATTR_BATTERY_3_SIZE_ATTRIBUTE_ID                               0x0071 // Ver.: since ha-1.2-05-3520-29
#define ATTR_BATTERY_3_AHR_RATING_ATTRIBUTE_ID                         0x0072 // Ver.: since ha-1.2-05-3520-29
#define ATTR_BATTERY_3_QUANTITY_ATTRIBUTE_ID                           0x0073 // Ver.: since ha-1.2-05-3520-29
#define ATTR_BATTERY_3_RATED_VOLTAGE_ATTRIBUTE_ID                      0x0074 // Ver.: since ha-1.2-05-3520-29
#define ATTR_BATTERY_3_ALARM_MASK_ATTRIBUTE_ID                         0x0075 // Ver.: since ha-1.2-05-3520-29
#define ATTR_BATTERY_3_VOLTAGE_MIN_THRESHOLD_ATTRIBUTE_ID              0x0076 // Ver.: since ha-1.2-05-3520-29
#define ATTR_BATTERY_3_VOLTAGE_THRESHOLD_1_ATTRIBUTE_ID                0x0077 // Ver.: since ha-1.2-05-3520-29
#define ATTR_BATTERY_3_VOLTAGE_THRESHOLD_2_ATTRIBUTE_ID                0x0078 // Ver.: since ha-1.2-05-3520-29
#define ATTR_BATTERY_3_VOLTAGE_THRESHOLD_3_ATTRIBUTE_ID                0x0079 // Ver.: since ha-1.2-05-3520-29
#define ATTR_BATTERY_3_PERCENTAGE_MIN_THRESHOLD_ATTRIBUTE_ID           0x007A // Ver.: since ha-1.2-05-3520-29
#define ATTR_BATTERY_3_PERCENTAGE_THRESHOLD_1_ATTRIBUTE_ID             0x007B // Ver.: since ha-1.2-05-3520-29
#define ATTR_BATTERY_3_PERCENTAGE_THRESHOLD_2_ATTRIBUTE_ID             0x007C // Ver.: since ha-1.2-05-3520-29
#define ATTR_BATTERY_3_PERCENTAGE_THRESHOLD_3_ATTRIBUTE_ID             0x007D // Ver.: since ha-1.2-05-3520-29
#define ATTR_BATTERY_3_ALARM_STATE_ATTRIBUTE_ID                        0x007E // Ver.: since ha-1.2-05-3520-29
#define ATTR_POWER_CONFIG_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_POWER_CONFIG_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Device Temperature Configuration
// Cluster specification level: zcl-7.0-07-5123-07

// Client attributes
#define ATTR_DEVICE_TEMP_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_DEVICE_TEMP_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_CURRENT_TEMPERATURE_ATTRIBUTE_ID                         0x0000 // Ver.: always
#define ATTR_MIN_TEMP_EXPERIENCED_ATTRIBUTE_ID                        0x0001 // Ver.: always
#define ATTR_MAX_TEMP_EXPERIENCED_ATTRIBUTE_ID                        0x0002 // Ver.: always
#define ATTR_OVER_TEMP_TOTAL_DWELL_ATTRIBUTE_ID                       0x0003 // Ver.: always
#define ATTR_DEVICE_TEMP_ALARM_MASK_ATTRIBUTE_ID                      0x0010 // Ver.: always
#define ATTR_LOW_TEMP_THRESHOLD_ATTRIBUTE_ID                          0x0011 // Ver.: always
#define ATTR_HIGH_TEMP_THRESHOLD_ATTRIBUTE_ID                         0x0012 // Ver.: always
#define ATTR_LOW_TEMP_DWELL_TRIP_POINT_ATTRIBUTE_ID                   0x0013 // Ver.: always
#define ATTR_HIGH_TEMP_DWELL_TRIP_POINT_ATTRIBUTE_ID                  0x0014 // Ver.: always
#define ATTR_DEVICE_TEMP_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_DEVICE_TEMP_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Identify
// Cluster specification level: zcl-7.0-07-5123-07

// Client attributes
#define ATTR_IDENTIFY_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_IDENTIFY_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_IDENTIFY_TIME_ATTRIBUTE_ID                            0x0000 // Ver.: always
#define ATTR_COMMISSION_STATE_ATTRIBUTE_ID                         0x0001 // Ver.: always
#define ATTR_IDENTIFY_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_IDENTIFY_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Groups
// Cluster specification level: zcl-7.0-07-5123-07

// Client attributes
#define ATTR_GROUPS_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_GROUPS_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_GROUP_NAME_SUPPORT_ATTRIBUTE_ID                     0x0000 // Ver.: always
#define ATTR_GROUPS_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_GROUPS_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Scenes
// Cluster specification level: zcl-7.0-07-5123-07

// Client attributes
#define ATTR_SCENES_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_SCENES_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_SCENE_COUNT_ATTRIBUTE_ID                            0x0000 // Ver.: always
#define ATTR_CURRENT_SCENE_ATTRIBUTE_ID                          0x0001 // Ver.: always
#define ATTR_CURRENT_GROUP_ATTRIBUTE_ID                          0x0002 // Ver.: always
#define ATTR_SCENE_VALID_ATTRIBUTE_ID                            0x0003 // Ver.: always
#define ATTR_SCENE_NAME_SUPPORT_ATTRIBUTE_ID                     0x0004 // Ver.: always
#define ATTR_LAST_CONFIGURED_BY_ATTRIBUTE_ID                     0x0005 // Ver.: always
#define ATTR_SCENES_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_SCENES_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: On/off
// Cluster specification level: zcl-7.0-07-5123-07

// Client attributes
#define ATTR_ON_OFF_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_ON_OFF_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_ON_OFF_ATTRIBUTE_ID                                 0x0000 // Ver.: always
#define ATTR_SAMPLE_MFG_SPECIFIC_TRANSITION_TIME_ATTRIBUTE_ID    0x0000 // Ver.: always
#define ATTR_GLOBAL_SCENE_CONTROL_ATTRIBUTE_ID                   0x4000 // Ver.: since zll-1.0-11-0037-10
#define ATTR_ON_TIME_ATTRIBUTE_ID                                0x4001 // Ver.: since zll-1.0-11-0037-10
#define ATTR_OFF_WAIT_TIME_ATTRIBUTE_ID                          0x4002 // Ver.: since zll-1.0-11-0037-10
#define ATTR_START_UP_ON_OFF_ATTRIBUTE_ID                        0x4003 // Ver.: since l&o-1.0-15-0014-04
#define ATTR_ON_OFF_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_ON_OFF_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: On/off Switch Configuration
// Cluster specification level: zcl-7.0-07-5123-07

// Client attributes
#define ATTR_ON_OFF_SWITCH_CONFIG_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_ON_OFF_SWITCH_CONFIG_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_SWITCH_TYPE_ATTRIBUTE_ID                                          0x0000 // Ver.: always
#define ATTR_SWITCH_ACTIONS_ATTRIBUTE_ID                                       0x0010 // Ver.: always
#define ATTR_ON_OFF_SWITCH_CONFIG_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_ON_OFF_SWITCH_CONFIG_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Level Control
// Cluster specification level: zcl-7.0-07-5123-07

// Client attributes
#define ATTR_LEVEL_CONTROL_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_LEVEL_CONTROL_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_CURRENT_LEVEL_ATTRIBUTE_ID                                 0x0000 // Ver.: always
#define ATTR_LEVEL_CONTROL_REMAINING_TIME_ATTRIBUTE_ID                  0x0001 // Ver.: always
#define ATTR_OPTIONS_ATTRIBUTE_ID                                       0x000F // Ver.: since l&o-1.0-15-0014-04
#define ATTR_ON_OFF_TRANSITION_TIME_ATTRIBUTE_ID                        0x0010 // Ver.: always
#define ATTR_ON_LEVEL_ATTRIBUTE_ID                                      0x0011 // Ver.: always
#define ATTR_ON_TRANSITION_TIME_ATTRIBUTE_ID                            0x0012 // Ver.: since ha-1.2-05-3520-29
#define ATTR_OFF_TRANSITION_TIME_ATTRIBUTE_ID                           0x0013 // Ver.: since ha-1.2-05-3520-29
#define ATTR_DEFAULT_MOVE_RATE_ATTRIBUTE_ID                             0x0014 // Ver.: since ha-1.2-05-3520-29
#define ATTR_START_UP_CURRENT_LEVEL_ATTRIBUTE_ID                        0x4000 // Ver.: since l&o-1.0-15-0014-04
#define ATTR_LEVEL_CONTROL_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_LEVEL_CONTROL_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Alarms
// Cluster specification level: zcl-7.0-07-5123-07

// Client attributes
#define ATTR_ALARM_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_ALARM_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_ALARM_COUNT_ATTRIBUTE_ID                           0x0000 // Ver.: always
#define ATTR_ALARM_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_ALARM_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Time
// Cluster specification level: zcl-7.0-07-5123-07

// Client attributes
#define ATTR_TIME_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_TIME_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_TIME_ATTRIBUTE_ID                                 0x0000 // Ver.: always
#define ATTR_TIME_STATUS_ATTRIBUTE_ID                          0x0001 // Ver.: always
#define ATTR_TIME_ZONE_ATTRIBUTE_ID                            0x0002 // Ver.: always
#define ATTR_DST_START_ATTRIBUTE_ID                            0x0003 // Ver.: always
#define ATTR_DST_END_ATTRIBUTE_ID                              0x0004 // Ver.: always
#define ATTR_DST_SHIFT_ATTRIBUTE_ID                            0x0005 // Ver.: always
#define ATTR_STANDARD_TIME_ATTRIBUTE_ID                        0x0006 // Ver.: always
#define ATTR_LOCAL_TIME_ATTRIBUTE_ID                           0x0007 // Ver.: always
#define ATTR_LAST_SET_TIME_ATTRIBUTE_ID                        0x0008 // Ver.: always
#define ATTR_VALID_UNTIL_TIME_ATTRIBUTE_ID                     0x0009 // Ver.: always
#define ATTR_TIME_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_TIME_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: RSSI Location
// Cluster specification level: zcl-7.0-07-5123-07

// Client attributes
#define ATTR_RSSI_LOCATION_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_RSSI_LOCATION_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_LOCATION_TYPE_ATTRIBUTE_ID                                 0x0000 // Ver.: always
#define ATTR_LOCATION_METHOD_ATTRIBUTE_ID                               0x0001 // Ver.: always
#define ATTR_LOCATION_AGE_ATTRIBUTE_ID                                  0x0002 // Ver.: always
#define ATTR_QUALITY_MEASURE_ATTRIBUTE_ID                               0x0003 // Ver.: always
#define ATTR_NUMBER_OF_DEVICES_ATTRIBUTE_ID                             0x0004 // Ver.: always
#define ATTR_COORDINATE1_ATTRIBUTE_ID                                   0x0010 // Ver.: always
#define ATTR_COORDINATE2_ATTRIBUTE_ID                                   0x0011 // Ver.: always
#define ATTR_COORDINATE3_ATTRIBUTE_ID                                   0x0012 // Ver.: always
#define ATTR_POWER_ATTRIBUTE_ID                                         0x0013 // Ver.: always
#define ATTR_PATH_LOSS_EXPONENT_ATTRIBUTE_ID                            0x0014 // Ver.: always
#define ATTR_REPORTING_PERIOD_ATTRIBUTE_ID                              0x0015 // Ver.: always
#define ATTR_CALCULATION_PERIOD_ATTRIBUTE_ID                            0x0016 // Ver.: always
#define ATTR_NUMBER_RSSI_MEASUREMENTS_ATTRIBUTE_ID                      0x0017 // Ver.: always
#define ATTR_RSSI_LOCATION_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_RSSI_LOCATION_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Binary Input (Basic)
// Cluster specification level: zcl-7.0-07-5123-07

// Client attributes
#define ATTR_BINARY_INPUT_BASIC_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_BINARY_INPUT_BASIC_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_ACTIVE_TEXT_ATTRIBUTE_ID                                        0x0004 // Ver.: always
#define ATTR_DESCRIPTION_ATTRIBUTE_ID                                        0x001C // Ver.: always
#define ATTR_INACTIVE_TEXT_ATTRIBUTE_ID                                      0x002E // Ver.: always
#define ATTR_OUT_OF_SERVICE_ATTRIBUTE_ID                                     0x0051 // Ver.: always
#define ATTR_POLARITY_ATTRIBUTE_ID                                           0x0054 // Ver.: always
#define ATTR_PRESENT_VALUE_ATTRIBUTE_ID                                      0x0055 // Ver.: always
#define ATTR_RELIABILITY_ATTRIBUTE_ID                                        0x0067 // Ver.: always
#define ATTR_STATUS_FLAGS_ATTRIBUTE_ID                                       0x006F // Ver.: always
#define ATTR_APPLICATION_TYPE_ATTRIBUTE_ID                                   0x0100 // Ver.: always
#define ATTR_BINARY_INPUT_BASIC_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_BINARY_INPUT_BASIC_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Commissioning
// Cluster specification level: zcl-7.0-07-5123-07

// Client attributes
#define ATTR_COMMISSIONING_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_COMMISSIONING_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_SHORT_ADDRESS_ATTRIBUTE_ID                                 0x0000 // Ver.: always
#define ATTR_EXTENDED_PAN_ID_ATTRIBUTE_ID                               0x0001 // Ver.: always
#define ATTR_PAN_ID_ATTRIBUTE_ID                                        0x0002 // Ver.: always
#define ATTR_CHANNEL_MASK_ATTRIBUTE_ID                                  0x0003 // Ver.: always
#define ATTR_PROTOCOL_VERSION_ATTRIBUTE_ID                              0x0004 // Ver.: always
#define ATTR_STACK_PROFILE_ATTRIBUTE_ID                                 0x0005 // Ver.: always
#define ATTR_STARTUP_CONTROL_ATTRIBUTE_ID                               0x0006 // Ver.: always
#define ATTR_TRUST_CENTER_ADDRESS_ATTRIBUTE_ID                          0x0010 // Ver.: always
#define ATTR_TRUST_CENTER_MASTER_KEY_ATTRIBUTE_ID                       0x0011 // Ver.: always
#define ATTR_NETWORK_KEY_ATTRIBUTE_ID                                   0x0012 // Ver.: always
#define ATTR_USE_INSECURE_JOIN_ATTRIBUTE_ID                             0x0013 // Ver.: always
#define ATTR_PRECONFIGURED_LINK_KEY_ATTRIBUTE_ID                        0x0014 // Ver.: always
#define ATTR_NETWORK_KEY_SEQUENCE_NUMBER_ATTRIBUTE_ID                   0x0015 // Ver.: always
#define ATTR_NETWORK_KEY_TYPE_ATTRIBUTE_ID                              0x0016 // Ver.: always
#define ATTR_NETWORK_MANAGER_ADDRESS_ATTRIBUTE_ID                       0x0017 // Ver.: always
#define ATTR_SCAN_ATTEMPTS_ATTRIBUTE_ID                                 0x0020 // Ver.: always
#define ATTR_TIME_BETWEEN_SCANS_ATTRIBUTE_ID                            0x0021 // Ver.: always
#define ATTR_REJOIN_INTERVAL_ATTRIBUTE_ID                               0x0022 // Ver.: always
#define ATTR_MAX_REJOIN_INTERVAL_ATTRIBUTE_ID                           0x0023 // Ver.: always
#define ATTR_INDIRECT_POLL_RATE_ATTRIBUTE_ID                            0x0030 // Ver.: always
#define ATTR_PARENT_RETRY_THRESHOLD_ATTRIBUTE_ID                        0x0031 // Ver.: always
#define ATTR_CONCENTRATOR_FLAG_ATTRIBUTE_ID                             0x0040 // Ver.: always
#define ATTR_CONCENTRATOR_RADIUS_ATTRIBUTE_ID                           0x0041 // Ver.: always
#define ATTR_CONCENTRATOR_DISCOVERY_TIME_ATTRIBUTE_ID                   0x0042 // Ver.: always
#define ATTR_COMMISSIONING_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_COMMISSIONING_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Partition
// Cluster specification level: zcl-7.0-07-5123-07

// Client attributes
#define ATTR_PARTITION_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_PARTITION_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_PARTITION_MAXIMUM_INCOMING_TRANSFER_SIZE_ATTRIBUTE_ID  0x0000 // Ver.: always
#define ATTR_PARTITION_MAXIMUM_OUTGOING_TRANSFER_SIZE_ATTRIBUTE_ID  0x0001 // Ver.: always
#define ATTR_PARTIONED_FRAME_SIZE_ATTRIBUTE_ID                      0x0002 // Ver.: always
#define ATTR_LARGE_FRAME_SIZE_ATTRIBUTE_ID                          0x0003 // Ver.: always
#define ATTR_NUMBER_OF_ACK_FRAME_ATTRIBUTE_ID                       0x0004 // Ver.: always
#define ATTR_NACK_TIMEOUT_ATTRIBUTE_ID                              0x0005 // Ver.: always
#define ATTR_INTERFRAME_DELAY_ATTRIBUTE_ID                          0x0006 // Ver.: always
#define ATTR_NUMBER_OF_SEND_RETRIES_ATTRIBUTE_ID                    0x0007 // Ver.: always
#define ATTR_SENDER_TIMEOUT_ATTRIBUTE_ID                            0x0008 // Ver.: always
#define ATTR_RECEIVER_TIMEOUT_ATTRIBUTE_ID                          0x0009 // Ver.: always
#define ATTR_PARTITION_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_PARTITION_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Over the Air Bootloading
// Cluster specification level: zcl-7.0-07-5123-07

// Client attributes
#define ATTR_UPGRADE_SERVER_ID_ATTRIBUTE_ID                            0x0000 // Ver.: always
#define ATTR_FILE_OFFSET_ATTRIBUTE_ID                                  0x0001 // Ver.: always
#define ATTR_CURRENT_FILE_VERSION_ATTRIBUTE_ID                         0x0002 // Ver.: always
#define ATTR_CURRENT_ZIGBEE_STACK_VERSION_ATTRIBUTE_ID                 0x0003 // Ver.: always
#define ATTR_DOWNLOADED_FILE_VERSION_ATTRIBUTE_ID                      0x0004 // Ver.: always
#define ATTR_DOWNLOADED_ZIGBEE_STACK_VERSION_ATTRIBUTE_ID              0x0005 // Ver.: always
#define ATTR_IMAGE_UPGRADE_STATUS_ATTRIBUTE_ID                         0x0006 // Ver.: always
#define ATTR_MANUFACTURER_ID_ATTRIBUTE_ID                              0x0007 // Ver.: always
#define ATTR_IMAGE_TYPE_ID_ATTRIBUTE_ID                                0x0008 // Ver.: always
#define ATTR_MINIMUM_BLOCK_REQUEST_PERIOD_ATTRIBUTE_ID                 0x0009 // Ver.: since ha-1.2-05-3520-29
#define ATTR_IMAGE_STAMP_ATTRIBUTE_ID                                  0x000A // Ver.: since ha-1.2-05-3520-29
#define ATTR_UPGRADE_ACTIVATION_POLICY_ATTRIBUTE_ID                    0x000B // Ver.: since se-1.2b-15-0131-02
#define ATTR_UPGRADE_TIMEOUT_POLICY_ATTRIBUTE_ID                       0x000C // Ver.: since se-1.2b-15-0131-02
#define ATTR_OTA_BOOTLOAD_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_OTA_BOOTLOAD_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_OTA_BOOTLOAD_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_OTA_BOOTLOAD_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Power Profile
// Cluster specification level: zcl-7.0-07-5123-07

// Client attributes
#define ATTR_POWER_PROFILE_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_POWER_PROFILE_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_TOTAL_PROFILE_NUM_ATTRIBUTE_ID                             0x0000 // Ver.: always
#define ATTR_MULTIPLE_SCHEDULING_ATTRIBUTE_ID                           0x0001 // Ver.: always
#define ATTR_ENERGY_FORMATTING_ATTRIBUTE_ID                             0x0002 // Ver.: always
#define ATTR_ENERGY_REMOTE_ATTRIBUTE_ID                                 0x0003 // Ver.: always
#define ATTR_SCHEDULE_MODE_ATTRIBUTE_ID                                 0x0004 // Ver.: always
#define ATTR_POWER_PROFILE_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_POWER_PROFILE_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Appliance Control
// Cluster specification level: zcl-7.0-07-5123-07

// Client attributes
#define ATTR_APPLIANCE_CONTROL_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_APPLIANCE_CONTROL_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_START_TIME_ATTRIBUTE_ID                                        0x0000 // Ver.: always
#define ATTR_FINISH_TIME_ATTRIBUTE_ID                                       0x0001 // Ver.: always
#define ATTR_REMAINING_TIME_ATTRIBUTE_ID                                    0x0002 // Ver.: always
#define ATTR_APPLIANCE_CONTROL_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_APPLIANCE_CONTROL_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Poll Control
// Cluster specification level: zcl-7.0-07-5123-07

// Client attributes
#define ATTR_POLL_CONTROL_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_POLL_CONTROL_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_CHECK_IN_INTERVAL_ATTRIBUTE_ID                            0x0000 // Ver.: always
#define ATTR_LONG_POLL_INTERVAL_ATTRIBUTE_ID                           0x0001 // Ver.: always
#define ATTR_SHORT_POLL_INTERVAL_ATTRIBUTE_ID                          0x0002 // Ver.: always
#define ATTR_FAST_POLL_TIMEOUT_ATTRIBUTE_ID                            0x0003 // Ver.: always
#define ATTR_CHECK_IN_INTERVAL_MIN_ATTRIBUTE_ID                        0x0004 // Ver.: always
#define ATTR_LONG_POLL_INTERVAL_MIN_ATTRIBUTE_ID                       0x0005 // Ver.: always
#define ATTR_FAST_POLL_TIMEOUT_MAX_ATTRIBUTE_ID                        0x0006 // Ver.: always
#define ATTR_POLL_CONTROL_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_POLL_CONTROL_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Green Power
// Cluster specification level: gp-1.0a-09-5499-26

// Client attributes
#define ATTR_GP_CLIENT_GPP_MAX_PROXY_TABLE_ENTRIES_ATTRIBUTE_ID       0x0010 // Ver.: since gp-1.0-09-5499-24
#define ATTR_GP_CLIENT_PROXY_TABLE_ATTRIBUTE_ID                       0x0011 // Ver.: since gp-1.0-09-5499-24
#define ATTR_GP_CLIENT_GPP_NOTIFICATION_RETRY_NUMBER_ATTRIBUTE_ID     0x0012 // Ver.: since gp-1.0-09-5499-24
#define ATTR_GP_CLIENT_GPP_NOTIFICATION_RETRY_TIMER_ATTRIBUTE_ID      0x0013 // Ver.: since gp-1.0-09-5499-24
#define ATTR_GP_CLIENT_GPP_MAX_SEARCH_COUNTER_ATTRIBUTE_ID            0x0014 // Ver.: since gp-1.0-09-5499-24
#define ATTR_GP_CLIENT_GPP_BLOCKED_GPD_ID_ATTRIBUTE_ID                0x0015 // Ver.: since gp-1.0-09-5499-24
#define ATTR_GP_CLIENT_GPP_FUNCTIONALITY_ATTRIBUTE_ID                 0x0016 // Ver.: since gp-1.0-09-5499-24
#define ATTR_GP_CLIENT_GPP_ACTIVE_FUNCTIONALITY_ATTRIBUTE_ID          0x0017 // Ver.: since gp-1.0-09-5499-24
#define ATTR_GP_CLIENT_GP_SHARED_SECURITY_KEY_TYPE_ATTRIBUTE_ID       0x0020 // Ver.: since gp-1.0-09-5499-24
#define ATTR_GP_CLIENT_GP_SHARED_SECURITY_KEY_ATTRIBUTE_ID            0x0021 // Ver.: since gp-1.0-09-5499-24
#define ATTR_GP_CLIENT_GP_LINK_KEY_ATTRIBUTE_ID                       0x0022 // Ver.: since gp-1.0-09-5499-24
#define ATTR_GREEN_POWER_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_GREEN_POWER_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_GP_SERVER_GPS_MAX_SINK_TABLE_ENTRIES_ATTRIBUTE_ID        0x0000 // Ver.: since gp-1.0-09-5499-24
#define ATTR_GP_SERVER_SINK_TABLE_ATTRIBUTE_ID                        0x0001 // Ver.: since gp-1.0-09-5499-24
#define ATTR_GP_SERVER_GPS_COMMUNICATION_MODE_ATTRIBUTE_ID            0x0002 // Ver.: since gp-1.0-09-5499-24
#define ATTR_GP_SERVER_GPS_COMMISSIONING_EXIT_MODE_ATTRIBUTE_ID       0x0003 // Ver.: since gp-1.0-09-5499-24
#define ATTR_GP_SERVER_GPS_COMMISSIONING_WINDOW_ATTRIBUTE_ID          0x0004 // Ver.: since gp-1.0-09-5499-24
#define ATTR_GP_SERVER_GPS_SECURITY_LEVEL_ATTRIBUTE_ID                0x0005 // Ver.: since gp-1.0-09-5499-24
#define ATTR_GP_SERVER_GPS_FUNCTIONALITY_ATTRIBUTE_ID                 0x0006 // Ver.: since gp-1.0-09-5499-24
#define ATTR_GP_SERVER_GPS_ACTIVE_FUNCTIONALITY_ATTRIBUTE_ID          0x0007 // Ver.: since gp-1.0-09-5499-24
#define ATTR_GP_SERVER_GP_SHARED_SECURITY_KEY_TYPE_ATTRIBUTE_ID       0x0020 // Ver.: since gp-1.0-09-5499-24
#define ATTR_GP_SERVER_GP_SHARED_SECURITY_KEY_ATTRIBUTE_ID            0x0021 // Ver.: since gp-1.0-09-5499-24
#define ATTR_GP_SERVER_GP_LINK_KEY_ATTRIBUTE_ID                       0x0022 // Ver.: since gp-1.0-09-5499-24
#define ATTR_GREEN_POWER_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_GREEN_POWER_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Keep-Alive
// Cluster specification level: se-1.2b-15-0131-02

// Client attributes
#define ATTR_KEEPALIVE_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_KEEPALIVE_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_KEEPALIVE_BASE_ATTRIBUTE_ID                            0x0000 // Ver.: since se-1.2b-15-0131-02
#define ATTR_KEEPALIVE_JITTER_ATTRIBUTE_ID                          0x0001 // Ver.: since se-1.2b-15-0131-02
#define ATTR_KEEPALIVE_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_KEEPALIVE_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Shade Configuration
// Cluster specification level: zcl-6.0-15-02018-001

// Client attributes
#define ATTR_SHADE_CONFIG_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_SHADE_CONFIG_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_SHADE_CONFIG_PHYSICAL_CLOSED_LIMIT_ATTRIBUTE_ID           0x0000 // Ver.: always
#define ATTR_SHADE_CONFIG_MOTOR_STEP_SIZE_ATTRIBUTE_ID                 0x0001 // Ver.: always
#define ATTR_SHADE_CONFIG_STATUS_ATTRIBUTE_ID                          0x0002 // Ver.: always
#define ATTR_SHADE_CONFIG_CLOSED_LIMIT_ATTRIBUTE_ID                    0x0010 // Ver.: always
#define ATTR_SHADE_CONFIG_MODE_ATTRIBUTE_ID                            0x0011 // Ver.: always
#define ATTR_SHADE_CONFIG_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_SHADE_CONFIG_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Door Lock
// Cluster specification level: zcl-6.0-15-02018-001

// Client attributes
#define ATTR_DOOR_LOCK_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_DOOR_LOCK_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_LOCK_STATE_ATTRIBUTE_ID                                0x0000 // Ver.: always
#define ATTR_LOCK_TYPE_ATTRIBUTE_ID                                 0x0001 // Ver.: always
#define ATTR_ACTUATOR_ENABLED_ATTRIBUTE_ID                          0x0002 // Ver.: always
#define ATTR_DOOR_STATE_ATTRIBUTE_ID                                0x0003 // Ver.: always
#define ATTR_DOOR_OPEN_EVENTS_ATTRIBUTE_ID                          0x0004 // Ver.: always
#define ATTR_DOOR_CLOSED_EVENTS_ATTRIBUTE_ID                        0x0005 // Ver.: always
#define ATTR_OPEN_PERIOD_ATTRIBUTE_ID                               0x0006 // Ver.: always
#define ATTR_NUM_LOCK_RECORDS_SUPPORTED_ATTRIBUTE_ID                0x0010 // Ver.: since ha-1.2-05-3520-29
#define ATTR_NUM_TOTAL_USERS_SUPPORTED_ATTRIBUTE_ID                 0x0011 // Ver.: since ha-1.2-05-3520-29
#define ATTR_NUM_PIN_USERS_SUPPORTED_ATTRIBUTE_ID                   0x0012 // Ver.: since ha-1.2-05-3520-29
#define ATTR_NUM_RFID_USERS_SUPPORTED_ATTRIBUTE_ID                  0x0013 // Ver.: since ha-1.2-05-3520-29
#define ATTR_NUM_WEEKDAY_SCHEDULES_SUPPORTED_PER_USER_ATTRIBUTE_ID  0x0014 // Ver.: since ha-1.2-05-3520-29
#define ATTR_NUM_YEARDAY_SCHEDULES_SUPPORTED_PER_USER_ATTRIBUTE_ID  0x0015 // Ver.: since ha-1.2-05-3520-29
#define ATTR_NUM_HOLIDAY_SCHEDULES_SUPPORTED_PER_USER_ATTRIBUTE_ID  0x0016 // Ver.: since ha-1.2-05-3520-29
#define ATTR_MAX_PIN_LENGTH_ATTRIBUTE_ID                            0x0017 // Ver.: since ha-1.2-05-3520-29
#define ATTR_MIN_PIN_LENGTH_ATTRIBUTE_ID                            0x0018 // Ver.: since ha-1.2-05-3520-29
#define ATTR_MAX_RFID_CODE_LENGTH_ATTRIBUTE_ID                      0x0019 // Ver.: since ha-1.2-05-3520-29
#define ATTR_MIN_RFID_CODE_LENGTH_ATTRIBUTE_ID                      0x001A // Ver.: since ha-1.2-05-3520-29
#define ATTR_ENABLE_LOGGING_ATTRIBUTE_ID                            0x0020 // Ver.: since ha-1.2-05-3520-29
#define ATTR_LANGUAGE_ATTRIBUTE_ID                                  0x0021 // Ver.: since ha-1.2-05-3520-29
#define ATTR_LED_SETTINGS_ATTRIBUTE_ID                              0x0022 // Ver.: since ha-1.2-05-3520-29
#define ATTR_AUTO_RELOCK_TIME_ATTRIBUTE_ID                          0x0023 // Ver.: since ha-1.2-05-3520-29
#define ATTR_SOUND_VOLUME_ATTRIBUTE_ID                              0x0024 // Ver.: since ha-1.2-05-3520-29
#define ATTR_OPERATING_MODE_ATTRIBUTE_ID                            0x0025 // Ver.: since ha-1.2-05-3520-29
#define ATTR_SUPPORTED_OPERATING_MODES_ATTRIBUTE_ID                 0x0026 // Ver.: since ha-1.2-05-3520-29
#define ATTR_DEFAULT_CONFIGURATION_REGISTER_ATTRIBUTE_ID            0x0027 // Ver.: since ha-1.2-05-3520-29
#define ATTR_ENABLE_LOCAL_PROGRAMMING_ATTRIBUTE_ID                  0x0028 // Ver.: since ha-1.2-05-3520-29
#define ATTR_ENABLE_ONE_TOUCH_LOCKING_ATTRIBUTE_ID                  0x0029 // Ver.: since ha-1.2-05-3520-29
#define ATTR_ENABLE_INSIDE_STATUS_LED_ATTRIBUTE_ID                  0x002A // Ver.: since ha-1.2-05-3520-29
#define ATTR_ENABLE_PRIVACY_MODE_BUTTON_ATTRIBUTE_ID                0x002B // Ver.: since ha-1.2-05-3520-29
#define ATTR_WRONG_CODE_ENTRY_LIMIT_ATTRIBUTE_ID                    0x0030 // Ver.: since ha-1.2-05-3520-29
#define ATTR_USER_CODE_TEMPORARY_DISABLE_TIME_ATTRIBUTE_ID          0x0031 // Ver.: since ha-1.2-05-3520-29
#define ATTR_SEND_PIN_OVER_THE_AIR_ATTRIBUTE_ID                     0x0032 // Ver.: since ha-1.2-05-3520-29
#define ATTR_REQUIRE_PIN_FOR_RF_OPERATION_ATTRIBUTE_ID              0x0033 // Ver.: since ha-1.2-05-3520-29
#define ATTR_ZIGBEE_SECURITY_LEVEL_ATTRIBUTE_ID                     0x0034 // Ver.: since ha-1.2-05-3520-29
#define ATTR_DOOR_LOCK_ALARM_MASK_ATTRIBUTE_ID                      0x0040 // Ver.: since ha-1.2-05-3520-29
#define ATTR_KEYPAD_OPERATION_EVENT_MASK_ATTRIBUTE_ID               0x0041 // Ver.: since ha-1.2-05-3520-29
#define ATTR_RF_OPERATION_EVENT_MASK_ATTRIBUTE_ID                   0x0042 // Ver.: since ha-1.2-05-3520-29
#define ATTR_MANUAL_OPERATION_EVENT_MASK_ATTRIBUTE_ID               0x0043 // Ver.: since ha-1.2-05-3520-29
#define ATTR_RFID_OPERATION_EVENT_MASK_ATTRIBUTE_ID                 0x0044 // Ver.: since ha-1.2-05-3520-29
#define ATTR_KEYPAD_PROGRAMMING_EVENT_MASK_ATTRIBUTE_ID             0x0045 // Ver.: since ha-1.2-05-3520-29
#define ATTR_RF_PROGRAMMING_EVENT_MASK_ATTRIBUTE_ID                 0x0046 // Ver.: since ha-1.2-05-3520-29
#define ATTR_RFID_PROGRAMMING_EVENT_MASK_ATTRIBUTE_ID               0x0047 // Ver.: since ha-1.2-05-3520-29
#define ATTR_DOOR_LOCK_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_DOOR_LOCK_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Window Covering
// Cluster specification level: zcl-6.0-15-02018-001

// Client attributes
#define ATTR_WINDOW_COVERING_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_WINDOW_COVERING_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_COVERING_TYPE_ATTRIBUTE_ID                                   0x0000 // Ver.: always
#define ATTR_LIMIT_LIFT_ATTRIBUTE_ID                                      0x0001 // Ver.: always
#define ATTR_LIMIT_TILT_ATTRIBUTE_ID                                      0x0002 // Ver.: always
#define ATTR_CURRENT_LIFT_ATTRIBUTE_ID                                    0x0003 // Ver.: always
#define ATTR_CURRENT_TILT_ATTRIBUTE_ID                                    0x0004 // Ver.: always
#define ATTR_NUMBER_LIFT_ATTRIBUTE_ID                                     0x0005 // Ver.: always
#define ATTR_NUMBER_TILT_ATTRIBUTE_ID                                     0x0006 // Ver.: always
#define ATTR_CONFIG_STATUS_ATTRIBUTE_ID                                   0x0007 // Ver.: always
#define ATTR_CURRENT_LIFT_PERCENTAGE_ATTRIBUTE_ID                         0x0008 // Ver.: always
#define ATTR_CURRENT_TILT_PERCENTAGE_ATTRIBUTE_ID                         0x0009 // Ver.: always
#define ATTR_OPEN_LIMIT_LIFT_ATTRIBUTE_ID                                 0x0010 // Ver.: always
#define ATTR_CLOSED_LIMIT_LIFT_ATTRIBUTE_ID                               0x0011 // Ver.: always
#define ATTR_OPEN_LIMIT_TILT_ATTRIBUTE_ID                                 0x0012 // Ver.: always
#define ATTR_CLOSED_LIMIT_TILT_ATTRIBUTE_ID                               0x0013 // Ver.: always
#define ATTR_VELOCITY_LIFT_ATTRIBUTE_ID                                   0x0014 // Ver.: always
#define ATTR_ACCELERATION_LIFT_ATTRIBUTE_ID                               0x0015 // Ver.: always
#define ATTR_DECELERATION_LIFT_ATTRIBUTE_ID                               0x0016 // Ver.: always
#define ATTR_MODE_ATTRIBUTE_ID                                            0x0017 // Ver.: always
#define ATTR_SETPOINTS_LIFT_ATTRIBUTE_ID                                  0x0018 // Ver.: always
#define ATTR_SETPOINTS_TILT_ATTRIBUTE_ID                                  0x0019 // Ver.: always
#define ATTR_WINDOW_COVERING_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_WINDOW_COVERING_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Barrier Control
// Cluster specification level: zcl-6.0-15-02018-001

// Client attributes
#define ATTR_BARRIER_CONTROL_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_BARRIER_CONTROL_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_BARRIER_MOVING_STATE_ATTRIBUTE_ID                            0x0001 // Ver.: always
#define ATTR_BARRIER_SAFETY_STATUS_ATTRIBUTE_ID                           0x0002 // Ver.: always
#define ATTR_BARRIER_CAPABILITIES_ATTRIBUTE_ID                            0x0003 // Ver.: always
#define ATTR_BARRIER_OPEN_EVENTS_ATTRIBUTE_ID                             0x0004 // Ver.: always
#define ATTR_BARRIER_CLOSE_EVENTS_ATTRIBUTE_ID                            0x0005 // Ver.: always
#define ATTR_BARRIER_COMMAND_OPEN_EVENTS_ATTRIBUTE_ID                     0x0006 // Ver.: always
#define ATTR_BARRIER_COMMAND_CLOSE_EVENTS_ATTRIBUTE_ID                    0x0007 // Ver.: always
#define ATTR_BARRIER_OPEN_PERIOD_ATTRIBUTE_ID                             0x0008 // Ver.: always
#define ATTR_BARRIER_CLOSE_PERIOD_ATTRIBUTE_ID                            0x0009 // Ver.: always
#define ATTR_BARRIER_POSITION_ATTRIBUTE_ID                                0x000A // Ver.: always
#define ATTR_BARRIER_CONTROL_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_BARRIER_CONTROL_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Pump Configuration and Control
// Cluster specification level: zcl-6.0-15-02018-001

// Client attributes
#define ATTR_PUMP_CONFIG_CONTROL_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_PUMP_CONFIG_CONTROL_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_MAX_PRESSURE_ATTRIBUTE_ID                                        0x0000 // Ver.: always
#define ATTR_MAX_SPEED_ATTRIBUTE_ID                                           0x0001 // Ver.: always
#define ATTR_MAX_FLOW_ATTRIBUTE_ID                                            0x0002 // Ver.: always
#define ATTR_MIN_CONST_PRESSURE_ATTRIBUTE_ID                                  0x0003 // Ver.: always
#define ATTR_MAX_CONST_PRESSURE_ATTRIBUTE_ID                                  0x0004 // Ver.: always
#define ATTR_MIN_COMP_PRESSURE_ATTRIBUTE_ID                                   0x0005 // Ver.: always
#define ATTR_MAX_COMP_PRESSURE_ATTRIBUTE_ID                                   0x0006 // Ver.: always
#define ATTR_MIN_CONST_SPEED_ATTRIBUTE_ID                                     0x0007 // Ver.: always
#define ATTR_MAX_CONST_SPEED_ATTRIBUTE_ID                                     0x0008 // Ver.: always
#define ATTR_MIN_CONST_FLOW_ATTRIBUTE_ID                                      0x0009 // Ver.: always
#define ATTR_MAX_CONST_FLOW_ATTRIBUTE_ID                                      0x000A // Ver.: always
#define ATTR_MIN_CONST_TEMP_ATTRIBUTE_ID                                      0x000B // Ver.: always
#define ATTR_MAX_CONST_TEMP_ATTRIBUTE_ID                                      0x000C // Ver.: always
#define ATTR_PUMP_STATUS_ATTRIBUTE_ID                                         0x0010 // Ver.: always
#define ATTR_EFFECTIVE_OPERATION_MODE_ATTRIBUTE_ID                            0x0011 // Ver.: always
#define ATTR_EFFECTIVE_CONTROL_MODE_ATTRIBUTE_ID                              0x0012 // Ver.: always
#define ATTR_CAPACITY_ATTRIBUTE_ID                                            0x0013 // Ver.: always
#define ATTR_SPEED_ATTRIBUTE_ID                                               0x0014 // Ver.: always
#define ATTR_LIFETIME_RUNNING_HOURS_ATTRIBUTE_ID                              0x0015 // Ver.: always
#define ATTR_PUMP_POWER_ATTRIBUTE_ID                                          0x0016 // Ver.: always
#define ATTR_LIFETIME_ENERGY_CONSUMED_ATTRIBUTE_ID                            0x0017 // Ver.: always
#define ATTR_OPERATION_MODE_ATTRIBUTE_ID                                      0x0020 // Ver.: always
#define ATTR_CONTROL_MODE_ATTRIBUTE_ID                                        0x0021 // Ver.: always
#define ATTR_PUMP_ALARM_MASK_ATTRIBUTE_ID                                     0x0022 // Ver.: always
#define ATTR_PUMP_CONFIG_CONTROL_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_PUMP_CONFIG_CONTROL_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Thermostat
// Cluster specification level: zcl-6.0-15-02018-001

// Client attributes
#define ATTR_THERMOSTAT_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_THERMOSTAT_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_LOCAL_TEMPERATURE_ATTRIBUTE_ID                          0x0000 // Ver.: always
#define ATTR_OUTDOOR_TEMPERATURE_ATTRIBUTE_ID                        0x0001 // Ver.: always
#define ATTR_THERMOSTAT_OCCUPANCY_ATTRIBUTE_ID                       0x0002 // Ver.: always
#define ATTR_ABS_MIN_HEAT_SETPOINT_LIMIT_ATTRIBUTE_ID                0x0003 // Ver.: always
#define ATTR_ABS_MAX_HEAT_SETPOINT_LIMIT_ATTRIBUTE_ID                0x0004 // Ver.: always
#define ATTR_ABS_MIN_COOL_SETPOINT_LIMIT_ATTRIBUTE_ID                0x0005 // Ver.: always
#define ATTR_ABS_MAX_COOL_SETPOINT_LIMIT_ATTRIBUTE_ID                0x0006 // Ver.: always
#define ATTR_PI_COOLING_DEMAND_ATTRIBUTE_ID                          0x0007 // Ver.: always
#define ATTR_PI_HEATING_DEMAND_ATTRIBUTE_ID                          0x0008 // Ver.: always
#define ATTR_HVAC_SYSTEM_TYPE_CONFIGURATION_ATTRIBUTE_ID             0x0009 // Ver.: since ha-1.2-05-3520-29
#define ATTR_LOCAL_TEMPERATURE_CALIBRATION_ATTRIBUTE_ID              0x0010 // Ver.: always
#define ATTR_OCCUPIED_COOLING_SETPOINT_ATTRIBUTE_ID                  0x0011 // Ver.: always
#define ATTR_OCCUPIED_HEATING_SETPOINT_ATTRIBUTE_ID                  0x0012 // Ver.: always
#define ATTR_UNOCCUPIED_COOLING_SETPOINT_ATTRIBUTE_ID                0x0013 // Ver.: always
#define ATTR_UNOCCUPIED_HEATING_SETPOINT_ATTRIBUTE_ID                0x0014 // Ver.: always
#define ATTR_MIN_HEAT_SETPOINT_LIMIT_ATTRIBUTE_ID                    0x0015 // Ver.: always
#define ATTR_MAX_HEAT_SETPOINT_LIMIT_ATTRIBUTE_ID                    0x0016 // Ver.: always
#define ATTR_MIN_COOL_SETPOINT_LIMIT_ATTRIBUTE_ID                    0x0017 // Ver.: always
#define ATTR_MAX_COOL_SETPOINT_LIMIT_ATTRIBUTE_ID                    0x0018 // Ver.: always
#define ATTR_MIN_SETPOINT_DEAD_BAND_ATTRIBUTE_ID                     0x0019 // Ver.: always
#define ATTR_REMOTE_SENSING_ATTRIBUTE_ID                             0x001A // Ver.: always
#define ATTR_CONTROL_SEQUENCE_OF_OPERATION_ATTRIBUTE_ID              0x001B // Ver.: always
#define ATTR_SYSTEM_MODE_ATTRIBUTE_ID                                0x001C // Ver.: always
#define ATTR_THERMOSTAT_ALARM_MASK_ATTRIBUTE_ID                      0x001D // Ver.: always
#define ATTR_THERMOSTAT_RUNNING_MODE_ATTRIBUTE_ID                    0x001E // Ver.: since ha-1.2-05-3520-29
#define ATTR_START_OF_WEEK_ATTRIBUTE_ID                              0x0020 // Ver.: since ha-1.2-05-3520-29
#define ATTR_NUMBER_OF_WEEKLY_TRANSITIONS_ATTRIBUTE_ID               0x0021 // Ver.: since ha-1.2-05-3520-29
#define ATTR_NUMBER_OF_DAILY_TRANSITIONS_ATTRIBUTE_ID                0x0022 // Ver.: since ha-1.2-05-3520-29
#define ATTR_TEMPERATURE_SETPOINT_HOLD_ATTRIBUTE_ID                  0x0023 // Ver.: since ha-1.2-05-3520-29
#define ATTR_TEMPERATURE_SETPOINT_HOLD_DURATION_ATTRIBUTE_ID         0x0024 // Ver.: since ha-1.2-05-3520-29
#define ATTR_THERMOSTAT_PROGRAMMING_OPERATION_MODE_ATTRIBUTE_ID      0x0025 // Ver.: since ha-1.2-05-3520-29
#define ATTR_THERMOSTAT_RUNNING_STATE_ATTRIBUTE_ID                   0x0029 // Ver.: since ha-1.2-05-3520-29
#define ATTR_SETPOINT_CHANGE_SOURCE_ATTRIBUTE_ID                     0x0030 // Ver.: since ha-1.2-05-3520-29
#define ATTR_SETPOINT_CHANGE_AMOUNT_ATTRIBUTE_ID                     0x0031 // Ver.: since ha-1.2-05-3520-29
#define ATTR_SETPOINT_CHANGE_SOURCE_TIMESTAMP_ATTRIBUTE_ID           0x0032 // Ver.: since ha-1.2-05-3520-29
#define ATTR_OCCUPIED_SETBACK_ATTRIBUTE_ID                           0x0034 // Ver.: always
#define ATTR_OCCUPIED_SETBACK_MIN_ATTRIBUTE_ID                       0x0035 // Ver.: always
#define ATTR_OCCUPIED_SETBACK_MAX_ATTRIBUTE_ID                       0x0036 // Ver.: always
#define ATTR_UNOCCUPIED_SETBACK_ATTRIBUTE_ID                         0x0037 // Ver.: always
#define ATTR_UNOCCUPIED_SETBACK_MIN_ATTRIBUTE_ID                     0x0038 // Ver.: always
#define ATTR_UNOCCUPIED_SETBACK_MAX_ATTRIBUTE_ID                     0x0039 // Ver.: always
#define ATTR_EMERGENCY_HEAT_DELTA_ATTRIBUTE_ID                       0x003A // Ver.: always
#define ATTR_AC_TYPE_ATTRIBUTE_ID                                    0x0040 // Ver.: since ha-1.2-05-3520-29
#define ATTR_AC_CAPACITY_ATTRIBUTE_ID                                0x0041 // Ver.: since ha-1.2-05-3520-29
#define ATTR_AC_REFRIGERANT_TYPE_ATTRIBUTE_ID                        0x0042 // Ver.: since ha-1.2-05-3520-29
#define ATTR_AC_COMPRESSOR_ATTRIBUTE_ID                              0x0043 // Ver.: since ha-1.2-05-3520-29
#define ATTR_AC_ERROR_CODE_ATTRIBUTE_ID                              0x0044 // Ver.: since ha-1.2-05-3520-29
#define ATTR_AC_LOUVER_POSITION_ATTRIBUTE_ID                         0x0045 // Ver.: since ha-1.2-05-3520-29
#define ATTR_AC_COIL_TEMPERATURE_ATTRIBUTE_ID                        0x0046 // Ver.: since ha-1.2-05-3520-29
#define ATTR_AC_CAPACITY_FORMAT_ATTRIBUTE_ID                         0x0047 // Ver.: since ha-1.2-05-3520-29
#define ATTR_THERMOSTAT_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_THERMOSTAT_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Fan Control
// Cluster specification level: zcl-6.0-15-02018-001

// Client attributes
#define ATTR_FAN_CONTROL_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_FAN_CONTROL_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_FAN_CONTROL_FAN_MODE_ATTRIBUTE_ID                        0x0000 // Ver.: always
#define ATTR_FAN_CONTROL_FAN_MODE_SEQUENCE_ATTRIBUTE_ID               0x0001 // Ver.: always
#define ATTR_FAN_DELAY_ATTRIBUTE_ID                                   0x0002 // Ver.: always
#define ATTR_FAN_CONTROL_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_FAN_CONTROL_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Dehumidification Control
// Cluster specification level: zcl-6.0-15-02018-001

// Client attributes
#define ATTR_DEHUMID_CONTROL_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_DEHUMID_CONTROL_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_RELATIVE_HUMIDITY_ATTRIBUTE_ID                               0x0000 // Ver.: always
#define ATTR_DEHUMIDIFICATION_COOLING_ATTRIBUTE_ID                        0x0001 // Ver.: always
#define ATTR_RH_DEHUMIDIFICATION_SETPOINT_ATTRIBUTE_ID                    0x0010 // Ver.: always
#define ATTR_RELATIVE_HUMIDITY_MODE_ATTRIBUTE_ID                          0x0011 // Ver.: always
#define ATTR_DEHUMIDIFICATION_LOCKOUT_ATTRIBUTE_ID                        0x0012 // Ver.: always
#define ATTR_DEHUMIDIFICATION_HYSTERESIS_ATTRIBUTE_ID                     0x0013 // Ver.: always
#define ATTR_DEHUMIDIFICATION_MAX_COOL_ATTRIBUTE_ID                       0x0014 // Ver.: always
#define ATTR_RELATIVE_HUMIDITY_DISPLAY_ATTRIBUTE_ID                       0x0015 // Ver.: always
#define ATTR_DEHUMID_CONTROL_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_DEHUMID_CONTROL_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Thermostat User Interface Configuration
// Cluster specification level: zcl-6.0-15-02018-001

// Client attributes
#define ATTR_THERMOSTAT_UI_CONFIG_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_THERMOSTAT_UI_CONFIG_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_TEMPERATURE_DISPLAY_MODE_ATTRIBUTE_ID                             0x0000 // Ver.: always
#define ATTR_KEYPAD_LOCKOUT_ATTRIBUTE_ID                                       0x0001 // Ver.: always
#define ATTR_SCHEDULE_PROGRAMMING_VISIBILITY_ATTRIBUTE_ID                      0x0002 // Ver.: since ha-1.2-05-3520-29
#define ATTR_BACKLIGHT_TIMEOUT_ATTRIBUTE_ID                                    0x0003 // Ver.: always
#define ATTR_SETPOINT_SOURCE_INDICATION_ATTRIBUTE_ID                           0x0004 // Ver.: always
#define ATTR_THERMOSTAT_UI_CONFIG_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_THERMOSTAT_UI_CONFIG_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Color Control
// Cluster specification level: zcl6-errata-14-0129-15

// Client attributes
#define ATTR_COLOR_CONTROL_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_COLOR_CONTROL_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_COLOR_CONTROL_CURRENT_HUE_ATTRIBUTE_ID                     0x0000 // Ver.: always
#define ATTR_COLOR_CONTROL_CURRENT_SATURATION_ATTRIBUTE_ID              0x0001 // Ver.: always
#define ATTR_COLOR_CONTROL_REMAINING_TIME_ATTRIBUTE_ID                  0x0002 // Ver.: always
#define ATTR_COLOR_CONTROL_CURRENT_X_ATTRIBUTE_ID                       0x0003 // Ver.: always
#define ATTR_COLOR_CONTROL_CURRENT_Y_ATTRIBUTE_ID                       0x0004 // Ver.: always
#define ATTR_COLOR_CONTROL_DRIFT_COMPENSATION_ATTRIBUTE_ID              0x0005 // Ver.: always
#define ATTR_COLOR_CONTROL_COMPENSATION_TEXT_ATTRIBUTE_ID               0x0006 // Ver.: always
#define ATTR_COLOR_CONTROL_COLOR_TEMPERATURE_ATTRIBUTE_ID               0x0007 // Ver.: always
#define ATTR_COLOR_CONTROL_COLOR_MODE_ATTRIBUTE_ID                      0x0008 // Ver.: always
#define ATTR_COLOR_CONTROL_OPTIONS_ATTRIBUTE_ID                         0x000F // Ver.: since zcl-6.0-15-02017-001
#define ATTR_COLOR_CONTROL_NUMBER_OF_PRIMARIES_ATTRIBUTE_ID             0x0010 // Ver.: always
#define ATTR_COLOR_CONTROL_PRIMARY_1_X_ATTRIBUTE_ID                     0x0011 // Ver.: always
#define ATTR_COLOR_CONTROL_PRIMARY_1_Y_ATTRIBUTE_ID                     0x0012 // Ver.: always
#define ATTR_COLOR_CONTROL_PRIMARY_1_INTENSITY_ATTRIBUTE_ID             0x0013 // Ver.: always
#define ATTR_COLOR_CONTROL_PRIMARY_2_X_ATTRIBUTE_ID                     0x0015 // Ver.: always
#define ATTR_COLOR_CONTROL_PRIMARY_2_Y_ATTRIBUTE_ID                     0x0016 // Ver.: always
#define ATTR_COLOR_CONTROL_PRIMARY_2_INTENSITY_ATTRIBUTE_ID             0x0017 // Ver.: always
#define ATTR_COLOR_CONTROL_PRIMARY_3_X_ATTRIBUTE_ID                     0x0019 // Ver.: always
#define ATTR_COLOR_CONTROL_PRIMARY_3_Y_ATTRIBUTE_ID                     0x001A // Ver.: always
#define ATTR_COLOR_CONTROL_PRIMARY_3_INTENSITY_ATTRIBUTE_ID             0x001B // Ver.: always
#define ATTR_COLOR_CONTROL_PRIMARY_4_X_ATTRIBUTE_ID                     0x0020 // Ver.: always
#define ATTR_COLOR_CONTROL_PRIMARY_4_Y_ATTRIBUTE_ID                     0x0021 // Ver.: always
#define ATTR_COLOR_CONTROL_PRIMARY_4_INTENSITY_ATTRIBUTE_ID             0x0022 // Ver.: always
#define ATTR_COLOR_CONTROL_PRIMARY_5_X_ATTRIBUTE_ID                     0x0024 // Ver.: always
#define ATTR_COLOR_CONTROL_PRIMARY_5_Y_ATTRIBUTE_ID                     0x0025 // Ver.: always
#define ATTR_COLOR_CONTROL_PRIMARY_5_INTENSITY_ATTRIBUTE_ID             0x0026 // Ver.: always
#define ATTR_COLOR_CONTROL_PRIMARY_6_X_ATTRIBUTE_ID                     0x0028 // Ver.: always
#define ATTR_COLOR_CONTROL_PRIMARY_6_Y_ATTRIBUTE_ID                     0x0029 // Ver.: always
#define ATTR_COLOR_CONTROL_PRIMARY_6_INTENSITY_ATTRIBUTE_ID             0x002A // Ver.: always
#define ATTR_COLOR_CONTROL_WHITE_POINT_X_ATTRIBUTE_ID                   0x0030 // Ver.: always
#define ATTR_COLOR_CONTROL_WHITE_POINT_Y_ATTRIBUTE_ID                   0x0031 // Ver.: always
#define ATTR_COLOR_CONTROL_COLOR_POINT_R_X_ATTRIBUTE_ID                 0x0032 // Ver.: always
#define ATTR_COLOR_CONTROL_COLOR_POINT_R_Y_ATTRIBUTE_ID                 0x0033 // Ver.: always
#define ATTR_COLOR_CONTROL_COLOR_POINT_R_INTENSITY_ATTRIBUTE_ID         0x0034 // Ver.: always
#define ATTR_COLOR_CONTROL_COLOR_POINT_G_X_ATTRIBUTE_ID                 0x0036 // Ver.: always
#define ATTR_COLOR_CONTROL_COLOR_POINT_G_Y_ATTRIBUTE_ID                 0x0037 // Ver.: always
#define ATTR_COLOR_CONTROL_COLOR_POINT_G_INTENSITY_ATTRIBUTE_ID         0x0038 // Ver.: always
#define ATTR_COLOR_CONTROL_COLOR_POINT_B_X_ATTRIBUTE_ID                 0x003A // Ver.: always
#define ATTR_COLOR_CONTROL_COLOR_POINT_B_Y_ATTRIBUTE_ID                 0x003B // Ver.: always
#define ATTR_COLOR_CONTROL_COLOR_POINT_B_INTENSITY_ATTRIBUTE_ID         0x003C // Ver.: always
#define ATTR_COLOR_CONTROL_ENHANCED_CURRENT_HUE_ATTRIBUTE_ID            0x4000 // Ver.: since zll-1.0-11-0037-10
#define ATTR_COLOR_CONTROL_ENHANCED_COLOR_MODE_ATTRIBUTE_ID             0x4001 // Ver.: since zll-1.0-11-0037-10
#define ATTR_COLOR_CONTROL_COLOR_LOOP_ACTIVE_ATTRIBUTE_ID               0x4002 // Ver.: since zll-1.0-11-0037-10
#define ATTR_COLOR_CONTROL_COLOR_LOOP_DIRECTION_ATTRIBUTE_ID            0x4003 // Ver.: since zll-1.0-11-0037-10
#define ATTR_COLOR_CONTROL_COLOR_LOOP_TIME_ATTRIBUTE_ID                 0x4004 // Ver.: since zll-1.0-11-0037-10
#define ATTR_COLOR_CONTROL_COLOR_LOOP_START_ENHANCED_HUE_ATTRIBUTE_ID   0x4005 // Ver.: since zll-1.0-11-0037-10
#define ATTR_COLOR_CONTROL_COLOR_LOOP_STORED_ENHANCED_HUE_ATTRIBUTE_ID  0x4006 // Ver.: since zll-1.0-11-0037-10
#define ATTR_COLOR_CONTROL_COLOR_CAPABILITIES_ATTRIBUTE_ID              0x400A // Ver.: since zll-1.0-11-0037-10
#define ATTR_COLOR_CONTROL_COLOR_TEMP_PHYSICAL_MIN_ATTRIBUTE_ID         0x400B // Ver.: since zll-1.0-11-0037-10
#define ATTR_COLOR_CONTROL_COLOR_TEMP_PHYSICAL_MAX_ATTRIBUTE_ID         0x400C // Ver.: since zll-1.0-11-0037-10
#define ATTR_COLOR_CONTROL_TEMPERATURE_LEVEL_MIN_MIREDS_ATTRIBUTE_ID    0x400D // Ver.: since l&o-1.0-15-0014-04
#define ATTR_START_UP_COLOR_TEMPERATURE_MIREDS_ATTRIBUTE_ID             0x4010 // Ver.: since l&o-1.0-15-0014-04
#define ATTR_COLOR_CONTROL_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_COLOR_CONTROL_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Ballast Configuration
// Cluster specification level: zcl6-errata-14-0129-15

// Client attributes
#define ATTR_BALLAST_CONFIGURATION_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_BALLAST_CONFIGURATION_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_PHYSICAL_MIN_LEVEL_ATTRIBUTE_ID                                    0x0000 // Ver.: always
#define ATTR_PHYSICAL_MAX_LEVEL_ATTRIBUTE_ID                                    0x0001 // Ver.: always
#define ATTR_BALLAST_STATUS_ATTRIBUTE_ID                                        0x0002 // Ver.: always
#define ATTR_MIN_LEVEL_ATTRIBUTE_ID                                             0x0010 // Ver.: always
#define ATTR_MAX_LEVEL_ATTRIBUTE_ID                                             0x0011 // Ver.: always
#define ATTR_POWER_ON_LEVEL_ATTRIBUTE_ID                                        0x0012 // Ver.: always
#define ATTR_POWER_ON_FADE_TIME_ATTRIBUTE_ID                                    0x0013 // Ver.: always
#define ATTR_INTRINSIC_BALLAST_FACTOR_ATTRIBUTE_ID                              0x0014 // Ver.: always
#define ATTR_BALLAST_FACTOR_ADJUSTMENT_ATTRIBUTE_ID                             0x0015 // Ver.: always
#define ATTR_LAMP_QUALITY_ATTRIBUTE_ID                                          0x0020 // Ver.: always
#define ATTR_LAMP_TYPE_ATTRIBUTE_ID                                             0x0030 // Ver.: always
#define ATTR_LAMP_MANUFACTURER_ATTRIBUTE_ID                                     0x0031 // Ver.: always
#define ATTR_LAMP_RATED_HOURS_ATTRIBUTE_ID                                      0x0032 // Ver.: always
#define ATTR_LAMP_BURN_HOURS_ATTRIBUTE_ID                                       0x0033 // Ver.: always
#define ATTR_LAMP_ALARM_MODE_ATTRIBUTE_ID                                       0x0034 // Ver.: always
#define ATTR_LAMP_BURN_HOURS_TRIP_POINT_ATTRIBUTE_ID                            0x0035 // Ver.: always
#define ATTR_BALLAST_CONFIGURATION_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_BALLAST_CONFIGURATION_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Illuminance Measurement
// Cluster specification level: zcl-6.0-15-02018-001

// Client attributes
#define ATTR_ILLUM_MEASUREMENT_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_ILLUM_MEASUREMENT_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_ILLUM_MEASURED_VALUE_ATTRIBUTE_ID                              0x0000 // Ver.: always
#define ATTR_ILLUM_MIN_MEASURED_VALUE_ATTRIBUTE_ID                          0x0001 // Ver.: always
#define ATTR_ILLUM_MAX_MEASURED_VALUE_ATTRIBUTE_ID                          0x0002 // Ver.: always
#define ATTR_ILLUM_TOLERANCE_ATTRIBUTE_ID                                   0x0003 // Ver.: always
#define ATTR_MEASUREMENT_LIGHT_SENSOR_TYPE_ATTRIBUTE_ID                     0x0004 // Ver.: always
#define ATTR_ILLUM_MEASUREMENT_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_ILLUM_MEASUREMENT_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Illuminance Level Sensing
// Cluster specification level: zcl-6.0-15-02018-001

// Client attributes
#define ATTR_ILLUM_LEVEL_SENSING_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_ILLUM_LEVEL_SENSING_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_LEVEL_STATUS_ATTRIBUTE_ID                                        0x0000 // Ver.: always
#define ATTR_SENSING_LIGHT_SENSOR_TYPE_ATTRIBUTE_ID                           0x0001 // Ver.: always
#define ATTR_ILLUMINANCE_TARGET_LEVEL_ATTRIBUTE_ID                            0x0010 // Ver.: always
#define ATTR_ILLUM_LEVEL_SENSING_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_ILLUM_LEVEL_SENSING_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Temperature Measurement
// Cluster specification level: zcl-6.0-15-02018-001

// Client attributes
#define ATTR_TEMP_MEASUREMENT_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_TEMP_MEASUREMENT_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_TEMP_MEASURED_VALUE_ATTRIBUTE_ID                              0x0000 // Ver.: always
#define ATTR_TEMP_MIN_MEASURED_VALUE_ATTRIBUTE_ID                          0x0001 // Ver.: always
#define ATTR_TEMP_MAX_MEASURED_VALUE_ATTRIBUTE_ID                          0x0002 // Ver.: always
#define ATTR_TEMP_TOLERANCE_ATTRIBUTE_ID                                   0x0003 // Ver.: always
#define ATTR_TEMP_MEASUREMENT_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_TEMP_MEASUREMENT_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Pressure Measurement
// Cluster specification level: zcl-6.0-15-02018-001

// Client attributes
#define ATTR_PRESSURE_MEASUREMENT_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_PRESSURE_MEASUREMENT_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_PRESSURE_MEASURED_VALUE_ATTRIBUTE_ID                              0x0000 // Ver.: always
#define ATTR_PRESSURE_MIN_MEASURED_VALUE_ATTRIBUTE_ID                          0x0001 // Ver.: always
#define ATTR_PRESSURE_MAX_MEASURED_VALUE_ATTRIBUTE_ID                          0x0002 // Ver.: always
#define ATTR_PRESSURE_TOLERANCE_ATTRIBUTE_ID                                   0x0003 // Ver.: always
#define ATTR_PRESSURE_SCALED_VALUE_ATTRIBUTE_ID                                0x0010 // Ver.: always
#define ATTR_PRESSURE_MIN_SCALED_VALUE_ATTRIBUTE_ID                            0x0011 // Ver.: always
#define ATTR_PRESSURE_MAX_SCALED_VALUE_ATTRIBUTE_ID                            0x0012 // Ver.: always
#define ATTR_PRESSURE_SCALED_TOLERANCE_ATTRIBUTE_ID                            0x0013 // Ver.: always
#define ATTR_PRESSURE_SCALE_ATTRIBUTE_ID                                       0x0014 // Ver.: always
#define ATTR_PRESSURE_MEASUREMENT_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_PRESSURE_MEASUREMENT_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Flow Measurement
// Cluster specification level: zcl-6.0-15-02018-001

// Client attributes
#define ATTR_FLOW_MEASUREMENT_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_FLOW_MEASUREMENT_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_FLOW_MEASURED_VALUE_ATTRIBUTE_ID                              0x0000 // Ver.: always
#define ATTR_FLOW_MIN_MEASURED_VALUE_ATTRIBUTE_ID                          0x0001 // Ver.: always
#define ATTR_FLOW_MAX_MEASURED_VALUE_ATTRIBUTE_ID                          0x0002 // Ver.: always
#define ATTR_FLOW_TOLERANCE_ATTRIBUTE_ID                                   0x0003 // Ver.: always
#define ATTR_FLOW_MEASUREMENT_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_FLOW_MEASUREMENT_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Relative Humidity Measurement
// Cluster specification level: zcl-6.0-15-02018-001

// Client attributes
#define ATTR_RELATIVE_HUMIDITY_MEASUREMENT_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_RELATIVE_HUMIDITY_MEASUREMENT_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_RELATIVE_HUMIDITY_MEASURED_VALUE_ATTRIBUTE_ID                              0x0000 // Ver.: always
#define ATTR_RELATIVE_HUMIDITY_MIN_MEASURED_VALUE_ATTRIBUTE_ID                          0x0001 // Ver.: always
#define ATTR_RELATIVE_HUMIDITY_MAX_MEASURED_VALUE_ATTRIBUTE_ID                          0x0002 // Ver.: always
#define ATTR_RELATIVE_HUMIDITY_TOLERANCE_ATTRIBUTE_ID                                   0x0003 // Ver.: always
#define ATTR_RELATIVE_HUMIDITY_MEASUREMENT_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_RELATIVE_HUMIDITY_MEASUREMENT_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Occupancy Sensing
// Cluster specification level: zcl-6.0-15-02018-001

// Client attributes
#define ATTR_OCCUPANCY_SENSING_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_OCCUPANCY_SENSING_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_OCCUPANCY_ATTRIBUTE_ID                                         0x0000 // Ver.: always
#define ATTR_OCCUPANCY_SENSOR_TYPE_ATTRIBUTE_ID                             0x0001 // Ver.: always
#define ATTR_OCCUPANCY_SENSOR_TYPE_BITMAP_ATTRIBUTE_ID                      0x0002 // Ver.: always
#define ATTR_PIR_OCCUPIED_TO_UNOCCUPIED_DELAY_ATTRIBUTE_ID                  0x0010 // Ver.: always
#define ATTR_PIR_UNOCCUPIED_TO_OCCUPIED_DELAY_ATTRIBUTE_ID                  0x0011 // Ver.: always
#define ATTR_PIR_UNOCCUPIED_TO_OCCUPIED_THRESHOLD_ATTRIBUTE_ID              0x0012 // Ver.: always
#define ATTR_ULTRASONIC_OCCUPIED_TO_UNOCCUPIED_DELAY_ATTRIBUTE_ID           0x0020 // Ver.: always
#define ATTR_ULTRASONIC_UNOCCUPIED_TO_OCCUPIED_DELAY_ATTRIBUTE_ID           0x0021 // Ver.: always
#define ATTR_ULTRASONIC_UNOCCUPIED_TO_OCCUPIED_THRESHOLD_ATTRIBUTE_ID       0x0022 // Ver.: always
#define ATTR_PHYSICAL_CONTACT_OCCUPIED_TO_UNOCCUPIED_DELAY_ATTRIBUTE_ID     0x0030 // Ver.: always
#define ATTR_PHYSICAL_CONTACT_UNOCCUPIED_TO_OCCUPIED_DELAY_ATTRIBUTE_ID     0x0031 // Ver.: always
#define ATTR_PHYSICAL_CONTACT_UNOCCUPIED_TO_OCCUPIED_THRESHOLD_ATTRIBUTE_ID 0x0032 // Ver.: always
#define ATTR_OCCUPANCY_SENSING_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_OCCUPANCY_SENSING_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Carbon Monoxide Concentration Measurement
// Cluster specification level: zcl-6.0-15-02018-001

// Client attributes
#define ATTR_CARBON_MONOXIDE_CONCENTRATION_MEASUREMENT_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_CARBON_MONOXIDE_CONCENTRATION_MEASUREMENT_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_CARBON_MONOXIDE_CONCENTRATION_MEASUREMENT_MEASURED_VALUE_ATTRIBUTE_ID                  0x0000 // Ver.: always
#define ATTR_CARBON_MONOXIDE_CONCENTRATION_MEASUREMENT_MIN_MEASURED_VALUE_ATTRIBUTE_ID              0x0001 // Ver.: always
#define ATTR_CARBON_MONOXIDE_CONCENTRATION_MEASUREMENT_MAX_MEASURED_VALUE_ATTRIBUTE_ID              0x0002 // Ver.: always
#define ATTR_CARBON_MONOXIDE_CONCENTRATION_MEASUREMENT_TOLERANCE_ATTRIBUTE_ID                       0x0003 // Ver.: always
#define ATTR_CARBON_MONOXIDE_CONCENTRATION_MEASUREMENT_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_CARBON_MONOXIDE_CONCENTRATION_MEASUREMENT_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Carbon Dioxide Concentration Measurement
// Cluster specification level: zcl-6.0-15-02018-001

// Client attributes
#define ATTR_CARBON_DIOXIDE_CONCENTRATION_MEASUREMENT_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_CARBON_DIOXIDE_CONCENTRATION_MEASUREMENT_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_CARBON_DIOXIDE_CONCENTRATION_MEASUREMENT_MEASURED_VALUE_ATTRIBUTE_ID                  0x0000 // Ver.: always
#define ATTR_CARBON_DIOXIDE_CONCENTRATION_MEASUREMENT_MIN_MEASURED_VALUE_ATTRIBUTE_ID              0x0001 // Ver.: always
#define ATTR_CARBON_DIOXIDE_CONCENTRATION_MEASUREMENT_MAX_MEASURED_VALUE_ATTRIBUTE_ID              0x0002 // Ver.: always
#define ATTR_CARBON_DIOXIDE_CONCENTRATION_MEASUREMENT_TOLERANCE_ATTRIBUTE_ID                       0x0003 // Ver.: always
#define ATTR_CARBON_DIOXIDE_CONCENTRATION_MEASUREMENT_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_CARBON_DIOXIDE_CONCENTRATION_MEASUREMENT_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Ethylene Concentration Measurement
// Cluster specification level: zcl-6.0-15-02018-001

// Client attributes
#define ATTR_ETHYLENE_CONCENTRATION_MEASUREMENT_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_ETHYLENE_CONCENTRATION_MEASUREMENT_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_ETHYLENE_CONCENTRATION_MEASUREMENT_MEASURED_VALUE_ATTRIBUTE_ID                  0x0000 // Ver.: always
#define ATTR_ETHYLENE_CONCENTRATION_MEASUREMENT_MIN_MEASURED_VALUE_ATTRIBUTE_ID              0x0001 // Ver.: always
#define ATTR_ETHYLENE_CONCENTRATION_MEASUREMENT_MAX_MEASURED_VALUE_ATTRIBUTE_ID              0x0002 // Ver.: always
#define ATTR_ETHYLENE_CONCENTRATION_MEASUREMENT_TOLERANCE_ATTRIBUTE_ID                       0x0003 // Ver.: always
#define ATTR_ETHYLENE_CONCENTRATION_MEASUREMENT_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_ETHYLENE_CONCENTRATION_MEASUREMENT_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Ethylene Oxide Concentration Measurement
// Cluster specification level: zcl-6.0-15-02018-001

// Client attributes
#define ATTR_ETHYLENE_OXIDE_CONCENTRATION_MEASUREMENT_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_ETHYLENE_OXIDE_CONCENTRATION_MEASUREMENT_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_ETHYLENE_OXIDE_CONCENTRATION_MEASUREMENT_MEASURED_VALUE_ATTRIBUTE_ID                  0x0000 // Ver.: always
#define ATTR_ETHYLENE_OXIDE_CONCENTRATION_MEASUREMENT_MIN_MEASURED_VALUE_ATTRIBUTE_ID              0x0001 // Ver.: always
#define ATTR_ETHYLENE_OXIDE_CONCENTRATION_MEASUREMENT_MAX_MEASURED_VALUE_ATTRIBUTE_ID              0x0002 // Ver.: always
#define ATTR_ETHYLENE_OXIDE_CONCENTRATION_MEASUREMENT_TOLERANCE_ATTRIBUTE_ID                       0x0003 // Ver.: always
#define ATTR_ETHYLENE_OXIDE_CONCENTRATION_MEASUREMENT_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_ETHYLENE_OXIDE_CONCENTRATION_MEASUREMENT_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Hydrogen Concentration Measurement
// Cluster specification level: zcl-6.0-15-02018-001

// Client attributes
#define ATTR_HYDROGEN_CONCENTRATION_MEASUREMENT_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_HYDROGEN_CONCENTRATION_MEASUREMENT_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_HYDROGEN_CONCENTRATION_MEASUREMENT_MEASURED_VALUE_ATTRIBUTE_ID                  0x0000 // Ver.: always
#define ATTR_HYDROGEN_CONCENTRATION_MEASUREMENT_MIN_MEASURED_VALUE_ATTRIBUTE_ID              0x0001 // Ver.: always
#define ATTR_HYDROGEN_CONCENTRATION_MEASUREMENT_MAX_MEASURED_VALUE_ATTRIBUTE_ID              0x0002 // Ver.: always
#define ATTR_HYDROGEN_CONCENTRATION_MEASUREMENT_TOLERANCE_ATTRIBUTE_ID                       0x0003 // Ver.: always
#define ATTR_HYDROGEN_CONCENTRATION_MEASUREMENT_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_HYDROGEN_CONCENTRATION_MEASUREMENT_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Hydrogen Sulphide Concentration Measurement
// Cluster specification level: zcl-6.0-15-02018-001

// Client attributes
#define ATTR_HYDROGEN_SULPHIDE_CONCENTRATION_MEASUREMENT_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_HYDROGEN_SULPHIDE_CONCENTRATION_MEASUREMENT_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_HYDROGEN_SULPHIDE_CONCENTRATION_MEASUREMENT_MEASURED_VALUE_ATTRIBUTE_ID                  0x0000 // Ver.: always
#define ATTR_HYDROGEN_SULPHIDE_CONCENTRATION_MEASUREMENT_MIN_MEASURED_VALUE_ATTRIBUTE_ID              0x0001 // Ver.: always
#define ATTR_HYDROGEN_SULPHIDE_CONCENTRATION_MEASUREMENT_MAX_MEASURED_VALUE_ATTRIBUTE_ID              0x0002 // Ver.: always
#define ATTR_HYDROGEN_SULPHIDE_CONCENTRATION_MEASUREMENT_TOLERANCE_ATTRIBUTE_ID                       0x0003 // Ver.: always
#define ATTR_HYDROGEN_SULPHIDE_CONCENTRATION_MEASUREMENT_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_HYDROGEN_SULPHIDE_CONCENTRATION_MEASUREMENT_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Nitric Oxide Concentration Measurement
// Cluster specification level: zcl-6.0-15-02018-001

// Client attributes
#define ATTR_NITRIC_OXIDE_CONCENTRATION_MEASUREMENT_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_NITRIC_OXIDE_CONCENTRATION_MEASUREMENT_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_NITRIC_OXIDE_CONCENTRATION_MEASUREMENT_MEASURED_VALUE_ATTRIBUTE_ID                  0x0000 // Ver.: always
#define ATTR_NITRIC_OXIDE_CONCENTRATION_MEASUREMENT_MIN_MEASURED_VALUE_ATTRIBUTE_ID              0x0001 // Ver.: always
#define ATTR_NITRIC_OXIDE_CONCENTRATION_MEASUREMENT_MAX_MEASURED_VALUE_ATTRIBUTE_ID              0x0002 // Ver.: always
#define ATTR_NITRIC_OXIDE_CONCENTRATION_MEASUREMENT_TOLERANCE_ATTRIBUTE_ID                       0x0003 // Ver.: always
#define ATTR_NITRIC_OXIDE_CONCENTRATION_MEASUREMENT_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_NITRIC_OXIDE_CONCENTRATION_MEASUREMENT_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Nitrogen Dioxide Concentration Measurement
// Cluster specification level: zcl-6.0-15-02018-001

// Client attributes
#define ATTR_NITROGEN_DIOXIDE_CONCENTRATION_MEASUREMENT_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_NITROGEN_DIOXIDE_CONCENTRATION_MEASUREMENT_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_NITROGEN_DIOXIDE_CONCENTRATION_MEASUREMENT_MEASURED_VALUE_ATTRIBUTE_ID                  0x0000 // Ver.: always
#define ATTR_NITROGEN_DIOXIDE_CONCENTRATION_MEASUREMENT_MIN_MEASURED_VALUE_ATTRIBUTE_ID              0x0001 // Ver.: always
#define ATTR_NITROGEN_DIOXIDE_CONCENTRATION_MEASUREMENT_MAX_MEASURED_VALUE_ATTRIBUTE_ID              0x0002 // Ver.: always
#define ATTR_NITROGEN_DIOXIDE_CONCENTRATION_MEASUREMENT_TOLERANCE_ATTRIBUTE_ID                       0x0003 // Ver.: always
#define ATTR_NITROGEN_DIOXIDE_CONCENTRATION_MEASUREMENT_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_NITROGEN_DIOXIDE_CONCENTRATION_MEASUREMENT_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Oxygen Concentration Measurement
// Cluster specification level: zcl-6.0-15-02018-001

// Client attributes
#define ATTR_OXYGEN_CONCENTRATION_MEASUREMENT_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_OXYGEN_CONCENTRATION_MEASUREMENT_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_OXYGEN_CONCENTRATION_MEASUREMENT_MEASURED_VALUE_ATTRIBUTE_ID                  0x0000 // Ver.: always
#define ATTR_OXYGEN_CONCENTRATION_MEASUREMENT_MIN_MEASURED_VALUE_ATTRIBUTE_ID              0x0001 // Ver.: always
#define ATTR_OXYGEN_CONCENTRATION_MEASUREMENT_MAX_MEASURED_VALUE_ATTRIBUTE_ID              0x0002 // Ver.: always
#define ATTR_OXYGEN_CONCENTRATION_MEASUREMENT_TOLERANCE_ATTRIBUTE_ID                       0x0003 // Ver.: always
#define ATTR_OXYGEN_CONCENTRATION_MEASUREMENT_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_OXYGEN_CONCENTRATION_MEASUREMENT_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Ozone Concentration Measurement
// Cluster specification level: zcl-6.0-15-02018-001

// Client attributes
#define ATTR_OZONE_CONCENTRATION_MEASUREMENT_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_OZONE_CONCENTRATION_MEASUREMENT_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_OZONE_CONCENTRATION_MEASUREMENT_MEASURED_VALUE_ATTRIBUTE_ID                  0x0000 // Ver.: always
#define ATTR_OZONE_CONCENTRATION_MEASUREMENT_MIN_MEASURED_VALUE_ATTRIBUTE_ID              0x0001 // Ver.: always
#define ATTR_OZONE_CONCENTRATION_MEASUREMENT_MAX_MEASURED_VALUE_ATTRIBUTE_ID              0x0002 // Ver.: always
#define ATTR_OZONE_CONCENTRATION_MEASUREMENT_TOLERANCE_ATTRIBUTE_ID                       0x0003 // Ver.: always
#define ATTR_OZONE_CONCENTRATION_MEASUREMENT_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_OZONE_CONCENTRATION_MEASUREMENT_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Sulfur Dioxide Concentration Measurement
// Cluster specification level: zcl-6.0-15-02018-001

// Client attributes
#define ATTR_SULFUR_DIOXIDE_CONCENTRATION_MEASUREMENT_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_SULFUR_DIOXIDE_CONCENTRATION_MEASUREMENT_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_SULFUR_DIOXIDE_CONCENTRATION_MEASUREMENT_MEASURED_VALUE_ATTRIBUTE_ID                  0x0000 // Ver.: always
#define ATTR_SULFUR_DIOXIDE_CONCENTRATION_MEASUREMENT_MIN_MEASURED_VALUE_ATTRIBUTE_ID              0x0001 // Ver.: always
#define ATTR_SULFUR_DIOXIDE_CONCENTRATION_MEASUREMENT_MAX_MEASURED_VALUE_ATTRIBUTE_ID              0x0002 // Ver.: always
#define ATTR_SULFUR_DIOXIDE_CONCENTRATION_MEASUREMENT_TOLERANCE_ATTRIBUTE_ID                       0x0003 // Ver.: always
#define ATTR_SULFUR_DIOXIDE_CONCENTRATION_MEASUREMENT_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_SULFUR_DIOXIDE_CONCENTRATION_MEASUREMENT_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Dissolved Oxygen Concentration Measurement
// Cluster specification level: zcl-6.0-15-02018-001

// Client attributes
#define ATTR_DISSOLVED_OXYGEN_CONCENTRATION_MEASUREMENT_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_DISSOLVED_OXYGEN_CONCENTRATION_MEASUREMENT_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_DISSOLVED_OXYGEN_CONCENTRATION_MEASUREMENT_MEASURED_VALUE_ATTRIBUTE_ID                  0x0000 // Ver.: always
#define ATTR_DISSOLVED_OXYGEN_CONCENTRATION_MEASUREMENT_MIN_MEASURED_VALUE_ATTRIBUTE_ID              0x0001 // Ver.: always
#define ATTR_DISSOLVED_OXYGEN_CONCENTRATION_MEASUREMENT_MAX_MEASURED_VALUE_ATTRIBUTE_ID              0x0002 // Ver.: always
#define ATTR_DISSOLVED_OXYGEN_CONCENTRATION_MEASUREMENT_TOLERANCE_ATTRIBUTE_ID                       0x0003 // Ver.: always
#define ATTR_DISSOLVED_OXYGEN_CONCENTRATION_MEASUREMENT_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_DISSOLVED_OXYGEN_CONCENTRATION_MEASUREMENT_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Bromate Concentration Measurement
// Cluster specification level: zcl-6.0-15-02018-001

// Client attributes
#define ATTR_BROMATE_CONCENTRATION_MEASUREMENT_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_BROMATE_CONCENTRATION_MEASUREMENT_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_BROMATE_CONCENTRATION_MEASUREMENT_MEASURED_VALUE_ATTRIBUTE_ID                  0x0000 // Ver.: always
#define ATTR_BROMATE_CONCENTRATION_MEASUREMENT_MIN_MEASURED_VALUE_ATTRIBUTE_ID              0x0001 // Ver.: always
#define ATTR_BROMATE_CONCENTRATION_MEASUREMENT_MAX_MEASURED_VALUE_ATTRIBUTE_ID              0x0002 // Ver.: always
#define ATTR_BROMATE_CONCENTRATION_MEASUREMENT_TOLERANCE_ATTRIBUTE_ID                       0x0003 // Ver.: always
#define ATTR_BROMATE_CONCENTRATION_MEASUREMENT_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_BROMATE_CONCENTRATION_MEASUREMENT_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Chloramines Concentration Measurement
// Cluster specification level: zcl-6.0-15-02018-001

// Client attributes
#define ATTR_CHLORAMINES_CONCENTRATION_MEASUREMENT_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_CHLORAMINES_CONCENTRATION_MEASUREMENT_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_CHLORAMINES_CONCENTRATION_MEASUREMENT_MEASURED_VALUE_ATTRIBUTE_ID                  0x0000 // Ver.: always
#define ATTR_CHLORAMINES_CONCENTRATION_MEASUREMENT_MIN_MEASURED_VALUE_ATTRIBUTE_ID              0x0001 // Ver.: always
#define ATTR_CHLORAMINES_CONCENTRATION_MEASUREMENT_MAX_MEASURED_VALUE_ATTRIBUTE_ID              0x0002 // Ver.: always
#define ATTR_CHLORAMINES_CONCENTRATION_MEASUREMENT_TOLERANCE_ATTRIBUTE_ID                       0x0003 // Ver.: always
#define ATTR_CHLORAMINES_CONCENTRATION_MEASUREMENT_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_CHLORAMINES_CONCENTRATION_MEASUREMENT_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Chlorine Concentration Measurement
// Cluster specification level: zcl-6.0-15-02018-001

// Client attributes
#define ATTR_CHLORINE_CONCENTRATION_MEASUREMENT_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_CHLORINE_CONCENTRATION_MEASUREMENT_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_CHLORINE_CONCENTRATION_MEASUREMENT_MEASURED_VALUE_ATTRIBUTE_ID                  0x0000 // Ver.: always
#define ATTR_CHLORINE_CONCENTRATION_MEASUREMENT_MIN_MEASURED_VALUE_ATTRIBUTE_ID              0x0001 // Ver.: always
#define ATTR_CHLORINE_CONCENTRATION_MEASUREMENT_MAX_MEASURED_VALUE_ATTRIBUTE_ID              0x0002 // Ver.: always
#define ATTR_CHLORINE_CONCENTRATION_MEASUREMENT_TOLERANCE_ATTRIBUTE_ID                       0x0003 // Ver.: always
#define ATTR_CHLORINE_CONCENTRATION_MEASUREMENT_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_CHLORINE_CONCENTRATION_MEASUREMENT_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Fecal coliform and E. Coli Concentration Measurement
// Cluster specification level: zcl-6.0-15-02018-001

// Client attributes
#define ATTR_FECAL_COLIFORM_AND_E_COLI_CONCENTRATION_MEASUREMENT_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_FECAL_COLIFORM_AND_E_COLI_CONCENTRATION_MEASUREMENT_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_FECAL_COLIFORM_AND_E_COLI_CONCENTRATION_MEASUREMENT_MEASURED_VALUE_ATTRIBUTE_ID                  0x0000 // Ver.: always
#define ATTR_FECAL_COLIFORM_AND_E_COLI_CONCENTRATION_MEASUREMENT_MIN_MEASURED_VALUE_ATTRIBUTE_ID              0x0001 // Ver.: always
#define ATTR_FECAL_COLIFORM_AND_E_COLI_CONCENTRATION_MEASUREMENT_MAX_MEASURED_VALUE_ATTRIBUTE_ID              0x0002 // Ver.: always
#define ATTR_FECAL_COLIFORM_AND_E_COLI_CONCENTRATION_MEASUREMENT_TOLERANCE_ATTRIBUTE_ID                       0x0003 // Ver.: always
#define ATTR_FECAL_COLIFORM_AND_E_COLI_CONCENTRATION_MEASUREMENT_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_FECAL_COLIFORM_AND_E_COLI_CONCENTRATION_MEASUREMENT_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Fluoride Concentration Measurement
// Cluster specification level: zcl-6.0-15-02018-001

// Client attributes
#define ATTR_FLUORIDE_CONCENTRATION_MEASUREMENT_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_FLUORIDE_CONCENTRATION_MEASUREMENT_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_FLUORIDE_CONCENTRATION_MEASUREMENT_MEASURED_VALUE_ATTRIBUTE_ID                  0x0000 // Ver.: always
#define ATTR_FLUORIDE_CONCENTRATION_MEASUREMENT_MIN_MEASURED_VALUE_ATTRIBUTE_ID              0x0001 // Ver.: always
#define ATTR_FLUORIDE_CONCENTRATION_MEASUREMENT_MAX_MEASURED_VALUE_ATTRIBUTE_ID              0x0002 // Ver.: always
#define ATTR_FLUORIDE_CONCENTRATION_MEASUREMENT_TOLERANCE_ATTRIBUTE_ID                       0x0003 // Ver.: always
#define ATTR_FLUORIDE_CONCENTRATION_MEASUREMENT_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_FLUORIDE_CONCENTRATION_MEASUREMENT_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Haloacetic Acids Concentration Measurement
// Cluster specification level: zcl-6.0-15-02018-001

// Client attributes
#define ATTR_HALOACETIC_ACIDS_CONCENTRATION_MEASUREMENT_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_HALOACETIC_ACIDS_CONCENTRATION_MEASUREMENT_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_HALOACETIC_ACIDS_CONCENTRATION_MEASUREMENT_MEASURED_VALUE_ATTRIBUTE_ID                  0x0000 // Ver.: always
#define ATTR_HALOACETIC_ACIDS_CONCENTRATION_MEASUREMENT_MIN_MEASURED_VALUE_ATTRIBUTE_ID              0x0001 // Ver.: always
#define ATTR_HALOACETIC_ACIDS_CONCENTRATION_MEASUREMENT_MAX_MEASURED_VALUE_ATTRIBUTE_ID              0x0002 // Ver.: always
#define ATTR_HALOACETIC_ACIDS_CONCENTRATION_MEASUREMENT_TOLERANCE_ATTRIBUTE_ID                       0x0003 // Ver.: always
#define ATTR_HALOACETIC_ACIDS_CONCENTRATION_MEASUREMENT_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_HALOACETIC_ACIDS_CONCENTRATION_MEASUREMENT_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Total Trihalomethanes Concentration Measurement
// Cluster specification level: zcl-6.0-15-02018-001

// Client attributes
#define ATTR_TOTAL_TRIHALOMETHANES_CONCENTRATION_MEASUREMENT_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_TOTAL_TRIHALOMETHANES_CONCENTRATION_MEASUREMENT_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_TOTAL_TRIHALOMETHANES_CONCENTRATION_MEASUREMENT_MEASURED_VALUE_ATTRIBUTE_ID                  0x0000 // Ver.: always
#define ATTR_TOTAL_TRIHALOMETHANES_CONCENTRATION_MEASUREMENT_MIN_MEASURED_VALUE_ATTRIBUTE_ID              0x0001 // Ver.: always
#define ATTR_TOTAL_TRIHALOMETHANES_CONCENTRATION_MEASUREMENT_MAX_MEASURED_VALUE_ATTRIBUTE_ID              0x0002 // Ver.: always
#define ATTR_TOTAL_TRIHALOMETHANES_CONCENTRATION_MEASUREMENT_TOLERANCE_ATTRIBUTE_ID                       0x0003 // Ver.: always
#define ATTR_TOTAL_TRIHALOMETHANES_CONCENTRATION_MEASUREMENT_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_TOTAL_TRIHALOMETHANES_CONCENTRATION_MEASUREMENT_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Total Coliform Bacteria Concentration Measurement
// Cluster specification level: zcl-6.0-15-02018-001

// Client attributes
#define ATTR_TOTAL_COLIFORM_BACTERIA_CONCENTRATION_MEASUREMENT_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_TOTAL_COLIFORM_BACTERIA_CONCENTRATION_MEASUREMENT_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_TOTAL_COLIFORM_BACTERIA_CONCENTRATION_MEASUREMENT_MEASURED_VALUE_ATTRIBUTE_ID                  0x0000 // Ver.: always
#define ATTR_TOTAL_COLIFORM_BACTERIA_CONCENTRATION_MEASUREMENT_MIN_MEASURED_VALUE_ATTRIBUTE_ID              0x0001 // Ver.: always
#define ATTR_TOTAL_COLIFORM_BACTERIA_CONCENTRATION_MEASUREMENT_MAX_MEASURED_VALUE_ATTRIBUTE_ID              0x0002 // Ver.: always
#define ATTR_TOTAL_COLIFORM_BACTERIA_CONCENTRATION_MEASUREMENT_TOLERANCE_ATTRIBUTE_ID                       0x0003 // Ver.: always
#define ATTR_TOTAL_COLIFORM_BACTERIA_CONCENTRATION_MEASUREMENT_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_TOTAL_COLIFORM_BACTERIA_CONCENTRATION_MEASUREMENT_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Turbidity Concentration Measurement
// Cluster specification level: zcl-6.0-15-02018-001

// Client attributes
#define ATTR_TURBIDITY_CONCENTRATION_MEASUREMENT_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_TURBIDITY_CONCENTRATION_MEASUREMENT_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_TURBIDITY_CONCENTRATION_MEASUREMENT_MEASURED_VALUE_ATTRIBUTE_ID                  0x0000 // Ver.: always
#define ATTR_TURBIDITY_CONCENTRATION_MEASUREMENT_MIN_MEASURED_VALUE_ATTRIBUTE_ID              0x0001 // Ver.: always
#define ATTR_TURBIDITY_CONCENTRATION_MEASUREMENT_MAX_MEASURED_VALUE_ATTRIBUTE_ID              0x0002 // Ver.: always
#define ATTR_TURBIDITY_CONCENTRATION_MEASUREMENT_TOLERANCE_ATTRIBUTE_ID                       0x0003 // Ver.: always
#define ATTR_TURBIDITY_CONCENTRATION_MEASUREMENT_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_TURBIDITY_CONCENTRATION_MEASUREMENT_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Copper Concentration Measurement
// Cluster specification level: zcl-6.0-15-02018-001

// Client attributes
#define ATTR_COPPER_CONCENTRATION_MEASUREMENT_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_COPPER_CONCENTRATION_MEASUREMENT_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_COPPER_CONCENTRATION_MEASUREMENT_MEASURED_VALUE_ATTRIBUTE_ID                  0x0000 // Ver.: always
#define ATTR_COPPER_CONCENTRATION_MEASUREMENT_MIN_MEASURED_VALUE_ATTRIBUTE_ID              0x0001 // Ver.: always
#define ATTR_COPPER_CONCENTRATION_MEASUREMENT_MAX_MEASURED_VALUE_ATTRIBUTE_ID              0x0002 // Ver.: always
#define ATTR_COPPER_CONCENTRATION_MEASUREMENT_TOLERANCE_ATTRIBUTE_ID                       0x0003 // Ver.: always
#define ATTR_COPPER_CONCENTRATION_MEASUREMENT_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_COPPER_CONCENTRATION_MEASUREMENT_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Lead Concentration Measurement
// Cluster specification level: zcl-6.0-15-02018-001

// Client attributes
#define ATTR_LEAD_CONCENTRATION_MEASUREMENT_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_LEAD_CONCENTRATION_MEASUREMENT_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_LEAD_CONCENTRATION_MEASUREMENT_MEASURED_VALUE_ATTRIBUTE_ID                  0x0000 // Ver.: always
#define ATTR_LEAD_CONCENTRATION_MEASUREMENT_MIN_MEASURED_VALUE_ATTRIBUTE_ID              0x0001 // Ver.: always
#define ATTR_LEAD_CONCENTRATION_MEASUREMENT_MAX_MEASURED_VALUE_ATTRIBUTE_ID              0x0002 // Ver.: always
#define ATTR_LEAD_CONCENTRATION_MEASUREMENT_TOLERANCE_ATTRIBUTE_ID                       0x0003 // Ver.: always
#define ATTR_LEAD_CONCENTRATION_MEASUREMENT_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_LEAD_CONCENTRATION_MEASUREMENT_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Manganese Concentration Measurement
// Cluster specification level: zcl-6.0-15-02018-001

// Client attributes
#define ATTR_MANGANESE_CONCENTRATION_MEASUREMENT_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_MANGANESE_CONCENTRATION_MEASUREMENT_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_MANGANESE_CONCENTRATION_MEASUREMENT_MEASURED_VALUE_ATTRIBUTE_ID                  0x0000 // Ver.: always
#define ATTR_MANGANESE_CONCENTRATION_MEASUREMENT_MIN_MEASURED_VALUE_ATTRIBUTE_ID              0x0001 // Ver.: always
#define ATTR_MANGANESE_CONCENTRATION_MEASUREMENT_MAX_MEASURED_VALUE_ATTRIBUTE_ID              0x0002 // Ver.: always
#define ATTR_MANGANESE_CONCENTRATION_MEASUREMENT_TOLERANCE_ATTRIBUTE_ID                       0x0003 // Ver.: always
#define ATTR_MANGANESE_CONCENTRATION_MEASUREMENT_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_MANGANESE_CONCENTRATION_MEASUREMENT_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Sulfate Concentration Measurement
// Cluster specification level: zcl-6.0-15-02018-001

// Client attributes
#define ATTR_SULFATE_CONCENTRATION_MEASUREMENT_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_SULFATE_CONCENTRATION_MEASUREMENT_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_SULFATE_CONCENTRATION_MEASUREMENT_MEASURED_VALUE_ATTRIBUTE_ID                  0x0000 // Ver.: always
#define ATTR_SULFATE_CONCENTRATION_MEASUREMENT_MIN_MEASURED_VALUE_ATTRIBUTE_ID              0x0001 // Ver.: always
#define ATTR_SULFATE_CONCENTRATION_MEASUREMENT_MAX_MEASURED_VALUE_ATTRIBUTE_ID              0x0002 // Ver.: always
#define ATTR_SULFATE_CONCENTRATION_MEASUREMENT_TOLERANCE_ATTRIBUTE_ID                       0x0003 // Ver.: always
#define ATTR_SULFATE_CONCENTRATION_MEASUREMENT_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_SULFATE_CONCENTRATION_MEASUREMENT_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Bromodichloromethane Concentration Measurement
// Cluster specification level: zcl-6.0-15-02018-001

// Client attributes
#define ATTR_BROMODICHLOROMETHANE_CONCENTRATION_MEASUREMENT_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_BROMODICHLOROMETHANE_CONCENTRATION_MEASUREMENT_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_BROMODICHLOROMETHANE_CONCENTRATION_MEASUREMENT_MEASURED_VALUE_ATTRIBUTE_ID                  0x0000 // Ver.: always
#define ATTR_BROMODICHLOROMETHANE_CONCENTRATION_MEASUREMENT_MIN_MEASURED_VALUE_ATTRIBUTE_ID              0x0001 // Ver.: always
#define ATTR_BROMODICHLOROMETHANE_CONCENTRATION_MEASUREMENT_MAX_MEASURED_VALUE_ATTRIBUTE_ID              0x0002 // Ver.: always
#define ATTR_BROMODICHLOROMETHANE_CONCENTRATION_MEASUREMENT_TOLERANCE_ATTRIBUTE_ID                       0x0003 // Ver.: always
#define ATTR_BROMODICHLOROMETHANE_CONCENTRATION_MEASUREMENT_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_BROMODICHLOROMETHANE_CONCENTRATION_MEASUREMENT_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Bromoform Concentration Measurement
// Cluster specification level: zcl-6.0-15-02018-001

// Client attributes
#define ATTR_BROMOFORM_CONCENTRATION_MEASUREMENT_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_BROMOFORM_CONCENTRATION_MEASUREMENT_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_BROMOFORM_CONCENTRATION_MEASUREMENT_MEASURED_VALUE_ATTRIBUTE_ID                  0x0000 // Ver.: always
#define ATTR_BROMOFORM_CONCENTRATION_MEASUREMENT_MIN_MEASURED_VALUE_ATTRIBUTE_ID              0x0001 // Ver.: always
#define ATTR_BROMOFORM_CONCENTRATION_MEASUREMENT_MAX_MEASURED_VALUE_ATTRIBUTE_ID              0x0002 // Ver.: always
#define ATTR_BROMOFORM_CONCENTRATION_MEASUREMENT_TOLERANCE_ATTRIBUTE_ID                       0x0003 // Ver.: always
#define ATTR_BROMOFORM_CONCENTRATION_MEASUREMENT_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_BROMOFORM_CONCENTRATION_MEASUREMENT_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Chlorodibromomethane Concentration Measurement
// Cluster specification level: zcl-6.0-15-02018-001

// Client attributes
#define ATTR_CHLORODIBROMOMETHANE_CONCENTRATION_MEASUREMENT_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_CHLORODIBROMOMETHANE_CONCENTRATION_MEASUREMENT_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_CHLORODIBROMOMETHANE_CONCENTRATION_MEASUREMENT_MEASURED_VALUE_ATTRIBUTE_ID                  0x0000 // Ver.: always
#define ATTR_CHLORODIBROMOMETHANE_CONCENTRATION_MEASUREMENT_MIN_MEASURED_VALUE_ATTRIBUTE_ID              0x0001 // Ver.: always
#define ATTR_CHLORODIBROMOMETHANE_CONCENTRATION_MEASUREMENT_MAX_MEASURED_VALUE_ATTRIBUTE_ID              0x0002 // Ver.: always
#define ATTR_CHLORODIBROMOMETHANE_CONCENTRATION_MEASUREMENT_TOLERANCE_ATTRIBUTE_ID                       0x0003 // Ver.: always
#define ATTR_CHLORODIBROMOMETHANE_CONCENTRATION_MEASUREMENT_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_CHLORODIBROMOMETHANE_CONCENTRATION_MEASUREMENT_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Chloroform Concentration Measurement
// Cluster specification level: zcl-6.0-15-02018-001

// Client attributes
#define ATTR_CHLOROFORM_CONCENTRATION_MEASUREMENT_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_CHLOROFORM_CONCENTRATION_MEASUREMENT_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_CHLOROFORM_CONCENTRATION_MEASUREMENT_MEASURED_VALUE_ATTRIBUTE_ID                  0x0000 // Ver.: always
#define ATTR_CHLOROFORM_CONCENTRATION_MEASUREMENT_MIN_MEASURED_VALUE_ATTRIBUTE_ID              0x0001 // Ver.: always
#define ATTR_CHLOROFORM_CONCENTRATION_MEASUREMENT_MAX_MEASURED_VALUE_ATTRIBUTE_ID              0x0002 // Ver.: always
#define ATTR_CHLOROFORM_CONCENTRATION_MEASUREMENT_TOLERANCE_ATTRIBUTE_ID                       0x0003 // Ver.: always
#define ATTR_CHLOROFORM_CONCENTRATION_MEASUREMENT_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_CHLOROFORM_CONCENTRATION_MEASUREMENT_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Sodium Concentration Measurement
// Cluster specification level: zcl-6.0-15-02018-001

// Client attributes
#define ATTR_SODIUM_CONCENTRATION_MEASUREMENT_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_SODIUM_CONCENTRATION_MEASUREMENT_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_SODIUM_CONCENTRATION_MEASUREMENT_MEASURED_VALUE_ATTRIBUTE_ID                  0x0000 // Ver.: always
#define ATTR_SODIUM_CONCENTRATION_MEASUREMENT_MIN_MEASURED_VALUE_ATTRIBUTE_ID              0x0001 // Ver.: always
#define ATTR_SODIUM_CONCENTRATION_MEASUREMENT_MAX_MEASURED_VALUE_ATTRIBUTE_ID              0x0002 // Ver.: always
#define ATTR_SODIUM_CONCENTRATION_MEASUREMENT_TOLERANCE_ATTRIBUTE_ID                       0x0003 // Ver.: always
#define ATTR_SODIUM_CONCENTRATION_MEASUREMENT_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_SODIUM_CONCENTRATION_MEASUREMENT_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: IAS Zone
// Cluster specification level: zcl-6.0-15-02018-001

// Client attributes
#define ATTR_IAS_ZONE_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_IAS_ZONE_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_ZONE_STATE_ATTRIBUTE_ID                                  0x0000 // Ver.: always
#define ATTR_ZONE_TYPE_ATTRIBUTE_ID                                   0x0001 // Ver.: always
#define ATTR_ZONE_STATUS_ATTRIBUTE_ID                                 0x0002 // Ver.: always
#define ATTR_IAS_CIE_ADDRESS_ATTRIBUTE_ID                             0x0010 // Ver.: always
#define ATTR_ZONE_ID_ATTRIBUTE_ID                                     0x0011 // Ver.: always
#define ATTR_NUMBER_OF_ZONE_SENSITIVITY_LEVELS_SUPPORTED_ATTRIBUTE_ID 0x0012 // Ver.: always
#define ATTR_CURRENT_ZONE_SENSITIVITY_LEVEL_ATTRIBUTE_ID              0x0013 // Ver.: always
#define ATTR_IAS_ZONE_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID    0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_IAS_ZONE_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID    0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: IAS ACE
// Cluster specification level: zcl-6.0-15-02018-001

// Client attributes
#define ATTR_IAS_ACE_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_IAS_ACE_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_IAS_ACE_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_IAS_ACE_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: IAS WD
// Cluster specification level: zcl-6.0-15-02018-001

// Client attributes
#define ATTR_IAS_WD_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_IAS_WD_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_MAX_DURATION_ATTRIBUTE_ID                           0x0000 // Ver.: always
#define ATTR_IAS_WD_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_IAS_WD_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Generic Tunnel
// Cluster specification level: cba-1.0-05-3516-12

// Client attributes
#define ATTR_GENERIC_TUNNEL_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_GENERIC_TUNNEL_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_MAXIMUM_INCOMING_TRANSFER_SIZE_ATTRIBUTE_ID                 0x0001 // Ver.: always
#define ATTR_MAXIMUM_OUTGOING_TRANSFER_SIZE_ATTRIBUTE_ID                 0x0002 // Ver.: always
#define ATTR_PROTOCOL_ADDRESS_ATTRIBUTE_ID                               0x0003 // Ver.: always
#define ATTR_GENERIC_TUNNEL_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_GENERIC_TUNNEL_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: BACnet Protocol Tunnel
// Cluster specification level: cba-1.0-05-3516-12

// Client attributes
#define ATTR_BACNET_PROTOCOL_TUNNEL_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_BACNET_PROTOCOL_TUNNEL_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_BACNET_PROTOCOL_TUNNEL_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_BACNET_PROTOCOL_TUNNEL_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: 11073 Protocol Tunnel
// Cluster specification level: hc-1.0-07-5360-15

// Client attributes
#define ATTR_11073_PROTOCOL_TUNNEL_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_11073_PROTOCOL_TUNNEL_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_DEVICE_ID_LIST_ATTRIBUTE_ID                                        0x0000 // Ver.: always
#define ATTR_MANAGER_TARGET_ATTRIBUTE_ID                                        0x0001 // Ver.: always
#define ATTR_MANAGER_ENDPOINT_ATTRIBUTE_ID                                      0x0002 // Ver.: always
#define ATTR_CONNECTED_ATTRIBUTE_ID                                             0x0003 // Ver.: always
#define ATTR_PREEMPTIBLE_ATTRIBUTE_ID                                           0x0004 // Ver.: always
#define ATTR_IDLE_TIMEOUT_ATTRIBUTE_ID                                          0x0005 // Ver.: always
#define ATTR_11073_PROTOCOL_TUNNEL_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_11073_PROTOCOL_TUNNEL_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: ISO 7816 Protocol Tunnel
// Cluster specification level: ta-1.0-07-5307-07

// Client attributes
#define ATTR_ISO7816_PROTOCOL_TUNNEL_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_ISO7816_PROTOCOL_TUNNEL_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_ISO7816_PROTOCOL_TUNNEL_STATUS_ATTRIBUTE_ID                          0x0000 // Ver.: always
#define ATTR_ISO7816_PROTOCOL_TUNNEL_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_ISO7816_PROTOCOL_TUNNEL_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Price
// Cluster specification level: se-1.2b-15-0131-02

// Client attributes
#define ATTR_PRICE_INCREASE_RANDOMIZE_MINUTES_ATTRIBUTE_ID      0x0000 // Ver.: always
#define ATTR_PRICE_DECREASE_RANDOMIZE_MINUTES_ATTRIBUTE_ID      0x0001 // Ver.: always
#define ATTR_COMMODITY_TYPE_CLIENT_ATTRIBUTE_ID                 0x0002 // Ver.: always
#define ATTR_PRICE_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_PRICE_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_TIER1_PRICE_LABEL_ATTRIBUTE_ID                        0x0000 // Ver.: always
#define ATTR_TIER2_PRICE_LABEL_ATTRIBUTE_ID                        0x0001 // Ver.: always
#define ATTR_TIER3_PRICE_LABEL_ATTRIBUTE_ID                        0x0002 // Ver.: always
#define ATTR_TIER4_PRICE_LABEL_ATTRIBUTE_ID                        0x0003 // Ver.: always
#define ATTR_TIER5_PRICE_LABEL_ATTRIBUTE_ID                        0x0004 // Ver.: always
#define ATTR_TIER6_PRICE_LABEL_ATTRIBUTE_ID                        0x0005 // Ver.: always
#define ATTR_TIER7_PRICE_LABEL_ATTRIBUTE_ID                        0x0006 // Ver.: always
#define ATTR_TIER8_PRICE_LABEL_ATTRIBUTE_ID                        0x0007 // Ver.: always
#define ATTR_TIER9_PRICE_LABEL_ATTRIBUTE_ID                        0x0008 // Ver.: always
#define ATTR_TIER10_PRICE_LABEL_ATTRIBUTE_ID                       0x0009 // Ver.: always
#define ATTR_TIER11_PRICE_LABEL_ATTRIBUTE_ID                       0x000A // Ver.: always
#define ATTR_TIER12_PRICE_LABEL_ATTRIBUTE_ID                       0x000B // Ver.: always
#define ATTR_TIER13_PRICE_LABEL_ATTRIBUTE_ID                       0x000C // Ver.: always
#define ATTR_TIER14_PRICE_LABEL_ATTRIBUTE_ID                       0x000D // Ver.: always
#define ATTR_TIER15_PRICE_LABEL_ATTRIBUTE_ID                       0x000E // Ver.: always
#define ATTR_TIER16_PRICE_LABEL_ATTRIBUTE_ID                       0x000F // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER17_PRICE_LABEL_ATTRIBUTE_ID                       0x0010 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER18_PRICE_LABEL_ATTRIBUTE_ID                       0x0011 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER19_PRICE_LABEL_ATTRIBUTE_ID                       0x0012 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER20_PRICE_LABEL_ATTRIBUTE_ID                       0x0013 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER21_PRICE_LABEL_ATTRIBUTE_ID                       0x0014 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER22_PRICE_LABEL_ATTRIBUTE_ID                       0x0015 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER23_PRICE_LABEL_ATTRIBUTE_ID                       0x0016 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER24_PRICE_LABEL_ATTRIBUTE_ID                       0x0017 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER25_PRICE_LABEL_ATTRIBUTE_ID                       0x0018 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER26_PRICE_LABEL_ATTRIBUTE_ID                       0x0019 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER27_PRICE_LABEL_ATTRIBUTE_ID                       0x001A // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER28_PRICE_LABEL_ATTRIBUTE_ID                       0x001B // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER29_PRICE_LABEL_ATTRIBUTE_ID                       0x001C // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER30_PRICE_LABEL_ATTRIBUTE_ID                       0x001D // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER31_PRICE_LABEL_ATTRIBUTE_ID                       0x001E // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER32_PRICE_LABEL_ATTRIBUTE_ID                       0x001F // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER33_PRICE_LABEL_ATTRIBUTE_ID                       0x0020 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER34_PRICE_LABEL_ATTRIBUTE_ID                       0x0021 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER35_PRICE_LABEL_ATTRIBUTE_ID                       0x0022 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER36_PRICE_LABEL_ATTRIBUTE_ID                       0x0023 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER37_PRICE_LABEL_ATTRIBUTE_ID                       0x0024 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER38_PRICE_LABEL_ATTRIBUTE_ID                       0x0025 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER39_PRICE_LABEL_ATTRIBUTE_ID                       0x0026 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER40_PRICE_LABEL_ATTRIBUTE_ID                       0x0027 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER41_PRICE_LABEL_ATTRIBUTE_ID                       0x0028 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER42_PRICE_LABEL_ATTRIBUTE_ID                       0x0029 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER43_PRICE_LABEL_ATTRIBUTE_ID                       0x002A // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER44_PRICE_LABEL_ATTRIBUTE_ID                       0x002B // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER45_PRICE_LABEL_ATTRIBUTE_ID                       0x002C // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER46_PRICE_LABEL_ATTRIBUTE_ID                       0x002D // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER47_PRICE_LABEL_ATTRIBUTE_ID                       0x002E // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER48_PRICE_LABEL_ATTRIBUTE_ID                       0x002F // Ver.: since se-1.2a-07-5356-19
#define ATTR_BLOCK1_THRESHOLD_ATTRIBUTE_ID                         0x0100 // Ver.: always
#define ATTR_BLOCK2_THRESHOLD_ATTRIBUTE_ID                         0x0101 // Ver.: always
#define ATTR_BLOCK3_THRESHOLD_ATTRIBUTE_ID                         0x0102 // Ver.: always
#define ATTR_BLOCK4_THRESHOLD_ATTRIBUTE_ID                         0x0103 // Ver.: always
#define ATTR_BLOCK5_THRESHOLD_ATTRIBUTE_ID                         0x0104 // Ver.: always
#define ATTR_BLOCK6_THRESHOLD_ATTRIBUTE_ID                         0x0105 // Ver.: always
#define ATTR_BLOCK7_THRESHOLD_ATTRIBUTE_ID                         0x0106 // Ver.: always
#define ATTR_BLOCK8_THRESHOLD_ATTRIBUTE_ID                         0x0107 // Ver.: always
#define ATTR_BLOCK9_THRESHOLD_ATTRIBUTE_ID                         0x0108 // Ver.: always
#define ATTR_BLOCK10_THRESHOLD_ATTRIBUTE_ID                        0x0109 // Ver.: always
#define ATTR_BLOCK11_THRESHOLD_ATTRIBUTE_ID                        0x010A // Ver.: always
#define ATTR_BLOCK12_THRESHOLD_ATTRIBUTE_ID                        0x010B // Ver.: always
#define ATTR_BLOCK13_THRESHOLD_ATTRIBUTE_ID                        0x010C // Ver.: always
#define ATTR_BLOCK14_THRESHOLD_ATTRIBUTE_ID                        0x010D // Ver.: always
#define ATTR_BLOCK15_THRESHOLD_ATTRIBUTE_ID                        0x010E // Ver.: always
#define ATTR_BLOCK_THRESHOLD_COUNT_ATTRIBUTE_ID                    0x010F // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER1_BLOCK1_THRESHOLD_ATTRIBUTE_ID                   0x0110 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER1_BLOCK2_THRESHOLD_ATTRIBUTE_ID                   0x0111 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER1_BLOCK3_THRESHOLD_ATTRIBUTE_ID                   0x0112 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER1_BLOCK4_THRESHOLD_ATTRIBUTE_ID                   0x0113 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER1_BLOCK5_THRESHOLD_ATTRIBUTE_ID                   0x0114 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER1_BLOCK6_THRESHOLD_ATTRIBUTE_ID                   0x0115 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER1_BLOCK7_THRESHOLD_ATTRIBUTE_ID                   0x0116 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER1_BLOCK8_THRESHOLD_ATTRIBUTE_ID                   0x0117 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER1_BLOCK9_THRESHOLD_ATTRIBUTE_ID                   0x0118 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER1_BLOCK10_THRESHOLD_ATTRIBUTE_ID                  0x0119 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER1_BLOCK11_THRESHOLD_ATTRIBUTE_ID                  0x011A // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER1_BLOCK12_THRESHOLD_ATTRIBUTE_ID                  0x011B // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER1_BLOCK13_THRESHOLD_ATTRIBUTE_ID                  0x011C // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER1_BLOCK14_THRESHOLD_ATTRIBUTE_ID                  0x011D // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER1_BLOCK15_THRESHOLD_ATTRIBUTE_ID                  0x011E // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER1_BLOCK_THRESHOLD_COUNT_ATTRIBUTE_ID              0x011F // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER2_BLOCK1_THRESHOLD_ATTRIBUTE_ID                   0x0120 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER2_BLOCK2_THRESHOLD_ATTRIBUTE_ID                   0x0121 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER2_BLOCK3_THRESHOLD_ATTRIBUTE_ID                   0x0122 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER2_BLOCK4_THRESHOLD_ATTRIBUTE_ID                   0x0123 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER2_BLOCK5_THRESHOLD_ATTRIBUTE_ID                   0x0124 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER2_BLOCK6_THRESHOLD_ATTRIBUTE_ID                   0x0125 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER2_BLOCK7_THRESHOLD_ATTRIBUTE_ID                   0x0126 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER2_BLOCK8_THRESHOLD_ATTRIBUTE_ID                   0x0127 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER2_BLOCK9_THRESHOLD_ATTRIBUTE_ID                   0x0128 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER2_BLOCK10_THRESHOLD_ATTRIBUTE_ID                  0x0129 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER2_BLOCK11_THRESHOLD_ATTRIBUTE_ID                  0x012A // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER2_BLOCK12_THRESHOLD_ATTRIBUTE_ID                  0x012B // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER2_BLOCK13_THRESHOLD_ATTRIBUTE_ID                  0x012C // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER2_BLOCK14_THRESHOLD_ATTRIBUTE_ID                  0x012D // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER2_BLOCK15_THRESHOLD_ATTRIBUTE_ID                  0x012E // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER2_BLOCK_THRESHOLD_COUNT_ATTRIBUTE_ID              0x012F // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER3_BLOCK1_THRESHOLD_ATTRIBUTE_ID                   0x0130 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER3_BLOCK2_THRESHOLD_ATTRIBUTE_ID                   0x0131 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER3_BLOCK3_THRESHOLD_ATTRIBUTE_ID                   0x0132 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER3_BLOCK4_THRESHOLD_ATTRIBUTE_ID                   0x0133 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER3_BLOCK5_THRESHOLD_ATTRIBUTE_ID                   0x0134 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER3_BLOCK6_THRESHOLD_ATTRIBUTE_ID                   0x0135 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER3_BLOCK7_THRESHOLD_ATTRIBUTE_ID                   0x0136 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER3_BLOCK8_THRESHOLD_ATTRIBUTE_ID                   0x0137 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER3_BLOCK9_THRESHOLD_ATTRIBUTE_ID                   0x0138 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER3_BLOCK10_THRESHOLD_ATTRIBUTE_ID                  0x0139 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER3_BLOCK11_THRESHOLD_ATTRIBUTE_ID                  0x013A // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER3_BLOCK12_THRESHOLD_ATTRIBUTE_ID                  0x013B // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER3_BLOCK13_THRESHOLD_ATTRIBUTE_ID                  0x013C // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER3_BLOCK14_THRESHOLD_ATTRIBUTE_ID                  0x013D // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER3_BLOCK15_THRESHOLD_ATTRIBUTE_ID                  0x013E // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER3_BLOCK_THRESHOLD_COUNT_ATTRIBUTE_ID              0x013F // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER4_BLOCK1_THRESHOLD_ATTRIBUTE_ID                   0x0140 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER4_BLOCK2_THRESHOLD_ATTRIBUTE_ID                   0x0141 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER4_BLOCK3_THRESHOLD_ATTRIBUTE_ID                   0x0142 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER4_BLOCK4_THRESHOLD_ATTRIBUTE_ID                   0x0143 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER4_BLOCK5_THRESHOLD_ATTRIBUTE_ID                   0x0144 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER4_BLOCK6_THRESHOLD_ATTRIBUTE_ID                   0x0145 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER4_BLOCK7_THRESHOLD_ATTRIBUTE_ID                   0x0146 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER4_BLOCK8_THRESHOLD_ATTRIBUTE_ID                   0x0147 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER4_BLOCK9_THRESHOLD_ATTRIBUTE_ID                   0x0148 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER4_BLOCK10_THRESHOLD_ATTRIBUTE_ID                  0x0149 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER4_BLOCK11_THRESHOLD_ATTRIBUTE_ID                  0x014A // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER4_BLOCK12_THRESHOLD_ATTRIBUTE_ID                  0x014B // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER4_BLOCK13_THRESHOLD_ATTRIBUTE_ID                  0x014C // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER4_BLOCK14_THRESHOLD_ATTRIBUTE_ID                  0x014D // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER4_BLOCK15_THRESHOLD_ATTRIBUTE_ID                  0x014E // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER4_BLOCK_THRESHOLD_COUNT_ATTRIBUTE_ID              0x014F // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER5_BLOCK1_THRESHOLD_ATTRIBUTE_ID                   0x0150 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER5_BLOCK2_THRESHOLD_ATTRIBUTE_ID                   0x0151 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER5_BLOCK3_THRESHOLD_ATTRIBUTE_ID                   0x0152 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER5_BLOCK4_THRESHOLD_ATTRIBUTE_ID                   0x0153 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER5_BLOCK5_THRESHOLD_ATTRIBUTE_ID                   0x0154 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER5_BLOCK6_THRESHOLD_ATTRIBUTE_ID                   0x0155 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER5_BLOCK7_THRESHOLD_ATTRIBUTE_ID                   0x0156 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER5_BLOCK8_THRESHOLD_ATTRIBUTE_ID                   0x0157 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER5_BLOCK9_THRESHOLD_ATTRIBUTE_ID                   0x0158 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER5_BLOCK10_THRESHOLD_ATTRIBUTE_ID                  0x0159 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER5_BLOCK11_THRESHOLD_ATTRIBUTE_ID                  0x015A // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER5_BLOCK12_THRESHOLD_ATTRIBUTE_ID                  0x015B // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER5_BLOCK13_THRESHOLD_ATTRIBUTE_ID                  0x015C // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER5_BLOCK14_THRESHOLD_ATTRIBUTE_ID                  0x015D // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER5_BLOCK15_THRESHOLD_ATTRIBUTE_ID                  0x015E // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER5_BLOCK_THRESHOLD_COUNT_ATTRIBUTE_ID              0x015F // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER6_BLOCK1_THRESHOLD_ATTRIBUTE_ID                   0x0160 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER6_BLOCK2_THRESHOLD_ATTRIBUTE_ID                   0x0161 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER6_BLOCK3_THRESHOLD_ATTRIBUTE_ID                   0x0162 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER6_BLOCK4_THRESHOLD_ATTRIBUTE_ID                   0x0163 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER6_BLOCK5_THRESHOLD_ATTRIBUTE_ID                   0x0164 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER6_BLOCK6_THRESHOLD_ATTRIBUTE_ID                   0x0165 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER6_BLOCK7_THRESHOLD_ATTRIBUTE_ID                   0x0166 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER6_BLOCK8_THRESHOLD_ATTRIBUTE_ID                   0x0167 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER6_BLOCK9_THRESHOLD_ATTRIBUTE_ID                   0x0168 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER6_BLOCK10_THRESHOLD_ATTRIBUTE_ID                  0x0169 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER6_BLOCK11_THRESHOLD_ATTRIBUTE_ID                  0x016A // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER6_BLOCK12_THRESHOLD_ATTRIBUTE_ID                  0x016B // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER6_BLOCK13_THRESHOLD_ATTRIBUTE_ID                  0x016C // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER6_BLOCK14_THRESHOLD_ATTRIBUTE_ID                  0x016D // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER6_BLOCK15_THRESHOLD_ATTRIBUTE_ID                  0x016E // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER6_BLOCK_THRESHOLD_COUNT_ATTRIBUTE_ID              0x016F // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER7_BLOCK1_THRESHOLD_ATTRIBUTE_ID                   0x0170 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER7_BLOCK2_THRESHOLD_ATTRIBUTE_ID                   0x0171 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER7_BLOCK3_THRESHOLD_ATTRIBUTE_ID                   0x0172 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER7_BLOCK4_THRESHOLD_ATTRIBUTE_ID                   0x0173 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER7_BLOCK5_THRESHOLD_ATTRIBUTE_ID                   0x0174 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER7_BLOCK6_THRESHOLD_ATTRIBUTE_ID                   0x0175 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER7_BLOCK7_THRESHOLD_ATTRIBUTE_ID                   0x0176 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER7_BLOCK8_THRESHOLD_ATTRIBUTE_ID                   0x0177 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER7_BLOCK9_THRESHOLD_ATTRIBUTE_ID                   0x0178 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER7_BLOCK10_THRESHOLD_ATTRIBUTE_ID                  0x0179 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER7_BLOCK11_THRESHOLD_ATTRIBUTE_ID                  0x017A // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER7_BLOCK12_THRESHOLD_ATTRIBUTE_ID                  0x017B // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER7_BLOCK13_THRESHOLD_ATTRIBUTE_ID                  0x017C // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER7_BLOCK14_THRESHOLD_ATTRIBUTE_ID                  0x017D // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER7_BLOCK15_THRESHOLD_ATTRIBUTE_ID                  0x017E // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER7_BLOCK_THRESHOLD_COUNT_ATTRIBUTE_ID              0x017F // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER8_BLOCK1_THRESHOLD_ATTRIBUTE_ID                   0x0180 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER8_BLOCK2_THRESHOLD_ATTRIBUTE_ID                   0x0181 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER8_BLOCK3_THRESHOLD_ATTRIBUTE_ID                   0x0182 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER8_BLOCK4_THRESHOLD_ATTRIBUTE_ID                   0x0183 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER8_BLOCK5_THRESHOLD_ATTRIBUTE_ID                   0x0184 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER8_BLOCK6_THRESHOLD_ATTRIBUTE_ID                   0x0185 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER8_BLOCK7_THRESHOLD_ATTRIBUTE_ID                   0x0186 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER8_BLOCK8_THRESHOLD_ATTRIBUTE_ID                   0x0187 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER8_BLOCK9_THRESHOLD_ATTRIBUTE_ID                   0x0188 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER8_BLOCK10_THRESHOLD_ATTRIBUTE_ID                  0x0189 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER8_BLOCK11_THRESHOLD_ATTRIBUTE_ID                  0x018A // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER8_BLOCK12_THRESHOLD_ATTRIBUTE_ID                  0x018B // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER8_BLOCK13_THRESHOLD_ATTRIBUTE_ID                  0x018C // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER8_BLOCK14_THRESHOLD_ATTRIBUTE_ID                  0x018D // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER8_BLOCK15_THRESHOLD_ATTRIBUTE_ID                  0x018E // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER8_BLOCK_THRESHOLD_COUNT_ATTRIBUTE_ID              0x018F // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER9_BLOCK1_THRESHOLD_ATTRIBUTE_ID                   0x0190 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER9_BLOCK2_THRESHOLD_ATTRIBUTE_ID                   0x0191 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER9_BLOCK3_THRESHOLD_ATTRIBUTE_ID                   0x0192 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER9_BLOCK4_THRESHOLD_ATTRIBUTE_ID                   0x0193 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER9_BLOCK5_THRESHOLD_ATTRIBUTE_ID                   0x0194 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER9_BLOCK6_THRESHOLD_ATTRIBUTE_ID                   0x0195 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER9_BLOCK7_THRESHOLD_ATTRIBUTE_ID                   0x0196 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER9_BLOCK8_THRESHOLD_ATTRIBUTE_ID                   0x0197 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER9_BLOCK9_THRESHOLD_ATTRIBUTE_ID                   0x0198 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER9_BLOCK10_THRESHOLD_ATTRIBUTE_ID                  0x0199 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER9_BLOCK11_THRESHOLD_ATTRIBUTE_ID                  0x019A // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER9_BLOCK12_THRESHOLD_ATTRIBUTE_ID                  0x019B // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER9_BLOCK13_THRESHOLD_ATTRIBUTE_ID                  0x019C // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER9_BLOCK14_THRESHOLD_ATTRIBUTE_ID                  0x019D // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER9_BLOCK15_THRESHOLD_ATTRIBUTE_ID                  0x019E // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER9_BLOCK_THRESHOLD_COUNT_ATTRIBUTE_ID              0x019F // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER10_BLOCK1_THRESHOLD_ATTRIBUTE_ID                  0x01A0 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER10_BLOCK2_THRESHOLD_ATTRIBUTE_ID                  0x01A1 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER10_BLOCK3_THRESHOLD_ATTRIBUTE_ID                  0x01A2 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER10_BLOCK4_THRESHOLD_ATTRIBUTE_ID                  0x01A3 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER10_BLOCK5_THRESHOLD_ATTRIBUTE_ID                  0x01A4 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER10_BLOCK6_THRESHOLD_ATTRIBUTE_ID                  0x01A5 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER10_BLOCK7_THRESHOLD_ATTRIBUTE_ID                  0x01A6 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER10_BLOCK8_THRESHOLD_ATTRIBUTE_ID                  0x01A7 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER10_BLOCK9_THRESHOLD_ATTRIBUTE_ID                  0x01A8 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER10_BLOCK10_THRESHOLD_ATTRIBUTE_ID                 0x01A9 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER10_BLOCK11_THRESHOLD_ATTRIBUTE_ID                 0x01AA // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER10_BLOCK12_THRESHOLD_ATTRIBUTE_ID                 0x01AB // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER10_BLOCK13_THRESHOLD_ATTRIBUTE_ID                 0x01AC // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER10_BLOCK14_THRESHOLD_ATTRIBUTE_ID                 0x01AD // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER10_BLOCK15_THRESHOLD_ATTRIBUTE_ID                 0x01AE // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER10_BLOCK_THRESHOLD_COUNT_ATTRIBUTE_ID             0x01AF // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER11_BLOCK1_THRESHOLD_ATTRIBUTE_ID                  0x01B0 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER11_BLOCK2_THRESHOLD_ATTRIBUTE_ID                  0x01B1 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER11_BLOCK3_THRESHOLD_ATTRIBUTE_ID                  0x01B2 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER11_BLOCK4_THRESHOLD_ATTRIBUTE_ID                  0x01B3 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER11_BLOCK5_THRESHOLD_ATTRIBUTE_ID                  0x01B4 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER11_BLOCK6_THRESHOLD_ATTRIBUTE_ID                  0x01B5 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER11_BLOCK7_THRESHOLD_ATTRIBUTE_ID                  0x01B6 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER11_BLOCK8_THRESHOLD_ATTRIBUTE_ID                  0x01B7 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER11_BLOCK9_THRESHOLD_ATTRIBUTE_ID                  0x01B8 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER11_BLOCK10_THRESHOLD_ATTRIBUTE_ID                 0x01B9 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER11_BLOCK11_THRESHOLD_ATTRIBUTE_ID                 0x01BA // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER11_BLOCK12_THRESHOLD_ATTRIBUTE_ID                 0x01BB // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER11_BLOCK13_THRESHOLD_ATTRIBUTE_ID                 0x01BC // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER11_BLOCK14_THRESHOLD_ATTRIBUTE_ID                 0x01BD // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER11_BLOCK15_THRESHOLD_ATTRIBUTE_ID                 0x01BE // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER11_BLOCK_THRESHOLD_COUNT_ATTRIBUTE_ID             0x01BF // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER12_BLOCK1_THRESHOLD_ATTRIBUTE_ID                  0x01C0 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER12_BLOCK2_THRESHOLD_ATTRIBUTE_ID                  0x01C1 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER12_BLOCK3_THRESHOLD_ATTRIBUTE_ID                  0x01C2 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER12_BLOCK4_THRESHOLD_ATTRIBUTE_ID                  0x01C3 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER12_BLOCK5_THRESHOLD_ATTRIBUTE_ID                  0x01C4 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER12_BLOCK6_THRESHOLD_ATTRIBUTE_ID                  0x01C5 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER12_BLOCK7_THRESHOLD_ATTRIBUTE_ID                  0x01C6 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER12_BLOCK8_THRESHOLD_ATTRIBUTE_ID                  0x01C7 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER12_BLOCK9_THRESHOLD_ATTRIBUTE_ID                  0x01C8 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER12_BLOCK10_THRESHOLD_ATTRIBUTE_ID                 0x01C9 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER12_BLOCK11_THRESHOLD_ATTRIBUTE_ID                 0x01CA // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER12_BLOCK12_THRESHOLD_ATTRIBUTE_ID                 0x01CB // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER12_BLOCK13_THRESHOLD_ATTRIBUTE_ID                 0x01CC // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER12_BLOCK14_THRESHOLD_ATTRIBUTE_ID                 0x01CD // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER12_BLOCK15_THRESHOLD_ATTRIBUTE_ID                 0x01CE // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER12_BLOCK_THRESHOLD_COUNT_ATTRIBUTE_ID             0x01CF // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER13_BLOCK1_THRESHOLD_ATTRIBUTE_ID                  0x01D0 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER13_BLOCK2_THRESHOLD_ATTRIBUTE_ID                  0x01D1 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER13_BLOCK3_THRESHOLD_ATTRIBUTE_ID                  0x01D2 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER13_BLOCK4_THRESHOLD_ATTRIBUTE_ID                  0x01D3 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER13_BLOCK5_THRESHOLD_ATTRIBUTE_ID                  0x01D4 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER13_BLOCK6_THRESHOLD_ATTRIBUTE_ID                  0x01D5 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER13_BLOCK7_THRESHOLD_ATTRIBUTE_ID                  0x01D6 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER13_BLOCK8_THRESHOLD_ATTRIBUTE_ID                  0x01D7 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER13_BLOCK9_THRESHOLD_ATTRIBUTE_ID                  0x01D8 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER13_BLOCK10_THRESHOLD_ATTRIBUTE_ID                 0x01D9 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER13_BLOCK11_THRESHOLD_ATTRIBUTE_ID                 0x01DA // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER13_BLOCK12_THRESHOLD_ATTRIBUTE_ID                 0x01DB // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER13_BLOCK13_THRESHOLD_ATTRIBUTE_ID                 0x01DC // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER13_BLOCK14_THRESHOLD_ATTRIBUTE_ID                 0x01DD // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER13_BLOCK15_THRESHOLD_ATTRIBUTE_ID                 0x01DE // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER13_BLOCK_THRESHOLD_COUNT_ATTRIBUTE_ID             0x01DF // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER14_BLOCK1_THRESHOLD_ATTRIBUTE_ID                  0x01E0 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER14_BLOCK2_THRESHOLD_ATTRIBUTE_ID                  0x01E1 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER14_BLOCK3_THRESHOLD_ATTRIBUTE_ID                  0x01E2 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER14_BLOCK4_THRESHOLD_ATTRIBUTE_ID                  0x01E3 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER14_BLOCK5_THRESHOLD_ATTRIBUTE_ID                  0x01E4 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER14_BLOCK6_THRESHOLD_ATTRIBUTE_ID                  0x01E5 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER14_BLOCK7_THRESHOLD_ATTRIBUTE_ID                  0x01E6 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER14_BLOCK8_THRESHOLD_ATTRIBUTE_ID                  0x01E7 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER14_BLOCK9_THRESHOLD_ATTRIBUTE_ID                  0x01E8 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER14_BLOCK10_THRESHOLD_ATTRIBUTE_ID                 0x01E9 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER14_BLOCK11_THRESHOLD_ATTRIBUTE_ID                 0x01EA // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER14_BLOCK12_THRESHOLD_ATTRIBUTE_ID                 0x01EB // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER14_BLOCK13_THRESHOLD_ATTRIBUTE_ID                 0x01EC // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER14_BLOCK14_THRESHOLD_ATTRIBUTE_ID                 0x01ED // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER14_BLOCK15_THRESHOLD_ATTRIBUTE_ID                 0x01EE // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER14_BLOCK_THRESHOLD_COUNT_ATTRIBUTE_ID             0x01EF // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER15_BLOCK1_THRESHOLD_ATTRIBUTE_ID                  0x01F0 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER15_BLOCK2_THRESHOLD_ATTRIBUTE_ID                  0x01F1 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER15_BLOCK3_THRESHOLD_ATTRIBUTE_ID                  0x01F2 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER15_BLOCK4_THRESHOLD_ATTRIBUTE_ID                  0x01F3 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER15_BLOCK5_THRESHOLD_ATTRIBUTE_ID                  0x01F4 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER15_BLOCK6_THRESHOLD_ATTRIBUTE_ID                  0x01F5 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER15_BLOCK7_THRESHOLD_ATTRIBUTE_ID                  0x01F6 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER15_BLOCK8_THRESHOLD_ATTRIBUTE_ID                  0x01F7 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER15_BLOCK9_THRESHOLD_ATTRIBUTE_ID                  0x01F8 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER15_BLOCK10_THRESHOLD_ATTRIBUTE_ID                 0x01F9 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER15_BLOCK11_THRESHOLD_ATTRIBUTE_ID                 0x01FA // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER15_BLOCK12_THRESHOLD_ATTRIBUTE_ID                 0x01FB // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER15_BLOCK13_THRESHOLD_ATTRIBUTE_ID                 0x01FC // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER15_BLOCK14_THRESHOLD_ATTRIBUTE_ID                 0x01FD // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER15_BLOCK15_THRESHOLD_ATTRIBUTE_ID                 0x01FE // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER15_BLOCK_THRESHOLD_COUNT_ATTRIBUTE_ID             0x01FF // Ver.: since se-1.2a-07-5356-19
#define ATTR_START_OF_BLOCK_PERIOD_ATTRIBUTE_ID                    0x0200 // Ver.: always
#define ATTR_BLOCK_PERIOD_DURATION_MINUTES_ATTRIBUTE_ID            0x0201 // Ver.: always
#define ATTR_THRESHOLD_MULTIPLIER_ATTRIBUTE_ID                     0x0202 // Ver.: always
#define ATTR_THRESHOLD_DIVISOR_ATTRIBUTE_ID                        0x0203 // Ver.: always
#define ATTR_BLOCK_PERIOD_DURATION_TYPE_ATTRIBUTE_ID               0x0204 // Ver.: since se-1.2a-07-5356-19
#define ATTR_COMMODITY_TYPE_SERVER_ATTRIBUTE_ID                    0x0300 // Ver.: always
#define ATTR_STANDING_CHARGE_ATTRIBUTE_ID                          0x0301 // Ver.: always
#define ATTR_CONVERSION_FACTOR_ATTRIBUTE_ID                        0x0302 // Ver.: since se-1.1a-07-5356-17
#define ATTR_CONVERSION_FACTOR_TRAILING_DIGIT_ATTRIBUTE_ID         0x0303 // Ver.: since se-1.1a-07-5356-17
#define ATTR_CALORIFIC_VALUE_ATTRIBUTE_ID                          0x0304 // Ver.: since se-1.1a-07-5356-17
#define ATTR_CALORIFIC_VALUE_UNIT_ATTRIBUTE_ID                     0x0305 // Ver.: since se-1.1a-07-5356-17
#define ATTR_CALORIFIC_VALUE_TRAILING_DIGIT_ATTRIBUTE_ID           0x0306 // Ver.: since se-1.1a-07-5356-17
#define ATTR_NO_TIER_BLOCK1_PRICE_ATTRIBUTE_ID                     0x0400 // Ver.: always
#define ATTR_NO_TIER_BLOCK2_PRICE_ATTRIBUTE_ID                     0x0401 // Ver.: always
#define ATTR_NO_TIER_BLOCK3_PRICE_ATTRIBUTE_ID                     0x0402 // Ver.: always
#define ATTR_NO_TIER_BLOCK4_PRICE_ATTRIBUTE_ID                     0x0403 // Ver.: always
#define ATTR_NO_TIER_BLOCK5_PRICE_ATTRIBUTE_ID                     0x0404 // Ver.: always
#define ATTR_NO_TIER_BLOCK6_PRICE_ATTRIBUTE_ID                     0x0405 // Ver.: always
#define ATTR_NO_TIER_BLOCK7_PRICE_ATTRIBUTE_ID                     0x0406 // Ver.: always
#define ATTR_NO_TIER_BLOCK8_PRICE_ATTRIBUTE_ID                     0x0407 // Ver.: always
#define ATTR_NO_TIER_BLOCK9_PRICE_ATTRIBUTE_ID                     0x0408 // Ver.: always
#define ATTR_NO_TIER_BLOCK10_PRICE_ATTRIBUTE_ID                    0x0409 // Ver.: always
#define ATTR_NO_TIER_BLOCK11_PRICE_ATTRIBUTE_ID                    0x040A // Ver.: always
#define ATTR_NO_TIER_BLOCK12_PRICE_ATTRIBUTE_ID                    0x040B // Ver.: always
#define ATTR_NO_TIER_BLOCK13_PRICE_ATTRIBUTE_ID                    0x040C // Ver.: always
#define ATTR_NO_TIER_BLOCK14_PRICE_ATTRIBUTE_ID                    0x040D // Ver.: always
#define ATTR_NO_TIER_BLOCK15_PRICE_ATTRIBUTE_ID                    0x040E // Ver.: always
#define ATTR_NO_TIER_BLOCK16_PRICE_ATTRIBUTE_ID                    0x040F // Ver.: always
#define ATTR_TIER1_BLOCK1_PRICE_ATTRIBUTE_ID                       0x0410 // Ver.: always
#define ATTR_TIER1_BLOCK2_PRICE_ATTRIBUTE_ID                       0x0411 // Ver.: always
#define ATTR_TIER1_BLOCK3_PRICE_ATTRIBUTE_ID                       0x0412 // Ver.: always
#define ATTR_TIER1_BLOCK4_PRICE_ATTRIBUTE_ID                       0x0413 // Ver.: always
#define ATTR_TIER1_BLOCK5_PRICE_ATTRIBUTE_ID                       0x0414 // Ver.: always
#define ATTR_TIER1_BLOCK6_PRICE_ATTRIBUTE_ID                       0x0415 // Ver.: always
#define ATTR_TIER1_BLOCK7_PRICE_ATTRIBUTE_ID                       0x0416 // Ver.: always
#define ATTR_TIER1_BLOCK8_PRICE_ATTRIBUTE_ID                       0x0417 // Ver.: always
#define ATTR_TIER1_BLOCK9_PRICE_ATTRIBUTE_ID                       0x0418 // Ver.: always
#define ATTR_TIER1_BLOCK10_PRICE_ATTRIBUTE_ID                      0x0419 // Ver.: always
#define ATTR_TIER1_BLOCK11_PRICE_ATTRIBUTE_ID                      0x041A // Ver.: always
#define ATTR_TIER1_BLOCK12_PRICE_ATTRIBUTE_ID                      0x041B // Ver.: always
#define ATTR_TIER1_BLOCK13_PRICE_ATTRIBUTE_ID                      0x041C // Ver.: always
#define ATTR_TIER1_BLOCK14_PRICE_ATTRIBUTE_ID                      0x041D // Ver.: always
#define ATTR_TIER1_BLOCK15_PRICE_ATTRIBUTE_ID                      0x041E // Ver.: always
#define ATTR_TIER1_BLOCK16_PRICE_ATTRIBUTE_ID                      0x041F // Ver.: always
#define ATTR_TIER2_BLOCK1_PRICE_ATTRIBUTE_ID                       0x0420 // Ver.: always
#define ATTR_TIER2_BLOCK2_PRICE_ATTRIBUTE_ID                       0x0421 // Ver.: always
#define ATTR_TIER2_BLOCK3_PRICE_ATTRIBUTE_ID                       0x0422 // Ver.: always
#define ATTR_TIER2_BLOCK4_PRICE_ATTRIBUTE_ID                       0x0423 // Ver.: always
#define ATTR_TIER2_BLOCK5_PRICE_ATTRIBUTE_ID                       0x0424 // Ver.: always
#define ATTR_TIER2_BLOCK6_PRICE_ATTRIBUTE_ID                       0x0425 // Ver.: always
#define ATTR_TIER2_BLOCK7_PRICE_ATTRIBUTE_ID                       0x0426 // Ver.: always
#define ATTR_TIER2_BLOCK8_PRICE_ATTRIBUTE_ID                       0x0427 // Ver.: always
#define ATTR_TIER2_BLOCK9_PRICE_ATTRIBUTE_ID                       0x0428 // Ver.: always
#define ATTR_TIER2_BLOCK10_PRICE_ATTRIBUTE_ID                      0x0429 // Ver.: always
#define ATTR_TIER2_BLOCK11_PRICE_ATTRIBUTE_ID                      0x042A // Ver.: always
#define ATTR_TIER2_BLOCK12_PRICE_ATTRIBUTE_ID                      0x042B // Ver.: always
#define ATTR_TIER2_BLOCK13_PRICE_ATTRIBUTE_ID                      0x042C // Ver.: always
#define ATTR_TIER2_BLOCK14_PRICE_ATTRIBUTE_ID                      0x042D // Ver.: always
#define ATTR_TIER2_BLOCK15_PRICE_ATTRIBUTE_ID                      0x042E // Ver.: always
#define ATTR_TIER2_BLOCK16_PRICE_ATTRIBUTE_ID                      0x042F // Ver.: always
#define ATTR_TIER3_BLOCK1_PRICE_ATTRIBUTE_ID                       0x0430 // Ver.: always
#define ATTR_TIER3_BLOCK2_PRICE_ATTRIBUTE_ID                       0x0431 // Ver.: always
#define ATTR_TIER3_BLOCK3_PRICE_ATTRIBUTE_ID                       0x0432 // Ver.: always
#define ATTR_TIER3_BLOCK4_PRICE_ATTRIBUTE_ID                       0x0433 // Ver.: always
#define ATTR_TIER3_BLOCK5_PRICE_ATTRIBUTE_ID                       0x0434 // Ver.: always
#define ATTR_TIER3_BLOCK6_PRICE_ATTRIBUTE_ID                       0x0435 // Ver.: always
#define ATTR_TIER3_BLOCK7_PRICE_ATTRIBUTE_ID                       0x0436 // Ver.: always
#define ATTR_TIER3_BLOCK8_PRICE_ATTRIBUTE_ID                       0x0437 // Ver.: always
#define ATTR_TIER3_BLOCK9_PRICE_ATTRIBUTE_ID                       0x0438 // Ver.: always
#define ATTR_TIER3_BLOCK10_PRICE_ATTRIBUTE_ID                      0x0439 // Ver.: always
#define ATTR_TIER3_BLOCK11_PRICE_ATTRIBUTE_ID                      0x043A // Ver.: always
#define ATTR_TIER3_BLOCK12_PRICE_ATTRIBUTE_ID                      0x043B // Ver.: always
#define ATTR_TIER3_BLOCK13_PRICE_ATTRIBUTE_ID                      0x043C // Ver.: always
#define ATTR_TIER3_BLOCK14_PRICE_ATTRIBUTE_ID                      0x043D // Ver.: always
#define ATTR_TIER3_BLOCK15_PRICE_ATTRIBUTE_ID                      0x043E // Ver.: always
#define ATTR_TIER3_BLOCK16_PRICE_ATTRIBUTE_ID                      0x043F // Ver.: always
#define ATTR_TIER4_BLOCK1_PRICE_ATTRIBUTE_ID                       0x0440 // Ver.: always
#define ATTR_TIER4_BLOCK2_PRICE_ATTRIBUTE_ID                       0x0441 // Ver.: always
#define ATTR_TIER4_BLOCK3_PRICE_ATTRIBUTE_ID                       0x0442 // Ver.: always
#define ATTR_TIER4_BLOCK4_PRICE_ATTRIBUTE_ID                       0x0443 // Ver.: always
#define ATTR_TIER4_BLOCK5_PRICE_ATTRIBUTE_ID                       0x0444 // Ver.: always
#define ATTR_TIER4_BLOCK6_PRICE_ATTRIBUTE_ID                       0x0445 // Ver.: always
#define ATTR_TIER4_BLOCK7_PRICE_ATTRIBUTE_ID                       0x0446 // Ver.: always
#define ATTR_TIER4_BLOCK8_PRICE_ATTRIBUTE_ID                       0x0447 // Ver.: always
#define ATTR_TIER4_BLOCK9_PRICE_ATTRIBUTE_ID                       0x0448 // Ver.: always
#define ATTR_TIER4_BLOCK10_PRICE_ATTRIBUTE_ID                      0x0449 // Ver.: always
#define ATTR_TIER4_BLOCK11_PRICE_ATTRIBUTE_ID                      0x044A // Ver.: always
#define ATTR_TIER4_BLOCK12_PRICE_ATTRIBUTE_ID                      0x044B // Ver.: always
#define ATTR_TIER4_BLOCK13_PRICE_ATTRIBUTE_ID                      0x044C // Ver.: always
#define ATTR_TIER4_BLOCK14_PRICE_ATTRIBUTE_ID                      0x044D // Ver.: always
#define ATTR_TIER4_BLOCK15_PRICE_ATTRIBUTE_ID                      0x044E // Ver.: always
#define ATTR_TIER4_BLOCK16_PRICE_ATTRIBUTE_ID                      0x044F // Ver.: always
#define ATTR_TIER5_BLOCK1_PRICE_ATTRIBUTE_ID                       0x0450 // Ver.: always
#define ATTR_TIER5_BLOCK2_PRICE_ATTRIBUTE_ID                       0x0451 // Ver.: always
#define ATTR_TIER5_BLOCK3_PRICE_ATTRIBUTE_ID                       0x0452 // Ver.: always
#define ATTR_TIER5_BLOCK4_PRICE_ATTRIBUTE_ID                       0x0453 // Ver.: always
#define ATTR_TIER5_BLOCK5_PRICE_ATTRIBUTE_ID                       0x0454 // Ver.: always
#define ATTR_TIER5_BLOCK6_PRICE_ATTRIBUTE_ID                       0x0455 // Ver.: always
#define ATTR_TIER5_BLOCK7_PRICE_ATTRIBUTE_ID                       0x0456 // Ver.: always
#define ATTR_TIER5_BLOCK8_PRICE_ATTRIBUTE_ID                       0x0457 // Ver.: always
#define ATTR_TIER5_BLOCK9_PRICE_ATTRIBUTE_ID                       0x0458 // Ver.: always
#define ATTR_TIER5_BLOCK10_PRICE_ATTRIBUTE_ID                      0x0459 // Ver.: always
#define ATTR_TIER5_BLOCK11_PRICE_ATTRIBUTE_ID                      0x045A // Ver.: always
#define ATTR_TIER5_BLOCK12_PRICE_ATTRIBUTE_ID                      0x045B // Ver.: always
#define ATTR_TIER5_BLOCK13_PRICE_ATTRIBUTE_ID                      0x045C // Ver.: always
#define ATTR_TIER5_BLOCK14_PRICE_ATTRIBUTE_ID                      0x045D // Ver.: always
#define ATTR_TIER5_BLOCK15_PRICE_ATTRIBUTE_ID                      0x045E // Ver.: always
#define ATTR_TIER5_BLOCK16_PRICE_ATTRIBUTE_ID                      0x045F // Ver.: always
#define ATTR_TIER6_BLOCK1_PRICE_ATTRIBUTE_ID                       0x0460 // Ver.: always
#define ATTR_TIER6_BLOCK2_PRICE_ATTRIBUTE_ID                       0x0461 // Ver.: always
#define ATTR_TIER6_BLOCK3_PRICE_ATTRIBUTE_ID                       0x0462 // Ver.: always
#define ATTR_TIER6_BLOCK4_PRICE_ATTRIBUTE_ID                       0x0463 // Ver.: always
#define ATTR_TIER6_BLOCK5_PRICE_ATTRIBUTE_ID                       0x0464 // Ver.: always
#define ATTR_TIER6_BLOCK6_PRICE_ATTRIBUTE_ID                       0x0465 // Ver.: always
#define ATTR_TIER6_BLOCK7_PRICE_ATTRIBUTE_ID                       0x0466 // Ver.: always
#define ATTR_TIER6_BLOCK8_PRICE_ATTRIBUTE_ID                       0x0467 // Ver.: always
#define ATTR_TIER6_BLOCK9_PRICE_ATTRIBUTE_ID                       0x0468 // Ver.: always
#define ATTR_TIER6_BLOCK10_PRICE_ATTRIBUTE_ID                      0x0469 // Ver.: always
#define ATTR_TIER6_BLOCK11_PRICE_ATTRIBUTE_ID                      0x046A // Ver.: always
#define ATTR_TIER6_BLOCK12_PRICE_ATTRIBUTE_ID                      0x046B // Ver.: always
#define ATTR_TIER6_BLOCK13_PRICE_ATTRIBUTE_ID                      0x046C // Ver.: always
#define ATTR_TIER6_BLOCK14_PRICE_ATTRIBUTE_ID                      0x046D // Ver.: always
#define ATTR_TIER6_BLOCK15_PRICE_ATTRIBUTE_ID                      0x046E // Ver.: always
#define ATTR_TIER6_BLOCK16_PRICE_ATTRIBUTE_ID                      0x046F // Ver.: always
#define ATTR_TIER7_BLOCK1_PRICE_ATTRIBUTE_ID                       0x0470 // Ver.: always
#define ATTR_TIER7_BLOCK2_PRICE_ATTRIBUTE_ID                       0x0471 // Ver.: always
#define ATTR_TIER7_BLOCK3_PRICE_ATTRIBUTE_ID                       0x0472 // Ver.: always
#define ATTR_TIER7_BLOCK4_PRICE_ATTRIBUTE_ID                       0x0473 // Ver.: always
#define ATTR_TIER7_BLOCK5_PRICE_ATTRIBUTE_ID                       0x0474 // Ver.: always
#define ATTR_TIER7_BLOCK6_PRICE_ATTRIBUTE_ID                       0x0475 // Ver.: always
#define ATTR_TIER7_BLOCK7_PRICE_ATTRIBUTE_ID                       0x0476 // Ver.: always
#define ATTR_TIER7_BLOCK8_PRICE_ATTRIBUTE_ID                       0x0477 // Ver.: always
#define ATTR_TIER7_BLOCK9_PRICE_ATTRIBUTE_ID                       0x0478 // Ver.: always
#define ATTR_TIER7_BLOCK10_PRICE_ATTRIBUTE_ID                      0x0479 // Ver.: always
#define ATTR_TIER7_BLOCK11_PRICE_ATTRIBUTE_ID                      0x047A // Ver.: always
#define ATTR_TIER7_BLOCK12_PRICE_ATTRIBUTE_ID                      0x047B // Ver.: always
#define ATTR_TIER7_BLOCK13_PRICE_ATTRIBUTE_ID                      0x047C // Ver.: always
#define ATTR_TIER7_BLOCK14_PRICE_ATTRIBUTE_ID                      0x047D // Ver.: always
#define ATTR_TIER7_BLOCK15_PRICE_ATTRIBUTE_ID                      0x047E // Ver.: always
#define ATTR_TIER7_BLOCK16_PRICE_ATTRIBUTE_ID                      0x047F // Ver.: always
#define ATTR_TIER8_BLOCK1_PRICE_ATTRIBUTE_ID                       0x0480 // Ver.: always
#define ATTR_TIER8_BLOCK2_PRICE_ATTRIBUTE_ID                       0x0481 // Ver.: always
#define ATTR_TIER8_BLOCK3_PRICE_ATTRIBUTE_ID                       0x0482 // Ver.: always
#define ATTR_TIER8_BLOCK4_PRICE_ATTRIBUTE_ID                       0x0483 // Ver.: always
#define ATTR_TIER8_BLOCK5_PRICE_ATTRIBUTE_ID                       0x0484 // Ver.: always
#define ATTR_TIER8_BLOCK6_PRICE_ATTRIBUTE_ID                       0x0485 // Ver.: always
#define ATTR_TIER8_BLOCK7_PRICE_ATTRIBUTE_ID                       0x0486 // Ver.: always
#define ATTR_TIER8_BLOCK8_PRICE_ATTRIBUTE_ID                       0x0487 // Ver.: always
#define ATTR_TIER8_BLOCK9_PRICE_ATTRIBUTE_ID                       0x0488 // Ver.: always
#define ATTR_TIER8_BLOCK10_PRICE_ATTRIBUTE_ID                      0x0489 // Ver.: always
#define ATTR_TIER8_BLOCK11_PRICE_ATTRIBUTE_ID                      0x048A // Ver.: always
#define ATTR_TIER8_BLOCK12_PRICE_ATTRIBUTE_ID                      0x048B // Ver.: always
#define ATTR_TIER8_BLOCK13_PRICE_ATTRIBUTE_ID                      0x048C // Ver.: always
#define ATTR_TIER8_BLOCK14_PRICE_ATTRIBUTE_ID                      0x048D // Ver.: always
#define ATTR_TIER8_BLOCK15_PRICE_ATTRIBUTE_ID                      0x048E // Ver.: always
#define ATTR_TIER8_BLOCK16_PRICE_ATTRIBUTE_ID                      0x048F // Ver.: always
#define ATTR_TIER9_BLOCK1_PRICE_ATTRIBUTE_ID                       0x0490 // Ver.: always
#define ATTR_TIER9_BLOCK2_PRICE_ATTRIBUTE_ID                       0x0491 // Ver.: always
#define ATTR_TIER9_BLOCK3_PRICE_ATTRIBUTE_ID                       0x0492 // Ver.: always
#define ATTR_TIER9_BLOCK4_PRICE_ATTRIBUTE_ID                       0x0493 // Ver.: always
#define ATTR_TIER9_BLOCK5_PRICE_ATTRIBUTE_ID                       0x0494 // Ver.: always
#define ATTR_TIER9_BLOCK6_PRICE_ATTRIBUTE_ID                       0x0495 // Ver.: always
#define ATTR_TIER9_BLOCK7_PRICE_ATTRIBUTE_ID                       0x0496 // Ver.: always
#define ATTR_TIER9_BLOCK8_PRICE_ATTRIBUTE_ID                       0x0497 // Ver.: always
#define ATTR_TIER9_BLOCK9_PRICE_ATTRIBUTE_ID                       0x0498 // Ver.: always
#define ATTR_TIER9_BLOCK10_PRICE_ATTRIBUTE_ID                      0x0499 // Ver.: always
#define ATTR_TIER9_BLOCK11_PRICE_ATTRIBUTE_ID                      0x049A // Ver.: always
#define ATTR_TIER9_BLOCK12_PRICE_ATTRIBUTE_ID                      0x049B // Ver.: always
#define ATTR_TIER9_BLOCK13_PRICE_ATTRIBUTE_ID                      0x049C // Ver.: always
#define ATTR_TIER9_BLOCK14_PRICE_ATTRIBUTE_ID                      0x049D // Ver.: always
#define ATTR_TIER9_BLOCK15_PRICE_ATTRIBUTE_ID                      0x049E // Ver.: always
#define ATTR_TIER9_BLOCK16_PRICE_ATTRIBUTE_ID                      0x049F // Ver.: always
#define ATTR_TIER10_BLOCK1_PRICE_ATTRIBUTE_ID                      0x04A0 // Ver.: always
#define ATTR_TIER10_BLOCK2_PRICE_ATTRIBUTE_ID                      0x04A1 // Ver.: always
#define ATTR_TIER10_BLOCK3_PRICE_ATTRIBUTE_ID                      0x04A2 // Ver.: always
#define ATTR_TIER10_BLOCK4_PRICE_ATTRIBUTE_ID                      0x04A3 // Ver.: always
#define ATTR_TIER10_BLOCK5_PRICE_ATTRIBUTE_ID                      0x04A4 // Ver.: always
#define ATTR_TIER10_BLOCK6_PRICE_ATTRIBUTE_ID                      0x04A5 // Ver.: always
#define ATTR_TIER10_BLOCK7_PRICE_ATTRIBUTE_ID                      0x04A6 // Ver.: always
#define ATTR_TIER10_BLOCK8_PRICE_ATTRIBUTE_ID                      0x04A7 // Ver.: always
#define ATTR_TIER10_BLOCK9_PRICE_ATTRIBUTE_ID                      0x04A8 // Ver.: always
#define ATTR_TIER10_BLOCK10_PRICE_ATTRIBUTE_ID                     0x04A9 // Ver.: always
#define ATTR_TIER10_BLOCK11_PRICE_ATTRIBUTE_ID                     0x04AA // Ver.: always
#define ATTR_TIER10_BLOCK12_PRICE_ATTRIBUTE_ID                     0x04AB // Ver.: always
#define ATTR_TIER10_BLOCK13_PRICE_ATTRIBUTE_ID                     0x04AC // Ver.: always
#define ATTR_TIER10_BLOCK14_PRICE_ATTRIBUTE_ID                     0x04AD // Ver.: always
#define ATTR_TIER10_BLOCK15_PRICE_ATTRIBUTE_ID                     0x04AE // Ver.: always
#define ATTR_TIER10_BLOCK16_PRICE_ATTRIBUTE_ID                     0x04AF // Ver.: always
#define ATTR_TIER11_BLOCK1_PRICE_ATTRIBUTE_ID                      0x04B0 // Ver.: always
#define ATTR_TIER11_BLOCK2_PRICE_ATTRIBUTE_ID                      0x04B1 // Ver.: always
#define ATTR_TIER11_BLOCK3_PRICE_ATTRIBUTE_ID                      0x04B2 // Ver.: always
#define ATTR_TIER11_BLOCK4_PRICE_ATTRIBUTE_ID                      0x04B3 // Ver.: always
#define ATTR_TIER11_BLOCK5_PRICE_ATTRIBUTE_ID                      0x04B4 // Ver.: always
#define ATTR_TIER11_BLOCK6_PRICE_ATTRIBUTE_ID                      0x04B5 // Ver.: always
#define ATTR_TIER11_BLOCK7_PRICE_ATTRIBUTE_ID                      0x04B6 // Ver.: always
#define ATTR_TIER11_BLOCK8_PRICE_ATTRIBUTE_ID                      0x04B7 // Ver.: always
#define ATTR_TIER11_BLOCK9_PRICE_ATTRIBUTE_ID                      0x04B8 // Ver.: always
#define ATTR_TIER11_BLOCK10_PRICE_ATTRIBUTE_ID                     0x04B9 // Ver.: always
#define ATTR_TIER11_BLOCK11_PRICE_ATTRIBUTE_ID                     0x04BA // Ver.: always
#define ATTR_TIER11_BLOCK12_PRICE_ATTRIBUTE_ID                     0x04BB // Ver.: always
#define ATTR_TIER11_BLOCK13_PRICE_ATTRIBUTE_ID                     0x04BC // Ver.: always
#define ATTR_TIER11_BLOCK14_PRICE_ATTRIBUTE_ID                     0x04BD // Ver.: always
#define ATTR_TIER11_BLOCK15_PRICE_ATTRIBUTE_ID                     0x04BE // Ver.: always
#define ATTR_TIER11_BLOCK16_PRICE_ATTRIBUTE_ID                     0x04BF // Ver.: always
#define ATTR_TIER12_BLOCK1_PRICE_ATTRIBUTE_ID                      0x04C0 // Ver.: always
#define ATTR_TIER12_BLOCK2_PRICE_ATTRIBUTE_ID                      0x04C1 // Ver.: always
#define ATTR_TIER12_BLOCK3_PRICE_ATTRIBUTE_ID                      0x04C2 // Ver.: always
#define ATTR_TIER12_BLOCK4_PRICE_ATTRIBUTE_ID                      0x04C3 // Ver.: always
#define ATTR_TIER12_BLOCK5_PRICE_ATTRIBUTE_ID                      0x04C4 // Ver.: always
#define ATTR_TIER12_BLOCK6_PRICE_ATTRIBUTE_ID                      0x04C5 // Ver.: always
#define ATTR_TIER12_BLOCK7_PRICE_ATTRIBUTE_ID                      0x04C6 // Ver.: always
#define ATTR_TIER12_BLOCK8_PRICE_ATTRIBUTE_ID                      0x04C7 // Ver.: always
#define ATTR_TIER12_BLOCK9_PRICE_ATTRIBUTE_ID                      0x04C8 // Ver.: always
#define ATTR_TIER12_BLOCK10_PRICE_ATTRIBUTE_ID                     0x04C9 // Ver.: always
#define ATTR_TIER12_BLOCK11_PRICE_ATTRIBUTE_ID                     0x04CA // Ver.: always
#define ATTR_TIER12_BLOCK12_PRICE_ATTRIBUTE_ID                     0x04CB // Ver.: always
#define ATTR_TIER12_BLOCK13_PRICE_ATTRIBUTE_ID                     0x04CC // Ver.: always
#define ATTR_TIER12_BLOCK14_PRICE_ATTRIBUTE_ID                     0x04CD // Ver.: always
#define ATTR_TIER12_BLOCK15_PRICE_ATTRIBUTE_ID                     0x04CE // Ver.: always
#define ATTR_TIER12_BLOCK16_PRICE_ATTRIBUTE_ID                     0x04CF // Ver.: always
#define ATTR_TIER13_BLOCK1_PRICE_ATTRIBUTE_ID                      0x04D0 // Ver.: always
#define ATTR_TIER13_BLOCK2_PRICE_ATTRIBUTE_ID                      0x04D1 // Ver.: always
#define ATTR_TIER13_BLOCK3_PRICE_ATTRIBUTE_ID                      0x04D2 // Ver.: always
#define ATTR_TIER13_BLOCK4_PRICE_ATTRIBUTE_ID                      0x04D3 // Ver.: always
#define ATTR_TIER13_BLOCK5_PRICE_ATTRIBUTE_ID                      0x04D4 // Ver.: always
#define ATTR_TIER13_BLOCK6_PRICE_ATTRIBUTE_ID                      0x04D5 // Ver.: always
#define ATTR_TIER13_BLOCK7_PRICE_ATTRIBUTE_ID                      0x04D6 // Ver.: always
#define ATTR_TIER13_BLOCK8_PRICE_ATTRIBUTE_ID                      0x04D7 // Ver.: always
#define ATTR_TIER13_BLOCK9_PRICE_ATTRIBUTE_ID                      0x04D8 // Ver.: always
#define ATTR_TIER13_BLOCK10_PRICE_ATTRIBUTE_ID                     0x04D9 // Ver.: always
#define ATTR_TIER13_BLOCK11_PRICE_ATTRIBUTE_ID                     0x04DA // Ver.: always
#define ATTR_TIER13_BLOCK12_PRICE_ATTRIBUTE_ID                     0x04DB // Ver.: always
#define ATTR_TIER13_BLOCK13_PRICE_ATTRIBUTE_ID                     0x04DC // Ver.: always
#define ATTR_TIER13_BLOCK14_PRICE_ATTRIBUTE_ID                     0x04DD // Ver.: always
#define ATTR_TIER13_BLOCK15_PRICE_ATTRIBUTE_ID                     0x04DE // Ver.: always
#define ATTR_TIER13_BLOCK16_PRICE_ATTRIBUTE_ID                     0x04DF // Ver.: always
#define ATTR_TIER14_BLOCK1_PRICE_ATTRIBUTE_ID                      0x04E0 // Ver.: always
#define ATTR_TIER14_BLOCK2_PRICE_ATTRIBUTE_ID                      0x04E1 // Ver.: always
#define ATTR_TIER14_BLOCK3_PRICE_ATTRIBUTE_ID                      0x04E2 // Ver.: always
#define ATTR_TIER14_BLOCK4_PRICE_ATTRIBUTE_ID                      0x04E3 // Ver.: always
#define ATTR_TIER14_BLOCK5_PRICE_ATTRIBUTE_ID                      0x04E4 // Ver.: always
#define ATTR_TIER14_BLOCK6_PRICE_ATTRIBUTE_ID                      0x04E5 // Ver.: always
#define ATTR_TIER14_BLOCK7_PRICE_ATTRIBUTE_ID                      0x04E6 // Ver.: always
#define ATTR_TIER14_BLOCK8_PRICE_ATTRIBUTE_ID                      0x04E7 // Ver.: always
#define ATTR_TIER14_BLOCK9_PRICE_ATTRIBUTE_ID                      0x04E8 // Ver.: always
#define ATTR_TIER14_BLOCK10_PRICE_ATTRIBUTE_ID                     0x04E9 // Ver.: always
#define ATTR_TIER14_BLOCK11_PRICE_ATTRIBUTE_ID                     0x04EA // Ver.: always
#define ATTR_TIER14_BLOCK12_PRICE_ATTRIBUTE_ID                     0x04EB // Ver.: always
#define ATTR_TIER14_BLOCK13_PRICE_ATTRIBUTE_ID                     0x04EC // Ver.: always
#define ATTR_TIER14_BLOCK14_PRICE_ATTRIBUTE_ID                     0x04ED // Ver.: always
#define ATTR_TIER14_BLOCK15_PRICE_ATTRIBUTE_ID                     0x04EE // Ver.: always
#define ATTR_TIER14_BLOCK16_PRICE_ATTRIBUTE_ID                     0x04EF // Ver.: always
#define ATTR_TIER15_BLOCK1_PRICE_ATTRIBUTE_ID                      0x04F0 // Ver.: always
#define ATTR_TIER15_BLOCK2_PRICE_ATTRIBUTE_ID                      0x04F1 // Ver.: always
#define ATTR_TIER15_BLOCK3_PRICE_ATTRIBUTE_ID                      0x04F2 // Ver.: always
#define ATTR_TIER15_BLOCK4_PRICE_ATTRIBUTE_ID                      0x04F3 // Ver.: always
#define ATTR_TIER15_BLOCK5_PRICE_ATTRIBUTE_ID                      0x04F4 // Ver.: always
#define ATTR_TIER15_BLOCK6_PRICE_ATTRIBUTE_ID                      0x04F5 // Ver.: always
#define ATTR_TIER15_BLOCK7_PRICE_ATTRIBUTE_ID                      0x04F6 // Ver.: always
#define ATTR_TIER15_BLOCK8_PRICE_ATTRIBUTE_ID                      0x04F7 // Ver.: always
#define ATTR_TIER15_BLOCK9_PRICE_ATTRIBUTE_ID                      0x04F8 // Ver.: always
#define ATTR_TIER15_BLOCK10_PRICE_ATTRIBUTE_ID                     0x04F9 // Ver.: always
#define ATTR_TIER15_BLOCK11_PRICE_ATTRIBUTE_ID                     0x04FA // Ver.: always
#define ATTR_TIER15_BLOCK12_PRICE_ATTRIBUTE_ID                     0x04FB // Ver.: always
#define ATTR_TIER15_BLOCK13_PRICE_ATTRIBUTE_ID                     0x04FC // Ver.: always
#define ATTR_TIER15_BLOCK14_PRICE_ATTRIBUTE_ID                     0x04FD // Ver.: always
#define ATTR_TIER15_BLOCK15_PRICE_ATTRIBUTE_ID                     0x04FE // Ver.: always
#define ATTR_TIER15_BLOCK16_PRICE_ATTRIBUTE_ID                     0x04FF // Ver.: always
#define ATTR_PRICE_TIER16_ATTRIBUTE_ID                             0x050F // Ver.: since se-1.2a-07-5356-19
#define ATTR_PRICE_TIER17_ATTRIBUTE_ID                             0x0510 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PRICE_TIER18_ATTRIBUTE_ID                             0x0511 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PRICE_TIER19_ATTRIBUTE_ID                             0x0512 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PRICE_TIER20_ATTRIBUTE_ID                             0x0513 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PRICE_TIER21_ATTRIBUTE_ID                             0x0514 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PRICE_TIER22_ATTRIBUTE_ID                             0x0515 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PRICE_TIER23_ATTRIBUTE_ID                             0x0516 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PRICE_TIER24_ATTRIBUTE_ID                             0x0517 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PRICE_TIER25_ATTRIBUTE_ID                             0x0518 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PRICE_TIER26_ATTRIBUTE_ID                             0x0519 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PRICE_TIER27_ATTRIBUTE_ID                             0x051A // Ver.: since se-1.2a-07-5356-19
#define ATTR_PRICE_TIER28_ATTRIBUTE_ID                             0x051B // Ver.: since se-1.2a-07-5356-19
#define ATTR_PRICE_TIER29_ATTRIBUTE_ID                             0x051C // Ver.: since se-1.2a-07-5356-19
#define ATTR_PRICE_TIER30_ATTRIBUTE_ID                             0x051D // Ver.: since se-1.2a-07-5356-19
#define ATTR_PRICE_TIER31_ATTRIBUTE_ID                             0x051E // Ver.: since se-1.2a-07-5356-19
#define ATTR_PRICE_TIER32_ATTRIBUTE_ID                             0x051F // Ver.: since se-1.2a-07-5356-19
#define ATTR_PRICE_TIER33_ATTRIBUTE_ID                             0x0520 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PRICE_TIER34_ATTRIBUTE_ID                             0x0521 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PRICE_TIER35_ATTRIBUTE_ID                             0x0522 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PRICE_TIER36_ATTRIBUTE_ID                             0x0523 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PRICE_TIER37_ATTRIBUTE_ID                             0x0524 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PRICE_TIER38_ATTRIBUTE_ID                             0x0525 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PRICE_TIER39_ATTRIBUTE_ID                             0x0526 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PRICE_TIER40_ATTRIBUTE_ID                             0x0527 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PRICE_TIER41_ATTRIBUTE_ID                             0x0528 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PRICE_TIER42_ATTRIBUTE_ID                             0x0529 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PRICE_TIER43_ATTRIBUTE_ID                             0x052A // Ver.: since se-1.2a-07-5356-19
#define ATTR_PRICE_TIER44_ATTRIBUTE_ID                             0x052B // Ver.: since se-1.2a-07-5356-19
#define ATTR_PRICE_TIER45_ATTRIBUTE_ID                             0x052C // Ver.: since se-1.2a-07-5356-19
#define ATTR_PRICE_TIER46_ATTRIBUTE_ID                             0x052D // Ver.: since se-1.2a-07-5356-19
#define ATTR_PRICE_TIER47_ATTRIBUTE_ID                             0x052E // Ver.: since se-1.2a-07-5356-19
#define ATTR_PRICE_TIER48_ATTRIBUTE_ID                             0x052F // Ver.: since se-1.2a-07-5356-19
#define ATTR_CPP1_PRICE_ATTRIBUTE_ID                               0x05FE // Ver.: since se-1.2a-07-5356-19
#define ATTR_CPP2_PRICE_ATTRIBUTE_ID                               0x05FF // Ver.: since se-1.2a-07-5356-19
#define ATTR_TARIFF_LABEL_ATTRIBUTE_ID                             0x0610 // Ver.: since se-1.2a-07-5356-19
#define ATTR_NUMBER_OF_PRICE_TIERS_IN_USE_ATTRIBUTE_ID             0x0611 // Ver.: since se-1.2a-07-5356-19
#define ATTR_NUMBER_OF_BLOCK_THRESHOLDS_IN_USE_ATTRIBUTE_ID        0x0612 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TIER_BLOCK_MODE_ATTRIBUTE_ID                          0x0613 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TARIFF_UNIT_OF_MEASURE_ATTRIBUTE_ID                   0x0615 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TARIFF_CURRENCY_ATTRIBUTE_ID                          0x0616 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TARIFF_PRICE_TRAILING_DIGIT_ATTRIBUTE_ID              0x0617 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TARIFF_RESOLUTION_PERIOD_ATTRIBUTE_ID                 0x0619 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TARIFF_CO2_ATTRIBUTE_ID                               0x0620 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TARIFF_CO2_UNIT_ATTRIBUTE_ID                          0x0621 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TARIFF_CO2_TRAILING_DIGIT_ATTRIBUTE_ID                0x0622 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_BILLING_PERIOD_START_ATTRIBUTE_ID             0x0700 // Ver.: since se-1.1b-07-5356-18
#define ATTR_CURRENT_BILLING_PERIOD_DURATION_ATTRIBUTE_ID          0x0701 // Ver.: since se-1.1b-07-5356-18
#define ATTR_LAST_BILLING_PERIOD_START_ATTRIBUTE_ID                0x0702 // Ver.: since se-1.2a-07-5356-19
#define ATTR_LAST_BILLING_PERIOD_DURATION_ATTRIBUTE_ID             0x0703 // Ver.: since se-1.2a-07-5356-19
#define ATTR_LAST_BILLING_PERIOD_CONSOLIDATED_BILL_ATTRIBUTE_ID    0x0704 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CREDIT_PAYMENT_DUE_DATE_ATTRIBUTE_ID                  0x0800 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CREDIT_PAYMENT_STATUS_ATTRIBUTE_ID                    0x0801 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CREDIT_PAYMENT_OVER_DUE_AMOUNT_ATTRIBUTE_ID           0x0802 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PAYMENT_DISCOUNT_ATTRIBUTE_ID                         0x080A // Ver.: since se-1.2a-07-5356-19
#define ATTR_PAYMENT_DISCOUNT_PERIOD_ATTRIBUTE_ID                  0x080B // Ver.: since se-1.2a-07-5356-19
#define ATTR_CREDIT_PAYMENT_1_ATTRIBUTE_ID                         0x0810 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CREDIT_PAYMENT_DATE_1_ATTRIBUTE_ID                    0x0811 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CREDIT_PAYMENT_REF_1_ATTRIBUTE_ID                     0x0812 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CREDIT_PAYMENT_2_ATTRIBUTE_ID                         0x0820 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CREDIT_PAYMENT_DATE_2_ATTRIBUTE_ID                    0x0821 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CREDIT_PAYMENT_REF_2_ATTRIBUTE_ID                     0x0822 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CREDIT_PAYMENT_3_ATTRIBUTE_ID                         0x0830 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CREDIT_PAYMENT_DATE_3_ATTRIBUTE_ID                    0x0831 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CREDIT_PAYMENT_REF_3_ATTRIBUTE_ID                     0x0832 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CREDIT_PAYMENT_4_ATTRIBUTE_ID                         0x0840 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CREDIT_PAYMENT_DATE_4_ATTRIBUTE_ID                    0x0841 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CREDIT_PAYMENT_REF_4_ATTRIBUTE_ID                     0x0842 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CREDIT_PAYMENT_5_ATTRIBUTE_ID                         0x0850 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CREDIT_PAYMENT_DATE_5_ATTRIBUTE_ID                    0x0851 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CREDIT_PAYMENT_REF_5_ATTRIBUTE_ID                     0x0852 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER1_PRICE_LABEL_ATTRIBUTE_ID                     0x8000 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER2_PRICE_LABEL_ATTRIBUTE_ID                     0x8001 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER3_PRICE_LABEL_ATTRIBUTE_ID                     0x8002 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER4_PRICE_LABEL_ATTRIBUTE_ID                     0x8003 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER5_PRICE_LABEL_ATTRIBUTE_ID                     0x8004 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER6_PRICE_LABEL_ATTRIBUTE_ID                     0x8005 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER7_PRICE_LABEL_ATTRIBUTE_ID                     0x8006 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER8_PRICE_LABEL_ATTRIBUTE_ID                     0x8007 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER9_PRICE_LABEL_ATTRIBUTE_ID                     0x8008 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER10_PRICE_LABEL_ATTRIBUTE_ID                    0x8009 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER11_PRICE_LABEL_ATTRIBUTE_ID                    0x800A // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER12_PRICE_LABEL_ATTRIBUTE_ID                    0x800B // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER13_PRICE_LABEL_ATTRIBUTE_ID                    0x800C // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER14_PRICE_LABEL_ATTRIBUTE_ID                    0x800D // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER15_PRICE_LABEL_ATTRIBUTE_ID                    0x800E // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER16_PRICE_LABEL_ATTRIBUTE_ID                    0x800F // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER17_PRICE_LABEL_ATTRIBUTE_ID                    0x8010 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER18_PRICE_LABEL_ATTRIBUTE_ID                    0x8011 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER19_PRICE_LABEL_ATTRIBUTE_ID                    0x8012 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER20_PRICE_LABEL_ATTRIBUTE_ID                    0x8013 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER21_PRICE_LABEL_ATTRIBUTE_ID                    0x8014 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER22_PRICE_LABEL_ATTRIBUTE_ID                    0x8015 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER23_PRICE_LABEL_ATTRIBUTE_ID                    0x8016 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER24_PRICE_LABEL_ATTRIBUTE_ID                    0x8017 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER25_PRICE_LABEL_ATTRIBUTE_ID                    0x8018 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER26_PRICE_LABEL_ATTRIBUTE_ID                    0x8019 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER27_PRICE_LABEL_ATTRIBUTE_ID                    0x801A // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER28_PRICE_LABEL_ATTRIBUTE_ID                    0x801B // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER29_PRICE_LABEL_ATTRIBUTE_ID                    0x801C // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER30_PRICE_LABEL_ATTRIBUTE_ID                    0x801D // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER31_PRICE_LABEL_ATTRIBUTE_ID                    0x801E // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER32_PRICE_LABEL_ATTRIBUTE_ID                    0x801F // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER33_PRICE_LABEL_ATTRIBUTE_ID                    0x8020 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER34_PRICE_LABEL_ATTRIBUTE_ID                    0x8021 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER35_PRICE_LABEL_ATTRIBUTE_ID                    0x8022 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER36_PRICE_LABEL_ATTRIBUTE_ID                    0x8023 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER37_PRICE_LABEL_ATTRIBUTE_ID                    0x8024 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER38_PRICE_LABEL_ATTRIBUTE_ID                    0x8025 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER39_PRICE_LABEL_ATTRIBUTE_ID                    0x8026 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER40_PRICE_LABEL_ATTRIBUTE_ID                    0x8027 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER41_PRICE_LABEL_ATTRIBUTE_ID                    0x8028 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER42_PRICE_LABEL_ATTRIBUTE_ID                    0x8029 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER43_PRICE_LABEL_ATTRIBUTE_ID                    0x802A // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER44_PRICE_LABEL_ATTRIBUTE_ID                    0x802B // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER45_PRICE_LABEL_ATTRIBUTE_ID                    0x802C // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER46_PRICE_LABEL_ATTRIBUTE_ID                    0x802D // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER47_PRICE_LABEL_ATTRIBUTE_ID                    0x802E // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER48_PRICE_LABEL_ATTRIBUTE_ID                    0x802F // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_BLOCK1_THRESHOLD_ATTRIBUTE_ID                      0x8100 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_BLOCK2_THRESHOLD_ATTRIBUTE_ID                      0x8101 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_BLOCK3_THRESHOLD_ATTRIBUTE_ID                      0x8102 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_BLOCK4_THRESHOLD_ATTRIBUTE_ID                      0x8103 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_BLOCK5_THRESHOLD_ATTRIBUTE_ID                      0x8104 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_BLOCK6_THRESHOLD_ATTRIBUTE_ID                      0x8105 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_BLOCK7_THRESHOLD_ATTRIBUTE_ID                      0x8106 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_BLOCK8_THRESHOLD_ATTRIBUTE_ID                      0x8107 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_BLOCK9_THRESHOLD_ATTRIBUTE_ID                      0x8108 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_BLOCK10_THRESHOLD_ATTRIBUTE_ID                     0x8109 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_BLOCK11_THRESHOLD_ATTRIBUTE_ID                     0x810A // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_BLOCK12_THRESHOLD_ATTRIBUTE_ID                     0x810B // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_BLOCK13_THRESHOLD_ATTRIBUTE_ID                     0x810C // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_BLOCK14_THRESHOLD_ATTRIBUTE_ID                     0x810D // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_BLOCK15_THRESHOLD_ATTRIBUTE_ID                     0x810E // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_START_OF_BLOCK_PERIOD_ATTRIBUTE_ID                 0x8200 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_BLOCK_PERIOD_DURATION_ATTRIBUTE_ID                 0x8201 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_THRESHOLD_MULTIPLIER_ATTRIBUTE_ID                  0x8202 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_THRESHOLD_DIVISOR_ATTRIBUTE_ID                     0x8203 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_NO_TIER_BLOCK1_PRICE_ATTRIBUTE_ID                  0x8400 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_NO_TIER_BLOCK2_PRICE_ATTRIBUTE_ID                  0x8401 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_NO_TIER_BLOCK3_PRICE_ATTRIBUTE_ID                  0x8402 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_NO_TIER_BLOCK4_PRICE_ATTRIBUTE_ID                  0x8403 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_NO_TIER_BLOCK5_PRICE_ATTRIBUTE_ID                  0x8404 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_NO_TIER_BLOCK6_PRICE_ATTRIBUTE_ID                  0x8405 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_NO_TIER_BLOCK7_PRICE_ATTRIBUTE_ID                  0x8406 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_NO_TIER_BLOCK8_PRICE_ATTRIBUTE_ID                  0x8407 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_NO_TIER_BLOCK9_PRICE_ATTRIBUTE_ID                  0x8408 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_NO_TIER_BLOCK10_PRICE_ATTRIBUTE_ID                 0x8409 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_NO_TIER_BLOCK11_PRICE_ATTRIBUTE_ID                 0x840A // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_NO_TIER_BLOCK12_PRICE_ATTRIBUTE_ID                 0x840B // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_NO_TIER_BLOCK13_PRICE_ATTRIBUTE_ID                 0x840C // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_NO_TIER_BLOCK14_PRICE_ATTRIBUTE_ID                 0x840D // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_NO_TIER_BLOCK15_PRICE_ATTRIBUTE_ID                 0x840E // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_NO_TIER_BLOCK16_PRICE_ATTRIBUTE_ID                 0x840F // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER1_BLOCK1_PRICE_ATTRIBUTE_ID                    0x8410 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER1_BLOCK2_PRICE_ATTRIBUTE_ID                    0x8411 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER1_BLOCK3_PRICE_ATTRIBUTE_ID                    0x8412 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER1_BLOCK4_PRICE_ATTRIBUTE_ID                    0x8413 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER1_BLOCK5_PRICE_ATTRIBUTE_ID                    0x8414 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER1_BLOCK6_PRICE_ATTRIBUTE_ID                    0x8415 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER1_BLOCK7_PRICE_ATTRIBUTE_ID                    0x8416 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER1_BLOCK8_PRICE_ATTRIBUTE_ID                    0x8417 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER1_BLOCK9_PRICE_ATTRIBUTE_ID                    0x8418 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER1_BLOCK10_PRICE_ATTRIBUTE_ID                   0x8419 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER1_BLOCK11_PRICE_ATTRIBUTE_ID                   0x841A // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER1_BLOCK12_PRICE_ATTRIBUTE_ID                   0x841B // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER1_BLOCK13_PRICE_ATTRIBUTE_ID                   0x841C // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER1_BLOCK14_PRICE_ATTRIBUTE_ID                   0x841D // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER1_BLOCK15_PRICE_ATTRIBUTE_ID                   0x841E // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER1_BLOCK16_PRICE_ATTRIBUTE_ID                   0x841F // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER2_BLOCK1_PRICE_ATTRIBUTE_ID                    0x8420 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER2_BLOCK2_PRICE_ATTRIBUTE_ID                    0x8421 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER2_BLOCK3_PRICE_ATTRIBUTE_ID                    0x8422 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER2_BLOCK4_PRICE_ATTRIBUTE_ID                    0x8423 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER2_BLOCK5_PRICE_ATTRIBUTE_ID                    0x8424 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER2_BLOCK6_PRICE_ATTRIBUTE_ID                    0x8425 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER2_BLOCK7_PRICE_ATTRIBUTE_ID                    0x8426 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER2_BLOCK8_PRICE_ATTRIBUTE_ID                    0x8427 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER2_BLOCK9_PRICE_ATTRIBUTE_ID                    0x8428 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER2_BLOCK10_PRICE_ATTRIBUTE_ID                   0x8429 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER2_BLOCK11_PRICE_ATTRIBUTE_ID                   0x842A // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER2_BLOCK12_PRICE_ATTRIBUTE_ID                   0x842B // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER2_BLOCK13_PRICE_ATTRIBUTE_ID                   0x842C // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER2_BLOCK14_PRICE_ATTRIBUTE_ID                   0x842D // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER2_BLOCK15_PRICE_ATTRIBUTE_ID                   0x842E // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER2_BLOCK16_PRICE_ATTRIBUTE_ID                   0x842F // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER3_BLOCK1_PRICE_ATTRIBUTE_ID                    0x8430 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER3_BLOCK2_PRICE_ATTRIBUTE_ID                    0x8431 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER3_BLOCK3_PRICE_ATTRIBUTE_ID                    0x8432 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER3_BLOCK4_PRICE_ATTRIBUTE_ID                    0x8433 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER3_BLOCK5_PRICE_ATTRIBUTE_ID                    0x8434 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER3_BLOCK6_PRICE_ATTRIBUTE_ID                    0x8435 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER3_BLOCK7_PRICE_ATTRIBUTE_ID                    0x8436 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER3_BLOCK8_PRICE_ATTRIBUTE_ID                    0x8437 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER3_BLOCK9_PRICE_ATTRIBUTE_ID                    0x8438 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER3_BLOCK10_PRICE_ATTRIBUTE_ID                   0x8439 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER3_BLOCK11_PRICE_ATTRIBUTE_ID                   0x843A // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER3_BLOCK12_PRICE_ATTRIBUTE_ID                   0x843B // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER3_BLOCK13_PRICE_ATTRIBUTE_ID                   0x843C // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER3_BLOCK14_PRICE_ATTRIBUTE_ID                   0x843D // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER3_BLOCK15_PRICE_ATTRIBUTE_ID                   0x843E // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER3_BLOCK16_PRICE_ATTRIBUTE_ID                   0x843F // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER4_BLOCK1_PRICE_ATTRIBUTE_ID                    0x8440 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER4_BLOCK2_PRICE_ATTRIBUTE_ID                    0x8441 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER4_BLOCK3_PRICE_ATTRIBUTE_ID                    0x8442 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER4_BLOCK4_PRICE_ATTRIBUTE_ID                    0x8443 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER4_BLOCK5_PRICE_ATTRIBUTE_ID                    0x8444 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER4_BLOCK6_PRICE_ATTRIBUTE_ID                    0x8445 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER4_BLOCK7_PRICE_ATTRIBUTE_ID                    0x8446 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER4_BLOCK8_PRICE_ATTRIBUTE_ID                    0x8447 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER4_BLOCK9_PRICE_ATTRIBUTE_ID                    0x8448 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER4_BLOCK10_PRICE_ATTRIBUTE_ID                   0x8449 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER4_BLOCK11_PRICE_ATTRIBUTE_ID                   0x844A // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER4_BLOCK12_PRICE_ATTRIBUTE_ID                   0x844B // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER4_BLOCK13_PRICE_ATTRIBUTE_ID                   0x844C // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER4_BLOCK14_PRICE_ATTRIBUTE_ID                   0x844D // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER4_BLOCK15_PRICE_ATTRIBUTE_ID                   0x844E // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER4_BLOCK16_PRICE_ATTRIBUTE_ID                   0x844F // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER5_BLOCK1_PRICE_ATTRIBUTE_ID                    0x8450 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER5_BLOCK2_PRICE_ATTRIBUTE_ID                    0x8451 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER5_BLOCK3_PRICE_ATTRIBUTE_ID                    0x8452 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER5_BLOCK4_PRICE_ATTRIBUTE_ID                    0x8453 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER5_BLOCK5_PRICE_ATTRIBUTE_ID                    0x8454 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER5_BLOCK6_PRICE_ATTRIBUTE_ID                    0x8455 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER5_BLOCK7_PRICE_ATTRIBUTE_ID                    0x8456 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER5_BLOCK8_PRICE_ATTRIBUTE_ID                    0x8457 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER5_BLOCK9_PRICE_ATTRIBUTE_ID                    0x8458 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER5_BLOCK10_PRICE_ATTRIBUTE_ID                   0x8459 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER5_BLOCK11_PRICE_ATTRIBUTE_ID                   0x845A // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER5_BLOCK12_PRICE_ATTRIBUTE_ID                   0x845B // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER5_BLOCK13_PRICE_ATTRIBUTE_ID                   0x845C // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER5_BLOCK14_PRICE_ATTRIBUTE_ID                   0x845D // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER5_BLOCK15_PRICE_ATTRIBUTE_ID                   0x845E // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER5_BLOCK16_PRICE_ATTRIBUTE_ID                   0x845F // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER6_BLOCK1_PRICE_ATTRIBUTE_ID                    0x8460 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER6_BLOCK2_PRICE_ATTRIBUTE_ID                    0x8461 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER6_BLOCK3_PRICE_ATTRIBUTE_ID                    0x8462 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER6_BLOCK4_PRICE_ATTRIBUTE_ID                    0x8463 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER6_BLOCK5_PRICE_ATTRIBUTE_ID                    0x8464 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER6_BLOCK6_PRICE_ATTRIBUTE_ID                    0x8465 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER6_BLOCK7_PRICE_ATTRIBUTE_ID                    0x8466 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER6_BLOCK8_PRICE_ATTRIBUTE_ID                    0x8467 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER6_BLOCK9_PRICE_ATTRIBUTE_ID                    0x8468 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER6_BLOCK10_PRICE_ATTRIBUTE_ID                   0x8469 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER6_BLOCK11_PRICE_ATTRIBUTE_ID                   0x846A // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER6_BLOCK12_PRICE_ATTRIBUTE_ID                   0x846B // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER6_BLOCK13_PRICE_ATTRIBUTE_ID                   0x846C // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER6_BLOCK14_PRICE_ATTRIBUTE_ID                   0x846D // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER6_BLOCK15_PRICE_ATTRIBUTE_ID                   0x846E // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER6_BLOCK16_PRICE_ATTRIBUTE_ID                   0x846F // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER7_BLOCK1_PRICE_ATTRIBUTE_ID                    0x8470 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER7_BLOCK2_PRICE_ATTRIBUTE_ID                    0x8471 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER7_BLOCK3_PRICE_ATTRIBUTE_ID                    0x8472 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER7_BLOCK4_PRICE_ATTRIBUTE_ID                    0x8473 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER7_BLOCK5_PRICE_ATTRIBUTE_ID                    0x8474 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER7_BLOCK6_PRICE_ATTRIBUTE_ID                    0x8475 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER7_BLOCK7_PRICE_ATTRIBUTE_ID                    0x8476 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER7_BLOCK8_PRICE_ATTRIBUTE_ID                    0x8477 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER7_BLOCK9_PRICE_ATTRIBUTE_ID                    0x8478 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER7_BLOCK10_PRICE_ATTRIBUTE_ID                   0x8479 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER7_BLOCK11_PRICE_ATTRIBUTE_ID                   0x847A // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER7_BLOCK12_PRICE_ATTRIBUTE_ID                   0x847B // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER7_BLOCK13_PRICE_ATTRIBUTE_ID                   0x847C // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER7_BLOCK14_PRICE_ATTRIBUTE_ID                   0x847D // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER7_BLOCK15_PRICE_ATTRIBUTE_ID                   0x847E // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER7_BLOCK16_PRICE_ATTRIBUTE_ID                   0x847F // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER8_BLOCK1_PRICE_ATTRIBUTE_ID                    0x8480 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER8_BLOCK2_PRICE_ATTRIBUTE_ID                    0x8481 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER8_BLOCK3_PRICE_ATTRIBUTE_ID                    0x8482 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER8_BLOCK4_PRICE_ATTRIBUTE_ID                    0x8483 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER8_BLOCK5_PRICE_ATTRIBUTE_ID                    0x8484 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER8_BLOCK6_PRICE_ATTRIBUTE_ID                    0x8485 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER8_BLOCK7_PRICE_ATTRIBUTE_ID                    0x8486 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER8_BLOCK8_PRICE_ATTRIBUTE_ID                    0x8487 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER8_BLOCK9_PRICE_ATTRIBUTE_ID                    0x8488 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER8_BLOCK10_PRICE_ATTRIBUTE_ID                   0x8489 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER8_BLOCK11_PRICE_ATTRIBUTE_ID                   0x848A // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER8_BLOCK12_PRICE_ATTRIBUTE_ID                   0x848B // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER8_BLOCK13_PRICE_ATTRIBUTE_ID                   0x848C // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER8_BLOCK14_PRICE_ATTRIBUTE_ID                   0x848D // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER8_BLOCK15_PRICE_ATTRIBUTE_ID                   0x848E // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER8_BLOCK16_PRICE_ATTRIBUTE_ID                   0x848F // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER9_BLOCK1_PRICE_ATTRIBUTE_ID                    0x8490 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER9_BLOCK2_PRICE_ATTRIBUTE_ID                    0x8491 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER9_BLOCK3_PRICE_ATTRIBUTE_ID                    0x8492 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER9_BLOCK4_PRICE_ATTRIBUTE_ID                    0x8493 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER9_BLOCK5_PRICE_ATTRIBUTE_ID                    0x8494 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER9_BLOCK6_PRICE_ATTRIBUTE_ID                    0x8495 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER9_BLOCK7_PRICE_ATTRIBUTE_ID                    0x8496 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER9_BLOCK8_PRICE_ATTRIBUTE_ID                    0x8497 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER9_BLOCK9_PRICE_ATTRIBUTE_ID                    0x8498 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER9_BLOCK10_PRICE_ATTRIBUTE_ID                   0x8499 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER9_BLOCK11_PRICE_ATTRIBUTE_ID                   0x849A // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER9_BLOCK12_PRICE_ATTRIBUTE_ID                   0x849B // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER9_BLOCK13_PRICE_ATTRIBUTE_ID                   0x849C // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER9_BLOCK14_PRICE_ATTRIBUTE_ID                   0x849D // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER9_BLOCK15_PRICE_ATTRIBUTE_ID                   0x849E // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER9_BLOCK16_PRICE_ATTRIBUTE_ID                   0x849F // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER10_BLOCK1_PRICE_ATTRIBUTE_ID                   0x84A0 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER10_BLOCK2_PRICE_ATTRIBUTE_ID                   0x84A1 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER10_BLOCK3_PRICE_ATTRIBUTE_ID                   0x84A2 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER10_BLOCK4_PRICE_ATTRIBUTE_ID                   0x84A3 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER10_BLOCK5_PRICE_ATTRIBUTE_ID                   0x84A4 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER10_BLOCK6_PRICE_ATTRIBUTE_ID                   0x84A5 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER10_BLOCK7_PRICE_ATTRIBUTE_ID                   0x84A6 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER10_BLOCK8_PRICE_ATTRIBUTE_ID                   0x84A7 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER10_BLOCK9_PRICE_ATTRIBUTE_ID                   0x84A8 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER10_BLOCK10_PRICE_ATTRIBUTE_ID                  0x84A9 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER10_BLOCK11_PRICE_ATTRIBUTE_ID                  0x84AA // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER10_BLOCK12_PRICE_ATTRIBUTE_ID                  0x84AB // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER10_BLOCK13_PRICE_ATTRIBUTE_ID                  0x84AC // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER10_BLOCK14_PRICE_ATTRIBUTE_ID                  0x84AD // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER10_BLOCK15_PRICE_ATTRIBUTE_ID                  0x84AE // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER10_BLOCK16_PRICE_ATTRIBUTE_ID                  0x84AF // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER11_BLOCK1_PRICE_ATTRIBUTE_ID                   0x84B0 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER11_BLOCK2_PRICE_ATTRIBUTE_ID                   0x84B1 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER11_BLOCK3_PRICE_ATTRIBUTE_ID                   0x84B2 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER11_BLOCK4_PRICE_ATTRIBUTE_ID                   0x84B3 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER11_BLOCK5_PRICE_ATTRIBUTE_ID                   0x84B4 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER11_BLOCK6_PRICE_ATTRIBUTE_ID                   0x84B5 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER11_BLOCK7_PRICE_ATTRIBUTE_ID                   0x84B6 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER11_BLOCK8_PRICE_ATTRIBUTE_ID                   0x84B7 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER11_BLOCK9_PRICE_ATTRIBUTE_ID                   0x84B8 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER11_BLOCK10_PRICE_ATTRIBUTE_ID                  0x84B9 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER11_BLOCK11_PRICE_ATTRIBUTE_ID                  0x84BA // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER11_BLOCK12_PRICE_ATTRIBUTE_ID                  0x84BB // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER11_BLOCK13_PRICE_ATTRIBUTE_ID                  0x84BC // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER11_BLOCK14_PRICE_ATTRIBUTE_ID                  0x84BD // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER11_BLOCK15_PRICE_ATTRIBUTE_ID                  0x84BE // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER11_BLOCK16_PRICE_ATTRIBUTE_ID                  0x84BF // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER12_BLOCK1_PRICE_ATTRIBUTE_ID                   0x84C0 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER12_BLOCK2_PRICE_ATTRIBUTE_ID                   0x84C1 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER12_BLOCK3_PRICE_ATTRIBUTE_ID                   0x84C2 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER12_BLOCK4_PRICE_ATTRIBUTE_ID                   0x84C3 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER12_BLOCK5_PRICE_ATTRIBUTE_ID                   0x84C4 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER12_BLOCK6_PRICE_ATTRIBUTE_ID                   0x84C5 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER12_BLOCK7_PRICE_ATTRIBUTE_ID                   0x84C6 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER12_BLOCK8_PRICE_ATTRIBUTE_ID                   0x84C7 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER12_BLOCK9_PRICE_ATTRIBUTE_ID                   0x84C8 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER12_BLOCK10_PRICE_ATTRIBUTE_ID                  0x84C9 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER12_BLOCK11_PRICE_ATTRIBUTE_ID                  0x84CA // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER12_BLOCK12_PRICE_ATTRIBUTE_ID                  0x84CB // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER12_BLOCK13_PRICE_ATTRIBUTE_ID                  0x84CC // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER12_BLOCK14_PRICE_ATTRIBUTE_ID                  0x84CD // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER12_BLOCK15_PRICE_ATTRIBUTE_ID                  0x84CE // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER12_BLOCK16_PRICE_ATTRIBUTE_ID                  0x84CF // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER13_BLOCK1_PRICE_ATTRIBUTE_ID                   0x84D0 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER13_BLOCK2_PRICE_ATTRIBUTE_ID                   0x84D1 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER13_BLOCK3_PRICE_ATTRIBUTE_ID                   0x84D2 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER13_BLOCK4_PRICE_ATTRIBUTE_ID                   0x84D3 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER13_BLOCK5_PRICE_ATTRIBUTE_ID                   0x84D4 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER13_BLOCK6_PRICE_ATTRIBUTE_ID                   0x84D5 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER13_BLOCK7_PRICE_ATTRIBUTE_ID                   0x84D6 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER13_BLOCK8_PRICE_ATTRIBUTE_ID                   0x84D7 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER13_BLOCK9_PRICE_ATTRIBUTE_ID                   0x84D8 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER13_BLOCK10_PRICE_ATTRIBUTE_ID                  0x84D9 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER13_BLOCK11_PRICE_ATTRIBUTE_ID                  0x84DA // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER13_BLOCK12_PRICE_ATTRIBUTE_ID                  0x84DB // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER13_BLOCK13_PRICE_ATTRIBUTE_ID                  0x84DC // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER13_BLOCK14_PRICE_ATTRIBUTE_ID                  0x84DD // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER13_BLOCK15_PRICE_ATTRIBUTE_ID                  0x84DE // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER13_BLOCK16_PRICE_ATTRIBUTE_ID                  0x84DF // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER14_BLOCK1_PRICE_ATTRIBUTE_ID                   0x84E0 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER14_BLOCK2_PRICE_ATTRIBUTE_ID                   0x84E1 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER14_BLOCK3_PRICE_ATTRIBUTE_ID                   0x84E2 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER14_BLOCK4_PRICE_ATTRIBUTE_ID                   0x84E3 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER14_BLOCK5_PRICE_ATTRIBUTE_ID                   0x84E4 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER14_BLOCK6_PRICE_ATTRIBUTE_ID                   0x84E5 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER14_BLOCK7_PRICE_ATTRIBUTE_ID                   0x84E6 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER14_BLOCK8_PRICE_ATTRIBUTE_ID                   0x84E7 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER14_BLOCK9_PRICE_ATTRIBUTE_ID                   0x84E8 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER14_BLOCK10_PRICE_ATTRIBUTE_ID                  0x84E9 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER14_BLOCK11_PRICE_ATTRIBUTE_ID                  0x84EA // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER14_BLOCK12_PRICE_ATTRIBUTE_ID                  0x84EB // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER14_BLOCK13_PRICE_ATTRIBUTE_ID                  0x84EC // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER14_BLOCK14_PRICE_ATTRIBUTE_ID                  0x84ED // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER14_BLOCK15_PRICE_ATTRIBUTE_ID                  0x84EE // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER14_BLOCK16_PRICE_ATTRIBUTE_ID                  0x84EF // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER15_BLOCK1_PRICE_ATTRIBUTE_ID                   0x84F0 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER15_BLOCK2_PRICE_ATTRIBUTE_ID                   0x84F1 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER15_BLOCK3_PRICE_ATTRIBUTE_ID                   0x84F2 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER15_BLOCK4_PRICE_ATTRIBUTE_ID                   0x84F3 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER15_BLOCK5_PRICE_ATTRIBUTE_ID                   0x84F4 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER15_BLOCK6_PRICE_ATTRIBUTE_ID                   0x84F5 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER15_BLOCK7_PRICE_ATTRIBUTE_ID                   0x84F6 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER15_BLOCK8_PRICE_ATTRIBUTE_ID                   0x84F7 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER15_BLOCK9_PRICE_ATTRIBUTE_ID                   0x84F8 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER15_BLOCK10_PRICE_ATTRIBUTE_ID                  0x84F9 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER15_BLOCK11_PRICE_ATTRIBUTE_ID                  0x84FA // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER15_BLOCK12_PRICE_ATTRIBUTE_ID                  0x84FB // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER15_BLOCK13_PRICE_ATTRIBUTE_ID                  0x84FC // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER15_BLOCK14_PRICE_ATTRIBUTE_ID                  0x84FD // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER15_BLOCK15_PRICE_ATTRIBUTE_ID                  0x84FE // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER15_BLOCK16_PRICE_ATTRIBUTE_ID                  0x84FF // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_PRICE_TIER16_ATTRIBUTE_ID                          0x850F // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_PRICE_TIER17_ATTRIBUTE_ID                          0x8510 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_PRICE_TIER18_ATTRIBUTE_ID                          0x8511 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_PRICE_TIER19_ATTRIBUTE_ID                          0x8512 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_PRICE_TIER20_ATTRIBUTE_ID                          0x8513 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_PRICE_TIER21_ATTRIBUTE_ID                          0x8514 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_PRICE_TIER22_ATTRIBUTE_ID                          0x8515 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_PRICE_TIER23_ATTRIBUTE_ID                          0x8516 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_PRICE_TIER24_ATTRIBUTE_ID                          0x8517 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_PRICE_TIER25_ATTRIBUTE_ID                          0x8518 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_PRICE_TIER26_ATTRIBUTE_ID                          0x8519 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_PRICE_TIER27_ATTRIBUTE_ID                          0x851A // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_PRICE_TIER28_ATTRIBUTE_ID                          0x851B // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_PRICE_TIER29_ATTRIBUTE_ID                          0x851C // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_PRICE_TIER30_ATTRIBUTE_ID                          0x851D // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_PRICE_TIER31_ATTRIBUTE_ID                          0x851E // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_PRICE_TIER32_ATTRIBUTE_ID                          0x851F // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_PRICE_TIER33_ATTRIBUTE_ID                          0x8520 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_PRICE_TIER34_ATTRIBUTE_ID                          0x8521 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_PRICE_TIER35_ATTRIBUTE_ID                          0x8522 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_PRICE_TIER36_ATTRIBUTE_ID                          0x8523 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_PRICE_TIER37_ATTRIBUTE_ID                          0x8524 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_PRICE_TIER38_ATTRIBUTE_ID                          0x8525 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_PRICE_TIER39_ATTRIBUTE_ID                          0x8526 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_PRICE_TIER40_ATTRIBUTE_ID                          0x8527 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_PRICE_TIER41_ATTRIBUTE_ID                          0x8528 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_PRICE_TIER42_ATTRIBUTE_ID                          0x8529 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_PRICE_TIER43_ATTRIBUTE_ID                          0x852A // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_PRICE_TIER44_ATTRIBUTE_ID                          0x852B // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_PRICE_TIER45_ATTRIBUTE_ID                          0x852C // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_PRICE_TIER46_ATTRIBUTE_ID                          0x852D // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_PRICE_TIER47_ATTRIBUTE_ID                          0x852E // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_PRICE_TIER48_ATTRIBUTE_ID                          0x852F // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TARIFF_LABEL_ATTRIBUTE_ID                          0x8610 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_NUMBER_OF_PRICE_TIERS_IN_USE_ATTRIBUTE_ID          0x8611 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_NUMBER_OF_BLOCK_THRESHOLDS_IN_USE_ATTRIBUTE_ID     0x8612 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TIER_BLOCK_MODE_ATTRIBUTE_ID                       0x8613 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_TARIFF_RESOLUTION_PERIOD_ATTRIBUTE_ID              0x8615 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_CO2_ATTRIBUTE_ID                                   0x8625 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_CO2_UNIT_ATTRIBUTE_ID                              0x8626 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_CO2_TRAILING_DIGIT_ATTRIBUTE_ID                    0x8627 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_CURRENT_BILLING_PERIOD_START_ATTRIBUTE_ID          0x8700 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_CURRENT_BILLING_PERIOD_DURATION_ATTRIBUTE_ID       0x8701 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_LAST_BILLING_PERIOD_START_ATTRIBUTE_ID             0x8702 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_LAST_BILLING_PERIOD_DURATION_ATTRIBUTE_ID          0x8703 // Ver.: since se-1.2a-07-5356-19
#define ATTR_RX_LAST_BILLING_PERIOD_CONSOLIDATED_BILL_ATTRIBUTE_ID 0x8704 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PRICE_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID    0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_PRICE_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID    0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Demand Response and Load Control
// Cluster specification level: se-1.2b-15-0131-02

// Client attributes
#define ATTR_UTILITY_ENROLLMENT_GROUP_ATTRIBUTE_ID                                     0x0000 // Ver.: always
#define ATTR_START_RANDOMIZATION_MINUTES_ATTRIBUTE_ID                                  0x0001 // Ver.: always
#define ATTR_DURATION_RANDOMIZATION_MINUTES_ATTRIBUTE_ID                               0x0002 // Ver.: always
#define ATTR_DEVICE_CLASS_VALUE_ATTRIBUTE_ID                                           0x0003 // Ver.: always
#define ATTR_DEMAND_RESPONSE_LOAD_CONTROL_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_DEMAND_RESPONSE_LOAD_CONTROL_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_DEMAND_RESPONSE_LOAD_CONTROL_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_DEMAND_RESPONSE_LOAD_CONTROL_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Simple Metering
// Cluster specification level: se-1.2b-15-0131-02

// Client attributes
#define ATTR_FUNCTIONAL_NOTIFICATION_FLAGS_ATTRIBUTE_ID                   0x0000 // Ver.: since se-1.2a-07-5356-19
#define ATTR_NOTIFICATION_FLAGS_2_ATTRIBUTE_ID                            0x0001 // Ver.: since se-1.2a-07-5356-19
#define ATTR_NOTIFICATION_FLAGS_3_ATTRIBUTE_ID                            0x0002 // Ver.: since se-1.2a-07-5356-19
#define ATTR_NOTIFICATION_FLAGS_4_ATTRIBUTE_ID                            0x0003 // Ver.: since se-1.2a-07-5356-19
#define ATTR_NOTIFICATION_FLAGS_5_ATTRIBUTE_ID                            0x0004 // Ver.: since se-1.2a-07-5356-19
#define ATTR_NOTIFICATION_FLAGS_6_ATTRIBUTE_ID                            0x0005 // Ver.: since se-1.2a-07-5356-19
#define ATTR_NOTIFICATION_FLAGS_7_ATTRIBUTE_ID                            0x0006 // Ver.: since se-1.2a-07-5356-19
#define ATTR_NOTIFICATION_FLAGS_8_ATTRIBUTE_ID                            0x0007 // Ver.: since se-1.2a-07-5356-19
#define ATTR_SIMPLE_METERING_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_SIMPLE_METERING_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_CURRENT_SUMMATION_DELIVERED_ATTRIBUTE_ID                                       0x0000 // Ver.: always
#define ATTR_CURRENT_SUMMATION_RECEIVED_ATTRIBUTE_ID                                        0x0001 // Ver.: always
#define ATTR_CURRENT_MAX_DEMAND_DELIVERED_ATTRIBUTE_ID                                      0x0002 // Ver.: always
#define ATTR_CURRENT_MAX_DEMAND_RECEIVED_ATTRIBUTE_ID                                       0x0003 // Ver.: always
#define ATTR_DFT_SUMMATION_ATTRIBUTE_ID                                                     0x0004 // Ver.: always
#define ATTR_DAILY_FREEZE_TIME_ATTRIBUTE_ID                                                 0x0005 // Ver.: always
#define ATTR_POWER_FACTOR_ATTRIBUTE_ID                                                      0x0006 // Ver.: always
#define ATTR_READING_SNAP_SHOT_TIME_ATTRIBUTE_ID                                            0x0007 // Ver.: always
#define ATTR_CURRENT_MAX_DEMAND_DELIVERED_TIME_ATTRIBUTE_ID                                 0x0008 // Ver.: always
#define ATTR_CURRENT_MAX_DEMAND_RECEIVED_TIME_ATTRIBUTE_ID                                  0x0009 // Ver.: always
#define ATTR_DEFAULT_UPDATE_PERIOD_ATTRIBUTE_ID                                             0x000A // Ver.: since se-1.1-07-5356-16
#define ATTR_FAST_POLL_UPDATE_PERIOD_ATTRIBUTE_ID                                           0x000B // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_BLOCK_PERIOD_CONSUMPTION_DELIVERED_ATTRIBUTE_ID                        0x000C // Ver.: since se-1.1-07-5356-16
#define ATTR_DAILY_CONSUMPTION_TARGET_ATTRIBUTE_ID                                          0x000D // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_BLOCK_ATTRIBUTE_ID                                                     0x000E // Ver.: since se-1.1-07-5356-16
#define ATTR_PROFILE_INTERVAL_PERIOD_ATTRIBUTE_ID                                           0x000F // Ver.: since se-1.1-07-5356-16
#define ATTR_INTERVAL_READ_REPORTING_PERIOD_ATTRIBUTE_ID                                    0x0010 // Ver.: since se-1.1-07-5356-16
#define ATTR_PRESET_READING_TIME_ATTRIBUTE_ID                                               0x0011 // Ver.: since se-1.1-07-5356-16
#define ATTR_VOLUME_PER_REPORT_ATTRIBUTE_ID                                                 0x0012 // Ver.: since se-1.1-07-5356-16
#define ATTR_FLOW_RESTRICTION_ATTRIBUTE_ID                                                  0x0013 // Ver.: since se-1.1-07-5356-16
#define ATTR_SUPPLY_STATUS_ATTRIBUTE_ID                                                     0x0014 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_INLET_ENERGY_CARRIER_SUMMATION_ATTRIBUTE_ID                            0x0015 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_OUTLET_ENERGY_CARRIER_SUMMATION_ATTRIBUTE_ID                           0x0016 // Ver.: since se-1.1-07-5356-16
#define ATTR_INLET_TEMPERATURE_ATTRIBUTE_ID                                                 0x0017 // Ver.: since se-1.1-07-5356-16
#define ATTR_OUTLET_TEMPERATURE_ATTRIBUTE_ID                                                0x0018 // Ver.: since se-1.1-07-5356-16
#define ATTR_CONTROL_TEMPERATURE_ATTRIBUTE_ID                                               0x0019 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_INLET_ENERGY_CARRIER_DEMAND_ATTRIBUTE_ID                               0x001A // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_OUTLET_ENERGY_CARRIER_DEMAND_ATTRIBUTE_ID                              0x001B // Ver.: since se-1.1-07-5356-16
#define ATTR_PREVIOUS_BLOCK_PERIOD_CONSUMIPTION_DELIVERED_ATTRIBUTE_ID                      0x001C // Ver.: since se-1.1b-07-5356-18
#define ATTR_CURRENT_BLOCK_PERIOD_CONSUMPTION_RECEIVED_ATTRIBUTE_ID                         0x001D // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_BLOCK_RECEIVED_ATTRIBUTE_ID                                            0x001E // Ver.: since se-1.2a-07-5356-19
#define ATTR_DFT_SUMMATION_RECEIVED_ATTRIBUTE_ID                                            0x001F // Ver.: since se-1.2a-07-5356-19
#define ATTR_ACTIVE_REGISTER_TIER_DELIVERED_ATTRIBUTE_ID                                    0x0020 // Ver.: since se-1.2a-07-5356-19
#define ATTR_ACTIVE_REGISTER_TIER_RECEIVED_ATTRIBUTE_ID                                     0x0021 // Ver.: since se-1.2a-07-5356-19
#define ATTR_LAST_BLOCK_SWITCH_TIME_ATTRIBUTE_ID                                            0x0022 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER1_SUMMATION_DELIVERED_ATTRIBUTE_ID                                 0x0100 // Ver.: always
#define ATTR_CURRENT_TIER1_SUMMATION_RECEIVED_ATTRIBUTE_ID                                  0x0101 // Ver.: always
#define ATTR_CURRENT_TIER2_SUMMATION_DELIVERED_ATTRIBUTE_ID                                 0x0102 // Ver.: always
#define ATTR_CURRENT_TIER2_SUMMATION_RECEIVED_ATTRIBUTE_ID                                  0x0103 // Ver.: always
#define ATTR_CURRENT_TIER3_SUMMATION_DELIVERED_ATTRIBUTE_ID                                 0x0104 // Ver.: always
#define ATTR_CURRENT_TIER3_SUMMATION_RECEIVED_ATTRIBUTE_ID                                  0x0105 // Ver.: always
#define ATTR_CURRENT_TIER4_SUMMATION_DELIVERED_ATTRIBUTE_ID                                 0x0106 // Ver.: always
#define ATTR_CURRENT_TIER4_SUMMATION_RECEIVED_ATTRIBUTE_ID                                  0x0107 // Ver.: always
#define ATTR_CURRENT_TIER5_SUMMATION_DELIVERED_ATTRIBUTE_ID                                 0x0108 // Ver.: always
#define ATTR_CURRENT_TIER5_SUMMATION_RECEIVED_ATTRIBUTE_ID                                  0x0109 // Ver.: always
#define ATTR_CURRENT_TIER6_SUMMATION_DELIVERED_ATTRIBUTE_ID                                 0x010A // Ver.: always
#define ATTR_CURRENT_TIER6_SUMMATION_RECEIVED_ATTRIBUTE_ID                                  0x010B // Ver.: always
#define ATTR_CURRENT_TIER7_SUMMATION_DELIVERED_ATTRIBUTE_ID                                 0x010C // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER7_SUMMATION_RECEIVED_ATTRIBUTE_ID                                  0x010D // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER8_SUMMATION_DELIVERED_ATTRIBUTE_ID                                 0x010E // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER8_SUMMATION_RECEIVED_ATTRIBUTE_ID                                  0x010F // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER9_SUMMATION_DELIVERED_ATTRIBUTE_ID                                 0x0110 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER9_SUMMATION_RECEIVED_ATTRIBUTE_ID                                  0x0111 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER10_SUMMATION_DELIVERED_ATTRIBUTE_ID                                0x0112 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER10_SUMMATION_RECEIVED_ATTRIBUTE_ID                                 0x0113 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER11_SUMMATION_DELIVERED_ATTRIBUTE_ID                                0x0114 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER11_SUMMATION_RECEIVED_ATTRIBUTE_ID                                 0x0115 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER12_SUMMATION_DELIVERED_ATTRIBUTE_ID                                0x0116 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER12_SUMMATION_RECEIVED_ATTRIBUTE_ID                                 0x0117 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER13_SUMMATION_DELIVERED_ATTRIBUTE_ID                                0x0118 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER13_SUMMATION_RECEIVED_ATTRIBUTE_ID                                 0x0119 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER14_SUMMATION_DELIVERED_ATTRIBUTE_ID                                0x011A // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER14_SUMMATION_RECEIVED_ATTRIBUTE_ID                                 0x011B // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER15_SUMMATION_DELIVERED_ATTRIBUTE_ID                                0x011C // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER15_SUMMATION_RECEIVED_ATTRIBUTE_ID                                 0x011D // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER16_SUMMATION_DELIVERED_ATTRIBUTE_ID                                0x011E // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER16_SUMMATION_RECEIVED_ATTRIBUTE_ID                                 0x011F // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER17_SUMMATION_DELIVERED_ATTRIBUTE_ID                                0x0120 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER17_SUMMATION_RECEIVED_ATTRIBUTE_ID                                 0x0121 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER18_SUMMATION_DELIVERED_ATTRIBUTE_ID                                0x0122 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER18_SUMMATION_RECEIVED_ATTRIBUTE_ID                                 0x0123 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER19_SUMMATION_DELIVERED_ATTRIBUTE_ID                                0x0124 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER19_SUMMATION_RECEIVED_ATTRIBUTE_ID                                 0x0125 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER20_SUMMATION_DELIVERED_ATTRIBUTE_ID                                0x0126 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER20_SUMMATION_RECEIVED_ATTRIBUTE_ID                                 0x0127 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER21_SUMMATION_DELIVERED_ATTRIBUTE_ID                                0x0128 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER21_SUMMATION_RECEIVED_ATTRIBUTE_ID                                 0x0129 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER22_SUMMATION_DELIVERED_ATTRIBUTE_ID                                0x012A // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER22_SUMMATION_RECEIVED_ATTRIBUTE_ID                                 0x012B // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER23_SUMMATION_DELIVERED_ATTRIBUTE_ID                                0x012C // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER23_SUMMATION_RECEIVED_ATTRIBUTE_ID                                 0x012D // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER24_SUMMATION_DELIVERED_ATTRIBUTE_ID                                0x012E // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER24_SUMMATION_RECEIVED_ATTRIBUTE_ID                                 0x012F // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER25_SUMMATION_DELIVERED_ATTRIBUTE_ID                                0x0130 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER25_SUMMATION_RECEIVED_ATTRIBUTE_ID                                 0x0131 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER26_SUMMATION_DELIVERED_ATTRIBUTE_ID                                0x0132 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER26_SUMMATION_RECEIVED_ATTRIBUTE_ID                                 0x0133 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER27_SUMMATION_DELIVERED_ATTRIBUTE_ID                                0x0134 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER27_SUMMATION_RECEIVED_ATTRIBUTE_ID                                 0x0135 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER28_SUMMATION_DELIVERED_ATTRIBUTE_ID                                0x0136 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER28_SUMMATION_RECEIVED_ATTRIBUTE_ID                                 0x0137 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER29_SUMMATION_DELIVERED_ATTRIBUTE_ID                                0x0138 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER29_SUMMATION_RECEIVED_ATTRIBUTE_ID                                 0x0139 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER30_SUMMATION_DELIVERED_ATTRIBUTE_ID                                0x013A // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER30_SUMMATION_RECEIVED_ATTRIBUTE_ID                                 0x013B // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER31_SUMMATION_DELIVERED_ATTRIBUTE_ID                                0x013C // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER31_SUMMATION_RECEIVED_ATTRIBUTE_ID                                 0x013D // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER32_SUMMATION_DELIVERED_ATTRIBUTE_ID                                0x013E // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER32_SUMMATION_RECEIVED_ATTRIBUTE_ID                                 0x013F // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER33_SUMMATION_DELIVERED_ATTRIBUTE_ID                                0x0140 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER33_SUMMATION_RECEIVED_ATTRIBUTE_ID                                 0x0141 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER34_SUMMATION_DELIVERED_ATTRIBUTE_ID                                0x0142 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER34_SUMMATION_RECEIVED_ATTRIBUTE_ID                                 0x0143 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER35_SUMMATION_DELIVERED_ATTRIBUTE_ID                                0x0144 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER35_SUMMATION_RECEIVED_ATTRIBUTE_ID                                 0x0145 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER36_SUMMATION_DELIVERED_ATTRIBUTE_ID                                0x0146 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER36_SUMMATION_RECEIVED_ATTRIBUTE_ID                                 0x0147 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER37_SUMMATION_DELIVERED_ATTRIBUTE_ID                                0x0148 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER37_SUMMATION_RECEIVED_ATTRIBUTE_ID                                 0x0149 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER38_SUMMATION_DELIVERED_ATTRIBUTE_ID                                0x014A // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER38_SUMMATION_RECEIVED_ATTRIBUTE_ID                                 0x014B // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER39_SUMMATION_DELIVERED_ATTRIBUTE_ID                                0x014C // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER39_SUMMATION_RECEIVED_ATTRIBUTE_ID                                 0x014D // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER40_SUMMATION_DELIVERED_ATTRIBUTE_ID                                0x014E // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER40_SUMMATION_RECEIVED_ATTRIBUTE_ID                                 0x014F // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER41_SUMMATION_DELIVERED_ATTRIBUTE_ID                                0x0150 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER41_SUMMATION_RECEIVED_ATTRIBUTE_ID                                 0x0151 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER42_SUMMATION_DELIVERED_ATTRIBUTE_ID                                0x0152 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER42_SUMMATION_RECEIVED_ATTRIBUTE_ID                                 0x0153 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER43_SUMMATION_DELIVERED_ATTRIBUTE_ID                                0x0154 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER43_SUMMATION_RECEIVED_ATTRIBUTE_ID                                 0x0155 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER44_SUMMATION_DELIVERED_ATTRIBUTE_ID                                0x0156 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER44_SUMMATION_RECEIVED_ATTRIBUTE_ID                                 0x0157 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER45_SUMMATION_DELIVERED_ATTRIBUTE_ID                                0x0158 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER45_SUMMATION_RECEIVED_ATTRIBUTE_ID                                 0x0159 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER46_SUMMATION_DELIVERED_ATTRIBUTE_ID                                0x015A // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER46_SUMMATION_RECEIVED_ATTRIBUTE_ID                                 0x015B // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER47_SUMMATION_DELIVERED_ATTRIBUTE_ID                                0x015C // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER47_SUMMATION_RECEIVED_ATTRIBUTE_ID                                 0x015D // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER48_SUMMATION_DELIVERED_ATTRIBUTE_ID                                0x015E // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER48_SUMMATION_RECEIVED_ATTRIBUTE_ID                                 0x015F // Ver.: since se-1.2a-07-5356-19
#define ATTR_CPP1_SUMMATION_DELIVERED_ATTRIBUTE_ID                                          0x01FC // Ver.: since se-1.2a-07-5356-19
#define ATTR_CPP2_SUMMATION_DELIVERED_ATTRIBUTE_ID                                          0x01FE // Ver.: since se-1.2a-07-5356-19
#define ATTR_STATUS_ATTRIBUTE_ID                                                            0x0200 // Ver.: always
#define ATTR_REMAINING_BATTERY_LIFE_ATTRIBUTE_ID                                            0x0201 // Ver.: since se-1.1-07-5356-16
#define ATTR_HOURS_IN_OPERATION_ATTRIBUTE_ID                                                0x0202 // Ver.: since se-1.1-07-5356-16
#define ATTR_HOURS_IN_FAULT_ATTRIBUTE_ID                                                    0x0203 // Ver.: since se-1.1-07-5356-16
#define ATTR_EXTENDED_STATUS_ATTRIBUTE_ID                                                   0x0204 // Ver.: since se-1.2a-07-5356-19
#define ATTR_REMAINING_BATTERY_LIFE_IN_DAYS_ATTRIBUTE_ID                                    0x0205 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_METER_ID_ATTRIBUTE_ID                                                  0x0206 // Ver.: since se-1.2a-07-5356-19
#define ATTR_AMBIENT_CONSUMPTION_INDICATOR_ATTRIBUTE_ID                                     0x0207 // Ver.: since se-1.2a-07-5356-19
#define ATTR_UNIT_OF_MEASURE_ATTRIBUTE_ID                                                   0x0300 // Ver.: always
#define ATTR_MULTIPLIER_ATTRIBUTE_ID                                                        0x0301 // Ver.: always
#define ATTR_DIVISOR_ATTRIBUTE_ID                                                           0x0302 // Ver.: always
#define ATTR_SUMMATION_FORMATTING_ATTRIBUTE_ID                                              0x0303 // Ver.: always
#define ATTR_DEMAND_FORMATTING_ATTRIBUTE_ID                                                 0x0304 // Ver.: always
#define ATTR_HISTORICAL_CONSUMPTION_FORMATTING_ATTRIBUTE_ID                                 0x0305 // Ver.: always
#define ATTR_METERING_DEVICE_TYPE_ATTRIBUTE_ID                                              0x0306 // Ver.: always
#define ATTR_SITE_ID_ATTRIBUTE_ID                                                           0x0307 // Ver.: since se-1.1-07-5356-16
#define ATTR_METER_SERIAL_NUMBER_ATTRIBUTE_ID                                               0x0308 // Ver.: since se-1.1-07-5356-16
#define ATTR_ENERGY_CARRIER_UNIT_OF_MEASURE_ATTRIBUTE_ID                                    0x0309 // Ver.: since se-1.1-07-5356-16
#define ATTR_ENERGY_CARRIER_SUMMATION_FORMATTING_ATTRIBUTE_ID                               0x030A // Ver.: since se-1.1-07-5356-16
#define ATTR_ENERGY_CARRIER_DEMAND_FORMATTING_ATTRIBUTE_ID                                  0x030B // Ver.: since se-1.1-07-5356-16
#define ATTR_TEMPERATURE_UNIT_OF_MEASURE_ATTRIBUTE_ID                                       0x030C // Ver.: since se-1.1-07-5356-16
#define ATTR_TEMPERATURE_FORMATTING_ATTRIBUTE_ID                                            0x030D // Ver.: since se-1.1-07-5356-16
#define ATTR_MODULE_SERIAL_NUMBER_ATTRIBUTE_ID                                              0x030E // Ver.: since se-1.2a-07-5356-19
#define ATTR_OPERATING_TARIFF_LABEL_DELIVERED_ATTRIBUTE_ID                                  0x030F // Ver.: since se-1.2a-07-5356-19
#define ATTR_OPERATING_TARIFF_LABEL_RECEIVED_ATTRIBUTE_ID                                   0x0310 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CUSTOMER_ID_NUMBER_ATTRIBUTE_ID                                                0x0311 // Ver.: since se-1.2a-07-5356-19
#define ATTR_ALTERNATIVE_UNIT_OF_MEASURE_ATTRIBUTE_ID                                       0x0312 // Ver.: since se-1.2a-07-5356-19
#define ATTR_ALTERNATIVE_DEMAND_FORMATTING_ATTRIBUTE_ID                                     0x0313 // Ver.: since se-1.2a-07-5356-19
#define ATTR_ALTERNATIVE_CONSUMPTION_FORMATTING_ATTRIBUTE_ID                                0x0314 // Ver.: since se-1.2a-07-5356-19
#define ATTR_INSTANTANEOUS_DEMAND_ATTRIBUTE_ID                                              0x0400 // Ver.: always
#define ATTR_CURRENT_DAY_CONSUMPTION_DELIVERED_ATTRIBUTE_ID                                 0x0401 // Ver.: always
#define ATTR_CURRENT_DAY_CONSUMPTION_RECEIVED_ATTRIBUTE_ID                                  0x0402 // Ver.: always
#define ATTR_PREVIOUS_DAY_CONSUMPTION_DELIVERED_ATTRIBUTE_ID                                0x0403 // Ver.: always
#define ATTR_PREVIOUS_DAY_CONSUMPTION_RECEIVED_ATTRIBUTE_ID                                 0x0404 // Ver.: always
#define ATTR_CURRENT_PARTIAL_PROFILE_INTERVAL_START_TIME_DELIVERED_ATTRIBUTE_ID             0x0405 // Ver.: always
#define ATTR_CURRENT_PARTIAL_PROFILE_INTERVAL_START_TIME_RECEIVED_ATTRIBUTE_ID              0x0406 // Ver.: always
#define ATTR_CURRENT_PARTIAL_PROFILE_INTERVAL_VALUE_DELIVERED_ATTRIBUTE_ID                  0x0407 // Ver.: always
#define ATTR_CURRENT_PARTIAL_PROFILE_INTERVAL_VALUE_RECEIVED_ATTRIBUTE_ID                   0x0408 // Ver.: always
#define ATTR_CURRENT_DAY_MAX_PRESSURE_ATTRIBUTE_ID                                          0x0409 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_DAY_MIN_PRESSURE_ATTRIBUTE_ID                                          0x040A // Ver.: since se-1.1-07-5356-16
#define ATTR_PREVIOUS_DAY_MAX_PRESSURE_ATTRIBUTE_ID                                         0x040B // Ver.: since se-1.1-07-5356-16
#define ATTR_PREVIOUS_DAY_MIN_PRESSURE_ATTRIBUTE_ID                                         0x040C // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_DAY_MAX_DEMAND_ATTRIBUTE_ID                                            0x040D // Ver.: since se-1.1-07-5356-16
#define ATTR_PREVIOUS_DAY_MAX_DEMAND_ATTRIBUTE_ID                                           0x040E // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_MONTH_MAX_DEMAND_ATTRIBUTE_ID                                          0x040F // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_YEAR_MAX_DEMAND_ATTRIBUTE_ID                                           0x0410 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_DAY_MAX_ENERGY_CARRIER_DEMAND_ATTRIBUTE_ID                             0x0411 // Ver.: since se-1.1-07-5356-16
#define ATTR_PREVIOUS_DAY_MAX_ENERGY_CARRIER_DEMAND_ATTRIBUTE_ID                            0x0412 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_MONTH_MAX_ENERGY_CARRIER_DEMAND_ATTRIBUTE_ID                           0x0413 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_MONTH_MIN_ENERGY_CARRIER_DEMAND_ATTRIBUTE_ID                           0x0414 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_YEAR_MAX_ENERGY_CARRIER_DEMAND_ATTRIBUTE_ID                            0x0415 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_YEAR_MIN_ENERGY_CARRIER_DEMAND_ATTRIBUTE_ID                            0x0416 // Ver.: since se-1.1-07-5356-16
#define ATTR_PREVIOUS_DAY2_CONSUMPTION_DELIVERED_ATTRIBUTE_ID                               0x0420 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_DAY2_CONSUMPTION_RECEIVED_ATTRIBUTE_ID                                0x0421 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_DAY3_CONSUMPTION_DELIVERED_ATTRIBUTE_ID                               0x0422 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_DAY3_CONSUMPTION_RECEIVED_ATTRIBUTE_ID                                0x0423 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_DAY4_CONSUMPTION_DELIVERED_ATTRIBUTE_ID                               0x0424 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_DAY4_CONSUMPTION_RECEIVED_ATTRIBUTE_ID                                0x0425 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_DAY5_CONSUMPTION_DELIVERED_ATTRIBUTE_ID                               0x0426 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_DAY5_CONSUMPTION_RECEIVED_ATTRIBUTE_ID                                0x0427 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_DAY6_CONSUMPTION_DELIVERED_ATTRIBUTE_ID                               0x0428 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_DAY6_CONSUMPTION_RECEIVED_ATTRIBUTE_ID                                0x0429 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_DAY7_CONSUMPTION_DELIVERED_ATTRIBUTE_ID                               0x042A // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_DAY7_CONSUMPTION_RECEIVED_ATTRIBUTE_ID                                0x042B // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_DAY8_CONSUMPTION_DELIVERED_ATTRIBUTE_ID                               0x042C // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_DAY8_CONSUMPTION_RECEIVED_ATTRIBUTE_ID                                0x042D // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_WEEK_CONSUMPTION_DELIVERED_ATTRIBUTE_ID                                0x0430 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_WEEK_CONSUMPTION_RECEIVED_ATTRIBUTE_ID                                 0x0431 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_WEEK_CONSUMPTION_DELIVERED_ATTRIBUTE_ID                               0x0432 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_WEEK_CONSUMPTION_RECEIVED_ATTRIBUTE_ID                                0x0433 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_WEEK2_CONSUMPTION_DELIVERED_ATTRIBUTE_ID                              0x0434 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_WEEK2_CONSUMPTION_RECEIVED_ATTRIBUTE_ID                               0x0435 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_WEEK3_CONSUMPTION_DELIVERED_ATTRIBUTE_ID                              0x0436 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_WEEK3_CONSUMPTION_RECEIVED_ATTRIBUTE_ID                               0x0437 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_WEEK4_CONSUMPTION_DELIVERED_ATTRIBUTE_ID                              0x0438 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_WEEK4_CONSUMPTION_RECEIVED_ATTRIBUTE_ID                               0x0439 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_WEEK5_CONSUMPTION_DELIVERED_ATTRIBUTE_ID                              0x043A // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_WEEK5_CONSUMPTION_RECEIVED_ATTRIBUTE_ID                               0x043B // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_MONTH_CONSUMPTION_DELIVERED_ATTRIBUTE_ID                               0x0440 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_MONTH_CONSUMPTION_RECEIVED_ATTRIBUTE_ID                                0x0441 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH_CONSUMPTION_DELIVERED_ATTRIBUTE_ID                              0x0442 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH_CONSUMPTION_RECEIVED_ATTRIBUTE_ID                               0x0443 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH2_CONSUMPTION_DELIVERED_ATTRIBUTE_ID                             0x0444 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH2_CONSUMPTION_RECEIVED_ATTRIBUTE_ID                              0x0445 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH3_CONSUMPTION_DELIVERED_ATTRIBUTE_ID                             0x0446 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH3_CONSUMPTION_RECEIVED_ATTRIBUTE_ID                              0x0447 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH4_CONSUMPTION_DELIVERED_ATTRIBUTE_ID                             0x0448 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH4_CONSUMPTION_RECEIVED_ATTRIBUTE_ID                              0x0449 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH5_CONSUMPTION_DELIVERED_ATTRIBUTE_ID                             0x044A // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH5_CONSUMPTION_RECEIVED_ATTRIBUTE_ID                              0x044B // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH6_CONSUMPTION_DELIVERED_ATTRIBUTE_ID                             0x044C // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH6_CONSUMPTION_RECEIVED_ATTRIBUTE_ID                              0x044D // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH7_CONSUMPTION_DELIVERED_ATTRIBUTE_ID                             0x044E // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH7_CONSUMPTION_RECEIVED_ATTRIBUTE_ID                              0x044F // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH8_CONSUMPTION_DELIVERED_ATTRIBUTE_ID                             0x0450 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH8_CONSUMPTION_RECEIVED_ATTRIBUTE_ID                              0x0451 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH9_CONSUMPTION_DELIVERED_ATTRIBUTE_ID                             0x0452 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH9_CONSUMPTION_RECEIVED_ATTRIBUTE_ID                              0x0453 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH10_CONSUMPTION_DELIVERED_ATTRIBUTE_ID                            0x0454 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH10_CONSUMPTION_RECEIVED_ATTRIBUTE_ID                             0x0455 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH11_CONSUMPTION_DELIVERED_ATTRIBUTE_ID                            0x0456 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH11_CONSUMPTION_RECEIVED_ATTRIBUTE_ID                             0x0457 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH12_CONSUMPTION_DELIVERED_ATTRIBUTE_ID                            0x0458 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH12_CONSUMPTION_RECEIVED_ATTRIBUTE_ID                             0x0459 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH13_CONSUMPTION_DELIVERED_ATTRIBUTE_ID                            0x045A // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH13_CONSUMPTION_RECEIVED_ATTRIBUTE_ID                             0x045B // Ver.: since se-1.2a-07-5356-19
#define ATTR_METERING_HISTORICAL_FREEZE_TIME_ATTRIBUTE_ID                                   0x045C // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_DAY_MAX_DEMAND_DELIVERED_ATTRIBUTE_ID                                  0x045D // Ver.: since se-1.4-17-05019-001
#define ATTR_CURRENT_DAY_MAX_DEMAND_DELIVERED_TIME_ATTRIBUTE_ID                             0x045E // Ver.: since se-1.4-17-05019-001
#define ATTR_CURRENT_DAY_MAX_DEMAND_RECEIVED_ATTRIBUTE_ID                                   0x045F // Ver.: since se-1.4-17-05019-001
#define ATTR_CURRENT_DAY_MAX_DEMAND_RECEIVED_TIME_ATTRIBUTE_ID                              0x0460 // Ver.: since se-1.4-17-05019-001
#define ATTR_PREVIOUS_DAY_MAX_DEMAND_DELIVERED_ATTRIBUTE_ID                                 0x0461 // Ver.: since se-1.4-17-05019-001
#define ATTR_PREVIOUS_DAY_MAX_DEMAND_DELIVERED_TIME_ATTRIBUTE_ID                            0x0462 // Ver.: since se-1.4-17-05019-001
#define ATTR_PREVIOUS_DAY_MAX_DEMAND_RECEIVED_ATTRIBUTE_ID                                  0x0463 // Ver.: since se-1.4-17-05019-001
#define ATTR_PREVIOUS_DAY_MAX_DEMAND_RECEIVED_TIME_ATTRIBUTE_ID                             0x0464 // Ver.: since se-1.4-17-05019-001
#define ATTR_MAX_NUMBER_OF_PERIODS_DELIVERED_ATTRIBUTE_ID                                   0x0500 // Ver.: always
#define ATTR_CURRENT_DEMAND_DELIVERED_ATTRIBUTE_ID                                          0x0600 // Ver.: always
#define ATTR_DEMAND_LIMIT_ATTRIBUTE_ID                                                      0x0601 // Ver.: always
#define ATTR_DEMAND_INTEGRATION_PERIOD_ATTRIBUTE_ID                                         0x0602 // Ver.: always
#define ATTR_NUMBER_OF_DEMAND_SUBINTERVALS_ATTRIBUTE_ID                                     0x0603 // Ver.: always
#define ATTR_DEMAND_LIMIT_ARM_DURATION_IN_MINUTES_ATTRIBUTE_ID                              0x0604 // Ver.: since se-1.2a-07-5356-19
#define ATTR_LOAD_LIMIT_SUPPLY_STATE_ATTRIBUTE_ID                                           0x0605 // Ver.: since se-1.2a-07-5356-19
#define ATTR_LOAD_LIMIT_COUNTER_ATTRIBUTE_ID                                                0x0606 // Ver.: since se-1.2a-07-5356-19
#define ATTR_SUPPLY_TAMPER_STATE_ATTRIBUTE_ID                                               0x0607 // Ver.: since se-1.2a-07-5356-19
#define ATTR_SUPPLY_DEPLETION_STATE_ATTRIBUTE_ID                                            0x0608 // Ver.: since se-1.2a-07-5356-19
#define ATTR_SUPPLY_UNCONTROLLED_FLOW_STATE_ATTRIBUTE_ID                                    0x0609 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_NO_TIER_BLOCK1_SUMMATION_DELIVERED_ATTRIBUTE_ID                        0x0700 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_NO_TIER_BLOCK2_SUMMATION_DELIVERED_ATTRIBUTE_ID                        0x0701 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_NO_TIER_BLOCK3_SUMMATION_DELIVERED_ATTRIBUTE_ID                        0x0702 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_NO_TIER_BLOCK4_SUMMATION_DELIVERED_ATTRIBUTE_ID                        0x0703 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_NO_TIER_BLOCK5_SUMMATION_DELIVERED_ATTRIBUTE_ID                        0x0704 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_NO_TIER_BLOCK6_SUMMATION_DELIVERED_ATTRIBUTE_ID                        0x0705 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_NO_TIER_BLOCK7_SUMMATION_DELIVERED_ATTRIBUTE_ID                        0x0706 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_NO_TIER_BLOCK8_SUMMATION_DELIVERED_ATTRIBUTE_ID                        0x0707 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_NO_TIER_BLOCK9_SUMMATION_DELIVERED_ATTRIBUTE_ID                        0x0708 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_NO_TIER_BLOCK10_SUMMATION_DELIVERED_ATTRIBUTE_ID                       0x0709 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_NO_TIER_BLOCK11_SUMMATION_DELIVERED_ATTRIBUTE_ID                       0x070A // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_NO_TIER_BLOCK12_SUMMATION_DELIVERED_ATTRIBUTE_ID                       0x070B // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_NO_TIER_BLOCK13_SUMMATION_DELIVERED_ATTRIBUTE_ID                       0x070C // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_NO_TIER_BLOCK14_SUMMATION_DELIVERED_ATTRIBUTE_ID                       0x070D // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_NO_TIER_BLOCK15_SUMMATION_DELIVERED_ATTRIBUTE_ID                       0x070E // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_NO_TIER_BLOCK16_SUMMATION_DELIVERED_ATTRIBUTE_ID                       0x070F // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER1_BLOCK1_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0710 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER1_BLOCK2_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0711 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER1_BLOCK3_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0712 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER1_BLOCK4_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0713 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER1_BLOCK5_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0714 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER1_BLOCK6_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0715 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER1_BLOCK7_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0716 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER1_BLOCK8_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0717 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER1_BLOCK9_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0718 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER1_BLOCK10_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x0719 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER1_BLOCK11_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x071A // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER1_BLOCK12_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x071B // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER1_BLOCK13_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x071C // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER1_BLOCK14_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x071D // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER1_BLOCK15_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x071E // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER1_BLOCK16_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x071F // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER2_BLOCK1_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0720 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER2_BLOCK2_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0721 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER2_BLOCK3_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0722 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER2_BLOCK4_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0723 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER2_BLOCK5_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0724 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER2_BLOCK6_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0725 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER2_BLOCK7_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0726 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER2_BLOCK8_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0727 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER2_BLOCK9_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0728 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER2_BLOCK10_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x0729 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER2_BLOCK11_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x072A // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER2_BLOCK12_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x072B // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER2_BLOCK13_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x072C // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER2_BLOCK14_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x072D // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER2_BLOCK15_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x072E // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER2_BLOCK16_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x072F // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER3_BLOCK1_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0730 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER3_BLOCK2_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0731 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER3_BLOCK3_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0732 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER3_BLOCK4_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0733 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER3_BLOCK5_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0734 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER3_BLOCK6_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0735 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER3_BLOCK7_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0736 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER3_BLOCK8_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0737 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER3_BLOCK9_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0738 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER3_BLOCK10_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x0739 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER3_BLOCK11_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x073A // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER3_BLOCK12_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x073B // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER3_BLOCK13_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x073C // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER3_BLOCK14_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x073D // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER3_BLOCK15_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x073E // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER3_BLOCK16_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x073F // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER4_BLOCK1_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0740 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER4_BLOCK2_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0741 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER4_BLOCK3_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0742 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER4_BLOCK4_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0743 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER4_BLOCK5_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0744 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER4_BLOCK6_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0745 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER4_BLOCK7_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0746 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER4_BLOCK8_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0747 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER4_BLOCK9_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0748 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER4_BLOCK10_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x0749 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER4_BLOCK11_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x074A // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER4_BLOCK12_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x074B // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER4_BLOCK13_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x074C // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER4_BLOCK14_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x074D // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER4_BLOCK15_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x074E // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER4_BLOCK16_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x074F // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER5_BLOCK1_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0750 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER5_BLOCK2_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0751 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER5_BLOCK3_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0752 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER5_BLOCK4_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0753 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER5_BLOCK5_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0754 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER5_BLOCK6_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0755 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER5_BLOCK7_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0756 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER5_BLOCK8_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0757 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER5_BLOCK9_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0758 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER5_BLOCK10_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x0759 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER5_BLOCK11_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x075A // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER5_BLOCK12_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x075B // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER5_BLOCK13_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x075C // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER5_BLOCK14_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x075D // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER5_BLOCK15_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x075E // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER5_BLOCK16_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x075F // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER6_BLOCK1_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0760 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER6_BLOCK2_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0761 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER6_BLOCK3_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0762 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER6_BLOCK4_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0763 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER6_BLOCK5_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0764 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER6_BLOCK6_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0765 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER6_BLOCK7_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0766 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER6_BLOCK8_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0767 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER6_BLOCK9_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0768 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER6_BLOCK10_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x0769 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER6_BLOCK11_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x076A // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER6_BLOCK12_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x076B // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER6_BLOCK13_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x076C // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER6_BLOCK14_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x076D // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER6_BLOCK15_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x076E // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER6_BLOCK16_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x076F // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER7_BLOCK1_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0770 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER7_BLOCK2_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0771 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER7_BLOCK3_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0772 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER7_BLOCK4_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0773 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER7_BLOCK5_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0774 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER7_BLOCK6_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0775 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER7_BLOCK7_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0776 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER7_BLOCK8_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0777 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER7_BLOCK9_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0778 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER7_BLOCK10_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x0779 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER7_BLOCK11_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x077A // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER7_BLOCK12_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x077B // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER7_BLOCK13_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x077C // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER7_BLOCK14_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x077D // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER7_BLOCK15_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x077E // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER7_BLOCK16_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x077F // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER8_BLOCK1_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0780 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER8_BLOCK2_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0781 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER8_BLOCK3_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0782 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER8_BLOCK4_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0783 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER8_BLOCK5_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0784 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER8_BLOCK6_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0785 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER8_BLOCK7_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0786 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER8_BLOCK8_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0787 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER8_BLOCK9_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0788 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER8_BLOCK10_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x0789 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER8_BLOCK11_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x078A // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER8_BLOCK12_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x078B // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER8_BLOCK13_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x078C // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER8_BLOCK14_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x078D // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER8_BLOCK15_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x078E // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER8_BLOCK16_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x078F // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER9_BLOCK1_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0790 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER9_BLOCK2_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0791 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER9_BLOCK3_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0792 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER9_BLOCK4_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0793 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER9_BLOCK5_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0794 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER9_BLOCK6_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0795 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER9_BLOCK7_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0796 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER9_BLOCK8_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0797 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER9_BLOCK9_SUMMATION_DELIVERED_ATTRIBUTE_ID                          0x0798 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER9_BLOCK10_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x0799 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER9_BLOCK11_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x079A // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER9_BLOCK12_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x079B // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER9_BLOCK13_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x079C // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER9_BLOCK14_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x079D // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER9_BLOCK15_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x079E // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER9_BLOCK16_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x079F // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER10_BLOCK1_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x07A0 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER10_BLOCK2_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x07A1 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER10_BLOCK3_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x07A2 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER10_BLOCK4_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x07A3 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER10_BLOCK5_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x07A4 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER10_BLOCK6_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x07A5 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER10_BLOCK7_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x07A6 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER10_BLOCK8_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x07A7 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER10_BLOCK9_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x07A8 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER10_BLOCK10_SUMMATION_DELIVERED_ATTRIBUTE_ID                        0x07A9 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER10_BLOCK11_SUMMATION_DELIVERED_ATTRIBUTE_ID                        0x07AA // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER10_BLOCK12_SUMMATION_DELIVERED_ATTRIBUTE_ID                        0x07AB // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER10_BLOCK13_SUMMATION_DELIVERED_ATTRIBUTE_ID                        0x07AC // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER10_BLOCK14_SUMMATION_DELIVERED_ATTRIBUTE_ID                        0x07AD // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER10_BLOCK15_SUMMATION_DELIVERED_ATTRIBUTE_ID                        0x07AE // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER10_BLOCK16_SUMMATION_DELIVERED_ATTRIBUTE_ID                        0x07AF // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER11_BLOCK1_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x07B0 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER11_BLOCK2_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x07B1 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER11_BLOCK3_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x07B2 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER11_BLOCK4_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x07B3 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER11_BLOCK5_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x07B4 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER11_BLOCK6_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x07B5 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER11_BLOCK7_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x07B6 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER11_BLOCK8_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x07B7 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER11_BLOCK9_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x07B8 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER11_BLOCK10_SUMMATION_DELIVERED_ATTRIBUTE_ID                        0x07B9 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER11_BLOCK11_SUMMATION_DELIVERED_ATTRIBUTE_ID                        0x07BA // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER11_BLOCK12_SUMMATION_DELIVERED_ATTRIBUTE_ID                        0x07BB // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER11_BLOCK13_SUMMATION_DELIVERED_ATTRIBUTE_ID                        0x07BC // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER11_BLOCK14_SUMMATION_DELIVERED_ATTRIBUTE_ID                        0x07BD // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER11_BLOCK15_SUMMATION_DELIVERED_ATTRIBUTE_ID                        0x07BE // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER11_BLOCK16_SUMMATION_DELIVERED_ATTRIBUTE_ID                        0x07BF // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER12_BLOCK1_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x07C0 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER12_BLOCK2_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x07C1 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER12_BLOCK3_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x07C2 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER12_BLOCK4_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x07C3 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER12_BLOCK5_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x07C4 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER12_BLOCK6_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x07C5 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER12_BLOCK7_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x07C6 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER12_BLOCK8_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x07C7 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER12_BLOCK9_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x07C8 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER12_BLOCK10_SUMMATION_DELIVERED_ATTRIBUTE_ID                        0x07C9 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER12_BLOCK11_SUMMATION_DELIVERED_ATTRIBUTE_ID                        0x07CA // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER12_BLOCK12_SUMMATION_DELIVERED_ATTRIBUTE_ID                        0x07CB // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER12_BLOCK13_SUMMATION_DELIVERED_ATTRIBUTE_ID                        0x07CC // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER12_BLOCK14_SUMMATION_DELIVERED_ATTRIBUTE_ID                        0x07CD // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER12_BLOCK15_SUMMATION_DELIVERED_ATTRIBUTE_ID                        0x07CE // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER12_BLOCK16_SUMMATION_DELIVERED_ATTRIBUTE_ID                        0x07CF // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER13_BLOCK1_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x07D0 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER13_BLOCK2_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x07D1 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER13_BLOCK3_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x07D2 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER13_BLOCK4_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x07D3 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER13_BLOCK5_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x07D4 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER13_BLOCK6_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x07D5 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER13_BLOCK7_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x07D6 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER13_BLOCK8_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x07D7 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER13_BLOCK9_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x07D8 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER13_BLOCK10_SUMMATION_DELIVERED_ATTRIBUTE_ID                        0x07D9 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER13_BLOCK11_SUMMATION_DELIVERED_ATTRIBUTE_ID                        0x07DA // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER13_BLOCK12_SUMMATION_DELIVERED_ATTRIBUTE_ID                        0x07DB // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER13_BLOCK13_SUMMATION_DELIVERED_ATTRIBUTE_ID                        0x07DC // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER13_BLOCK14_SUMMATION_DELIVERED_ATTRIBUTE_ID                        0x07DD // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER13_BLOCK15_SUMMATION_DELIVERED_ATTRIBUTE_ID                        0x07DE // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER13_BLOCK16_SUMMATION_DELIVERED_ATTRIBUTE_ID                        0x07DF // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER14_BLOCK1_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x07E0 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER14_BLOCK2_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x07E1 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER14_BLOCK3_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x07E2 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER14_BLOCK4_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x07E3 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER14_BLOCK5_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x07E4 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER14_BLOCK6_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x07E5 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER14_BLOCK7_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x07E6 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER14_BLOCK8_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x07E7 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER14_BLOCK9_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x07E8 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER14_BLOCK10_SUMMATION_DELIVERED_ATTRIBUTE_ID                        0x07E9 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER14_BLOCK11_SUMMATION_DELIVERED_ATTRIBUTE_ID                        0x07EA // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER14_BLOCK12_SUMMATION_DELIVERED_ATTRIBUTE_ID                        0x07EB // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER14_BLOCK13_SUMMATION_DELIVERED_ATTRIBUTE_ID                        0x07EC // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER14_BLOCK14_SUMMATION_DELIVERED_ATTRIBUTE_ID                        0x07ED // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER14_BLOCK15_SUMMATION_DELIVERED_ATTRIBUTE_ID                        0x07EE // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER14_BLOCK16_SUMMATION_DELIVERED_ATTRIBUTE_ID                        0x07EF // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER15_BLOCK1_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x07F0 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER15_BLOCK2_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x07F1 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER15_BLOCK3_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x07F2 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER15_BLOCK4_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x07F3 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER15_BLOCK5_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x07F4 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER15_BLOCK6_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x07F5 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER15_BLOCK7_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x07F6 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER15_BLOCK8_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x07F7 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER15_BLOCK9_SUMMATION_DELIVERED_ATTRIBUTE_ID                         0x07F8 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER15_BLOCK10_SUMMATION_DELIVERED_ATTRIBUTE_ID                        0x07F9 // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER15_BLOCK11_SUMMATION_DELIVERED_ATTRIBUTE_ID                        0x07FA // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER15_BLOCK12_SUMMATION_DELIVERED_ATTRIBUTE_ID                        0x07FB // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER15_BLOCK13_SUMMATION_DELIVERED_ATTRIBUTE_ID                        0x07FC // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER15_BLOCK14_SUMMATION_DELIVERED_ATTRIBUTE_ID                        0x07FD // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER15_BLOCK15_SUMMATION_DELIVERED_ATTRIBUTE_ID                        0x07FE // Ver.: since se-1.1-07-5356-16
#define ATTR_CURRENT_TIER15_BLOCK16_SUMMATION_DELIVERED_ATTRIBUTE_ID                        0x07FF // Ver.: since se-1.1-07-5356-16
#define ATTR_GENERIC_ALARM_MASK_ATTRIBUTE_ID                                                0x0800 // Ver.: since se-1.1-07-5356-16
#define ATTR_ELECTRICITY_ALARM_MASK_ATTRIBUTE_ID                                            0x0801 // Ver.: since se-1.1-07-5356-16
#define ATTR_GENERIC_FLOW_PRESSURE_ALARM_MASK_ATTRIBUTE_ID                                  0x0802 // Ver.: since se-1.1-07-5356-16
#define ATTR_WATER_SPECIFIC_ALARM_MASK_ATTRIBUTE_ID                                         0x0803 // Ver.: since se-1.1-07-5356-16
#define ATTR_HEAT_AND_COOLING_SPECIFIC_ALARM_MASK_ATTRIBUTE_ID                              0x0804 // Ver.: since se-1.1-07-5356-16
#define ATTR_GAS_SPECIFIC_ALARM_MASK_ATTRIBUTE_ID                                           0x0805 // Ver.: since se-1.1-07-5356-16
#define ATTR_METERING_EXTENDED_GENERIC_ALARM_MASK_ATTRIBUTE_ID                              0x0806 // Ver.: since se-1.2a-07-5356-19
#define ATTR_METERING_MANUFACTURE_ALARM_MASK_ATTRIBUTE_ID                                   0x0807 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_NO_TIER_BLOCK1_SUMMATION_RECEIVED_ATTRIBUTE_ID                         0x0900 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_NO_TIER_BLOCK2_SUMMATION_RECEIVED_ATTRIBUTE_ID                         0x0901 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_NO_TIER_BLOCK3_SUMMATION_RECEIVED_ATTRIBUTE_ID                         0x0902 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_NO_TIER_BLOCK4_SUMMATION_RECEIVED_ATTRIBUTE_ID                         0x0903 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_NO_TIER_BLOCK5_SUMMATION_RECEIVED_ATTRIBUTE_ID                         0x0904 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_NO_TIER_BLOCK6_SUMMATION_RECEIVED_ATTRIBUTE_ID                         0x0905 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_NO_TIER_BLOCK7_SUMMATION_RECEIVED_ATTRIBUTE_ID                         0x0906 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_NO_TIER_BLOCK8_SUMMATION_RECEIVED_ATTRIBUTE_ID                         0x0907 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_NO_TIER_BLOCK9_SUMMATION_RECEIVED_ATTRIBUTE_ID                         0x0908 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_NO_TIER_BLOCK10_SUMMATION_RECEIVED_ATTRIBUTE_ID                        0x0909 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_NO_TIER_BLOCK11_SUMMATION_RECEIVED_ATTRIBUTE_ID                        0x090A // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_NO_TIER_BLOCK12_SUMMATION_RECEIVED_ATTRIBUTE_ID                        0x090B // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_NO_TIER_BLOCK13_SUMMATION_RECEIVED_ATTRIBUTE_ID                        0x090C // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_NO_TIER_BLOCK14_SUMMATION_RECEIVED_ATTRIBUTE_ID                        0x090D // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_NO_TIER_BLOCK15_SUMMATION_RECEIVED_ATTRIBUTE_ID                        0x090E // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_NO_TIER_BLOCK16_SUMMATION_RECEIVED_ATTRIBUTE_ID                        0x090F // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER1_BLOCK1_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0910 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER1_BLOCK2_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0911 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER1_BLOCK3_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0912 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER1_BLOCK4_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0913 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER1_BLOCK5_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0914 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER1_BLOCK6_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0915 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER1_BLOCK7_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0916 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER1_BLOCK8_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0917 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER1_BLOCK9_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0918 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER1_BLOCK10_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x0919 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER1_BLOCK11_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x091A // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER1_BLOCK12_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x091B // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER1_BLOCK13_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x091C // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER1_BLOCK14_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x091D // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER1_BLOCK15_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x091E // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER1_BLOCK16_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x091F // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER2_BLOCK1_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0920 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER2_BLOCK2_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0921 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER2_BLOCK3_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0922 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER2_BLOCK4_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0923 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER2_BLOCK5_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0924 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER2_BLOCK6_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0925 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER2_BLOCK7_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0926 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER2_BLOCK8_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0927 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER2_BLOCK9_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0928 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER2_BLOCK10_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x0929 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER2_BLOCK11_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x092A // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER2_BLOCK12_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x092B // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER2_BLOCK13_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x092C // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER2_BLOCK14_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x092D // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER2_BLOCK15_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x092E // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER2_BLOCK16_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x092F // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER3_BLOCK1_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0930 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER3_BLOCK2_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0931 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER3_BLOCK3_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0932 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER3_BLOCK4_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0933 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER3_BLOCK5_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0934 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER3_BLOCK6_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0935 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER3_BLOCK7_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0936 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER3_BLOCK8_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0937 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER3_BLOCK9_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0938 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER3_BLOCK10_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x0939 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER3_BLOCK11_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x093A // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER3_BLOCK12_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x093B // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER3_BLOCK13_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x093C // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER3_BLOCK14_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x093D // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER3_BLOCK15_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x093E // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER3_BLOCK16_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x093F // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER4_BLOCK1_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0940 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER4_BLOCK2_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0941 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER4_BLOCK3_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0942 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER4_BLOCK4_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0943 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER4_BLOCK5_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0944 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER4_BLOCK6_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0945 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER4_BLOCK7_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0946 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER4_BLOCK8_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0947 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER4_BLOCK9_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0948 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER4_BLOCK10_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x0949 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER4_BLOCK11_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x094A // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER4_BLOCK12_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x094B // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER4_BLOCK13_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x094C // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER4_BLOCK14_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x094D // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER4_BLOCK15_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x094E // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER4_BLOCK16_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x094F // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER5_BLOCK1_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0950 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER5_BLOCK2_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0951 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER5_BLOCK3_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0952 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER5_BLOCK4_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0953 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER5_BLOCK5_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0954 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER5_BLOCK6_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0955 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER5_BLOCK7_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0956 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER5_BLOCK8_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0957 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER5_BLOCK9_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0958 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER5_BLOCK10_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x0959 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER5_BLOCK11_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x095A // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER5_BLOCK12_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x095B // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER5_BLOCK13_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x095C // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER5_BLOCK14_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x095D // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER5_BLOCK15_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x095E // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER5_BLOCK16_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x095F // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER6_BLOCK1_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0960 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER6_BLOCK2_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0961 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER6_BLOCK3_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0962 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER6_BLOCK4_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0963 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER6_BLOCK5_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0964 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER6_BLOCK6_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0965 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER6_BLOCK7_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0966 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER6_BLOCK8_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0967 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER6_BLOCK9_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0968 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER6_BLOCK10_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x0969 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER6_BLOCK11_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x096A // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER6_BLOCK12_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x096B // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER6_BLOCK13_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x096C // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER6_BLOCK14_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x096D // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER6_BLOCK15_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x096E // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER6_BLOCK16_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x096F // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER7_BLOCK1_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0970 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER7_BLOCK2_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0971 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER7_BLOCK3_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0972 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER7_BLOCK4_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0973 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER7_BLOCK5_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0974 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER7_BLOCK6_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0975 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER7_BLOCK7_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0976 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER7_BLOCK8_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0977 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER7_BLOCK9_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0978 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER7_BLOCK10_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x0979 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER7_BLOCK11_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x097A // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER7_BLOCK12_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x097B // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER7_BLOCK13_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x097C // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER7_BLOCK14_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x097D // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER7_BLOCK15_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x097E // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER7_BLOCK16_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x097F // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER8_BLOCK1_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0980 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER8_BLOCK2_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0981 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER8_BLOCK3_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0982 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER8_BLOCK4_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0983 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER8_BLOCK5_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0984 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER8_BLOCK6_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0985 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER8_BLOCK7_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0986 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER8_BLOCK8_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0987 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER8_BLOCK9_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0988 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER8_BLOCK10_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x0989 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER8_BLOCK11_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x098A // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER8_BLOCK12_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x098B // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER8_BLOCK13_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x098C // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER8_BLOCK14_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x098D // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER8_BLOCK15_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x098E // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER8_BLOCK16_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x098F // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER9_BLOCK1_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0990 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER9_BLOCK2_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0991 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER9_BLOCK3_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0992 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER9_BLOCK4_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0993 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER9_BLOCK5_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0994 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER9_BLOCK6_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0995 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER9_BLOCK7_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0996 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER9_BLOCK8_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0997 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER9_BLOCK9_SUMMATION_RECEIVED_ATTRIBUTE_ID                           0x0998 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER9_BLOCK10_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x0999 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER9_BLOCK11_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x099A // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER9_BLOCK12_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x099B // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER9_BLOCK13_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x099C // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER9_BLOCK14_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x099D // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER9_BLOCK15_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x099E // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER9_BLOCK16_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x099F // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER10_BLOCK1_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x09A0 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER10_BLOCK2_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x09A1 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER10_BLOCK3_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x09A2 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER10_BLOCK4_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x09A3 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER10_BLOCK5_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x09A4 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER10_BLOCK6_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x09A5 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER10_BLOCK7_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x09A6 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER10_BLOCK8_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x09A7 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER10_BLOCK9_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x09A8 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER10_BLOCK10_SUMMATION_RECEIVED_ATTRIBUTE_ID                         0x09A9 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER10_BLOCK11_SUMMATION_RECEIVED_ATTRIBUTE_ID                         0x09AA // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER10_BLOCK12_SUMMATION_RECEIVED_ATTRIBUTE_ID                         0x09AB // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER10_BLOCK13_SUMMATION_RECEIVED_ATTRIBUTE_ID                         0x09AC // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER10_BLOCK14_SUMMATION_RECEIVED_ATTRIBUTE_ID                         0x09AD // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER10_BLOCK15_SUMMATION_RECEIVED_ATTRIBUTE_ID                         0x09AE // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER10_BLOCK16_SUMMATION_RECEIVED_ATTRIBUTE_ID                         0x09AF // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER11_BLOCK1_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x09B0 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER11_BLOCK2_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x09B1 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER11_BLOCK3_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x09B2 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER11_BLOCK4_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x09B3 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER11_BLOCK5_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x09B4 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER11_BLOCK6_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x09B5 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER11_BLOCK7_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x09B6 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER11_BLOCK8_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x09B7 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER11_BLOCK9_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x09B8 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER11_BLOCK10_SUMMATION_RECEIVED_ATTRIBUTE_ID                         0x09B9 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER11_BLOCK11_SUMMATION_RECEIVED_ATTRIBUTE_ID                         0x09BA // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER11_BLOCK12_SUMMATION_RECEIVED_ATTRIBUTE_ID                         0x09BB // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER11_BLOCK13_SUMMATION_RECEIVED_ATTRIBUTE_ID                         0x09BC // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER11_BLOCK14_SUMMATION_RECEIVED_ATTRIBUTE_ID                         0x09BD // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER11_BLOCK15_SUMMATION_RECEIVED_ATTRIBUTE_ID                         0x09BE // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER11_BLOCK16_SUMMATION_RECEIVED_ATTRIBUTE_ID                         0x09BF // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER12_BLOCK1_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x09C0 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER12_BLOCK2_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x09C1 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER12_BLOCK3_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x09C2 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER12_BLOCK4_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x09C3 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER12_BLOCK5_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x09C4 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER12_BLOCK6_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x09C5 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER12_BLOCK7_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x09C6 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER12_BLOCK8_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x09C7 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER12_BLOCK9_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x09C8 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER12_BLOCK10_SUMMATION_RECEIVED_ATTRIBUTE_ID                         0x09C9 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER12_BLOCK11_SUMMATION_RECEIVED_ATTRIBUTE_ID                         0x09CA // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER12_BLOCK12_SUMMATION_RECEIVED_ATTRIBUTE_ID                         0x09CB // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER12_BLOCK13_SUMMATION_RECEIVED_ATTRIBUTE_ID                         0x09CC // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER12_BLOCK14_SUMMATION_RECEIVED_ATTRIBUTE_ID                         0x09CD // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER12_BLOCK15_SUMMATION_RECEIVED_ATTRIBUTE_ID                         0x09CE // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER12_BLOCK16_SUMMATION_RECEIVED_ATTRIBUTE_ID                         0x09CF // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER13_BLOCK1_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x09D0 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER13_BLOCK2_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x09D1 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER13_BLOCK3_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x09D2 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER13_BLOCK4_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x09D3 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER13_BLOCK5_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x09D4 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER13_BLOCK6_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x09D5 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER13_BLOCK7_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x09D6 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER13_BLOCK8_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x09D7 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER13_BLOCK9_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x09D8 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER13_BLOCK10_SUMMATION_RECEIVED_ATTRIBUTE_ID                         0x09D9 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER13_BLOCK11_SUMMATION_RECEIVED_ATTRIBUTE_ID                         0x09DA // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER13_BLOCK12_SUMMATION_RECEIVED_ATTRIBUTE_ID                         0x09DB // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER13_BLOCK13_SUMMATION_RECEIVED_ATTRIBUTE_ID                         0x09DC // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER13_BLOCK14_SUMMATION_RECEIVED_ATTRIBUTE_ID                         0x09DD // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER13_BLOCK15_SUMMATION_RECEIVED_ATTRIBUTE_ID                         0x09DE // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER13_BLOCK16_SUMMATION_RECEIVED_ATTRIBUTE_ID                         0x09DF // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER14_BLOCK1_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x09E0 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER14_BLOCK2_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x09E1 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER14_BLOCK3_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x09E2 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER14_BLOCK4_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x09E3 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER14_BLOCK5_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x09E4 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER14_BLOCK6_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x09E5 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER14_BLOCK7_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x09E6 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER14_BLOCK8_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x09E7 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER14_BLOCK9_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x09E8 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER14_BLOCK10_SUMMATION_RECEIVED_ATTRIBUTE_ID                         0x09E9 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER14_BLOCK11_SUMMATION_RECEIVED_ATTRIBUTE_ID                         0x09EA // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER14_BLOCK12_SUMMATION_RECEIVED_ATTRIBUTE_ID                         0x09EB // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER14_BLOCK13_SUMMATION_RECEIVED_ATTRIBUTE_ID                         0x09EC // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER14_BLOCK14_SUMMATION_RECEIVED_ATTRIBUTE_ID                         0x09ED // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER14_BLOCK15_SUMMATION_RECEIVED_ATTRIBUTE_ID                         0x09EE // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER14_BLOCK16_SUMMATION_RECEIVED_ATTRIBUTE_ID                         0x09EF // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER15_BLOCK1_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x09F0 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER15_BLOCK2_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x09F1 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER15_BLOCK3_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x09F2 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER15_BLOCK4_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x09F3 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER15_BLOCK5_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x09F4 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER15_BLOCK6_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x09F5 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER15_BLOCK7_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x09F6 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER15_BLOCK8_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x09F7 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER15_BLOCK9_SUMMATION_RECEIVED_ATTRIBUTE_ID                          0x09F8 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER15_BLOCK10_SUMMATION_RECEIVED_ATTRIBUTE_ID                         0x09F9 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER15_BLOCK11_SUMMATION_RECEIVED_ATTRIBUTE_ID                         0x09FA // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER15_BLOCK12_SUMMATION_RECEIVED_ATTRIBUTE_ID                         0x09FB // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER15_BLOCK13_SUMMATION_RECEIVED_ATTRIBUTE_ID                         0x09FC // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER15_BLOCK14_SUMMATION_RECEIVED_ATTRIBUTE_ID                         0x09FD // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER15_BLOCK15_SUMMATION_RECEIVED_ATTRIBUTE_ID                         0x09FE // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_TIER15_BLOCK16_SUMMATION_RECEIVED_ATTRIBUTE_ID                         0x09FF // Ver.: since se-1.2a-07-5356-19
#define ATTR_BILL_TO_DATE_DELIVERED_ATTRIBUTE_ID                                            0x0A00 // Ver.: since se-1.2a-07-5356-19
#define ATTR_BILL_TO_DATE_TIME_STAMP_DELIVERED_ATTRIBUTE_ID                                 0x0A01 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PROJECTED_BILL_DELIVERED_ATTRIBUTE_ID                                          0x0A02 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PROJECTED_BILL_TIME_STAMP_DELIVERED_ATTRIBUTE_ID                               0x0A03 // Ver.: since se-1.2a-07-5356-19
#define ATTR_BILL_DELIVERED_TRAILING_DIGIT_ATTRIBUTE_ID                                     0x0A04 // Ver.: since se-1.2a-07-5356-19
#define ATTR_BILL_TO_DATE_RECEIVED_ATTRIBUTE_ID                                             0x0A10 // Ver.: since se-1.2a-07-5356-19
#define ATTR_BILL_TO_DATE_TIME_STAMP_RECEIVED_ATTRIBUTE_ID                                  0x0A11 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PROJECTED_BILL_RECEIVED_ATTRIBUTE_ID                                           0x0A12 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PROJECTED_BILL_TIME_STAMP_RECEIVED_ATTRIBUTE_ID                                0x0A13 // Ver.: since se-1.2a-07-5356-19
#define ATTR_BILL_RECEIVED_TRAILING_DIGIT_ATTRIBUTE_ID                                      0x0A14 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PROPOSED_CHANGE_SUPPLY_IMPLEMENTATION_TIME_ATTRIBUTE_ID                        0x0B00 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PROPOSED_CHANGE_SUPPLY_STATUS_ATTRIBUTE_ID                                     0x0B01 // Ver.: since se-1.2a-07-5356-19
#define ATTR_UNCONTROLLED_FLOW_THESHOLD_ATTRIBUTE_ID                                        0x0B10 // Ver.: since se-1.2a-07-5356-19
#define ATTR_UNCONTROLLED_FLOW_THESHOLD_UNIT_OF_MEASURE_ATTRIBUTE_ID                        0x0B11 // Ver.: since se-1.2a-07-5356-19
#define ATTR_UNCONTROLLED_FLOW_MULTIPLIER_ATTRIBUTE_ID                                      0x0B12 // Ver.: since se-1.2a-07-5356-19
#define ATTR_UNCONTROLLED_FLOW_DIVISOR_ATTRIBUTE_ID                                         0x0B13 // Ver.: since se-1.2a-07-5356-19
#define ATTR_FLOW_STABILIZATION_PERIOD_ATTRIBUTE_ID                                         0x0B14 // Ver.: since se-1.2a-07-5356-19
#define ATTR_FLOW_MEASUREMENT_PERIOD_ATTRIBUTE_ID                                           0x0B15 // Ver.: since se-1.2a-07-5356-19
#define ATTR_ALTERNATIVE_INSTANTANEOUS_DEMAND_ATTRIBUTE_ID                                  0x0C00 // Ver.: always
#define ATTR_CURRENT_ALTERNATIVE_DAY_ALTERNATIVE_CONSUMPTION_DELIVERED_ATTRIBUTE_ID         0x0C01 // Ver.: always
#define ATTR_CURRENT_ALTERNATIVE_DAY_ALTERNATIVE_CONSUMPTION_RECEIVED_ATTRIBUTE_ID          0x0C02 // Ver.: always
#define ATTR_PREVIOUS_DAY_ALTERNATIVE_CONSUMPTION_DELIVERED_ATTRIBUTE_ID                    0x0C03 // Ver.: always
#define ATTR_PREVIOUS_DAY_ALTERNATIVE_CONSUMPTION_RECEIVED_ATTRIBUTE_ID                     0x0C04 // Ver.: always
#define ATTR_CURRENT_ALTERNATIVE_PARTIAL_PROFILE_INTERVAL_START_TIME_DELIVERED_ATTRIBUTE_ID 0x0C05 // Ver.: always
#define ATTR_CURRENT_ALTERNATIVE_PARTIAL_PROFILE_INTERVAL_START_TIME_RECEIVED_ATTRIBUTE_ID  0x0C06 // Ver.: always
#define ATTR_CURRENT_ALTERNATIVE_PARTIAL_PROFILE_INTERVAL_VALUE_DELIVERED_ATTRIBUTE_ID      0x0C07 // Ver.: always
#define ATTR_CURRENT_ALTERNATIVE_PARTIAL_PROFILE_INTERVAL_VALUE_RECEIVED_ATTRIBUTE_ID       0x0C08 // Ver.: always
#define ATTR_CURRENT_ALTERNATIVE_DAY_MAX_PRESSURE_ATTRIBUTE_ID                              0x0C09 // Ver.: always
#define ATTR_CURRENT_ALTERNATIVE_DAY_MIN_PRESSURE_ATTRIBUTE_ID                              0x0C0A // Ver.: always
#define ATTR_PREVIOUS_DAY_ALTERNATIVE_MAX_PRESSURE_ATTRIBUTE_ID                             0x0C0B // Ver.: always
#define ATTR_PREVIOUS_DAY_ALTERNATIVE_MIN_PRESSURE_ATTRIBUTE_ID                             0x0C0C // Ver.: always
#define ATTR_CURRENT_ALTERNATIVE_DAY_ALTERNATIVE_MAX_DEMAND_ATTRIBUTE_ID                    0x0C0D // Ver.: always
#define ATTR_PREVIOUS_DAY_ALTERNATIVE_MAX_DEMAND_ATTRIBUTE_ID                               0x0C0E // Ver.: always
#define ATTR_CURRENT_ALTERNATIVE_MONTH_MAX_DEMAND_ATTRIBUTE_ID                              0x0C0F // Ver.: always
#define ATTR_CURRENT_ALTERNATIVE_YEAR_MAX_DEMAND_ATTRIBUTE_ID                               0x0C10 // Ver.: always
#define ATTR_PREVIOUS_DAY2_ALTERNATIVE_CONSUMPTION_DELIVERED_ATTRIBUTE_ID                   0x0C20 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_DAY2_ALTERNATIVE_CONSUMPTION_RECEIVED_ATTRIBUTE_ID                    0x0C21 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_DAY3_ALTERNATIVE_CONSUMPTION_DELIVERED_ATTRIBUTE_ID                   0x0C22 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_DAY3_ALTERNATIVE_CONSUMPTION_RECEIVED_ATTRIBUTE_ID                    0x0C23 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_DAY4_ALTERNATIVE_CONSUMPTION_DELIVERED_ATTRIBUTE_ID                   0x0C24 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_DAY4_ALTERNATIVE_CONSUMPTION_RECEIVED_ATTRIBUTE_ID                    0x0C25 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_DAY5_ALTERNATIVE_CONSUMPTION_DELIVERED_ATTRIBUTE_ID                   0x0C26 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_DAY5_ALTERNATIVE_CONSUMPTION_RECEIVED_ATTRIBUTE_ID                    0x0C27 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_DAY6_ALTERNATIVE_CONSUMPTION_DELIVERED_ATTRIBUTE_ID                   0x0C28 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_DAY6_ALTERNATIVE_CONSUMPTION_RECEIVED_ATTRIBUTE_ID                    0x0C29 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_DAY7_ALTERNATIVE_CONSUMPTION_DELIVERED_ATTRIBUTE_ID                   0x0C2A // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_DAY7_ALTERNATIVE_CONSUMPTION_RECEIVED_ATTRIBUTE_ID                    0x0C2B // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_DAY8_ALTERNATIVE_CONSUMPTION_DELIVERED_ATTRIBUTE_ID                   0x0C2C // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_DAY8_ALTERNATIVE_CONSUMPTION_RECEIVED_ATTRIBUTE_ID                    0x0C2D // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_WEEK_ALTERNATIVE_CONSUMPTION_DELIVERED_ATTRIBUTE_ID                    0x0C30 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_WEEK_ALTERNATIVE_CONSUMPTION_RECEIVED_ATTRIBUTE_ID                     0x0C31 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_WEEK_ALTERNATIVE_CONSUMPTION_DELIVERED_ATTRIBUTE_ID                   0x0C32 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_WEEK_ALTERNATIVE_CONSUMPTION_RECEIVED_ATTRIBUTE_ID                    0x0C33 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_WEEK2_ALTERNATIVE_CONSUMPTION_DELIVERED_ATTRIBUTE_ID                  0x0C34 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_WEEK2_ALTERNATIVE_CONSUMPTION_RECEIVED_ATTRIBUTE_ID                   0x0C35 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_WEEK3_ALTERNATIVE_CONSUMPTION_DELIVERED_ATTRIBUTE_ID                  0x0C36 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_WEEK3_ALTERNATIVE_CONSUMPTION_RECEIVED_ATTRIBUTE_ID                   0x0C37 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_WEEK4_ALTERNATIVE_CONSUMPTION_DELIVERED_ATTRIBUTE_ID                  0x0C38 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_WEEK4_ALTERNATIVE_CONSUMPTION_RECEIVED_ATTRIBUTE_ID                   0x0C39 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_WEEK5_ALTERNATIVE_CONSUMPTION_DELIVERED_ATTRIBUTE_ID                  0x0C3A // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_WEEK5_ALTERNATIVE_CONSUMPTION_RECEIVED_ATTRIBUTE_ID                   0x0C3B // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_MONTH_ALTERNATIVE_CONSUMPTION_DELIVERED_ATTRIBUTE_ID                   0x0C40 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_MONTH_ALTERNATIVE_CONSUMPTION_RECEIVED_ATTRIBUTE_ID                    0x0C41 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH_ALTERNATIVE_CONSUMPTION_DELIVERED_ATTRIBUTE_ID                  0x0C42 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH_ALTERNATIVE_CONSUMPTION_RECEIVED_ATTRIBUTE_ID                   0x0C43 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH2_ALTERNATIVE_CONSUMPTION_DELIVERED_ATTRIBUTE_ID                 0x0C44 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH2_ALTERNATIVE_CONSUMPTION_RECEIVED_ATTRIBUTE_ID                  0x0C45 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH3_ALTERNATIVE_CONSUMPTION_DELIVERED_ATTRIBUTE_ID                 0x0C46 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH3_ALTERNATIVE_CONSUMPTION_RECEIVED_ATTRIBUTE_ID                  0x0C47 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH4_ALTERNATIVE_CONSUMPTION_DELIVERED_ATTRIBUTE_ID                 0x0C48 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH4_ALTERNATIVE_CONSUMPTION_RECEIVED_ATTRIBUTE_ID                  0x0C49 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH5_ALTERNATIVE_CONSUMPTION_DELIVERED_ATTRIBUTE_ID                 0x0C4A // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH5_ALTERNATIVE_CONSUMPTION_RECEIVED_ATTRIBUTE_ID                  0x0C4B // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH6_ALTERNATIVE_CONSUMPTION_DELIVERED_ATTRIBUTE_ID                 0x0C4C // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH6_ALTERNATIVE_CONSUMPTION_RECEIVED_ATTRIBUTE_ID                  0x0C4D // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH7_ALTERNATIVE_CONSUMPTION_DELIVERED_ATTRIBUTE_ID                 0x0C4E // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH7_ALTERNATIVE_CONSUMPTION_RECEIVED_ATTRIBUTE_ID                  0x0C4F // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH8_ALTERNATIVE_CONSUMPTION_DELIVERED_ATTRIBUTE_ID                 0x0C50 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH8_ALTERNATIVE_CONSUMPTION_RECEIVED_ATTRIBUTE_ID                  0x0C51 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH9_ALTERNATIVE_CONSUMPTION_DELIVERED_ATTRIBUTE_ID                 0x0C52 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH9_ALTERNATIVE_CONSUMPTION_RECEIVED_ATTRIBUTE_ID                  0x0C53 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH10_ALTERNATIVE_CONSUMPTION_DELIVERED_ATTRIBUTE_ID                0x0C54 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH10_ALTERNATIVE_CONSUMPTION_RECEIVED_ATTRIBUTE_ID                 0x0C55 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH11_ALTERNATIVE_CONSUMPTION_DELIVERED_ATTRIBUTE_ID                0x0C56 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH11_ALTERNATIVE_CONSUMPTION_RECEIVED_ATTRIBUTE_ID                 0x0C57 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH12_ALTERNATIVE_CONSUMPTION_DELIVERED_ATTRIBUTE_ID                0x0C58 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH12_ALTERNATIVE_CONSUMPTION_RECEIVED_ATTRIBUTE_ID                 0x0C59 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH13_ALTERNATIVE_CONSUMPTION_DELIVERED_ATTRIBUTE_ID                0x0C5A // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH13_ALTERNATIVE_CONSUMPTION_RECEIVED_ATTRIBUTE_ID                 0x0C5B // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_DAY_ALTERNATIVE_MAX_DEMAND_DELIVERED_ATTRIBUTE_ID                      0x0C5C // Ver.: since se-1.4-17-05019-001
#define ATTR_CURRENT_DAY_ALTERNATIVE_MAX_DEMAND_DELIVERED_TIME_ATTRIBUTE_ID                 0x0C5D // Ver.: since se-1.4-17-05019-001
#define ATTR_CURRENT_DAY_ALTERNATIVE_MAX_DEMAND_RECEIVED_ATTRIBUTE_ID                       0x0C5E // Ver.: since se-1.4-17-05019-001
#define ATTR_CURRENT_DAY_ALTERNATIVE_MAX_DEMAND_RECEIVED_TIME_ATTRIBUTE_ID                  0x0C5F // Ver.: since se-1.4-17-05019-001
#define ATTR_PREVIOUS_DAY_ALTERNATIVE_MAX_DEMAND_DELIVERED_ATTRIBUTE_ID                     0x0C60 // Ver.: since se-1.4-17-05019-001
#define ATTR_PREVIOUS_DAY_ALTERNATIVE_MAX_DEMAND_DELIVERED_TIME_ATTRIBUTE_ID                0x0C61 // Ver.: since se-1.4-17-05019-001
#define ATTR_PREVIOUS_DAY_ALTERNATIVE_MAX_DEMAND_RECEIVED_ATTRIBUTE_ID                      0x0C62 // Ver.: since se-1.4-17-05019-001
#define ATTR_PREVIOUS_DAY_ALTERNATIVE_MAX_DEMAND_RECEIVED_TIME_ATTRIBUTE_ID                 0x0C63 // Ver.: since se-1.4-17-05019-001
#define ATTR_CURRENT_ACTIVE_SUMMATION_Q1_ATTRIBUTE_ID                                       0x0D01 // Ver.: since se-1.4-17-05019-001
#define ATTR_CURRENT_ACTIVE_SUMMATION_Q2_ATTRIBUTE_ID                                       0x0D02 // Ver.: since se-1.4-17-05019-001
#define ATTR_CURRENT_ACTIVE_SUMMATION_Q3_ATTRIBUTE_ID                                       0x0D03 // Ver.: since se-1.4-17-05019-001
#define ATTR_CURRENT_ACTIVE_SUMMATION_Q4_ATTRIBUTE_ID                                       0x0D04 // Ver.: since se-1.4-17-05019-001
#define ATTR_CURRENT_REACTIVE_SUMMATION_Q1_ATTRIBUTE_ID                                     0x0D05 // Ver.: since se-1.4-17-05019-001
#define ATTR_CURRENT_REACTIVE_SUMMATION_Q2_ATTRIBUTE_ID                                     0x0D06 // Ver.: since se-1.4-17-05019-001
#define ATTR_CURRENT_REACTIVE_SUMMATION_Q3_ATTRIBUTE_ID                                     0x0D07 // Ver.: since se-1.4-17-05019-001
#define ATTR_CURRENT_REACTIVE_SUMMATION_Q4_ATTRIBUTE_ID                                     0x0D08 // Ver.: since se-1.4-17-05019-001
#define ATTR_SIMPLE_METERING_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID                   0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_SIMPLE_METERING_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID                   0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Messaging
// Cluster specification level: se-1.2b-15-0131-02

// Client attributes
#define ATTR_MESSAGING_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_MESSAGING_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_MESSAGING_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_MESSAGING_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Tunneling
// Cluster specification level: se-1.2b-15-0131-02

// Client attributes
#define ATTR_TUNNELING_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_TUNNELING_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_CLOSE_TUNNEL_TIMEOUT_ATTRIBUTE_ID                      0x0000 // Ver.: always
#define ATTR_TUNNELING_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_TUNNELING_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Prepayment
// Cluster specification level: se-1.2b-15-0131-02

// Client attributes
#define ATTR_PREPAYMENT_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_PREPAYMENT_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_PAYMENT_CONTROL_CONFIGURATION_ATTRIBUTE_ID                0x0000 // Ver.: always
#define ATTR_CREDIT_REMAINING_ATTRIBUTE_ID                             0x0001 // Ver.: always
#define ATTR_EMERGENCY_CREDIT_REMAINING_ATTRIBUTE_ID                   0x0002 // Ver.: always
#define ATTR_CREDIT_STATUS_ATTRIBUTE_ID                                0x0003 // Ver.: always
#define ATTR_CREDIT_REMAINING_TIMESTAMP_ATTRIBUTE_ID                   0x0004 // Ver.: since se-1.2a-07-5356-19
#define ATTR_ACCUMULATED_DEBT_ATTRIBUTE_ID                             0x0005 // Ver.: since se-1.2a-07-5356-19
#define ATTR_OVERALL_DEBT_CAP_ATTRIBUTE_ID                             0x0006 // Ver.: since se-1.2a-07-5356-19
#define ATTR_EMERGENCY_CREDIT_LIMIT_ALLOWANCE_ATTRIBUTE_ID             0x0010 // Ver.: since se-1.2a-07-5356-19
#define ATTR_EMERGENCY_CREDIT_THRESHOLD_ATTRIBUTE_ID                   0x0011 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TOTAL_CREDIT_ADDED_ATTRIBUTE_ID                           0x0020 // Ver.: since se-1.2a-07-5356-19
#define ATTR_MAX_CREDIT_LIMIT_ATTRIBUTE_ID                             0x0021 // Ver.: since se-1.2a-07-5356-19
#define ATTR_MAX_CREDIT_PER_TOP_UP_ATTRIBUTE_ID                        0x0022 // Ver.: since se-1.2a-07-5356-19
#define ATTR_FRIENDLY_CREDIT_WARNING_ATTRIBUTE_ID                      0x0030 // Ver.: since se-1.2a-07-5356-19
#define ATTR_LOW_CREDIT_WARNING_ATTRIBUTE_ID                           0x0031 // Ver.: since se-1.2a-07-5356-19
#define ATTR_IHD_LOW_CREDIT_WARNING_ATTRIBUTE_ID                       0x0032 // Ver.: since se-1.2a-07-5356-19
#define ATTR_INTERRUPT_SUSPEND_TIME_ATTRIBUTE_ID                       0x0033 // Ver.: since se-1.2a-07-5356-19
#define ATTR_REMAINING_FRIENDLY_CREDIT_TIME_ATTRIBUTE_ID               0x0034 // Ver.: since se-1.2a-07-5356-19
#define ATTR_NEXT_FRIENDLY_CREDIT_PERIOD_ATTRIBUTE_ID                  0x0035 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CUT_OFF_VALUE_ATTRIBUTE_ID                                0x0040 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TOKEN_CARRIER_ID_ATTRIBUTE_ID                             0x0080 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TOP_UP_DATE_TIME_1_ATTRIBUTE_ID                           0x0100 // Ver.: always
#define ATTR_TOP_UP_AMOUNT_1_ATTRIBUTE_ID                              0x0101 // Ver.: always
#define ATTR_TOP_UP_ORIGINATING_DEVICE_1_ATTRIBUTE_ID                  0x0102 // Ver.: always
#define ATTR_TOP_UP_CODE_1_ATTRIBUTE_ID                                0x0103 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TOP_UP_DATE_TIME_2_ATTRIBUTE_ID                           0x0110 // Ver.: always
#define ATTR_TOP_UP_AMOUNT_2_ATTRIBUTE_ID                              0x0111 // Ver.: always
#define ATTR_TOP_UP_ORIGINATING_DEVICE_2_ATTRIBUTE_ID                  0x0112 // Ver.: always
#define ATTR_TOP_UP_CODE_2_ATTRIBUTE_ID                                0x0113 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TOP_UP_DATE_TIME_3_ATTRIBUTE_ID                           0x0120 // Ver.: always
#define ATTR_TOP_UP_AMOUNT_3_ATTRIBUTE_ID                              0x0121 // Ver.: always
#define ATTR_TOP_UP_ORIGINATING_DEVICE_3_ATTRIBUTE_ID                  0x0122 // Ver.: always
#define ATTR_TOP_UP_CODE_3_ATTRIBUTE_ID                                0x0123 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TOP_UP_DATE_TIME_4_ATTRIBUTE_ID                           0x0130 // Ver.: always
#define ATTR_TOP_UP_AMOUNT_4_ATTRIBUTE_ID                              0x0131 // Ver.: always
#define ATTR_TOP_UP_ORIGINATING_DEVICE_4_ATTRIBUTE_ID                  0x0132 // Ver.: always
#define ATTR_TOP_UP_CODE_4_ATTRIBUTE_ID                                0x0133 // Ver.: since se-1.2a-07-5356-19
#define ATTR_TOP_UP_DATE_TIME_5_ATTRIBUTE_ID                           0x0140 // Ver.: always
#define ATTR_TOP_UP_AMOUNT_5_ATTRIBUTE_ID                              0x0141 // Ver.: always
#define ATTR_TOP_UP_ORIGINATING_DEVICE_5_ATTRIBUTE_ID                  0x0142 // Ver.: always
#define ATTR_TOP_UP_CODE_5_ATTRIBUTE_ID                                0x0143 // Ver.: since se-1.2a-07-5356-19
#define ATTR_DEBT_LABEL_1_ATTRIBUTE_ID                                 0x0210 // Ver.: since se-1.2a-07-5356-19
#define ATTR_DEBT_AMOUNT_1_ATTRIBUTE_ID                                0x0211 // Ver.: since se-1.2a-07-5356-19
#define ATTR_DEBT_RECOVERY_METHOD_1_ATTRIBUTE_ID                       0x0212 // Ver.: since se-1.2a-07-5356-19
#define ATTR_DEBT_RECOVERY_START_TIME_1_ATTRIBUTE_ID                   0x0213 // Ver.: since se-1.2a-07-5356-19
#define ATTR_DEBT_RECOVERY_COLLECTION_TIME_1_ATTRIBUTE_ID              0x0214 // Ver.: since se-1.2a-07-5356-19
#define ATTR_DEBT_RECOVERY_FREQUENCY_1_ATTRIBUTE_ID                    0x0216 // Ver.: since se-1.2a-07-5356-19
#define ATTR_DEBT_RECOVERY_AMOUNT_1_ATTRIBUTE_ID                       0x0217 // Ver.: since se-1.2a-07-5356-19
#define ATTR_DEBT_RECOVERY_TOP_UP_PERCENTAGE_1_ATTRIBUTE_ID            0x0219 // Ver.: since se-1.2a-07-5356-19
#define ATTR_DEBT_LABEL_2_ATTRIBUTE_ID                                 0x0220 // Ver.: since se-1.2a-07-5356-19
#define ATTR_DEBT_AMOUNT_2_ATTRIBUTE_ID                                0x0221 // Ver.: since se-1.2a-07-5356-19
#define ATTR_DEBT_RECOVERY_METHOD_2_ATTRIBUTE_ID                       0x0222 // Ver.: since se-1.2a-07-5356-19
#define ATTR_DEBT_RECOVERY_START_TIME_2_ATTRIBUTE_ID                   0x0223 // Ver.: since se-1.2a-07-5356-19
#define ATTR_DEBT_RECOVERY_COLLECTION_TIME_2_ATTRIBUTE_ID              0x0224 // Ver.: since se-1.2a-07-5356-19
#define ATTR_DEBT_RECOVERY_FREQUENCY_2_ATTRIBUTE_ID                    0x0226 // Ver.: since se-1.2a-07-5356-19
#define ATTR_DEBT_RECOVERY_AMOUNT_2_ATTRIBUTE_ID                       0x0227 // Ver.: since se-1.2a-07-5356-19
#define ATTR_DEBT_RECOVERY_TOP_UP_PERCENTAGE_2_ATTRIBUTE_ID            0x0229 // Ver.: since se-1.2a-07-5356-19
#define ATTR_DEBT_LABEL_3_ATTRIBUTE_ID                                 0x0230 // Ver.: since se-1.2a-07-5356-19
#define ATTR_DEBT_AMOUNT_3_ATTRIBUTE_ID                                0x0231 // Ver.: since se-1.2a-07-5356-19
#define ATTR_DEBT_RECOVERY_METHOD_3_ATTRIBUTE_ID                       0x0232 // Ver.: since se-1.2a-07-5356-19
#define ATTR_DEBT_RECOVERY_START_TIME_3_ATTRIBUTE_ID                   0x0233 // Ver.: since se-1.2a-07-5356-19
#define ATTR_DEBT_RECOVERY_COLLECTION_TIME_3_ATTRIBUTE_ID              0x0234 // Ver.: since se-1.2a-07-5356-19
#define ATTR_DEBT_RECOVERY_FREQUENCY_3_ATTRIBUTE_ID                    0x0236 // Ver.: since se-1.2a-07-5356-19
#define ATTR_DEBT_RECOVERY_AMOUNT_3_ATTRIBUTE_ID                       0x0237 // Ver.: since se-1.2a-07-5356-19
#define ATTR_DEBT_RECOVERY_TOP_UP_PERCENTAGE_3_ATTRIBUTE_ID            0x0239 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREPAYMENT_ALARM_STATUS_ATTRIBUTE_ID                      0x0400 // Ver.: since se-1.2a-07-5356-21
#define ATTR_PREPAY_GENERIC_ALARM_MASK_ATTRIBUTE_ID                    0x0401 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREPAY_SWITCH_ALARM_MASK_ATTRIBUTE_ID                     0x0402 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREPAY_EVENT_ALARM_MASK_ATTRIBUTE_ID                      0x0403 // Ver.: since se-1.2a-07-5356-19
#define ATTR_HISTORICAL_COST_CONSUMPTION_FORMATTING_ATTRIBUTE_ID       0x0500 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CONSUMPTION_UNIT_OF_MEASUREMENT_ATTRIBUTE_ID              0x0501 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENCY_SCALING_FACTOR_ATTRIBUTE_ID                      0x0502 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREPAYMANT_CURRENCY_ATTRIBUTE_ID                          0x0503 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_DAY_COST_CONSUMPTION_DELIVERED_ATTRIBUTE_ID       0x051C // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_DAY_COST_CONSUMPTION_RECEIVED_ATTRIBUTE_ID        0x051D // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_DAY_COST_CONSUMPTION_DELIVERED_ATTRIBUTE_ID      0x051E // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_DAY_COST_CONSUMPTION_RECEIVED_ATTRIBUTE_ID       0x051F // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_DAY_2_COST_CONSUMPTION_DELIVERED_ATTRIBUTE_ID    0x0520 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_DAY_2_COST_CONSUMPTION_RECEIVED_ATTRIBUTE_ID     0x0521 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_DAY_3_COST_CONSUMPTION_DELIVERED_ATTRIBUTE_ID    0x0522 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_DAY_3_COST_CONSUMPTION_RECEIVED_ATTRIBUTE_ID     0x0523 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_DAY_4_COST_CONSUMPTION_DELIVERED_ATTRIBUTE_ID    0x0524 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_DAY_4_COST_CONSUMPTION_RECEIVED_ATTRIBUTE_ID     0x0525 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_DAY_5_COST_CONSUMPTION_DELIVERED_ATTRIBUTE_ID    0x0526 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_DAY_5_COST_CONSUMPTION_RECEIVED_ATTRIBUTE_ID     0x0527 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_DAY_6_COST_CONSUMPTION_DELIVERED_ATTRIBUTE_ID    0x0528 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_DAY_6_COST_CONSUMPTION_RECEIVED_ATTRIBUTE_ID     0x0529 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_DAY_7_COST_CONSUMPTION_DELIVERED_ATTRIBUTE_ID    0x052A // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_DAY_7_COST_CONSUMPTION_RECEIVED_ATTRIBUTE_ID     0x052B // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_DAY_8_COST_CONSUMPTION_DELIVERED_ATTRIBUTE_ID    0x052C // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_DAY_8_COST_CONSUMPTION_RECEIVED_ATTRIBUTE_ID     0x052D // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_WEEK_COST_CONSUMPTION_DELIVERED_ATTRIBUTE_ID      0x0530 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_WEEK_COST_CONSUMPTION_RECEIVED_ATTRIBUTE_ID       0x0531 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_WEEK_COST_CONSUMPTION_DELIVERED_ATTRIBUTE_ID     0x0532 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_WEEK_COST_CONSUMPTION_RECEIVED_ATTRIBUTE_ID      0x0533 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_WEEK_2_COST_CONSUMPTION_DELIVERED_ATTRIBUTE_ID   0x0534 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_WEEK_2_COST_CONSUMPTION_RECEIVED_ATTRIBUTE_ID    0x0535 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_WEEK_3_COST_CONSUMPTION_DELIVERED_ATTRIBUTE_ID   0x0536 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_WEEK_3_COST_CONSUMPTION_RECEIVED_ATTRIBUTE_ID    0x0537 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_WEEK_4_COST_CONSUMPTION_DELIVERED_ATTRIBUTE_ID   0x0538 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_WEEK_4_COST_CONSUMPTION_RECEIVED_ATTRIBUTE_ID    0x0539 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_WEEK_5_COST_CONSUMPTION_DELIVERED_ATTRIBUTE_ID   0x053A // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_WEEK_5_COST_CONSUMPTION_RECEIVED_ATTRIBUTE_ID    0x053B // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_MONTH_COST_CONSUMPTION_DELIVERED_ATTRIBUTE_ID     0x0540 // Ver.: since se-1.2a-07-5356-19
#define ATTR_CURRENT_MONTH_COST_CONSUMPTION_RECEIVED_ATTRIBUTE_ID      0x0541 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH_COST_CONSUMPTION_DELIVERED_ATTRIBUTE_ID    0x0542 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH_COST_CONSUMPTION_RECEIVED_ATTRIBUTE_ID     0x0543 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH_2_COST_CONSUMPTION_DELIVERED_ATTRIBUTE_ID  0x0544 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH_2_COST_CONSUMPTION_RECEIVED_ATTRIBUTE_ID   0x0545 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH_3_COST_CONSUMPTION_DELIVERED_ATTRIBUTE_ID  0x0546 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH_3_COST_CONSUMPTION_RECEIVED_ATTRIBUTE_ID   0x0547 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH_4_COST_CONSUMPTION_DELIVERED_ATTRIBUTE_ID  0x0548 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH_4_COST_CONSUMPTION_RECEIVED_ATTRIBUTE_ID   0x0549 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH_5_COST_CONSUMPTION_DELIVERED_ATTRIBUTE_ID  0x054A // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH_5_COST_CONSUMPTION_RECEIVED_ATTRIBUTE_ID   0x054B // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH_6_COST_CONSUMPTION_DELIVERED_ATTRIBUTE_ID  0x054C // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH_6_COST_CONSUMPTION_RECEIVED_ATTRIBUTE_ID   0x054D // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH_7_COST_CONSUMPTION_DELIVERED_ATTRIBUTE_ID  0x054E // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH_7_COST_CONSUMPTION_RECEIVED_ATTRIBUTE_ID   0x054F // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH_8_COST_CONSUMPTION_DELIVERED_ATTRIBUTE_ID  0x0550 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH_8_COST_CONSUMPTION_RECEIVED_ATTRIBUTE_ID   0x0551 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH_9_COST_CONSUMPTION_DELIVERED_ATTRIBUTE_ID  0x0552 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH_9_COST_CONSUMPTION_RECEIVED_ATTRIBUTE_ID   0x0553 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH_10_COST_CONSUMPTION_DELIVERED_ATTRIBUTE_ID 0x0554 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH_10_COST_CONSUMPTION_RECEIVED_ATTRIBUTE_ID  0x0555 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH_11_COST_CONSUMPTION_DELIVERED_ATTRIBUTE_ID 0x0556 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH_11_COST_CONSUMPTION_RECEIVED_ATTRIBUTE_ID  0x0557 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH_12_COST_CONSUMPTION_DELIVERED_ATTRIBUTE_ID 0x0558 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH_12_COST_CONSUMPTION_RECEIVED_ATTRIBUTE_ID  0x0559 // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH_13_COST_CONSUMPTION_DELIVERED_ATTRIBUTE_ID 0x055A // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREVIOUS_MONTH_13_COST_CONSUMPTION_RECEIVED_ATTRIBUTE_ID  0x055B // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREPAYMENT_HISTORICAL_FREEZE_TIME_ATTRIBUTE_ID            0x055C // Ver.: since se-1.2a-07-5356-19
#define ATTR_PREPAYMENT_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID   0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_PREPAYMENT_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID   0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Energy Management
// Cluster specification level: se-1.2b-15-0131-02

// Client attributes
#define ATTR_ENERGY_MANAGEMENT_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_ENERGY_MANAGEMENT_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_LOAD_CONTROL_STATE_ATTRIBUTE_ID                                0x0000 // Ver.: always
#define ATTR_CURRENT_EVENT_ID_ATTRIBUTE_ID                                  0x0001 // Ver.: always
#define ATTR_CURRENT_EVENT_STATUS_ATTRIBUTE_ID                              0x0002 // Ver.: always
#define ATTR_CONFORMANCE_LEVEL_ATTRIBUTE_ID                                 0x0003 // Ver.: always
#define ATTR_MINIMUM_OFF_TIME_ATTRIBUTE_ID                                  0x0004 // Ver.: always
#define ATTR_MINIMUM_ON_TIME_ATTRIBUTE_ID                                   0x0005 // Ver.: always
#define ATTR_MINIMUM_CYCLE_PERIOD_ATTRIBUTE_ID                              0x0006 // Ver.: always
#define ATTR_ENERGY_MANAGEMENT_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_ENERGY_MANAGEMENT_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Calendar
// Cluster specification level: se-1.2b-15-0131-02

// Client attributes
#define ATTR_CALENDAR_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_CALENDAR_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_AUXILIARY_SWITCH_1_LABEL_ATTRIBUTE_ID                 0x0000 // Ver.: always
#define ATTR_AUXILIARY_SWITCH_2_LABEL_ATTRIBUTE_ID                 0x0001 // Ver.: always
#define ATTR_AUXILIARY_SWITCH_3_LABEL_ATTRIBUTE_ID                 0x0002 // Ver.: always
#define ATTR_AUXILIARY_SWITCH_4_LABEL_ATTRIBUTE_ID                 0x0003 // Ver.: always
#define ATTR_AUXILIARY_SWITCH_5_LABEL_ATTRIBUTE_ID                 0x0004 // Ver.: always
#define ATTR_AUXILIARY_SWITCH_6_LABEL_ATTRIBUTE_ID                 0x0005 // Ver.: always
#define ATTR_AUXILIARY_SWITCH_7_LABEL_ATTRIBUTE_ID                 0x0006 // Ver.: always
#define ATTR_AUXILIARY_SWITCH_8_LABEL_ATTRIBUTE_ID                 0x0007 // Ver.: always
#define ATTR_CALENDAR_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_CALENDAR_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Device Management
// Cluster specification level: se-1.2b-15-0131-02

// Client attributes
#define ATTR_PROVIDER_ID_CLIENT_ATTRIBUTE_ID                                 0x0000 // Ver.: always
#define ATTR_RECEIVED_PROVIDER_ID_CLIENT_ATTRIBUTE_ID                        0x0010 // Ver.: always
#define ATTR_TOU_TARIFF_ACTIVATION_ATTRIBUTE_ID                              0x0100 // Ver.: always
#define ATTR_BLOCK_TARIFF_ACTIVATED_ATTRIBUTE_ID                             0x0101 // Ver.: always
#define ATTR_BLOCK_TOU_TARIFF_ACTIVATED_ATTRIBUTE_ID                         0x0102 // Ver.: always
#define ATTR_SINGLE_TARIFF_RATE_ACTIVATED_ATTRIBUTE_ID                       0x0103 // Ver.: always
#define ATTR_ASYNCHRONOUS_BILLING_OCCURRED_ATTRIBUTE_ID                      0x0104 // Ver.: always
#define ATTR_SYNCHRONOUS_BILLING_OCCURRED_ATTRIBUTE_ID                       0x0105 // Ver.: always
#define ATTR_TARIFF_NOT_SUPPORTED_ATTRIBUTE_ID                               0x0106 // Ver.: always
#define ATTR_PRICE_CLUSTER_NOT_FOUND_ATTRIBUTE_ID                            0x0107 // Ver.: always
#define ATTR_CURRENCY_CHANGE_PASSIVE_ACTIVATED_ATTRIBUTE_ID                  0x0108 // Ver.: always
#define ATTR_CURRENCY_CHANGE_PASSIVE_UPDATED_ATTRIBUTE_ID                    0x0109 // Ver.: always
#define ATTR_PRICE_MATRIX_PASSIVE_ACTIVATED_ATTRIBUTE_ID                     0x010A // Ver.: always
#define ATTR_PRICE_MATRIX_PASSIVE_UPDATED_ATTRIBUTE_ID                       0x010B // Ver.: always
#define ATTR_TARIFF_CHANGE_PASSIVE_ACTIVATED_ATTRIBUTE_ID                    0x010C // Ver.: always
#define ATTR_TARIFF_CHANGE_PASSIVE_UPDATED_ATTRIBUTE_ID                      0x010D // Ver.: always
#define ATTR_PUBLISH_PRICE_RECEIVED_ATTRIBUTE_ID                             0x01B0 // Ver.: always
#define ATTR_PUBLISH_PRICE_ACTIONED_ATTRIBUTE_ID                             0x01B1 // Ver.: always
#define ATTR_PUBLISH_PRICE_CANCELLED_ATTRIBUTE_ID                            0x01B2 // Ver.: always
#define ATTR_PUBLISH_PRICE_REJECTED_ATTRIBUTE_ID                             0x01B3 // Ver.: always
#define ATTR_PUBLISH_TARIFF_INFO_RECEIVED_ATTRIBUTE_ID                       0x01B4 // Ver.: always
#define ATTR_PUBLISH_TARIFF_INFO_ACTIONED_ATTRIBUTE_ID                       0x01B5 // Ver.: always
#define ATTR_PUBLISH_TARIFF_INFO_CANCELLED_ATTRIBUTE_ID                      0x01B6 // Ver.: always
#define ATTR_PUBLISH_TARIFF_INFO_REJECTED_ATTRIBUTE_ID                       0x01B7 // Ver.: always
#define ATTR_PUBLISH_PRICE_MATRIX_RECEIVED_ATTRIBUTE_ID                      0x01B8 // Ver.: always
#define ATTR_PUBLISH_PRICE_MATRIX_ACTIONED_ATTRIBUTE_ID                      0x01B9 // Ver.: always
#define ATTR_PUBLISH_PRICE_MATRIX_CANCELLED_ATTRIBUTE_ID                     0x01BA // Ver.: always
#define ATTR_PUBLISH_PRICE_MATRIX_REJECTED_ATTRIBUTE_ID                      0x01BB // Ver.: always
#define ATTR_PUBLISH_BLOCK_THRESHOLDS_RECEIVED_ATTRIBUTE_ID                  0x01BC // Ver.: always
#define ATTR_PUBLISH_BLOCK_THRESHOLDS_ACTIONED_ATTRIBUTE_ID                  0x01BD // Ver.: always
#define ATTR_PUBLISH_BLOCK_THRESHOLDS_CANCELLED_ATTRIBUTE_ID                 0x01BE // Ver.: always
#define ATTR_PUBLISH_BLOCK_THRESHOLDS_REJECTED_ATTRIBUTE_ID                  0x01BF // Ver.: always
#define ATTR_PUBLISH_CALORIFIC_VALUE_RECEIVED_ATTRIBUTE_ID                   0x01C0 // Ver.: always
#define ATTR_PUBLISH_CALORIFIC_VALUE_ACTIONED_ATTRIBUTE_ID                   0x01C1 // Ver.: always
#define ATTR_PUBLISH_CALORIFIC_VALUE_CANCELLED_ATTRIBUTE_ID                  0x01C2 // Ver.: always
#define ATTR_PUBLISH_CALORIFIC_VALUE_REJECTED_ATTRIBUTE_ID                   0x01C3 // Ver.: always
#define ATTR_PUBLISH_CONVERSION_FACTOR_RECEIVED_ATTRIBUTE_ID                 0x01C4 // Ver.: always
#define ATTR_PUBLISH_CONVERSION_FACTOR_ACTIONED_ATTRIBUTE_ID                 0x01C5 // Ver.: always
#define ATTR_PUBLISH_CONVERSION_FACTOR_CANCELLED_ATTRIBUTE_ID                0x01C6 // Ver.: always
#define ATTR_PUBLISH_CONVERSION_FACTOR_REJECTED_ATTRIBUTE_ID                 0x01C7 // Ver.: always
#define ATTR_PUBLISH_CO2_VALUE_RECEIVED_ATTRIBUTE_ID                         0x01C8 // Ver.: always
#define ATTR_PUBLISH_CO2_VALUE_ACTIONED_ATTRIBUTE_ID                         0x01C9 // Ver.: always
#define ATTR_PUBLISH_CO2_VALUE_CANCELLED_ATTRIBUTE_ID                        0x01CA // Ver.: always
#define ATTR_PUBLISH_CO2_VALUE_REJECTED_ATTRIBUTE_ID                         0x01CB // Ver.: always
#define ATTR_PUBLISH_CPP_EVENT_RECEIVED_ATTRIBUTE_ID                         0x01CC // Ver.: always
#define ATTR_PUBLISH_CPP_EVENT_ACTIONED_ATTRIBUTE_ID                         0x01CD // Ver.: always
#define ATTR_PUBLISH_CPP_EVENT_CANCELLED_ATTRIBUTE_ID                        0x01CE // Ver.: always
#define ATTR_PUBLISH_CPP_EVENT_REJECTED_ATTRIBUTE_ID                         0x01CF // Ver.: always
#define ATTR_PUBLISH_TIER_LABELS_RECEIVED_ATTRIBUTE_ID                       0x01D0 // Ver.: always
#define ATTR_PUBLISH_TIER_LABELS_ACTIONED_ATTRIBUTE_ID                       0x01D1 // Ver.: always
#define ATTR_PUBLISH_TIER_LABELS_CANCELLED_ATTRIBUTE_ID                      0x01D2 // Ver.: always
#define ATTR_PUBLISH_TIER_LABELS_REJECTED_ATTRIBUTE_ID                       0x01D3 // Ver.: always
#define ATTR_PUBLISH_BILLING_PERIOD_RECEIVED_ATTRIBUTE_ID                    0x01D4 // Ver.: always
#define ATTR_PUBLISH_BILLING_PERIOD_ACTIONED_ATTRIBUTE_ID                    0x01D5 // Ver.: always
#define ATTR_PUBLISH_BILLING_PERIOD_CANCELLED_ATTRIBUTE_ID                   0x01D6 // Ver.: always
#define ATTR_PUBLISH_BILLING_PERIOD_REJECTED_ATTRIBUTE_ID                    0x01D7 // Ver.: always
#define ATTR_PUBLISH_CONSOLIDATED_BILL_RECEIVED_ATTRIBUTE_ID                 0x01D8 // Ver.: always
#define ATTR_PUBLISH_CONSOLIDATED_BILL_ACTIONED_ATTRIBUTE_ID                 0x01D9 // Ver.: always
#define ATTR_PUBLISH_CONSOLIDATED_BILL_CANCELLED_ATTRIBUTE_ID                0x01DA // Ver.: always
#define ATTR_PUBLISH_CONSOLIDATED_BILL_REJECTED_ATTRIBUTE_ID                 0x01DB // Ver.: always
#define ATTR_PUBLISH_BLOCK_PERIOD_RECEIVED_ATTRIBUTE_ID                      0x01DC // Ver.: always
#define ATTR_PUBLISH_BLOCK_PERIOD_ACTIONED_ATTRIBUTE_ID                      0x01DD // Ver.: always
#define ATTR_PUBLISH_BLOCK_PERIOD_CANCELLED_ATTRIBUTE_ID                     0x01DE // Ver.: always
#define ATTR_PUBLISH_BLOCK_PERIOD_REJECTED_ATTRIBUTE_ID                      0x01DF // Ver.: always
#define ATTR_PUBLISH_CREDIT_PAYMENT_INFO_RECEIVED_ATTRIBUTE_ID               0x01E0 // Ver.: always
#define ATTR_PUBLISH_CREDIT_PAYMENT_INFO_ACTIONED_ATTRIBUTE_ID               0x01E1 // Ver.: always
#define ATTR_PUBLISH_CREDIT_PAYMENT_INFO_CANCELLED_ATTRIBUTE_ID              0x01E2 // Ver.: always
#define ATTR_PUBLISH_CREDIT_PAYMENT_INFO_REJECTED_ATTRIBUTE_ID               0x01E3 // Ver.: always
#define ATTR_PUBLISH_CURRENCY_CONVERSION_RECEIVED_ATTRIBUTE_ID               0x01E4 // Ver.: always
#define ATTR_PUBLISH_CURRENCY_CONVERSION_ACTIONED_ATTRIBUTE_ID               0x01E5 // Ver.: always
#define ATTR_PUBLISH_CURRENCY_CONVERSION_CANCELLED_ATTRIBUTE_ID              0x01E6 // Ver.: always
#define ATTR_PUBLISH_CURRENCY_CONVERSION_REJECTED_ATTRIBUTE_ID               0x01E7 // Ver.: always
#define ATTR_CHECK_METER_ATTRIBUTE_ID                                        0x0200 // Ver.: always
#define ATTR_LOW_BATTERY_ATTRIBUTE_ID                                        0x0201 // Ver.: always
#define ATTR_TAMPER_DETECT_ATTRIBUTE_ID                                      0x0202 // Ver.: always
#define ATTR_DEVICE_MANAGEMENT_SUPPLY_STATUS_ATTRIBUTE_ID                    0x0203 // Ver.: always
#define ATTR_SUPPLY_QUALITY_ATTRIBUTE_ID                                     0x0204 // Ver.: always
#define ATTR_LEAK_DETECT_ATTRIBUTE_ID                                        0x0205 // Ver.: always
#define ATTR_SERVICE_DISCONNECT_ATTRIBUTE_ID                                 0x0206 // Ver.: always
#define ATTR_REVERSE_FLOW_GENERAL_ATTRIBUTE_ID                               0x0207 // Ver.: always
#define ATTR_METER_COVER_REMOVED_ATTRIBUTE_ID                                0x0208 // Ver.: always
#define ATTR_METER_COVER_CLOSED_ATTRIBUTE_ID                                 0x0209 // Ver.: always
#define ATTR_STRONG_MAGNETIC_FIELD_ATTRIBUTE_ID                              0x020A // Ver.: always
#define ATTR_NO_STRONG_MAGNETIC_FIELD_ATTRIBUTE_ID                           0x020B // Ver.: always
#define ATTR_BATTERY_FAILURE_ATTRIBUTE_ID                                    0x020C // Ver.: always
#define ATTR_PROGRAM_MEMORY_ERROR_ATTRIBUTE_ID                               0x020D // Ver.: always
#define ATTR_RAM_ERROR_ATTRIBUTE_ID                                          0x020E // Ver.: always
#define ATTR_NV_MEMORY_ERROR_ATTRIBUTE_ID                                    0x020F // Ver.: always
#define ATTR_LOW_VOLTAGE_L1_ATTRIBUTE_ID                                     0x0210 // Ver.: always
#define ATTR_HIGH_VOLTAGE_L1_ATTRIBUTE_ID                                    0x0211 // Ver.: always
#define ATTR_LOW_VOLTAGE_L2_ATTRIBUTE_ID                                     0x0212 // Ver.: always
#define ATTR_HIGH_VOLTAGE_L2_ATTRIBUTE_ID                                    0x0213 // Ver.: always
#define ATTR_LOW_VOLTAGE_L3_ATTRIBUTE_ID                                     0x0214 // Ver.: always
#define ATTR_HIGH_VOLTAGE_L3_ATTRIBUTE_ID                                    0x0215 // Ver.: always
#define ATTR_OVER_CURRENT_L1_ATTRIBUTE_ID                                    0x0216 // Ver.: always
#define ATTR_OVER_CURRENT_L2_ATTRIBUTE_ID                                    0x0217 // Ver.: always
#define ATTR_OVER_CURRENT_L3_ATTRIBUTE_ID                                    0x0218 // Ver.: always
#define ATTR_FREQUENCY_TOO_LOW_L1_ATTRIBUTE_ID                               0x0219 // Ver.: always
#define ATTR_FREQUENCY_TOO_HIGH_L1_ATTRIBUTE_ID                              0x021A // Ver.: always
#define ATTR_FREQUENCY_TOO_LOW_L2_ATTRIBUTE_ID                               0x021B // Ver.: always
#define ATTR_FREQUENCY_TOO_HIGH_L2_ATTRIBUTE_ID                              0x021C // Ver.: always
#define ATTR_FREQUENCY_TOO_LOW_L3_ATTRIBUTE_ID                               0x021D // Ver.: always
#define ATTR_FREQUENCY_TOO_HIGH_L3_ATTRIBUTE_ID                              0x021E // Ver.: always
#define ATTR_GROUND_FAULT_ATTRIBUTE_ID                                       0x021F // Ver.: always
#define ATTR_ELECTRIC_TAMPER_DETECT_ATTRIBUTE_ID                             0x0220 // Ver.: always
#define ATTR_INCORRECT_POLARITY_ATTRIBUTE_ID                                 0x0221 // Ver.: always
#define ATTR_CURRENT_NO_VOLTAGE_ATTRIBUTE_ID                                 0x0222 // Ver.: always
#define ATTR_UNDER_VOLTAGE_ATTRIBUTE_ID                                      0x0223 // Ver.: always
#define ATTR_OVER_VOLTAGE_ATTRIBUTE_ID                                       0x0224 // Ver.: always
#define ATTR_NORMAL_VOLTAGE_ATTRIBUTE_ID                                     0x0225 // Ver.: always
#define ATTR_PF_BELOW_THRESHOLD_ATTRIBUTE_ID                                 0x0226 // Ver.: always
#define ATTR_PF_ABOVE_THRESHOLD_ATTRIBUTE_ID                                 0x0227 // Ver.: always
#define ATTR_TERMINAL_COVER_REMOVED_ATTRIBUTE_ID                             0x0228 // Ver.: always
#define ATTR_TERMINAL_COVER_CLOSED_ATTRIBUTE_ID                              0x0229 // Ver.: always
#define ATTR_BURST_DETECT_ATTRIBUTE_ID                                       0x0230 // Ver.: always
#define ATTR_PRESSURE_TOO_LOW_ATTRIBUTE_ID                                   0x0231 // Ver.: always
#define ATTR_PRESSURE_TOO_HIGH_ATTRIBUTE_ID                                  0x0232 // Ver.: always
#define ATTR_FLOW_SENSOR_COMMUNICATION_ERROR_ATTRIBUTE_ID                    0x0233 // Ver.: always
#define ATTR_FLOW_SENSOR_MEASUREMENT_FAULT_ATTRIBUTE_ID                      0x0234 // Ver.: always
#define ATTR_FLOW_SENSOR_REVERSE_FLOW_ATTRIBUTE_ID                           0x0235 // Ver.: always
#define ATTR_FLOW_SENSOR_AIR_DETECT_ATTRIBUTE_ID                             0x0236 // Ver.: always
#define ATTR_PIPE_EMPTY_ATTRIBUTE_ID                                         0x0237 // Ver.: always
#define ATTR_INLET_TEMP_SENSOR_FAULT_ATTRIBUTE_ID                            0x0250 // Ver.: always
#define ATTR_OUTLET_TEMP_SENSOR_FAULT_ATTRIBUTE_ID                           0x0251 // Ver.: always
#define ATTR_REVERSE_FLOW_ATTRIBUTE_ID                                       0x0260 // Ver.: always
#define ATTR_TILT_TAMPER_ATTRIBUTE_ID                                        0x0261 // Ver.: always
#define ATTR_BATTERY_COVER_REMOVED_ATTRIBUTE_ID                              0x0262 // Ver.: always
#define ATTR_BATTERY_COVER_CLOSED_ATTRIBUTE_ID                               0x0263 // Ver.: always
#define ATTR_EXCESS_FLOW_ATTRIBUTE_ID                                        0x0264 // Ver.: always
#define ATTR_TILT_TAMPER_ENABLED_ATTRIBUTE_ID                                0x0265 // Ver.: always
#define ATTR_MEASUREMENT_SYSTEM_ERROR_ATTRIBUTE_ID                           0x0270 // Ver.: always
#define ATTR_WATCHDOG_ERROR_ATTRIBUTE_ID                                     0x0271 // Ver.: always
#define ATTR_SUPPLY_DISCONNECT_FAILURE_ATTRIBUTE_ID                          0x0272 // Ver.: always
#define ATTR_SUPPLY_CONNECT_FAILURE_ATTRIBUTE_ID                             0x0273 // Ver.: always
#define ATTR_MEASUREMENT_SOFTWARE_CHANGED_ATTRIBUTE_ID                       0x0274 // Ver.: always
#define ATTR_DST_ENABLED_ATTRIBUTE_ID                                        0x0275 // Ver.: always
#define ATTR_DST_DISABLED_ATTRIBUTE_ID                                       0x0276 // Ver.: always
#define ATTR_CLOCK_ADJ_BACKWARD_ATTRIBUTE_ID                                 0x0277 // Ver.: always
#define ATTR_CLOCK_ADJ_FORWARD_ATTRIBUTE_ID                                  0x0278 // Ver.: always
#define ATTR_CLOCK_INVALID_ATTRIBUTE_ID                                      0x0279 // Ver.: always
#define ATTR_COMMUNICATION_ERROR_HAN_ATTRIBUTE_ID                            0x027A // Ver.: always
#define ATTR_COMMUNICATION_OK_HAN_ATTRIBUTE_ID                               0x027B // Ver.: always
#define ATTR_METER_FRAUD_ATTEMPT_ATTRIBUTE_ID                                0x027C // Ver.: always
#define ATTR_POWER_LOSS_ATTRIBUTE_ID                                         0x027D // Ver.: always
#define ATTR_UNUSUAL_HAN_TRAFFIC_ATTRIBUTE_ID                                0x027E // Ver.: always
#define ATTR_UNEXPECTED_CLOCK_CHANGE_ATTRIBUTE_ID                            0x027F // Ver.: always
#define ATTR_COMMS_USING_UNAUTHENTICATED_COMPONENT_ATTRIBUTE_ID              0x0280 // Ver.: always
#define ATTR_METERING_ERROR_REG_CLEAR_ATTRIBUTE_ID                           0x0281 // Ver.: always
#define ATTR_METERING_ALARM_REG_CLEAR_ATTRIBUTE_ID                           0x0282 // Ver.: always
#define ATTR_UNEXPECTED_HW_RESET_ATTRIBUTE_ID                                0x0283 // Ver.: always
#define ATTR_UNEXPECTED_PROGRAM_EXECUTION_ATTRIBUTE_ID                       0x0284 // Ver.: always
#define ATTR_LIMIT_THRESHOLD_EXCEEDED_ATTRIBUTE_ID                           0x0285 // Ver.: always
#define ATTR_LIMIT_THRESHOLD_OK_ATTRIBUTE_ID                                 0x0286 // Ver.: always
#define ATTR_LIMIT_THRESHOLD_CHANGED_ATTRIBUTE_ID                            0x0287 // Ver.: always
#define ATTR_MAXIMUM_DEMAND_EXCEEDED_ATTRIBUTE_ID                            0x0288 // Ver.: always
#define ATTR_PROFILE_CLEARED_ATTRIBUTE_ID                                    0x0289 // Ver.: always
#define ATTR_LOAD_PROFILE_CLEARED_ATTRIBUTE_ID                               0x028A // Ver.: always
#define ATTR_BATTERY_WARN_ATTRIBUTE_ID                                       0x028B // Ver.: always
#define ATTR_WRONG_SIGNATURE_ATTRIBUTE_ID                                    0x028C // Ver.: always
#define ATTR_NO_SIGNATURE_ATTRIBUTE_ID                                       0x028D // Ver.: always
#define ATTR_SIGNATURE_NOT_VALID_ATTRIBUTE_ID                                0x028E // Ver.: always
#define ATTR_UNAUTHORISE_ACTION_FROM_HAN_ATTRIBUTE_ID                        0x028F // Ver.: always
#define ATTR_FAST_POLLING_START_ATTRIBUTE_ID                                 0x0290 // Ver.: always
#define ATTR_FAST_POLLING_END_ATTRIBUTE_ID                                   0x0291 // Ver.: always
#define ATTR_METER_REPORTING_INTERVAL_CHANGED_ATTRIBUTE_ID                   0x0292 // Ver.: always
#define ATTR_DISCONNECT_TO_LOAD_LIMIT_ATTRIBUTE_ID                           0x0293 // Ver.: always
#define ATTR_METER_SUPPLY_STATUS_REGISTER_CHANGED_ATTRIBUTE_ID               0x0294 // Ver.: always
#define ATTR_METER_ALARM_STATUS_REGISTER_CHANGED_ATTRIBUTE_ID                0x0295 // Ver.: always
#define ATTR_EXTENDED_METER_ALARM_STATUS_REGISTER_CHANGED_ATTRIBUTE_ID       0x0296 // Ver.: always
#define ATTR_DATA_ACCESS_VIA_LOCAL_PORT_ATTRIBUTE_ID                         0x0297 // Ver.: always
#define ATTR_CONFIGURE_MIRROR_SUCCESS_ATTRIBUTE_ID                           0x0298 // Ver.: always
#define ATTR_CONFIGURE_MIRROR_FAILURE_ATTRIBUTE_ID                           0x0299 // Ver.: always
#define ATTR_CONFIGURE_NOTIFICATION_FLAG_SCHEME_SUCCESS_ATTRIBUTE_ID         0x029A // Ver.: always
#define ATTR_CONFIGURE_NOTIFICATION_FLAG_SCHEME_FAILURE_ATTRIBUTE_ID         0x029B // Ver.: always
#define ATTR_CONFIGURE_NOTIFICATION_FLAGS_SUCCESS_ATTRIBUTE_ID               0x029C // Ver.: always
#define ATTR_CONFIGURE_NOTIFICATION_FLAGS_FAILURE_ATTRIBUTE_ID               0x029D // Ver.: always
#define ATTR_STAY_AWAKE_REQUEST_HAN_ATTRIBUTE_ID                             0x029E // Ver.: always
#define ATTR_STAY_AWAKE_REQUEST_WAN_ATTRIBUTE_ID                             0x029F // Ver.: always
#define ATTR_MANUFACTURER_SPECIFIC_A_ATTRIBUTE_ID                            0x02B0 // Ver.: always
#define ATTR_MANUFACTURER_SPECIFIC_B_ATTRIBUTE_ID                            0x02B1 // Ver.: always
#define ATTR_MANUFACTURER_SPECIFIC_C_ATTRIBUTE_ID                            0x02B2 // Ver.: always
#define ATTR_MANUFACTURER_SPECIFIC_D_ATTRIBUTE_ID                            0x02B3 // Ver.: always
#define ATTR_MANUFACTURER_SPECIFIC_E_ATTRIBUTE_ID                            0x02B4 // Ver.: always
#define ATTR_MANUFACTURER_SPECIFIC_F_ATTRIBUTE_ID                            0x02B5 // Ver.: always
#define ATTR_MANUFACTURER_SPECIFIC_G_ATTRIBUTE_ID                            0x02B6 // Ver.: always
#define ATTR_MANUFACTURER_SPECIFIC_H_ATTRIBUTE_ID                            0x02B7 // Ver.: always
#define ATTR_MANUFACTURER_SPECIFIC_I_ATTRIBUTE_ID                            0x02B8 // Ver.: always
#define ATTR_GET_PROFILE_COMMAND_RECEIVED_ATTRIBUTE_ID                       0x02C0 // Ver.: always
#define ATTR_GET_PROFILE_COMMAND_ACTIONED_ATTRIBUTE_ID                       0x02C1 // Ver.: always
#define ATTR_GET_PROFILE_COMMAND_CANCELLED_ATTRIBUTE_ID                      0x02C2 // Ver.: always
#define ATTR_GET_PROFILE_COMMAND_REJECTED_ATTRIBUTE_ID                       0x02C3 // Ver.: always
#define ATTR_REQUEST_MIRROR_RESPONSE_COMMAND_RECEIVED_ATTRIBUTE_ID           0x02C4 // Ver.: always
#define ATTR_REQUEST_MIRROR_RESPONSE_COMMAND_ACTIONED_ATTRIBUTE_ID           0x02C5 // Ver.: always
#define ATTR_REQUEST_MIRROR_RESPONSE_COMMAND_CANCELLED_ATTRIBUTE_ID          0x02C6 // Ver.: always
#define ATTR_REQUEST_MIRROR_RESPONSE_COMMAND_REJECTED_ATTRIBUTE_ID           0x02C7 // Ver.: always
#define ATTR_MIRROR_REMOVED_COMMAND_RECEIVED_ATTRIBUTE_ID                    0x02C8 // Ver.: always
#define ATTR_MIRROR_REMOVED_COMMAND_ACTIONED_ATTRIBUTE_ID                    0x02C9 // Ver.: always
#define ATTR_MIRROR_REMOVED_COMMAND_CANCELLED_ATTRIBUTE_ID                   0x02CA // Ver.: always
#define ATTR_MIRROR_REMOVED_COMMAND_REJECTED_ATTRIBUTE_ID                    0x02CB // Ver.: always
#define ATTR_GET_SNAPSHOT_COMMAND_RECEIVED_ATTRIBUTE_ID                      0x02CC // Ver.: always
#define ATTR_GET_SNAPSHOT_COMMAND_ACTIONED_ATTRIBUTE_ID                      0x02CD // Ver.: always
#define ATTR_GET_SNAPSHOT_COMMAND_CANCELLED_ATTRIBUTE_ID                     0x02CE // Ver.: always
#define ATTR_GET_SNAPSHOT_COMMAND_REJECTED_ATTRIBUTE_ID                      0x02CF // Ver.: always
#define ATTR_TAKE_SNAPSHOT_COMMAND_RECEIVED_ATTRIBUTE_ID                     0x02D0 // Ver.: always
#define ATTR_TAKE_SNAPSHOT_COMMAND_ACTIONED_ATTRIBUTE_ID                     0x02D1 // Ver.: always
#define ATTR_TAKE_SNAPSHOT_COMMAND_CANCELLED_ATTRIBUTE_ID                    0x02D2 // Ver.: always
#define ATTR_TAKE_SNAPSHOT_COMMAND_REJECTED_ATTRIBUTE_ID                     0x02D3 // Ver.: always
#define ATTR_MIRROR_REPORT_ATTRIBUTE_RESPONSE_COMMAND_RECEIVED_ATTRIBUTE_ID  0x02D4 // Ver.: always
#define ATTR_MIRROR_REPORT_ATTRIBUTE_RESPONSE_COMMAND_ACTIONED_ATTRIBUTE_ID  0x02D5 // Ver.: always
#define ATTR_MIRROR_REPORT_ATTRIBUTE_RESPONSE_COMMAND_CANCELLED_ATTRIBUTE_ID 0x02D6 // Ver.: always
#define ATTR_MIRROR_REPORT_ATTRIBUTE_RESPONSE_COMMAND_REJECTED_ATTRIBUTE_ID  0x02D7 // Ver.: always
#define ATTR_SCHEDULE_SNAPSHOT_COMMAND_RECEIVED_ATTRIBUTE_ID                 0x02D8 // Ver.: always
#define ATTR_SCHEDULE_SNAPSHOT_COMMAND_ACTIONED_ATTRIBUTE_ID                 0x02D9 // Ver.: always
#define ATTR_SCHEDULE_SNAPSHOT_COMMAND_CANCELLED_ATTRIBUTE_ID                0x02DA // Ver.: always
#define ATTR_SCHEDULE_SNAPSHOT_COMMAND_REJECTED_ATTRIBUTE_ID                 0x02DB // Ver.: always
#define ATTR_START_SAMPLING_COMMAND_RECEIVED_ATTRIBUTE_ID                    0x02DC // Ver.: always
#define ATTR_START_SAMPLING_COMMAND_ACTIONED_ATTRIBUTE_ID                    0x02DD // Ver.: always
#define ATTR_START_SAMPLING_COMMAND_CANCELLED_ATTRIBUTE_ID                   0x02DE // Ver.: always
#define ATTR_START_SAMPLING_COMMAND_REJECTED_ATTRIBUTE_ID                    0x02DF // Ver.: always
#define ATTR_GET_SAMPLED_DATA_COMMAND_RECEIVED_ATTRIBUTE_ID                  0x02E0 // Ver.: always
#define ATTR_GET_SAMPLED_DATA_COMMAND_ACTIONED_ATTRIBUTE_ID                  0x02E1 // Ver.: always
#define ATTR_GET_SAMPLED_DATA_COMMAND_CANCELLED_ATTRIBUTE_ID                 0x02E2 // Ver.: always
#define ATTR_GET_SAMPLED_DATA_COMMAND_REJECTED_ATTRIBUTE_ID                  0x02E3 // Ver.: always
#define ATTR_SUPPLY_ON_ATTRIBUTE_ID                                          0x02E4 // Ver.: always
#define ATTR_SUPPLY_ARMED_ATTRIBUTE_ID                                       0x02E5 // Ver.: always
#define ATTR_SUPPLY_OFF_ATTRIBUTE_ID                                         0x02E6 // Ver.: always
#define ATTR_DISCONNECTED_DUE_TO_TAMPER_DETECTED_ATTRIBUTE_ID                0x02E7 // Ver.: always
#define ATTR_MANUAL_DISCONNECT_ATTRIBUTE_ID                                  0x02E8 // Ver.: always
#define ATTR_MANUAL_CONNECT_ATTRIBUTE_ID                                     0x02E9 // Ver.: always
#define ATTR_REMOTE_DISCONNECTION_ATTRIBUTE_ID                               0x02EA // Ver.: always
#define ATTR_REMOTE_CONNECT_ATTRIBUTE_ID                                     0x02EB // Ver.: always
#define ATTR_LOCAL_DISCONNECTION_ATTRIBUTE_ID                                0x02EC // Ver.: always
#define ATTR_LOCAL_CONNECT_ATTRIBUTE_ID                                      0x02ED // Ver.: always
#define ATTR_CHANGE_SUPPLY_RECEIVED_ATTRIBUTE_ID                             0x02EE // Ver.: always
#define ATTR_CHANGE_SUPPLY_ACTIONED_ATTRIBUTE_ID                             0x02EF // Ver.: always
#define ATTR_CHANGE_SUPPLY_CANCELLED_ATTRIBUTE_ID                            0x02F0 // Ver.: always
#define ATTR_CHANGE_SUPPLY_REJECTED_ATTRIBUTE_ID                             0x02F1 // Ver.: always
#define ATTR_LOCAL_CHANGE_SUPPLY_RECEIVED_ATTRIBUTE_ID                       0x02F2 // Ver.: always
#define ATTR_LOCAL_CHANGE_SUPPLY_ACTIONED_ATTRIBUTE_ID                       0x02F3 // Ver.: always
#define ATTR_LOCAL_CHANGE_SUPPLY_CANCELLED_ATTRIBUTE_ID                      0x02F4 // Ver.: always
#define ATTR_LOCAL_CHANGE_SUPPLY_REJECTED_ATTRIBUTE_ID                       0x02F5 // Ver.: always
#define ATTR_PUBLISH_UNCONTROLLED_FLOW_THRESHOLD_RECEIVED_ATTRIBUTE_ID       0x02F6 // Ver.: always
#define ATTR_PUBLISH_UNCONTROLLED_FLOW_THRESHOLD_ACTIONED_ATTRIBUTE_ID       0x02F7 // Ver.: always
#define ATTR_PUBLISH_UNCONTROLLED_FLOW_THRESHOLD_CANCELLED_ATTRIBUTE_ID      0x02F8 // Ver.: always
#define ATTR_PUBLISH_UNCONTROLLED_FLOW_THRESHOLD_REJECTED_ATTRIBUTE_ID       0x02F9 // Ver.: always
#define ATTR_MESSAGE_CONFIRMATION_SENT_ATTRIBUTE_ID                          0x0300 // Ver.: always
#define ATTR_DISPLAY_MESSAGE_RECEIVED_ATTRIBUTE_ID                           0x03C0 // Ver.: always
#define ATTR_DISPLAY_MESSAGE_ACTIONED_ATTRIBUTE_ID                           0x03C1 // Ver.: always
#define ATTR_DISPLAY_MESSAGE_CANCELLED_ATTRIBUTE_ID                          0x03C2 // Ver.: always
#define ATTR_DISPLAY_MESSAGE_REJECTED_ATTRIBUTE_ID                           0x03C3 // Ver.: always
#define ATTR_CANCEL_MESSAGE_RECEIVED_ATTRIBUTE_ID                            0x03C4 // Ver.: always
#define ATTR_CANCEL_MESSAGE_ACTIONED_ATTRIBUTE_ID                            0x03C5 // Ver.: always
#define ATTR_CANCEL_MESSAGE_CANCELLED_ATTRIBUTE_ID                           0x03C6 // Ver.: always
#define ATTR_CANCEL_MESSAGE_REJECTED_ATTRIBUTE_ID                            0x03C7 // Ver.: always
#define ATTR_LOW_CREDIT_ATTRIBUTE_ID                                         0x0400 // Ver.: always
#define ATTR_NO_CREDIT_ATTRIBUTE_ID                                          0x0401 // Ver.: always
#define ATTR_CREDIT_EXHAUSTED_ATTRIBUTE_ID                                   0x0402 // Ver.: always
#define ATTR_EMERGENCY_CREDIT_ENABLED_ATTRIBUTE_ID                           0x0403 // Ver.: always
#define ATTR_EMERGENCY_CREDIT_EXHAUSTED_ATTRIBUTE_ID                         0x0404 // Ver.: always
#define ATTR_PREPAY_IHD_LOW_CREDIT_WARNING_ATTRIBUTE_ID                      0x0405 // Ver.: always
#define ATTR_PHYSICAL_ATTACK_ON_THE_PREPAY_METER_ATTRIBUTE_ID                0x0420 // Ver.: always
#define ATTR_ELECTRONIC_ATTACK_ON_THE_PREPAY_METER_ATTRIBUTE_ID              0x0421 // Ver.: always
#define ATTR_DISCOUNT_APPLIED_ATTRIBUTE_ID                                   0x0422 // Ver.: always
#define ATTR_CREDIT_ADJUSTMENT_ATTRIBUTE_ID                                  0x0423 // Ver.: always
#define ATTR_CREDIT_ADJUST_FAIL_ATTRIBUTE_ID                                 0x0424 // Ver.: always
#define ATTR_DEBT_ADJUSTMENT_ATTRIBUTE_ID                                    0x0425 // Ver.: always
#define ATTR_DEBT_ADJUST_FAIL_ATTRIBUTE_ID                                   0x0426 // Ver.: always
#define ATTR_MODE_CHANGE_ATTRIBUTE_ID                                        0x0427 // Ver.: always
#define ATTR_TOPUP_CODE_ERROR_ATTRIBUTE_ID                                   0x0428 // Ver.: always
#define ATTR_TOPUP_ALREADY_USED_ATTRIBUTE_ID                                 0x0429 // Ver.: always
#define ATTR_TOPUP_CODE_INVALID_ATTRIBUTE_ID                                 0x042A // Ver.: always
#define ATTR_TOPUP_ACCEPTED_VIA_REMOTE_ATTRIBUTE_ID                          0x042B // Ver.: always
#define ATTR_TOPUP_ACCEPTED_VIA_MANUAL_ENTRY_ATTRIBUTE_ID                    0x042C // Ver.: always
#define ATTR_FRIENDLY_CREDIT_IN_USE_ATTRIBUTE_ID                             0x042D // Ver.: always
#define ATTR_FRIENDLY_CREDIT_END_WARNING_ATTRIBUTE_ID                        0x042E // Ver.: always
#define ATTR_FRIENDLY_CREDIT_PERIOD_END_ATTRIBUTE_ID                         0x042F // Ver.: always
#define ATTR_PREPAY_ERROR_REG_CLEAR_ATTRIBUTE_ID                             0x0430 // Ver.: always
#define ATTR_PREPAY_ALARM_REG_CLEAR_ATTRIBUTE_ID                             0x0431 // Ver.: always
#define ATTR_PREPAY_CLUSTER_NOT_FOUND_ATTRIBUTE_ID                           0x0432 // Ver.: always
#define ATTR_TOPUP_VALUE_TOO_LARGE_ATTRIBUTE_ID                              0x0433 // Ver.: always
#define ATTR_MODE_CREDIT_2_PREPAY_ATTRIBUTE_ID                               0x0441 // Ver.: always
#define ATTR_MODE_PREPAY_2_CREDIT_ATTRIBUTE_ID                               0x0442 // Ver.: always
#define ATTR_MODE_DEFAULT_ATTRIBUTE_ID                                       0x0443 // Ver.: always
#define ATTR_SELECT_AVAILABLE_EMERGENCY_CREDIT_RECEIVED_ATTRIBUTE_ID         0x04C0 // Ver.: always
#define ATTR_SELECT_AVAILABLE_EMERGENCY_CREDIT_ACTIONED_ATTRIBUTE_ID         0x04C1 // Ver.: always
#define ATTR_SELECT_AVAILABLE_EMERGENCY_CREDIT_CANCELLED_ATTRIBUTE_ID        0x04C2 // Ver.: always
#define ATTR_SELECT_AVAILABLE_EMERGENCY_CREDIT_REJECTED_ATTRIBUTE_ID         0x04C3 // Ver.: always
#define ATTR_CHANGE_DEBT_RECEIVED_ATTRIBUTE_ID                               0x04C4 // Ver.: always
#define ATTR_CHANGE_DEBT_ACTIONED_ATTRIBUTE_ID                               0x04C5 // Ver.: always
#define ATTR_CHANGE_DEBT_CANCELLED_ATTRIBUTE_ID                              0x04C6 // Ver.: always
#define ATTR_CHANGE_DEBT_REJECTED_ATTRIBUTE_ID                               0x04C7 // Ver.: always
#define ATTR_EMERGENCY_CREDIT_SETUP_RECEIVED_ATTRIBUTE_ID                    0x04C8 // Ver.: always
#define ATTR_EMERGENCY_CREDIT_SETUP_ACTIONED_ATTRIBUTE_ID                    0x04C9 // Ver.: always
#define ATTR_EMERGENCY_CREDIT_SETUP_CANCELLED_ATTRIBUTE_ID                   0x04CA // Ver.: always
#define ATTR_EMERGENCY_CREDIT_SETUP_REJECTED_ATTRIBUTE_ID                    0x04CB // Ver.: always
#define ATTR_CONSUMER_TOPUP_RECEIVED_ATTRIBUTE_ID                            0x04CC // Ver.: always
#define ATTR_CONSUMER_TOPUP_ACTIONED_ATTRIBUTE_ID                            0x04CD // Ver.: always
#define ATTR_CONSUMER_TOPUP_CANCELLED_ATTRIBUTE_ID                           0x04CE // Ver.: always
#define ATTR_CONSUMER_TOPUP_REJECTED_ATTRIBUTE_ID                            0x04CF // Ver.: always
#define ATTR_CREDIT_ADJUSTMENT_RECEIVED_ATTRIBUTE_ID                         0x04D0 // Ver.: always
#define ATTR_CREDIT_ADJUSTMENT_ACTIONED_ATTRIBUTE_ID                         0x04D1 // Ver.: always
#define ATTR_CREDIT_ADJUSTMENT_CANCELLED_ATTRIBUTE_ID                        0x04D2 // Ver.: always
#define ATTR_CREDIT_ADJUSTMENT_REJECTED_ATTRIBUTE_ID                         0x04D3 // Ver.: always
#define ATTR_CHANGE_PAYMENT_MODE_RECEIVED_ATTRIBUTE_ID                       0x04D4 // Ver.: always
#define ATTR_CHANGE_PAYMENT_MODE_ACTIONED_ATTRIBUTE_ID                       0x04D5 // Ver.: always
#define ATTR_CHANGE_PAYMENT_MODE_CANCELLED_ATTRIBUTE_ID                      0x04D6 // Ver.: always
#define ATTR_CHANGE_PAYMENT_MODE_REJECTED_ATTRIBUTE_ID                       0x04D7 // Ver.: always
#define ATTR_GET_PREPAY_SNAPSHOT_RECEIVED_ATTRIBUTE_ID                       0x04D8 // Ver.: always
#define ATTR_GET_PREPAY_SNAPSHOT_ACTIONED_ATTRIBUTE_ID                       0x04D9 // Ver.: always
#define ATTR_GET_PREPAY_SNAPSHOT_CANCELLED_ATTRIBUTE_ID                      0x04DA // Ver.: always
#define ATTR_GET_PREPAY_SNAPSHOT_REJECTED_ATTRIBUTE_ID                       0x04DB // Ver.: always
#define ATTR_GET_TOPUP_LOG_RECEIVED_ATTRIBUTE_ID                             0x04DC // Ver.: always
#define ATTR_GET_TOPUP_LOG_ACTIONED_ATTRIBUTE_ID                             0x04DD // Ver.: always
#define ATTR_GET_TOPUP_LOG_CANCELLED_ATTRIBUTE_ID                            0x04DE // Ver.: always
#define ATTR_GET_TOPUP_LOG_REJECTED_ATTRIBUTE_ID                             0x04DF // Ver.: always
#define ATTR_SET_LOW_CREDIT_WARNING_LEVEL_RECEIVED_ATTRIBUTE_ID              0x04E0 // Ver.: always
#define ATTR_SET_LOW_CREDIT_WARNING_LEVEL_ACTIONED_ATTRIBUTE_ID              0x04E1 // Ver.: always
#define ATTR_SET_LOW_CREDIT_WARNING_LEVEL_CANCELLED_ATTRIBUTE_ID             0x04E2 // Ver.: always
#define ATTR_SET_LOW_CREDIT_WARNING_LEVEL_REJECTED_ATTRIBUTE_ID              0x04E3 // Ver.: always
#define ATTR_GET_DEBT_REPAY_LOG_RECEIVED_ATTRIBUTE_ID                        0x04E4 // Ver.: always
#define ATTR_GET_DEBT_REPAY_LOG_ACTIONED_ATTRIBUTE_ID                        0x04E5 // Ver.: always
#define ATTR_GET_DEBT_REPAY_LOG_CANCELLED_ATTRIBUTE_ID                       0x04E6 // Ver.: always
#define ATTR_GET_DEBT_REPAY_LOG_REJECTED_ATTRIBUTE_ID                        0x04E7 // Ver.: always
#define ATTR_SET_MAXIMUM_CREDIT_LIMIT_RECEIVED_ATTRIBUTE_ID                  0x04E8 // Ver.: always
#define ATTR_SET_MAXIMUM_CREDIT_LIMIT_ACTIONED_ATTRIBUTE_ID                  0x04E9 // Ver.: always
#define ATTR_SET_MAXIMUM_CREDIT_LIMIT_CANCELLED_ATTRIBUTE_ID                 0x04EA // Ver.: always
#define ATTR_SET_MAXIMUM_CREDIT_LIMIT_REJECTED_ATTRIBUTE_ID                  0x04EB // Ver.: always
#define ATTR_SET_OVERALL_DEBT_CAP_RECEIVED_ATTRIBUTE_ID                      0x04EC // Ver.: always
#define ATTR_SET_OVERALL_DEBT_CAP_ACTIONED_ATTRIBUTE_ID                      0x04ED // Ver.: always
#define ATTR_SET_OVERALL_DEBT_CAP_CANCELLED_ATTRIBUTE_ID                     0x04EE // Ver.: always
#define ATTR_SET_OVERALL_DEBT_CAP_REJECTED_ATTRIBUTE_ID                      0x04EF // Ver.: always
#define ATTR_CALENDAR_CLUSTER_NOT_FOUND_ATTRIBUTE_ID                         0x0500 // Ver.: always
#define ATTR_CALENDAR_CHANGE_PASSIVE_ACTIVATED_ATTRIBUTE_ID                  0x0501 // Ver.: always
#define ATTR_CALENDAR_CHANGE_PASSIVE_UPDATED_ATTRIBUTE_ID                    0x0502 // Ver.: always
#define ATTR_PUBLISH_CALENDAR_RECEIVED_ATTRIBUTE_ID                          0x05C0 // Ver.: always
#define ATTR_PUBLISH_CALENDAR_ACTIONED_ATTRIBUTE_ID                          0x05C1 // Ver.: always
#define ATTR_PUBLISH_CALENDAR_CANCELLED_ATTRIBUTE_ID                         0x05C2 // Ver.: always
#define ATTR_PUBLISH_CALENDAR_REJECTED_ATTRIBUTE_ID                          0x05C3 // Ver.: always
#define ATTR_PUBLISH_DAY_PROFILE_RECEIVED_ATTRIBUTE_ID                       0x05C4 // Ver.: always
#define ATTR_PUBLISH_DAY_PROFILE_ACTIONED_ATTRIBUTE_ID                       0x05C5 // Ver.: always
#define ATTR_PUBLISH_DAY_PROFILE_CANCELLED_ATTRIBUTE_ID                      0x05C6 // Ver.: always
#define ATTR_PUBLISH_DAY_PROFILE_REJECTED_ATTRIBUTE_ID                       0x05C7 // Ver.: always
#define ATTR_PUBLISH_WEEK_PROFILE_RECEIVED_ATTRIBUTE_ID                      0x05C8 // Ver.: always
#define ATTR_PUBLISH_WEEK_PROFILE_ACTIONED_ATTRIBUTE_ID                      0x05C9 // Ver.: always
#define ATTR_PUBLISH_WEEK_PROFILE_CANCELLED_ATTRIBUTE_ID                     0x05CA // Ver.: always
#define ATTR_PUBLISH_WEEK_PROFILE_REJECTED_ATTRIBUTE_ID                      0x05CB // Ver.: always
#define ATTR_PUBLISH_SEASONS_RECEIVED_ATTRIBUTE_ID                           0x05CC // Ver.: always
#define ATTR_PUBLISH_SEASONS_ACTIONED_ATTRIBUTE_ID                           0x05CD // Ver.: always
#define ATTR_PUBLISH_SEASONS_CANCELLED_ATTRIBUTE_ID                          0x05CE // Ver.: always
#define ATTR_PUBLISH_SEASONS_REJECTED_ATTRIBUTE_ID                           0x05CF // Ver.: always
#define ATTR_PUBLISH_SPECIAL_DAYS_RECEIVED_ATTRIBUTE_ID                      0x05D0 // Ver.: always
#define ATTR_PUBLISH_SPECIAL_DAYS_ACTIONED_ATTRIBUTE_ID                      0x05D1 // Ver.: always
#define ATTR_PUBLISH_SPECIAL_DAYS_CANCELLED_ATTRIBUTE_ID                     0x05D2 // Ver.: always
#define ATTR_PUBLISH_SPECIAL_DAYS_REJECTED_ATTRIBUTE_ID                      0x05D3 // Ver.: always
#define ATTR_PASSWORD_1_CHANGE_ATTRIBUTE_ID                                  0x0600 // Ver.: always
#define ATTR_PASSWORD_2_CHANGE_ATTRIBUTE_ID                                  0x0601 // Ver.: always
#define ATTR_PASSWORD_3_CHANGE_ATTRIBUTE_ID                                  0x0602 // Ver.: always
#define ATTR_PASSWORD_4_CHANGE_ATTRIBUTE_ID                                  0x0603 // Ver.: always
#define ATTR_EVENT_LOG_CLEARED_ATTRIBUTE_ID                                  0x0604 // Ver.: always
#define ATTR_ZIGBEE_APS_TIMEOUT_ATTRIBUTE_ID                                 0x0610 // Ver.: always
#define ATTR_ZIGBEE_IEEE_TRANSMISSION_FAILURE_OVER_THRESHOLD_ATTRIBUTE_ID    0x0611 // Ver.: always
#define ATTR_ZIGBEE_IEEE_FRAME_CHECK_SEQUENCE_THRESHOLD_ATTRIBUTE_ID         0x0612 // Ver.: always
#define ATTR_ERROR_CERTIFICATE_ATTRIBUTE_ID                                  0x0613 // Ver.: always
#define ATTR_ERROR_SIGNATURE_ATTRIBUTE_ID                                    0x0614 // Ver.: always
#define ATTR_ERROR_PROGRAM_STORAGE_ATTRIBUTE_ID                              0x0615 // Ver.: always
#define ATTR_PUBLISH_COT_RECEIVED_ATTRIBUTE_ID                               0x06C0 // Ver.: always
#define ATTR_PUBLISH_COT_ACTIONED_ATTRIBUTE_ID                               0x06C1 // Ver.: always
#define ATTR_PUBLISH_COT_CANCELLED_ATTRIBUTE_ID                              0x06C2 // Ver.: always
#define ATTR_PUBLISH_COT_REJECTED_ATTRIBUTE_ID                               0x06C3 // Ver.: always
#define ATTR_PUBLISH_COS_RECEIVED_ATTRIBUTE_ID                               0x06C4 // Ver.: always
#define ATTR_PUBLISH_COS_ACTIONED_ATTRIBUTE_ID                               0x06C5 // Ver.: always
#define ATTR_PUBLISH_COS_CANCELLED_ATTRIBUTE_ID                              0x06C6 // Ver.: always
#define ATTR_PUBLISH_COS_REJECTED_ATTRIBUTE_ID                               0x06C7 // Ver.: always
#define ATTR_CHANGE_PASSWORD_RECEIVED_ATTRIBUTE_ID                           0x06C8 // Ver.: always
#define ATTR_CHANGE_PASSWORD_ACTIONED_ATTRIBUTE_ID                           0x06C9 // Ver.: always
#define ATTR_CHANGE_PASSWORD_CANCELLED_ATTRIBUTE_ID                          0x06CA // Ver.: always
#define ATTR_CHANGE_PASSWORD_REJECTED_ATTRIBUTE_ID                           0x06CB // Ver.: always
#define ATTR_SET_EVENT_CONFIGURATION_RECEIVED_ATTRIBUTE_ID                   0x06CC // Ver.: always
#define ATTR_SET_EVENT_CONFIGURATION_ACTIONED_ATTRIBUTE_ID                   0x06CD // Ver.: always
#define ATTR_SET_EVENT_CONFIGURATION_CANCELLED_ATTRIBUTE_ID                  0x06CE // Ver.: always
#define ATTR_SET_EVENT_CONFIGURATION_REJECTED_ATTRIBUTE_ID                   0x06CF // Ver.: always
#define ATTR_UPDATE_SITE_ID_RECEIVED_ATTRIBUTE_ID                            0x06D0 // Ver.: always
#define ATTR_UPDATE_SITE_ID_ACTIONED_ATTRIBUTE_ID                            0x06D1 // Ver.: always
#define ATTR_UPDATE_SITE_ID_CANCELLED_ATTRIBUTE_ID                           0x06D2 // Ver.: always
#define ATTR_UPDATE_SITE_ID_REJECTED_ATTRIBUTE_ID                            0x06D3 // Ver.: always
#define ATTR_UPDATE_CIN_RECEIVED_ATTRIBUTE_ID                                0x06D4 // Ver.: always
#define ATTR_UPDATE_CIN_ACTIONED_ATTRIBUTE_ID                                0x06D5 // Ver.: always
#define ATTR_UPDATE_CIN_CANCELLED_ATTRIBUTE_ID                               0x06D6 // Ver.: always
#define ATTR_UPDATE_CIN_REJECTED_ATTRIBUTE_ID                                0x06D7 // Ver.: always
#define ATTR_TUNNELING_CLUSTER_NOT_FOUND_ATTRIBUTE_ID                        0x0700 // Ver.: always
#define ATTR_UNSUPPORTED_PROTOCOL_ATTRIBUTE_ID                               0x0701 // Ver.: always
#define ATTR_INCORRECT_PROTOCOL_ATTRIBUTE_ID                                 0x0702 // Ver.: always
#define ATTR_REQUEST_TUNNEL_COMMAND_RECEIVED_ATTRIBUTE_ID                    0x07C0 // Ver.: always
#define ATTR_REQUEST_TUNNEL_COMMAND_REJECTED_ATTRIBUTE_ID                    0x07C1 // Ver.: always
#define ATTR_REQUEST_TUNNEL_COMMAND_GENERATED_ATTRIBUTE_ID                   0x07C2 // Ver.: always
#define ATTR_CLOSE_TUNNEL_COMMAND_RECEIVED_ATTRIBUTE_ID                      0x07C3 // Ver.: always
#define ATTR_CLOSE_TUNNEL_COMMAND_REJECTED_ATTRIBUTE_ID                      0x07C4 // Ver.: always
#define ATTR_CLOSE_TUNNEL_COMMAND_GENERATED_ATTRIBUTE_ID                     0x07C5 // Ver.: always
#define ATTR_TRANSFER_DATA_COMMAND_RECEIVED_ATTRIBUTE_ID                     0x07C6 // Ver.: always
#define ATTR_TRANSFER_DATA_COMMAND_REJECTED_ATTRIBUTE_ID                     0x07C7 // Ver.: always
#define ATTR_TRANSFER_DATA_COMMAND_GENERATED_ATTRIBUTE_ID                    0x07C8 // Ver.: always
#define ATTR_TRANSFER_DATA_ERROR_COMMAND_RECEIVED_ATTRIBUTE_ID               0x07C9 // Ver.: always
#define ATTR_TRANSFER_DATA_ERROR_COMMAND_REJECTED_ATTRIBUTE_ID               0x07CA // Ver.: always
#define ATTR_TRANSFER_DATA_ERROR_COMMAND_GENERATED_ATTRIBUTE_ID              0x07CB // Ver.: always
#define ATTR_ACK_TRANSFER_DATA_COMMAND_RECEIVED_ATTRIBUTE_ID                 0x07CC // Ver.: always
#define ATTR_ACK_TRANSFER_DATA_COMMAND_REJECTED_ATTRIBUTE_ID                 0x07CD // Ver.: always
#define ATTR_ACK_TRANSFER_DATA_COMMAND_GENERATED_ATTRIBUTE_ID                0x07CE // Ver.: always
#define ATTR_READY_DATA_COMMAND_RECEIVED_ATTRIBUTE_ID                        0x07CF // Ver.: always
#define ATTR_READY_DATA_COMMAND_REJECTED_ATTRIBUTE_ID                        0x07D0 // Ver.: always
#define ATTR_READY_DATA_COMMAND_GENERATED_ATTRIBUTE_ID                       0x07D1 // Ver.: always
#define ATTR_GET_SUPPORTED_TUNNEL_PROTOCOLS_COMMAND_RECEIVED_ATTRIBUTE_ID    0x07D2 // Ver.: always
#define ATTR_GET_SUPPORTED_TUNNEL_PROTOCOLS_COMMAND_REJECTED_ATTRIBUTE_ID    0x07D3 // Ver.: always
#define ATTR_GET_SUPPORTED_TUNNEL_PROTOCOLS_COMMAND_GENERATED_ATTRIBUTE_ID   0x07D4 // Ver.: always
#define ATTR_FIRMWARE_READY_FOR_ACTIVATION_ATTRIBUTE_ID                      0x0800 // Ver.: always
#define ATTR_FIRMWARE_ACTIVATED_ATTRIBUTE_ID                                 0x0801 // Ver.: always
#define ATTR_FIRMWARE_ACTIVATION_FAILURE_ATTRIBUTE_ID                        0x0802 // Ver.: always
#define ATTR_PATCH_READY_FOR_ACTIVATION_ATTRIBUTE_ID                         0x0803 // Ver.: always
#define ATTR_PATCH_ACTIVATED_ATTRIBUTE_ID                                    0x0804 // Ver.: always
#define ATTR_PATCH_FAILURE_ATTRIBUTE_ID                                      0x0805 // Ver.: always
#define ATTR_IMAGE_NOTIFY_COMMAND_RECEIVED_ATTRIBUTE_ID                      0x08C0 // Ver.: always
#define ATTR_IMAGE_NOTIFY_COMMAND_REJECTED_ATTRIBUTE_ID                      0x08C1 // Ver.: always
#define ATTR_QUERY_NEXT_IMAGE_REQUEST_GENERATED_ATTRIBUTE_ID                 0x08C2 // Ver.: always
#define ATTR_QUERY_NEXT_IMAGE_RESPONSE_RECEIVED_ATTRIBUTE_ID                 0x08C3 // Ver.: always
#define ATTR_QUERY_NEXT_IMAGE_RESPONSE_REJECTED_ATTRIBUTE_ID                 0x08C4 // Ver.: always
#define ATTR_IMAGE_BLOCK_REQUEST_GENERATED_ATTRIBUTE_ID                      0x08C5 // Ver.: always
#define ATTR_IMAGE_PAGE_REQUEST_GENERATED_ATTRIBUTE_ID                       0x08C6 // Ver.: always
#define ATTR_IMAGE_BLOCK_RESPONSE_RECEIVED_ATTRIBUTE_ID                      0x08C7 // Ver.: always
#define ATTR_IMAGE_BLOCK_RESPONSE_REJECTED_ATTRIBUTE_ID                      0x08C8 // Ver.: always
#define ATTR_UPGRADE_END_REQUEST_GENERATED_ATTRIBUTE_ID                      0x08C9 // Ver.: always
#define ATTR_UPGRADE_END_RESPONSE_RECEIVED_ATTRIBUTE_ID                      0x08CA // Ver.: always
#define ATTR_UPGRADE_END_RESPONSE_REJECTED_ATTRIBUTE_ID                      0x08CB // Ver.: always
#define ATTR_QUERY_SPECIFIC_FILE_REQUEST_GENERATED_ATTRIBUTE_ID              0x08CC // Ver.: always
#define ATTR_QUERY_SPECIFIC_FILE_RESPONSE_RECEIVED_ATTRIBUTE_ID              0x08CD // Ver.: always
#define ATTR_QUERY_SPECIFIC_FILE_RESPONSE_REJECTED_ATTRIBUTE_ID              0x08CE // Ver.: always
#define ATTR_DEVICE_MANAGEMENT_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID  0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_DEVICE_MANAGEMENT_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID  0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_PROVIDER_ID_SERVER_ATTRIBUTE_ID                                0x0100 // Ver.: always
#define ATTR_PROVIDER_NAME_ATTRIBUTE_ID                                     0x0101 // Ver.: always
#define ATTR_PROVIDER_CONTACT_DETAILS_ATTRIBUTE_ID                          0x0102 // Ver.: always
#define ATTR_PROPOSED_PROVIDER_ID_ATTRIBUTE_ID                              0x0110 // Ver.: always
#define ATTR_PROPOSED_PROVIDER_NAME_ATTRIBUTE_ID                            0x0111 // Ver.: always
#define ATTR_PROPOSED_PROVIDER_CHANGE_DATE_TIME_ATTRIBUTE_ID                0x0112 // Ver.: always
#define ATTR_PROPOSED_PROVIDER_CHANGE_CONTROL_ATTRIBUTE_ID                  0x0113 // Ver.: always
#define ATTR_RECEIVED_PROVIDER_ID_SERVER_ATTRIBUTE_ID                       0x0120 // Ver.: always
#define ATTR_RECEIVED_PROVIDER_NAME_ATTRIBUTE_ID                            0x0121 // Ver.: always
#define ATTR_RECEIVED_PROVIDER_CONTACT_DETAILS_ATTRIBUTE_ID                 0x0122 // Ver.: always
#define ATTR_RECEIVED_PROPOSED_PROVIDER_ID_ATTRIBUTE_ID                     0x0130 // Ver.: always
#define ATTR_RECEIVED_PROPOSED_PROVIDER_NAME_ATTRIBUTE_ID                   0x0131 // Ver.: always
#define ATTR_RECEIVED_PROPOSED_PROVIDER_CHANGE_DATE_TIME_ATTRIBUTE_ID       0x0132 // Ver.: always
#define ATTR_RECEIVED_PROPOSED_PROVIDER_CHANGE_CONTROL_ATTRIBUTE_ID         0x0133 // Ver.: always
#define ATTR_CHANGE_OF_TENANCY_UPDATE_DATE_TIME_ATTRIBUTE_ID                0x0200 // Ver.: always
#define ATTR_PROPOSED_TENANCY_CHANGE_CONTROL_ATTRIBUTE_ID                   0x0201 // Ver.: always
#define ATTR_WAN_STATUS_ATTRIBUTE_ID                                        0x0300 // Ver.: always
#define ATTR_LOW_MEDIUM_THRESHOLD_ATTRIBUTE_ID                              0x0400 // Ver.: always
#define ATTR_MEDIUM_HIGH_THRESHOLD_ATTRIBUTE_ID                             0x0401 // Ver.: always
#define ATTR_DEVICE_MANAGEMENT_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_DEVICE_MANAGEMENT_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Events
// Cluster specification level: se-1.2b-15-0131-02

// Client attributes
#define ATTR_EVENTS_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_EVENTS_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_EVENTS_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_EVENTS_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: MDU Pairing
// Cluster specification level: se-1.2b-15-0131-02

// Client attributes
#define ATTR_MDU_PAIRING_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_MDU_PAIRING_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_MDU_PAIRING_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_MDU_PAIRING_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Sub-GHz
// Cluster specification level: se-1.2b-15-0131-02

// Client attributes
#define ATTR_SUB_GHZ_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_SUB_GHZ_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_SUB_GHZ_CLUSTER_CHANNEL_CHANGE_ATTRIBUTE_ID          0x0000 // Ver.: always
#define ATTR_SUB_GHZ_CLUSTER_PAGE_28_CHANNEL_MASK_ATTRIBUTE_ID    0x0001 // Ver.: always
#define ATTR_SUB_GHZ_CLUSTER_PAGE_29_CHANNEL_MASK_ATTRIBUTE_ID    0x0002 // Ver.: always
#define ATTR_SUB_GHZ_CLUSTER_PAGE_30_CHANNEL_MASK_ATTRIBUTE_ID    0x0003 // Ver.: always
#define ATTR_SUB_GHZ_CLUSTER_PAGE_31_CHANNEL_MASK_ATTRIBUTE_ID    0x0004 // Ver.: always
#define ATTR_SUB_GHZ_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_SUB_GHZ_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Key Establishment
// Cluster specification level: zcl-7.0-07-5123-07

// Client attributes
#define ATTR_KEY_ESTABLISHMENT_SUITE_CLIENT_ATTRIBUTE_ID                    0x0000 // Ver.: always
#define ATTR_KEY_ESTABLISHMENT_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_KEY_ESTABLISHMENT_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_KEY_ESTABLISHMENT_SUITE_SERVER_ATTRIBUTE_ID                    0x0000 // Ver.: always
#define ATTR_KEY_ESTABLISHMENT_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_KEY_ESTABLISHMENT_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Information
// Cluster specification level: ta-1.0-07-5307-07

// Client attributes
#define ATTR_INFORMATION_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_INFORMATION_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_NODE_DESCRIPTION_ATTRIBUTE_ID                            0x0000 // Ver.: always
#define ATTR_DELIVERY_ENABLE_ATTRIBUTE_ID                             0x0001 // Ver.: always
#define ATTR_PUSH_INFORMATION_TIMER_ATTRIBUTE_ID                      0x0002 // Ver.: always
#define ATTR_ENABLE_SECURE_CONFIGURATION_ATTRIBUTE_ID                 0x0003 // Ver.: always
#define ATTR_NUMBER_OF_CONTENTS_ATTRIBUTE_ID                          0x0010 // Ver.: always
#define ATTR_CONTENT_ROOT_ID_ATTRIBUTE_ID                             0x0011 // Ver.: always
#define ATTR_INFORMATION_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_INFORMATION_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Data Sharing
// Cluster specification level: ta-1.0-07-5307-07

// Client attributes
#define ATTR_DATA_SHARING_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_DATA_SHARING_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_DEVICE_NAME_ATTRIBUTE_ID                                  0x0000 // Ver.: always
#define ATTR_DEVICE_DESCRIPTION_ATTRIBUTE_ID                           0x0001 // Ver.: always
#define ATTR_DATA_SHARING_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_DATA_SHARING_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Gaming
// Cluster specification level: ta-1.0-07-5307-07

// Client attributes
#define ATTR_GAMING_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_GAMING_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_PLAYER_NAME_ATTRIBUTE_ID                            0x0000 // Ver.: always
#define ATTR_NB_OF_GAMES_ATTRIBUTE_ID                            0x0001 // Ver.: always
#define ATTR_LIST_OF_GAMES_ATTRIBUTE_ID                          0x0002 // Ver.: always
#define ATTR_ANNOUNCEMENT_INTERVAL_ATTRIBUTE_ID                  0x0003 // Ver.: always
#define ATTR_GAME_ID_ATTRIBUTE_ID                                0x0010 // Ver.: always
#define ATTR_NAME_OF_GAME_ATTRIBUTE_ID                           0x0011 // Ver.: always
#define ATTR_GAME_MASTER_ATTRIBUTE_ID                            0x0012 // Ver.: always
#define ATTR_GAMING_STATUS_ATTRIBUTE_ID                          0x0013 // Ver.: always
#define ATTR_CURRENT_NB_OF_PLAYERS_ATTRIBUTE_ID                  0x0014 // Ver.: always
#define ATTR_LIST_OF_CURRENT_PLAYERS_ATTRIBUTE_ID                0x0015 // Ver.: always
#define ATTR_MAX_NB_OF_PLAYERS_ATTRIBUTE_ID                      0x0016 // Ver.: always
#define ATTR_MIN_NB_OF_PLAYERS_ATTRIBUTE_ID                      0x0017 // Ver.: always
#define ATTR_CURRENT_GAME_LEVEL_ATTRIBUTE_ID                     0x0018 // Ver.: always
#define ATTR_SCORE_OF_THIS_PLAYER_ATTRIBUTE_ID                   0x0019 // Ver.: always
#define ATTR_TIMER1_ATTRIBUTE_ID                                 0x001A // Ver.: always
#define ATTR_TIMER2_ATTRIBUTE_ID                                 0x001B // Ver.: always
#define ATTR_TIMER3_ATTRIBUTE_ID                                 0x001C // Ver.: always
#define ATTR_COUNTER1_ATTRIBUTE_ID                               0x001D // Ver.: always
#define ATTR_COUNTER2_ATTRIBUTE_ID                               0x001E // Ver.: always
#define ATTR_DOWNLOADABLE_ATTRIBUTE_ID                           0x001F // Ver.: always
#define ATTR_GAMING_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_GAMING_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Data Rate Control
// Cluster specification level: ta-1.0-07-5307-07

// Client attributes
#define ATTR_DATA_RATE_CONTROL_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_DATA_RATE_CONTROL_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_AVERAGE_LATENCY_REQUIREMENT_ATTRIBUTE_ID                       0x0000 // Ver.: always
#define ATTR_MAX_LATENCY_REQUIREMENT_ATTRIBUTE_ID                           0x0001 // Ver.: always
#define ATTR_BANDWIDTH_REQUIREMENT_ATTRIBUTE_ID                             0x0002 // Ver.: always
#define ATTR_DATA_RATE_CONTROL_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_DATA_RATE_CONTROL_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Voice over ZigBee
// Cluster specification level: ta-1.0-07-5307-07

// Client attributes
#define ATTR_VOICE_OVER_ZIGBEE_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_VOICE_OVER_ZIGBEE_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_CODEC_TYPE_ATTRIBUTE_ID                                        0x0000 // Ver.: always
#define ATTR_SAMPLING_FREQUENCY_ATTRIBUTE_ID                                0x0001 // Ver.: always
#define ATTR_CODEC_RATE_ATTRIBUTE_ID                                        0x0002 // Ver.: always
#define ATTR_ESTABLISHMENT_TIMEOUT_ATTRIBUTE_ID                             0x0003 // Ver.: always
#define ATTR_CODEC_TYPE_SUB1_ATTRIBUTE_ID                                   0x0004 // Ver.: always
#define ATTR_CODEC_TYPE_SUB2_ATTRIBUTE_ID                                   0x0005 // Ver.: always
#define ATTR_CODEC_TYPE_SUB3_ATTRIBUTE_ID                                   0x0006 // Ver.: always
#define ATTR_COMPRESSION_TYPE_ATTRIBUTE_ID                                  0x0007 // Ver.: always
#define ATTR_COMPRESSION_RATE_ATTRIBUTE_ID                                  0x0008 // Ver.: always
#define ATTR_OPTION_FLAGS_ATTRIBUTE_ID                                      0x0009 // Ver.: always
#define ATTR_THRESHOLD_ATTRIBUTE_ID                                         0x000A // Ver.: always
#define ATTR_VOICE_OVER_ZIGBEE_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_VOICE_OVER_ZIGBEE_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Chatting
// Cluster specification level: ta-1.0-07-5307-07

// Client attributes
#define ATTR_CHATTING_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_CHATTING_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_U_ID_ATTRIBUTE_ID                                     0x0000 // Ver.: always
#define ATTR_NICKNAME_ATTRIBUTE_ID                                 0x0001 // Ver.: always
#define ATTR_C_ID_ATTRIBUTE_ID                                     0x0010 // Ver.: always
#define ATTR_NAME_ATTRIBUTE_ID                                     0x0011 // Ver.: always
#define ATTR_ENABLE_ADD_CHAT_ATTRIBUTE_ID                          0x0020 // Ver.: always
#define ATTR_CHATTING_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_CHATTING_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Payment
// Cluster specification level: ta-1.0-07-5307-07

// Client attributes
#define ATTR_PAYMENT_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_PAYMENT_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_PAYMENT_USER_ID_ATTRIBUTE_ID                         0x0000 // Ver.: always
#define ATTR_USER_TYPE_ATTRIBUTE_ID                               0x0001 // Ver.: always
#define ATTR_PAYMENT_SERVICE_ID_ATTRIBUTE_ID                      0x0010 // Ver.: always
#define ATTR_PAYMENT_SERVICE_PROVIDER_ID_ATTRIBUTE_ID             0x0011 // Ver.: always
#define ATTR_TOTEM_ID_ATTRIBUTE_ID                                0x0012 // Ver.: always
#define ATTR_CURRENCY_ATTRIBUTE_ID                                0x0020 // Ver.: always
#define ATTR_PRICE_TRAILING_DIGIT_ATTRIBUTE_ID                    0x0021 // Ver.: always
#define ATTR_PRICE_ATTRIBUTE_ID                                   0x0022 // Ver.: always
#define ATTR_GOOD_ID_ATTRIBUTE_ID                                 0x0030 // Ver.: always
#define ATTR_SERIAL_NUMBER_ATTRIBUTE_ID                           0x0031 // Ver.: always
#define ATTR_PAYMENT_TIMESTAMP_ATTRIBUTE_ID                       0x0032 // Ver.: always
#define ATTR_TRANS_ID_ATTRIBUTE_ID                                0x0033 // Ver.: always
#define ATTR_TRANS_STATUS_ATTRIBUTE_ID                            0x0034 // Ver.: always
#define ATTR_PAYMENT_STATUS_ATTRIBUTE_ID                          0x0035 // Ver.: always
#define ATTR_PAYMENT_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_PAYMENT_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Billing
// Cluster specification level: ta-1.0-07-5307-07

// Client attributes
#define ATTR_BILLING_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_BILLING_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_USER_ID_ATTRIBUTE_ID                                 0x0000 // Ver.: always
#define ATTR_SERVICE_ID_ATTRIBUTE_ID                              0x0010 // Ver.: always
#define ATTR_SERVICE_PROVIDER_ID_ATTRIBUTE_ID                     0x0011 // Ver.: always
#define ATTR_SESSION_INTERVAL_ATTRIBUTE_ID                        0x0012 // Ver.: always
#define ATTR_TIMESTAMP_ATTRIBUTE_ID                               0x0020 // Ver.: always
#define ATTR_DURATION_ATTRIBUTE_ID                                0x0021 // Ver.: always
#define ATTR_BILLING_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_BILLING_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Appliance Identification
// Cluster specification level: UNKNOWN

// Client attributes
#define ATTR_APPLIANCE_IDENTIFICATION_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_APPLIANCE_IDENTIFICATION_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_BASIC_IDENTIFICATION_ATTRIBUTE_ID                                     0x0000 // Ver.: always
#define ATTR_APPLIANCE_COMPANY_NAME_ATTRIBUTE_ID                                   0x0010 // Ver.: always
#define ATTR_COMPANY_ID_ATTRIBUTE_ID                                               0x0011 // Ver.: always
#define ATTR_BRAND_NAME_ATTRIBUTE_ID                                               0x0012 // Ver.: always
#define ATTR_BRAND_ID_ATTRIBUTE_ID                                                 0x0013 // Ver.: always
#define ATTR_APPLIANCE_MODEL_ATTRIBUTE_ID                                          0x0014 // Ver.: always
#define ATTR_APPLIANCE_PART_NUMBER_ATTRIBUTE_ID                                    0x0015 // Ver.: always
#define ATTR_APPLIANCE_PRODUCT_REVISION_ATTRIBUTE_ID                               0x0016 // Ver.: always
#define ATTR_APPLIANCE_SOFTWARE_REVISION_ATTRIBUTE_ID                              0x0017 // Ver.: always
#define ATTR_PRODUCT_TYPE_NAME_ATTRIBUTE_ID                                        0x0018 // Ver.: always
#define ATTR_PRODUCT_TYPE_ID_ATTRIBUTE_ID                                          0x0019 // Ver.: always
#define ATTR_CECED_SPECIFICATION_VERSION_ATTRIBUTE_ID                              0x001A // Ver.: always
#define ATTR_APPLIANCE_IDENTIFICATION_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_APPLIANCE_IDENTIFICATION_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Meter Identification
// Cluster specification level: UNKNOWN

// Client attributes
#define ATTR_METER_IDENTIFICATION_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_METER_IDENTIFICATION_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_METER_COMPANY_NAME_ATTRIBUTE_ID                                   0x0000 // Ver.: always
#define ATTR_METER_TYPE_ID_ATTRIBUTE_ID                                        0x0001 // Ver.: always
#define ATTR_DATA_QUALITY_ID_ATTRIBUTE_ID                                      0x0004 // Ver.: always
#define ATTR_CUSTOMER_NAME_ATTRIBUTE_ID                                        0x0005 // Ver.: always
#define ATTR_METER_MODEL_ATTRIBUTE_ID                                          0x0006 // Ver.: always
#define ATTR_METER_PART_NUMBER_ATTRIBUTE_ID                                    0x0007 // Ver.: always
#define ATTR_METER_PRODUCT_REVISION_ATTRIBUTE_ID                               0x0008 // Ver.: always
#define ATTR_METER_SOFTWARE_REVISION_ATTRIBUTE_ID                              0x000A // Ver.: always
#define ATTR_UTILITY_NAME_ATTRIBUTE_ID                                         0x000B // Ver.: always
#define ATTR_POD_ATTRIBUTE_ID                                                  0x000C // Ver.: always
#define ATTR_AVAILABLE_POWER_ATTRIBUTE_ID                                      0x000D // Ver.: always
#define ATTR_POWER_THRESHOLD_ATTRIBUTE_ID                                      0x000E // Ver.: always
#define ATTR_METER_IDENTIFICATION_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_METER_IDENTIFICATION_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Appliance Events and Alert
// Cluster specification level: UNKNOWN

// Client attributes
#define ATTR_APPLIANCE_EVENTS_AND_ALERT_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_APPLIANCE_EVENTS_AND_ALERT_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_APPLIANCE_EVENTS_AND_ALERT_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_APPLIANCE_EVENTS_AND_ALERT_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Appliance Statistics
// Cluster specification level: UNKNOWN

// Client attributes
#define ATTR_APPLIANCE_STATISTICS_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_APPLIANCE_STATISTICS_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_LOG_MAX_SIZE_ATTRIBUTE_ID                                         0x0000 // Ver.: always
#define ATTR_LOG_QUEUE_MAX_SIZE_ATTRIBUTE_ID                                   0x0001 // Ver.: always
#define ATTR_APPLIANCE_STATISTICS_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_APPLIANCE_STATISTICS_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Electrical Measurement
// Cluster specification level: UNKNOWN

// Client attributes
#define ATTR_ELECTRICAL_MEASUREMENT_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_ELECTRICAL_MEASUREMENT_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_MEASUREMENT_TYPE_ATTRIBUTE_ID                                       0x0000 // Ver.: always
#define ATTR_DC_VOLTAGE_ATTRIBUTE_ID                                             0x0100 // Ver.: always
#define ATTR_DC_VOLTAGE_MIN_ATTRIBUTE_ID                                         0x0101 // Ver.: always
#define ATTR_DC_VOLTAGE_MAX_ATTRIBUTE_ID                                         0x0102 // Ver.: always
#define ATTR_DC_CURRENT_ATTRIBUTE_ID                                             0x0103 // Ver.: always
#define ATTR_DC_CURRENT_MIN_ATTRIBUTE_ID                                         0x0104 // Ver.: always
#define ATTR_DC_CURRENT_MAX_ATTRIBUTE_ID                                         0x0105 // Ver.: always
#define ATTR_DC_POWER_ATTRIBUTE_ID                                               0x0106 // Ver.: always
#define ATTR_DC_POWER_MIN_ATTRIBUTE_ID                                           0x0107 // Ver.: always
#define ATTR_DC_POWER_MAX_ATTRIBUTE_ID                                           0x0108 // Ver.: always
#define ATTR_DC_VOLTAGE_MULTIPLIER_ATTRIBUTE_ID                                  0x0200 // Ver.: always
#define ATTR_DC_VOLTAGE_DIVISOR_ATTRIBUTE_ID                                     0x0201 // Ver.: always
#define ATTR_DC_CURRENT_MULTIPLIER_ATTRIBUTE_ID                                  0x0202 // Ver.: always
#define ATTR_DC_CURRENT_DIVISOR_ATTRIBUTE_ID                                     0x0203 // Ver.: always
#define ATTR_DC_POWER_MULTIPLIER_ATTRIBUTE_ID                                    0x0204 // Ver.: always
#define ATTR_DC_POWER_DIVISOR_ATTRIBUTE_ID                                       0x0205 // Ver.: always
#define ATTR_AC_FREQUENCY_ATTRIBUTE_ID                                           0x0300 // Ver.: always
#define ATTR_AC_FREQUENCY_MIN_ATTRIBUTE_ID                                       0x0301 // Ver.: always
#define ATTR_AC_FREQUENCY_MAX_ATTRIBUTE_ID                                       0x0302 // Ver.: always
#define ATTR_NEUTRAL_CURRENT_ATTRIBUTE_ID                                        0x0303 // Ver.: always
#define ATTR_TOTAL_ACTIVE_POWER_ATTRIBUTE_ID                                     0x0304 // Ver.: always
#define ATTR_TOTAL_REACTIVE_POWER_ATTRIBUTE_ID                                   0x0305 // Ver.: always
#define ATTR_TOTAL_APPARENT_POWER_ATTRIBUTE_ID                                   0x0306 // Ver.: always
#define ATTR_MEASURED_1ST_HARMONIC_CURRENT_ATTRIBUTE_ID                          0x0307 // Ver.: always
#define ATTR_MEASURED_3RD_HARMONIC_CURRENT_ATTRIBUTE_ID                          0x0308 // Ver.: always
#define ATTR_MEASURED_5TH_HARMONIC_CURRENT_ATTRIBUTE_ID                          0x0309 // Ver.: always
#define ATTR_MEASURED_7TH_HARMONIC_CURRENT_ATTRIBUTE_ID                          0x030A // Ver.: always
#define ATTR_MEASURED_9TH_HARMONIC_CURRENT_ATTRIBUTE_ID                          0x030B // Ver.: always
#define ATTR_MEASURED_11TH_HARMONIC_CURRENT_ATTRIBUTE_ID                         0x030C // Ver.: always
#define ATTR_MEASURED_PHASE_1ST_HARMONIC_CURRENT_ATTRIBUTE_ID                    0x030D // Ver.: always
#define ATTR_MEASURED_PHASE_3RD_HARMONIC_CURRENT_ATTRIBUTE_ID                    0x030E // Ver.: always
#define ATTR_MEASURED_PHASE_5TH_HARMONIC_CURRENT_ATTRIBUTE_ID                    0x030F // Ver.: always
#define ATTR_MEASURED_PHASE_7TH_HARMONIC_CURRENT_ATTRIBUTE_ID                    0x0310 // Ver.: always
#define ATTR_MEASURED_PHASE_9TH_HARMONIC_CURRENT_ATTRIBUTE_ID                    0x0311 // Ver.: always
#define ATTR_MEASURED_PHASE_11TH_HARMONIC_CURRENT_ATTRIBUTE_ID                   0x0312 // Ver.: always
#define ATTR_AC_FREQUENCY_MULTIPLIER_ATTRIBUTE_ID                                0x0400 // Ver.: always
#define ATTR_AC_FREQUENCY_DIVISOR_ATTRIBUTE_ID                                   0x0401 // Ver.: always
#define ATTR_POWER_MULTIPLIER_ATTRIBUTE_ID                                       0x0402 // Ver.: always
#define ATTR_POWER_DIVISOR_ATTRIBUTE_ID                                          0x0403 // Ver.: always
#define ATTR_HARMONIC_CURRENT_MULTIPLIER_ATTRIBUTE_ID                            0x0404 // Ver.: always
#define ATTR_PHASE_HARMONIC_CURRENT_MULTIPLIER_ATTRIBUTE_ID                      0x0405 // Ver.: always
#define ATTR_INSTANTANEOUS_VOLTAGE_ATTRIBUTE_ID                                  0x0500 // Ver.: always
#define ATTR_INSTANTANEOUS_LINE_CURRENT_ATTRIBUTE_ID                             0x0501 // Ver.: always
#define ATTR_INSTANTANEOUS_ACTIVE_CURRENT_ATTRIBUTE_ID                           0x0502 // Ver.: always
#define ATTR_INSTANTANEOUS_REACTIVE_CURRENT_ATTRIBUTE_ID                         0x0503 // Ver.: always
#define ATTR_INSTANTANEOUS_POWER_ATTRIBUTE_ID                                    0x0504 // Ver.: always
#define ATTR_RMS_VOLTAGE_ATTRIBUTE_ID                                            0x0505 // Ver.: always
#define ATTR_RMS_VOLTAGE_MIN_ATTRIBUTE_ID                                        0x0506 // Ver.: always
#define ATTR_RMS_VOLTAGE_MAX_ATTRIBUTE_ID                                        0x0507 // Ver.: always
#define ATTR_RMS_CURRENT_ATTRIBUTE_ID                                            0x0508 // Ver.: always
#define ATTR_RMS_CURRENT_MIN_ATTRIBUTE_ID                                        0x0509 // Ver.: always
#define ATTR_RMS_CURRENT_MAX_ATTRIBUTE_ID                                        0x050A // Ver.: always
#define ATTR_ACTIVE_POWER_ATTRIBUTE_ID                                           0x050B // Ver.: always
#define ATTR_ACTIVE_POWER_MIN_ATTRIBUTE_ID                                       0x050C // Ver.: always
#define ATTR_ACTIVE_POWER_MAX_ATTRIBUTE_ID                                       0x050D // Ver.: always
#define ATTR_REACTIVE_POWER_ATTRIBUTE_ID                                         0x050E // Ver.: always
#define ATTR_APPARENT_POWER_ATTRIBUTE_ID                                         0x050F // Ver.: always
#define ATTR_AC_POWER_FACTOR_ATTRIBUTE_ID                                        0x0510 // Ver.: always
#define ATTR_AVERAGE_RMS_VOLTAGE_MEASUREMENT_PERIOD_ATTRIBUTE_ID                 0x0511 // Ver.: always
#define ATTR_AVERAGE_RMS_UNDER_VOLTAGE_COUNTER_ATTRIBUTE_ID                      0x0513 // Ver.: always
#define ATTR_RMS_EXTREME_OVER_VOLTAGE_PERIOD_ATTRIBUTE_ID                        0x0514 // Ver.: always
#define ATTR_RMS_EXTREME_UNDER_VOLTAGE_PERIOD_ATTRIBUTE_ID                       0x0515 // Ver.: always
#define ATTR_RMS_VOLTAGE_SAG_PERIOD_ATTRIBUTE_ID                                 0x0516 // Ver.: always
#define ATTR_RMS_VOLTAGE_SWELL_PERIOD_ATTRIBUTE_ID                               0x0517 // Ver.: always
#define ATTR_AC_VOLTAGE_MULTIPLIER_ATTRIBUTE_ID                                  0x0600 // Ver.: always
#define ATTR_AC_VOLTAGE_DIVISOR_ATTRIBUTE_ID                                     0x0601 // Ver.: always
#define ATTR_AC_CURRENT_MULTIPLIER_ATTRIBUTE_ID                                  0x0602 // Ver.: always
#define ATTR_AC_CURRENT_DIVISOR_ATTRIBUTE_ID                                     0x0603 // Ver.: always
#define ATTR_AC_POWER_MULTIPLIER_ATTRIBUTE_ID                                    0x0604 // Ver.: always
#define ATTR_AC_POWER_DIVISOR_ATTRIBUTE_ID                                       0x0605 // Ver.: always
#define ATTR_DC_OVERLOAD_ALARMS_MASK_ATTRIBUTE_ID                                0x0700 // Ver.: always
#define ATTR_DC_VOLTAGE_OVERLOAD_ATTRIBUTE_ID                                    0x0701 // Ver.: always
#define ATTR_DC_CURRENT_OVERLOAD_ATTRIBUTE_ID                                    0x0702 // Ver.: always
#define ATTR_AC_OVERLOAD_ALARMS_MASK_ATTRIBUTE_ID                                0x0800 // Ver.: always
#define ATTR_AC_VOLTAGE_OVERLOAD_ATTRIBUTE_ID                                    0x0801 // Ver.: always
#define ATTR_AC_CURRENT_OVERLOAD_ATTRIBUTE_ID                                    0x0802 // Ver.: always
#define ATTR_AC_POWER_OVERLOAD_ATTRIBUTE_ID                                      0x0803 // Ver.: always
#define ATTR_AC_REACTIVE_POWER_OVERLOAD_ATTRIBUTE_ID                             0x0804 // Ver.: always
#define ATTR_AVERAGE_RMS_OVER_VOLTAGE_ATTRIBUTE_ID                               0x0805 // Ver.: always
#define ATTR_AVERAGE_RMS_UNDER_VOLTAGE_ATTRIBUTE_ID                              0x0806 // Ver.: always
#define ATTR_RMS_EXTREME_OVER_VOLTAGE_ATTRIBUTE_ID                               0x0807 // Ver.: always
#define ATTR_RMS_EXTREME_UNDER_VOLTAGE_ATTRIBUTE_ID                              0x0808 // Ver.: always
#define ATTR_RMS_VOLTAGE_SAG_ATTRIBUTE_ID                                        0x0809 // Ver.: always
#define ATTR_RMS_VOLTAGE_SWELL_ATTRIBUTE_ID                                      0x080A // Ver.: always
#define ATTR_LINE_CURRENT_PHASE_B_ATTRIBUTE_ID                                   0x0901 // Ver.: always
#define ATTR_ACTIVE_CURRENT_PHASE_B_ATTRIBUTE_ID                                 0x0902 // Ver.: always
#define ATTR_REACTIVE_CURRENT_PHASE_B_ATTRIBUTE_ID                               0x0903 // Ver.: always
#define ATTR_RMS_VOLTAGE_PHASE_B_ATTRIBUTE_ID                                    0x0905 // Ver.: always
#define ATTR_RMS_VOLTAGE_MIN_PHASE_B_ATTRIBUTE_ID                                0x0906 // Ver.: always
#define ATTR_RMS_VOLTAGE_MAX_PHASE_B_ATTRIBUTE_ID                                0x0907 // Ver.: always
#define ATTR_RMS_CURRENT_PHASE_B_ATTRIBUTE_ID                                    0x0908 // Ver.: always
#define ATTR_RMS_CURRENT_MIN_PHASE_B_ATTRIBUTE_ID                                0x0909 // Ver.: always
#define ATTR_RMS_CURRENT_MAX_PHASE_B_ATTRIBUTE_ID                                0x090A // Ver.: always
#define ATTR_ACTIVE_POWER_PHASE_B_ATTRIBUTE_ID                                   0x090B // Ver.: always
#define ATTR_ACTIVE_POWER_MIN_PHASE_B_ATTRIBUTE_ID                               0x090C // Ver.: always
#define ATTR_ACTIVE_POWER_MAX_PHASE_B_ATTRIBUTE_ID                               0x090D // Ver.: always
#define ATTR_REACTIVE_POWER_PHASE_B_ATTRIBUTE_ID                                 0x090E // Ver.: always
#define ATTR_APPARENT_POWER_PHASE_B_ATTRIBUTE_ID                                 0x090F // Ver.: always
#define ATTR_POWER_FACTOR_PHASE_B_ATTRIBUTE_ID                                   0x0910 // Ver.: always
#define ATTR_AVERAGE_RMS_VOLTAGE_MEASUREMENT_PERIOD_PHASE_B_ATTRIBUTE_ID         0x0911 // Ver.: always
#define ATTR_AVERAGE_RMS_OVER_VOLTAGE_COUNTER_PHASE_B_ATTRIBUTE_ID               0x0912 // Ver.: always
#define ATTR_AVERAGE_RMS_UNDER_VOLTAGE_COUNTER_PHASE_B_ATTRIBUTE_ID              0x0913 // Ver.: always
#define ATTR_RMS_EXTREME_OVER_VOLTAGE_PERIOD_PHASE_B_ATTRIBUTE_ID                0x0914 // Ver.: always
#define ATTR_RMS_EXTREME_UNDER_VOLTAGE_PERIOD_PHASE_B_ATTRIBUTE_ID               0x0915 // Ver.: always
#define ATTR_RMS_VOLTAGE_SAG_PERIOD_PHASE_B_ATTRIBUTE_ID                         0x0916 // Ver.: always
#define ATTR_RMS_VOLTAGE_SWELL_PERIOD_PHASE_B_ATTRIBUTE_ID                       0x0917 // Ver.: always
#define ATTR_LINE_CURRENT_PHASE_C_ATTRIBUTE_ID                                   0x0A01 // Ver.: always
#define ATTR_ACTIVE_CURRENT_PHASE_C_ATTRIBUTE_ID                                 0x0A02 // Ver.: always
#define ATTR_REACTIVE_CURRENT_PHASE_C_ATTRIBUTE_ID                               0x0A03 // Ver.: always
#define ATTR_RMS_VOLTAGE_PHASE_C_ATTRIBUTE_ID                                    0x0A05 // Ver.: always
#define ATTR_RMS_VOLTAGE_MIN_PHASE_C_ATTRIBUTE_ID                                0x0A06 // Ver.: always
#define ATTR_RMS_VOLTAGE_MAX_PHASE_C_ATTRIBUTE_ID                                0x0A07 // Ver.: always
#define ATTR_RMS_CURRENT_PHASE_C_ATTRIBUTE_ID                                    0x0A08 // Ver.: always
#define ATTR_RMS_CURRENT_MIN_PHASE_C_ATTRIBUTE_ID                                0x0A09 // Ver.: always
#define ATTR_RMS_CURRENT_MAX_PHASE_C_ATTRIBUTE_ID                                0x0A0A // Ver.: always
#define ATTR_ACTIVE_POWER_PHASE_C_ATTRIBUTE_ID                                   0x0A0B // Ver.: always
#define ATTR_ACTIVE_POWER_MIN_PHASE_C_ATTRIBUTE_ID                               0x0A0C // Ver.: always
#define ATTR_ACTIVE_POWER_MAX_PHASE_C_ATTRIBUTE_ID                               0x0A0D // Ver.: always
#define ATTR_REACTIVE_POWER_PHASE_C_ATTRIBUTE_ID                                 0x0A0E // Ver.: always
#define ATTR_APPARENT_POWER_PHASE_C_ATTRIBUTE_ID                                 0x0A0F // Ver.: always
#define ATTR_POWER_FACTOR_PHASE_C_ATTRIBUTE_ID                                   0x0A10 // Ver.: always
#define ATTR_AVERAGE_RMS_VOLTAGE_MEASUREMENT_PERIOD_PHASE_C_ATTRIBUTE_ID         0x0A11 // Ver.: always
#define ATTR_AVERAGE_RMS_OVER_VOLTAGE_COUNTER_PHASE_C_ATTRIBUTE_ID               0x0A12 // Ver.: always
#define ATTR_AVERAGE_RMS_UNDER_VOLTAGE_COUNTER_PHASE_C_ATTRIBUTE_ID              0x0A13 // Ver.: always
#define ATTR_RMS_EXTREME_OVER_VOLTAGE_PERIOD_PHASE_C_ATTRIBUTE_ID                0x0A14 // Ver.: always
#define ATTR_RMS_EXTREME_UNDER_VOLTAGE_PERIOD_PHASE_C_ATTRIBUTE_ID               0x0A15 // Ver.: always
#define ATTR_RMS_VOLTAGE_SAG_PERIOD_PHASE_C_ATTRIBUTE_ID                         0x0A16 // Ver.: always
#define ATTR_RMS_VOLTAGE_SWELL_PERIOD_PHASE_C_ATTRIBUTE_ID                       0x0A17 // Ver.: always
#define ATTR_ELECTRICAL_MEASUREMENT_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_ELECTRICAL_MEASUREMENT_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Diagnostics
// Cluster specification level: UNKNOWN

// Client attributes
#define ATTR_DIAGNOSTICS_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_DIAGNOSTICS_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_NUMBER_OF_RESETS_ATTRIBUTE_ID                            0x0000 // Ver.: always
#define ATTR_PERSISTENT_MEMORY_WRITES_ATTRIBUTE_ID                    0x0001 // Ver.: always
#define ATTR_MAC_RX_BCAST_ATTRIBUTE_ID                                0x0100 // Ver.: always
#define ATTR_MAC_TX_BCAST_ATTRIBUTE_ID                                0x0101 // Ver.: always
#define ATTR_MAC_RX_UCAST_ATTRIBUTE_ID                                0x0102 // Ver.: always
#define ATTR_MAC_TX_UCAST_ATTRIBUTE_ID                                0x0103 // Ver.: always
#define ATTR_MAC_TX_UCAST_RETRY_ATTRIBUTE_ID                          0x0104 // Ver.: always
#define ATTR_MAC_TX_UCAST_FAIL_ATTRIBUTE_ID                           0x0105 // Ver.: always
#define ATTR_APS_RX_BCAST_ATTRIBUTE_ID                                0x0106 // Ver.: always
#define ATTR_APS_TX_BCAST_ATTRIBUTE_ID                                0x0107 // Ver.: always
#define ATTR_APS_RX_UCAST_ATTRIBUTE_ID                                0x0108 // Ver.: always
#define ATTR_APS_UCAST_SUCCESS_ATTRIBUTE_ID                           0x0109 // Ver.: always
#define ATTR_APS_TX_UCAST_RETRY_ATTRIBUTE_ID                          0x010A // Ver.: always
#define ATTR_APS_TX_UCAST_FAIL_ATTRIBUTE_ID                           0x010B // Ver.: always
#define ATTR_ROUTE_DISC_INITIATED_ATTRIBUTE_ID                        0x010C // Ver.: always
#define ATTR_NEIGHBOR_ADDED_ATTRIBUTE_ID                              0x010D // Ver.: always
#define ATTR_NEIGHBOR_REMOVED_ATTRIBUTE_ID                            0x010E // Ver.: always
#define ATTR_NEIGHBOR_STALE_ATTRIBUTE_ID                              0x010F // Ver.: always
#define ATTR_JOIN_INDICATION_ATTRIBUTE_ID                             0x0110 // Ver.: always
#define ATTR_CHILD_MOVED_ATTRIBUTE_ID                                 0x0111 // Ver.: always
#define ATTR_NWK_FC_FAILURE_ATTRIBUTE_ID                              0x0112 // Ver.: always
#define ATTR_APS_FC_FAILURE_ATTRIBUTE_ID                              0x0113 // Ver.: always
#define ATTR_APS_UNAUTHORIZED_KEY_ATTRIBUTE_ID                        0x0114 // Ver.: always
#define ATTR_NWK_DECRYPT_FAILURE_ATTRIBUTE_ID                         0x0115 // Ver.: always
#define ATTR_APS_DECRYPT_FAILURE_ATTRIBUTE_ID                         0x0116 // Ver.: always
#define ATTR_PACKET_BUFFER_ALLOC_FAILURES_ATTRIBUTE_ID                0x0117 // Ver.: always
#define ATTR_RELAYED_UNICAST_ATTRIBUTE_ID                             0x0118 // Ver.: always
#define ATTR_PHY_TO_MAC_QUEUE_LIMIT_REACHED_ATTRIBUTE_ID              0x0119 // Ver.: always
#define ATTR_PACKET_VALIDATE_DROP_COUNT_ATTRIBUTE_ID                  0x011A // Ver.: always
#define ATTR_AVERAGE_MAC_RETRY_PER_APS_MSG_SENT_ATTRIBUTE_ID          0x011B // Ver.: always
#define ATTR_LAST_MESSAGE_LQI_ATTRIBUTE_ID                            0x011C // Ver.: always
#define ATTR_LAST_MESSAGE_RSSI_ATTRIBUTE_ID                           0x011D // Ver.: always
#define ATTR_DIAGNOSTICS_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_DIAGNOSTICS_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: ZLL Commissioning
// Cluster specification level: zll-1.0-11-0037-10

// Client attributes
#define ATTR_ZLL_COMMISSIONING_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_ZLL_COMMISSIONING_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_ZLL_COMMISSIONING_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_ZLL_COMMISSIONING_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Sample Mfg Specific Cluster
// Cluster specification level: UNKNOWN

// Client attributes
#define ATTR_SAMPLE_MFG_SPECIFIC_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_SAMPLE_MFG_SPECIFIC_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_ATTRIBUTE_ONE_ATTRIBUTE_ID                                       0x0000 // Ver.: always
#define ATTR_SAMPLE_MFG_SPECIFIC_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_SAMPLE_MFG_SPECIFIC_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: Configuration Cluster
// Cluster specification level: UNKNOWN

// Client attributes
#define ATTR_OTA_CONFIGURATION_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_OTA_CONFIGURATION_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_TOKENS_LOCKED_ATTRIBUTE_ID                                     0x0000 // Ver.: always
#define ATTR_OTA_CONFIGURATION_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_OTA_CONFIGURATION_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: MFGLIB Cluster
// Cluster specification level: UNKNOWN

// Client attributes
#define ATTR_MFGLIB_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_MFGLIB_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_PACKETS_RECEIVED_ATTRIBUTE_ID                       0x0000 // Ver.: always
#define ATTR_SAVED_RSSI_ATTRIBUTE_ID                             0x0001 // Ver.: always
#define ATTR_SAVED_LQI_ATTRIBUTE_ID                              0x0002 // Ver.: always
#define ATTR_MFGLIB_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_MFGLIB_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001


// Attribute types for cluster: SL Works With All Hubs
// Cluster specification level: UNKNOWN

// Client attributes
#define ATTR_SL_WWAH_CLUSTER_CLUSTER_REVISION_CLIENT_ATTRIBUTE_ID 0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_SL_WWAH_CLUSTER_REPORTING_STATUS_CLIENT_ATTRIBUTE_ID 0xFFFE // Ver.: since zcl-6.0-15-02017-001

// Server attributes
#define ATTR_SL_WWAH_VERSION_ATTRIBUTE_ID                             0x0000 // Ver.: always
#define ATTR_SL_DISABLE_OTA_DOWNGRADES_ATTRIBUTE_ID                   0x0002 // Ver.: always
#define ATTR_SL_MGMT_LEAVE_WITHOUT_REJOIN_ENABLED_ATTRIBUTE_ID        0x0003 // Ver.: always
#define ATTR_SL_NWK_RETRY_COUNT_ATTRIBUTE_ID                          0x0004 // Ver.: always
#define ATTR_SL_MAC_RETRY_COUNT_ATTRIBUTE_ID                          0x0005 // Ver.: always
#define ATTR_SL_ROUTER_CHECKIN_ENABLED_ATTRIBUTE_ID                   0x0006 // Ver.: always
#define ATTR_SL_TOUCHLINK_INTERPAN_ENABLED_ATTRIBUTE_ID               0x0007 // Ver.: always
#define ATTR_SL_WWAH_PARENT_CLASSIFICATION_ENABLED_ATTRIBUTE_ID       0x0008 // Ver.: always
#define ATTR_SL_WWAH_APP_EVENT_RETRY_ENABLED_ATTRIBUTE_ID             0x0009 // Ver.: always
#define ATTR_SL_WWAH_APP_EVENT_RETRY_QUEUE_SIZE_ATTRIBUTE_ID          0x000A // Ver.: always
#define ATTR_SL_WWAH_REJOIN_ENABLED_ATTRIBUTE_ID                      0x000B // Ver.: always
#define ATTR_SL_MAC_POLL_CCA_WAIT_TIME_ATTRIBUTE_ID                   0x000C // Ver.: always
#define ATTR_SL_CONFIGURATION_MODE_ENABLED_ATTRIBUTE_ID               0x000D // Ver.: always
#define ATTR_SL_CURRENT_DEBUG_REPORT_ID_ATTRIBUTE_ID                  0x000E // Ver.: always
#define ATTR_SL_TC_SECURITY_ON_NTWK_KEY_ROTATION_ENABLED_ATTRIBUTE_ID 0x000F // Ver.: always
#define ATTR_SL_WWAH_BAD_PARENT_RECOVERY_ENABLED_ATTRIBUTE_ID         0x0010 // Ver.: always
#define ATTR_SL_PENDING_NETWORK_UPDATE_CHANNEL_ATTRIBUTE_ID           0x0011 // Ver.: always
#define ATTR_SL_PENDING_NETWORK_UPDATE_PANID_ATTRIBUTE_ID             0x0012 // Ver.: always
#define ATTR_SL_OTA_MAX_OFFLINE_DURATION_ATTRIBUTE_ID                 0x0013 // Ver.: always
#define ATTR_SL_WWAH_CLUSTER_CLUSTER_REVISION_SERVER_ATTRIBUTE_ID     0xFFFD // Ver.: since zcl-6.0-15-02017-001
#define ATTR_SL_WWAH_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE_ID     0xFFFE // Ver.: since zcl-6.0-15-02017-001


#endif // SILABS_EMBER_AF_ATTRIBUTE_ID

