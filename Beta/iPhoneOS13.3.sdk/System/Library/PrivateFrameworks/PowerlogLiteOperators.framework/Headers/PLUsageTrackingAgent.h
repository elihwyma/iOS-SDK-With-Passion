/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogCore/PLAgent.h>

@class USUsageReporter;

@interface PLUsageTrackingAgent : PLAgent

{
    USUsageReporter *_usageReporter;
}

@property (retain) USUsageReporter *usageReporter;

+ (void)load;
+ (id)defaults;
+ (id)entryAggregateDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventIntervalDefinitionUsageTime;

- (id)init;
- (void)log;
- (void)initOperatorDependancies;
- (void)initTaskOperatorDependancies;
- (void)logEventIntervalUsageTime;
- (void)logEntriesFromUsageReports:(id)arg1;

@end
