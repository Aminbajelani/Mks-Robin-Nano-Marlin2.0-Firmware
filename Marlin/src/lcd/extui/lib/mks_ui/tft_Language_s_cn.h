/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

//*************简体中文***********************//
#define NEXT_CN                       "下一页"
#define PREVIOUS_CN                   "上一页"
#define DEFAULT_CN                    "默认值"
#define KEY_BACK_CN                   "退格"
#define KEY_REST_CN                   "重置"
#define KEY_CONFIRM_CN                "确定"

#define MACHINE_PARA_TITLE_CN         "机器参数"
#define MACHINE_TYPE_CNOFIG_CN        "机器设置"
#define MOTOR_CONFIG_CN               "电机设置"
#define MACHINE_LEVELING_CONFIG_CN    "调平设置"
#define ADVANCE_CONFIG_CN             "高级设置"

#define MACHINE_CONFIG_TITLE_CN       "机器参数>机器配置"
#define MACHINE_TYPE_CN               "机型选择"
#define MACHINE_STROKE_CN             "行程设置"
#define MACHINE_HOMEDIR_CN            "归零方向"
#define MACHINE_ENDSTOP_TYPE_CN       "限位开关类型"
#define MACHINE_FILAMENT_CONFIG_CN    "换料设置"

#define MACHINE_TYPE_CONFIG_TITLE_CN  "机器参数>机型选择"
#define MACHINE_TYPE_XYZ_CN           "XYZ机型"
#define MACHINE_TYPE_DELTA_CN         "Delta机型"
#define MACHINE_TYPE_COREXY_CN        "Corexy机型"

#define MACHINE_STROKE_CONF_TITLE_CN  "机器参数>机器行程"
#define X_MAX_LENGTH_CN               "X轴最大行程"
#define Y_MAX_LENGTH_CN               "Y轴最大行程"
#define Z_MAX_LENGTH_CN               "Z轴最大行程"

#define X_MIN_LENGTH_CN               "X轴最小行程"
#define Y_MIN_LENGTH_CN               "Y轴最小行程"
#define Z_MIN_LENGTH_CN               "Z轴最小行程"

#define HOME_DIR_CONF_TITLE_CN        "机器参数>归零方向"
#define HOME_DIR_X_CN                 "X轴归零方向"
#define HOME_DIR_Y_CN                 "Y轴归零方向"
#define HOME_DIR_Z_CN                 "Z轴归零方向"
#define HOME_MIN_CN                   "MIN"
#define HOME_MAX_CN                   "MAX"

#define ENDSTOP_CONF_TITLE_CN         "机器参数>限位开关"
#define MIN_ENDSTOP_X_CN              "X轴最小限位"
#define MIN_ENDSTOP_Y_CN              "Y轴最小限位"
#define MIN_ENDSTOP_Z_CN              "Z轴最小限位"
#define MAX_ENDSTOP_X_CN              "X轴最大限位"
#define MAX_ENDSTOP_Y_CN              "Y轴最大限位"
#define MAX_ENDSTOP_Z_CN              "Z轴最大限位"
#define ENDSTOP_FIL_CN                "断料开关类型"
#define ENDSTOP_LEVEL_CN              "调平开关类型"
#define ENDSTOP_OPENED_CN             "常开"
#define ENDSTOP_CLOSED_CN             "常闭"

#define FILAMENT_CONF_TITLE_CN        "换料设置"
#define FILAMENT_IN_LENGTH_CN         "进料长度"
#define FILAMENT_IN_SPEED_CN          "进料速度"
#define FILAMENT_TEMPERATURE_CN       "换料温度"
#define FILAMENT_OUT_LENGTH_CN        "退料长度"
#define FILAMENT_OUT_SPEED_CN         "退料速度"

#define LEVELING_CONF_TITLE_CN        "机器参数>调平设置"
#define LEVELING_PARA_CONF_CN         "调平设置"
#define LEVELING_MANUAL_POS_CN        "手动调平坐标设置"
#define LEVELING_AUTO_COMMAND_CN      "自动调平指令设置"
#define LEVELING_AUTO_ZOFFSET_CN      "挤出头与调平开关偏移设置"

#define LEVELING_TOUCHMI_CN           "Settings-TouchMi-Probe"
#define TM_INIT_CN                       "Init"
#define TM_ZOFFSETPOS_CN                 "Zoffset+"
#define TM_ZOFFSETNEG_CN                 "Zoffset-"
#define TM_SAVE_CN                       "Save"
#define TM_TEST_CN                       "Test"

