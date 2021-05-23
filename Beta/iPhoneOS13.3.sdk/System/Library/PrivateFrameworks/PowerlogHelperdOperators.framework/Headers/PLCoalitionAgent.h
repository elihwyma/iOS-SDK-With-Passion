/*
 Image: /System/Library/PrivateFrameworks/PowerlogHelperdOperators.framework/PowerlogHelperdOperators
 */

#import <PowerlogCore/PLAgent.h>

@class NSDate, NSDictionary, NSMutableDictionary, PLEntryNotificationOperatorComposition, PLXPCListenerOperatorComposition;

@interface PLCoalitionAgent : PLAgent

{
    PLEntryNotificationOperatorComposition *_batteryLevelChanged;
    NSDictionary *_lastCoalitionDictionary;
    NSDictionary *_lastCoalitionObjectDictionary;
    NSDate *_lastDate;
    NSDate *_currentDate;
    PLEntryNotificationOperatorComposition *_processmonitorCallback;
    PLXPCListenerOperatorComposition *_coalitionReapNotification;
    NSMutableDictionary *_reapedCoalitions;
    NSMutableDictionary *_coalitionIDToCoalitionNameMapping;
}

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;
@property (retain) NSDictionary *lastCoalitionDictionary;
@property (retain) NSDictionary *lastCoalitionObjectDictionary;
@property (retain) NSDate *lastDate;
@property (retain) NSDate *currentDate;
@property (retain) PLEntryNotificationOperatorComposition *processmonitorCallback;
@property (retain) PLXPCListenerOperatorComposition *coalitionReapNotification;
@property (retain) NSMutableDictionary *reapedCoalitions;
@property (retain) NSMutableDictionary *coalitionIDToCoalitionNameMapping;

+ (void)load;
+ (id)entryEventPointDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventIntervalDefinitionCoalitionUsage;
+ (id)entryEventPointDefinitionCoalitionDrop;
+ (id)entryEventPointDefinitionCoalitionSnapshot;
+ (id)entryEventPointDefinitionCoalitionMemory;

- (id)init;
- (void)log;
- (void)initOperatorDependancies;
- (void)logEventIntervalCoalitionInterval;
- (void)handleReapNotifications:(id)arg1;
- (void)timedCoalitionInfo;
- (void)logToAggd:(id)arg1;
- (id)buildPLEntry:(struct coalition_resource_usage *)arg1 withBundleId:(id)arg2 withLaunchdName:(id)arg3 withDate:(id)arg4 withCoalitionId:(unsigned long long)arg5;
- (id)buildPLEntryDiffWithStartEntry:(id)arg1 withEndEntry:(id)arg2 withLastDate:(id)arg3;
- (_Bool)shouldLogCoalitionObject:(id)arg1 withEndObject:(id)arg2;
- (id)buildPLEntryDiffWithStartObject:(id)arg1 withEndObject:(id)arg2 withStartDate:(id)arg3 withEndDate:(id)arg4;
- (id)reapedCoalitionsPLEntryDiff;
- (void)addAccountingEventsFromCoalitions:(id)arg1;
- (double)getCPUWeightFromEntry:(id)arg1;
- (double)getGPUTimeFromEntry:(id)arg1;
- (double)getCPUEnergyFromEntry:(id)arg1;
- (double)getCPUVoucherTimeFromEntry:(id)arg1;
- (void)getCoalitionInfo;
- (id)buildPLCoalitionDataObject:(struct coalition_resource_usage *)arg1 withBundleId:(id)arg2 withLaunchdName:(id)arg3 withDate:(id)arg4 withCoalitionId:(unsigned long long)arg5;
- (void)logCoalitionObjectDifference:(id)arg1;
- (void)logCoalitionObjectSnapshot:(id)arg1;
- (void)logCoalitionObjectMemory:(id)arg1;
- (id)buildPLCoalitionDataObjectFromReapedNotification:(id)arg1;
- (void)debugCoalitionAgent;
- (void)printCoalitionResourceUsage:(struct coalition_resource_usage *)arg1 withBundleId:(id)arg2 withLaunchdName:(id)arg3;
- (void)logCoalitionSnapshot:(id)arg1;
- (id)filterCoalitionDiffEntries:(id)arg1;
- (void)logCoalitionDifference:(id)arg1;

@end
