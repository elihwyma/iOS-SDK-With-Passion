/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogCore/PLAgent.h>

@class NSDate, NSString, PLCFNotificationOperatorComposition, PLEntryNotificationOperatorComposition;

@interface PLWifiAgent : PLAgent

{
    PLCFNotificationOperatorComposition *_notificationWiFiChanged;
    struct __WiFiManagerClient *_wifiManager;
    struct __WiFiDeviceClient *_wifiDevice;
    struct __WiFiDeviceClient *_wifiAwdlDevice;
    struct __WiFiDeviceClient *_wifiHotspotDevice;
    PLEntryNotificationOperatorComposition *_batteryLevelChanged;
    PLEntryNotificationOperatorComposition *_sbcLevelChanged;
    PLEntryNotificationOperatorComposition *_deviceWake;
    unsigned long long _lastLoggedTimestamp;
    unsigned long long _locationScanDuration;
    unsigned long long _pipelineScanDuration;
    unsigned long long _autoJoinScanDuration;
    unsigned long long _setupScanDuration;
    unsigned long long _unknownScanDuration;
    NSString *_wifiChipset;
    NSString *_wifiManufacturer;
    unsigned long long _remainingAllowedRSSIEntryCount;
    double _wifi_segment_power_data;
    double _wifi_segment_power_idle;
    double _wifi_segment_power_location;
    double _wifi_segment_power_pipeline;
    NSDate *_wifi_segment_lastWrittenDate;
    double _wifi_segment_lastWrittenTimestamp;
    NSDate *_wifi_segment_date;
    double _wifi_segment_timestamp;
}

@property (readonly) PLCFNotificationOperatorComposition *notificationWiFiChanged;
@property (nonatomic) struct __WiFiManagerClient *wifiManager;
@property (nonatomic) struct __WiFiDeviceClient *wifiDevice;
@property (nonatomic) struct __WiFiDeviceClient *wifiAwdlDevice;
@property (nonatomic) struct __WiFiDeviceClient *wifiHotspotDevice;
@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;
@property (retain) PLEntryNotificationOperatorComposition *sbcLevelChanged;
@property (retain) PLEntryNotificationOperatorComposition *deviceWake;
@property unsigned long long lastLoggedTimestamp;
@property unsigned long long locationScanDuration;
@property unsigned long long pipelineScanDuration;
@property unsigned long long autoJoinScanDuration;
@property unsigned long long setupScanDuration;
@property unsigned long long unknownScanDuration;
@property (readonly) NSString *wifiChipset;
@property (readonly) NSString *wifiManufacturer;
@property unsigned long long remainingAllowedRSSIEntryCount;
@property double wifi_segment_power_data;
@property double wifi_segment_power_idle;
@property double wifi_segment_power_location;
@property double wifi_segment_power_pipeline;
@property (retain) NSDate *wifi_segment_lastWrittenDate;
@property double wifi_segment_lastWrittenTimestamp;
@property (retain) NSDate *wifi_segment_date;
@property double wifi_segment_timestamp;

+ (void)load;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventForwardDefinitionPowerState;
+ (id)entryEventPointDefinitionWake;
+ (id)entryEventPointDefinitionJoin;
+ (_Bool)isNonUDMMac;
+ (id)entryEventForwardDefinitionAWDLState;
+ (id)entryEventForwardDefinitionHotspotState;
+ (id)entryEventForwardDefinitionModuleInfo;
+ (id)entryEventForwardDefinitionWifiAssist;
+ (id)entryEventForwardDefinitionRSSI;
+ (id)entryEventBackwardDefinitionBeaconProfile;
+ (id)entryEventBackwardDefinitionCumulativeBasic;
+ (id)entryEventBackwardDefinitionDiffBasic;
+ (id)entryEventBackwardDefinitionUserScan;
+ (id)entryEventBackwardDefinitionHotspotPowerStats;

- (id)init;
- (void)log;
- (void)initOperatorDependancies;
- (void)findWifiDevice;
- (void)logEventForwardModuleInfo;
- (void)setWiFiAWDLDevice:(struct __WiFiDeviceClient *)arg1;
- (void)setWiFiHotspotDevice:(struct __WiFiDeviceClient *)arg1;
- (void)writeModeledPower;
- (void)logEventPointWake;
- (void)logEventForwardWifiAssist:(_Bool)arg1;
- (_Bool)hasWiFi;
- (_Bool)isWowSupported;
- (void)logEventBackwardWifiProperties:(_Bool)arg1;
- (void)logEventPointJoin:(unsigned char)arg1 withStats:(id)arg2;
- (void)logEventBackwardUserScanDuration;
- (void)logEventPointWakeDataFrame:(id)arg1 withParams:(id)arg2 toEntry:(id)arg3;
- (void)logEventPointWakePNO:(id)arg1 withParams:(id)arg2 toEntry:(id)arg3;
- (void)logEventPointWakeLink:(id)arg1 withParams:(id)arg2 toEntry:(id)arg3;
- (id)decodeWifiEventLinkReason:(unsigned int)arg1;
- (unsigned long long)getCurrentChannelWidth:(struct __WiFiNetwork *)arg1;
- (void)logEventBackwardWifiProperties:(id)arg1 withNetworkProperties:(id)arg2 shallModelPower:(_Bool)arg3;
- (_Bool)isWowEnabled;
- (_Bool)isWiFiPowered;
- (void)modelWiFiPower:(id)arg1;
- (void)modelWiFiSegmentPower:(id)arg1 withDataPower:(double)arg2 withIdlePower:(double)arg3 withLocationPower:(double)arg4 withPipelinePower:(double)arg5 withTotalDuration:(double)arg6;
- (id)wifiChipsetQuery;
- (id)wifiManufacturerQuery;
- (void)logFromWiFiNoAvailableCallback:(id)arg1 withAvailability:(_Bool)arg2;
- (void)logFromLinkChangeCallback:(id)arg1 withStats:(id)arg2;
- (void)logFromAJCallback:(id)arg1 withFlag:(unsigned char)arg2 withStats:(id)arg3;
- (void)logEventForwardRSSI:(id)arg1;
- (void)logEventForwardAWDLState:(id)arg1;
- (void)logEventForwardHotspotState:(id)arg1;
- (void)logEventForwardPowerState:(_Bool)arg1;
- (void)logEventBackwardCumulativeProperties;
- (void)logEventBackwardDiffProperties;
- (void)updateEventBackwardUserScanDuration:(id)arg1;

@end
