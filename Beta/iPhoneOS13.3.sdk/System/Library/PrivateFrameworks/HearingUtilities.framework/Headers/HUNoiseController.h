/*
 Image: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
 */

#import <NSObject.h>

@class ADAMAudioDataReceiver, AXDispatchTimer, HKCategorySample, HKHealthStore, NSDate, NSMutableArray, UNUserNotificationCenter;

@protocol OS_dispatch_queue;

@interface HUNoiseController : NSObject

{
    int _measurementSuspensionNotifyToken;
    _Bool _measurementEnabled;
    _Bool _notified;
    _Bool _muted;
    _Bool _notified80;
    _Bool _notified85;
    _Bool _notified90;
    float _slowLeq;
    float _fastLeq;
    float _sampleDuration;
    AXDispatchTimer *_edDummyDataTimer;
    AXDispatchTimer *_adamSuspendedTimer;
    NSMutableArray *_leqBuffer;
    unsigned long long _thresholdLevel;
    NSDate *_timeNotified;
    NSMutableArray *_leqBuffer80Threshold;
    NSMutableArray *_leqBuffer85Threshold;
    NSMutableArray *_leqBuffer90Threshold;
    NSDate *_timeNotified80;
    NSDate *_timeNotified85;
    NSDate *_timeNotified90;
    NSObject<OS_dispatch_queue> *_dataQueue;
    ADAMAudioDataReceiver *_edDataReceiver;
    HKHealthStore *_healthStore;
    HKCategorySample *_notificationSample;
    UNUserNotificationCenter *_userNotificationCenter;
}

@property (retain, nonatomic) AXDispatchTimer *edDummyDataTimer;
@property (retain, nonatomic) AXDispatchTimer *adamSuspendedTimer;
@property (retain, nonatomic) NSMutableArray *leqBuffer;
@property (nonatomic) float slowLeq;
@property (nonatomic) float fastLeq;
@property (nonatomic, getter=isMeasurementEnabled) _Bool measurementEnabled;
@property (nonatomic) unsigned long long thresholdLevel;
@property (retain, nonatomic) NSDate *timeNotified;
@property (nonatomic) float sampleDuration;
@property (nonatomic, getter=isNotified) _Bool notified;
@property (nonatomic, getter=isMuted) _Bool muted;
@property (retain, nonatomic) NSMutableArray *leqBuffer80Threshold;
@property (retain, nonatomic) NSMutableArray *leqBuffer85Threshold;
@property (retain, nonatomic) NSMutableArray *leqBuffer90Threshold;
@property (nonatomic, getter=isNotified80) _Bool notified80;
@property (nonatomic, getter=isNotified85) _Bool notified85;
@property (nonatomic, getter=isNotified90) _Bool notified90;
@property (retain, nonatomic) NSDate *timeNotified80;
@property (retain, nonatomic) NSDate *timeNotified85;
@property (retain, nonatomic) NSDate *timeNotified90;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dataQueue;
@property (retain, nonatomic) ADAMAudioDataReceiver *edDataReceiver;
@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) HKCategorySample *notificationSample;
@property (nonatomic, readonly) UNUserNotificationCenter *userNotificationCenter;

+ (id)sharedController;
+ (_Bool)deviceSupportsEnvironmentalDosimetry;

- (id)init;
- (void)dealloc;
- (id)registerForEnvironmentalDosimetryUpdates:(id)arg1;
- (void)_clearCachedValues;
- (void)_logNoiseEnabledStateToPowerlog:(_Bool)arg1;
- (id)measurementConfigurationWithDuration:(unsigned int)arg1 period:(unsigned int)arg2 config:(unsigned long long)arg3;
- (id)measurementConfigurationWithDuration:(unsigned int)arg1 period:(unsigned int)arg2;
- (void)subscribeToSharedNotifications;
- (void)_sendUpdateMessageForCurrentValues;
- (void)_stopReceivingAudioDosageSamples;
- (void)restartADAMTimer;
- (void)applyNotificationLogicForSPL:(float)arg1 withDuration:(float)arg2;
- (void)applyAnalyticsNotificationLogicForSPL:(float)arg1 withDuration:(float)arg2;
- (void)checkToResetNotificationsForSPL:(float)arg1 withDuration:(float)arg2 andBuffer:(id)arg3 forTime:(float)arg4;
- (void)checkToSurfaceNotificationForSPL:(float)arg1 withDuration:(float)arg2 andBuffer:(id)arg3 forTime:(float)arg4;
- (void)maintainCircularBuffer:(id)arg1 forTime:(float)arg2;
- (float)calculateLeqForBuffer:(id)arg1;
- (unsigned long long)alertTypeFromLevel:(float)arg1;
- (void)showNotificationForAlertType:(unsigned long long)arg1;
- (void)writeNotificationSampleToHKWithSPL:(float)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (void)checkToResetAnalyticsNotificationsForSPL:(float)arg1 withDuration:(float)arg2 andBuffer:(id)arg3 forTime:(float)arg4 andThreshold:(long long)arg5;
- (void)checkToSurfaceAnalyticsNotificationForSPL:(float)arg1 withDuration:(float)arg2 andBuffer:(id)arg3 forTime:(float)arg4 andThreshold:(long long)arg5;
- (void)readEnvironmentalDosimetryLevels;

@end
