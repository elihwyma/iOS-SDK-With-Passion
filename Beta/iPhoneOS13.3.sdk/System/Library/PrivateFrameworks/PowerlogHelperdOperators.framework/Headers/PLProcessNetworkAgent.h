/*
 Image: /System/Library/PrivateFrameworks/PowerlogHelperdOperators.framework/PowerlogHelperdOperators
 */

#import <PowerlogCore/PLAgent.h>

@class NSDate, NSDictionary, NSMutableSet, PLCFNotificationOperatorComposition, PLEntryNotificationOperatorComposition, PLMonotonicTimer, UsageFeed;

@interface PLProcessNetworkAgent : PLAgent

{
    struct __NStatManager *_statManagerRef;
    UsageFeed *_usageFeed;
    PLEntryNotificationOperatorComposition *_batteryLevelChanged;
    PLEntryNotificationOperatorComposition *_batteryLevelChangedListenerForNetworkBitmap;
    PLMonotonicTimer *_logUsageTimer;
    NSDictionary *_lastProcessNameToNetworkUsageEntry;
    NSDate *_lastEntryDate;
    NSMutableSet *_processes;
    unsigned long long _lastNetworkBitmapTimestamp;
    PLCFNotificationOperatorComposition *_flushNetworkBitmapsListener;
}

@property struct __NStatManager *statManagerRef;
@property (retain) UsageFeed *usageFeed;
@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;
@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChangedListenerForNetworkBitmap;
@property (retain) PLMonotonicTimer *logUsageTimer;
@property (retain) NSDictionary *lastProcessNameToNetworkUsageEntry;
@property (retain) NSDate *lastEntryDate;
@property (retain) NSMutableSet *processes;
@property unsigned long long lastNetworkBitmapTimestamp;
@property (retain) PLCFNotificationOperatorComposition *flushNetworkBitmapsListener;

+ (void)load;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventPointDefinitionConnection;
+ (id)entryEventForwardDefinitionLowInternet;
+ (id)entryEventBackwardDefinitionUsage;
+ (id)entryEventBackwardDefinitionNetworkBitmap;
+ (id)entryEventIntervalDefinitionUsage;

- (id)init;
- (void)log;
- (void)initOperatorDependancies;
- (void)processesOfInterest:(id)arg1;
- (void)didAddNewSource:(struct __NStatSource *)arg1;
- (_Bool)hasSymptomsLogging;
- (void)logEventBackwardNetworkBitmaps;
- (void)logEventForwardLowInternet;
- (void)didSetCountsBlock:(id)arg1 withCounts:(id)arg2;
- (void)didSetDescriptionBlock:(id)arg1 withDescription:(id)arg2;
- (void)didRemoveSource:(id)arg1;
- (void)transferSource:(id)arg1 fromPID:(id)arg2 toPID:(id)arg3;
- (void)logEventPointConnectionEvent:(short)arg1 forSource:(id)arg2;
- (void)addSource:(id)arg1 toPID:(id)arg2;
- (id)compressNetworkBitmap:(id)arg1;
- (void)logEventBackwardUsage;
- (void)timestampNetConnectEntry:(id)arg1 withEventType:(short)arg2 withSource:(id)arg3;
- (void)logEventBackwardUsageWithOutcome:(id)arg1;
- (void)accountWithNetworkUsageDiffEntries:(id)arg1 withStartDate:(id)arg2 withEndDate:(id)arg3;
- (_Bool)didDeviceReboot;
- (void)aggregateAndLogNetworkBitmaps:(id)arg1 withStartTime:(unsigned long long)arg2 andEndTime:(unsigned long long)arg3;
- (_Bool)outcomeHasDataUsage:(id)arg1;

@end
