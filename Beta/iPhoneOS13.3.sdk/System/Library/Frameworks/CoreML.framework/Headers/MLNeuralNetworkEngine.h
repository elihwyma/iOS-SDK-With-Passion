/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <CoreML/MLModel.h>

@class MLModelDescription, MLModelInterface, MLModelMetadata, MLProbabilityDictionary, NSArray, NSDictionary, NSObject, NSString;

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface MLNeuralNetworkEngine : MLModel

{
    _Bool _hardwareFallbackDetected;
    _Bool _ndArrayInterpretation;
    _Bool _usingCPU;
    _Bool _isEspresoBiasPreprocessingShared;
    _Bool _hasBidirectionalLayer;
    _Bool _hasOptionalInputSequenceConcat;
    _Bool _isGPUPathForbidden;
    _Bool _isANEPathForbidden;
    int _precision;
    int _engine;
    int _qos;
    NSArray *_classLabels;
    NSString *_classScoreVectorName;
    NSArray *_inputLayers;
    NSArray *_outputLayers;
    NSDictionary *_imagePreprocessingParameters;
    NSDictionary *_espressoInputShapes;
    NSDictionary *_espressoInputStrides;
    unsigned long long _numInputs;
    unsigned long long _numOutputs;
    void *_plan;
    void *_context;
    MLProbabilityDictionary *_probDict;
    NSString *_modelFilePath;
    NSObject<OS_dispatch_semaphore> *_bufferSemaphore;
    NSObject<OS_dispatch_queue> *_espressoQueue;
    NSObject<OS_dispatch_queue> *_predictionsQueue;
    NSObject<OS_dispatch_semaphore> *_submitSemaphore;
    NSDictionary *_blobNameToRank;
    CDStruct_2bc666a5 _network;
    vector_d21bac94 _inputBuffers;
    vector_d21bac94 _outputBuffers;
    map_bc506073 _params;
    map_72eb5488 _widths;
    map_72eb5488 _heights;
    map_72eb5488 _ks;
    map_72eb5488 _batches;
    map_72eb5488 _sequences;
    map_72eb5488 _ranks;
    map_7c549560 _optionalInputTypes;
    vector_553f084a _bufferAvailable;
    set_0cfa92bf _flexibleShapesConfigNamesInNet;
    basic_string_90719d97 _currentConfigurationName;
    map_2ee3570a _OutputBlobIsDynamic;
}

@property (nonatomic, readonly) unsigned long long numInputs;
@property (nonatomic, readonly) unsigned long long numOutputs;
@property (nonatomic) vector_d21bac94 inputBuffers;
@property (nonatomic) vector_d21bac94 outputBuffers;
@property (nonatomic) _Bool usingCPU;
@property (nonatomic) void *plan;
@property (nonatomic) CDStruct_2bc666a5 network;
@property (nonatomic) map_bc506073 params;
@property (nonatomic) int precision;
@property (nonatomic) int engine;
@property (nonatomic) int qos;
@property (nonatomic) void *context;
@property (nonatomic) _Bool isEspresoBiasPreprocessingShared;
@property (nonatomic) map_72eb5488 widths;
@property (nonatomic) map_72eb5488 heights;
@property (nonatomic) map_72eb5488 ks;
@property (nonatomic) map_72eb5488 batches;
@property (nonatomic) map_72eb5488 sequences;
@property (nonatomic) map_72eb5488 ranks;
@property (retain, nonatomic) NSArray *classLabels;
@property (retain, nonatomic) NSString *classScoreVectorName;
@property (retain, nonatomic) MLProbabilityDictionary *probDict;
@property (retain, nonatomic) NSString *modelFilePath;
@property (nonatomic) map_7c549560 optionalInputTypes;
@property (nonatomic) _Bool hasBidirectionalLayer;
@property (nonatomic) _Bool hasOptionalInputSequenceConcat;
@property (retain) NSObject<OS_dispatch_semaphore> *bufferSemaphore;
@property (retain) NSObject<OS_dispatch_queue> *espressoQueue;
@property (retain) NSObject<OS_dispatch_queue> *predictionsQueue;
@property vector_553f084a bufferAvailable;
@property (retain) NSObject<OS_dispatch_semaphore> *submitSemaphore;
@property _Bool isGPUPathForbidden;
@property _Bool isANEPathForbidden;
@property set_0cfa92bf flexibleShapesConfigNamesInNet;
@property basic_string_90719d97 currentConfigurationName;
@property (nonatomic) map_2ee3570a OutputBlobIsDynamic;
@property (nonatomic) _Bool ndArrayInterpretation;
@property (retain, nonatomic) NSDictionary *imagePreprocessingParameters;
@property (retain, nonatomic) NSDictionary *blobNameToRank;
@property (retain, nonatomic, readonly) NSArray *inputLayers;
@property (retain, nonatomic, readonly) NSArray *outputLayers;
@property (nonatomic) _Bool hardwareFallbackDetected;
@property (retain, nonatomic) NSDictionary *espressoInputShapes;
@property (retain, nonatomic) NSDictionary *espressoInputStrides;
@property (retain, nonatomic) MLModelDescription *modelDescription;
@property (readonly) MLModelInterface *interface;
@property (readonly) MLModelMetadata *metadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)loadModelFromSpecification:(struct _MLModelSpecification *)arg1 configuration:(id)arg2 error:(id *)arg3;
+ (id)loadModelFromCompiledArchive:(struct _MLModelInputArchiver *)arg1 modelVersionInfo:(id)arg2 compilerVersionInfo:(id)arg3 configuration:(id)arg4 error:(id *)arg5;
+ (id)neuralNetworkFromContainer:(id)arg1 error:(id *)arg2;
+ (id)neuralNetworkFromContainer:(id)arg1 configuration:(id)arg2 error:(id *)arg3;
+ (id)neuralNetworkFromContainer:(id)arg1 classScoreVectorName:(id)arg2 classLabels:(id)arg3 error:(id *)arg4;

