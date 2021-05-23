/*
 Image: /System/Library/PrivateFrameworks/PowerlogFullOperators.framework/PowerlogFullOperators
 */

#import <PowerlogFullOperators/PLAWDAuxMetrics.h>

@class PLEntryNotificationOperatorComposition;

@interface PLAWDDisplay : PLAWDAuxMetrics

{
    _Bool _prevDisplayOn;
    _Bool _prevDeviceCharging;
    _Bool _prevMieOn;
    _Bool _prevAlsOn;
    PLEntryNotificationOperatorComposition *_displayEventCallback;
    PLEntryNotificationOperatorComposition *_backlightEventCallback;
    PLEntryNotificationOperatorComposition *_alsUserPreferencesEventCallback;
    PLEntryNotificationOperatorComposition *_batteryEventCallback;
    PLEntryNotificationOperatorComposition *_backlightRailCallback;
    PLEntryNotificationOperatorComposition *_touchEventCallback;
    PLEntryNotificationOperatorComposition *_alsEnabledEventCallback;
    double _displayOnTimeStamp;
    double _mieOnTimeStamp;
    double _bklTimeStamp;
    long long _prevBklBucketIdx;
    double _prevBklChgTimeStamp;
    long long _startTouchEntryId;
    double _bklPowerRailTimeStamp;
    long long _dispSubmitCnt;
    long long _touchSubmitCnt;
    double _prevBklPower;
}

@property (retain) PLEntryNotificationOperatorComposition *displayEventCallback;
@property (retain) PLEntryNotificationOperatorComposition *backlightEventCallback;
@property (retain) PLEntryNotificationOperatorComposition *alsUserPreferencesEventCallback;
@property (retain) PLEntryNotificationOperatorComposition *batteryEventCallback;
@property (retain) PLEntryNotificationOperatorComposition *backlightRailCallback;
@property (retain) PLEntryNotificationOperatorComposition *touchEventCallback;
@property (retain) PLEntryNotificationOperatorComposition *alsEnabledEventCallback;
@property _Bool prevDisplayOn;
@property double displayOnTimeStamp;
@property _Bool prevDeviceCharging;
@property _Bool prevMieOn;
@property double mieOnTimeStamp;
@property double bklTimeStamp;
@property long long prevBklBucketIdx;
@property double prevBklChgTimeStamp;
@property long long startTouchEntryId;
@property double bklPowerRailTimeStamp;
@property long long dispSubmitCnt;
@property long long touchSubmitCnt;
@property _Bool prevAlsOn;
@property double prevBklPower;

+ (id)entryAggregateDefinitions;
+ (id)entryAggregateDefinitionAwdDisplayAndAls;
+ (id)getSharedObjWithOperator:(id)arg1;

- (void)handleBatteryCallback:(id)arg1;
- (void)handleDisplayCallback:(id)arg1;
- (void)initDisplayBacklightAlsStats;
- (void)registerForDisplayAgentNotifications;
- (void)initTouchStats;
- (void)registerForTouchNotifications;
- (void)handleTouchCallback:(id)arg1;
- (void)handleBacklightCallback:(id)arg1;
- (void)handleAlsUserPreferencesCallback:(id)arg1;
- (void)handleAlsEnabledCallback:(id)arg1;
- (void)resetDisplayAlsTable;
- (void)addEntryToDisplayAlsTable:(id)arg1 withValue:(double)arg2;
- (long long)getBklbucketIdx:(long long)arg1 withLux:(long long)arg2;
- (long long)getLuxBucket:(long long)arg1;
- (long long)getUAmpsBucket:(long long)arg1;
- (void)updateDisplayMetrics:(_Bool)arg1 withState:(_Bool)arg2;
- (void)updateMieMetrics:(_Bool)arg1;
- (void)finalizeDisplayAlsTable;
- (void)reInitDisplayBacklightAlsStats;
- (void)startMetricCollection:(id)arg1;
- (void)stopMetricCollection:(id)arg1;
- (void)handleBacklightRailCallback:(id)arg1;
- (_Bool)submitDataToAWDServer:(id)arg1 withAwdConn:(id)arg2;

@end
