/*
 Image: /System/Library/PrivateFrameworks/PowerlogFullOperators.framework/PowerlogFullOperators
 */

#import <PowerlogFullOperators/PLAWDAuxMetrics.h>

@class NSTimer, PLEntryNotificationOperatorComposition;

@interface PLAWDNetworkUsage : PLAWDAuxMetrics

{
    unsigned int _netState;
    PLEntryNotificationOperatorComposition *_netEventCallback;
    PLEntryNotificationOperatorComposition *_nameConnectionCallback;
    NSTimer *_snapshotTimer;
}

@property (retain) PLEntryNotificationOperatorComposition *netEventCallback;
@property (retain) PLEntryNotificationOperatorComposition *nameConnectionCallback;
@property unsigned int netState;
@property (retain) NSTimer *snapshotTimer;

+ (id)entryAggregateDefinitions;
+ (id)getSharedObjWithOperator:(id)arg1;
+ (id)entryAggregateDefinitionNetUsage;

- (void)startMetricCollection:(id)arg1;
- (void)stopMetricCollection:(id)arg1;
- (_Bool)submitDataToAWDServer:(id)arg1 withAwdConn:(id)arg2;
- (void)resetNetUsageTable;
- (void)handleNetCallback:(id)arg1;
- (void)handleNameConnectionCallback:(id)arg1;

@end
