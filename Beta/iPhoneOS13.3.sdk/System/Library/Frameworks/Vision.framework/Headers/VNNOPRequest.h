/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNImageBasedRequest.h>

@class VNSupportedImageSize;

@interface VNNOPRequest : VNImageBasedRequest

@property (copy, nonatomic) VNSupportedImageSize *detectorPreferredImageSize;
@property (nonatomic) _Bool detectorWantsAnisotropicScaling;
@property (nonatomic) double detectorExecutionTimeInterval;

+ (Class)configurationClass;

- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
- (_Bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;
- (id)supportedImageSizeSet;
- (_Bool)hasCancellationHook;
- (struct CGSize)_actualSizeForDesiredSize:(id)arg1 ofSourceImageWidth:(unsigned long long)arg2 height:(unsigned long long)arg3;
- (struct __CVBuffer *)_createScaledImagePixelBufferFromCropRect:(struct CGRect)arg1 ofImageBuffer:(id)arg2 inPixelFormat:(unsigned int)arg3 forDetectorInputImageSize:(struct CGSize)arg4 usingAnisotropicScaling:(_Bool)arg5 options:(id)arg6 error:(id *)arg7;
- (struct __CVBuffer *)_createScaledImagePixelBufferFromImageBuffer:(id)arg1 inPixelFormat:(unsigned int)arg2 forDetectorInputImageSize:(struct CGSize)arg3 usingAnisotropicScaling:(_Bool)arg4 options:(id)arg5 error:(id *)arg6;
- (_Bool)_performNOPForRevision:(unsigned long long)arg1 inContext:(id)arg2 detectorCompletionSemaphore:(id)arg3 error:(id *)arg4;

@end
