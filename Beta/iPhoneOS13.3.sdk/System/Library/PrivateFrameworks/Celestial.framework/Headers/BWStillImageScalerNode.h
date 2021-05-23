/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWNode.h>

@class BWPixelBufferPool, BWVideoFormat;

@interface BWStillImageScalerNode : BWNode

{
    BWVideoFormat *_outputFormat;
    struct opaqueCMFormatDescription *_outputFormatDescription;
    int _poolCapacity;
    BWPixelBufferPool *_pool;
    struct OpaqueVTPixelTransferSession *_scalingSession;
    float _personSegmentationMainImageDownscalingFactor;
    BWPixelBufferPool *_personSegmentationPool;
    struct OpaqueVTPixelTransferSession *_personSegmentationScalingSession;
    struct opaqueCMFormatDescription *_personSegmentationOutputFormatDescription;
    _Bool _defersCropToPhotoEncoderWhenPossible;
}

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (id)nodeType;
- (void)didReachEndOfDataForInput:(id)arg1;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (id)initWithPoolCapacity:(int)arg1;
- (void)_purgeResources;
- (int)_updatePoolWithSettings:(id)arg1 processingFlags:(unsigned int)arg2 normalizedInputCropRect:(struct CGRect)arg3 scaledDenormalizedInputCropRectOut:(struct CGRect *)arg4;
- (int)_rebuildBufferPoolWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (int)_buildScalingSession;
- (void)setDefersCropToPhotoEncoderWhenPossible:(_Bool)arg1;
- (_Bool)defersCropToPhotoEncoderWhenPossible;
- (void)setPersonSegmentationMainImageDownscalingFactor:(float)arg1;
- (float)personSegmentationMainImageDownscalingFactor;

@end
