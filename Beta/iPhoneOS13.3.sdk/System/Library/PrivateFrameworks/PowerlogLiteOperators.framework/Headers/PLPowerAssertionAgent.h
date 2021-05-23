/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogCore/PLAgent.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSSet, PLCFNotificationOperatorComposition, PLEntryNotificationOperatorComposition, PLNSNotificationOperatorComposition, PLTimer;

@interface PLPowerAssertionAgent : PLAgent

{
    _Bool _assertionBufferFullNotificationActive;
    _Bool _firstBufferDrain;
    PLCFNotificationOperatorComposition *_assertionNotification;
    PLCFNotificationOperatorComposition *_assertionBufferFullNotification;
    PLTimer *_assertionBufferFullNotificationRearmTimer;
    NSMutableArray *_assertionBufferNotificationTracking;
    PLEntryNotificationOperatorComposition *_batteryLevelNotificiations;
    PLEntryNotificationOperatorComposition *_wakeNotification;
    PLEntryNotificationOperatorComposition *_canSleepNotification;
    PLNSNotificationOperatorComposition *_dailyTaskNotification;
    PLCFNotificationOperatorComposition *_flushAssertionBufferCFNotification;
    PLTimer *_runQueryTimer;
    PLTimer *_assertionSnapShotTimer;
    long long _aggregateMaxPIDCount;
    long long _aggregteZeroDeltaCount;
    NSMutableDictionary *_assertionAggregatedLastSamplePLDataStructure;
    NSMutableDictionary *_assertionAggregatedLastSample;
    NSDictionary *_startEndActionsToEnum;
    NSDictionary *_assertTypeToEnum;
    NSSet *_logAssertNameForActions;
}

@property (retain) PLCFNotificationOperatorComposition *assertionNotification;
@property (retain) PLCFNotificationOperatorComposition *assertionBufferFullNotification;
@property (retain) PLTimer *assertionBufferFullNotificationRearmTimer;
@property (nonatomic) _Bool assertionBufferFullNotificationActive;
@property (retain) NSMutableArray *assertionBufferNotificationTracking;
@property (retain) PLEntryNotificationOperatorComposition *batteryLevelNotificiations;
@property (retain) PLEntryNotificationOperatorComposition *wakeNotification;
@property (retain) PLEntryNotificationOperatorComposition *canSleepNotification;
@property (retain) PLNSNotificationOperatorComposition *dailyTaskNotification;
@property (retain) PLCFNotificationOperatorComposition *flushAssertionBufferCFNotification;
@property (retain) PLTimer *runQueryTimer;
@property (retain) PLTimer *assertionSnapShotTimer;
@property (nonatomic) _Bool assertionSnapshotTimerActive;
@property _Bool firstBufferDrain;
@property long long aggregateMaxPIDCount;
@property long long aggregteZeroDeltaCount;
@property (retain) NSMutableDictionary *assertionAggregatedLastSamplePLDataStructure;
@property (retain, nonatomic) NSMutableDictionary *assertionAggregatedLastSample;
@property (readonly) NSDictionary *startEndActionsToEnum;
@property (readonly) NSDictionary *assertTypeToEnum;
@property (readonly) NSSet *logAssertNameForActions;

+ (void)load;
+ (id)defaults;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventPointDefinitionSnapshotReason;
+ (id)entryEventPointDefinitionBufferStatus;
+ (id)entryEventPointDefinitionAggregateReset;
+ (id)entryEventForwardDefinitionAssertion;

- (id)init;
- (void)log;
- (void)initOperatorDependancies;
- (id)startEndActionsToEnumMapping;
- (id)assertTypeToEnumMapping;
- (void)resetIOPMSetAssertionActivityAggregateWithReason:(short)arg1 withPidCount:(int)arg2;
- (void)logEventForwardAssertionWithReason:(id)arg1 asSnapshot:(_Bool)arg2;
- (void)logInterval:(id)arg1;
- (void)checkAssertionBufferFullNotificationRate;
- (void)setAssertionBufferFullNotificationActive:(_Bool)arg1 withReason:(id)arg2;
- (void)logAggregatedAssertionActivityPLDataStructure;
- (void)logSnapshotAtMidnight:(id)arg1;
- (void)logEventPointAggregateResetWithReason:(short)arg1 withPidCount:(int)arg2;
- (void)logEventForwardAssertion;
- (id)sanitizeAssertionNameForEntry:(id)arg1;
- (void)logSnapshot:(id)arg1;
- (id)bundleIDForAssertionProcessPID:(int)arg1;
- (void)resetIOPMSetAssertionActivityAggregatePLDataStructureWithReason:(short)arg1 withPidCount:(int)arg2;
- (void)logAggregatedAssertionActivity;

@end
