/*
 Image: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
 */

#import <NSObject.h>

@protocol MLPLearningRateDecayHandlerDelegate;

@interface MLPLearningRateDecayHandler : NSObject

{
    _Bool _stairCase;
    float _learningRate;
    float _decayRate;
    float _decayedLearningRate;
    unsigned long long _decaySteps;
    unsigned long long _globalSteps;
    id <MLPLearningRateDecayHandlerDelegate> _delegate;
}

@property (readonly) float learningRate;
@property (readonly) unsigned long long decaySteps;
@property (readonly) float decayRate;
@property (readonly) _Bool stairCase;
@property float decayedLearningRate;
@property unsigned long long globalSteps;
@property (weak) id <MLPLearningRateDecayHandlerDelegate> delegate;

- (id)initWithLearningRate:(float)arg1 decaySteps:(unsigned long long)arg2 decayRate:(float)arg3 stairCase:(_Bool)arg4;
- (void)updateGlobalStep;

@end
