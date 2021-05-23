/*
 Image: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
 */

#import <Montreal/MLPOptimizer.h>

@class MPSVector;

@interface MLPOptimizerAdam : MLPOptimizer

{
    MPSVector *_momentum;
    MPSVector *_velocity;
}

@property (retain) MPSVector *momentum;
@property (retain) MPSVector *velocity;

- (id)initWithNetwork:(id)arg1 momentum:(CDUnknownBlockType)arg2 velocity:(CDUnknownBlockType)arg3;
- (void)encodeToCommandBuffer:(id)arg1 inputGradientVector:(id)arg2 inputValuesVector:(id)arg3;

@end
