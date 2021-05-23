/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNDetector.h>

__attribute__((visibility("hidden")))
@interface VNTorsoprintGenerator : VNDetector

{
    void *_mEspressoContext;
    void *_mEspressoPlan;
    CDStruct_2bc666a5 _mEspressoNetwork;
}

+ (id)configurationOptionKeysForDetectorKey;
+ (struct CGSize)_torsoprintInputImageSizeForFaceOrientation:(int)arg1;
+ (struct CGSize)_torsoprintDescriptorSize;
+ (float)_minimumTorsoInsideInputImageThreshold;
+ (float)_magnifiedBBoxScaleFactor;

- (void)dealloc;
- (_Bool)supportsProcessingDevice:(id)arg1;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;
- (_Bool)completeInitializationAndReturnError:(id *)arg1;
- (_Bool)_calculateTorsoBBoxFromFaceBBox:(struct CGRect)arg1 insideImageWithSize:(struct CGSize)arg2 faceOrientationRelativeToUpright:(int)arg3 torsoBBox:(struct CGRect *)arg4 error:(id *)arg5;

@end
