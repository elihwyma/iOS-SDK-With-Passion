/*
 Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, SAFrame, SAKernelFrame, SAKernelLeafFrame, SALeafFrame, SASharedCache, SAUserTruncatedBacktrace;

__attribute__((visibility("hidden")))
@interface SAFrameKCDataIterator : NSObject

{
    SAFrame *_user;
    SALeafFrame *_userLeaf;
    SAKernelFrame *_kernel;
    SAKernelLeafFrame *_kernelLeaf;
    SAUserTruncatedBacktrace *_truncatedBacktrace;
    _Bool _hideKernelFrames;
    _Bool _hideUserFrames;
    _Bool _isUserStackTruncated;
    int _numUser64Frames;
    int _numUser64LRs;
    int _numUser32Frames;
    int _numUser32LRs;
    int _numKernel64Frames;
    int _numKernel64LRs;
    int _numKernel32Frames;
    int _numKernel32LRs;
    NSArray *_userBinaryLoadInfos;
    NSArray *_kernelBinaryLoadInfos;
    SASharedCache *_sharedCache;
    struct stack_snapshot_frame64 *_user64Frames;
    unsigned long long *_user64LRs;
    struct stack_snapshot_frame32 *_user32Frames;
    unsigned int *_user32LRs;
    struct stack_snapshot_frame64 *_kernel64Frames;
    unsigned long long *_kernel64LRs;
    struct stack_snapshot_frame32 *_kernel32Frames;
    unsigned int *_kernel32LRs;
    unsigned long long _continuation;
}

@property (retain) NSArray *userBinaryLoadInfos;
@property (retain) NSArray *kernelBinaryLoadInfos;
@property (retain) SASharedCache *sharedCache;
@property struct stack_snapshot_frame64 *user64Frames;
@property int numUser64Frames;
@property unsigned long long *user64LRs;
@property int numUser64LRs;
@property struct stack_snapshot_frame32 *user32Frames;
@property int numUser32Frames;
@property unsigned int *user32LRs;
@property int numUser32LRs;
@property struct stack_snapshot_frame64 *kernel64Frames;
@property int numKernel64Frames;
@property unsigned long long *kernel64LRs;
@property int numKernel64LRs;
@property struct stack_snapshot_frame32 *kernel32Frames;
@property int numKernel32Frames;
@property unsigned int *kernel32LRs;
@property int numKernel32LRs;
@property unsigned long long continuation;
@property _Bool isUserStackTruncated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)iterateFrames:(CDUnknownBlockType)arg1;
- (id)instructionForUserAddress:(unsigned long long)arg1 symbolicationOffByOne:(_Bool)arg2;
- (id)instructionForKernelAddress:(unsigned long long)arg1 symbolicationOffByOne:(_Bool)arg2;
- (void)clearThreadData;
- (void)exposeUserFramesOnly;
- (void)exposeKernelFramesOnly;
- (void)exposeAllFrames;
- (void)clearTaskData;
- (_Bool)hasStack;
- (_Bool)hasUserStack;
- (_Bool)hasKernelStack;

@end
