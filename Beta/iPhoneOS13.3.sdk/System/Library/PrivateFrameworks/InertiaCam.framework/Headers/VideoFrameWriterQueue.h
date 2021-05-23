/*
 Image: /System/Library/PrivateFrameworks/InertiaCam.framework/InertiaCam
 */

#import <Foundation/NSObject.h>

@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, NSConditionLock, NSError, NSLock, NSMutableArray;

@protocol OS_dispatch_queue, VideoFrameWriterProgressRecipient;

@interface VideoFrameWriterQueue : NSObject

{
    _Bool writeSuccess;
    _Bool canceled;
    _Bool _doneQueueing;
    unsigned int _drainMinimum;
    unsigned int _drainMaximum;
    AVAssetWriterInputPixelBufferAdaptor *inputAdaptor;
    AVAssetWriter *videoWriter;
    AVAssetWriterInput *writerInput;
    NSMutableArray *frameArray;
    NSLock *frameArrayLock;
    NSObject<OS_dispatch_queue> *frameWriteQueue;
    NSError *writeError;
    unsigned long long nextFrameIndex;
    id <VideoFrameWriterProgressRecipient> frameWriterUpdateCallback;
    NSConditionLock *_writingDoneLock;
    NSConditionLock *_drainConditionLock;
    unsigned long long _drainTarget;
    CDStruct_1b6d18a9 startTime;
    CDStruct_1b6d18a9 endTime;
}

@property (retain, nonatomic) AVAssetWriter *videoWriter;
@property (retain, nonatomic) AVAssetWriterInput *writerInput;
@property (retain, nonatomic) AVAssetWriterInputPixelBufferAdaptor *inputAdaptor;
@property (retain) NSMutableArray *frameArray;
@property (retain, nonatomic) NSLock *frameArrayLock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *frameWriteQueue;
@property CDStruct_1b6d18a9 startTime;
@property CDStruct_1b6d18a9 endTime;
@property (retain) NSConditionLock *writingDoneLock;
@property (retain) NSError *writeError;
@property _Bool writeSuccess;
@property unsigned long long nextFrameIndex;
@property _Bool canceled;
@property _Bool doneQueueing;
@property unsigned int drainMinimum;
@property unsigned int drainMaximum;
@property (retain) NSConditionLock *drainConditionLock;
@property unsigned long long drainTarget;
@property (weak) id <VideoFrameWriterProgressRecipient> frameWriterUpdateCallback;

- (void)dealloc;
- (id)FindFrameWithIndex:(long long)arg1;
- (unsigned long long)FramesInQueue;
- (void)FrameRequestCallback;
- (id)initWithOutputURL:(id)arg1 forMovieDimensions:(struct CGSize)arg2 outputTransform:(struct CGAffineTransform)arg3 startTime:(CDStruct_1b6d18a9)arg4 endTime:(CDStruct_1b6d18a9)arg5;
- (void)StartWatchingForFrames;
- (void)AddAFrame:(id)arg1;
- (void)DrainIfAbove:(unsigned int)arg1 downTo:(unsigned int)arg2;
- (_Bool)WaitForFinish;

@end
