/*
 Image: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
 */

#import <Foundation/NSObject.h>

@interface SUICAudioLevelSmoother : NSObject

{
    float _minimumPower;
    float _maximumPower;
    long long _historyLength;
    long long _samplesSinceLastCleared;
    float *_runningPowerLevels;
    unsigned int _powerPointer;
    float _previousLevel;
    float _attackVelocity;
    float _decayVelocity;
    _Bool _usesExponentialCurve;
    _Bool _usesAttackAndDecaySpeed;
    float _attackSpeed;
    float _decaySpeed;
    float _baseValue;
    float _exponentMultiplier;
}

@property (nonatomic, readonly) _Bool usesExponentialCurve;
@property (nonatomic, readonly) _Bool usesAttackAndDecaySpeed;
@property (nonatomic) float minimumPower;
@property (nonatomic) float maximumPower;
@property (nonatomic) float attackSpeed;
@property (nonatomic) float decaySpeed;
@property (nonatomic) float baseValue;
@property (nonatomic) float exponentMultiplier;

- (void)dealloc;
- (void)clearHistory;
- (id)initWithMinimumPower:(float)arg1 maximumPower:(float)arg2 historyLength:(long long)arg3 attackSpeed:(float)arg4 decaySpeed:(float)arg5;
- (float)smoothedLevelForMicPower:(float)arg1;
- (id)_initWithHistoryLength:(long long)arg1;
- (id)initWithMinimumPower:(float)arg1 maximumPower:(float)arg2 historyLength:(long long)arg3;
- (float)_updateMedianWithNewValue:(float)arg1;
- (id)initWithBaseValue:(float)arg1 exponentMultiplier:(float)arg2 historyLength:(long long)arg3;

@end
