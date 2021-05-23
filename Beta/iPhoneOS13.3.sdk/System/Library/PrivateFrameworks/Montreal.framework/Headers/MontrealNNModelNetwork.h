/*
 Image: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
 */

#import <Montreal/MontrealNNDescription.h>

@class MontrealNNModelOptimizerParam, MontrealNNModelQuantization, NSArray, NSString;

@interface MontrealNNModelNetwork : MontrealNNDescription

{
    NSArray *_nodes;
    NSArray *_inputs;
    NSArray *_outputs;
    MontrealNNModelQuantization *_quantization;
    NSString *_jsonDir;
    MontrealNNModelOptimizerParam *_optimizerParams;
}

@property (retain) NSArray *nodes;
@property (retain) NSArray *inputs;
@property (retain) NSArray *outputs;
@property (readonly) MontrealNNModelQuantization *quantization;
@property (readonly) NSString *jsonDir;
@property (readonly) MontrealNNModelOptimizerParam *optimizerParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)description:(id)arg1 indent:(id)arg2;
- (id)jsonDescription;
- (id)checkForValidity;
- (void)generateJSONAtPath:(id)arg1;
- (void *)generateModelContainer;
- (id)initWithJSONDir:(id)arg1;
- (id)createDataContainer;
- (id)initWithModelContainer:(void *)arg1 tensors:(id)arg2;
- (id)initWithDictionary:(id)arg1 tensors:(id)arg2 quantization:(id)arg3 optimizerParams:(id)arg4 jsonDir:(id)arg5 optimization:(unsigned long long)arg6;
- (void)validateNetworkTensors:(id)arg1;
- (void)collapseNodes;
- (void)validateNodeTensors;
- (void)collapsePackUnpack:(id)arg1 nodesToRemove:(id)arg2;
- (void)removeView:(id)arg1 nodesToRemove:(id)arg2;

@end
