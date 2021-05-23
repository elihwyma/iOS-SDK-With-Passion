/*
 Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

#import <Espresso/ETOptimizerDef.h>

@interface ETOptimizerDefSGD : ETOptimizerDef

{
    float _lr;
    float _lr_decay_epoch;
    float _momentum;
    float _weight_decay;
}

@property float lr;
@property float lr_decay_epoch;
@property float momentum;
@property float weight_decay;

- (id)init;

@end
