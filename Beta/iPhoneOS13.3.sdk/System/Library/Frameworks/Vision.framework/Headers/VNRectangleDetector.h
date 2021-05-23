/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNDetector.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VNRectangleDetector : VNDetector

{
    float *_perMeshPtr;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)supportedImageSizeSetForOptions:(id)arg1;

- (void)dealloc;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;
- (_Bool)needsMetalContext;

@end
