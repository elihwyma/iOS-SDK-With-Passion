/*
 Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface PAContiguousStack : NSObject

{
    NSMutableArray *_threads;
    unsigned long long _firstTimestampIndex;
    unsigned long long _previousCpuTimeNs;
    unsigned long long _previousCpuInstructions;
    unsigned long long _previousCpuCycles;
}

@property (readonly) unsigned long long threadId;
@property (readonly) unsigned long long dispatchQueueId;

- (id)debugDescription;
- (unsigned long long)count;
- (unsigned long long)cpuTimeNs;
- (_Bool)isProcessorIdleThread;
- (unsigned long long)lastTimestampIndex;
- (_Bool)isIdleWorkQueueThread;
- (unsigned long long)firstTimestampIndex;
- (_Bool)isGlobalForcedIdleThread;
- (unsigned long long)cpuInstructions;
- (unsigned long long)cpuCycles;
- (_Bool)isSingleStackWithLeafUserFrame:(id)arg1 andLeafKernelFrame:(id)arg2;
- (_Bool)hasSingleName:(id *)arg1;
- (id)initWithTimestampIndex:(unsigned long long)arg1 andPreviousCpuTimeNs:(unsigned long long)arg2 andPreviousCpuInstructions:(unsigned long long)arg3 andPreviousCpuCycles:(unsigned long long)arg4;
- (void)addSampleThread:(id)arg1 atTimestampIndex:(unsigned long long)arg2;
- (id)sampleThreadAtTimestampIndex:(unsigned long long)arg1;
- (_Bool)threadExistedPreviously;
- (void)iterateSampleThreadsFromTimestampIndex:(unsigned long long)arg1 toTimestampIndex:(unsigned long long)arg2 callback:(CDUnknownBlockType)arg3;
- (void)iterateSampleTaskThreadPairsWithTasks:(id)arg1 fromTimestampIndex:(unsigned long long)arg2 toTimestampIndex:(unsigned long long)arg3 callback:(CDUnknownBlockType)arg4;

@end
