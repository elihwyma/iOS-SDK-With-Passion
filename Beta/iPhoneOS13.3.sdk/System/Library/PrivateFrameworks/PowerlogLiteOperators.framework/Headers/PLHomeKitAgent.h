/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogCore/PLAgent.h>

@class PLEntryNotificationOperatorComposition, PLTimer, PLXPCListenerOperatorComposition;

@interface PLHomeKitAgent : PLAgent

{
    _Bool _enablelog;
    PLXPCListenerOperatorComposition *_HomeKitEvent;
    unsigned long long _numBTPushes;
    unsigned long long _numConnections;
    unsigned long long _numPrevBTPushes;
    unsigned long long _numPrevConnections;
    unsigned long long _numBTConnections;
    unsigned long long _numIPConnections;
    unsigned long long _numBonjour;
    unsigned long long _numIPEvents;
    unsigned long long _numIDSPushes;
    unsigned long long _numCloudPushes;
    unsigned long long _numBTWakeAdvt;
    unsigned long long _numBTWakes;
    double _lastapwake;
    PLEntryNotificationOperatorComposition *_sbcLevelChanged;
    PLEntryNotificationOperatorComposition *_deviceWake;
    PLTimer *_runTimeAggregatorTimer;
    unsigned long long _numaggregatelines;
    unsigned long long _numBTlines;
}

@property (retain) PLXPCListenerOperatorComposition *HomeKitEvent;
@property unsigned long long numBTPushes;
@property unsigned long long numConnections;
@property unsigned long long numPrevBTPushes;
@property unsigned long long numPrevConnections;
@property unsigned long long numBTConnections;
@property unsigned long long numIPConnections;
@property unsigned long long numBonjour;
@property unsigned long long numIPEvents;
@property unsigned long long numIDSPushes;
@property unsigned long long numCloudPushes;
@property unsigned long long numBTWakeAdvt;
@property unsigned long long numBTWakes;
@property double lastapwake;
@property _Bool enablelog;
@property (retain) PLEntryNotificationOperatorComposition *sbcLevelChanged;
@property (retain) PLEntryNotificationOperatorComposition *deviceWake;
@property (retain) PLTimer *runTimeAggregatorTimer;
@property unsigned long long numaggregatelines;
@property unsigned long long numBTlines;

+ (void)load;
+ (id)defaults;
+ (id)entryEventPointDefinitionHomeKitAdvt;
+ (id)entryEventPointDefinitionHomeKitSummary;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventNoneDefinitions;

- (id)init;
- (void)log;
- (void)initOperatorDependancies;
- (void)logEventPointHomeKit:(id)arg1;
- (void)writeAggregateCounters:(id)arg1;

@end