#define BLTOUCH_LEVELING_CN           "Settings BL-Touch Probe"
#define BLTOUCH_INIT_CN               "Init"
#define BLTOUCH_ZOFFSETPOS_CN         "Zoffset+"
#define BLTOUCH_ZOFFSETNEG_CN         "Zoffset-"
#define BLTOUCH_SAVE_CN               "Save"
#define BLTOUCH_TEST_CN               "Test"

#define LEVELING_PARA_CONF_TITLE_CN   "调平参数"
#define AUTO_LEVELING_ENABLE_CN       "自动调平"
#define BLTOUCH_LEVELING_ENABLE_CN    "启动BLtouch"
#define PROBE_PORT_CN                 "调平探针接口"
#define PROBE_X_OFFSET_CN             "探针X方向偏移"
#define PROBE_Y_OFFSET_CN             "探针Y方向偏移"
#define PROBE_Z_OFFSET_CN             "探针Z方向偏移"
#define PROBE_XY_SPEED_CN             "探针XY方向移动速度"
#define PROBE_Z_SPEED_CN              "探针Z方向移动速度"
#define ENABLE_CN                     "是"
#define DISABLE_CN                    "否"
#define LOCKED_CN                     "否"
#define Z_MIN_CN                      "ZMin"
#define Z_MAX_CN                      "ZMax"

#define DELTA_LEVEL_CONF_TITLE_CN     "Delta机器参数"
#define DELTA_LEVEL_CONF_CN           "Delta机器调平"
#define DELTA_MACHINE_RADIUS_CN       "机器半径"
#define DELTA_DIAGONAL_ROD_CN         "机器杆长"
#define DELTA_PRINT_RADIUS_CN         "打印半径"
#define DELTA_HEIGHT_CN               "打印高度"
#define SMOOTH_ROD_OFFSET_CN          "滑块偏移"
#define EFFECTOR_OFFSET_CN            "效应器偏移"
#define CALIBRATION_RADIUS_CN         "调平半径"

#define XYZ_LEVEL_CONF_TITLE_CN       "XYZ机器参数"
#define PROBE_REACH_MAX_LEFT_CN       "探针达到最左位置"
#define PROBE_REACH_MAX_RIGHT_CN      "探针达到最右位置"
#define PROBE_REACH_MAX_FRONT_CN      "探针达到最前位置"
#define PROBE_REACH_MAX_BACK_CN       "探针达到最后位置"

#define TEMPERATURE_CONF_TITLE_CN     "机器参数>温度设置"
#define NOZZLE_CONF_CN                "喷头设置"
#define HOTBED_CONF_CN                "热床设置"
#define PREHEAT_TEMPER_CN             "预设温度"

#define NOZZLE_CONF_TITLE_CN          "机器参数>喷头设置"
#define NOZZLECNT_CN                  "喷头数量"
#define NOZZLE_TYPE_CN                "E0温感类型"
#define NOZZLE_ADJUST_TYPE_CN         "PID调温"
#define NOZZLE_MIN_TEMPERATURE_CN     "最低温度"
#define NOZZLE_MAX_TEMPERATURE_CN     "最高温度"
#define EXTRUD_MIN_TEMPER_CN          "最低挤出温度"

#define HOTBED_CONF_TITLE_CN          "机器参数>热床设置"
#define HOTBED_ADJUST_CN              "PID调温"
#define HOTBED_MIN_TEMPERATURE_CN     "最低温度"
#define HOTBED_MAX_TEMPERATURE_CN     "最高温度"

#define MOTOR_CONF_TITLE_CN           "机器参数>电机设置"
#define MAXFEEDRATE_CONF_CN           "最大速度设置"
#define ACCELERATION_CONF_CN          "加速度设置"
#define JERKCONF_CN                   "突变速度设置"
#define STEPSCONF_CN                  "脉冲设置"
#define TMC_CURRENT_CN                "TMC 驱动电流设置"
#define TMC_STEP_MODE_CN              "TMC 驱动模式设置"
#define MOTORDIRCONF_CN               "电机方向设置"
#define HOMEFEEDRATECONF_CN           "归零速度设置"
#define HOMING_SENSITIVITY_CONF_CN    "无限位回零灵敏度调节"

