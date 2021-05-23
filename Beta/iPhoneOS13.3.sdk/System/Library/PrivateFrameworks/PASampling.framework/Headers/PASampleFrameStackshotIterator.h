/*
 Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

#import <Foundation/NSObject.h>

@class NSString, PASampleKernelFrame, PASampleUserFrame, PAStackshotThread;

@interface PASampleFrameStackshotIterator : NSObject

{
    PAStackshotThread *_stackshotThread;
    PASampleKernelFrame *_kernel;
    PASampleUserFrame *_user;
    _Bool _hideKernelFrames;
    _Bool _hideUserFrames;
}

@property (retain) PAStackshotThread *stackshotThread;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)iterateFrames:(CDUnknownBlockType)arg1;
- (void)exposeUserFramesOnly;
- (void)exposeKernelFramesOnly;
- (void)exposeAllFrames;

@end
