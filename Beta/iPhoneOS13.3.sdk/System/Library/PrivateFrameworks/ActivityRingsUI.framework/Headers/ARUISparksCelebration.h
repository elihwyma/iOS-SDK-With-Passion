/*
 Image: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
 */

#import <ActivityRingsUI/ARUICelebration.h>

@class ARUIAngularSparkEmitter, CAMediaTimingFunction, MISSING_TYPE, NSArray;

@protocol MTLBuffer;

__attribute__((visibility("hidden")))
@interface ARUISparksCelebration : ARUICelebration

{
    float _angularRotationDuration;
    float _angularTime;
    float _angularAlpha;
    float _angularAlphaAnimationBeginTime;
    float _angularAlphaAnimationEndTime;
    float _angularAlphaFadeFraction;
    CAMediaTimingFunction *_angularAlphaTimingFunction;
    CAMediaTimingFunction *_angularTimingFunction;
    ARUIAngularSparkEmitter *_angularSparkEmitter;
    NSArray *_kineticSparkEmitters;
    CAMediaTimingFunction *_kineticEasingFunction;
    float _kineticEasingTarget;
    unsigned long long _numberOfEmitters;
    unsigned long long _tangentalParticleCount;
    unsigned long long _burstParticleCount;
    float _completionTime;
    CDUnknownBlockType _completion;
    id <MTLBuffer> _angularVertexBuffer;
    id <MTLBuffer> _angularIndexBuffer;
    unsigned long long _numAngularIndicies;
    unsigned long long _angularParticleCount;
    id <MTLBuffer> _angularSparks;
    id <MTLBuffer> _kineticVertexBuffer;
    id <MTLBuffer> _kineticIndexBuffer;
    unsigned long long _numKineticIndicies;
    unsigned long long _kineticParticleCount;
    id <MTLBuffer> _kineticSparks;
    id <MTLBuffer> _uniformsBuffer;
}

@property (nonatomic, readonly) id <MTLBuffer> angularVertexBuffer;
@property (nonatomic, readonly) id <MTLBuffer> angularIndexBuffer;
@property (nonatomic, readonly) unsigned long long numAngularIndicies;
@property (nonatomic, readonly) unsigned long long angularParticleCount;
@property (nonatomic, readonly) id <MTLBuffer> angularSparks;
@property (nonatomic, readonly) float angularTime;
@property (nonatomic, readonly) id <MTLBuffer> kineticVertexBuffer;
@property (nonatomic, readonly) id <MTLBuffer> kineticIndexBuffer;
@property (nonatomic, readonly) unsigned long long numKineticIndicies;
@property (nonatomic, readonly) unsigned long long kineticParticleCount;
@property (nonatomic, readonly) id <MTLBuffer> kineticSparks;
@property (nonatomic, readonly) id <MTLBuffer> uniformsBuffer;

- (id)init;
- (unsigned long long)type;
- (void)endWithCompletion:(CDUnknownBlockType)arg1;
- (void)update:(double)arg1;
- (void)_generateAngularSparks;
- (void)_setupKineticSparkEmitters;
- (void)_applyAngularSparkUpdate:(id)arg1;
- (void)_applyKineticSparkUpdate:(id)arg1;
- (void)setTopColor: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)screenBlendedColorFromColor:(unsigned long long)arg1 numberOfIterations: /* Error: Ran out of types for this method. */;
- (void *)angularTimeBytes;
- (void *)angularAlphaBytes;
- (unsigned long long)uniformsBufferOffsetForType:(unsigned long long)arg1;
- (void)storeCelebration:(id)arg1 withRing:(id)arg2;

@end
