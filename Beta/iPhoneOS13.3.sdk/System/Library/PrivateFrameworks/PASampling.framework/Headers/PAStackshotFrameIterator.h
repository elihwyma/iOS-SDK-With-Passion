/*
 Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

#import <Foundation/NSObject.h>

@interface PAStackshotFrameIterator : NSObject

{
    const void *curFrame;
    const void *topFrame;
    struct thread_snapshot *snap;
    unsigned int curIndex;
    _Bool currentFrameIsKernel;
}

- (_Bool)is64bit;
- (const void *)firstValidUserFrame;
- (id)initWithThreadSnapshot:(struct thread_snapshot *)arg1 frameStart:(const void *)arg2;
- (void)getCurrentFrame:(struct pa_stack_frame *)arg1;
- (_Bool)moveToNextFrame;

@end