#define MAXFEEDRATE_CONF_TITLE_CN     "机器参数>最大速度"
#define X_MAXFEEDRATE_CN              "X轴最大速度"
#define Y_MAXFEEDRATE_CN              "Y轴最大速度"
#define Z_MAXFEEDRATE_CN              "Z轴最大速度"
#define E0_MAXFEEDRATE_CN             "E0轴最大速度"
#define E1_MAXFEEDRATE_CN             "E1轴最大速度"

#define ACCELERATION_CONF_TITLE_CN    "机器参数>加速度"
#define PRINT_ACCELERATION_CN         "打印加速度"
#define RETRACT_ACCELERATION_CN       "回抽加速度"
#define TRAVEL_ACCELERATION_CN        "空载加速度"
#define X_ACCELERATION_CN             "X轴加速度"
#define Y_ACCELERATION_CN             "Y轴加速度"
#define Z_ACCELERATION_CN             "Z轴加速度"
#define E0_ACCELERATION_CN            "E0轴加速度"
#define E1_ACCELERATION_CN            "E1轴加速度"

#define JERK_CONF_TITLE_CN            "机器参数>突变速度"
#define X_JERK_CN                     "X轴突变速度"
#define Y_JERK_CN                     "Y轴突变速度"
#define Z_JERK_CN                     "Z轴突变速度"
#define E_JERK_CN                     "E轴突变速度"

#define STEPS_CONF_TITLE_CN           "机器参数>脉冲设置"
#define X_STEPS_CN                    "X轴脉冲"
#define Y_STEPS_CN                    "Y轴脉冲"
#define Z_STEPS_CN                    "Z轴脉冲"
#define E0_STEPS_CN                   "E0轴脉冲"
#define E1_STEPS_CN                   "E1轴脉冲"

#define TMC_CURRENT_CONF_TITLE_CN     "机器参数>TMC电流设置"
#define X_TMC_CURRENT_CN              "X轴电流(毫安)"
#define Y_TMC_CURRENT_CN              "Y轴电流(毫安)"
#define Z_TMC_CURRENT_CN              "Z轴电流(毫安)"
#define E0_TMC_CURRENT_CN             "E0轴电流(毫安)"
#define E1_TMC_CURRENT_CN             "E1轴电流(毫安)"

#define TMC_MODE_CONF_TITLE_CN        "机器参数>TMC模式设置"
#define X_TMC_MODE_CN                 "X轴是否使能静音模式"
#define Y_TMC_MODE_CN                 "Y轴是否使能静音模式"
#define Z_TMC_MODE_CN                 "Z轴是否使能静音模式"
#define E0_TMC_MODE_CN                "E0轴是否使能静音模式"
#define E1_TMC_MODE_CN                "E1轴是否使能静音模式"

#define MOTORDIR_CONF_TITLE_CN        "机器参数>电机方向"
#define X_MOTORDIR_CN                 "X轴电机方向"
#define Y_MOTORDIR_CN                 "Y轴电机方向"
#define Z_MOTORDIR_CN                 "Z轴电机方向"
#define E0_MOTORDIR_CN                "E0轴电机方向"
#define E1_MOTORDIR_CN                "E1轴电机方向"
#define INVERT_P_CN                   "正向"
#define INVERT_N_CN                   "反向"

#define HOMEFEEDRATE_CONF_TITLE_CN    "机器参数>归零速度"
#define X_HOMESPEED_CN                "XY轴归零速度"
#define Y_HOMESPEED_CN                "Y轴归零速度"
#define Z_HOMESPEED_CN                "Z轴归零速度"

#define ADVANCED_CONF_TITLE_CN        "机器参数>高级设置"
#define PWROFF_DECTION_CN             "断电检测模块"
#define PWROFF_AFTER_PRINT_CN         "启动打完关机功能"
#define HAVE_UPS_CN                   "机器配备UPS电源"
#define Z2_AND_Z2ENDSTOP_CONF_CN      "双Z轴双限位功能设置"
#define ENABLE_PINS_CONF_CN           "电机使能脚电平设置"
#define WIFI_SETTINGS_CN              "Wi-Fi参数设置"
#define ENCODER_SETTINGS_CN           "旋钮设置"

#define Z2_AND_Z2ENDSTOP_CONF_TITLE_CN  "双z双限位设置"
#define Z2_ENABLE_CN                    "启用Z2轴"
#define Z2_ENDSTOP_CN                   "启用Z2限位"
#define Z2_PORT_CN                      "Z2限位接口"

