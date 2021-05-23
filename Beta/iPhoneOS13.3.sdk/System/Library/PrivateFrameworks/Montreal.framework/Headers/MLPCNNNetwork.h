/*
 Image: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
 */

#import <Montreal/MLPNetwork.h>

@interface MLPCNNNetwork : MLPNetwork

- (id)initWithLayers:(id)arg1;
- (void)setOptimizerParams:(id)arg1;
- (void)createLayerKernels;
- (void)runTraining:(id)arg1 databatch:(id)arg2 iteration:(unsigned long long)arg3 lossCallback:(CDUnknownBlockType)arg4 semaphore:(id)arg5;
- (unsigned long long)runInference:(id)arg1 databatch:(id)arg2 inferredResult:(id)arg3 semaphore:(id)arg4;
- (id)computeInference:(id)arg1;
- (float)computeLoss:(id)arg1;

@end
