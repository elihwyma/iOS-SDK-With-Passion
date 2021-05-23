/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKPrideSplinesQuad.h>

@class MISSING_TYPE;

@interface NTKPrideLinearQuad : NTKPrideSplinesQuad

{
    MISSING_TYPE *_controlPointsDampingCoefficients[12];
    struct {
        MISSING_TYPE *_field1[12];
        float _field2[12];
        MISSING_TYPE *_field3[12];
        id _field4;
        float _field5;
        float _field6;
        float _field7;
        float _field8;
        int _field9;
        int _field10;
        int _field11;
    } *_perSplineData;
    float _aspectRatio;
    float _vignetteAmount;
    float _displayMode;
    float _currentFade;
    _Bool _fading;
    float _globalTouchTime;
    _Bool _paused;
    _Bool _useXRsRGB;
    unsigned long long _currentStyle;
}

- (void)dealloc;
- (void)prepareWristRaiseAnimation;
- (void)performWristRaiseAnimation;
- (void)handleOrdinaryScreenWake;
- (id)renderPipelineManager;
- (id)renderPipelineName;
- (id)vertexShaderName;
- (_Bool)preSemaphoreComputeForTime:(double)arg1;
- (void)handleScreenOff;
- (void)_computePigeonLocationsForPigeons:(int)arg1 inHoles:(int)arg2 pigeonIndices:(int **)arg3 pigeonToHole:(int **)arg4 pigeonsPerHole:(int **)arg5;
- (void)initializePerSplineData;
- (void)_generateSplinePositions;
- (void)_generateSplineColors;
- (void)_generateControlPointDampingCoefficients;
- (void)clearWaves;
- (_Bool)shouldForceRender;
- (void)processSpline:(int)arg1;
- (int)numSplines;
- (int)numControlPointsPerSpline;
- (int)numVertsForSpline:(int)arg1;
- (float)interpolationStepSizeForSpline:(int)arg1;
- (float)vignetteAmount;
- (id)generateVignetteTextureData;
- (void)generateControlPointsForSpline:(int)arg1;
- (id)initWithDevice:(id)arg1 useXRsRGB:(_Bool)arg2;
- (void)applyTransitionFromBandedToFabricWithFraction:(double)arg1;
- (void)setBandedMode;
- (void)setFabricMode;
- (float)globalAmplitudeForTime:(double)arg1;
- (float)computeAmplitudeForControlPoint:(int)arg1 inSpline:(int)arg2 atTime:(double)arg3;
- (void)startWavesAtTime:(double)arg1;
- (void)setAmplitude:(float)arg1 forControlPoint:(int)arg2 ofSpline:(int)arg3;
- (float)ampltiudeForControlPoint:(int)arg1 ofSpline:(int)arg2;
- (struct *)noiseConfiguration;
- (MISSING_TYPE *)noiseSamplePositionForControlPoint:(int)arg1 inSpline:(int)arg2;
- (void)setNoise:(int)arg1 forControlPoint:(int)arg2 inSpline: /* Error: Ran out of types for this method. */;
- (CDUnknownBlockType)getNTKPrideSplineDefinitionFiller;

@end
