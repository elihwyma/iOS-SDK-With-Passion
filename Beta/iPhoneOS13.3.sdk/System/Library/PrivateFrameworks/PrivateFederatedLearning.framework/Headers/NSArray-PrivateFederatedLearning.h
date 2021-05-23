/*
 Image: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
 */

#import <Foundation/NSArray.h>

@interface NSArray (PrivateFederatedLearning)

+ (void)flatten:(id)arg1 result:(id)arg2;
+ (void)pfl_readShape:(id)arg1 result:(id)arg2;
+ (id)pfl_reshape:(id)arg1 start:(unsigned long long)arg2 cuts:(id)arg3;

- (id)pfl_mutableArrayMultipliedWithScale:(double)arg1;
- (double)pfl_innerProduct:(id)arg1;
- (id)pfl_minus:(id)arg1;
- (double)pfl_l2;
- (id)pfl_plus:(id)arg1;
- (id)pfl_unitVectorAndL2;
- (id)pfl_readShape;
- (id)pfl_reshapeWithShape:(id)arg1;
- (id)pfl_flatten;

@end
