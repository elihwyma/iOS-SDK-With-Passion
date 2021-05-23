/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <ARKit/ARImageBasedTechnique.h>

@class ARImageCroppingTechnique, ARImageRotationTechnique, ARImageScalingTechnique, ARMLImageDownScalingResultData, ARMattingImageMetaData, NSObject;

@protocol OS_dispatch_queue;

@interface ARMLImageDownScalingTechnique : ARImageBasedTechnique

{
    ARImageScalingTechnique *_imageScalingTechnique;
    ARImageScalingTechnique *_mattingImageScalingTechnique;
    ARImageRotationTechnique *_imageRotationTechnique;
    ARImageCroppingTechnique *_imageCroppingTechnique;
    struct vImageCVImageFormat *_cvImageFormatRef;
    struct __CVPixelBufferPool *_bgraPixelBufferPool;
    struct CGSize _imageSize;
    int _lockedOrientation;
    ARMattingImageMetaData *_mattingImageData;
    ARMLImageDownScalingResultData *_downSamplingResultData;
    _Bool _enableDoubleMLResolutionForIPad;
    NSObject<OS_dispatch_queue> *_processingQueue;
    double _resultLatency;
    _Bool _centerCropImage;
    _Bool _generateMattingMetaData;
}

@property (nonatomic) _Bool centerCropImage;
@property (nonatomic) _Bool generateMattingMetaData;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)initWithSize:(struct CGSize)arg1;
- (id)processData:(id)arg1;
- (double)requiredTimeInterval;
- (long long)_getDeviceOrientation;
- (id)_imageDataForNeuralNetwork:(id)arg1 scaledSize:(struct CGSize)arg2 deviceOrientation:(long long)arg3 pRegionOfInterest:(struct CGSize *)arg4 pRotationOfResultTensor:(long long *)arg5;
- (id)_convertImageColorSpace:(id)arg1;
- (id)initWithSize:(struct CGSize)arg1 requiredTimeInterval:(double)arg2;
- (void)lockOrientation:(long long)arg1;

@end
