/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNDetector.h>

__attribute__((visibility("hidden")))
@interface VNFaceGeometryEstimator : VNDetector

- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;
- (_Bool)_buildCalibrationMatrix:(id)arg1 calibrationMatrix:(float *)arg2 error:(id *)arg3;

@end
