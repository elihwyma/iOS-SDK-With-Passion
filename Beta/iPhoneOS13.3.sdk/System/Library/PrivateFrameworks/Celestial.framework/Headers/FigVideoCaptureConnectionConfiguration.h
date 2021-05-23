/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/FigCaptureConnectionConfiguration.h>

@interface FigVideoCaptureConnectionConfiguration : FigCaptureConnectionConfiguration

{
    int _outputFormat;
    int _outputWidth;
    int _outputHeight;
    int _videoStabilizationMethod;
    _Bool _mirroringEnabled;
    int _orientation;
    int _retainedBufferCount;
    _Bool _cameraIntrinsicMatrixDeliveryEnabled;
    _Bool _livePhotoMetadataWritingEnabled;
}

@property (readonly) _Bool previewDepthFilterRenderingEnabled;
@property (readonly) _Bool previewDepthDataDeliveryEnabled;
@property (readonly) _Bool previewFilterRenderingEnabled;
@property (readonly) _Bool irisVISEnabled;
@property (readonly) int irisVISMethod;
@property (readonly) _Bool irisSDOFEnabled;
@property (readonly) struct FigCaptureVideoTransform transform;
@property (nonatomic) int outputFormat;
@property (nonatomic) int outputWidth;
@property (nonatomic) int outputHeight;
@property (nonatomic) int videoStabilizationMethod;
@property (nonatomic) _Bool mirroringEnabled;
@property (nonatomic) int orientation;
@property (nonatomic) int retainedBufferCount;
@property (nonatomic) _Bool cameraIntrinsicMatrixDeliveryEnabled;
@property (nonatomic) _Bool livePhotoMetadataWritingEnabled;

+ (_Bool)cameraIntrinsicMatrixDeliveryEnabled:(id)arg1 doingFaceTracking:(_Bool)arg2;
+ (int)videoStabilizationMethod:(id)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (_Bool)requiresScalingForInputTransForm:(struct FigCaptureVideoTransform)arg1 nodeName:(id)arg2;
- (struct FigCaptureVideoTransform)depthDataTransform;
- (struct FigCaptureVideoTransform)depthDataTransformWithSourceDimensions;
- (struct FigCaptureVideoTransform)_transformWithSourceDimensions:(CDStruct_79c71658)arg1 forceSourceDimensions:(_Bool)arg2;

@end
