/*
 Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, PAAggregatedProcessInstance, PAProcessInstanceAggregator;

@interface PAAggregatedThreadAndDispatchQueue : NSObject

{
    PAAggregatedProcessInstance *_aggregatedTask;
    NSMutableArray *_contiguousStacks;
    int _minPriority;
    int _maxPriority;
    int _minBasePriority;
    int _maxBasePriority;
    unsigned long long _dispatchQueueId;
    unsigned long long _threadId;
    unsigned long long _cpuTimeNsCached;
    unsigned long long _cpuCyclesCached;
    unsigned long long _cpuInstructionsCached;
}

@property (weak, readonly) PAAggregatedProcessInstance *aggregatedTask;
@property (weak, readonly) PAProcessInstanceAggregator *aggregator;
@property (readonly) unsigned long long firstTimestampIndex;
@property (readonly) unsigned long long lastTimestampIndex;
@property unsigned long long dispatchQueueId;
@property unsigned long long threadId;
@property int minPriority;
@property int maxPriority;
@property int minBasePriority;
@property int maxBasePriority;
@property (readonly) _Bool isMainThread;
@property (readonly) _Bool isProcessorIdleThread;
@property (readonly) _Bool isGlobalForcedIdleThread;
@property (readonly) _Bool isIdleWorkQueueThread;
@property (weak, readonly) NSMutableArray *contiguousStacks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isEqual:(id)arg1;
- (int)count;
- (long long)compare:(id)arg1;
- (void)addStack:(id)arg1;
- (unsigned long long)cpuTimeNs;
- (id)sampleStore;
- (void)printHeaderToOutputStream:(id)arg1;
- (void)printToOutputStream:(id)arg1;
- (void)addSampleThread:(id)arg1 atTimestampIndex:(unsigned long long)arg2 fillGapInTimestampIndexWithPreviousThreads:(_Bool)arg3;
- (id)initWithAggregatedTask:(id)arg1 andThreadId:(unsigned long long)arg2 andDispatchQueueId:(unsigned long long)arg3;
- (unsigned long long)cpuInstructions;
- (unsigned long long)cpuCycles;
- (_Bool)hasSingleName:(id *)arg1;
- (unsigned long long)numMissingSamplesBeforeContiguousStackIndex:(unsigned long long)arg1;
- (id)copyDescriptionForSampleFrame:(id)arg1 inSampleTask:(id)arg2;
- (void)printHeavyStacksToOutputStream:(id)arg1 onlyPrintHeaviest:(_Bool)arg2;
- (_Bool)isSingleStack;
- (id)copyStringForMissingSamplesBeforeContiguousStackIndex:(unsigned long long)arg1;
- (void)printStackToOutputStream:(id)arg1;
- (id)initForIdentificationPurposesWithThreadId:(unsigned long long)arg1 andDispatchQueueId:(unsigned long long)arg2;

@end
