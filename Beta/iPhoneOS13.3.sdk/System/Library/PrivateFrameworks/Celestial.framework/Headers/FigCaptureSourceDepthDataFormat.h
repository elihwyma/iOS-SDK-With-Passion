/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/FigCaptureSourceFormat.h>

@class NSArray;

@interface FigCaptureSourceDepthDataFormat : FigCaptureSourceFormat

@property (readonly) CDStruct_79c71658 dimensions;
@property (readonly) float minSupportedFrameRate;
@property (readonly) float maxSupportedFrameRate;
@property (readonly) float fieldOfView;
@property (readonly) CDStruct_79c71658 highResStillImageDimensions;
@property (readonly, getter=isStillImageOnlyDepthData) _Bool stillImageOnlyDepthData;
@property (readonly) float portraitEffectsMatteMainImageDownscalingFactor;
@property (readonly) _Bool RGBIRStereoFusionSupported;
@property (readonly) NSArray *supportedSemanticSegmentationMatteURNs;

- (unsigned int)mediaType;
- (struct opaqueCMFormatDescription *)formatDescription;
- (CDStruct_79c71658)depthEngineOutputDimensions;
- (id)copyWithNewPixelFormat:(unsigned int)arg1;

@end
