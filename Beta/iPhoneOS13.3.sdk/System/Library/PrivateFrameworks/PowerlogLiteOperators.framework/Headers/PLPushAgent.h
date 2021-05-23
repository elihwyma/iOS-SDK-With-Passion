/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogCore/PLAgent.h>

@class NSDate, NSMutableDictionary, PLTimer, PLXPCListenerOperatorComposition;

@interface PLPushAgent : PLAgent

{
    PLXPCListenerOperatorComposition *_receivedPushListener;
    PLXPCListenerOperatorComposition *_sentPushListener;
    PLXPCListenerOperatorComposition *_sentKeepAliveListener;
    PLTimer *_runTimeAggregatorTimer;
    unsigned long long _numKeepAlives;
    PLXPCListenerOperatorComposition *_apsdConnectedListener;
    NSMutableDictionary *_pushUsageDict;
    NSDate *_detectionStartTime;
}

@property (retain) PLXPCListenerOperatorComposition *receivedPushListener;
@property (retain) PLXPCListenerOperatorComposition *sentPushListener;
@property (retain) PLXPCListenerOperatorComposition *sentKeepAliveListener;
@property (retain) PLTimer *runTimeAggregatorTimer;
@property unsigned long long numKeepAlives;
@property (retain) PLXPCListenerOperatorComposition *apsdConnectedListener;
@property (retain) NSMutableDictionary *pushUsageDict;
@property (retain) NSDate *detectionStartTime;

+ (void)load;
+ (id)defaults;
+ (id)entryAggregateDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (_Bool)isHighPriorityPushEntry:(id)arg1;
+ (id)entryEventPointDefinitionsReceivedPush;
+ (id)entryEventPointDefinitionsSentPush;
+ (id)entryEventPointDefinitionsAPSDConnectedEvent;
+ (id)entryEventPointDefinitionsSentKeepAlive;
+ (id)entryAggregateDefinitionSentPushes;
+ (id)entryAggregateDefinitionAPSDConnected;
+ (id)bundleIdFromTopic:(id)arg1;
+ (id)replaceConnectionTypeWithEnum:(id)arg1;

- (id)init;
- (void)log;
- (void)initOperatorDependancies;
- (void)sendEnergyIssueSignatureNotification:(id)arg1 withThreshold:(double)arg2;
- (void)checkPushUsage:(id)arg1 withPLEntry:(id)arg2;
- (void)accountReceivedPushWithEntry:(id)arg1;

@end
