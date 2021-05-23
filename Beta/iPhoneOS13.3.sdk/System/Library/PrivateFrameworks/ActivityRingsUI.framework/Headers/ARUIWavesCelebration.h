/*
 Image: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
 */

#import <ActivityRingsUI/ARUICelebration.h>

@class CAMediaTimingFunction;

@protocol MTLBuffer;

__attribute__((visibility("hidden")))
@interface ARUIWavesCelebration : ARUICelebration

{
    _Bool _active;
    CAMediaTimingFunction *_timingFunction;
    float _transitionDuration;
    float _completionBeginTime;
    float _completionEndTime;
    CDUnknownBlockType _completion;
    float _revealPercent;
    unsigned int _waveCount;
    unsigned int _pointCount;
    unsigned int _computeCount;
    id <MTLBuffer> _waveVertexBuffer;
    id <MTLBuffer> _waveIndexBuffer;
    unsigned long long _numWaveIndicies;
    id <MTLBuffer> _waveComputeUniforms;
    id <MTLBuffer> _wavePoints;
    id <MTLBuffer> _waveFragmentUniforms;
}

@property (nonatomic, readonly) id <MTLBuffer> waveVertexBuffer;
@property (nonatomic, readonly) id <MTLBuffer> waveIndexBuffer;
@property (nonatomic, readonly) unsigned long long numWaveIndicies;
@property (nonatomic, readonly) float revealPercent;
@property (nonatomic, readonly) id <MTLBuffer> waveComputeUniforms;
@property (nonatomic, readonly) unsigned int waveCount;
@property (nonatomic, readonly) unsigned int pointCount;
@property (nonatomic, readonly) unsigned int computeCount;
@property (nonatomic, readonly) id <MTLBuffer> wavePoints;
@property (nonatomic, readonly) id <MTLBuffer> waveFragmentUniforms;

- (id)init;
- (unsigned long long)type;
- (void)endWithCompletion:(CDUnknownBlockType)arg1;
- (void)update:(double)arg1;
- (void)setTopColor: /* Error: Ran out of types for this method. */;
- (void)storeCelebration:(id)arg1 withRing:(id)arg2;
- (void)setBottomColor: /* Error: Ran out of types for this method. */;
- (void)setContrastColor: /* Error: Ran out of types for this method. */;
- (void)_setupWavePoints;
- (void)_updateComputeUniforms;
- (unsigned long long)waveComputeUniformsOffsetForType:(unsigned long long)arg1;
- (unsigned long long)wavePointsOffsetForWaveAtIndex:(unsigned int)arg1;
- (unsigned long long)waveFragmentOffsetForWaveAtIndex:(unsigned int)arg1;

@end
