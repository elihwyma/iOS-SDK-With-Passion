/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <CoreML/MLNeuralNetworkEngine.h>

@class ETTaskDefinition, ETTaskState, MLParameterContainer, MLShufflingBatchProvider, MLUpdateProgressHandlers, NSDictionary, NSObject, NSString;

@protocol OS_dispatch_queue;

@interface MLNeuralNetworkUpdateEngine : MLNeuralNetworkEngine

{
    _Bool _continueWithUpdate;
    ETTaskState *_snapshot;
    ETTaskDefinition *_task;
    NSString *_lossTargetName;
    NSDictionary *_classLabelToIndexMap;
    MLUpdateProgressHandlers *_progressHandlers;
    NSObject<OS_dispatch_queue> *_progressHandlersDispatchQueue;
    NSDictionary *_coreMLToEspressoParamsMap;
    NSString *_lossOutputName;
    MLShufflingBatchProvider *_shuffableTrainingData;
    MLParameterContainer *_parameterContainer;
}

@property (retain, nonatomic) MLUpdateProgressHandlers *progressHandlers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *progressHandlersDispatchQueue;
@property (retain, nonatomic) NSDictionary *coreMLToEspressoParamsMap;
@property (retain, nonatomic) NSString *lossOutputName;
@property (retain, nonatomic) NSString *lossTargetName;
@property (nonatomic) _Bool continueWithUpdate;
@property (retain, nonatomic) MLShufflingBatchProvider *shuffableTrainingData;
@property (retain, nonatomic) MLParameterContainer *parameterContainer;
@property (retain, nonatomic) ETTaskState *snapshot;
@property (retain, nonatomic) ETTaskDefinition *task;
@property (nonatomic, readonly) NSDictionary *classLabelToIndexMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)loadModelFromCompiledArchive:(struct _MLModelInputArchiver *)arg1 modelVersionInfo:(id)arg2 compilerVersionInfo:(id)arg3 configuration:(id)arg4 error:(id *)arg5;
+ (id)createCoreMLToEspressoParamsMap;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)writeToURL:(id)arg1 error:(id *)arg2;
- (id)predictionFromFeatures:(id)arg1 error:(id *)arg2;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)predictionsFromBatch:(id)arg1 error:(id *)arg2;
- (id)predictionsFromBatch:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)stringForDataType:(unsigned long long)arg1;
- (id)parameterValueForKey:(id)arg1 error:(id *)arg2;
- (void)setUpdateProgressHandlers:(id)arg1 dispatchQueue:(id)arg2;
- (void)updateModelWithData:(id)arg1;
- (void)resumeUpdateWithParameters:(id)arg1;
- (void)resumeUpdate;
- (void)cancelUpdate;
- (id)updateParameters;
- (id)createEspressoTaskFrom:(id)arg1 updateParameters:(struct NetworkUpdateParameters *)arg2 lossInputName:(id)arg3 lossTargetName:(id)arg4 lossOutputName:(id)arg5 updatableLayerNames:(id)arg6 configuration:(id)arg7 error:(id *)arg8;
- (_Bool)loadUpdateParameters:(struct NetworkUpdateParameters *)arg1 fromCompiledArchive:(struct _MLModelInputArchiver *)arg2 error:(id *)arg3;
- (void)loadLossInputName:(id *)arg1 updatableLayerNames:(id *)arg2 fromCompiledArchive:(struct _MLModelInputArchiver *)arg3;
- (void)loadLossTargetName:(id *)arg1 lossOutputName:(id *)arg2 fromUpdateParameters:(struct NetworkUpdateParameters *)arg3;
- (id)initWithCompiledArchive:(struct _MLModelInputArchiver *)arg1 nnContainer:(id)arg2 configuration:(id)arg3 error:(id *)arg4;
- (void)createClassLabelToIndexMap;
- (void)loadParameterDescriptionsAndContainerFromUpdateParameters:(const struct NetworkUpdateParameters *)arg1;
- (_Bool)updateLearningRateWithTaskContext:(id)arg1 isInCallBack:(_Bool)arg2 error:(id *)arg3;
- (id)collectMetricsFromTaskContext:(id)arg1 isInCallBack:(_Bool)arg2 error:(id *)arg3;
- (id)parameterValueForKey:(id)arg1;
- (id)paramsForLayer:(id)arg1 parameterType:(unsigned long long)arg2 error:(id *)arg3;
- (id)weightsForLayer:(id)arg1 error:(id *)arg2;
- (id)biasForLayer:(id)arg1 error:(id *)arg2;

@end
