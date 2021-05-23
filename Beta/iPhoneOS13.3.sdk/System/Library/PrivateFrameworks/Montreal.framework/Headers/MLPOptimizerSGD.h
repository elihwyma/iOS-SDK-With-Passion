/*
 Image: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
 */

#import <Montreal/MLPOptimizer.h>

@class MPSVector;

@interface MLPOptimizerSGD : MLPOptimizer

{
    MPSVector *_momentum;
}

@property (retain) MPSVector *momentum;

- (void)encodeToCommandBuffer:(id)arg1 inputGradientVector:(id)arg2 inputValuesVector:(id)arg3;
- (void)updateLearningRate:(float)arg1;
- (id)initWithNetwork:(id)arg1 momentum:(CDUnknownBlockType)arg2;

@end
