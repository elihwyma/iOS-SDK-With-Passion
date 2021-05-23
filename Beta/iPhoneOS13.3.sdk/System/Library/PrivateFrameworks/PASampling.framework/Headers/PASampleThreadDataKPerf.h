/*
 Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

#import <PASampling/PASampleThreadData.h>

@interface PASampleThreadDataKPerf : PASampleThreadData

{
    _Bool isSentinel;
    _Bool filledDispatchQueue;
    _Bool filledThreadSnapshotInfo;
    _Bool hasEmptyKernelStack;
    PASampleThreadDataKPerf *previousSampleThread;
}

@property _Bool isSentinel;
@property (weak) PASampleThreadDataKPerf *previousSampleThread;
@property _Bool filledDispatchQueue;
@property _Bool filledThreadSnapshotInfo;
@property _Bool hasEmptyKernelStack;

- (_Bool)hasAnyInfo;

@end
