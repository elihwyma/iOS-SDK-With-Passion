/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface AVCaptureSynchronizedSampleBufferDataInternal : NSObject

{
    struct opaqueCMSampleBuffer *sampleBuffer;
    _Bool sampleBufferWasDropped;
    long long droppedReason;
    _Bool hasCorrespondingDepthData;
    _Bool hasCorrespondingVisionData;
    int constituentDeviceCaptureID;
}

@end
