/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKPrideMetalQuad.h>

@class MISSING_TYPE, NSObject, NTKPrideTouchCrownHandler;

@protocol MTLBuffer, MTLTexture, OS_dispatch_queue;

@interface NTKPrideSplinesQuad : NTKPrideMetalQuad

{
    NTKPrideTouchCrownHandler *_touchCrownHandler;
    _Bool _paused;
    _Bool _forceRenderSticky;
    _Bool _forceRenderOnce;
    _Bool _startWavesAtNextRender;
    _Bool _controlPointsNeedUpdate;
    id <MTLBuffer> _mtlSplinesBuffers[3];
    unsigned short _currentBufferIndex;
    int _mtlSamplePositionBufferWidth;
    id <MTLTexture> _mtlSamplePositionTexture;
    id <MTLTexture> _mtlVignetteTex;
    int _mtlComputeBufferWidth;
    id <MTLBuffer> _mtlComputeInputBuffer;
    id <MTLTexture> _mtlComputeInputTexture;
    id <MTLTexture> _mtlComputeOutputTexture;
    MISSING_TYPE *_size;
    NSObject<OS_dispatch_queue> *_highPriorityQueue;
    struct CGSize _frameBufferSize;
    _Bool _snapshotting;
    float _fadeMultiplier;
    float _amplitudeMultiplier;
}

@property (readonly) NTKPrideTouchCrownHandler *touchCrownHandler;
@property (readonly) id <MTLBuffer> currentSplinesBuffer;
@property (readonly) id <MTLBuffer> currentComputeBuffer;
@property (readonly) int currentComputeBufferWidth;
@property (readonly) NSObject<OS_dispatch_queue> *highPriorityQueue;
@property (nonatomic) float fadeMultiplier;
@property (nonatomic) float amplitudeMultiplier;

- (void)dealloc;
- (id)snapshot;
- (void)handleSingleTap:(id)arg1;
- (void)renderWithEncoder:(id)arg1;
- (id)computeShaderName;
- (id)fragmentShaderName;
- (void)loadMetalTexturesAndBuffersWithDevice:(id)arg1;
- (void)computeWithEncoder:(id)arg1 pipelineState:(id)arg2;
- (_Bool)preSemaphoreComputeForTime:(double)arg1;
- (_Bool)postSemaphoreComputeForTime:(double)arg1;
- (id)initWithDevice:(id)arg1 touchCrownHandler:(id)arg2;
- (void)clearWaves;
- (void)setControlPointsNeedUpdate;
- (void)startWavesAtNextRender;
- (float)combinedAmplitudeForControlPointAtPosition:(float)arg1 currentTime:(float)arg2 waveSpeed: /* Error: Ran out of types for this method. */;
- (_Bool)shouldForceRender;
- (int)numSplines;
- (int)numControlPointsPerSpline;
- (int)numVertsForSpline:(int)arg1;
- (float)interpolationStepSizeForSpline:(int)arg1;
- (float)vignetteAmount;
- (id)generateVignetteTextureData;
- (void)generateControlPointsForSpline:(int)arg1;
- (float)globalAmplitudeForTime:(double)arg1;
- (float)computeAmplitudeForControlPoint:(int)arg1 inSpline:(int)arg2 atTime:(double)arg3;
- (void)startWavesAtTime:(double)arg1;
- (void)setAmplitude:(float)arg1 forControlPoint:(int)arg2 ofSpline:(int)arg3;
- (float)ampltiudeForControlPoint:(int)arg1 ofSpline:(int)arg2;
- (struct *)noiseConfiguration;
- (MISSING_TYPE *)noiseSamplePositionForControlPoint:(int)arg1 inSpline:(int)arg2;
- (void)setNoise:(int)arg1 forControlPoint:(int)arg2 inSpline: /* Error: Ran out of types for this method. */;
- (CDUnknownBlockType)getNTKPrideSplineDefinitionFiller;
- (_Bool)forceRender;
- (void)setIgnoresStrumAndTap:(_Bool)arg1;
- (void)forceRenderOnce;
- (id)snapshotWithSize:(struct CGSize)arg1 scale:(double)arg2;
- (id)snapshotWithScale:(double)arg1;
- (void)strumToOffset:(double)arg1 withVelocity:(double)arg2;
- (void)setPreviousCrownIndex:(int)arg1;
- (int)maxVertsPerSpline;
- (id)_generateInterpolationPositions;

@end
