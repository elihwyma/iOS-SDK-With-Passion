/*
 Image: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
 */

#import <Montreal/MLPLayer.h>

@class NSMutableDictionary;

@interface MLPMatrixLayer : MLPLayer

{
    unsigned long long _numInputs;
    unsigned long long _numOutputs;
    NSMutableDictionary *_inputMatrixToSecondKernel;
    NSMutableDictionary *_inputMatrixToFirstKernel;
}

@property unsigned long long numInputs;
@property unsigned long long numOutputs;
@property (retain) NSMutableDictionary *inputMatrixToSecondKernel;
@property (retain) NSMutableDictionary *inputMatrixToFirstKernel;

- (id)initWithLayerType:(unsigned long long)arg1 name:(id)arg2 neuronType:(int)arg3 neuronParams:(id)arg4;
- (void)allocateInputDictionaries;
- (id)initWithLayerType:(unsigned long long)arg1 name:(id)arg2 parameters:(CDStruct_96916c69 *)arg3;
- (void)updateInputMatrixToFirstKernel:(id)arg1 index:(id)arg2 inference:(_Bool)arg3;
- (void)updateInputMatrixToSecondKernel:(id)arg1 index:(id)arg2 inference:(_Bool)arg3;

@end
