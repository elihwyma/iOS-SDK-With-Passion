/*
 Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

#import <PASampling/PASampleTaskData.h>

@interface PASampleTaskDataKPerf : PASampleTaskData

{
    _Bool isSentinel;
    _Bool filledState;
    _Bool filledMem;
    _Bool filledLatencyQoS;
    PASampleTaskDataKPerf *previousSampleTask;
}

@property _Bool isSentinel;
@property (weak) PASampleTaskDataKPerf *previousSampleTask;
@property _Bool filledState;
@property _Bool filledMem;
@property _Bool filledLatencyQoS;

- (void)setPrivateData:(id)arg1;
- (id)privateData;

@end