#define ENABLE_PINS_CONF_TITLE_CN       "电机使能脚电平"
#define X_ENABLE_PINS_INVERT_CN         "X轴电机使能电平"
#define Y_ENABLE_PINS_INVERT_CN         "Y轴电机使能电平"
#define Z_ENABLE_PINS_INVERT_CN         "Z轴电机使能电平"
#define E_ENABLE_PINS_INVERT_CN         "E轴电机使能电平"

#define PAUSE_POSITION_CN               "打印暂停位置设置"
#define PAUSE_POSITION_X_CN             "X轴暂停位置(绝对位置,-1无效)"
#define PAUSE_POSITION_Y_CN             "Y轴暂停位置(绝对位置,-1无效)"
#define PAUSE_POSITION_Z_CN             "Z轴暂停位置(相对位置,-1无效)"
#define WIFI_SETTINGS_TITLE_CN          "机器参数>Wi-Fi设置"
#define WIFI_SETTINGS_MODE_CN           "Wi-Fi 模式"
#define WIFI_SETTINGS_NAME_CN           "Wi-Fi 名称: "
#define WIFI_SETTINGS_PASSWORD_CN       "Wi-Fi 密码: "
#define WIFI_SETTINGS_CLOUD_CN          "是否使用云服务?"
#define WIFI_SETTINGS_CONFIG_CN         "配置"
#define WIFI_SETTINGS_EDIT_CN           "编辑"
#define WIFI_CONFIG_TIPS_CN             "进行Wi-Fi配置?"

#define OFFSET_TITLE_CN                 "机器参数>偏移设置"
#define OFFSET_X_CN                     "X轴与调平开关偏移"
#define OFFSET_Y_CN                     "Y轴与调平开关偏移"
#define OFFSET_Z_CN                     "Z轴与调平开关偏移"

#define HOMING_SENSITIVITY_CONF_TITLE_CN      "机器参数>灵敏度调节"
#define X_SENSITIVITY_CN                      "X轴灵敏度"
#define Y_SENSITIVITY_CN                      "Y轴灵敏度"
#define Z_SENSITIVITY_CN                      "Z轴灵敏度"
#define Z2_SENSITIVITY_CN                     "Z2轴灵敏度"

#define ENCODER_CONF_TITLE_CN                 "机器参数>旋钮设置"
#define ENCODER_CONF_TEXT_CN                  "是否使用旋钮功能?"

#define TOOL_TEXT_CN                "工具"
#define PREHEAT_TEXT_CN             "预热"
#define MOVE_TEXT_CN                "移动"
#define HOME_TEXT_CN                "回零"
#define PRINT_TEXT_CN               "打印"
#define EXTRUDE_TEXT_CN             "挤出"
#define LEVELING_TEXT_CN            "调平"
#define AUTO_LEVELING_TEXT_CN       "自动调平"
#define SET_TEXT_CN                 "设置"
#define MORE_TEXT_CN                "更多"

#define ADD_TEXT_CN                 "增加"
#define DEC_TEXT_CN                 "减少"
#define EXTRUDER_1_TEXT_CN          "喷头1"
#define EXTRUDER_2_TEXT_CN          "喷头2"
#define HEATBED_TEXT_CN             "热床"
#define TEXT_1C_CN                  "1℃"
#define TEXT_5C_CN                  "5℃"
#define TEXT_10C_CN                 "10℃"
#define CLOSE_TEXT_CN               "关闭"

#define BACK_TEXT_CN                "返回"

#define TOOL_PREHEAT_CN             "预热"
#define TOOL_EXTRUDE_CN             "挤出"
#define TOOL_MOVE_CN                "移动"
#define TOOL_HOME_CN                "回零"
#define TOOL_LEVELING_CN            "调平"
#define TOOL_AUTO_LEVELING_CN       "自动调平"
#define TOOL_FILAMENT_CN            "换料"
#define TOOL_MORE_CN                "更多"

#define AXIS_X_ADD_TEXT_CN          "X+"
#define AXIS_X_DEC_TEXT_CN          "X-"
#define AXIS_Y_ADD_TEXT_CN          "Y+"
#define AXIS_Y_DEC_TEXT_CN          "Y-"
#define AXIS_Z_ADD_TEXT_CN          "Z+"
#define AXIS_Z_DEC_TEXT_CN          "Z-"
#define TEXT_01MM_CN                "0.1mm"
#define TEXT_1MM_CN                 "1mm"
#define TEXT_10MM_CN                "10mm"

