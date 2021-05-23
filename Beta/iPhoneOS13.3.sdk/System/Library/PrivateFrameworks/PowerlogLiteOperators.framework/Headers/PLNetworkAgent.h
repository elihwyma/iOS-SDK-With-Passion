/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogCore/PLAgent.h>

@class PLEntryNotificationOperatorComposition, PLSemaphore;

@interface PLNetworkAgent : PLAgent

{
    PLEntryNotificationOperatorComposition *_batteryLevelChanged;
    PLEntryNotificationOperatorComposition *_canSleep;
    PLSemaphore *_canSleepSemaphore;
}

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;
@property (retain) PLEntryNotificationOperatorComposition *canSleep;
@property (retain) PLSemaphore *canSleepSemaphore;

+ (void)load;
+ (id)defaults;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)railDefinitions;
+ (id)accountingGroupDefinitions;

- (id)init;
- (void)log;
- (void)initOperatorDependancies;
- (void)logEventBackwardCumulativeNetworkUsage;

@end
