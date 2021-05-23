/*
 Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

#import <Foundation/NSObject.h>

@class PAStackshotTask;

@interface PAStackshotThread : NSObject

{
    struct thread_snapshot *thread_snap;
    PAStackshotTask *_task;
    const void *_kernelFrames;
    const void *_userFrames;
    unsigned long long _kernelFrameSize;
    unsigned long long _userFrameSize;
    unsigned long long _bytesUsed;
    unsigned long long _bytesBeforeThread;
}

@property (readonly) _Bool isFromMicrostackshot;

- (id)initWithTask:(id)arg1;
- (void)iterateFrames:(CDUnknownBlockType)arg1;
- (_Bool)isDarwinBG;
- (unsigned long long)dispatchQueueId;
- (_Bool)hasDispatchQueue;
- (const void *)firstFrame;
- (_Bool)setBufferPosition:(const char *)arg1 withRemainingBytes:(unsigned long long)arg2 withBytesAlreadyUsed:(unsigned long long)arg3;
- (void)_calculateOffsets;
- (id)frameIterator;
- (unsigned long long)_frameSize:(_Bool)arg1;
- (unsigned int)powerstatsFlags;
- (unsigned long long)kernelFrameSize;
- (unsigned long long)userFrameSize;
- (_Bool)hasKernelContinuation;
- (_Bool)setBufferPosition:(const char *)arg1 withRemainingBytes:(unsigned long long)arg2;
- (unsigned long long)bytesUsedInBuffer;

@end
