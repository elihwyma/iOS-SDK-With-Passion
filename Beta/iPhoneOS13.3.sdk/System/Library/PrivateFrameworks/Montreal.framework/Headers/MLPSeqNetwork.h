/*
 Image: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
 */

#import <Montreal/MLPNetwork.h>

@class MLPLearningRateDecayHandler, NSString;

@interface MLPSeqNetwork : MLPNetwork

{
    MLPLearningRateDecayHandler *_seqLearningRateDecayHandler;
}

@property (retain) MLPLearningRateDecayHandler *seqLearningRateDecayHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithLayers:(id)arg1;
- (void)setOptimizerParams:(id)arg1;
- (void)createLayerKernels;
- (void)runTraining:(id)arg1 databatch:(id)arg2 iteration:(unsigned long long)arg3 lossCallback:(CDUnknownBlockType)arg4 semaphore:(id)arg5;
- (unsigned long long)runInference:(id)arg1 databatch:(id)arg2 inferredResult:(id)arg3 semaphore:(id)arg4;
- (id)computeInference:(id)arg1;
- (float)computeLoss:(id)arg1;
- (void)decayHandler:(id)arg1 didUpdateLearningRate:(float)arg2;

@end