#define HOME_X_TEXT_CN              "X"
#define HOME_Y_TEXT_CN              "Y"
#define HOME_Z_TEXT_CN              "Z"
#define HOME_ALL_TEXT_CN            "回零"
#define HOME_STOPMOVE_CN            "急停"

#define PAGE_UP_TEXT_CN             "上一页"
#define PAGE_DOWN_TEXT_CN           "下一页"

#define EXTRUDER_IN_TEXT_CN         "进料"
#define EXTRUDER_OUT_TEXT_CN        "退料"
#define EXTRUDE_1MM_TEXT_CN         "1mm"
#define EXTRUDE_5MM_TEXT_CN         "5mm"
#define EXTRUDE_10MM_TEXT_CN        "10mm"
#define EXTRUDE_LOW_SPEED_TEXT_CN   "低速"
#define EXTRUDE_MEDIUM_SPEED_TEXT_CN "常速"
#define EXTRUDE_HIGH_SPEED_TEXT_CN  "高速"

#define LEVELING_POINT1_TEXT_CN   "第一点"
#define LEVELING_POINT2_TEXT_CN   "第二点"
#define LEVELING_POINT3_TEXT_CN   "第三点"
#define LEVELING_POINT4_TEXT_CN   "第四点"
#define LEVELING_POINT5_TEXT_CN   "第五点"

#define FILESYS_TEXT_CN           "文件系统"
#define WIFI_TEXT_CN              "WIFI"
#define FAN_TEXT_CN               "风扇"
#define ABOUT_TEXT_CN             "关于"
#define BREAK_POINT_TEXT_CN       "断点续打"
#define FILAMENT_TEXT_CN          "换料"
#define LANGUAGE_TEXT_CN          "语言"
#define MOTOR_OFF_TEXT_CN         "关闭电机"
#define MOTOR_OFF_XY_TEXT_CN      "关闭XY"
#define SHUTDOWN_TEXT_CN          "关机"
#define MACHINE_PARA_CN           "机器参数"
#define EEPROM_SETTINGS_CN        "Eeprom设置"

#define U_DISK_TEXT_CN            "U盘"
#define SD_CARD_TEXT_CN           "SD卡"
#define WIFI_NAME_TEXT_CN         "无线网络:"
#define WIFI_KEY_TEXT_CN          "密码: "
#define WIFI_IP_TEXT_CN           "IP: "
#define WIFI_AP_TEXT_CN           "状态: AP"
#define WIFI_STA_TEXT_CN          "状态: STA"
#define WIFI_CONNECTED_TEXT_CN    "已连接"
#define WIFI_DISCONNECTED_TEXT_CN "未连接"
#define WIFI_EXCEPTION_TEXT_CN    "模块异常"
#define CLOUD_TEXT_CN             "云服务"
#define CLOUD_BIND_CN             "已绑定"
#define CLOUD_UNBIND_CN           "解绑"
#define CLOUD_UNBINDING_CN        "解绑中"
#define CLOUD_DISCONNECTED_CN     "未连接"
#define CLOUD_UNBINDED_CN         "未绑定"
#define CLOUD_BINDED_CN           "已绑定"
#define CLOUD_DISABLE_CN          "已禁用"

#define FAN_ADD_TEXT_CN           "增加"
#define FAN_DEC_TEXT_CN           "减少"
#define FAN_OPEN_TEXT_CN          "100%"
#define FAN_HALF_TEXT_CN          "50%"
#define FAN_CLOSE_TEXT_CN         "关闭"
#define FAN_TIPS1_TEXT_CN         "风扇"
#define FAN_TIPS2_TEXT_CN         "FAN\nClose"

#define FILAMENT_IN_TEXT_CN       "进料"
#define FILAMENT_OUT_TEXT_CN      "退料"
#define FILAMENT_EXT0_TEXT_CN     "喷头1"
#define FILAMENT_EXT1_TEXT_CN     "喷头2"
#define FILAMENT_HEAT_TEXT_CN     "预热"
#define FILAMENT_STOP_TEXT_CN     "停止"
#define FILAMENT_CHANGE_TEXT_CN   "待打印机暂停后,\n请按<进料>或<退料>"

