/*
 Image: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE, NSString;

__attribute__((visibility("hidden")))
@interface ARUIBurstSparkEmitter : NSObject

{
    float _angle;
    float _emitterStartTime;
    float _steadyStateStartTime;
    unsigned long long _particleCount;
    unsigned long long _bufferOffset;
    MISSING_TYPE *_position;
    MISSING_TYPE *_burstVector;
    MISSING_TYPE *_burstSwing;
    MISSING_TYPE *_omnidirectionalBurstSwing;
    float _initialBurstStartTimeSkewFactorMultiplier;
    unsigned long long _maximumBurstCount;
    float _burstGravity;
    float _initialBurstRate;
    float _steadyStateBurstRate;
    MISSING_TYPE *_burstVelocity;
    MISSING_TYPE *_burstSizeX;
    MISSING_TYPE *_burstSizeY;
    MISSING_TYPE *_burstLifeSpan;
    MISSING_TYPE *_burstAlpha;
    float _firstWindowFinalBirthTime;
    float _firstWindowFinalDeathTime;
    float _secondWindowFinalBirthTime;
    float _secondWindowFinalDeathTime;
    _Bool _omnidirectionalBurst;
    float _angularRotationTime;
}

@property (nonatomic) _Bool omnidirectionalBurst;
@property (nonatomic) float emitterStartTime;
@property (nonatomic) float angularRotationTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (float)angle;
- (void)setAngle:(float)arg1;
- (unsigned long long)bufferOffset;
- (void)setParticleCount:(unsigned long long)arg1;
- (unsigned long long)particleCount;
- (void)setBufferOffset:(unsigned long long)arg1;
- (id)updateForTime:(float)arg1;
- (id)generateSparks;
- (void)_updateSteadyStateStartTime;
- (unsigned long long)initialBurstCount;
- (float)initialBurstRate;
- (id)updateWithCount:(unsigned long long)arg1 bufferOffset:(unsigned long long)arg2 length:(float)arg3 startTime:(float)arg4 startTimeSkewFactor:(float)arg5 directionalVector:directionalSwing: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)_rotationSwing:(float)arg1 forPercent: /* Error: Ran out of types for this method. */;

@end
