/*
 Image: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE, NSString;

__attribute__((visibility("hidden")))
@interface ARUITangentalSparkEmitter : NSObject

{
    float _angle;
    unsigned long long _particleCount;
    unsigned long long _bufferOffset;
    MISSING_TYPE *_position;
    MISSING_TYPE *_tangent;
    float _tangentalBirthRate;
    float _tangentalGravity;
    MISSING_TYPE *_tangentalVelocity;
    MISSING_TYPE *_tangentalSizeX;
    MISSING_TYPE *_tangentalSizeY;
    MISSING_TYPE *_tangentalLifeSpan;
    float _firstWindowFinalBirthTime;
    float _firstWindowFinalDeathTime;
    float _secondWindowFinalBirthTime;
    float _secondWindowFinalDeathTime;
    float _emitterStartTime;
}

@property (nonatomic) float emitterStartTime;
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
- (id)_updateWithStartTime:(float)arg1 particleCount:(unsigned long long)arg2 bufferOffset:(unsigned long long)arg3;

@end
