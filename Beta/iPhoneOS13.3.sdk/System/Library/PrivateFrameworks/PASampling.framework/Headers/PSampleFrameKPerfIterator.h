/*
 Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

#import <Foundation/NSObject.h>

@class NSString, PASampleKernelFrame, PASampleUserFrame;

@interface PSampleFrameKPerfIterator : NSObject

{
    PASampleKernelFrame *_kernel;
    PASampleUserFrame *_user;
    _Bool _hideKernelFrames;
    _Bool _hideUserFrames;
    const unsigned long long *userFrames;
    int numUserFrames;
    const unsigned long long *kernelFrames;
    int numKernelFrames;
    unsigned long long continuation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)clear;
- (void)iterateFrames:(CDUnknownBlockType)arg1;
- (void)exposeUserFramesOnly;
- (void)exposeKernelFramesOnly;
- (void)exposeAllFrames;
- (_Bool)hasUserStack;
- (_Bool)hasKernelStack;

@end
