/*
 Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

#import <PASampling/PASampleAggregator.h>

@class NSString;

@interface PAProcessInstanceAggregator : PASampleAggregator

{
    unsigned long long _startingTSDSIndex;
    NSString *_headerNote;
    unsigned long long _stackshotFrameAddress;
    unsigned long long _timestampIndexWhenTransitionedToSamplingAllProcesses;
    _Bool _forceOneBasedTimeIndexes;
}

@property (readonly) _Bool hasTargetProcess;
@property unsigned long long stackshotFrameAddress;
@property (readonly) unsigned long long timestampIndexWhenTransitionedToSamplingAllProcesses;
@property (copy) NSString *headerNote;
@property _Bool forceOneBasedTimeIndexes;
@property _Bool printSpinSignatureStack;
@property _Bool printTargetHIDEvent;
@property _Bool printHeavyStacks;

- (void)setSamples:(id)arg1;
- (unsigned long long)sampleIndexForDisplayTimeIndex:(int)arg1;
- (_Bool)shouldPrintTimeOutsideSamplingRange:(double)arg1;
- (id)initWithSampleStore:(id)arg1;
- (void)filterToWallTimeRangeStart:(double)arg1 end:(double)arg2;
- (void)filterToDisplayTimeIndexStart:(unsigned long long)arg1 end:(unsigned long long)arg2;
- (void)printHeaderToOutputStream:(id)arg1;
- (id)sortedTasks;
- (void)printFooterToOutputStream:(id)arg1;
- (id)newAggregatedTaskForIdentificationPurposesWithSampleTask:(id)arg1;
- (id)newAggregatedTaskForSampleTask:(id)arg1 atTimestampIndex:(unsigned long long)arg2;
- (id)sampleTaskWithPid:(int)arg1 orTid:(unsigned long long)arg2 atTimestampIndex:(unsigned long long)arg3;
- (id)sampleTaskWithPid:(int)arg1 atTimestampIndex:(unsigned long long)arg2;
- (int)displayTimeIndexForTimestampIndex:(unsigned long long)arg1;
- (id)kernelSampleTaskForSymbolication;
- (id)sampleTaskWithUniqueId:(unsigned long long)arg1 atTimestampIndex:(unsigned long long)arg2;
- (void)printHIDEvent:(id)arg1 toOutputStream:(id)arg2;
- (id)sampleIndexStringForMachTime:(double)arg1;
- (id)sampleIndexStringForMachTimeRangeStart:(double)arg1 end:(double)arg2;
- (void)printHIDEventsToOutputStream:(id)arg1;
- (void)limitToSampleInterval:(double)arg1;
- (void)filterToMachTimeRangeStart:(double)arg1 end:(double)arg2;

@end
