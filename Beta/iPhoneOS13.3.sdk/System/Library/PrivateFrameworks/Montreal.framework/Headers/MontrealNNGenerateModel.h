/*
 Image: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
 */

#import <NSObject.h>

@class MontrealNNModelNetwork, NSMutableDictionary;

@interface MontrealNNGenerateModel : NSObject

{
    struct MontrealNeuralNetwork *_nnObject;
    unsigned long long _weightFormat;
    MontrealNNModelNetwork *_network;
    NSMutableDictionary *_inputs;
    NSMutableDictionary *_outputs;
}

@property (readonly) unsigned long long weightFormat;
@property (readonly) MontrealNNModelNetwork *network;
@property struct MontrealNeuralNetwork *nnObject;
@property (readonly) NSMutableDictionary *inputs;
@property (readonly) NSMutableDictionary *outputs;

- (void)dealloc;
- (id)initWithWeightFormat:(unsigned long long)arg1;
- (void)merge:(id)arg1;
- (void)removeInput:(id)arg1;
- (void)removeOutput:(id)arg1;
- (void *)generateModelContainer;
- (void)addInputs:(id)arg1;
- (void)addOutputs:(id)arg1;
- (id)networkInputs;
- (id)networkOutputs;
- (id)modelContainerPath;

@end
