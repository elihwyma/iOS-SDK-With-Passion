/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class ARCoachingAnimTime, ARCoachingBasicSpring, ARCoachingDeviceController, ARCoachingDotsRenderer, ARCoachingGlyphState, ARCoachingMetalSplineData, ARCoachingQuaternionSpring, ARCoachingSpringDouble3, ARCoachingStateSpring, CALayer, MISSING_TYPE, NSString;

@protocol MTLComputePipelineState, MTLDevice, MTLRenderPipelineState, MTLTexture;

@interface ARCoachingGlyphRenderer : NSObject

{
    id <MTLDevice> _device;
    unsigned long long _pixelFormat;
    id <MTLComputePipelineState> _computePipelineState;
    id <MTLRenderPipelineState> _postTessellationPipelineState;
    id <MTLTexture> _msaaTex;
    int _sampleCount;
    CALayer *_layer;
    float _edgeFactor;
    float _insideFactor;
    ARCoachingGlyphState *_state;
    float _strokeWeight;
    ARCoachingAnimTime *_time;
    ARCoachingQuaternionSpring *_rotationSpring;
    ARCoachingSpringDouble3 *_scaleSpring;
    ARCoachingSpringDouble3 *_topPlaneTranslationSpring;
    ARCoachingSpringDouble3 *_bottomPlaneTranslationSpring;
    ARCoachingStateSpring *_cubeResolveSpring;
    ARCoachingStateSpring *_planeResolveSpring;
    ARCoachingStateSpring *_verticalResolvingSpring;
    ARCoachingStateSpring *_alphaSpring;
    ARCoachingBasicSpring *_orientationSpring;
    CDStruct_0e8a9a91 _rotation;
    struct {
        double angle;
        MISSING_TYPE *axis;
    } _angularVelocity;
    CDStruct_14d5dc5e _R;
    CDStruct_14d5dc5e _MVP;
    CDStruct_14d5dc5e _mvp_ortho;
    CDStruct_14d5dc5e _mvp_persp;
    ARCoachingMetalSplineData *_splineData;
    ARCoachingDotsRenderer *_dotsRenderer;
    ARCoachingDeviceController *_deviceController;
    ARCoachingDeviceController *_parallaxDeviceController;
    struct CGSize _lastDrawableSize;
    _Bool _dirty_tesselation_factors;
    float _rotationAngleY;
    float _a_vel;
}

@property (nonatomic, readonly) double currentAnimationTime;
@property (nonatomic, readonly) ARCoachingGlyphState *state;
@property (nonatomic) float rotationAngleY;
@property (nonatomic) float a_vel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)setOrientationAngle:(float)arg1;
- (id)initWithLayer:(id)arg1 device:(id)arg2 pixelFormat:(unsigned long long)arg3 sampleCount:(int)arg4 deviceMaskImage:(id)arg5;
- (void)resetAnimationTime:(double)arg1;
- (void)resizeIfNeeded:(id)arg1;
- (void)drawWithTimeDelta:(double)arg1 drawable:(id)arg2 commandBuffer:(id)arg3;
- (void)snapStateChanged;
- (void)quaternionTargetChanged;
- (void)scaleTargetChanged;
- (void)topPlaneTranslationTargetChanged;
- (void)bottomPlaneTranslationTargetChanged;
- (void)stepSprings:(double)arg1;
- (void)updateAngularVelocity;
- (void)computeRotation:(double)arg1;
- (void)computeTesselationFactorsForCommandBuffer:(id)arg1;
- (void)renderPostTessellationInDrawable:(id)arg1 withCommandBuffer:(id)arg2;
- (void)generateTexturesWithSize:(struct CGSize)arg1;
- (void)resetData;
- (void)resetSprings;
- (void)restartAnimation;

@end
