/*
 Image: /System/Library/PrivateFrameworks/DASDaemon.framework/DASDaemon
 */

#import <Foundation/NSObject.h>

@class NSDateFormatter, NSString, OSLogEventStore, OSLogEventStream;

@interface _DASLogExtractor : NSObject

{
    OSLogEventStore *_logStore;
    NSDateFormatter *_dateFormatter;
    OSLogEventStream *_eventStream;
    NSString *_subsystem;
    NSString *_category;
}

@property (retain, nonatomic) OSLogEventStore *logStore;
@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (retain, nonatomic) OSLogEventStream *eventStream;
@property (retain, nonatomic) NSString *subsystem;
@property (retain, nonatomic) NSString *category;

+ (id)extractorForArchive:(id)arg1;

- (id)initWithArchive:(id)arg1;
- (id)getDefaultFilterPredicate;
- (id)getPolicyDenialReasonsFromMessage:(id)arg1;
- (id)getpolicyToIntervals:(id)arg1;
- (id)summarizePolicyDenialsOverMessages:(id)arg1 maxDuration:(double)arg2;
- (id)descriptionOfPolicyToIntervalsMap:(id)arg1;
- (id)getIncompatibilityReasons:(id)arg1 forActivity:(id)arg2;
- (id)descriptionOfIncompatibilityDenials:(id)arg1;
- (id)getInstancesOfHigherThreshold:(id)arg1 forActivity:(id)arg2;
- (id)descriptionOfHigherThresholds:(id)arg1;
- (id)getScheduledBlocksOfMessages:(id)arg1 forActivity:(id)arg2;
- (id)getMessagesBeforeRunning:(id)arg1 forActivity:(id)arg2;
- (id)summarizeAllDenialsOverMessages:(id)arg1 forActivity:(id)arg2 detail:(_Bool)arg3;
- (id)getActivityStartBeforeDate:(id)arg1 forActivity:(id)arg2;
- (_Bool)didActivityRun:(id)arg1 forActivity:(id)arg2;
- (id)getMessagesAfterRunning:(id)arg1 forActivity:(id)arg2;
- (id)summarizeRuntimeOverMessages:(id)arg1 forActivity:(id)arg2;
- (_Bool)didActivityFinish:(id)arg1 forActivity:(id)arg2;
- (id)copyActivitySummary:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 detail:(_Bool)arg4 error:(int *)arg5;
- (int)handleLogEventsLogEvents:(id)arg1 sinceDate:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (id)getSummaryFromLogs:(id)arg1 forActivity:(id)arg2 detail:(_Bool)arg3;
- (id)objectForTrigger:(id)arg1 fromCondition:(id)arg2 compactRepresentation:(_Bool)arg3;
- (void)addConditionToHistory:(id)arg1 fromMessage:(id)arg2 atTimestamp:(id)arg3 compactRepresentation:(_Bool)arg4;
- (int)summarizeActivity:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 detail:(_Bool)arg4;
- (int)sysConditionsLog:(_Bool)arg1 startDate:(id)arg2 endDate:(id)arg3;

@end
