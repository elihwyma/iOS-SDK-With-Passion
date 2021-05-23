/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVAssetWriterInputHelper.h>

@class AVAssetWriterInputWritingHelper;

__attribute__((visibility("hidden")))
@interface AVAssetWriterInputNoMorePassesHelper : AVAssetWriterInputHelper

{
    AVAssetWriterInputWritingHelper *_writingHelper;
}

- (void)dealloc;
- (long long)status;
- (_Bool)isReadyForMoreMediaData;
- (void)stopRequestingMediaData;
- (void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)markAsFinished;
- (id)initWithConfigurationState:(id)arg1;
- (struct __CVPixelBufferPool *)pixelBufferPool;
- (_Bool)canPerformMultiplePasses;
- (id)currentPassDescription;
- (long long)appendSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 error:(id *)arg2;
- (_Bool)appendPixelBuffer:(struct __CVBuffer *)arg1 withPresentationTime:(CDStruct_1b6d18a9)arg2;
- (void)markCurrentPassAsFinished;
- (id)initWithWritingHelper:(id)arg1;

@end
