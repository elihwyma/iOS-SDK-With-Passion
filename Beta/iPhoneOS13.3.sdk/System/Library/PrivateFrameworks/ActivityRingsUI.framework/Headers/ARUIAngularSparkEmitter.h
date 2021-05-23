/*
 Image: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface ARUIAngularSparkEmitter : NSObject

{
    long long _particleCount;
    float _particleLength;
    float _rotationDuration;
    float _angularVelocity;
    MISSING_TYPE *_startPosition;
    float _spawnRate;
    float _midScalePoint;
    MISSING_TYPE *_thickness;
    MISSING_TYPE *_velocityNoise;
    float _firstWindowFinalBirthTime;
    float _firstWindowFinalDeathTime;
    float _secondWindowFinalBirthTime;
    float _secondWindowFinalDeathTime;
}

- (id)updateForTime:(float)arg1;
- (id)initWithParticleCount:(unsigned long long)arg1 rotationDuration:(float)arg2 particleLength:(float)arg3;
- (id)generateSparks;
- (id)updateWithStartTime:(float)arg1 particleCount:(unsigned long long)arg2 bufferOffset:(unsigned long long)arg3;

@end
