/*
 Image: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
 */

#import <Montreal/MontrealNNDescription.h>

@class MontrealNNModelQuantization, NSArray, NSDictionary, NSString;

@interface MontrealNNModelNode : MontrealNNDescription

{
    _Bool _parametersSet;
    NSString *_nodeStr;
    NSArray *_activations;
    NSString *_name;
    NSDictionary *_properties;
    NSArray *_inputs;
    NSArray *_inputsWithDimensions;
    NSArray *_outputs;
    NSArray *_outputsWithDimensions;
    NSArray *_weights;
    MontrealNNModelQuantization *_quantization;
    CDStruct_96916c69 _parameters;
}

@property _Bool parametersSet;
@property CDStruct_96916c69 parameters;
@property (readonly) NSString *nodeStr;
@property (readonly) NSArray *activations;
@property (readonly) NSString *name;
@property (readonly, getter=isValid) _Bool valid;
@property (readonly) NSDictionary *properties;
@property (retain, nonatomic) NSArray *inputs;
@property (retain, nonatomic) NSArray *inputsWithDimensions;
@property (retain, nonatomic) NSArray *outputs;
@property (retain, nonatomic) NSArray *outputsWithDimensions;
@property (readonly) NSArray *weights;
@property (readonly) MontrealNNModelQuantization *quantization;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isEqual:(id)arg1;
- (void)description:(id)arg1 indent:(id)arg2;
- (id)jsonDescription;
- (id)checkForValidity;
- (void)generateJSONAtPath:(id)arg1;
- (id)auditAndUpdateTensors:(id)arg1 dimensionTensors:(id)arg2;
- (id)createDataContainer;
- (id)initWithName:(id)arg1 nodeStr:(id)arg2 activations:(id)arg3 properties:(id)arg4 weights:(id)arg5;
- (id)initWithDictionary:(id)arg1 tensors:(id)arg2 quantization:(id)arg3 jsonDir:(id)arg4;
- (void)keepTensors:(id)arg1;
- (CDStruct_96916c69)parameters:(void *)arg1;

@end
