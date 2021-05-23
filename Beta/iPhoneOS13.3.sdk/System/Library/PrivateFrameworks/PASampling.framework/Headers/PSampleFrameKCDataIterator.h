/*
 Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

#import <Foundation/NSObject.h>

@class NSString, PASampleKernelFrame, PASampleUserFrame;

@interface PSampleFrameKCDataIterator : NSObject

{
    PASampleKernelFrame *_kernel;
    PASampleUserFrame *_user;
    _Bool _hideKernelFrames;
    _Bool _hideUserFrames;
    struct stack_snapshot_frame64 *user64Frames;
    int numUser64Frames;
    unsigned long long *user64LRs;
    int numUser64LRs;
    struct stack_snapshot_frame32 *user32Frames;
    int numUser32Frames;
    unsigned int *user32LRs;
    int numUser32LRs;
    struct stack_snapshot_frame64 *kernel64Frames;
    int numKernel64Frames;
    unsigned long long *kernel64LRs;
    int numKernel64LRs;
    struct stack_snapshot_frame32 *kernel32Frames;
    int numKernel32Frames;
    unsigned int *kernel32LRs;
    int numKernel32LRs;
    unsigned long long continuation;
    _Bool isUserStackTruncated;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)clear;
- (void)iterateFrames:(CDUnknownBlockType)arg1;
- (void)exposeUserFramesOnly;
- (void)exposeKernelFramesOnly;
- (void)exposeAllFrames;
- (_Bool)hasStack;
- (_Bool)hasUserStack;

@end
