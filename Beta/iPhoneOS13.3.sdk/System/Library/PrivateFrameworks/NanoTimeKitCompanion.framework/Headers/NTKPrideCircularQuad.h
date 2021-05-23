/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKPrideSplinesQuad.h>

@class MISSING_TYPE;

@interface NTKPrideCircularQuad : NTKPrideSplinesQuad

{
    struct {
        MISSING_TYPE *_field1[32];
        float _field2[32];
        MISSING_TYPE *_field3[32];
        id _field4;
        float _field5;
        float _field6;
        float _field7;
        unsigned short _field8;
    } *_perSplineData;
    float _displayMode;
    float _currentFade;
    _Bool _fading;
    float _globalTouchTime;
    _Bool _paused;
    unsigned long long _currentStyle;
    float _velocity;
    CDStruct_1a7159bc _currentColorConfig;
    _Bool _useXRsRGB;
    float _complicationFade;
    CDUnknownBlockType _complicationAlphaCallback;
    double _splineColorTransitionFraction;
}

@property (copy, nonatomic) CDUnknownBlockType complicationAlphaCallback;
@property (nonatomic) double splineColorTransitionFraction;

- (void)dealloc;
- (void)prepareWristRaiseAnimation;
- (void)performWristRaiseAnimation;
- (void)prepareForZoom;
- (void)applyToForegroundZoomFraction:(double)arg1 faceScale:(double)arg2;
- (void)handleOrdinaryScreenWake;
- (id)renderPipelineManager;
- (id)renderPipelineName;
- (id)vertexShaderName;
- (_Bool)preSemaphoreComputeForTime:(double)arg1;
- (_Bool)postSemaphoreComputeForTime:(double)arg1;
- (void)handleScreenOff;
- (void)initializePerSplineData;
- (void)_generateControlPointDampingCoefficients;
- (void)clearWaves;
- (_Bool)shouldForceRender;
- (void)processSpline:(int)arg1;
- (int)numSplines;
- (int)numControlPointsPerSpline;
- (int)numVertsForSpline:(int)arg1;
- (float)interpolationStepSizeForSpline:(int)arg1;
- (id)generateVignetteTextureData;
- (void)generateControlPointsForSpline:(int)arg1;
- (id)initWithDevice:(id)arg1 useXRsRGB:(_Bool)arg2;
- (float)globalAmplitudeForTime:(double)arg1;
- (float)computeAmplitudeForControlPoint:(int)arg1 inSpline:(int)arg2 atTime:(double)arg3;
- (void)startWavesAtTime:(double)arg1;
- (void)setAmplitude:(float)arg1 forControlPoint:(int)arg2 ofSpline:(int)arg3;
- (float)ampltiudeForControlPoint:(int)arg1 ofSpline:(int)arg2;
- (struct *)noiseConfiguration;
- (MISSING_TYPE *)noiseSamplePositionForControlPoint:(int)arg1 inSpline:(int)arg2;
- (void)setNoise:(int)arg1 forControlPoint:(int)arg2 inSpline: /* Error: Ran out of types for this method. */;
- (CDUnknownBlockType)getNTKPrideSplineDefinitionFiller;
- (id)splineColorAtIndex:(int)arg1;
- (void)setDefaultSplineColors;
- (_Bool)willConsumeTouch:(id)arg1;
- (void)applyTransitionFromDialToFullScreenWithFraction:(double)arg1;
- (void)setFullscreenMode;
- (void)setDialMode;
- (void)cleanupAfterAZoom;
- (void)setColorConfig:(CDStruct_1a7159bc)arg1;
- (CDStruct_1a7159bc)advanceConfig:(CDStruct_1a7159bc)arg1;
- (CDStruct_1a7159bc)generateNextRandomConfigFromConfig:(CDStruct_1a7159bc)arg1;
- (void)_colorSequenceForStartIndex:(int)arg1 reverseDirection:(_Bool)arg2 colorSequence:(CDUnknownBlockType)arg3;
- (void)randomizeSplineColors;
- (float)currentSplineWidth;
- (CDStruct_1a7159bc)advanceCurrentConfig;
- (CDStruct_1a7159bc)generateNextRandomConfigFromCurrentConfig;

@end