- (void)dealloc;
- (id).cxx_construct;
- (id)classify:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)predictionsFromBatch:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)regress:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)evaluate:(id)arg1 error:(id *)arg2;
- (_Bool)usingEspressoConfigurations;
- (_Bool)sequenceConcatConsumesOptionalInputNamed:(id)arg1;
- (int)sequenceNamed:(id)arg1;
- (id)convertPredictionToClassifierResult:(id)arg1 withOptions:(id)arg2 error:(id *)arg3;
- (id)addClassifierInformationToOutput:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)availableOutputBlobList;
- (_Bool)_matchEngineToOptions:(id)arg1 error:(id *)arg2;
- (id)initWithContainer:(id)arg1 error:(id *)arg2;
- (void)collectParametersFromContainer:(id)arg1 configuration:(id)arg2;
- (id)initWithContainer:(id)arg1 configuration:(id)arg2 error:(id *)arg3;
- (_Bool)fillInInitialShapeFromEspressoNet:(id *)arg1;
- (_Bool)_setupContextAndPlanWithForceCPU:(_Bool)arg1 error:(id *)arg2;
- (_Bool)_setupContextAndPlanWithConfiguration:(id)arg1 error:(id *)arg2;
- (_Bool)_setupContextAndPlanWithConfiguration:(id)arg1 usingCPU:(_Bool)arg2 error:(id *)arg3;
- (id)verifyInputs:(id)arg1 error:(id *)arg2;
- (unsigned long long)obtainBuffer;
- (void)releaseBuffer:(unsigned long long)arg1;
- (_Bool)bindInputsAndOutputs:(id)arg1 allocatedImageData:(vector_fd38efa8 *)arg2 bufferIndex:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)unlockCVPixelBuffers:(id)arg1 error:(id *)arg2;
- (id)evaluateNoAutoRelease:(id)arg1 error:(id *)arg2;
- (id)populateOutputs:(unsigned long long)arg1 error:(id *)arg2;
- (struct __CVBuffer *)_pixelBufferFromEbuf:(CDStruct_cf098810 *)arg1 description:(id)arg2 error:(id *)arg3;
- (void)_deallocContextAndPlan;
- (id)sortBatchByShape:(id)arg1 withMap:(id *)arg2 error:(id *)arg3;
- (_Bool)resetSizes:(id)arg1 error:(id *)arg2;
- (_Bool)resetSizesWithEspressoConfigurations:(id)arg1 error:(id *)arg2;
- (_Bool)resetSizesNoAutoRelease:(id)arg1 error:(id *)arg2;
- (_Bool)rebuildPlan:(id *)arg1;
- (id)evaluateBatch:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (void)dumpTestVectorsToPath:(id)arg1;
- (id)parameterValueForKey:(id)arg1 error:(id *)arg2;

@end
