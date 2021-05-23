/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNDetector.h>

__attribute__((visibility("hidden")))
@interface VNJunkIdentifier : VNDetector

{
    shared_ptr_b26ea6de mJunkDescriptorImpl;
    shared_ptr_047f28ed mJunkClassifierImpl;
}

+ (_Bool)shouldDumpDebugIntermediates;

- (id).cxx_construct;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;
- (_Bool)completeInitializationAndReturnError:(id *)arg1;

@end