#define FILAMENT_DIALOG_LOAD_HEAT_TIPS_CN       "准备进料,正在加热,请稍等!"
#define FILAMENT_DIALOG_UNLOAD_HEAT_TIPS_CN     "准备退料,正在加热,请稍等!"
#define FILAMENT_DIALOG_LOAD_CONFIRM1_TIPS_CN   "加热完成,请装载耗材后,按<确定>开始进料!"
#define FILAMENT_DIALOG_LOAD_CONFIRM2_TIPS_CN   "请装载耗材,按<确定>开始进料!"
#define FILAMENT_DIALOG_UNLOAD_CONFIRM_TIPS_CN  "加热完成,请按<确定>开始退料!"
#define FILAMENT_DIALOG_LOADING_TIPS_CN         "正在进料,请等待耗材加载完成!"
#define FILAMENT_DIALOG_UNLOADING_TIPS_CN       "正在退料,请等待耗材卸载完成!"
#define FILAMENT_DIALOG_LOAD_COMPLETE_TIPS_CN   "进料完成,请按<确定>返回"
#define FILAMENT_DIALOG_UNLOAD_COMPLETE_TIPS_CN "退料完成,请按<确定>返回"

#define FILAMENT_TIPS3_TEXT_CN      "正在进料"
#define FILAMENT_TIPS4_TEXT_CN      "正在退料"
#define FILAMENT_TIPS5_TEXT_CN      "温度太低,请先预热"
#define FILAMENT_TIPS6_TEXT_CN      "换料完成"

#define PRE_HEAT_EXT_TEXT_CN        "喷头"
#define PRE_HEAT_BED_TEXT_CN        "热床"

#define FILE_LOADING_CN             "正在载入......"
#define NO_FILE_AND_CHECK_CN        "无文件!请插入sd卡或u盘!"
#define NO_FILE_CN                  "无文件!"

#define EXTRUDER_TEMP_TEXT_CN       "温度"
#define EXTRUDER_E_LENGTH1_TEXT_CN  "喷头"
#define EXTRUDER_E_LENGTH2_TEXT_CN  "喷头"
#define EXTRUDER_E_LENGTH3_TEXT_CN  "喷头"

#define ABOUT_TYPE_TEXT_CN          "Type: "
#define ABOUT_VERSION_TEXT_CN       "Firmware: "
#define ABOUT_WIFI_TEXT_CN          "Wifi: "

#define PRINTING_OPERATION_CN       "操作"
#define PRINTING_PAUSE_CN           "暂停"
#define PRINTING_TEMP_CN            "温度"
#define PRINTING_CHANGESPEED_CN     "变速"
#define PRINTING_RESUME_CN          "恢复"
#define PRINTING_STOP_CN            "停止"
#define PRINTING_MORE_CN            "更多"
#define PRINTING_EXTRUDER_CN        "挤出"
#define PRINTING_MOVE_CN            "移动"

#define EXTRUDER_SPEED_CN           "挤出"
#define MOVE_SPEED_CN               "移动"
#define EXTRUDER_SPEED_STATE_CN     "挤出速度"
#define MOVE_SPEED_STATE_CN         "移动速度"
#define STEP_1PERCENT_CN            "1%"
#define STEP_5PERCENT_CN            "5%"
#define STEP_10PERCENT_CN           "10%"

#define TITLE_READYPRINT_CN         "准备打印"
#define TITLE_PREHEAT_CN            "预热"
#define TITLE_MOVE_CN               "移动"
#define TITLE_HOME_CN               "回零"
#define TITLE_EXTRUDE_CN            "挤出"
#define TITLE_LEVELING_CN           "调平"
#define TITLE_SET_CN                "设置"
#define TITLE_MORE_CN               "更多"
#define TITLE_CHOOSEFILE_CN         "选择文件"
#define TITLE_PRINTING_CN           "正在打印"
#define TITLE_OPERATION_CN          "操作"
#define TITLE_ADJUST_CN             "调整"
#define TITLE_WIRELESS_CN           "无线网络"
#define TITLE_FILAMENT_CN           "换料"
#define TITLE_ABOUT_CN              "关于"
#define TITLE_FAN_CN                "风扇"
#define TITLE_LANGUAGE_CN           "语言"
#define TITLE_PAUSE_CN              "暂停"
#define TITLE_CHANGESPEED_CN        "变速"
#define TITLE_CLOUD_TEXT_CN         "云服务"
#define TITLE_DIALOG_CONFIRM_CN     "确认"
#define TITLE_FILESYS_CN            "文件系统"

