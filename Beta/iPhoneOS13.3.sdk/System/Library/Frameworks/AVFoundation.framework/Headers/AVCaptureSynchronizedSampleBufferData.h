/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVCaptureSynchronizedData.h>

@class AVCaptureSynchronizedSampleBufferDataInternal;

@interface AVCaptureSynchronizedSampleBufferData : AVCaptureSynchronizedData

{
    AVCaptureSynchronizedSampleBufferDataInternal *_internal;
}

@property (readonly) struct opaqueCMSampleBuffer *sampleBuffer;
@property (readonly) _Bool sampleBufferWasDropped;
@property (readonly) long long droppedReason;

- (void)dealloc;
- (_Bool)hasCorrespondingDepthData;
- (_Bool)hasCorrespondingVisionData;
- (int)constituentDeviceCaptureID;
- (id)_initWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 sampleBufferWasDropped:(_Bool)arg2;

@end
