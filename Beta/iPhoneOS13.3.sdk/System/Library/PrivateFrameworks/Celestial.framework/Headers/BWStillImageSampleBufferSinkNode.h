/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWSinkNode.h>

@interface BWStillImageSampleBufferSinkNode : BWSinkNode

{
    CDUnknownBlockType _sampleBufferAvailableHandler;
    _Bool _aggdIsPhotoFormat;
    _Bool _clientIsCameraOrDerivative;
    _Bool _aggdIsTimeLapse;
    _Bool _captureTimePhotosCurationSupported;
    long long _lastCaptureRequestTime;
}

@property (copy, nonatomic) CDUnknownBlockType sampleBufferAvailableHandler;

+ (void)initialize;
+ (id)_inferenceTypesForClientMetadata;

- (void)dealloc;
- (id)initWithSinkID:(id)arg1;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (void)setClientIsCameraOrDerivative:(_Bool)arg1;
- (void)setCaptureTimePhotosCurationSupported:(_Bool)arg1;
- (_Bool)clientIsCameraOrDerivative;
- (void)setAggdIsPhotoFormat:(_Bool)arg1;
- (void)setAggdIsTimeLapse:(_Bool)arg1;
- (_Bool)captureTimePhotosCurationSupported;
- (id)initWithInputMediaType:(unsigned int)arg1 sinkID:(id)arg2;
- (void)_attachPrivateClientMetadataToSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)_reportAggdDataWithRequestedStillImageSettings:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2 sbuf:(struct opaqueCMSampleBuffer *)arg3;
- (void)_reportCoreAnalyticsDataWithRequestedStillImageSettings:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2 sbuf:(struct opaqueCMSampleBuffer *)arg3;
- (id)_newFilteredDetectedObjectsInfoFromDetectedObjectsInfo:(id)arg1;
- (_Bool)aggdIsPhotoFormat;
- (_Bool)aggdIsTimeLapse;

@end
