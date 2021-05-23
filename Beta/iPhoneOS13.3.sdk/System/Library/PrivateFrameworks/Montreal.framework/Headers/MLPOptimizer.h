/*
 Image: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
 */

#import <NSObject.h>

@class MLPNetwork, MPSNNOptimizer;

@interface MLPOptimizer : NSObject

{
    MPSNNOptimizer *_mpsOptimizer;
    MLPNetwork *_network;
}

@property (readonly) MPSNNOptimizer *mpsOptimizer;
@property (weak, readonly) MLPNetwork *network;

+ (id)optimizerWithNetwork:(id)arg1 momentum:(CDUnknownBlockType)arg2 velocity:(CDUnknownBlockType)arg3;

- (id)initWithNetwork:(id)arg1 mpsOptimizer:(id)arg2;
- (void)encodeToCommandBuffer:(id)arg1 inputGradientVector:(id)arg2 inputValuesVector:(id)arg3;
- (void)updateLearningRate:(float)arg1;
- (void)encodeToCommandBuffer:(id)arg1 inputGradientMatrix:(id)arg2 inputValuesMatrix:(id)arg3;

@end
