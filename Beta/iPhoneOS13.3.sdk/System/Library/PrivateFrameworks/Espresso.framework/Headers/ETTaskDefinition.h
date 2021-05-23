/*
 Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

#import <NSObject.h>

@class ETModelDefinition, ETOptimizerDefinition, ETTaskState, ETVariablesDefinition, NSArray;

@interface ETTaskDefinition : NSObject

{
    struct unordered_map<std::__1::basic_string<char>, unsigned long, std::__1::hash<std::__1::basic_string<char>>, std::__1::equal_to<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, unsigned long>>> inference_layer_index;
    ETVariablesDefinition *varsDef;
    unsigned long long runtimePlatform;
    int precision;
    basic_string_90719d97 training_control_name;
    basic_string_90719d97 training_control_end_name;
    basic_string_90719d97 gradient_control_name;
    basic_string_90719d97 gradient_control_end_name;
    basic_string_90719d97 optimizer_control_name;
    basic_string_90719d97 optimizer_control_end_name;
    ETModelDefinition *_inferenceModel;
    ETOptimizerDefinition *_optimizer;
    unsigned long long _platform;
    ETTaskState *_taskState;
    unsigned long long _batchSize;
    NSArray *_outputNames;
    shared_ptr_d082c67d _inferenceGraphNetPtr;
    shared_ptr_d082c67d _trainingGraphNetPtr;
    vector_ebb6ef3e _non_batches;
    unordered_map_1de83e55 _blobShapes;
}

@property shared_ptr_d082c67d inferenceGraphNetPtr;
@property shared_ptr_d082c67d trainingGraphNetPtr;
@property unsigned long long batchSize;
@property (retain) NSArray *outputNames;
@property unordered_map_1de83e55 blobShapes;
@property vector_ebb6ef3e non_batches;
@property (retain, nonatomic) ETModelDefinition *inferenceModel;
@property (retain, nonatomic) ETOptimizerDefinition *optimizer;
@property (nonatomic) unsigned long long platform;
@property (retain, nonatomic) ETTaskState *taskState;

- (id)description;
- (id).cxx_construct;
- (id)initWithModelDefinition:(id)arg1 lossDefinition:(id)arg2 variablesDefinition:(id)arg3 optimizerDefinition:(id)arg4 forPlatform:(unsigned long long)arg5 error:(id *)arg6;
- (id)getParameterOfType:(unsigned long long)arg1 forLayerNamed:(id)arg2 error:(id *)arg3;
- (_Bool)saveNetwork:(id)arg1 inplace:(_Bool)arg2 error:(id *)arg3;
- (id)getTensorNamed:(id)arg1;
- (_Bool)setTensorNamed:(id)arg1 withValue:(id)arg2 error:(id *)arg3;
- (_Bool)doTrainingOnData:(id)arg1 forNumberOfEpochs:(unsigned long long)arg2 withCallback:(id)arg3 error:(id *)arg4;
- (id)doInferenceOnData:(id)arg1 error:(id *)arg2;
- (void)reloadOnRuntinePlatform:(id *)arg1;
- (void)shareWeights;
- (id)namesVectorToFoundationArray:(vector_ebb6ef3e)arg1;
- (_Bool)saveInferenceNetwork:(id)arg1 error:(id *)arg2;
- (unsigned long long)dataTypeForParameterOfType:(unsigned long long)arg1 fromLayerNamed:(id)arg2;
- (unsigned long long)platformForLayerNamed:(id)arg1 error:(id *)arg2;

@end
