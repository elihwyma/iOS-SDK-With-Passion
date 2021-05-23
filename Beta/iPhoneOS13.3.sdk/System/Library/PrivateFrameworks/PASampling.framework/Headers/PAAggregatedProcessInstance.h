/*
 Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

#import <PASampling/PAAggregatedTask.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableSet, NSString, NSUUID, PAProcessInstanceAggregator;

@interface PAAggregatedProcessInstance : PAAggregatedTask

{
    struct __CFDictionary *stacks;
    NSMutableArray *_timestampIndexedTasks;
    unsigned long long _firstTimestampIndex;
    NSMutableSet *_concurrentDispatchQueueIds;
    NSDictionary *_threadsInPreviousSample;
    _Bool _previousThreadsWereUnchanged;
    double _mostRecentTimeSamplingOnlyMainThread;
    unsigned long long _timestampIndexWhenTransitionedToSamplingAllThreads;
    unsigned long long _mainThreadId;
    _Bool _combinedStacks;
    unsigned int _countSuspended;
    unsigned int _countTerminated;
    unsigned long long _cpuTimeNsCached;
    unsigned long long _cpuCyclesCached;
    unsigned long long _cpuInstructionsCached;
}

@property (readonly) NSArray *timestampIndexedTasks;
@property (weak, readonly) PAProcessInstanceAggregator *aggregator;
@property (readonly) NSMutableSet *concurrentDispatchQueueIds;
@property (readonly) unsigned long long firstTimestampIndex;
@property (readonly) unsigned long long lastTimestampIndex;
@property (retain) NSDictionary *threadsInPreviousSample;
@property (readonly) unsigned int countSuspended;
@property (readonly) unsigned int countTerminated;
@property (readonly) unsigned int count;
@property (readonly) int pid;
@property (readonly) int ppid;
@property (readonly) int rpid;
@property (readonly) unsigned int uid;
@property (readonly) unsigned long long uniquePid;
@property (weak, readonly) NSString *name;
@property (weak, readonly) NSString *mainBinaryPath;
@property (weak, readonly) NSUUID *mainBinaryUuid;
@property (readonly) unsigned long long mainBinaryOffset;
@property (readonly) _Bool isUnresponsive;
@property (readonly) double timeOfLastResponse;
@property (readonly) _Bool usesSuddenTermination;
@property (readonly) _Bool allowsIdleExit;
@property (readonly) _Bool workQueueExceededConstrainedThreadLimit;
@property (readonly) _Bool workQueueExceededTotalThreadLimit;
@property (readonly) _Bool isThirdParty;
@property (readonly) _Bool isTranslocated;
@property (readonly) unsigned long long timestampIndexWhenTransitionedToSamplingAllThreads;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)debugDescription;
- (long long)compare:(id)arg1;
- (unsigned long long)cpuTimeNs;
- (id)architectureString;
- (void)printHeaderToOutputStream:(id)arg1;
- (void)printToOutputStream:(id)arg1;
- (void)addSampleTask:(id)arg1 atTimestampIndex:(unsigned long long)arg2;
- (void)fillGaps;
- (id)initWithAggregator:(id)arg1 andSampleTask:(id)arg2 atTimestampIndex:(unsigned long long)arg3;
- (void)addSampleThread:(id)arg1 atTimestampIndex:(unsigned long long)arg2 fillGapInTimestampIndexWithPreviousThreads:(_Bool)arg3;
- (void)_combineMainThreadStacks;
- (void)_combineAllStacks;
- (void)_combineStacksByThreadID;
- (void)_combineSerialDispatchQueueStacks;
- (unsigned long long)cpuInstructions;
- (unsigned long long)cpuCycles;
- (id)firstTask;
- (_Bool)_shouldDisplayStacks;
- (void)combineStacks;
- (id)sortedStacks;
- (void)printStacksToOutputStream:(id)arg1;
- (id)initForIdentificationPurposesWithSampleTask:(id)arg1;
- (void)calculateTimeIndexes;
- (id)sampleTaskAtTimestampIndex:(unsigned long long)arg1;

@end
