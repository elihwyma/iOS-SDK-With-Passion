/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogLiteOperators/PLIOReportStats.h>

@class PLAgent, PLTimer;

@interface PLIOReportAgentIOReportStats : PLIOReportStats

{
    PLAgent *_agent;
    unsigned long long _sampleAPAwakeTime;
    PLTimer *_halfHourTimer;
}

@property (retain) PLAgent *agent;
@property unsigned long long sampleAPAwakeTime;
@property (retain) PLTimer *halfHourTimer;

+ (id)entryEventBackwardDefinitions;
+ (int)idNumberFromIDDiff:(unsigned long long)arg1;
+ (id)maskedNameForChannelID:(unsigned long long)arg1;
+ (id)entryEventBackwardDefinitionSoCStatsH7PMGRCountersID;
+ (id)entryEventBackwardDefinitionSoCStatsH7PMGRCounters;
+ (id)entryEventBackwardDefinitionSoCStatsH7PMGRCountersDebug;
+ (_Bool)shouldLogSoCStatsH7PMGRCountersID;
+ (id)columnNameForChannelID:(unsigned long long)arg1;

- (id)init;
- (id)initWithAgent:(id)arg1;
- (void)logEventBackwardSoCStatsH7PMGRCounters;
- (void)initTaskOperatorDependancies;

@end
