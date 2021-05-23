/*
 Image: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
 */

#import <NSObject.h>

@class MLPNetwork, MPSKernel, MontrealNNModelNode, NSString;

@interface MLPLayer : NSObject

{
    int _neuronType;
    float _neuronA;
    float _neuronB;
    float _neuronC;
    NSString *_name;
    unsigned long long _layerType;
    MontrealNNModelNode *_node;
    unsigned long long _inputLength;
    unsigned long long _inputChannels;
    unsigned long long _outputChannels;
    unsigned long long _outputLength;
    MPSKernel *_forwardKernel;
    MPSKernel *_secondaryForwardKernel;
    MPSKernel *_primaryGradientKernel;
    MPSKernel *_secondaryGradientKernel;
    MLPLayer *_previousLayer;
    MLPLayer *_nextLayer;
    MLPNetwork *_network;
}

@property (readonly) NSString *name;
@property (readonly) unsigned long long layerType;
@property (retain) MontrealNNModelNode *node;
@property (readonly) int neuronType;
@property (readonly) float neuronA;
@property (readonly) float neuronB;
@property (readonly) float neuronC;
@property unsigned long long inputLength;
@property unsigned long long inputChannels;
@property unsigned long long outputChannels;
@property unsigned long long outputLength;
@property (retain) MPSKernel *forwardKernel;
@property (retain) MPSKernel *secondaryForwardKernel;
@property (retain) MPSKernel *primaryGradientKernel;
@property (retain) MPSKernel *secondaryGradientKernel;
@property (weak) MLPLayer *previousLayer;
@property (weak) MLPLayer *nextLayer;
@property (weak) MLPNetwork *network;

+ (id)layerWithMontrealNode:(id)arg1 modelContainer:(void *)arg2;

- (void)updatePreviousLayer:(id)arg1 nextLayer:(id)arg2 network:(id)arg3;
- (id)generateNode:(id)arg1 model:(id)arg2 weightIter:(unsigned long long *)arg3;
- (id)initWithLayerType:(unsigned long long)arg1 name:(id)arg2 neuronType:(int)arg3 neuronParams:(id)arg4;
- (id)initWithLayerType:(unsigned long long)arg1 name:(id)arg2 parameters:(CDStruct_96916c69 *)arg3;
- (id)initWithName:(id)arg1 parameters:(CDStruct_96916c69 *)arg2;
- (void)createKernel;
- (struct NSArray *)forward:(id)arg1 input:(struct NSArray *)arg2 labels:(id)arg3 runInference:(_Bool)arg4;
- (struct NSArray *)backward:(id)arg1 inputGradient:(struct NSArray *)arg2;
- (struct NSArray *)seqForward:(id)arg1 input:(struct NSArray *)arg2 dataBatch:(id)arg3 runInference:(_Bool)arg4;
- (struct NSArray *)seqBackward:(id)arg1 dataBatch:(id)arg2 inputGradient:(struct NSArray *)arg3;
- (int)mpsNeuronTypeFromMontrealType:(long long)arg1;
- (id)generateNode:(id)arg1 model:(id)arg2 weightIter:(unsigned long long *)arg3 params:(CDStruct_96916c69 *)arg4 inputChunks:(id)arg5 outputChunks:(id)arg6;
- (void)printMatrix:(id)arg1 name:(id)arg2 cmdBuf:(id)arg3;
- (long long)montrealTypeFromMPSNeuronType:(int)arg1;

@end
