/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@class PVImageBuffer;

@interface PVCMSampleBuffer : NSObject

{
    struct opaqueCMSampleBuffer *_sampleBufferRef;
    PVImageBuffer *_backingPVImageBuffer;
}

@property (nonatomic, readonly) struct opaqueCMSampleBuffer *sampleBufferRef;
@property (nonatomic, readonly) PVImageBuffer *backingPVImageBuffer;
@property (nonatomic, readonly) CDStruct_1b6d18a9 presentationTimeStamp;

+ (id)sampleBufferWithPVImageBuffer:(id)arg1 timestamp:(CDStruct_1b6d18a9)arg2 frameDuration:(CDStruct_1b6d18a9)arg3;
+ (struct opaqueCMSampleBuffer *)createCMSampleBufferForPVImageBuffer:(id)arg1 timingInfo:(CDStruct_d2aef016)arg2;

- (void)dealloc;
- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;

@end
