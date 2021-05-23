/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNDetector.h>

@class _VNImageAnalyzerMultiDetectorSceneOperationPointsCache;

__attribute__((visibility("hidden")))
@interface VNImageAnalyzerMultiDetector : VNDetector

{
    unsigned long long _model;
    shared_ptr_eb20c8f2 _defaultSceneClassificationHierarchicalModel;
    struct unique_ptr<vision::mod::ImageAnalyzer, std::__1::default_delete<vision::mod::ImageAnalyzer>> _imageAnalyzer;
    struct unordered_map<unsigned long, std::__1::shared_ptr<std::__1::vector<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::__1::allocator<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>>>, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, std::__1::shared_ptr<std::__1::vector<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::__1::allocator<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>>>>>> _imageAnalyzerJunkCustomClassifiers;
    struct unique_ptr<vision::mod::ImageAnalyzer_PCA, std::__1::default_delete<vision::mod::ImageAnalyzer_PCA>> _imageAnalyzerPCA256;
    _VNImageAnalyzerMultiDetectorSceneOperationPointsCache *_operationPointsCache;
    shared_ptr_53937872 _pipelineImageCorrectionNeed1CustomClassifier_DO_NOT_ACCESS_DIRECTLY;
    vector_950c3afd _cachedAllSceneClassificationsFromLastAnalysis;
}

+ (id)configurationOptionKeysForDetectorKey;
+ (Class)detectorClassForConfigurationOptions:(id)arg1 error:(id *)arg2;
+ (shared_ptr_eb20c8f2)createHierarchicalModelForMultiDetectorModel:(unsigned long long)arg1 requestRevision:(unsigned long long)arg2 error:(id *)arg3;
+ (unsigned long long)modelForRequestClass:(Class)arg1 revision:(unsigned long long)arg2 detectionLevel:(unsigned long long)arg3;
+ (id)blacklistForModel:(unsigned long long)arg1;

