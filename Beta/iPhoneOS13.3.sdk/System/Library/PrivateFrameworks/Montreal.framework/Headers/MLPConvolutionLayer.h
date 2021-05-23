/*
 Image: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
 */

#import <Montreal/MLPConvolutionBase.h>

@class MLPModelConvolutionDataSource;

@interface MLPConvolutionLayer : MLPConvolutionBase

{
    MLPModelConvolutionDataSource *_dataSource;
    const void *_initialWeights;
    const void *_initialBias;
}

@property (retain) MLPModelConvolutionDataSource *dataSource;
@property const void *initialWeights;
@property const void *initialBias;

- (id)generateNode:(id)arg1 model:(id)arg2 weightIter:(unsigned long long *)arg3;
- (id)initWithName:(id)arg1 parameters:(CDStruct_96916c69 *)arg2;
- (void)createKernel;
- (struct NSArray *)forward:(id)arg1 input:(struct NSArray *)arg2 labels:(id)arg3 runInference:(_Bool)arg4;
- (struct NSArray *)backward:(id)arg1 inputGradient:(struct NSArray *)arg2;
- (void)updatePrimaryCurrentState:(struct NSArray *)arg1 index:(id)arg2 inference:(_Bool)arg3;
- (id)initWithName:(id)arg1 inputLength:(unsigned long long)arg2 inputChannels:(unsigned long long)arg3 kernelWidth:(unsigned long long)arg4 kernelHeight:(unsigned long long)arg5 kernelStride:(unsigned long long)arg6 outputChannels:(unsigned long long)arg7 neuronType:(int)arg8 neuronParams:(id)arg9;
- (id)initWithName:(id)arg1 previousLayer:(id)arg2 kernelWidth:(unsigned long long)arg3 kernelHeight:(unsigned long long)arg4 kernelStride:(unsigned long long)arg5 outputChannels:(unsigned long long)arg6 neuronType:(int)arg7 neuronParams:(id)arg8;

@end
