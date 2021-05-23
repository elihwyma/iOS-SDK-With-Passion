/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNDetector.h>

@class VNCoreMLModel;

__attribute__((visibility("hidden")))
@interface VNCoreMLTransformer : VNDetector

{
    VNCoreMLModel *_model;
}

@property (readonly) VNCoreMLModel *model;

- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;
- (_Bool)needsMetalContext;
- (id)initWithOptions:(id)arg1 model:(id)arg2 error:(id *)arg3;

@end