- (id).cxx_construct;
- (_Bool)supportsProcessingDevice:(id)arg1;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;
- (_Bool)completeInitializationAndReturnError:(id *)arg1;
- (_Bool)warmUpWithOptions:(id)arg1 error:(id *)arg2;
- (id)sceneLabelOperationPointsForRequestRevision:(unsigned long long)arg1 error:(id *)arg2;
- (void)_getImageCropAndScaleOption:(unsigned long long *)arg1 networkRequiredInputImageSize:(struct _Geometry2D_size2D_ *)arg2 forOptions:(id)arg3;
- (struct __CVBuffer *)_createScaledImagePixelBufferFromImageBuffer:(id)arg1 forNetworkInputImageSize:(struct _Geometry2D_size2D_)arg2 imageCropAndScaleOption:(unsigned long long)arg3 options:(id)arg4 error:(id *)arg5;
- (void)_tileRect:(struct CGRect)arg1 horizontally:(_Bool)arg2 vertically:(_Bool)arg3 windowAspectRatio:(double)arg4 overlapPercentage:(double)arg5 usingBlock:(CDUnknownBlockType)arg6;
- (unsigned int)_analysisTypeForScene:(_Bool)arg1 junk:(_Bool)arg2 sceneprint:(_Bool)arg3 includingLabelsAndConfidences:(_Bool)arg4 compressedSceneprint:(_Bool)arg5 aesthetics:(_Bool)arg6 saliencyHeatMap:(_Bool)arg7 pipelineImageCorrectionNeed1:(_Bool)arg8;
- (_Bool)_populateLeafSceneObservations:(id)arg1 hierarchySceneObservations:(id)arg2 forLastAnalysisWithOptions:(id)arg3 error:(id *)arg4;
- (id)_sceneObservationsForLastAnalysisWithOptions:(id)arg1 error:(id *)arg2;
- (shared_ptr_53937872)_loadCustomClassifierWithModelName:(id)arg1 labelsFileName:(id)arg2 classifierName:(id)arg3 inputBlobName:(id)arg4 outputBlobName:(id)arg5 espressoEngine:(int)arg6 espressoPlanFlags:(int)arg7 espressoStorageType:(int)arg8 espressoDeviceID:(int)arg9 error:(id *)arg10;
- (shared_ptr_6ef80be1)_loadJunkCustomClassifiersForRequestRevision:(unsigned long long)arg1 options:(id)arg2 error:(id *)arg3;
- (shared_ptr_6ef80be1)_junkCustomClassifiersForRequestRevision:(unsigned long long)arg1 options:(id)arg2 error:(id *)arg3;
- (id)_junkObservationsForLastAnalysisWithOptions:(id)arg1 error:(id *)arg2;
- (shared_ptr_53937872)_loadPipelineImageCorrectionNeed1CustomClassifierForRequestRevision:(unsigned long long)arg1 options:(id)arg2 error:(id *)arg3;
- (shared_ptr_53937872)_pipelineImageCorrectionNeed1CustomClassifierForRequestRevision:(unsigned long long)arg1 options:(id)arg2 error:(id *)arg3;
- (id)_pipelineImageCorrectionNeed1ForLastAnalysisWithOptions:(id)arg1 error:(id *)arg2;
- (struct ImageAnalyzer_PCA *)_sceneprintCompressorForCompression:(unsigned long long)arg1 error:(id *)arg2;
- (id)_sceneprintObservationsForLastAnalysisOfSceneprint:(_Bool)arg1 includingLabelsAndConfidencesInSceneprint:(_Bool)arg2 compressedSceneprint:(_Bool)arg3 options:(id)arg4 error:(id *)arg5;
- (id)_aestheticsObservationsForLastAnalysisWithOptions:(id)arg1 error:(id *)arg2;
- (id)_saliencyObservationsForLastAnalysisWithRegionOfInterest:(struct CGRect)arg1 originalImageSize:(struct CGSize)arg2 options:(id)arg3 warningRecorder:(id)arg4 error:(id *)arg5;
- (_Bool)_performAnalysis:(unsigned int)arg1 on32BGRAImageInPixelBufferProvidedByBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (vector_950c3afd *)_lastAnalysisSceneClassifications;
- (id)_observationsForTopN:(const unsigned long long *)arg1 lastAnalysisSceneLabelsWithMinimumConfidence:(float)arg2 excludeObfuscatedLabels:(_Bool)arg3 labelBlackList:(id)arg4 sceneRequestRevisionNumber:(unsigned long long)arg5 operationPointsProvider:(id)arg6;
- (id)_observationsForTopN:(const unsigned long long *)arg1 sceneClassificationsInMap:(const unordered_map_b469de21 *)arg2 withMinimumConfidence:(float)arg3 labelBlackList:(id)arg4 sceneRequestRevisionNumber:(unsigned long long)arg5 operationPointsProvider:(id)arg6;
- (id)_observationsForScene:(_Bool)arg1 junk:(_Bool)arg2 sceneprint:(_Bool)arg3 includingLabelsAndConfidences:(_Bool)arg4 compressedSceneprint:(_Bool)arg5 aesthetics:(_Bool)arg6 saliencyHeatMap:(_Bool)arg7 pipelineImageCorrectionNeed1:(_Bool)arg8 of32BGRAImageInPixelBufferProvidedByBlock:(CDUnknownBlockType)arg9 withOptions:(id)arg10 originalImageSize:(struct CGSize)arg11 regionOfInterest:(struct CGRect)arg12 warningRecorder:(id)arg13 error:(id *)arg14;
- (_Bool)_getLeafSceneObservations:(id *)arg1 hierarchySceneObservations:(id *)arg2 of32BGRAImageInPixelBufferProvidedByBlock:(CDUnknownBlockType)arg3 withOptions:(id)arg4 error:(id *)arg5;
- (struct __CVBuffer *)_createScaledImagePixelBufferFromCropRect:(struct CGRect)arg1 ofImageBuffer:(id)arg2 forNetworkInputImageSize:(struct _Geometry2D_size2D_)arg3 imageCropAndScaleOption:(unsigned long long)arg4 options:(id)arg5 error:(id *)arg6;
- (id)supportedImageSizeSetForProcessingOptions:(id)arg1;
- (id)allKnownSceneClassificationsWithOptions:(id)arg1 error:(id *)arg2;
- (id)allJunkClassificationObservationsForOptions:(id)arg1 error:(id *)arg2;

@end
