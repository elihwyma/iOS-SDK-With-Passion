/*
 Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

#import <NSObject.h>

@class ETImageDescriptorExtractor, ETModelDef, ETOptimizerDef;

@interface ETTask : NSObject

{
    shared_ptr_d082c67d network;
    _Bool _dumpData;
    ETModelDef *_model;
    ETOptimizerDef *_optimizer;
    ETImageDescriptorExtractor *_extractor;
}

@property (retain, nonatomic) ETModelDef *model;
@property (retain, nonatomic) ETOptimizerDef *optimizer;
@property (retain, nonatomic) ETImageDescriptorExtractor *extractor;
@property (nonatomic) _Bool dumpData;

- (id)init;
- (id).cxx_construct;
- (id)evaluate:(id)arg1;
- (id)initWithModelDef:(id)arg1 optimizerDef:(id)arg2 extractor:(id)arg3;
- (id)initWithModelDef:(id)arg1 optimizerDef:(id)arg2 extractor:(id)arg3 needWeightsInitialization:(_Bool)arg4;
- (vector_ebb6ef3e)reinitializeVariables;
- (id)initWithModelDef:(id)arg1 optimizerDef:(id)arg2 lossConfig:(id)arg3;
- (id)initWithModelDef:(id)arg1 optimizerDef:(id)arg2 lossConfig:(id)arg3 extractor:(id)arg4;
- (float)fit:(id)arg1 numberOfEpochs:(int)arg2 withProgress:(CDUnknownBlockType)arg3;
- (float)fit:(id)arg1 numberOfBatches:(unsigned int)arg2 withProgress:(CDUnknownBlockType)arg3;
- (_Bool)runBatches:(id)arg1 numberOfBatches:(unsigned int)arg2 outputNames:(id)arg3 batchCallback:(CDUnknownBlockType)arg4;
- (_Bool)fit:(id)arg1 numberOfBatches:(unsigned int)arg2 outputNames:(id)arg3 batchCallback:(CDUnknownBlockType)arg4;
- (_Bool)fit:(id)arg1 numberOfEpochs:(int)arg2 outputNames:(id)arg3 batchCallback:(CDUnknownBlockType)arg4;
- (_Bool)runInference:(id)arg1 outputNames:(id)arg2 batchCallback:(CDUnknownBlockType)arg3;
- (void)saveNetwork:(id)arg1;
- (void)saveNetwork:(id)arg1 revertToInferenceMode:(_Bool)arg2;
- (_Bool)moveToGPU:(int)arg1 error:(id *)arg2;

@end
