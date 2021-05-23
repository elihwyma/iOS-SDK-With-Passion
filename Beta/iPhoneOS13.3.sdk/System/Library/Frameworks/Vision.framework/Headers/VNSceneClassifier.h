/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNEspressoModelClassifier.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VNSceneClassifier : VNEspressoModelClassifier

{
    shared_ptr_eb20c8f2 _sceneClassifierHierarchicalModel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)configurationOptionKeysForDetectorKey;
+ (id)supportedImageSizeSetForOptions:(id)arg1;
+ (shared_ptr_047f28ed)createClassifierWithDescriptor:(shared_ptr_b26ea6de)arg1 classifierAbsolutePath:(const char *)arg2 computePlatform:(int)arg3 computePath:(int)arg4 labelsFilename:(const char *)arg5 options:(struct Options)arg6;
+ (shared_ptr_b26ea6de)createDescriprorProcessorWithModelPath:(const char *)arg1 nBatch:(int)arg2 computePlatform:(int)arg3 computePath:(int)arg4 options:(struct Options)arg5;
+ (id)classifierResourceTypesToNamesForRevision:(unsigned long long)arg1;
+ (Class)espressoModelImageprintClass;
+ (id)returnAllResultsOptionKey;
+ (id)createObservationWithDescriptors:(id)arg1 forRequestRevision:(unsigned long long)arg2;
+ (void)initDumpDebugIntermediates:(id *)arg1 debugInfo:(id *)arg2;

- (id).cxx_construct;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;
- (_Bool)completeInitializationAndReturnError:(id *)arg1;
- (_Bool)isSceneprinterCompatibleWithSceneprinterCreatedWithOptions:(id)arg1 error:(id *)arg2;
- (_Bool)initImageDescriptorBuffer:(id)arg1 descriptorBuffer:(shared_ptr_0a6daad2 *)arg2 error:(id *)arg3;
- (id)labelOperationPointsForRequestRevision:(unsigned long long)arg1 error:(id *)arg2;

@end
