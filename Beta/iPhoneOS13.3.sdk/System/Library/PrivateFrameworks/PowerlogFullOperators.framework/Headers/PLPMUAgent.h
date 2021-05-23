/*
 Image: /System/Library/PrivateFrameworks/PowerlogFullOperators.framework/PowerlogFullOperators
 */

#import <PLAgent.h>

@class NSMutableArray, NSMutableDictionary, PLEntryNotificationOperatorComposition;

@interface PLPMUAgent : PLAgent

{
    struct __IOHIDEventSystemClient *hidEventSystem;
    NSMutableDictionary *matchingSensors;
    NSMutableArray *sensorNamesC;
    NSMutableArray *sensorNamesV;
    PLEntryNotificationOperatorComposition *_batteryLevelChanged;
}

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;

+ (void)load;
+ (id)defaults;
+ (id)entryAggregateDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)railDefinitions;
+ (id)accountingGroupDefinitions;

- (id)init;
- (void)log;
- (void)initOperatorDependancies;
- (void)logEventPointSensors;

@end
