/*
 Image: /System/Library/PrivateFrameworks/PowerlogHelperdOperators.framework/PowerlogHelperdOperators
 */

#import <PowerlogCore/PLService.h>

@class NSArray, NSMutableArray, NSMutableDictionary, PLXPCResponderOperatorComposition;

@interface PLAggregateSummarizationService : PLService

{
    NSMutableDictionary *_summarizedData;
    NSMutableArray *_metrics;
    NSArray *_appList;
    double _maxTimestamp;
    PLXPCResponderOperatorComposition *_aggregationResponder;
}

@property (retain) NSMutableDictionary *summarizedData;
@property (retain) NSMutableArray *metrics;
@property (retain) NSArray *appList;
@property double maxTimestamp;
@property (retain) PLXPCResponderOperatorComposition *aggregationResponder;

+ (void)load;
+ (id)modelIdentifier;
+ (id)osVersion;
+ (short)buildType;
+ (id)entryAggregateDefinitions;
+ (id)entryEventPointDefinitions;

- (id)init;
- (void)initOperatorDependancies;
- (id)handleAggregationQueryWithPayload:(id)arg1;
- (void)getAppList:(id)arg1;
- (void)getAppMetadata;
- (id)preformatMetricsForFormatter:(id)arg1;
- (void)setupMetrics;
- (void)aggregateMetrics;
- (id)getDeviceMetadataInRange:(struct _PLTimeIntervalRange)arg1 withSignpostData:(id)arg2;
- (CDUnknownBlockType)getQueryForNetworkIOData;
- (CDUnknownBlockType)getGenericSummarizer;
- (CDUnknownBlockType)getQueryForCoalitionPowerData;
- (CDUnknownBlockType)getQueryForAverageMemory;
- (CDUnknownBlockType)getQueryForPeakMemory;
- (CDUnknownBlockType)getQueryForDiskIO;
- (CDUnknownBlockType)getQueryForLocationActivity;
- (CDUnknownBlockType)getLocationActivitySummarizer;
- (CDUnknownBlockType)getQueryForDisplayAPL;
- (CDUnknownBlockType)getQueryForCellularCondition;
- (CDUnknownBlockType)getCellularConditionSummarizer;
- (void)addMetrics:(id)arg1 withType:(short)arg2;
- (id)getPluggedInDurationInRange:(struct _PLTimeIntervalRange)arg1;
- (id)getDrainInfoInRange:(struct _PLTimeIntervalRange)arg1;
- (id)getInitCountInRange:(struct _PLTimeIntervalRange)arg1;
- (id)getAppMultipleVersionsData;
- (CDUnknownBlockType)getQueryForAppMultipleVersions;

@end
