/*
 Image: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
 */

#import <Montreal/MLPImageLayer.h>

@interface MLPDropoutLayer : MLPImageLayer

{
    float _dropoutRatio;
}

@property (readonly) float dropoutRatio;

- (void)updatePreviousLayer:(id)arg1 nextLayer:(id)arg2 network:(id)arg3;
- (id)generateNode:(id)arg1 model:(id)arg2 weightIter:(unsigned long long *)arg3;
- (id)initWithName:(id)arg1 parameters:(CDStruct_96916c69 *)arg2;
- (void)createKernel;
- (struct NSArray *)forward:(id)arg1 input:(struct NSArray *)arg2 labels:(id)arg3 runInference:(_Bool)arg4;
- (struct NSArray *)backward:(id)arg1 inputGradient:(struct NSArray *)arg2;
- (struct NSArray *)seqForward:(id)arg1 input:(struct NSArray *)arg2 dataBatch:(id)arg3 runInference:(_Bool)arg4;
- (struct NSArray *)seqBackward:(id)arg1 dataBatch:(id)arg2 inputGradient:(struct NSArray *)arg3;
- (id)initWithName:(id)arg1 inputLength:(unsigned long long)arg2 inputChannels:(unsigned long long)arg3 dropoutRatio:(float)arg4;
- (struct NSArray *)forward:(id)arg1 input:(struct NSArray *)arg2 index:(id)arg3 runInference:(_Bool)arg4;
- (struct NSArray *)backward:(id)arg1 index:(id)arg2 inputGradient:(struct NSArray *)arg3;
- (id)initWithName:(id)arg1 previousLayer:(id)arg2 dropoutRatio:(float)arg3;

@end
