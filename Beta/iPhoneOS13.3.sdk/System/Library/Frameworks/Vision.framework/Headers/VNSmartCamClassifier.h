/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNEspressoModelClassifier.h>

__attribute__((visibility("hidden")))
@interface VNSmartCamClassifier : VNEspressoModelClassifier

+ (shared_ptr_047f28ed)createClassifierWithDescriptor:(shared_ptr_b26ea6de)arg1 classifierAbsolutePath:(const char *)arg2 computePlatform:(int)arg3 computePath:(int)arg4 labelsFilename:(const char *)arg5 options:(struct Options)arg6;
+ (shared_ptr_b26ea6de)createDescriprorProcessorWithModelPath:(const char *)arg1 nBatch:(int)arg2 computePlatform:(int)arg3 computePath:(int)arg4 options:(struct Options)arg5;
+ (id)classifierResourceTypesToNamesForRevision:(unsigned long long)arg1;
+ (Class)espressoModelImageprintClass;
+ (id)returnAllResultsOptionKey;
+ (id)createObservationWithDescriptors:(id)arg1 forRequestRevision:(unsigned long long)arg2;
+ (void)initDumpDebugIntermediates:(id *)arg1 debugInfo:(id *)arg2;

- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;
- (_Bool)completeInitializationAndReturnError:(id *)arg1;

@end
