/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogCore/PLAgent.h>

@class PLEntryNotificationOperatorComposition, PLNSNotificationOperatorComposition;

@interface PLPerformanceAgent : PLAgent

{
    PLEntryNotificationOperatorComposition *_batteryLevelChanged;
    PLNSNotificationOperatorComposition *_dailyTaskNotification;
}

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;
@property (retain) PLNSNotificationOperatorComposition *dailyTaskNotification;

+ (void)load;
+ (id)entryEventPointDefinitions;
+ (id)entryEventPointDefinitionSystemMemory;
+ (id)entryEventPointDefinitionDiskUsage;
+ (id)entryEventPointDefinitionDiskFragmentation;
+ (id)entryEventPointDefinitionJetsamPriority;
+ (id)entryEventPointDefinitionAPFSFragmentation;
+ (_Bool)shouldCreateJetsamPriorityTable;

- (id)init;
- (void)log;
- (void)initOperatorDependancies;
- (void)logEventPointSystemMemory;
- (void)logEventPointDiskUsage;
- (void)logEventPointJetsamPrority;
- (void)logEventPointDiskFragmentation;
- (void)logEventPointAPFSFragmentation;
- (id)descriptionForMemoryPressure:(int)arg1;
- (int)countFD:(int)arg1;
- (int)countMachPort:(int)arg1;
- (void)logEventPointAPFSFragmentationWithContainer:(const char *)arg1;

@end