#define AUTO_SHUTDOWN_CN            "自动关机"
#define MANUAL_SHUTDOWN_CN          "手动关机"

#define DIALOG_CONFIRM_CN           "确定"
#define DIALOG_CANCLE_CN            "取消"
#define DIALOG_OK_CN                "确认"
#define DIALOG_RESET_CN             "重置"
#define DIALOG_DISABLE_CN           "禁用"
#define DIALOG_PRINT_MODEL_CN       "打印模型?"
#define DIALOG_CANCEL_PRINT_CN      "停止打印?"
#define DIALOG_RETRY_CN             "重试"
#define DIALOG_STOP_CN              "停止"
#define DIALOG_REPRINT_FROM_BREAKPOINT_CN   "从断点续打?"
#define DIALOG_ERROR_TIPS1_CN       "错误:找不到文件,请插入sd卡/u盘!"
#define DIALOG_ERROR_TIPS2_CN       "错误:通信失败,请检查波特率或主板硬件!"
#define DIALOG_ERROR_TIPS3_CN       "错误:文件名或文件路径太长 !"
#define DIALOG_CLOSE_MACHINE_CN     "正在关机......"
#define DIALOG_UNBIND_PRINTER_CN    "解除绑定?"
#define DIALOG_FILAMENT_NO_PRESS_CN "请先装载耗材!"
#define DIALOG_PRINT_FINISH_CN      "打印完成!"
#define DIALOG_PRINT_TIME_CN        "打印时间: "
#define DIALOG_REPRINT_CN           "再打印一次"
#define DIALOG_WIFI_ENABLE_TIPS_CN  "wifi模块正在配置中,请稍等......"
#define DIALOG_PAUSING_TIPS_CN      "机器暂停中..."

#define TEXT_VALUE_CN               "%d℃/%d℃"
#define EXTRUDE_TEXT_VALUE_T_CN     ": %d℃"
#define WIFI_RECONNECT_TEXT_CN      "重新连接"

#define PRINTING_GBK                "正在打印"
#define PRINTING_OPERATION_GBK      "操作"
#define PRINTING_PAUSE_GBK          "暂停"

#define MESSAGE_PAUSING_CN        "暂停中..."
#define MESSAGE_CHANGING_CN       "等待换料开始..."
#define MESSAGE_UNLOAD_CN         "退料中,请稍等..."
#define MESSAGE_WAITING_CN        "点击按钮恢复打印"
#define MESSAGE_INSERT_CN         "装载耗材后,点击按钮开始打印"
#define MESSAGE_LOAD_CN           "进料中,请稍等..."
#define MESSAGE_PURGE_CN          "等待挤出..."
#define MESSAGE_RESUME_CN         "等待恢复打印..."
#define MESSAGE_HEAT_CN           "按下按钮,加热喷头"
#define MESSAGE_HEATING_CN        "喷头加热中,请等待..."
#define MESSAGE_OPTION_CN         "挤出更多还是继续打印?"
#define MESSAGE_PURGE_MORE_CN     "挤出"
#define MESSAGE_CONTINUE_PRINT_CN "打印"
#define EEPROM_SETTINGS_TITLE_CN  "EEPROM 设置"
#define EEPROM_SETTINGS_STORE_CN  "保存参数至EEPROM"
#define EEPROM_SETTINGS_READ_CN   "读取EEPROM参数"
#define EEPROM_SETTINGS_REVERT_CN "恢复默认参数"

#define EEPROM_STORE_TIPS_CN  "是否保存参数到EEPROM?"
#define EEPROM_READ_TIPS_CN   "是否使用EEPROM参数?"
#define EEPROM_REVERT_TIPS_CN "是否恢复默认参数?"

#define MORE_CUSTOM1_TEXT_CN  USER_DESC_1
#define MORE_CUSTOM2_TEXT_CN  USER_DESC_2
#define MORE_CUSTOM3_TEXT_CN  USER_DESC_3
#define MORE_CUSTOM4_TEXT_CN  USER_DESC_4
#define MORE_CUSTOM5_TEXT_CN  USER_DESC_5
#define MORE_CUSTOM6_TEXT_CN  USER_DESC_6
#define MORE_CUSTOM7_TEXT_CN  USER_DESC_7
