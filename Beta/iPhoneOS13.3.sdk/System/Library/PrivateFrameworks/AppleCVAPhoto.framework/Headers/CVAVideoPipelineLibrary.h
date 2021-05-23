/*
 Image: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
 */

#import <NSObject.h>

@interface CVAVideoPipelineLibrary : NSObject

+ (int)prewarm;
+ (id)videoPipelinePropertiesForDevice:(unsigned long long)arg1;
+ (id)portraitVideoPipelineWithProperties:(id)arg1 error:(id *)arg2;
+ (id)colorCubePortraitGenericRequestForPortraitVideoPipeline:(id)arg1 sourceColorPixelBuffer:(struct __CVBuffer *)arg2 cubeData:(id)arg3 error:(id *)arg4;
+ (id)syntheticDepthOfFieldBackgroundRequestWithMattingRequest:(id)arg1 simulatedFocalRatio:(float)arg2 sourceColorGain:(float)arg3 sourceColorLux:(float)arg4 error:(id *)arg5;
+ (id)opaqueBackgroundRequestWithMattingRequest:(id)arg1 error:(id *)arg2;
+ (id)studioLightRequestWithFace:(id)arg1 relightStyleStrength:(float)arg2 error:(id *)arg3;
+ (id)studioLightRequestWithFace:(id)arg1 error:(id *)arg2;
+ (id)contourLightRequestWithFace:(id)arg1 relightStyleStrength:(float)arg2 error:(id *)arg3;
+ (id)contourLightRequestWithFace:(id)arg1 error:(id *)arg2;
+ (id)colorCubeRequestWithBackgroundCube:(id)arg1 foregroundCube:(id)arg2 error:(id *)arg3;
+ (id)portraitRequestWithBackground:(id)arg1 light:(id)arg2 post:(id)arg3 error:(id *)arg4;
+ (id)mattingVideoPipelineWithProperties:(id)arg1 error:(id *)arg2;
+ (id)disparityPostprocessingVideoPipelineWithProperties:(id)arg1 error:(id *)arg2;
+ (id)colorCubePortraitRequestForPortraitVideoPipeline:(id)arg1 withWithSourceColorPixelBuffer:(struct __CVBuffer *)arg2 destinationColorPixelBuffer:(struct __CVBuffer *)arg3 cubeData:(id)arg4;
+ (id)stageLightPortraitRequestWithMattingRequest:(id)arg1 destinationColorPixelBuffer:(struct __CVBuffer *)arg2 proxyCubeData:(id)arg3 cubeData:(id)arg4;
+ (id)stageLightPortraitRequestWithMattingRequest:(id)arg1 destinationColorPixelBuffer:(struct __CVBuffer *)arg2 proxyCubeData:(id)arg3 cubeData:(id)arg4 vignetteIntensity:(float)arg5 stageLightIntensity:(float)arg6;
+ (id)syntheticDepthOfFieldPortraitRequestWithMattingRequest:(id)arg1 destinationColorPixelBuffer:(struct __CVBuffer *)arg2 backgroundColorCube:(id)arg3 foregroundColorCube:(id)arg4 colorCubeIntensity:(float)arg5 simulatedFocalRatio:(float)arg6 sourceColorGain:(float)arg7 sourceColorLux:(float)arg8;
+ (id)sourceImageRequest:(struct __CVBuffer *)arg1 error:(id *)arg2;
+ (id)colorCubeRequest:(id)arg1 isMono:(_Bool)arg2 error:(id *)arg3;
+ (id)portraitVideoPipelineWithProperties:(id)arg1;
+ (id)mattingVideoPipelineWithProperties:(id)arg1;
+ (id)disparityPostprocessingVideoPipelineWithProperties:(id)arg1;

@end
